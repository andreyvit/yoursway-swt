/*******************************************************************************
* Copyright (c) 2000, 2008 IBM Corporation and others. All rights reserved.
* The contents of this file are made available under the terms
* of the GNU Lesser General Public License (LGPL) Version 2.1 that
* accompanies this distribution (lgpl-v21.txt).  The LGPL is also
* available at http://www.gnu.org/licenses/lgpl.html.  If the version
* of the LGPL at http://www.gnu.org is different to the version of
* the LGPL accompanying this distribution and there is any conflict
* between the two license versions, the terms of the LGPL accompanying
* this distribution shall govern.
* 
* Contributors:
*     IBM Corporation - initial API and implementation
*******************************************************************************/

/* Special sizeof's */
#define GPollFD_sizeof() sizeof(GPollFD)
#define GtkFixedClass_sizeof() sizeof(GtkFixedClass)
#define GtkCellRendererText_sizeof() sizeof(GtkCellRendererText)
#define GtkCellRendererTextClass_sizeof() sizeof(GtkCellRendererTextClass)
#define GtkCellRendererPixbuf_sizeof() sizeof(GtkCellRendererPixbuf)
#define GtkCellRendererPixbufClass_sizeof() sizeof(GtkCellRendererPixbufClass)
#define GtkCellRendererToggle_sizeof() sizeof(GtkCellRendererToggle)
#define GtkCellRendererToggleClass_sizeof() sizeof(GtkCellRendererToggleClass)
#define GtkTextIter_sizeof() sizeof(GtkTextIter)
#define GtkTreeIter_sizeof() sizeof(GtkTreeIter)

/* Libraries for dynamic loaded functions */
#define XRenderQueryExtension_LIB "libXrender.so"
#define XRenderQueryVersion_LIB "libXrender.so"
#define XRenderFindStandardFormat_LIB "libXrender.so"
#define XRenderFindVisualFormat_LIB "libXrender.so"
#define XRenderComposite_LIB "libXrender.so"
#define XRenderCreatePicture_LIB "libXrender.so"
#define XRenderFreePicture_LIB "libXrender.so"
#define XRenderSetPictureClipRectangles_LIB "libXrender.so"
#define XRenderSetPictureTransform_LIB "libXrender.so"
#define gtk_calendar_display_options_LIB "libgtk-x11-2.0.so.0"
#define gtk_calendar_get_date_LIB "libgtk-x11-2.0.so.0"
#define gtk_calendar_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_calendar_select_day_LIB "libgtk-x11-2.0.so.0"
#define gtk_calendar_select_month_LIB "libgtk-x11-2.0.so.0"
#define gtk_calendar_set_display_options_LIB "libgtk-x11-2.0.so.0"
#define gtk_cell_layout_set_attributes_LIB "libgtk-x11-2.0.so.0"
#define gtk_cell_layout_clear_LIB "libgtk-x11-2.0.so.0"
#define gtk_cell_layout_pack_start_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_entry_new_text_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_new_text_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_insert_text_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_remove_text_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_get_active_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_get_model_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_set_active_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_set_focus_on_click_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_popup_LIB "libgtk-x11-2.0.so.0"
#define gtk_combo_box_popdown_LIB "libgtk-x11-2.0.so.0"
#define gtk_entry_text_index_to_layout_index_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_add_filter_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_dialog_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_get_current_folder_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_get_filename_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_get_filenames_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_get_filter_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_set_current_folder_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_set_current_name_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_set_do_overwrite_confirmation_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_set_extra_widget_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_set_filename_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_set_filter_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_chooser_set_select_multiple_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_filter_add_pattern_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_filter_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_filter_get_name_LIB "libgtk-x11-2.0.so.0"
#define gtk_file_filter_set_name_LIB "libgtk-x11-2.0.so.0"
#define gtk_expander_get_expanded_LIB "libgtk-x11-2.0.so.0"
#define gtk_expander_get_label_widget_LIB "libgtk-x11-2.0.so.0"
#define gtk_expander_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_expander_set_expanded_LIB "libgtk-x11-2.0.so.0"
#define gtk_expander_set_label_LIB "libgtk-x11-2.0.so.0"
#define gtk_expander_set_label_widget_LIB "libgtk-x11-2.0.so.0"
#define gtk_label_set_line_wrap_mode_LIB "libgtk-x11-2.0.so.0"
#define gtk_menu_shell_set_take_focus_LIB "libgtk-x11-2.0.so.0"
#define gtk_window_set_keep_below_LIB "libgtk-x11-2.0.so.0"
#define gtk_tooltip_trigger_tooltip_query_LIB "libgtk-x11-2.0.so.0"
#define gtk_tree_selection_count_selected_rows_LIB "libgtk-x11-2.0.so.0"
#define gtk_tree_selection_get_selected_rows_LIB "libgtk-x11-2.0.so.0"
#define gtk_tree_view_column_cell_get_position_LIB "libgtk-x11-2.0.so.0"
#define gtk_entry_set_alignment_LIB "libgtk-x11-2.0.so.0"
#define gdk_cursor_new_from_pixbuf_LIB "libgdk-x11-2.0.so.0"
#define gdk_display_get_default_LIB "libgdk-x11-2.0.so.0"
#define gdk_display_supports_cursor_color_LIB "libgdk-x11-2.0.so.0"
#define gdk_draw_pixbuf_LIB "libgdk-x11-2.0.so.0"
#define gdk_pixbuf_save_to_buffer_LIB "libgdk-x11-2.0.so.0"
#define gdk_screen_get_default_LIB "libgdk-x11-2.0.so.0"
#define gdk_screen_get_monitor_at_point_LIB "libgdk-x11-2.0.so.0"
#define gdk_screen_get_monitor_at_window_LIB "libgdk-x11-2.0.so.0"
#define gdk_screen_get_monitor_geometry_LIB "libgdk-x11-2.0.so.0"
#define gdk_screen_get_n_monitors_LIB "libgdk-x11-2.0.so.0"
#define gdk_screen_get_number_LIB "libgdk-x11-2.0.so.0"
#define gtk_window_get_group_LIB "libgtk-x11-2.0.so.0"
#define gtk_window_get_opacity_LIB "libgtk-x11-2.0.so.0"
#define gdk_window_set_keep_above_LIB "libgdk-x11-2.0.so.0"
#define gdk_window_set_accept_focus_LIB "libgdk-x11-2.0.so.0"
#define gtk_window_set_opacity_LIB "libgtk-x11-2.0.so.0"
#define gtk_window_set_skip_taskbar_hint_LIB "libgtk-x11-2.0.so.0"
#define gtk_widget_is_composited_LIB "libgtk-x11-2.0.so.0"
#define gtk_widget_set_tooltip_text_LIB "libgtk-x11-2.0.so.0"
#define gdk_x11_screen_get_window_manager_name_LIB "libgdk-x11-2.0.so.0"
#define gdk_x11_screen_lookup_visual_LIB "libgdk-x11-2.0.so.0"

#define atk_object_add_relationship_LIB "libatk-1.0.so.0"
#define pango_attr_underline_color_new_LIB "libpango-1.0.so.0"
#define pango_attr_strikethrough_color_new_LIB "libpango-1.0.so.0"
#define pango_font_metrics_get_underline_thickness_LIB "libpango-1.0.so.0"
#define pango_font_metrics_get_underline_position_LIB "libpango-1.0.so.0"
#define pango_font_metrics_get_strikethrough_thickness_LIB "libpango-1.0.so.0"
#define pango_font_metrics_get_strikethrough_position_LIB "libpango-1.0.so.0"
#define pango_layout_set_auto_dir_LIB "libpango-1.0.so.0"
#define pango_cairo_create_layout_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_context_set_font_options_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_context_get_font_options_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_layout_path_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_show_layout_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_font_map_create_context_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_font_map_new_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_font_map_get_default_LIB "libpangocairo-1.0.so.0"
#define pango_cairo_font_map_set_resolution_LIB "libpangocairo-1.0.so.0"
#define gdk_cairo_set_source_color_LIB "libgdk-x11-2.0.so.0"
#define gdk_cairo_region_LIB "libgdk-x11-2.0.so.0"
#define gtk_enumerate_printers_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_bottom_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_left_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_orientation_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_page_height_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_page_width_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_paper_height_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_paper_size_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_paper_width_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_right_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_get_top_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_set_bottom_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_set_left_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_set_orientation_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_set_paper_size_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_set_right_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_page_setup_set_top_margin_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_free_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_get_display_name_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_get_name_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_get_ppd_name_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_get_height_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_get_width_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_is_custom_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_new_custom_LIB "libgtk-x11-2.0.so.0"
#define gtk_paper_size_new_from_ppd_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_get_printer_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_get_settings_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_get_status_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_get_surface_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_get_title_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_send_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_job_set_source_file_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_foreach_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_collate_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_n_copies_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_orientation_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_page_ranges_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_paper_height_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_paper_width_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_print_pages_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_printer_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_get_resolution_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_set_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_set_collate_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_set_n_copies_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_set_orientation_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_set_page_ranges_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_set_print_pages_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_settings_set_printer_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_get_current_page_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_get_page_setup_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_get_selected_printer_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_get_settings_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_new_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_set_current_page_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_set_manual_capabilities_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_set_page_setup_LIB "libgtk-x11-2.0.so.0"
#define gtk_print_unix_dialog_set_settings_LIB "libgtk-x11-2.0.so.0"
#define gtk_printer_get_backend_LIB "libgtk-x11-2.0.so.0"
#define gtk_printer_get_name_LIB "libgtk-x11-2.0.so.0"
#define gtk_printer_is_default_LIB "libgtk-x11-2.0.so.0"
#define FcConfigAppFontAddFile_LIB "libfontconfig.so.1"

/* Field accessors */
#define GTK_ACCEL_LABEL_SET_ACCEL_STRING(arg0, arg1) (arg0)->accel_string = arg1
#define GTK_ACCEL_LABEL_GET_ACCEL_STRING(arg0) (arg0)->accel_string
#define GTK_SCROLLED_WINDOW_HSCROLLBAR(arg0) (arg0)->hscrollbar
#define GTK_SCROLLED_WINDOW_SCROLLBAR_SPACING(arg0) (GTK_SCROLLED_WINDOW_GET_CLASS (arg0)->scrollbar_spacing >= 0 ? GTK_SCROLLED_WINDOW_GET_CLASS (arg0)->scrollbar_spacing : 3)		
#define GTK_SCROLLED_WINDOW_VSCROLLBAR(arg0) (arg0)->vscrollbar
#define GTK_WIDGET_HEIGHT(arg0) (arg0)->allocation.height
#define GTK_WIDGET_SET_HEIGHT(arg0, arg1) (arg0)->allocation.height = arg1
#define GTK_WIDGET_WIDTH(arg0) (arg0)->allocation.width
#define GTK_WIDGET_SET_WIDTH(arg0, arg1) (arg0)->allocation.width = arg1
#define GTK_WIDGET_WINDOW(arg0) (arg0)->window
#define GTK_WIDGET_X(arg0) (arg0)->allocation.x
#define GTK_WIDGET_SET_X(arg0, arg1) (arg0)->allocation.x = arg1
#define GTK_ENTRY_IM_CONTEXT(arg0) (arg0)->im_context
#define GTK_TEXTVIEW_IM_CONTEXT(arg0) (arg0)->im_context
#define GTK_TOOLTIPS_TIP_WINDOW(arg0) (arg0)->tip_window
#define GTK_TOOLTIPS_SET_ACTIVE(arg0, arg1) (arg0)->active_tips_data = arg1
#define GTK_WIDGET_Y(arg0) ((GtkWidget *)arg0)->allocation.y
#define GTK_WIDGET_SET_Y(arg0, arg1) (arg0)->allocation.y = arg1
#define GTK_WIDGET_REQUISITION_WIDTH(arg0) (arg0)->requisition.width
#define GTK_WIDGET_REQUISITION_HEIGHT(arg0) (arg0)->requisition.height
#define GDK_EVENT_TYPE(arg0) (arg0)->type
#define GDK_EVENT_WINDOW(arg0) (arg0)->window
#define X_EVENT_TYPE(arg0) (arg0)->type
#define X_EVENT_WINDOW(arg0) (arg0)->window
#define g_list_data(arg0) (arg0)->data
#define g_slist_data(arg0) (arg0)->data
#define g_list_set_next(arg0, arg1) (arg0)->next = arg1
#define g_list_set_previous(arg0, arg1) (arg0)->prev = arg1
#define gtk_rc_style_get_bg_pixmap_name(arg0, arg1) (arg0)->bg_pixmap_name[arg1]
#define gtk_rc_style_get_color_flags(arg0, arg1) (arg0)->color_flags[arg1]
#define gtk_rc_style_set_bg(arg0, arg1, arg2) if (arg2) (arg0)->bg[arg1] = *arg2
#define gtk_rc_style_set_bg_pixmap_name(arg0, arg1, arg2) (arg0)->bg_pixmap_name[arg1] = (char *)arg2
#define gtk_rc_style_set_color_flags(arg0, arg1, arg2) (arg0)->color_flags[arg1] = arg2
#define gtk_rc_style_set_fg(arg0, arg1, arg2) if (arg2) (arg0)->fg[arg1] = *arg2
#define gtk_rc_style_set_text(arg0, arg1, arg2) if (arg2) (arg0)->text[arg1] = *arg2
#define gtk_style_get_font_desc(arg0) (arg0)->font_desc
#define gtk_style_get_base(arg0, arg1, arg2) *arg2 = (arg0)->base[arg1]
#define gtk_style_get_bg(arg0, arg1, arg2) *arg2 = (arg0)->bg[arg1]
#define gtk_style_get_black(arg0, arg1) *arg1 = (arg0)->black
#define gtk_style_get_dark(arg0, arg1, arg2) *arg2 = (arg0)->dark[arg1]
#define gtk_style_get_fg(arg0, arg1, arg2) *arg2 = (arg0)->fg[arg1]
#define gtk_style_get_light(arg0, arg1, arg2) *arg2 = (arg0)->light[arg1]
#define gtk_style_get_text(arg0, arg1, arg2) *arg2 = (arg0)->text[arg1]
#define gtk_style_get_xthickness(arg0) (arg0)->xthickness
#define gtk_style_get_ythickness(arg0) (arg0)->ythickness
#define gtk_style_get_fg_gc(arg0, arg1, arg2) *arg2 = (arg0)->fg_gc[arg1]
#define gtk_style_get_bg_gc(arg0, arg1, arg2) *arg2 = (arg0)->bg_gc[arg1]
#define gtk_style_get_light_gc(arg0, arg1, arg2) *arg2 = (arg0)->light_gc[arg1]
#define gtk_style_get_dark_gc(arg0, arg1, arg2) *arg2 = (arg0)->dark_gc[arg1]
#define gtk_style_get_mid_gc(arg0, arg1, arg2) *arg2 = (arg0)->mid_gc[arg1]
#define gtk_style_get_text_gc(arg0, arg1, arg2) *arg2 = (arg0)->text_gc[arg1]
#define gtk_style_get_text_aa_gc(arg0, arg1, arg2) *arg2 = (arg0)->text_aa_gc[arg1]
#define gtk_style_get_black_gc(arg0, arg1) *arg1 = (arg0)->black_gc
#define gtk_style_get_white_gc(arg0, arg1) *arg1 = (arg0)->white_gc
#define localeconv_decimal_point() localeconv()->decimal_point

