/*
 * Copyright (C) 2003 Red Hat, Inc.
 *
 * This is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Library General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* The interfaces in this file are subject to change at any time. */

#ifndef vte_vtefc_h_included
#define vte_vtefc_h_included

#ident "$Id$"

#include <fontconfig/fontconfig.h>
#include <pango/pango.h>
#include <glib.h>

G_BEGIN_DECLS

gboolean
_vte_fc_patterns_from_pango_font_desc(const PangoFontDescription *font_desc,
				      GArray *pattern_array);

void _vte_fc_connect_settings_changes(GtkWidget *widget, GCallback *changed_cb);
void _vte_fc_disconnect_settings_changes(GtkWidget *widget,
					 GCallback *changed_cb);

G_END_DECLS

#endif
