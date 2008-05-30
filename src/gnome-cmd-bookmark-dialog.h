/*
    GNOME Commander - A GNOME based file manager
    Copyright (C) 2001-2006 Marcus Bjurman

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
*/
#ifndef __GNOME_CMD_BOOKMARK_DIALOG_H__
#define __GNOME_CMD_BOOKMARK_DIALOG_H__

#include "gnome-cmd-types.h"

#define GNOME_CMD_BOOKMARK_DIALOG(obj) \
    GTK_CHECK_CAST (obj, gnome_cmd_bookmark_dialog_get_type (), GnomeCmdBookmarkDialog)
#define GNOME_CMD_BOOKMARK_DIALOG_CLASS(klass) \
    GTK_CHECK_CLASS_CAST (klass, gnome_cmd_bookmark_dialog_get_type (), GnomeCmdBookmarkDialogClass)
#define GNOME_CMD_IS_BOOKMARK_DIALOG(obj) \
    GTK_CHECK_TYPE (obj, gnome_cmd_bookmark_dialog_get_type ())


typedef struct _GnomeCmdBookmarkDialog GnomeCmdBookmarkDialog;
typedef struct _GnomeCmdBookmarkDialogPrivate GnomeCmdBookmarkDialogPrivate;
typedef struct _GnomeCmdBookmarkDialogClass GnomeCmdBookmarkDialogClass;


struct _GnomeCmdBookmarkDialog
{
    GnomeCmdDialog parent;
    GnomeCmdBookmarkDialogPrivate *priv;
};


struct _GnomeCmdBookmarkDialogClass
{
    GnomeCmdDialogClass parent_class;
};

#define BOOKMARK_DIALOG_NUM_COLUMNS 3

extern guint bookmark_dialog_default_column_width[BOOKMARK_DIALOG_NUM_COLUMNS];


GtkWidget *gnome_cmd_bookmark_dialog_new (void);

GtkType gnome_cmd_bookmark_dialog_get_type (void);

void gnome_cmd_bookmark_add_current (void);

void gnome_cmd_bookmark_goto (GnomeCmdBookmark *bookmark);

#endif // __GNOME_CMD_BOOKMARK_DIALOG_H__
