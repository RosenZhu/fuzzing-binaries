#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int remainder_check(char* parameter_1,int checksum_div,int length);


int remainder_check(char* parameter_1,int checksum_div,int length)
{
   if(strlen(parameter_1)!=length)  return 0;
   int sum = 0;
   for(int i=0;i<length;i++)  sum = sum + parameter_1[i];
   if((sum % checksum_div==0))  return 1;
   else return 0;
}

double v__termpty_shutdown();
void v_termpty_text_scroll_rev_test( unsigned int parameter_1,float parameter_2);
int v__handle_esc_dcs( short parameter_1,int parameter_2,unsigned int parameter_3);
double v__handle_op_a( short parameter_1,double parameter_2,long parameter_3);
unsigned int v__termpty_ext_handle( char parameter_1,long parameter_2,short parameter_3);
float v__handle_esc_terminology( float parameter_1,unsigned int parameter_2,short parameter_3);
void v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3);
float v__smart_calculate_226( float parameter_1);
unsigned int v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4);
void v_colors_term_init( short parameter_1,long parameter_2,long parameter_3);
void v_termio_config_update( unsigned int parameter_1);
double v__font_size_set( char parameter_1,int parameter_2);
void v_termio_font_size_set( short parameter_1,int parameter_2);
long v__handle_xterm_50_command( double parameter_1,char parameter_2,int parameter_3);
unsigned int v__eina_unicode_to_hex( char parameter_1);
char v__xterm_parse_color( unsigned int parameter_1,short parameter_2,long parameter_3,short parameter_4,int parameter_5);
short v__xterm_arg_get( long parameter_1);
long v__handle_esc_xterm( long parameter_1,float parameter_2,short parameter_3);
void v_termpty_cells_set_content( float parameter_1,short parameter_2,short parameter_3,int parameter_4);
float v__handle_esc_csi_decera( long parameter_1,char parameter_2);
void v_termpty_cells_att_fill_preserve_colors( char parameter_1,float parameter_2,double parameter_3,int parameter_4);
unsigned int v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int v__handle_esc_csi_decfra( float parameter_1,long parameter_2);
int v__handle_esc_csi_decslrm( float parameter_1,double parameter_2);
long v__handle_esc_csi_decstbm( char parameter_1,unsigned int parameter_2);
short v__handle_esc_csi_decscusr( short parameter_1,int parameter_2);
void v__handle_esc_csi_dsr( long parameter_1,int parameter_2);
short v__handle_esc_csi_truecolor_cmyk( char parameter_1,long parameter_2);
float v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,float parameter_2);
unsigned int v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
void v__csi_truecolor_arg_get( double parameter_1);
char v__handle_esc_csi_truecolor_rgb( int parameter_1,char parameter_2);
void v__handle_esc_csi_color_set( float parameter_1,short parameter_2);
void v_termpty_cursor_copy( short parameter_1,int parameter_2);
unsigned int v__switch_to_alternative_screen( long parameter_1,int parameter_2);
long v__move_cursor_to_origin();
long v__pty_size( char parameter_1);
void v__limit_coord( char parameter_1);
long v__check_screen_info( int parameter_1,int parameter_2);
short v__termpty_line_rewrap( double parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5);
char v__backlog_remove_latest_nolock( int parameter_1);
short v_termpty_save_extract();
float v__termpty_line_is_empty( double parameter_1,float parameter_2);
void v_termpty_screen_swap( double parameter_1);
void v_termpty_resize( long parameter_1,int parameter_2,int parameter_3);
short v_termio_win_get();
int v__handle_esc_csi_reset_mode( unsigned int parameter_1,char parameter_2,short parameter_3);
int v__handle_esc_csi_cursor_pos_set( float parameter_1,short parameter_2,short parameter_3);
void v_termpty_text_scroll_rev( double parameter_1,int parameter_2);
void v_termpty_clear_line( long parameter_1,unsigned int parameter_2,int parameter_3);
void v_termpty_clear_screen( double parameter_1,int parameter_2);
void v_termpty_cell_codepoint_att_fill( long parameter_1,double parameter_2,int parameter_3,double parameter_4,int parameter_5);
double v__termpty_charset_trans( unsigned int parameter_1,unsigned int parameter_2);
void v_termio_content_change( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para);
void v_termpty_text_append( double parameter_1,short parameter_2,int parameter_3,int uni_para);
unsigned int v__csi_arg_get( double parameter_1);
unsigned int v__handle_esc_csi( int parameter_1,long parameter_2,double parameter_3,int uni_para);
long v__safechar( float parameter_1);
int v__handle_esc( int parameter_1,short parameter_2,char parameter_3,int uni_para);
void v_termpty_cell_fill( unsigned int parameter_1,int parameter_2,char parameter_3,int parameter_4);
void v_termpty_cells_fill( unsigned int parameter_1,int parameter_2,double parameter_3,int parameter_4);
void v_termpty_cells_clear( double parameter_1,short parameter_2,int parameter_3);
double v__tooltip_del(int parameter_2);
int v__tooltip_content(double parameter_2,long parameter_3);
void v_MD5Final( short parameter_1,unsigned int parameter_2);
void v_MD5Transform( int parameter_1,char parameter_2);
void v_byteReverse( short parameter_1,int parameter_2);
void v_MD5Update( int parameter_1,short parameter_2,int parameter_3);
void v_MD5Init( char parameter_1);
void v_gravatar_tooltip( long parameter_1,short parameter_2,char parameter_3);
float v__cb_link_drag_done(int parameter_2);
int v__cb_link_drag_accept(unsigned int parameter_2,long parameter_3);
short v__cb_link_drag_move(char parameter_2,double parameter_3,int parameter_4,float parameter_5);
short v__cb_link_icon_new(long parameter_2,double parameter_3,short parameter_4);
short v__cb_link_move(char parameter_2,long parameter_3);
double v__cb_link_up_delay();
short v__cb_link_up(short parameter_2,long parameter_3);
void v_term_focus( unsigned int parameter_1);
void v__term_is_focused( float parameter_1);
void v_term_unfocus( int parameter_1);
int v__cb_ctxp_del(double parameter_2,short parameter_3);
short v__cb_ctxp_dismissed(long parameter_2);
long v__cb_ctxp_link_copy(int parameter_2);
double v__screen_visual_bounds();
double v__draw_cell( char parameter_1,double parameter_2,double parameter_3,double parameter_4);
char v__draw_line( long parameter_1,int parameter_2,float parameter_3,int parameter_4,double parameter_5);
unsigned int v_termpty_backlog_length( double parameter_1);
int v_termio_pty_get( float parameter_1);
void v_termio_textgrid_get( unsigned int parameter_1);
unsigned int v_miniview_colors_get( char parameter_1,float parameter_2);
char v__deferred_renderer();
float v__queue_render();
void v_miniview_redraw( long parameter_1);
unsigned int v__block_obj_del( short parameter_1);
void v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2);
short v__termpty_is_dblwidth_get( float parameter_1,int parameter_2);
float v_term_preedit_str_get( float parameter_1);
long v_media_get( float parameter_1);
char v__smart_media_clicked(short parameter_2);
int v_media_control_get( int parameter_1);
unsigned int v__smart_media_stop(char parameter_2);
int v__smart_media_pause(long parameter_2);
unsigned int v__smart_media_play(long parameter_2);
long v__smart_media_del(short parameter_2,double parameter_3);
void v_media_visualize_set( short parameter_1,int parameter_2);
void v_media_mute_set( float parameter_1,int parameter_2);
void v_media_volume_set( char parameter_1,double parameter_2);
short v__cb_media_vol(long parameter_2,unsigned int parameter_3,float parameter_4);
char v__cb_media_pos(unsigned int parameter_2,unsigned int parameter_3,float parameter_4);
long v__cb_media_pos_drag_stop(long parameter_2,long parameter_3,int parameter_4);
double v__cb_media_pos_drag_start(unsigned int parameter_2,long parameter_3,float parameter_4);
void v_media_stop( unsigned int parameter_1);
unsigned int v__cb_media_stop(unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
float v__cb_media_pause(unsigned int parameter_2,long parameter_3,double parameter_4);
void v_media_play_set( char parameter_1,double parameter_2);
unsigned int v__cb_media_play(double parameter_2,short parameter_3,char parameter_4);
void v_media_position_set( char parameter_1,double parameter_2);
short v__cb_mov_ref(double parameter_2);
double v__cb_mov_progress(short parameter_2);
void v__cb_mov_restart();
long v__cb_mov_decode_stop(char parameter_2);
int v__cb_mov_len_change(float parameter_2);
unsigned int v__cb_mov_frame_resize(int parameter_2);
double v__cb_mov_frame_decode(double parameter_2);
float v__type_mov_init();
char v__cb_edje_preloaded(char parameter_2,double parameter_3,short parameter_4);
double v__type_edje_init( int parameter_1);
float v__type_scale_init();
void v__cb_img_frame();
char v__type_img_anim_handle( unsigned int parameter_1);
void v__cb_img_preloaded(long parameter_2,char parameter_3);
void v__type_img_init( float parameter_1);
unsigned int v__url_compl_cb(int parameter_2);
long v__url_prog_cb(int parameter_2);
short v__type_thumb_calc( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,float parameter_5);
float v__type_mov_calc( unsigned int parameter_1,float parameter_2,double parameter_3,double parameter_4,double parameter_5);
void v__type_edje_calc( long parameter_1,int parameter_2,char parameter_3,short parameter_4,short parameter_5);
unsigned int v__type_img_calc( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,char parameter_5);
long v__cb_scale_preloaded(long parameter_2,double parameter_3,int uni_para);
double v__type_scale_calc( float parameter_1,short parameter_2,double parameter_3,long parameter_4,long parameter_5,int uni_para);
unsigned int v__unsmooth_timeout(int uni_para);
short v__smooth_handler( double parameter_1,int uni_para);
unsigned int v__smart_calculate( long parameter_1,int uni_para);
int v__smart_move( double parameter_1,char parameter_2,short parameter_3);
void v__smart_resize( double parameter_1,int parameter_2,char parameter_3);
float v__smart_del( char parameter_1);
long v__smart_add( unsigned int parameter_1);
void v__smart_init(int uni_para);
char v_media_add( char parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,char parameter_5,int uni_para);
long v__block_media_activate( char parameter_1,long parameter_2,int uni_para);
float v__block_edje_message_cb(short parameter_2,char parameter_3,int parameter_4);
void v_termpty_write( unsigned int parameter_1,int parameter_2,int parameter_3);
double v__block_edje_signal_cb(int parameter_2,float parameter_3,double parameter_4);
void v_termpty_block_chid_update( double parameter_1,float parameter_2);
int v__block_edje_cmds( int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
int v_homedir_get( char parameter_1,long parameter_2);
int v__block_edje_activate( short parameter_1,double parameter_2);
long v__block_activate( char parameter_1,int parameter_2,int uni_para);
char v_termpty_block_get( unsigned int parameter_1,int parameter_2);
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3);
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2);
short v__smart_apply( char parameter_1,int uni_para);
long v__smart_cb_change(int uni_para);
float v__smart_update_queue( short parameter_1,int parameter_2,int uni_para);
long v__lost_selection_reset_job();
float v__lost_selection(long parameter_2,int uni_para);
int v__take_selection_text( char parameter_1,double parameter_2,short parameter_3,int uni_para);
void v__cb_ctxp_link_content_copy(double parameter_2,int uni_para);
void v_ty_sb_free( int parameter_1);
char v_ty_sb_steal_buf( unsigned int parameter_1);
int v_codepoint_to_utf8( double parameter_1,char parameter_2);
void v_ty_sb_spaces_rtrim();
int v_ty_sb_add( char parameter_1,short parameter_2,char parameter_3);
char v__termpty_cellrow_from_beacon_get( short parameter_1,int parameter_2,double parameter_3);
float v_termpty_cellrow_get( unsigned int parameter_1,int parameter_2,char parameter_3);
char v_termio_selection_get( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,double parameter_7);
short v__cb_ctxp_link_open(char parameter_2);
void v__should_inline( int parameter_1);
double v_link_is_email();
double v_link_is_protocol( float parameter_1);
short v_link_is_url();
short v__activate_link( double parameter_1,float parameter_2);
float v__cb_ctxp_link_preview(double parameter_2);
unsigned int v__is_fmt( short parameter_1,double parameter_2);
int v_media_src_type_get( float parameter_1);
void v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3);
float v__smart_xy_to_cursor( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5);
double v__cb_link_down(float parameter_2,char parameter_3,int uni_para);
float v_main_term_popup_exists( double parameter_1);
void v__update_link( float parameter_1,char parameter_2,long parameter_3,char parameter_4,int uni_para);
double v__remove_links( unsigned int parameter_1,unsigned int parameter_2,int uni_para);
unsigned int v__sel_set( short parameter_1,float parameter_2);
int v_termio_scroll_get( unsigned int parameter_1);
void v_miniview_position_offset( short parameter_1,int parameter_2,char parameter_3);
char v_term_miniview_get( int parameter_1);
void v_termio_scroll( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v_termpty_save_new( short parameter_1,int parameter_2);
void v_termpty_save_expand( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
short v__termpty_cell_is_empty( double parameter_1);
unsigned int v_termpty_line_length( float parameter_1,double parameter_2);
double v_verify_beacon( char parameter_1,int parameter_2);
void v_termpty_text_save_top( char parameter_1,char parameter_2,short parameter_3);
void v_termpty_text_scroll( unsigned int parameter_1,short parameter_2);
void v_termpty_text_scroll_test( unsigned int parameter_1,char parameter_2);
void v__cursor_to_start_of_line( char parameter_1);
int v__tab_forward( int parameter_1,int parameter_2);
int v__handle_cursor_control( unsigned int parameter_1,unsigned int parameter_2);
int v_termpty_handle_seq( char parameter_1,long parameter_2,long parameter_3,int uni_para);
void v_termpty_handle_buf( char parameter_1,long parameter_2,int parameter_3,int uni_para);
void v_theme_reload( double parameter_1);
short v_theme_reload_cb(int parameter_2,short parameter_3,short parameter_4);
void v_theme_auto_reload_enable( char parameter_1);
float v__cursor_shape_to_group_name( unsigned int parameter_1);
double v_config_theme_path_default_get( double parameter_1);
char v_theme_path_get();
short v_config_theme_path_get( char parameter_1);
double v_theme_apply( long parameter_1,short parameter_2,char parameter_3);
void v_termio_set_cursor_shape( double parameter_1,float parameter_2);
void v_termpty_clear_tabs_on_screen( short parameter_1);
void v_termpty_backlog_unlock();
void v_termpty_backlog_size_set( short parameter_1,long parameter_2);
long v__ts_free();
void v_termpty_save_free( short parameter_1);
void v_termpty_backlog_lock();
void v_termpty_clear_backlog( short parameter_1);
void v_termpty_reset_att( float parameter_1);
short v_termio_config_get( float parameter_1);
void v_termpty_reset_state( int parameter_1);
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3);
char v__termpty_init( double parameter_1);
int v__add_default_keys( char parameter_1);
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4,short parameter_5,unsigned int parameter_6);
unsigned int v_config_new();
double v__termpty_shutdown()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	float_3 = float_1 * float_2;
	return double_1;
}
void v_termpty_text_scroll_rev_test( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double_2 = double_1 * double_3;
		short_2 = short_1 + short_2;
		v_termpty_text_scroll_rev(double_2,int_1);

		int_2 = int_2 * int_1;
	}
}
int v__handle_esc_dcs( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int int_3 = 1;
					long_1 = v__safechar(float_1);

					v_termpty_write(unsigned_int_1,int_1,int_2);

					int_2 = int_3 * int_1;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
				}
			}
		}
		if(1)
		{
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_2 * float_3;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		}
		if(1)
		{
			long_1 = long_1 * long_1;
		}
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_1 + float_2;
		}
	}
	return int_2;
}
double v__handle_op_a( short parameter_1,double parameter_2,long parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long_1 = long_1 + long_1;
	float_2 = float_1 + float_1;
	return double_1;
}
unsigned int v__termpty_ext_handle( char parameter_1,long parameter_2,short parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	long_1 = long_2;
	short_1 = short_1 + short_1;
	return unsigned_int_1;
	double_1 = v__handle_op_a(short_2,double_2,long_1);

}
float v__handle_esc_terminology( float parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double_1 = double_2;
	return float_1;
	short_1 = v_termio_config_get(float_1);

	unsigned_int_1 = v__termpty_ext_handle(char_1,long_1,short_2);

}
void v__handle_xterm_777_command( double parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	double_2 = double_2 * double_1;
	int_2 = int_3 * int_3;
	int_3 = int_2 + int_3;
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	float_1 = float_1 * float_2;
	long_1 = long_1 + long_2;
	long_3 = long_3 * long_4;
	double_3 = double_1 + double_3;
	double_3 = double_4 + double_3;
}
float v__smart_calculate_226( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 * short_1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	float_1 = float_1 * float_2;
	int_2 = int_1;
	int_1 = int_2 + int_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return float_2;
}
unsigned int v__smart_size( unsigned int parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		unsigned_int_2 = v__sel_set(short_1,float_1);

		int_1 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	v_termpty_resize(long_1,int_1,int_3);

	int_1 = int_2 * int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_2;
	short_1 = v__smart_apply(char_2,-1 );

	double_1 = double_3 * double_1;
	float_2 = v__smart_calculate_226(float_2);

	char_2 = char_3;
	if(1)
	{
		double_2 = double_3;
	}
	char_2 = char_3;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char_1 = char_2;
	double_4 = double_4 * double_5;
	char_4 = char_3;
	return unsigned_int_5;
}
void v_colors_term_init( short parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long long_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_2;
	float_1 = float_1 * float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			long long_4 = 1;
			long_2 = long_3;
			short_1 = short_1;
			char_1 = char_1 * char_2;
			long_4 = long_1 * long_1;
		}
		if(1)
		{
			long_5 = long_2 + long_3;
			if(1)
			{
				float float_2 = 1;
				float float_3 = 1;
				int int_3 = 1;
				float_1 = float_2;
				int_1 = int_1 + int_2;
				float_3 = float_3 + float_3;
				unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
				int_1 = int_1 + int_3;
			}
		}
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_3 = double_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				long_5 = long_1 + long_3;
			}
		}
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_1 + short_2;
			if(1)
			{
				short short_4 = 1;
				short_2 = short_4 + short_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long long_6 = 1;
		long_6 = long_2 + long_5;
		if(1)
		{
			double double_4 = 1;
			unsigned int unsigned_int_4 = 1;
			double_2 = double_3 * double_4;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
			double_4 = double_3 * double_3;
			double_2 = double_2 * double_3;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		}
		int_2 = int_1 + int_2;
	}
}
void v_termio_config_update( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long_3 = long_1 * long_2;
	int_2 = int_1 * int_2;
	char_2 = char_1 * char_1;
	float_1 = float_1 * float_1;
	if(1)
	{
		v_termpty_backlog_size_set(short_1,long_3);

		double_2 = double_1 * double_1;
	}
	v_termio_set_cursor_shape(double_2,float_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	if(1)
	{
		double_4 = double_3 + double_2;
	}
	int_3 = int_2 + int_2;
	unsigned_int_4 = v__smart_size(unsigned_int_1,int_4,int_5,unsigned_int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_1 = double_2 + double_4;
	int_4 = int_4 * int_4;
	long_1 = long_2;
	int_1 = int_1 + int_1;
	float_1 = float_2 * float_1;
	double_2 = double_1 * double_5;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_5;
	if(1)
	{
		long_2 = long_2 * long_1;
	}
	if(1)
	{
		int int_6 = 1;
		int_6 = int_4 * int_6;
	}
	unsigned_int_3 = unsigned_int_2;
	int_1 = int_3 * int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_6;
	double_3 = double_5 * double_3;
	int_2 = int_1 * int_5;
	v_colors_term_init(short_1,long_3,long_2);

}
double v__font_size_set( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short_1 = short_1 + short_2;
	long_3 = long_1 + long_2;
	char_1 = char_1 * char_1;
	float_1 = float_1 * float_1;
	if(1)
	{
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		v_termio_config_update(unsigned_int_3);

		int_1 = int_2 * int_2;
		long_2 = long_3;
		int_4 = int_1 * int_3;
		double_1 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
	}
	return double_1;
}
void v_termio_font_size_set( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = v__font_size_set(char_1,int_1);

	long_1 = long_1 + long_2;
}
long v__handle_xterm_50_command( double parameter_1,char parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	v_termio_font_size_set(short_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return long_1;
}
unsigned int v__eina_unicode_to_hex( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	return unsigned_int_1;
}
char v__xterm_parse_color( unsigned int parameter_1,short parameter_2,long parameter_3,short parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char_1 = char_1 * char_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		double_2 = double_2 + double_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_2 = float_1 * float_2;
	if(1)
	{
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_1 * double_1;
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
		}
		double_3 = double_1 + double_2;
		int_1 = int_1 + int_1;
		if(1)
		{
			int_1 = int_2 * int_1;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		int_3 = int_1 * int_2;
		if(1)
		{
			double_4 = double_3 * double_4;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		double_1 = double_3 * double_5;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_2 = v__eina_unicode_to_hex(char_2);

		int_3 = int_2 + int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		double_1 = double_4 + double_6;
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_6 = 1;
		float float_3 = 1;
		double_1 = double_4 * double_5;
		if(1)
		{
			float_2 = float_2 * float_1;
		}
		unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
		int_2 = int_3 * int_1;
		if(1)
		{
			double_2 = double_1 * double_4;
		}
		unsigned_int_2 = unsigned_int_6 * unsigned_int_1;
		float_1 = float_2 * float_3;
		if(1)
		{
			double_6 = double_6 * double_1;
		}
		double_2 = double_4 * double_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 + long_2;
	}
	double_2 = double_5 + double_7;
	return char_2;
}
short v__xterm_arg_get( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_1 * int_3;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_4 = short_2 * short_3;
	char_1 = char_1;
	int_1 = int_2;
	int_1 = int_1 + int_3;
	long_3 = long_1 * long_2;
	double_1 = double_1 * double_2;
	double_4 = double_1 + double_3;
	long_2 = long_2 * long_1;
	float_1 = float_1 * float_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_5;
	int_2 = int_1 + int_1;
	int_2 = int_1 * int_4;
	double_2 = double_4;
	int_1 = int_2 * int_5;
	float_2 = float_3;
	unsigned_int_3 = unsigned_int_6;
	unsigned_int_4 = unsigned_int_6 * unsigned_int_7;
	int_5 = int_5;
	return short_3;
}
long v__handle_esc_xterm( long parameter_1,float parameter_2,short parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_termio_textgrid_get(unsigned_int_2);

	short_3 = short_1 * short_2;
	long_2 = long_1 + long_2;
	double_1 = double_1 * double_1;
	double_2 = double_2 + double_1;
	if(1)
	{
		char_1 = v__xterm_parse_color(unsigned_int_1,short_4,long_1,short_4,int_1);

		double_2 = double_2 + double_1;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	char_3 = char_2 + char_2;
	float_2 = float_1 * float_1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	char_5 = char_4 * char_5;
	if(1)
	{
		int_2 = int_2;
	}
	v_termpty_write(unsigned_int_3,int_1,int_2);

	unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	double_2 = double_2 * double_2;
	int_3 = int_1 * int_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	int_2 = int_2 * int_3;
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		short_4 = short_5 + short_3;
		v__handle_xterm_777_command(double_1,char_4,int_2);

		int_4 = int_3;
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		short short_6 = 1;
		short_6 = short_2 * short_5;
	}
	if(1)
	{
		float float_3 = 1;
		float_3 = float_2 * float_3;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_6;
	long_1 = long_1 * long_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_6;
	}
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	if(1)
	{
		int_1 = int_3 * int_2;
		unsigned_int_1 = unsigned_int_5 * unsigned_int_2;
	}
	if(1)
	{
		short_5 = v_termio_config_get(float_1);

		int_4 = int_4 * int_4;
	}
	if(1)
	{
		int_2 = int_4 * int_3;
	}
	long_3 = v__handle_xterm_50_command(double_1,char_4,int_4);

	int_6 = int_1 * int_5;
	short_2 = v__xterm_arg_get(long_2);

	long_3 = long_3 + long_3;
	return long_2;
}
void v_termpty_cells_set_content( float parameter_1,short parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double_2 = double_1 + double_1;
		short_3 = short_1 * short_2;
	}
}
float v__handle_esc_csi_decera( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_1 + long_1;
	float_2 = float_1 + float_2;
	short_1 = short_1 + short_2;
	float_2 = float_1 * float_1;
	unsigned_int_1 = v__csi_arg_get(double_1);

	short_3 = short_1 * short_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "{") < 0)
	{
	}
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_3 = 1;
		long long_2 = 1;
		float_3 = float_1 * float_3;
		unsigned_int_1 = v__clean_up_rect_coordinates(char_1,int_3,int_4,int_3,int_3);

		v_termpty_cells_set_content(float_4,short_2,short_1,int_1);

		long_2 = long_2 + long_1;
	}
	return float_4;
}
void v_termpty_cells_att_fill_preserve_colors( char parameter_1,float parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 * double_2;
	double_3 = double_3 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_1 * float_2;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			float float_3 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_1 = 1;
			float float_4 = 1;
			float_2 = float_3 * float_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
			long_1 = long_1;
			unsigned_int_5 = unsigned_int_5 + unsigned_int_5;
			double_2 = double_2;
			float_4 = float_1 * float_2;
		}
	}
}
unsigned int v__clean_up_rect_coordinates( char parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 * short_1;
	short_2 = short_1 * short_2;
	int_1 = int_1;
	short_1 = short_1 + short_2;
	int_1 = int_1 * int_2;
	if(1)
	{
		double double_2 = 1;
		double_3 = double_1 * double_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
	char_2 = char_1 + char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	}
	if(1)
	{
		double_4 = double_1 * double_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_6;
		if(1)
		{
			int_1 = int_2 + int_2;
		}
	}
	if(1)
	{
		int_5 = int_3 * int_4;
	}
	if(1)
	{
		int int_6 = 1;
		int_3 = int_4 * int_6;
	}
	if(1)
	{
		int_5 = int_3;
		if(1)
		{
			int_1 = int_1 + int_5;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_6;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
	}
	if(1)
	{
	}
	int_4 = int_5 * int_2;
	float_3 = float_1 * float_2;
	short_2 = short_1 + short_3;
	double_4 = double_5 * double_4;
	return unsigned_int_8;
}
unsigned int v__handle_esc_csi_decfra( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = v__csi_arg_get(double_3);

	long_2 = long_1 * long_1;
	short_2 = short_1 + short_1;
	double_4 = double_1 * double_3;
	int_1 = int_2;
	unsigned_int_1 = v__clean_up_rect_coordinates(char_1,int_3,int_3,int_4,int_5);

	int_3 = int_6;
	char_2 = char_2 + char_2;
	if(1)
	{
	}
	if(1)
	{
	}
	v_termpty_cells_att_fill_preserve_colors(char_2,float_1,double_4,int_3);

	long_3 = long_2 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		long_4 = long_3 + long_3;
		double_1 = double_3 + double_1;
	}
	return unsigned_int_1;
}
int v__handle_esc_csi_decslrm( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	unsigned_int_1 = v__csi_arg_get(double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1 + short_2;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	}
	double_4 = double_3 * double_3;
	if(1)
	{
		double double_5 = 1;
		long_1 = v__move_cursor_to_origin();

		double_1 = double_5 * double_3;
	}
	if(1)
	{
		int_2 = int_2 * int_1;
	}
	if(1)
	{
		int int_3 = 1;
		int_1 = int_3 * int_1;
	}
	short_1 = short_3 * short_1;
	short_2 = short_2 * short_3;
	int_2 = int_1 * int_2;
	int_4 = int_4;
	long_2 = long_1;
	return int_1;
}
long v__handle_esc_csi_decstbm( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double_2 = double_1 * double_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = v__csi_arg_get(double_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = v__move_cursor_to_origin();

	double_2 = double_3 * double_1;
	double_1 = double_4 + double_3;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "V") > 0)
	{
		int_1 = int_2;
	}
	if(1)
	{
		long_1 = long_1;
	}
	float_2 = float_2;
	int_2 = int_3 * int_1;
	char_1 = char_1 * char_1;
	int_2 = int_1 + int_3;
	float_1 = float_1 + float_2;
	return long_2;
}
short v__handle_esc_csi_decscusr( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	float float_3 = 1;
	double_1 = double_1 * double_2;
	short_3 = short_1 + short_2;
	short_4 = short_2 * short_1;
	float_2 = float_1 * float_1;
	v_termio_set_cursor_shape(double_2,float_1);

	int_2 = int_1 + int_1;
	int_3 = int_1 + int_2;
	double_3 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3;
	long_1 = long_1 * long_2;
	double_1 = double_5;
	int_2 = int_1 + int_4;
	int_5 = int_4;
	int_5 = int_6 * int_1;
	unsigned_int_1 = v__csi_arg_get(double_6);

	float_3 = float_2 * float_1;
	return short_2;
}
void v__handle_esc_csi_dsr( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_1;
	float_1 = float_2;
	if(1)
	{
		double double_3 = 1;
		double_2 = double_3 + double_3;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char_1 = char_1;
		int_1 = int_2;
		unsigned_int_1 = v__csi_arg_get(double_2);

		double_1 = double_1;
		short_2 = short_1 + short_1;
		short_2 = short_2 + short_3;
		long_1 = long_1 + long_1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		double double_4 = 1;
		long long_2 = 1;
		float float_3 = 1;
		double_4 = double_4 + double_4;
		v_termpty_write(unsigned_int_1,int_2,int_2);

		long_2 = long_1 * long_2;
		unsigned_int_1 = unsigned_int_1;
		int_2 = int_1 + int_1;
		char_1 = char_1 * char_1;
		float_1 = float_3 * float_1;
	}
}
short v__handle_esc_csi_truecolor_cmyk( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	float_1 = float_2;
	float_3 = float_2 + float_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1 * char_1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_3 = char_2 + char_1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	v__csi_truecolor_arg_get(double_1);

	unsigned_int_2 = v__approximate_truecolor_rgb(double_2,int_2,int_1,int_3);

	double_2 = double_3 * double_4;
	return short_2;
}
float v__handle_esc_csi_truecolor_cmy( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	v__csi_truecolor_arg_get(double_1);

	long_1 = long_1 + long_1;
	double_1 = double_2;
	float_1 = float_1 + float_1;
	unsigned_int_1 = v__approximate_truecolor_rgb(double_1,int_1,int_1,int_1);

	long_1 = long_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	double_3 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return float_2;
}
unsigned int v__approximate_truecolor_rgb( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 + int_1;
	v_termio_textgrid_get(unsigned_int_1);

	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
			if(1)
			{
				unsigned int unsigned_int_3 = 1;
				unsigned_int_2 = unsigned_int_3;
			}
		}
	}
	return unsigned_int_2;
}
void v__csi_truecolor_arg_get( double parameter_1)
{
}
char v__handle_esc_csi_truecolor_rgb( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_2;
	unsigned_int_1 = v__approximate_truecolor_rgb(double_1,int_2,int_1,int_1);

	float_1 = float_1;
	double_2 = double_2;
	int_3 = int_2;
	if(1)
	{
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		v__csi_truecolor_arg_get(double_1);

		float_1 = float_2 * float_2;
		unsigned_int_2 = unsigned_int_1;
		double_1 = double_2 * double_1;
	}
	if(1)
	{
	}
	return char_1;
}
void v__handle_esc_csi_color_set( float parameter_1,short parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	char_1 = v__handle_esc_csi_truecolor_rgb(int_1,char_2);

	short_1 = v__handle_esc_csi_truecolor_cmyk(char_3,long_1);

	double_3 = double_1 + double_2;
	v_termpty_reset_att(float_1);

	short_2 = short_2 + short_1;
	unsigned_int_1 = v__csi_arg_get(double_1);

	float_1 = v__handle_esc_csi_truecolor_cmy(unsigned_int_1,float_2);

}
void v_termpty_cursor_copy( short parameter_1,int parameter_2)
{
	float float_2 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		int_1 = int_2;
		float_1 = float_2;
	}
	if(1)
	{
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_2 = float_3 + float_3;
		char_2 = char_1 + char_1;
		float_5 = float_3 * float_4;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
unsigned int v__switch_to_alternative_screen( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return unsigned_int_1;
	v_termpty_screen_swap(double_1);

}
long v__move_cursor_to_origin()
{
	long long_1 = 1;
	if(1)
	{
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_1 + long_1;
		long_3 = long_1 * long_2;
		long_1 = long_2 * long_2;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_1 = double_1;
		char_3 = char_1 + char_2;
	}
	return long_1;
}
long v__pty_size( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long_2 = long_1 + long_1;
	char_2 = char_1 * char_2;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_3;
	double_1 = double_1 * double_1;
	if(1)
	{
		int_2 = int_1 + int_3;
	}
	return long_1;
}
void v__limit_coord( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_2 = short_1 + short_1;
	float_3 = float_1 * float_2;
	double_1 = double_2 * double_1;
	float_1 = float_2 + float_3;
	long_1 = long_1 * long_1;
}
long v__check_screen_info( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_4 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float_1 = float_1 * float_2;
		short_2 = short_1 * short_2;
		char_1 = char_1 + char_1;
		int_1 = int_1 * int_1;
		float_4 = float_2 + float_3;
		if(1)
		{
			char char_3 = 1;
			v_termpty_text_save_top(char_2,char_1,short_3);

			char_3 = char_1 * char_3;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	return long_1;
	v_termpty_cells_clear(double_1,short_4,int_1);

}
short v__termpty_line_rewrap( double parameter_1,float parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	long_1 = v__check_screen_info(int_1,int_1);

	long_2 = long_2 + long_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return short_1;
}
char v__backlog_remove_latest_nolock( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		v_termpty_save_free(short_2);

		int_3 = int_4;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_3 * short_1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_4;
	return char_1;
	double_2 = v_verify_beacon(char_2,int_2);

}
short v_termpty_save_extract()
{
	short short_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double_1 = double_2;
			float_1 = float_1 + float_1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			short_1 = short_1;
			double_4 = double_2 + double_3;
			if(1)
			{
			}
			double_3 = double_1 * double_1;
			char_1 = char_1 * char_2;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				long_2 = long_1 * long_2;
			}
		}
	}
	return short_2;
}
float v__termpty_line_is_empty( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		short_1 = v__termpty_cell_is_empty(double_1);

		int_2 = int_1 + int_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "]n") < 0)
		{
		}
	}
	return float_1;
}
void v_termpty_screen_swap( double parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float_3 = float_1 + float_2;
	double_1 = double_1 + double_1;
	double_1 = double_2;
	char_2 = char_1 * char_1;
	float_5 = float_4 * float_3;
	double_3 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
}
void v_termpty_resize( long parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_5 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_7 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_3 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_5 = 1;
	short short_7 = 1;
	v_termpty_resize_tabs(short_1,int_1,int_1);

	int_2 = int_1 * int_1;
	int_3 = int_1;
	double_2 = double_1 + double_1;
	short_2 = v_termpty_save_extract();

	char_1 = v__backlog_remove_latest_nolock(int_3);

	short_2 = short_1 + short_1;
	if(1)
	{
	}
	double_3 = double_2 + double_1;
	if(1)
	{
		short_1 = short_3;
		unsigned_int_1 = v_termpty_line_length(float_1,double_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	int_3 = int_2;
	if(1)
	{
		char_1 = char_2 * char_3;
	}
	int_1 = int_4 + int_3;
	v_termpty_backlog_unlock();

	int_3 = int_2 * int_1;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_2 * short_4;
	}
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_4 = unsigned_int_2;
	v_termpty_backlog_lock();

	double_1 = double_4 + double_5;
	float_2 = float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
			double_6 = double_1 * double_5;
		}
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_6;
	if(1)
	{
		double_1 = double_1 * double_6;
	}
	char_2 = char_2 * char_3;
	if(1)
	{
		int_6 = int_4 + int_5;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
		int_2 = int_2 * int_1;
		if(1)
		{
			short_3 = short_3 * short_5;
			char_4 = char_4 + char_1;
			float_3 = float_4 + float_3;
			int_4 = int_3 + int_3;
			char controller_9[3];
			fgets(controller_9 ,3 ,stdin);
			if( strcmp( controller_9, "vn") < 0)
			{
				int_7 = int_7 + int_4;
			}
			double_3 = double_3 * double_7;
			char_4 = char_4 + char_1;
			v_termpty_screen_swap(double_6);

			double_4 = double_6 + double_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			float_4 = float_2 + float_2;
			unsigned_int_6 = unsigned_int_7 + unsigned_int_2;
			long_2 = v__pty_size(char_3);

			long_2 = long_2 * long_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_7 = double_7 + double_8;
		int_1 = int_1 + int_7;
		double_2 = double_9 + double_4;
		unsigned_int_4 = unsigned_int_7 + unsigned_int_2;
	}
	double_4 = double_8 * double_4;
	unsigned_int_1 = unsigned_int_5;
	char_1 = char_4 * char_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_3;
	int_5 = int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = v_verify_beacon(char_3,int_5);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_7;
	short_3 = v__termpty_line_rewrap(double_10,float_3,int_7,unsigned_int_3,long_3);

	long_1 = long_3;
	if(1)
	{
		int_6 = int_3 * int_5;
	}
	float_4 = v__termpty_line_is_empty(double_6,float_1);

	short_3 = short_6 + short_1;
	unsigned_int_8 = unsigned_int_7 + unsigned_int_8;
	char_3 = char_3;
	v__limit_coord(char_3);

	double_1 = double_10 + double_3;
	double_2 = double_8 + double_9;
	float_5 = float_3 * float_4;
	float_4 = float_4 + float_3;
	short_7 = short_1 + short_5;
}
short v_termio_win_get()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = int_2;
	double_2 = double_1 + double_1;
	return short_1;
}
int v__handle_esc_csi_reset_mode( unsigned int parameter_1,char parameter_2,short parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	v_termpty_resize(long_1,int_1,int_1);

	v_termpty_clear_screen(double_1,int_2);

	long_1 = v__move_cursor_to_origin();

	v_termpty_cursor_copy(short_1,int_3);

	long_1 = long_1;
	v_termpty_reset_state(int_2);

	unsigned_int_1 = v__switch_to_alternative_screen(long_2,int_4);

	short_3 = short_2 * short_1;
	short_3 = v_termio_win_get();

	double_1 = double_1;
	return int_1;
	unsigned_int_1 = v__csi_arg_get(double_1);

}
int v__handle_esc_csi_cursor_pos_set( float parameter_1,short parameter_2,short parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	short_1 = short_1 + short_1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = v__csi_arg_get(double_1);

	long_2 = long_1 + long_1;
	float_2 = float_1 + float_1;
	int_2 = int_2;
	double_2 = double_1 * double_2;
	if(1)
	{
		float float_3 = 1;
		float_3 = float_3 * float_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		if(1)
		{
			int_1 = int_2 + int_3;
		}
	}
	if(1)
	{
		long_1 = long_2;
	}
	short_2 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int_4 = int_4;
	}
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_3 + double_1;
		if(1)
		{
			double_4 = double_2 * double_4;
		}
	}
	if(1)
	{
		int_1 = int_3 * int_1;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	return int_4;
}
void v_termpty_text_scroll_rev( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_3 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		v_termio_scroll(double_1,int_4,int_3,int_2);

		double_2 = double_1;
		if(1)
		{
			char char_2 = 1;
			v_termpty_cells_clear(double_2,short_1,int_4);

			char_2 = char_1 * char_1;
		}
		long_2 = long_1 + long_2;
		if(1)
		{
			short short_2 = 1;
			short_1 = short_1 * short_2;
		}
	}
	if(1)
	{
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_5 = 1;
			int int_6 = 1;
			char_1 = char_1 * char_1;
			int_6 = int_5 + int_1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_2 * unsigned_int_3;
		}
	}
}
void v_termpty_clear_line( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float_2 = float_1 * float_1;
	v_termio_content_change(int_1,char_1,int_2,int_1,-1 );

	float_4 = float_3 + float_3;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_3 = int_2 + int_2;
	float_6 = float_4 * float_5;
	double_1 = double_1 + double_1;
	v_termpty_cells_clear(double_1,short_1,int_2);

	int_1 = int_3 + int_3;
	char_2 = char_1 + char_2;
	int_2 = int_3 * int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1 + short_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	int_6 = int_3 * int_5;
}
void v_termpty_clear_screen( double parameter_1,int parameter_2)
{
	short short_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "e}") < 0)
	{
		short short_1 = 1;
		short_2 = short_1 + short_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "`") > 0)
	{
		double double_1 = 1;
		double_1 = double_2;
	}
	short_2 = short_3;
	v_termpty_cells_clear(double_2,short_4,int_1);

	char_1 = char_1;
	v_termpty_clear_line(long_1,unsigned_int_1,int_1);

	v_termio_content_change(int_1,char_1,int_1,int_1,-1 );

	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void v_termpty_cell_codepoint_att_fill( long parameter_1,double parameter_2,int parameter_3,double parameter_4,int parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_1 = long_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_2 = int_1;
		short_3 = short_1 + short_2;
	}
}
double v__termpty_charset_trans( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long_1 = long_1 + long_1;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 * float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_3 = char_2 * char_2;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_2 = short_1 + short_1;
		}
	}
	return double_1;
}
void v_termio_content_change( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	char char_3 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_1 * double_2;
	int_1 = int_3;
	char controller4vul_1861[3];
	fgets(controller4vul_1861 ,3 ,stdin);
	if( strcmp( controller4vul_1861, "38") < 0)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		double_1 = double_2 + double_2;
		double_1 = double_2;
		double_3 = double_1 + double_2;
		char_1 = char_1 + char_1;
		double_2 = double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_4 = double_1;
			char controller4vul_1862[2];
			fgets(controller4vul_1862 ,2 ,stdin);
			if( strcmp( controller4vul_1862, "-") < 0)
			{
				float float_2 = 1;
				double_3 = v__remove_links(unsigned_int_1,unsigned_int_4,uni_para);

				float_1 = float_2;
				char_1 = char_1 + char_2;
			}
			int_4 = int_2 + int_1;
			double_3 = double_1 * double_1;
		}
	}
	if(1)
	{
	}
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	int_2 = int_3 + int_4;
	double_3 = double_3 + double_3;
	if(1)
	{
		double_2 = double_1 + double_4;
		int_1 = int_3 * int_2;
	}
	if(1)
	{
		char_3 = char_1 * char_3;
		int_2 = int_4 * int_5;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			long_1 = long_1;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
				short_1 = short_1 + short_2;
			}
			unsigned_int_1 = unsigned_int_5 * unsigned_int_6;
			int_4 = int_6 + int_2;
		}
	}
	if(1)
	{
		char char_4 = 1;
		long_1 = long_1 + long_1;
		double_2 = double_4 + double_2;
		char_1 = char_3 + char_1;
		char_4 = char_4 * char_4;
		char_1 = char_3 * char_2;
		if(1)
		{
			int_5 = int_6;
		}
	}
}
void v_termpty_text_append( double parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	int int_5 = 1;
	short_3 = short_1 + short_2;
	short_3 = short_1 * short_4;
	int_1 = int_1 * int_2;
	int_1 = int_2;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_3 = 1;
		long long_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double_2 = double_1 * double_3;
		if(1)
		{
			long_1 = long_1;
			int_4 = int_2 + int_3;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			double_4 = double_2 * double_4;
			double_3 = double_2 + double_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				short_6 = short_3 + short_5;
			}
		}
		short_5 = short_3 * short_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		char controller4vul_1859[2];
		fgets(controller4vul_1859 ,2 ,stdin);
		if( strcmp( controller4vul_1859, "i") > 0)
		{
			unsigned int unsigned_int_3 = 1;
			char controller4vul_1860[2];
			fgets(controller4vul_1860 ,2 ,stdin);
			if( strcmp( controller4vul_1860, "4") < 0)
			{
				v_termio_content_change(int_4,char_1,int_2,int_5,uni_para);

				double_5 = double_1;
			}
			unsigned_int_2 = unsigned_int_3;
		}
		long_3 = long_2 + long_1;
		if(1)
		{
			long long_4 = 1;
			long_3 = long_4 + long_4;
			int_4 = int_3 + int_1;
		}
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			float_1 = float_1;
			char_1 = char_2 * char_1;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_1;
			short_1 = short_1;
			if(1)
			{
				char_2 = char_1;
			}
			if(1)
			{
				double_2 = double_3 * double_1;
			}
			if(1)
			{
				double_1 = double_5 * double_4;
				unsigned_int_1 = unsigned_int_1;
			}
		}
		if(1)
		{
			long long_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			long_1 = long_5 + long_3;
			short_4 = short_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
			}
			double_7 = double_4 + double_6;
			if(1)
			{
				short short_7 = 1;
				float_1 = float_1;
				short_6 = short_7 * short_2;
			}
			double_3 = double_2 + double_1;
		}
	}
}
unsigned int v__csi_arg_get( double parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_1;
	float_1 = float_1;
	int_1 = int_1 * int_2;
	long_1 = long_2;
	float_3 = float_2 * float_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return unsigned_int_1;
}
unsigned int v__handle_esc_csi( int parameter_1,long parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	v_termpty_text_append(double_1,short_1,int_1,uni_para);

	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
}
long v__safechar( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "M") > 0)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 * long_2;
	return long_1;
}
int v__handle_esc( int parameter_1,short parameter_2,char parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long long_4 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_7 = 1;
	long long_8 = 1;
	long long_9 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	short_1 = short_1 * short_1;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_2 * double_1;
	double_2 = double_2 * double_3;
	char_1 = char_2 + char_1;
	char_2 = char_2 * char_3;
	double_3 = double_1 * double_1;
	short_1 = short_1 + short_1;
	char_4 = char_4 + char_1;
	double_1 = double_1 + double_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
	double_4 = double_2;
	int_2 = int_2;
	long_4 = long_4;
	double_2 = double_3 * double_4;
	float_3 = float_1 * float_3;
	long_2 = long_3 + long_3;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	if(1)
	{
	}
	short_3 = short_2 * short_1;
	long_6 = long_1 * long_5;
	double_2 = double_4 * double_1;
	if(1)
	{
	}
	double_2 = double_2 + double_2;
	short_1 = short_1 + short_3;
	if(1)
	{
	}
	float_5 = float_4 * float_5;
	float_4 = float_2;
	if(1)
	{
	}
	int_2 = int_3 * int_3;
	double_3 = double_3 * double_4;
	if(1)
	{
	}
	int_4 = int_1 * int_4;
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	char controller4vul_1857[3];
	fgets(controller4vul_1857 ,3 ,stdin);
	if( strcmp( controller4vul_1857, "e>") > 0)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
		double_3 = double_1 + double_1;
		int_3 = int_2 + int_1;
		int_2 = int_2 * int_3;
		int_4 = int_3;
		char controller4vul_1858[2];
		fgets(controller4vul_1858 ,2 ,stdin);
		if( strcmp( controller4vul_1858, "k") < 0)
		{
			unsigned_int_6 = v__handle_esc_csi(int_1,long_7,double_3,uni_para);

			double_2 = double_3;
		}
		long_8 = long_5 * long_3;
		long_8 = long_3 * long_1;
		if(1)
		{
			int int_5 = 1;
			int_1 = int_1;
			int_4 = int_4 * int_5;
			float_2 = float_5 * float_3;
		}
	}
	if(1)
	{
	}
	long_6 = long_9 * long_4;
	int_6 = int_4 * int_4;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_7;
	float_3 = float_3 * float_3;
	long_9 = long_8 * long_5;
	return int_1;
}
void v_termpty_cell_fill( unsigned int parameter_1,int parameter_2,char parameter_3,int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_1 + short_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double_1 = double_1 * double_1;
			char_3 = char_1 + char_2;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			int_2 = int_1 * int_1;
			short_5 = short_3 + short_4;
		}
	}
}
void v_termpty_cells_fill( unsigned int parameter_1,int parameter_2,double parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float_2 = float_1 * float_1;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	v_termpty_cell_fill(unsigned_int_3,int_1,char_1,int_2);

}
void v_termpty_cells_clear( double parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	v_termpty_cells_fill(unsigned_int_1,int_1,double_1,int_1);

	float_1 = float_1 + float_1;
}
double v__tooltip_del(int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short_1 = short_1 * short_1;
	long_1 = long_2;
	float_3 = float_1 + float_2;
	return double_1;
}
int v__tooltip_content(double parameter_2,long parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	short_1 = short_2;
	char_1 = v_media_add(char_1,unsigned_int_1,int_2,int_2,char_2,-1 );

	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 * double_1;
	return int_3;
}
void v_MD5Final( short parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	double_3 = double_3 * double_3;
	float_2 = float_1 + float_1;
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		double_3 = double_4 + double_5;
		long_2 = long_1 * long_1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		float_2 = float_3 + float_2;
	}
	if(1)
	{
		short_1 = short_1 * short_1;
	}
	v_byteReverse(short_2,int_1);

	float_4 = float_1 + float_1;
	long_3 = long_2 * long_3;
	short_1 = short_1 * short_2;
	float_2 = float_2 + float_2;
	int_1 = int_2 * int_3;
	v_MD5Transform(int_4,char_1);

	long_1 = long_1 + long_2;
	int_4 = int_4;
}
void v_MD5Transform( int parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	long long_4 = 1;
	short short_5 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_6 = 1;
	int int_8 = 1;
	short short_7 = 1;
	int int_9 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_8 = 1;
	char_2 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 + int_2;
	short_1 = short_1 + short_2;
	double_2 = double_1 * double_1;
	double_1 = double_1 + double_1;
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_2 = short_2;
	double_1 = double_3;
	long_1 = long_1 * long_2;
	double_2 = double_3 + double_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_1 = short_3;
	double_6 = double_5 * double_4;
	double_7 = double_4 + double_7;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	short_4 = short_2 * short_3;
	float_2 = float_1 + float_1;
	double_6 = double_4;
	double_3 = double_5;
	unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_5;
	unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_8;
	long_2 = long_2 * long_3;
	unsigned_int_8 = unsigned_int_2 * unsigned_int_4;
	int_3 = int_4 + int_3;
	int_1 = int_2 * int_5;
	double_1 = double_5 + double_7;
	long_2 = long_2 + long_3;
	short_3 = short_2 + short_3;
	unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
	float_3 = float_2 * float_1;
	short_3 = short_1 + short_3;
	char_5 = char_3 + char_4;
	int_6 = int_4 * int_6;
	char_4 = char_6 * char_6;
	long_4 = long_1 + long_2;
	char_4 = char_3;
	int_6 = int_4 * int_4;
	int_1 = int_1 + int_2;
	short_1 = short_5 * short_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_6;
	int_7 = int_3 * int_2;
	unsigned_int_8 = unsigned_int_9;
	double_6 = double_7;
	short_6 = short_4 + short_3;
	int_2 = int_7;
	int_7 = int_1 * int_4;
	char_1 = char_4 + char_6;
	int_8 = int_2 * int_4;
	double_4 = double_2 + double_3;
	double_3 = double_5;
	short_3 = short_3 * short_7;
	double_2 = double_2 * double_4;
	float_1 = float_3;
	double_1 = double_7 + double_4;
	int_2 = int_8 + int_2;
	unsigned_int_6 = unsigned_int_4;
	double_5 = double_6 + double_5;
	int_4 = int_2 + int_9;
	unsigned_int_6 = unsigned_int_8 + unsigned_int_7;
	float_1 = float_4 * float_5;
	short_7 = short_5 + short_3;
	double_7 = double_6 * double_6;
	double_8 = double_7;
	int_9 = int_7 + int_2;
	int_7 = int_3 * int_5;
}
void v_byteReverse( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_3 = double_1 + double_2;
}
void v_MD5Update( int parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1 + float_2;
	short_3 = short_1 + short_2;
	int_1 = int_2;
	char_1 = char_1 + char_1;
	short_4 = short_2 * short_4;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	short_3 = short_5 * short_5;
	unsigned_int_4 = unsigned_int_3;
	int_2 = int_1 + int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	double_2 = double_1 + double_1;
	v_byteReverse(short_5,int_1);

	unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
	char_2 = char_2 * char_1;
	double_1 = double_3 * double_1;
	short_5 = short_5 * short_1;
	double_4 = double_2 + double_4;
	int_2 = int_1 + int_3;
	short_2 = short_2 * short_5;
	v_MD5Transform(int_2,char_1);

	long_3 = long_1 + long_2;
}
void v_MD5Init( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 * short_2;
	char_1 = char_2;
}
void v_gravatar_tooltip( long parameter_1,short parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_6 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	short_1 = short_2;
	double_1 = v__tooltip_del(int_1);

	double_1 = double_1;
	short_1 = short_3 + short_1;
	int_4 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_1 * float_2;
	int_5 = int_2 * int_3;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if(remainder_check(controller_2,100,2))
	{
	}
	int_1 = v__tooltip_content(double_1,long_1);

	int_6 = int_2 + int_3;
	long_1 = long_1 + long_2;
	v_MD5Init(char_1);

	char_2 = char_2 * char_1;
	float_2 = float_2 + float_3;
	double_1 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		float_2 = float_1 * float_3;
	}
	float_1 = float_4 * float_1;
	unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
	v_MD5Update(int_2,short_2,int_5);

	long_1 = long_2 + long_2;
	double_3 = double_1 + double_3;
	v_MD5Final(short_3,unsigned_int_3);

}
float v__cb_link_drag_done(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long_3 = long_1 * long_2;
	double_2 = double_1 * double_1;
	long_1 = long_1 * long_2;
	int_1 = int_1 + int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "x") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_2;
	}
	unsigned_int_1 = unsigned_int_2;
	return float_3;
}
int v__cb_link_drag_accept(unsigned int parameter_2,long parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
short v__cb_link_drag_move(char parameter_2,double parameter_3,int parameter_4,float parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float_2 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_2 * float_1;
	char_1 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
			float_1 = float_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
		}
	}
	return short_1;
}
short v__cb_link_icon_new(long parameter_2,double parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int_1 = int_2;
	int_3 = int_3 * int_3;
	double_1 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_3;
	double_3 = double_1 * double_3;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	return short_1;
}
short v__cb_link_move(char parameter_2,long parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float_1 = v__cb_link_drag_done(int_1);

	int_1 = int_1;
	int_2 = v__cb_link_drag_accept(unsigned_int_1,long_1);

	char_2 = char_1 + char_2;
	short_1 = v__cb_link_icon_new(long_1,double_1,short_1);

	float_1 = float_2 * float_2;
	short_1 = short_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	long_2 = long_2;
	if(1)
	{
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		float float_4 = 1;
		int_3 = int_1 + int_1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		short_2 = v__cb_link_drag_move(char_3,double_1,int_1,float_3);

		int_4 = int_4 * int_2;
		if(1)
		{
			float_4 = float_1 + float_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		}
		float_4 = float_3;
		int_4 = int_3 * int_3;
	}
	return short_1;
}
double v__cb_link_up_delay()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char_1 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = v__activate_link(double_1,float_1);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	}
	int_3 = int_1 + int_2;
	return double_2;
}
short v__cb_link_up(short parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int_2 = int_1 * int_2;
	int_2 = int_3;
	int_2 = int_2 + int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		double double_2 = 1;
		char_2 = char_1 * char_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_1 = v__cb_link_up_delay();

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		short_1 = short_2;
		if(1)
		{
			if(1)
			{
				char char_3 = 1;
				char char_4 = 1;
				char_4 = char_1 + char_3;
			}
			if(1)
			{
				int_3 = int_1 + int_2;
			}
		}
		double_1 = double_2;
	}
	return short_2;
}
void v_term_focus( unsigned int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	short_1 = short_1;
	v__term_is_focused(float_2);

	char_1 = char_1 * char_2;
	int_3 = int_1 * int_2;
}
void v__term_is_focused( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
}
void v_term_unfocus( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 * double_1;
	long_1 = long_1 + long_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	double_4 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_1;
	v__term_is_focused(float_1);

}
int v__cb_ctxp_del(double parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = short_2;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_2;
	v_term_unfocus(int_2);

	int_3 = int_1 * int_1;
	double_4 = double_1 + double_3;
	return int_3;
	v_term_focus(unsigned_int_1);

}
short v__cb_ctxp_dismissed(long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_3 + int_2;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	return short_1;
}
long v__cb_ctxp_link_copy(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int_2 = int_1 + int_1;
	int_2 = int_2 + int_3;
	int_1 = int_1;
	int_4 = int_2 + int_3;
	int_1 = v__take_selection_text(char_1,double_1,short_1,-1 );

	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_2 = int_2 + int_1;
	return long_1;
}
double v__screen_visual_bounds()
{
	int int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_1 + int_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_3 = int_1 + int_1;
		double_1 = double_1 + double_2;
	}
	return double_3;
}
double v__draw_cell( char parameter_1,double parameter_2,double parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double double_7 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_1 + long_1;
	short_1 = short_1 + short_1;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	long_3 = long_2 + long_3;
	double_3 = double_3 * double_3;
	long_2 = long_2 + long_4;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		int_1 = int_2 * int_3;
	}
	if(1)
	{
		if(1)
		{
			int_4 = int_3 + int_3;
		}
		if(1)
		{
			int_5 = int_2 * int_4;
		}
	}
	if(1)
	{
		double_1 = double_4;
	}
	if(1)
	{
		long long_5 = 1;
		long_3 = long_3 + long_5;
	}
	if(1)
	{
		double double_5 = 1;
		long long_6 = 1;
		float_1 = float_1 + float_1;
		int_1 = int_3;
		int_1 = int_5;
		int_2 = int_4 + int_5;
		double_5 = double_3 + double_5;
		long_3 = long_6 + long_2;
		int_2 = int_3 + int_2;
	}
	if(1)
	{
		double double_6 = 1;
		double_3 = double_4 + double_6;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3;
	}
	if(1)
	{
		int_1 = int_4 + int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_5;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_1;
		}
	}
	if(1)
	{
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	return double_7;
}
char v__draw_line( long parameter_1,int parameter_2,float parameter_3,int parameter_4,double parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double_1 = v__draw_cell(char_1,double_2,double_3,double_3);

		short_3 = short_1 * short_2;
	}
	return char_2;
}
unsigned int v_termpty_backlog_length( double parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_6 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = v_verify_beacon(char_3,int_1);

	unsigned_int_2 = unsigned_int_2;
	float_3 = float_1 * float_2;
	double_3 = double_2 + double_1;
	int_1 = int_1 * int_1;
	int_1 = int_2;
	int_1 = int_3 * int_4;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_1 = double_4;
	float_2 = float_3 + float_2;
	if(1)
	{
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	float_4 = float_1 * float_1;
	if(1)
	{
		int_5 = int_2 + int_3;
	}
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		int_5 = int_4;
	}
	float_4 = float_3 * float_3;
	if(1)
	{
		short_2 = short_3;
	}
	char_3 = char_3 * char_2;
	if(1)
	{
		short_1 = short_3 + short_2;
	}
	int_4 = int_3 * int_4;
	char_3 = char_2 * char_3;
	int_1 = int_3 * int_6;
	long_1 = long_1 * long_1;
	float_2 = float_4 + float_1;
	long_1 = long_1 * long_1;
	return unsigned_int_1;
}
int v_termio_pty_get( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_1 * int_1;
	return int_1;
}
void v_termio_textgrid_get( unsigned int parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char_1 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
}
unsigned int v_miniview_colors_get( char parameter_1,float parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_2 = 1;
		short_1 = short_2 + short_1;
		v_termio_textgrid_get(unsigned_int_2);

		double_1 = double_1 * double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_2 = double_1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	}
	return unsigned_int_1;
}
char v__deferred_renderer()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float float_4 = 1;
	int int_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 + int_1;
	double_1 = v__screen_visual_bounds();

	char_2 = char_1 * char_1;
	unsigned_int_2 = v_miniview_colors_get(char_1,float_1);

	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_2 = v_termio_scroll_get(unsigned_int_2);

	unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
	char_4 = char_1 + char_3;
	int_1 = int_3;
	float_2 = v_termpty_cellrow_get(unsigned_int_2,int_1,char_1);

	float_3 = float_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = v_termpty_backlog_length(double_2);

	int_1 = int_4 + int_2;
	short_1 = short_1 + short_2;
	float_3 = float_2 + float_2;
	if(1)
	{
	}
	int_4 = int_5 + int_3;
	char_4 = v__draw_line(long_1,int_3,float_4,int_6,double_2);

	long_1 = long_2 + long_2;
	int_6 = int_3 * int_3;
	unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
	char_1 = char_3;
	double_2 = double_3 + double_2;
	double_3 = double_2;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_2 * short_3;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_4 = float_5 * float_1;
		if(1)
		{
			long_3 = long_2 * long_3;
		}
		unsigned_int_7 = unsigned_int_6 * unsigned_int_3;
	}
	short_2 = short_1 * short_2;
	unsigned_int_7 = unsigned_int_2 + unsigned_int_4;
	double_5 = double_4 + double_2;
	if(1)
	{
		unsigned_int_8 = unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_3 + unsigned_int_1;
	}
	char_5 = char_3 + char_5;
	long_3 = long_2 + long_2;
	if(1)
	{
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_9 = 1;
		double_6 = double_1 * double_4;
		long_5 = long_2 + long_4;
		if(1)
		{
			unsigned int unsigned_int_10 = 1;
			unsigned_int_10 = unsigned_int_9 * unsigned_int_5;
			double_2 = double_3 * double_3;
		}
		if(1)
		{
			if(1)
			{
				long long_6 = 1;
				double double_8 = 1;
				int_3 = v_termio_pty_get(float_5);

				int_6 = int_1 * int_2;
				float_2 = float_5 * float_2;
				long_5 = long_6 * long_2;
				double_7 = double_8;
			}
			if(1)
			{
				unsigned_int_8 = unsigned_int_5 * unsigned_int_9;
				double_3 = double_3;
			}
		}
	}
	if(1)
	{
		double_4 = double_7 * double_3;
	}
	double_4 = double_6 * double_2;
	char_1 = char_5 * char_5;
	float_5 = float_1 + float_4;
	int_2 = int_4 + int_2;
	return char_2;
}
float v__queue_render()
{
	char char_1 = 1;
	float float_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = v__deferred_renderer();

		char_2 = char_1 + char_1;
	}
	return float_1;
}
void v_miniview_redraw( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	int_2 = int_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	float_1 = v__queue_render();

}
unsigned int v__block_obj_del( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	long_1 = v__smart_media_del(short_1,double_1);

	long_3 = long_2 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return unsigned_int_1;
}
void v__termpty_is_dblwidth_slow_get( long parameter_1,int parameter_2)
{
	if(1)
	{
	}
	if(1)
	{
		char controller_3[2];
		fgets(controller_3 ,2 ,stdin);
		if( strcmp( controller_3, "!") < 0)
		{
		}
	}
}
short v__termpty_is_dblwidth_get( float parameter_1,int parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return short_1;
	v__termpty_is_dblwidth_slow_get(long_1,int_1);

}
float v_term_preedit_str_get( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long_2 = long_1 + long_1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	float_1 = float_1;
	if(1)
	{
	}
	return float_1;
}
long v_media_get( float parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "p") < 0)
	{
	}
	return long_1;
}
char v__smart_media_clicked(short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			int_1 = int_1;
			float_1 = float_1 * float_1;
			if(1)
			{
				long long_1 = 1;
				long long_3 = 1;
				long long_4 = 1;
				if(1)
				{
					long_1 = long_1;
					double_2 = double_3;
					if(1)
					{
						char_1 = char_1 + char_1;
					}
					if(1)
					{
						int int_2 = 1;
						int int_3 = 1;
						long_2 = v_media_get(float_2);

						unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
						short_1 = v_termio_config_get(float_2);

						int_3 = int_2 * int_3;
						if(1)
						{
							char char_2 = 1;
							float float_3 = 1;
							int_1 = v_media_src_type_get(float_2);

							unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
							char_2 = char_2 + char_1;
							float_3 = float_1;
						}
					}
				}
				long_4 = long_1 * long_3;
			}
		}
	}
	short_2 = short_1 * short_1;
	return char_1;
}
int v_media_control_get( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
	}
	return int_1;
}
unsigned int v__smart_media_stop(char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	return unsigned_int_1;
}
int v__smart_media_pause(long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	double_3 = double_2 + double_2;
	return int_1;
}
unsigned int v__smart_media_play(long parameter_2)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	return unsigned_int_1;
}
long v__smart_media_del(short parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
		char char_1 = 1;
		char_1 = char_1 + char_1;
	}
	return long_1;
}
void v_media_visualize_set( short parameter_1,int parameter_2)
{
	char char_1 = 1;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "+") > 0)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float_1 = float_2;
		}
		if(1)
		{
			int int_1 = 1;
			int_1 = int_1 + int_1;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
}
void v_media_mute_set( float parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
}
void v_media_volume_set( char parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
}
short v__cb_media_vol(long parameter_2,unsigned int parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_2;
	int_5 = int_3 + int_4;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, " s") > 0)
	{
	}
	v_media_volume_set(char_1,double_1);

	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	return short_1;
}
char v__cb_media_pos(unsigned int parameter_2,unsigned int parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 + double_1;
	short_3 = short_1 * short_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	v_media_position_set(char_1,double_2);

	long_1 = long_2;
	return char_1;
}
long v__cb_media_pos_drag_stop(long parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
	float_2 = float_1 + float_1;
	return long_1;
}
double v__cb_media_pos_drag_start(unsigned int parameter_2,long parameter_3,float parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_1;
	v_media_position_set(char_1,double_1);

	short_2 = short_1 + short_2;
	if(1)
	{
	}
	float_2 = float_1 + float_1;
	char_2 = char_1;
	char_3 = char_3;
	return double_1;
}
void v_media_stop( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
	}
	char_1 = char_4 + char_2;
	double_1 = double_1 + double_2;
}
unsigned int v__cb_media_stop(unsigned int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_1;
	return unsigned_int_1;
	v_media_stop(unsigned_int_1);

}
float v__cb_media_pause(unsigned int parameter_2,long parameter_3,double parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	v_media_play_set(char_1,double_1);

	long_3 = long_1 * long_2;
	return float_1;
}
void v_media_play_set( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		int_2 = int_1 + int_1;
		char_1 = char_1 * char_1;
	}
	if(1)
	{
		int int_3 = 1;
		int int_4 = 1;
		int_1 = int_3;
		int_2 = int_1 * int_4;
	}
}
unsigned int v__cb_media_play(double parameter_2,short parameter_3,char parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	v_media_play_set(char_1,double_1);

	float_1 = float_1 * float_2;
	return unsigned_int_1;
}
void v_media_position_set( char parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	char_1 = char_1 + char_1;
	double_1 = double_1 * double_1;
}
short v__cb_mov_ref(double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	char_2 = char_1 + char_2;
	return short_1;
}
double v__cb_mov_progress(short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char_2 = char_1 + char_2;
	if(1)
	{
	}
	double_1 = double_1;
	return double_2;
}
void v__cb_mov_restart()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	int_3 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
long v__cb_mov_decode_stop(char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	double_2 = double_1 + double_1;
	v__cb_mov_restart();

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	return long_1;
}
int v__cb_mov_len_change(float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char_1 = char_2;
	if(1)
	{
	}
	return int_1;
}
unsigned int v__cb_mov_frame_resize(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_2 = double_1 * double_1;
	int_1 = int_2;
	if(1)
	{
	}
	short_3 = short_1 * short_2;
	double_3 = double_2;
	return unsigned_int_1;
	float_1 = v__type_mov_calc(unsigned_int_1,float_2,double_3,double_3,double_2);

}
double v__cb_mov_frame_decode(double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	int_1 = int_1 + int_2;
	float_1 = float_1 + float_1;
	float_2 = float_2 * float_2;
	int_3 = int_4;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "E") < 0)
	{
	}
	int_3 = int_4;
	float_2 = v__type_mov_calc(unsigned_int_2,float_2,double_1,double_2,double_3);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_1 * double_2;
	float_3 = float_3 + float_3;
	return double_3;
}
float v__type_mov_init()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_7 = 1;
	int_3 = int_1 + int_2;
	int_3 = int_3 + int_3;
	float_3 = float_1 + float_2;
	double_1 = double_1 * double_1;
	int_3 = v__cb_mov_len_change(float_2);

	float_1 = v__cb_media_pause(unsigned_int_1,long_1,double_1);

	v_media_play_set(char_1,double_1);

	int_1 = int_3 * int_4;
	unsigned_int_1 = v__cb_media_play(double_1,short_1,char_1);

	int_3 = int_2 + int_2;
	char_2 = char_3;
	char_2 = v__cb_media_pos(unsigned_int_1,unsigned_int_1,float_2);

	double_1 = double_2 + double_3;
	if(1)
	{
		short_1 = short_1 + short_1;
	}
	if(1)
	{
		short_2 = v__cb_media_vol(long_1,unsigned_int_1,float_4);

		int_2 = int_3 * int_4;
		long_1 = v__cb_mov_decode_stop(char_3);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_3 = double_3 + double_3;
	}
	v_media_position_set(char_1,double_2);

	short_1 = short_3;
	char_4 = char_2 + char_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	long_1 = long_1 + long_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	double_2 = double_2 + double_4;
	int_3 = int_4 + int_2;
	if(1)
	{
		double_4 = v_theme_apply(long_1,short_1,char_4);

		char_1 = char_3 + char_3;
	}
	if(1)
	{
		double_4 = v__cb_mov_progress(short_3);

		unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	}
	v_media_visualize_set(short_4,int_1);

	char_4 = char_5 + char_2;
	long_2 = v__cb_media_pos_drag_stop(long_3,long_2,int_2);

	int_3 = int_3 * int_2;
	long_1 = long_1;
	int_1 = int_1;
	int_1 = int_3 + int_1;
	double_4 = double_2 + double_3;
	double_3 = v__cb_mov_frame_decode(double_1);

	double_2 = double_5 + double_3;
	double_6 = v__cb_media_pos_drag_start(unsigned_int_4,long_1,float_5);

	v_media_mute_set(float_4,int_5);

	unsigned_int_1 = unsigned_int_5;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_3;
	unsigned_int_6 = v__cb_mov_frame_resize(int_3);

	short_1 = short_2 * short_3;
	char_4 = char_4;
	char_4 = char_3 * char_1;
	long_3 = long_1 * long_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
	unsigned_int_3 = v__cb_media_stop(unsigned_int_5,unsigned_int_2,unsigned_int_5);

	int_2 = int_4 + int_2;
	short_6 = short_4 * short_5;
	double_4 = double_3 + double_7;
	if(1)
	{
		unsigned int unsigned_int_7 = 1;
		short_3 = v__cb_mov_ref(double_4);

		unsigned_int_4 = unsigned_int_7 * unsigned_int_5;
	}
	if(1)
	{
		double_5 = double_4 + double_5;
	}
	return float_2;
}
char v__cb_edje_preloaded(char parameter_2,double parameter_3,short parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float_1 = float_1 + float_2;
	if(1)
	{
	}
	float_2 = float_1 * float_3;
	unsigned_int_1 = unsigned_int_1;
	return char_1;
}
double v__type_edje_init( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	short_3 = short_1 * short_2;
	long_1 = long_1 + long_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1 + char_1;
	char_2 = v__cb_edje_preloaded(char_3,double_1,short_1);

	v_theme_auto_reload_enable(char_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	long_2 = long_1 * long_2;
	long_3 = long_1 + long_3;
	char_4 = char_3 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_2 = 1;
			int int_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			short short_6 = 1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
			int_2 = int_2 + int_3;
			short_6 = short_4 + short_5;
		}
	}
	return double_1;
}
float v__type_scale_init()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 + long_2;
	double_3 = double_1 * double_3;
	long_2 = v__cb_scale_preloaded(long_3,double_2,-1 );

	float_1 = float_1 * float_1;
	float_1 = float_1 + float_1;
	float_2 = float_1 * float_2;
	char_1 = char_2;
	int_1 = int_2;
	short_1 = short_1 + short_1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	return float_1;
}
void v__cb_img_frame()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 * int_2;
	float_3 = float_1 + float_2;
	double_1 = double_2;
	if(1)
	{
	}
	int_4 = int_1 * int_4;
	float_1 = float_3 + float_2;
	if(1)
	{
		float float_4 = 1;
		double_1 = double_2 * double_1;
		if(1)
		{
			int_1 = int_4 * int_3;
		}
		float_1 = float_2 + float_3;
		float_4 = float_1 * float_4;
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char_3 = char_1 * char_2;
			}
		}
	}
	short_2 = short_1 * short_1;
	double_3 = double_3 + double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
char v__type_img_anim_handle( unsigned int parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = double_1 + double_1;
	long_2 = long_1 + long_2;
	if(1)
	{
	}
	v__cb_img_frame();

	double_2 = double_1 + double_1;
	double_1 = double_2 + double_3;
	if(1)
	{
	}
	int_1 = int_2;
	long_2 = long_1 * long_3;
	return char_1;
}
void v__cb_img_preloaded(long parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
void v__type_img_init( float parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char_1 = char_1 + char_1;
	int_2 = int_1 * int_1;
	double_1 = double_1 * double_2;
	double_3 = double_1 * double_2;
	long_1 = long_1 * long_2;
	int_1 = int_3;
	v__cb_img_preloaded(long_2,char_2);

	long_2 = long_2;
	long_4 = long_3 * long_1;
	char_3 = v__type_img_anim_handle(unsigned_int_1);

	double_2 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_2;
	char_3 = char_3 * char_4;
}
unsigned int v__url_compl_cb(int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_5 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 * int_2;
	float_2 = float_1 * float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_2 = v__smart_calculate(long_1,-1 );

	float_3 = float_2 + float_2;
	float_3 = v__type_mov_init();

	short_2 = short_1 * short_2;
	int_3 = int_2 * int_2;
	short_1 = short_3 + short_2;
	char_2 = char_1 * char_2;
	short_2 = short_3 * short_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	float_1 = v__type_scale_init();

	short_1 = short_2 * short_3;
	int_4 = int_2 + int_2;
	double_2 = double_1 * double_1;
	v__type_img_init(float_4);

	char_3 = char_3;
	double_3 = double_1 + double_3;
	char_1 = char_4 + char_2;
	double_4 = double_1 + double_4;
	double_1 = v__type_edje_init(int_2);

	int_2 = int_1 + int_2;
	double_3 = double_4 * double_2;
	double_6 = double_3 * double_5;
	int_1 = int_1 * int_5;
	long_1 = long_1 * long_2;
	return unsigned_int_4;
}
long v__url_prog_cb(int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long long_3 = 1;
	double_2 = double_1 + double_1;
	long_2 = long_1 * long_2;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_1 = float_1;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		long_2 = long_3 * long_2;
		char_1 = char_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			double_4 = double_1 + double_3;
			float_2 = float_3 + float_4;
			double_3 = double_3 + double_4;
		}
	}
	return long_3;
}
short v__type_thumb_calc( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		short_1 = short_1;
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_3 = 1;
		int_2 = int_3 + int_2;
		long_2 = long_1 + long_1;
		float_1 = float_1 * float_2;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			char_1 = char_2;
			if(1)
			{
				short_2 = short_2 + short_2;
			}
		}
		if(1)
		{
			double double_2 = 1;
			short_1 = short_2 + short_2;
			double_2 = double_1 * double_1;
		}
		float_4 = float_3 + float_4;
		int_5 = int_4 + int_5;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
		double_1 = double_3 + double_1;
	}
	short_3 = short_1;
	short_2 = short_2 * short_3;
	return short_3;
}
float v__type_mov_calc( unsigned int parameter_1,float parameter_2,double parameter_3,double parameter_4,double parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = double_1 + double_1;
	char_3 = char_1 + char_2;
	int_2 = int_1 * int_1;
	if(1)
	{
		double_2 = double_2;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_2 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_3 = 1;
		int int_6 = 1;
		double_2 = double_1 * double_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		char_3 = char_2 + char_4;
		if(1)
		{
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			double double_3 = 1;
			float float_2 = 1;
			double_3 = double_3 + double_1;
			float_1 = float_1 + float_2;
			if(1)
			{
				int int_4 = 1;
				long_1 = long_3;
				int_4 = int_3 * int_2;
				if(1)
				{
					char_2 = char_3 + char_1;
				}
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			unsigned_int_3 = unsigned_int_2;
			if(1)
			{
				int int_5 = 1;
				int_3 = int_3 * int_1;
				int_3 = int_3 * int_5;
				if(1)
				{
					int_2 = int_2 + int_3;
				}
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
			double_2 = double_2 * double_2;
		}
		long_3 = long_3 * long_2;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
		int_6 = int_2 * int_1;
		short_2 = short_1 + short_1;
	}
	short_2 = short_1;
	unsigned_int_4 = unsigned_int_3;
	return float_1;
}
void v__type_edje_calc( long parameter_1,int parameter_2,char parameter_3,short parameter_4,short parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	double_2 = double_2 * double_3;
}
unsigned int v__type_img_calc( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_9 = 1;
	short short_4 = 1;
	double_1 = double_2;
	if(1)
	{
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_1 * short_2;
		int_3 = int_1 + int_2;
	}
	if(1)
	{
		int int_5 = 1;
		int int_6 = 1;
		char char_1 = 1;
		char char_3 = 1;
		int int_8 = 1;
		double double_4 = 1;
		long long_1 = 1;
		char char_4 = 1;
		int_5 = int_3 + int_4;
		if(1)
		{
			double double_3 = 1;
			int_3 = int_4 + int_6;
			double_2 = double_1 + double_3;
			if(1)
			{
				int_5 = int_5 * int_2;
				char_1 = char_1;
				if(1)
				{
					int_1 = int_2 + int_2;
				}
			}
		}
		if(1)
		{
			float float_1 = 1;
			int int_7 = 1;
			float_1 = float_1 + float_1;
			int_7 = int_1 * int_4;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				short_3 = short_1 * short_3;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
				if(1)
				{
					float float_2 = 1;
					float_2 = float_1 + float_1;
				}
			}
			if(1)
			{
				char char_2 = 1;
				int_7 = int_3 + int_1;
				char_3 = char_1 * char_2;
			}
		}
		if(1)
		{
			int_1 = int_5 * int_1;
			int_5 = int_8 * int_2;
		}
		double_1 = double_4 * double_1;
		long_1 = long_1 + long_1;
		int_9 = int_6 + int_8;
		char_3 = char_4;
	}
	int_2 = int_9 + int_4;
	short_3 = short_1 * short_4;
	return unsigned_int_2;
}
long v__cb_scale_preloaded(long parameter_2,double parameter_3,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	short_1 = short_1 * short_2;
	char controller4vul_1895[3];
	fgets(controller4vul_1895 ,3 ,stdin);
	if( strcmp( controller4vul_1895, "#t") < 0)
	{
		strcpy(vul_var, "CWE-761");
		if(uni_para == 273)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "lH") > 0)
	{
		float float_1 = 1;
		float_2 = float_1 * float_1;
		int_1 = int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "o") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long_2 = long_1 + long_2;
		int_3 = int_3 * int_2;
		int_3 = int_1 + int_3;
		float_3 = float_2 * float_2;
		double_2 = double_1 * double_2;
	}
	short_2 = short_2 + short_1;
}
double v__type_scale_calc( float parameter_1,short parameter_2,double parameter_3,long parameter_4,long parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_6 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		float_2 = float_1 * float_1;
	}
	char controller4vul_1891[2];
	fgets(controller4vul_1891 ,2 ,stdin);
	if( strcmp( controller4vul_1891, "z") < 0)
	{
		short short_1 = 1;
		int int_4 = 1;
		short short_3 = 1;
		int_1 = int_1 * int_1;
		char controller4vul_1892[3];
		fgets(controller4vul_1892 ,3 ,stdin);
		if( strcmp( controller4vul_1892, "d]") < 0)
		{
			short_1 = short_1 + short_2;
			int_2 = int_2;
			char controller4vul_1893[2];
			fgets(controller4vul_1893 ,2 ,stdin);
			if( strcmp( controller4vul_1893, "f") < 0)
			{
				int_3 = int_4;
				unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
				char controller4vul_1894[2];
				fgets(controller4vul_1894 ,2 ,stdin);
				if( strcmp( controller4vul_1894, " ") < 0)
				{
					long_1 = v__cb_scale_preloaded(long_2,double_1,uni_para);

					short_1 = short_3;
				}
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
			if(1)
			{
				int int_5 = 1;
				int int_6 = 1;
				int_1 = int_5 + int_1;
				int_4 = int_1 + int_6;
				if(1)
				{
					int_1 = int_3 * int_7;
				}
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_4;
			unsigned_int_4 = unsigned_int_4;
		}
		double_2 = double_2 + double_1;
		short_1 = short_1 * short_3;
		double_3 = double_2 * double_2;
		float_3 = float_3 + float_4;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_5 = 1;
		int int_8 = 1;
		short short_4 = 1;
		double_3 = double_3 * double_3;
		char_1 = char_2;
		float_3 = float_5;
		if(1)
		{
			int_1 = int_2 * int_7;
		}
		if(1)
		{
			int_8 = int_1;
		}
		if(1)
		{
			char char_3 = 1;
			float float_7 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_3 = 1;
			double double_4 = 1;
			char_3 = char_1 + char_1;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
			float_6 = float_6 + float_1;
			float_7 = float_5 + float_4;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_2;
			long_2 = long_1 + long_2;
			int_8 = int_8 * int_2;
			long_3 = long_3 * long_1;
			double_4 = double_3;
		}
		short_2 = short_4;
		char_1 = char_2 * char_2;
	}
	if(1)
	{
		int int_9 = 1;
		int_3 = int_3 * int_9;
		double_2 = double_2 + double_1;
	}
	float_2 = float_4 * float_6;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	return double_5;
}
unsigned int v__unsmooth_timeout(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_3 = double_2 * double_1;
	double_2 = double_4;
	char controller4vul_1889[3];
	fgets(controller4vul_1889 ,3 ,stdin);
	if( strcmp( controller4vul_1889, "$v") > 0)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		char controller4vul_1890[2];
		fgets(controller4vul_1890 ,2 ,stdin);
		if( strcmp( controller4vul_1890, "M") > 0)
		{
			char char_1 = 1;
			double_4 = v__type_scale_calc(float_1,short_1,double_4,long_1,long_2,uni_para);

			char_2 = char_1 * char_2;
		}
		if(1)
		{
			double_2 = double_1 * double_2;
		}
	}
	if(1)
	{
		char char_3 = 1;
		char_2 = char_3 + char_3;
	}
	return unsigned_int_3;
}
short v__smooth_handler( double parameter_1,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_3 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	char controller4vul_1885[2];
	fgets(controller4vul_1885 ,2 ,stdin);
	if( strcmp( controller4vul_1885, "&") > 0)
	{
		char controller4vul_1886[2];
		fgets(controller4vul_1886 ,2 ,stdin);
		if( strcmp( controller4vul_1886, "5") > 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char_2 = char_1 * char_2;
			short_1 = short_1 + short_2;
			char controller4vul_1887[3];
			fgets(controller4vul_1887 ,3 ,stdin);
			if( strcmp( controller4vul_1887, "$s") > 0)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float_3 = float_1 + float_2;
				char controller4vul_1888[3];
				fgets(controller4vul_1888 ,3 ,stdin);
				if( strcmp( controller4vul_1888, "b/") < 0)
				{
					float float_4 = 1;
					unsigned_int_2 = v__unsmooth_timeout(uni_para);

					float_2 = float_4 + float_1;
				}
			}
			if(1)
			{
				long long_1 = 1;
				long_1 = long_1;
			}
			if(1)
			{
				int_3 = int_1 * int_2;
			}
			double_2 = double_1 * double_1;
		}
	}
	if(1)
	{
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "9U") > 0)
		{
			int_3 = int_1 + int_2;
		}
		unsigned_int_1 = unsigned_int_3;
	}
	return short_3;
}
unsigned int v__smart_calculate( long parameter_1,int uni_para)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1 + short_1;
	double_2 = double_1 + double_1;
	char controller4vul_1884[3];
	fgets(controller4vul_1884 ,3 ,stdin);
	if( strcmp( controller4vul_1884, "Z&") > 0)
	{
		short_2 = v__smooth_handler(double_3,uni_para);

	}
	double_1 = double_4;
	if(1)
	{
		double_1 = double_4 * double_2;
	}
	if(1)
	{
		double_3 = double_4 * double_2;
	}
	float_2 = float_1 * float_2;
	int_1 = int_1;
	int_3 = int_2 * int_2;
	long_2 = long_1 * long_2;
	int_1 = int_4;
	double_4 = double_1 + double_3;
	char_1 = char_2;
	double_6 = double_5 + double_6;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 + float_2;
	double_2 = double_1 * double_5;
	long_1 = long_3 + long_4;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_3 * int_1;
	long_1 = long_2;
	if(1)
	{
		short short_4 = 1;
		short_4 = short_3 * short_2;
		double_1 = double_5 * double_2;
	}
	if(1)
	{
		short_2 = short_3;
		int_3 = int_4;
	}
	return unsigned_int_3;
}
int v__smart_move( double parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_1;
}
void v__smart_resize( double parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	double_2 = double_2 + double_2;
	if(1)
	{
	}
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2;
}
float v__smart_del( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double_2 = double_1 * double_2;
	if(1)
	{
	}
	if(1)
	{
		short_1 = short_1;
	}
	if(1)
	{
		short_1 = short_1 * short_2;
		int_2 = int_1 * int_2;
		long_1 = long_1 + long_1;
	}
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_2 * double_3;
	if(1)
	{
		if(1)
		{
			int_2 = int_2 + int_2;
		}
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	if(1)
	{
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_1 + double_4;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_3;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long_4 = long_1 + long_3;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_3 * int_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		short_3 = short_2 + short_3;
	}
	if(1)
	{
		int int_5 = 1;
		int_3 = int_5 * int_2;
	}
	short_3 = short_3 + short_1;
	double_6 = double_6;
	return float_2;
}
long v__smart_add( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long_2 = long_1 * long_1;
	double_1 = double_2;
	int_1 = int_1;
	double_3 = double_2 + double_2;
	int_3 = int_1 * int_2;
	short_3 = short_1 + short_2;
	int_3 = int_4 + int_5;
	float_3 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1;
	return long_1;
}
void v__smart_init(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned_int_1 = v__smart_calculate(long_1,uni_para);

	double_1 = double_1 + double_1;
	long_2 = long_2 * long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_3;
	double_2 = double_1 * double_1;
	short_3 = short_2 * short_2;
	short_3 = short_3 * short_3;
	double_1 = double_1 + double_1;
	double_1 = double_2 + double_3;
	long_4 = long_3 * long_4;
}
char v_media_add( char parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,char parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	float float_4 = 1;
	char char_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_1 * double_2;
	long_1 = long_2;
	char_1 = char_1 * char_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	double_3 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	if(1)
	{
	}
	long_3 = long_3 + long_3;
	double_1 = double_1 + double_1;
	double_2 = double_1 * double_2;
	double_3 = double_2 + double_3;
	long_5 = long_2 * long_4;
	char controller4vul_1880[2];
	fgets(controller4vul_1880 ,2 ,stdin);
	if( strcmp( controller4vul_1880, "4") > 0)
	{
		short short_3 = 1;
		char controller4vul_1881[3];
		fgets(controller4vul_1881 ,3 ,stdin);
		if( strcmp( controller4vul_1881, "$;") > 0)
		{
			long long_6 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
			long_1 = long_6 + long_6;
			if(1)
			{
				long long_7 = 1;
				unsigned int unsigned_int_4 = 1;
				long_7 = long_4 * long_2;
				double_2 = double_3 * double_2;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
			}
			if(1)
			{
				long_3 = long_4 + long_5;
				unsigned_int_6 = unsigned_int_5 * unsigned_int_5;
				double_3 = double_1;
			}
			if(1)
			{
				int_1 = int_1 * int_1;
			}
			if(1)
			{
				float_1 = float_2;
			}
			if(1)
			{
				int_2 = int_1 + int_1;
			}
			if(1)
			{
				double_2 = double_1 + double_2;
			}
			if(1)
			{
				unsigned int unsigned_int_7 = 1;
				unsigned_int_7 = unsigned_int_8;
			}
			if(1)
			{
				int_1 = int_1 + int_1;
				float_1 = float_1 * float_2;
				int_1 = int_2;
				char_1 = char_2 * char_2;
				short_3 = short_1 + short_2;
				int_2 = int_2 + int_2;
				double_3 = double_3 * double_1;
			}
			char controller4vul_1882[2];
			fgets(controller4vul_1882 ,2 ,stdin);
			if( strcmp( controller4vul_1882, "K") > 0)
			{
				int_2 = int_3 + int_1;
				long_1 = long_4 * long_6;
				int_4 = int_2 + int_1;
				char controller4vul_1883[3];
				fgets(controller4vul_1883 ,3 ,stdin);
				if( strcmp( controller4vul_1883, "4r") < 0)
				{
					v__smart_init(uni_para);

					int_3 = int_1;
					if(1)
					{
						double_4 = double_1 + double_4;
						short_2 = short_3 * short_2;
					}
					if(1)
					{
						short_1 = short_1 + short_3;
						if(1)
						{
							double double_5 = 1;
							double double_6 = 1;
							double_5 = double_1 * double_5;
							char_3 = char_3 + char_2;
							double_1 = double_2 + double_6;
						}
						if(1)
						{
							long long_8 = 1;
							double double_7 = 1;
							double_3 = double_4 * double_4;
							long_8 = long_2;
							short_2 = short_1 * short_2;
							char_3 = char_4 + char_1;
							short_4 = short_1;
							long_1 = long_4;
							int_1 = int_3 + int_4;
							double_1 = double_7 * double_1;
							int_3 = int_3;
						}
					}
				}
				if(1)
				{
					short_3 = short_1;
				}
			}
		}
		char controller_6[2];
		fgets(controller_6 ,2 ,stdin);
		if( strcmp( controller_6, "X") < 0)
		{
			short_3 = short_2 + short_4;
		}
	}
	if(1)
	{
		if(1)
		{
			long_2 = long_2 + long_5;
			float_1 = float_1 + float_2;
		}
	}
	if(1)
	{
		double double_8 = 1;
		char char_5 = 1;
		if(1)
		{
			float float_3 = 1;
			unsigned_int_3 = unsigned_int_6;
			float_3 = float_3 + float_2;
		}
		double_4 = double_8 * double_8;
		if(1)
		{
			char_4 = char_2;
			float_4 = float_4;
		}
		char_5 = char_4 * char_5;
		if(1)
		{
			unsigned_int_3 = unsigned_int_8 * unsigned_int_3;
			char_1 = char_3 * char_4;
		}
		int_4 = int_2 + int_3;
		if(1)
		{
			char_6 = char_5 * char_6;
			int_3 = int_2 + int_1;
		}
		long_2 = long_3;
		short_2 = short_4 * short_2;
	}
	int_4 = int_3;
	int_4 = int_5 * int_6;
	float_2 = float_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_8;
	short_1 = short_2 * short_5;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_5;
	short_1 = short_6 * short_5;
	if(1)
	{
		float float_5 = 1;
		float_1 = float_4 + float_5;
	}
	return char_6;
}
long v__block_media_activate( char parameter_1,long parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float_1 = float_1 * float_2;
	char_2 = char_1 + char_1;
	int_1 = int_1 + int_1;
	char_3 = char_3 * char_3;
	int_2 = int_3;
	char controller4vul_1879[2];
	fgets(controller4vul_1879 ,2 ,stdin);
	if( strcmp( controller4vul_1879, "<") < 0)
	{
		char_1 = v_media_add(char_1,unsigned_int_1,int_1,int_3,char_3,uni_para);

		double_2 = double_1 * double_2;
	}
	if(1)
	{
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		double_2 = double_1 + double_3;
	}
	if(1)
	{
		double_3 = double_3;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	}
	short_1 = short_1 + short_2;
	int_4 = int_4;
	if(1)
	{
		int int_5 = 1;
		int_2 = int_5;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	int_4 = int_6 * int_3;
	double_4 = double_1 + double_2;
	long_1 = long_1 * long_1;
	long_1 = long_2;
	if(1)
	{
		double_4 = double_1 * double_2;
		long_3 = long_3;
	}
	double_6 = double_5 + double_3;
	double_4 = double_2 + double_4;
	long_2 = long_3 + long_1;
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_1;
	}
	return long_3;
}
float v__block_edje_message_cb(short parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_6 = 1;
	float float_7 = 1;
	long long_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_8 = 1;
	short short_7 = 1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	v_termpty_write(unsigned_int_1,int_1,int_2);

	float_2 = float_1 * float_1;
	long_3 = long_1 * long_2;
	float_4 = float_3 * float_1;
	short_3 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		double_3 = double_1 * double_2;
	}
	double_2 = double_1 + double_4;
	if(1)
	{
	}
	short_1 = short_2 + short_4;
	int_4 = int_3 * int_3;
	float_3 = float_4 + float_1;
	double_3 = double_3 * double_2;
	double_2 = double_4 * double_2;
	short_4 = short_2;
	double_1 = double_4;
	float_5 = float_4 * float_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_2;
	char_2 = char_1 + char_2;
	short_6 = short_5 * short_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	float_6 = float_6;
	int_3 = int_4;
	int_2 = int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_3 = float_5 + float_7;
		long_1 = long_2 + long_4;
	}
	int_1 = int_2 * int_3;
	char_1 = char_2 + char_3;
	double_5 = double_5 * double_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
	int_2 = int_2 + int_4;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_2 = int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short_5 = short_2 + short_5;
		long_4 = long_5 * long_4;
		double_2 = double_4 * double_4;
	}
	char_3 = char_1 + char_1;
	int_2 = int_1 * int_1;
	int_1 = int_2 + int_3;
	int_4 = int_1 * int_5;
	int_6 = int_4 * int_3;
	int_1 = int_3 + int_6;
	double_5 = double_1 * double_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_4 = double_2 + double_6;
		long_2 = long_5 + long_1;
		double_5 = double_7 * double_4;
	}
	int_1 = int_2 * int_5;
	double_2 = double_1 * double_2;
	float_2 = float_5 * float_7;
	double_6 = double_7 + double_3;
	double_8 = double_8 + double_7;
	int_5 = int_4 + int_4;
	int_6 = int_1 + int_4;
	short_3 = short_5 * short_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	int_5 = int_7 * int_1;
	int_7 = int_6;
	int_4 = int_4 + int_3;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	int_2 = int_4 * int_7;
	unsigned_int_6 = unsigned_int_6 + unsigned_int_5;
	unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
	char_4 = char_2 * char_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double_8 = double_2 * double_3;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_6;
		int_2 = int_4 * int_5;
	}
	double_1 = double_5;
	int_3 = int_1 * int_4;
	unsigned_int_2 = unsigned_int_6 + unsigned_int_7;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_7;
	float_4 = float_1 * float_6;
	float_6 = float_5 + float_7;
	int_3 = int_8 + int_1;
	short_1 = short_7 + short_3;
	unsigned_int_7 = unsigned_int_4 * unsigned_int_2;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		short short_8 = 1;
		short short_9 = 1;
		int int_9 = 1;
		short_9 = short_6 * short_8;
		double_4 = double_7 * double_6;
		int_9 = int_4 + int_4;
	}
	char_3 = char_2 * char_4;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_7;
	short_6 = short_1 * short_7;
	return float_6;
}
void v_termpty_write( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1;
	float_2 = float_1 + float_1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ":N") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
double v__block_edje_signal_cb(int parameter_2,float parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	long_1 = long_1 + long_1;
	double_1 = double_2 * double_1;
	short_2 = short_1 * short_2;
	float_1 = float_1 + float_1;
	char_3 = char_1 * char_2;
	if(1)
	{
	}
	if(1)
	{
		float_3 = float_2 * float_1;
	}
	short_1 = short_1 + short_2;
	if(1)
	{
	}
	if(1)
	{
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		float_3 = float_1 + float_2;
		float_4 = float_5;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = double_1 * double_3;
		long_2 = long_2;
		unsigned_int_1 = unsigned_int_2;
		char_4 = char_2 * char_2;
		int_2 = int_1 + int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		int_2 = int_2 * int_1;
		char_3 = char_4 * char_3;
	}
	return double_2;
	v_termpty_write(unsigned_int_2,int_3,int_3);

}
void v_termpty_block_chid_update( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
	}
	double_2 = double_3 + double_1;
}
int v__block_edje_cmds( int parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	v_termpty_block_chid_update(double_1,float_1);

	float_1 = v__block_edje_message_cb(short_1,char_1,int_1);

	float_2 = float_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
	double_2 = v__block_edje_signal_cb(int_2,float_3,double_1);

}
int v_homedir_get( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	float_2 = float_1 + float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = double_1 * double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	return int_2;
}
int v__block_edje_activate( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	int_1 = v_homedir_get(char_1,long_1);

	int_2 = int_2;
	long_1 = long_1 + long_1;
	if(1)
	{
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		double_2 = v_config_theme_path_default_get(double_2);

		short_1 = short_1 + short_1;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		int int_3 = 1;
		int_3 = int_3 * int_3;
		if(1)
		{
			char char_2 = 1;
			char char_3 = 1;
			char_2 = char_2 * char_3;
			char_1 = char_1 * char_3;
		}
		if(1)
		{
			long long_3 = 1;
			int_1 = v__block_edje_cmds(int_4,unsigned_int_1,int_2,int_5);

			short_1 = short_2 + short_2;
			long_3 = long_3 + long_1;
		}
	}
	short_1 = short_3 + short_2;
	char_4 = char_1 + char_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	short_1 = short_1 + short_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
	}
	return int_4;
}
long v__block_activate( char parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_3 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_1878[2];
	fgets(controller4vul_1878 ,2 ,stdin);
	if( strcmp( controller4vul_1878, "s") < 0)
	{
		long_1 = v__block_media_activate(char_1,long_1,uni_para);

	}
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_3;
	}
	if(1)
	{
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		int int_4 = 1;
		int_4 = int_1 * int_4;
	}
	return long_1;
}
char v_termpty_block_get( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
int v_termpty_block_id_get( short parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	double_1 = double_2;
	double_1 = double_2 * double_3;
	short_2 = short_1 * short_2;
	return int_1;
}
void v_termpty_backscroll_adjust( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = v_verify_beacon(char_1,int_1);

	int_1 = int_2 + int_1;
}
short v__smart_apply( char parameter_1,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	long long_6 = 1;
	char char_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_5 = 1;
	char char_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_4 = 1;
	char char_3 = 1;
	int int_8 = 1;
	int int_9 = 1;
	char char_4 = 1;
	int int_11 = 1;
	int int_12 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_13 = 1;
	char char_5 = 1;
	int int_14 = 1;
	char char_6 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_15 = 1;
	int int_16 = 1;
	long long_8 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_10 = 1;
	float float_7 = 1;
	float float_8 = 1;
	int int_17 = 1;
	float float_9 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_10 = 1;
	unsigned int unsigned_int_12 = 1;
	long long_12 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned int unsigned_int_15 = 1;
	unsigned int unsigned_int_16 = 1;
	short short_7 = 1;
	int_1 = int_1 * int_1;
	double_1 = double_1 * double_2;
	int_2 = int_1 + int_2;
	double_1 = double_3 + double_2;
	double_4 = double_3 + double_2;
	int_4 = int_1 + int_3;
	float_3 = float_1 + float_2;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_4 * long_5;
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_1 + short_2;
	double_1 = double_5 + double_5;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_3 = short_1 * short_1;
		short_1 = short_3 + short_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_4 = double_4;
		if(1)
		{
			unsigned_int_5 = unsigned_int_2;
		}
		float_4 = float_2 * float_1;
		if(1)
		{
			long_3 = long_6 * long_2;
		}
		float_4 = float_2 * float_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						char_1 = char_1 + char_1;
					}
					short_1 = short_3 * short_3;
				}
				double_1 = double_4 + double_6;
				if(1)
				{
					unsigned_int_3 = unsigned_int_6 + unsigned_int_4;
				}
				if(1)
				{
					long_2 = long_6 + long_1;
				}
				double_1 = double_7 * double_1;
				int_4 = int_3;
				unsigned_int_8 = unsigned_int_7 * unsigned_int_5;
				int_1 = int_2 * int_5;
				short_2 = short_3;
				char_2 = char_1 + char_1;
			}
			char controller4vul_1874[3];
			fgets(controller4vul_1874 ,3 ,stdin);
			if( strcmp( controller4vul_1874, "<8") > 0)
			{
				int_5 = int_4;
				char_2 = char_2 * char_1;
				if(1)
				{
					if(1)
					{
						int_4 = int_5 + int_3;
					}
					float_3 = float_4 * float_5;
					unsigned_int_8 = unsigned_int_2 * unsigned_int_7;
					float_2 = float_6 + float_3;
					int_7 = int_6 + int_1;
					short_2 = short_4 + short_4;
					double_4 = double_3;
					char_2 = char_3;
					unsigned_int_5 = unsigned_int_7;
					int_8 = int_7 + int_8;
					long_5 = long_3 * long_1;
					double_2 = double_5 + double_1;
					int_9 = int_5 * int_3;
					if(1)
					{
						int int_10 = 1;
						short_4 = short_4 * short_2;
						unsigned_int_1 = unsigned_int_8;
						double_5 = double_3 + double_1;
						int_7 = int_2 * int_10;
						int_9 = int_5 + int_10;
					}
				}
				char controller4vul_1875[2];
				fgets(controller4vul_1875 ,2 ,stdin);
				if( strcmp( controller4vul_1875, "r") < 0)
				{
					long long_7 = 1;
					char controller4vul_1876[2];
					fgets(controller4vul_1876 ,2 ,stdin);
					if( strcmp( controller4vul_1876, "G") > 0)
					{
						char controller4vul_1877[3];
						fgets(controller4vul_1877 ,3 ,stdin);
						if( strcmp( controller4vul_1877, "-!") < 0)
						{
							long_5 = v__block_activate(char_2,int_6,uni_para);

							int_4 = int_8 * int_6;
						}
						int_5 = int_3;
					}
					double_3 = double_5 + double_5;
					if(1)
					{
						char_4 = char_2 * char_4;
					}
					if(1)
					{
						float_6 = float_4;
					}
					long_3 = long_1 + long_2;
					double_1 = double_4 * double_7;
					double_4 = double_1 + double_6;
					long_1 = long_1 + long_7;
					int_3 = int_7 + int_11;
					int_12 = int_1 * int_7;
					char controller_3[3];
					fgets(controller_3 ,3 ,stdin);
					if( strcmp( controller_3, "W?") < 0)
					{
						unsigned_int_9 = unsigned_int_2;
					}
				}
				if(1)
				{
					int_9 = int_13;
					unsigned_int_1 = unsigned_int_5 * unsigned_int_8;
					double_4 = double_1 + double_7;
					double_6 = double_7 * double_1;
					char_2 = char_5 + char_2;
					int_2 = int_14;
					if(1)
					{
						char_6 = char_2 * char_2;
						double_4 = double_7 + double_5;
					}
					if(1)
					{
						double_8 = double_2;
						unsigned_int_2 = unsigned_int_6 * unsigned_int_9;
					}
					if(1)
					{
						char_1 = char_6 * char_2;
					}
					if(1)
					{
						if(1)
						{
							double_1 = double_4;
						}
						if(1)
						{
							short_3 = short_1 + short_4;
						}
					}
					if(1)
					{
						char_6 = char_6;
					}
					if(1)
					{
						double_9 = double_9;
					}
					if(1)
					{
						int_15 = int_8 + int_11;
						unsigned_int_3 = unsigned_int_5 * unsigned_int_7;
						double_9 = double_1 + double_8;
						int_5 = int_16;
						short_1 = short_1 * short_4;
						int_12 = int_16 * int_5;
						double_7 = double_8 * double_3;
					}
					if(1)
					{
						long_8 = long_1 + long_1;
					}
					if(1)
					{
						long_2 = long_1 * long_2;
					}
					if(1)
					{
						if(1)
						{
							unsigned_int_4 = unsigned_int_6 + unsigned_int_3;
						}
						int_11 = int_7 * int_3;
					}
					double_9 = double_4 * double_8;
					unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
					unsigned_int_2 = unsigned_int_1;
					unsigned_int_4 = unsigned_int_10 + unsigned_int_8;
					if(1)
					{
						unsigned_int_2 = unsigned_int_2 * unsigned_int_8;
						double_4 = double_4 * double_8;
					}
					if(1)
					{
						int_8 = int_14 * int_6;
						double_5 = double_3 + double_10;
					}
					float_5 = float_7 * float_7;
					float_5 = float_7 + float_8;
					double_5 = double_4 + double_4;
					unsigned_int_2 = unsigned_int_6;
					if(1)
					{
						int_16 = int_12 * int_11;
					}
				}
			}
		}
		double_6 = double_6;
		char controller_21[3];
		fgets(controller_21 ,3 ,stdin);
		if( strcmp( controller_21, "e#") > 0)
		{
			int_17 = int_12 * int_16;
		}
	}
	double_3 = double_9;
	if(1)
	{
		short short_5 = 1;
		long long_9 = 1;
		long long_11 = 1;
		short_4 = short_2 * short_5;
		unsigned_int_1 = unsigned_int_3;
		short_5 = short_3 + short_1;
		unsigned_int_3 = unsigned_int_1;
		double_4 = double_1 * double_2;
		char_3 = char_4 + char_3;
		if(1)
		{
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_9 = double_5 + double_4;
				unsigned_int_3 = unsigned_int_2;
				unsigned_int_1 = unsigned_int_9 * unsigned_int_3;
				if(1)
				{
					int_11 = int_2 + int_9;
				}
				int_6 = int_5;
				if(1)
				{
					if(1)
					{
						double_8 = double_2 * double_9;
						double_3 = double_10 * double_8;
						long_1 = long_9 * long_8;
					}
				}
				if(1)
				{
					float float_10 = 1;
					short_1 = short_4 * short_5;
					float_6 = float_9 * float_10;
				}
				double_8 = double_6 + double_10;
				char_4 = char_7 + char_4;
				unsigned_int_4 = unsigned_int_7 * unsigned_int_11;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_9;
				double_2 = double_8 + double_9;
				double_8 = double_3 * double_10;
				float_5 = float_6 * float_2;
				int_15 = int_8 + int_5;
				unsigned_int_6 = unsigned_int_1 * unsigned_int_7;
				unsigned_int_9 = unsigned_int_5 * unsigned_int_11;
				double_9 = double_6 * double_5;
				if(1)
				{
					short short_6 = 1;
					char char_8 = 1;
					float_8 = float_4;
					int_12 = int_17 * int_11;
					double_5 = double_4;
					unsigned_int_3 = unsigned_int_3 * unsigned_int_5;
					unsigned_int_1 = unsigned_int_9;
					long_6 = long_4 + long_10;
					int_11 = int_9 * int_3;
					short_6 = short_2 + short_6;
					int_1 = int_6;
					char_8 = char_7 * char_6;
				}
				unsigned_int_8 = unsigned_int_3 + unsigned_int_11;
				if(1)
				{
					if(1)
					{
						int_4 = int_11 * int_6;
						unsigned_int_7 = unsigned_int_10 * unsigned_int_9;
					}
				}
			}
			unsigned_int_1 = unsigned_int_12 + unsigned_int_12;
		}
		long_3 = long_2 + long_11;
		long_9 = long_9 * long_5;
	}
	int_13 = int_13 + int_11;
	if(1)
	{
		float_5 = float_7 + float_9;
		char_1 = char_7 * char_7;
		int_16 = int_7;
	}
	if(1)
	{
		long_12 = long_10 * long_10;
	}
	if(1)
	{
		double_9 = double_7 + double_7;
	}
	double_5 = double_9 + double_2;
	short_3 = short_1;
	short_3 = short_3 + short_4;
	if(1)
	{
		double double_11 = 1;
		float float_11 = 1;
		float float_12 = 1;
		unsigned int unsigned_int_14 = 1;
		int_12 = int_1 * int_15;
		double_11 = double_10 * double_9;
		long_10 = long_8 * long_8;
		char_1 = char_5;
		int_11 = int_15 + int_14;
		long_1 = long_2 + long_12;
		if(1)
		{
			int_12 = int_15 * int_2;
			unsigned_int_3 = unsigned_int_8 * unsigned_int_1;
		}
		int_2 = int_7 * int_5;
		unsigned_int_4 = unsigned_int_8 * unsigned_int_12;
		float_12 = float_5 * float_11;
		char_7 = char_2 * char_4;
		int_17 = int_16 + int_16;
		unsigned_int_13 = unsigned_int_11 * unsigned_int_8;
		unsigned_int_1 = unsigned_int_12 + unsigned_int_7;
		float_11 = float_9;
		if(1)
		{
			unsigned_int_14 = unsigned_int_9 * unsigned_int_8;
		}
		if(1)
		{
			if(1)
			{
				float_9 = float_9 * float_6;
			}
			if(1)
			{
				unsigned_int_15 = unsigned_int_14 + unsigned_int_11;
			}
			if(1)
			{
				unsigned_int_9 = unsigned_int_3 + unsigned_int_6;
			}
			if(1)
			{
				double_5 = double_2 + double_6;
			}
			if(1)
			{
				float float_13 = 1;
				float_4 = float_11 + float_13;
			}
		}
		int_8 = int_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_9;
	}
	if(1)
	{
		char_5 = char_2 + char_2;
	}
	unsigned_int_13 = unsigned_int_15 + unsigned_int_16;
	return short_7;
}
long v__smart_cb_change(int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short_1 = v__smart_apply(char_1,uni_para);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	double_4 = double_2 + double_3;
	return long_1;
}
float v__smart_update_queue( short parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char controller4vul_1873[2];
	fgets(controller4vul_1873 ,2 ,stdin);
	if( strcmp( controller4vul_1873, "-") < 0)
	{
		long_1 = v__smart_cb_change(uni_para);

	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return float_1;
}
long v__lost_selection_reset_job()
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = v__lost_selection(long_1,-1 );

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_2;
	if(1)
	{
		float float_2 = 1;
		short short_1 = 1;
		float_2 = float_1;
		short_1 = short_1 + short_1;
	}
	return long_1;
}
float v__lost_selection(long parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_2 + int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2;
	}
	char controller4vul_1870[2];
	fgets(controller4vul_1870 ,2 ,stdin);
	if( strcmp( controller4vul_1870, "L") < 0)
	{
		char controller4vul_1871[2];
		fgets(controller4vul_1871 ,2 ,stdin);
		if( strcmp( controller4vul_1871, "2") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			double_3 = double_1 * double_2;
			char controller4vul_1872[3];
			fgets(controller4vul_1872 ,3 ,stdin);
			if( strcmp( controller4vul_1872, "39") > 0)
			{
				float_1 = v__smart_update_queue(short_1,int_1,uni_para);

				int_3 = int_3 + int_1;
			}
			long_1 = long_2;
		}
		double_1 = double_3 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_2 * short_3;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
		double_3 = double_2 + double_1;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_3;
		int_3 = int_2 + int_2;
		unsigned_int_3 = unsigned_int_5;
	}
	return float_2;
}
int v__take_selection_text( char parameter_1,double parameter_2,short parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	long long_4 = 1;
	long_3 = long_1 + long_2;
	char_2 = char_1 + char_2;
	char_2 = char_1 * char_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2;
	double_2 = double_1 + double_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	char controller4vul_1869[2];
	fgets(controller4vul_1869 ,2 ,stdin);
	if( strcmp( controller4vul_1869, ":") > 0)
	{
		int int_3 = 1;
		int int_4 = 1;
		float_1 = v__lost_selection(long_4,uni_para);

		int_4 = int_3 * int_2;
	}
	float_1 = float_1;
	return int_2;
}
void v__cb_ctxp_link_content_copy(double parameter_2,int uni_para)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = v__take_selection_text(char_1,double_1,short_1,uni_para);

	long_1 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 * char_2;
	char_3 = char_2 + char_3;
	float_3 = float_1 * float_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	double_3 = double_1 + double_2;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_2;
}
void v_ty_sb_free( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_2;
}
char v_ty_sb_steal_buf( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_3 = 1;
			double_3 = double_3;
		}
		float_2 = float_1 + float_2;
	}
	short_3 = short_2 + short_1;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_4;
	double_1 = double_4;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	return char_1;
}
int v_codepoint_to_utf8( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float float_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_5 = 1;
	if(1)
	{
		int_3 = int_1 * int_2;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
		float_1 = float_1 + float_3;
		double_2 = double_1;
	}
	if(1)
	{
		char char_2 = 1;
		short_1 = short_1 + short_2;
		char_3 = char_1 * char_2;
		long_2 = long_1 * long_2;
		float_1 = float_2 * float_2;
	}
	if(1)
	{
		long long_3 = 1;
		float float_4 = 1;
		long long_4 = 1;
		long_3 = long_1 + long_3;
		float_4 = float_4 + float_3;
		unsigned_int_1 = unsigned_int_1;
		double_1 = double_2 * double_2;
		long_4 = long_4 * long_2;
	}
	if(1)
	{
		float float_5 = 1;
		float float_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double_1 = double_3 * double_1;
		double_3 = double_1 * double_1;
		float_5 = float_6;
		short_3 = short_2 * short_3;
		short_4 = short_3 + short_1;
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		int int_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_3 = char_1 + char_3;
		int_2 = int_1 + int_1;
		int_5 = int_4 * int_4;
		char_4 = char_4 * char_4;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_3 = int_3 + int_1;
		double_1 = double_3;
	}
	if(1)
	{
		double double_4 = 1;
		double_4 = double_3 + double_3;
	}
	return int_5;
}
void v_ty_sb_spaces_rtrim()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 * double_2;
	long_3 = long_1 + long_2;
	char_2 = char_1 * char_1;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char_2 = char_3 + char_4;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_3 = int_2 + int_3;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
}
int v_ty_sb_add( char parameter_1,short parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_2 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_1;
		double_3 = double_1 + double_2;
		if(1)
		{
		}
		short_1 = short_1 + short_1;
		char_1 = char_1 + char_2;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_4;
	double_5 = double_5;
	return int_3;
}
char v__termpty_cellrow_from_beacon_get( short parameter_1,int parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_4 = 1;
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	float_1 = float_1 + float_1;
	char_2 = char_1 + char_2;
	char_1 = char_1;
	int_1 = int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_3 = int_2 * int_3;
	if(1)
	{
		int_1 = int_3 * int_1;
		double_1 = double_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	short_1 = short_1 * short_2;
	short_1 = short_2;
	if(1)
	{
		float float_2 = 1;
		float float_3 = 1;
		short short_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_3 = 1;
		short_2 = short_2 + short_2;
		float_1 = float_2;
		double_1 = double_2 * double_2;
		float_3 = float_1 + float_3;
		short_3 = short_2 * short_2;
		int_4 = int_5;
		double_3 = double_1 + double_1;
	}
	long_3 = long_4 * long_3;
	return char_2;
	double_2 = v_verify_beacon(char_2,int_1);

}
float v_termpty_cellrow_get( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	float float_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		if(1)
		{
		}
		float_1 = float_2;
	}
	if(1)
	{
	}
	return float_3;
	char_1 = v__termpty_cellrow_from_beacon_get(short_1,int_1,double_1);

}
char v_termio_selection_get( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,double parameter_6,double parameter_7)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	short short_1 = 1;
	v_termpty_backlog_unlock();

	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			v_termpty_backlog_lock();

			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_3 = 1;
			float_1 = v_termpty_cellrow_get(unsigned_int_1,int_2,char_1);

			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			float_3 = float_1 + float_2;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int_3 = v_codepoint_to_utf8(double_1,char_2);

						float_2 = float_3;
					}
					if(1)
					{
						v_ty_sb_free(int_4);

						int_1 = int_2 * int_1;
					}
				}
				if(1)
				{
					long long_1 = 1;
					long long_2 = 1;
					long_2 = long_1 + long_2;
				}
			}
		}
		if(1)
		{
			int int_7 = 1;
			int_5 = int_1 * int_2;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_2 = 1;
				if(1)
				{
					char_1 = v_ty_sb_steal_buf(unsigned_int_4);

					double_2 = double_2;
				}
				if(1)
				{
					v_ty_sb_spaces_rtrim();

					unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
				}
				if(1)
				{
					double double_3 = 1;
					double_2 = double_3 + double_1;
				}
				if(1)
				{
					int int_6 = 1;
					int_6 = int_3 * int_4;
				}
				if(1)
				{
					unsigned int unsigned_int_5 = 1;
					int_5 = v_ty_sb_add(char_3,short_1,char_3);

					unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
				}
			}
			int_7 = int_7 + int_5;
		}
		if(1)
		{
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_6;
		}
	}
	return char_3;
}
short v__cb_ctxp_link_open(char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 + double_2;
	int_1 = int_1;
	float_1 = float_2;
	short_2 = short_1 * short_1;
	double_2 = double_4;
	short_3 = v__activate_link(double_2,float_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return short_3;
}
void v__should_inline( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	long_1 = long_1 * long_1;
	short_1 = v_termio_config_get(float_1);

	long_1 = long_2 + long_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "d") > 0)
	{
	}
}
double v_link_is_email()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return double_1;
}
double v_link_is_protocol( float parameter_1)
{
	double double_1 = 1;
	return double_1;
}
short v_link_is_url()
{
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "g") == 0)
	{
	}
	return short_1;
	double_1 = v_link_is_protocol(float_1);

}
short v__activate_link( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1 + char_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_1 = v_media_src_type_get(float_1);

	unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	short_1 = v_link_is_url();

	short_2 = short_2 + short_3;
	unsigned_int_4 = unsigned_int_1;
	int_1 = int_1 * int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			short_1 = short_1 * short_2;
		}
		if(1)
		{
			long_3 = long_1 * long_2;
		}
	}
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		int_2 = int_1 * int_2;
	}
	if(1)
	{
		short_4 = short_2 + short_2;
		int_1 = int_1;
	}
	unsigned_int_6 = unsigned_int_3;
	if(1)
	{
	}
	if(1)
	{
		short short_5 = 1;
		unsigned_int_5 = unsigned_int_2 * unsigned_int_4;
		short_3 = short_3 * short_5;
		if(1)
		{
			char_1 = char_2;
		}
		if(1)
		{
			short_3 = short_5;
		}
		int_2 = int_2 + int_2;
		if(1)
		{
			unsigned_int_4 = unsigned_int_7 + unsigned_int_8;
			int_1 = int_2 * int_3;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_9 = 1;
		v__should_inline(int_3);

		unsigned_int_9 = unsigned_int_2 * unsigned_int_1;
		int_2 = int_3 * int_3;
		if(1)
		{
			double double_3 = 1;
			float_3 = float_2 * float_3;
			if(1)
			{
				if(1)
				{
					double double_1 = 1;
					double_1 = double_1 + double_2;
					double_3 = double_3 + double_2;
				}
				if(1)
				{
					double_4 = v_link_is_email();

					unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
					int_2 = int_3 * int_3;
				}
			}
			if(1)
			{
				short short_6 = 1;
				short short_7 = 1;
				if(1)
				{
					if(1)
					{
						double double_5 = 1;
						double_3 = double_4 + double_5;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_2 = unsigned_int_8 + unsigned_int_7;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_7 = unsigned_int_8 + unsigned_int_9;
					}
				}
				float_1 = float_1;
				short_7 = short_6 * short_1;
			}
		}
	}
	if(1)
	{
		float float_4 = 1;
		short short_8 = 1;
		short short_9 = 1;
		float_4 = float_2 * float_1;
		short_9 = short_4 + short_8;
		if(1)
		{
			char_2 = char_1 + char_2;
			if(1)
			{
				float float_5 = 1;
				unsigned_int_8 = unsigned_int_8 * unsigned_int_4;
				float_3 = float_5;
			}
			if(1)
			{
				int int_4 = 1;
				int int_5 = 1;
				int int_6 = 1;
				if(1)
				{
					if(1)
					{
						float_2 = float_2 * float_3;
					}
				}
				if(1)
				{
					if(1)
					{
						unsigned_int_5 = unsigned_int_8 + unsigned_int_8;
					}
				}
				if(1)
				{
					if(1)
					{
						double double_6 = 1;
						double_2 = double_6;
					}
				}
				unsigned_int_1 = unsigned_int_6 + unsigned_int_2;
				int_6 = int_4 + int_5;
			}
		}
	}
	if(1)
	{
		long_3 = long_2 + long_1;
	}
	long_2 = long_4 * long_4;
	if(1)
	{
		long_2 = long_4 + long_4;
	}
	return short_3;
}
float v__cb_ctxp_link_preview(double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = double_1 * double_2;
	short_1 = v__activate_link(double_2,float_1);

	double_3 = double_3 * double_1;
	double_2 = double_3 + double_3;
	double_1 = double_3 * double_4;
	int_1 = int_1 + int_2;
	int_4 = int_3 * int_3;
	return float_1;
}
unsigned int v__is_fmt( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_1;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long_1 = long_1 + long_1;
		char controller_1[2];
		fgets(controller_1 ,2 ,stdin);
		if( strcmp( controller_1, "#") < 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_1 * char_2;
		}
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
int v_media_src_type_get( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1 * int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = v__is_fmt(short_1,double_1);

		double_1 = double_2;
	}
	if(1)
	{
		double_2 = double_2 * double_2;
	}
	if(1)
	{
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	return int_1;
}
void v__mouse_in_selection( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
	}
	float_1 = float_1 * float_2;
	float_2 = float_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_2 * double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		char_2 = char_1 + char_2;
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
	}
}
float v__smart_xy_to_cursor( unsigned int parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_4 = 1;
	double_1 = double_1 * double_1;
	long_3 = long_1 + long_2;
	long_4 = long_3;
	int_1 = int_1 + int_2;
	long_6 = long_5 * long_1;
	if(1)
	{
		long long_7 = 1;
		long_7 = long_2 * long_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		float float_3 = 1;
		float_4 = float_3 * float_4;
	}
	return float_4;
}
double v__cb_link_down(float parameter_2,char parameter_3,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	long_2 = long_1 + long_1;
	int_3 = int_1 + int_2;
	int_3 = int_4 * int_1;
	if(1)
	{
		int int_5 = 1;
		char char_1 = 1;
		float_3 = float_1 + float_2;
		int_1 = int_2 * int_5;
		char_2 = char_1 * char_1;
	}
	char controller4vul_1866[2];
	fgets(controller4vul_1866 ,2 ,stdin);
	if( strcmp( controller4vul_1866, "Y") > 0)
	{
		long long_3 = 1;
		long long_4 = 1;
		int int_6 = 1;
		double double_2 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_3 = long_3 + long_4;
		int_1 = int_2 * int_1;
		int_1 = int_6 * int_3;
		double_2 = double_1 + double_1;
		char controller4vul_1867[3];
		fgets(controller4vul_1867 ,3 ,stdin);
		if( strcmp( controller4vul_1867, "t5") < 0)
		{
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
			float_3 = float_3;
			char controller4vul_1868[3];
			fgets(controller4vul_1868 ,3 ,stdin);
			if( strcmp( controller4vul_1868, "PX") > 0)
			{
				v__cb_ctxp_link_content_copy(double_3,uni_para);

			}
		}
		int_4 = int_3;
		long_6 = long_1 * long_5;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				double_3 = double_1 + double_4;
			}
		}
		long_1 = long_6 + long_3;
		double_5 = double_4;
		if(1)
		{
			long_5 = long_5 + long_5;
		}
		if(1)
		{
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			double_5 = double_1 * double_1;
		}
		int_4 = int_2 + int_2;
		double_3 = double_1 + double_5;
		float_1 = float_4 + float_2;
		char_3 = char_2 + char_2;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	return double_1;
}
float v_main_term_popup_exists( double parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void v__update_link( float parameter_1,char parameter_2,long parameter_3,char parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	char_1 = char_1 + char_1;
	float_1 = float_1 + float_1;
	long_1 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1;
	if(1)
	{
		double_2 = double_1 * double_2;
		long_3 = long_2 * long_1;
	}
	if(1)
	{
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	}
	if(1)
	{
	}
	double_2 = double_2 * double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_4 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_7 = 1;
		long_3 = long_4 * long_1;
		long_4 = long_2 + long_4;
		float_2 = float_1 * float_1;
		char controller4vul_1864[2];
		fgets(controller4vul_1864 ,2 ,stdin);
		if( strcmp( controller4vul_1864, ">") > 0)
		{
			unsigned_int_6 = unsigned_int_5 * unsigned_int_1;
			char controller4vul_1865[2];
			fgets(controller4vul_1865 ,2 ,stdin);
			if( strcmp( controller4vul_1865, "i") < 0)
			{
				double_3 = v__cb_link_down(float_1,char_2,uni_para);

				double_4 = double_2 * double_1;
			}
			if(1)
			{
				float float_3 = 1;
				float_3 = float_2 + float_2;
			}
		}
		if(1)
		{
			long_1 = long_3 * long_3;
			unsigned_int_6 = unsigned_int_5;
		}
		if(1)
		{
			long long_5 = 1;
			long_2 = long_2 + long_5;
			int_3 = int_2 + int_1;
		}
		double_1 = double_4 * double_5;
		unsigned_int_5 = unsigned_int_1;
		int_2 = int_1 + int_2;
		int_1 = int_3 + int_1;
		int_2 = int_3 * int_4;
		unsigned_int_1 = unsigned_int_7;
		if(1)
		{
			int_1 = int_1 + int_4;
		}
	}
}
double v__remove_links( unsigned int parameter_1,unsigned int parameter_2,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_1 = float_2;
	char controller4vul_1863[2];
	fgets(controller4vul_1863 ,2 ,stdin);
	if( strcmp( controller4vul_1863, "`") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		v__update_link(float_3,char_1,long_1,char_2,uni_para);

		int_1 = int_1 * int_1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = int_1 + int_1;
	int_1 = int_1 * int_2;
	int_1 = int_2 * int_1;
	long_2 = long_1 + long_2;
	long_5 = long_3 + long_4;
	double_1 = double_1 * double_1;
	return double_2;
}
unsigned int v__sel_set( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_2 = unsigned_int_3;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		int_2 = int_1 + int_1;
	}
	return unsigned_int_2;
}
int v_termio_scroll_get( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1 * double_1;
	return int_1;
}
void v_miniview_position_offset( short parameter_1,int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	short_2 = short_1 * short_1;
	double_2 = double_1 * double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_1;
	if(1)
	{
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		int int_2 = 1;
		short_1 = short_1 * short_1;
		int_1 = v_termio_scroll_get(unsigned_int_1);

		char_2 = char_2 * char_1;
		if(1)
		{
			char char_4 = 1;
			int_3 = int_2 + int_3;
			char_3 = char_4;
			double_2 = double_1 * double_1;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "8a") < 0)
		{
			int_3 = int_2 * int_4;
			int_2 = int_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		}
	}
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			char char_5 = 1;
			long_1 = long_1 + long_1;
			char_3 = char_5 + char_1;
			if(1)
			{
				int_4 = int_3;
			}
			if(1)
			{
				double double_3 = 1;
				double_3 = double_2 + double_3;
			}
		}
	}
}
char v_term_miniview_get( int parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	return char_1;
}
void v_termio_scroll( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_2;
	int_1 = int_3 * int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_miniview_position_offset(short_1,int_2,char_1);

		long_2 = long_1 + long_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	int_1 = int_2 + int_1;
	if(1)
	{
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_4 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int_2 = int_3 * int_2;
		int_3 = int_3 + int_4;
		short_3 = short_1 + short_2;
		if(1)
		{
			double_3 = v__remove_links(unsigned_int_1,unsigned_int_2,-1 );

			unsigned_int_2 = unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_1 = v__sel_set(short_1,float_1);

			double_2 = double_1 + double_3;
			double_1 = double_1 * double_4;
			int_4 = int_4 + int_3;
			short_4 = short_3 * short_4;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
			if(1)
			{
				short_4 = short_2 * short_3;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_4 = 1;
			unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		}
		if(1)
		{
			float float_2 = 1;
			float_1 = float_2 + float_3;
			char_1 = v_term_miniview_get(int_5);

			short_2 = short_4;
			double_2 = double_4 * double_3;
		}
	}
	char controller_9[3];
	fgets(controller_9 ,3 ,stdin);
	if( strcmp( controller_9, "#r") < 0)
	{
		if(1)
		{
			float_1 = float_3;
		}
	}
}
float v_termpty_save_new( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	v_termpty_save_free(short_1);

	char_2 = char_1 * char_2;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	double_2 = double_2 * double_2;
	char_1 = char_2 * char_1;
	return float_1;
}
void v_termpty_save_expand( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_2 = char_1 * char_1;
	if(1)
	{
	}
	double_3 = double_1 * double_2;
	int_1 = int_1;
	float_3 = float_1 * float_2;
}
short v__termpty_cell_is_empty( double parameter_1)
{
	short short_1 = 1;
	if(1)
	{
	}
	return short_1;
}
unsigned int v_termpty_line_length( float parameter_1,double parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = v__termpty_cell_is_empty(double_1);

	int_2 = int_1 + int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
double v_verify_beacon( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	return double_1;
}
void v_termpty_text_save_top( char parameter_1,char parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	char char_4 = 1;
	v_termpty_save_expand(unsigned_int_1,unsigned_int_2,unsigned_int_2);

	v_termpty_backlog_unlock();

	double_2 = double_1 * double_1;
	double_1 = double_3 + double_4;
	if(1)
	{
	}
	double_5 = double_5 * double_1;
	v_termpty_backlog_lock();

	long_1 = long_1;
	float_2 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_5 = double_4 + double_4;
	}
	if(1)
	{
		unsigned_int_2 = v_termpty_line_length(float_2,double_5);

		int_1 = int_1;
		if(1)
		{
			float_1 = float_3;
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "m(") < 0)
		{
			long long_2 = 1;
			double_3 = double_4;
			long_2 = long_2 * long_2;
			float_3 = v_termpty_save_new(short_1,int_2);

			double_1 = double_3;
			double_1 = double_1;
		}
	}
	short_2 = short_2;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	char_2 = char_1 * char_1;
	int_2 = int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	short_3 = short_2 * short_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	if(1)
	{
		char char_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		char_3 = char_1 * char_3;
	}
	double_5 = double_4 * double_1;
	double_2 = v_verify_beacon(char_4,int_1);

}
void v_termpty_text_scroll( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_1;
	}
	double_1 = double_1 * double_2;
	short_3 = short_1 + short_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		v_termio_scroll(double_1,int_1,int_1,int_1);

		float_1 = float_1 * float_1;
		if(1)
		{
			float_2 = float_1 * float_2;
		}
		long_2 = long_1 * long_2;
		if(1)
		{
			double_2 = double_2 * double_3;
		}
	}
	if(1)
	{
		float float_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float_1 = float_2 + float_3;
		double_4 = double_3 + double_4;
		if(1)
		{
			v_termpty_text_save_top(char_1,char_1,short_4);

			double_4 = double_2 * double_4;
		}
		v_termpty_cells_clear(double_1,short_2,int_1);

		int_2 = int_2 + int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			short_2 = short_3 * short_5;
			char_2 = char_2 + char_2;
			char_2 = char_2 + char_3;
		}
		if(1)
		{
			int int_3 = 1;
			int_1 = int_2 * int_3;
		}
	}
}
void v_termpty_text_scroll_test( unsigned int parameter_1,char parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	if(1)
	{
		int_1 = int_1;
		if(1)
		{
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			short_2 = short_1 + short_1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			float_1 = float_1 + float_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double_3 = double_1 * double_2;
		double_3 = double_3 * double_2;
		int_2 = int_1;
	}
	v_termpty_text_scroll(unsigned_int_1,short_2);

}
void v__cursor_to_start_of_line( char parameter_1)
{
	double double_1 = 1;
	double_1 = double_1 + double_1;
}
int v__tab_forward( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
int v__handle_cursor_control( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	if(1)
	{
		double_1 = double_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	double_3 = double_1 + double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	v_termpty_text_scroll_test(unsigned_int_1,char_1);

	double_2 = double_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_2 = v__tab_forward(int_3,int_3);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		char char_2 = 1;
		char_1 = char_2 * char_3;
	}
	unsigned_int_3 = unsigned_int_4 * unsigned_int_2;
	float_1 = float_1 + float_2;
	float_4 = float_2 * float_3;
	if(1)
	{
		int int_4 = 1;
		v__cursor_to_start_of_line(char_4);

		char_3 = char_1 * char_4;
		int_4 = int_4 * int_1;
		unsigned_int_2 = unsigned_int_4 + unsigned_int_1;
	}
	double_1 = double_2;
	return int_1;
}
int v_termpty_handle_seq( char parameter_1,long parameter_2,long parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	char controller4vul_1856[3];
	fgets(controller4vul_1856 ,3 ,stdin);
	if( strcmp( controller4vul_1856, ",4") < 0)
	{
		short short_2 = 1;
		int_1 = v__handle_esc(int_1,short_1,char_1,uni_para);

		short_2 = short_2 * short_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 * long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short short_3 = 1;
		short_3 = short_1 + short_3;
	}
	return int_1;
}
void v_termpty_handle_buf( char parameter_1,long parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_1;
	char_1 = char_1 * char_2;
	char controller4vul_1855[3];
	fgets(controller4vul_1855 ,3 ,stdin);
	if( strcmp( controller4vul_1855, "pA") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_3 = v_termpty_handle_seq(char_2,long_1,long_2,uni_para);

		double_3 = double_1 * double_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		int int_4 = 1;
		int_4 = int_2 + int_3;
	}
	if(1)
	{
		int_1 = int_2 + int_2;
	}
	long_2 = long_1 + long_3;
}
void v_theme_reload( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1;
	char_1 = char_2;
	double_1 = double_1 + double_1;
	int_1 = int_2 * int_3;
	if(1)
	{
	}
}
short v_theme_reload_cb(int parameter_2,short parameter_3,short parameter_4)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	v_theme_reload(double_1);

	long_2 = long_1 * long_1;
	double_3 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int_1 = int_1;
	}
	return short_1;
}
void v_theme_auto_reload_enable( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char_2 = char_1 + char_1;
	short_1 = v_theme_reload_cb(int_1,short_1,short_2);

}
float v__cursor_shape_to_group_name( unsigned int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
double v_config_theme_path_default_get( double parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long_1 = long_1 + long_1;
	double_2 = double_1 * double_1;
	double_1 = double_3 + double_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return double_3;
}
char v_theme_path_get()
{
	char char_1 = 1;
	return char_1;
}
short v_config_theme_path_get( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_1;
	char_2 = v_theme_path_get();

	int_3 = int_1 * int_2;
	if(1)
	{
	}
	return short_1;
}
double v_theme_apply( long parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double_1 = v_config_theme_path_default_get(double_1);

	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	char_2 = char_1 + char_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ">") > 0)
	{
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	short_2 = v_config_theme_path_get(char_1);

	long_2 = long_1 * long_1;
	if(1)
	{
	}
	int_4 = int_4 + int_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	return double_2;
}
void v_termio_set_cursor_shape( double parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_3 = float_1 * float_2;
	float_4 = float_2 + float_1;
	int_3 = int_1 * int_2;
	v_theme_auto_reload_enable(char_1);

	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_3 = int_2 + int_4;
	double_1 = v_theme_apply(long_1,short_1,char_2);

	unsigned_int_1 = unsigned_int_3;
	double_3 = double_2 + double_2;
	if(1)
	{
		int int_5 = 1;
		float_2 = v__cursor_shape_to_group_name(unsigned_int_4);

		int_2 = int_5 * int_4;
		if(1)
		{
			int int_6 = 1;
			int_3 = int_6 * int_2;
		}
		if(1)
		{
			double double_4 = 1;
			double double_5 = 1;
			double_2 = double_4 + double_5;
		}
	}
}
void v_termpty_clear_tabs_on_screen( short parameter_1)
{
	if(1)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
}
void v_termpty_backlog_unlock()
{
}
void v_termpty_backlog_size_set( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	char_1 = char_2;
	if(1)
	{
		long_1 = long_1 + long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_3 = double_1 * double_2;
		}
		v_termpty_backlog_lock();

		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		short short_2 = 1;
		short_1 = short_2;
	}
	if(1)
	{
		double_1 = double_3 + double_2;
	}
	v_termpty_save_free(short_1);

	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	v_termpty_backlog_unlock();

	float_2 = float_1 * float_1;
	long_1 = long_2 + long_1;
}
long v__ts_free()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short_3 = short_1 * short_2;
	return long_1;
}
void v_termpty_save_free( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "pd") > 0)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "^M") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		if(1)
		{
			float float_1 = 1;
			float_1 = float_1 + float_1;
		}
		int_3 = int_1 * int_2;
	}
	long_1 = v__ts_free();

	double_3 = double_1 + double_2;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void v_termpty_backlog_lock()
{
}
void v_termpty_clear_backlog( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	v_termpty_backlog_size_set(short_1,long_1);

	double_1 = double_1 + double_1;
	double_2 = double_3;
	short_2 = short_2;
	double_1 = double_1 * double_3;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_2 = double_2 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			float_3 = float_1 + float_2;
		}
		float_1 = float_3 + float_2;
		float_2 = float_3 * float_3;
	}
	long_1 = long_1 * long_1;
	v_termpty_backlog_unlock();

	char_1 = char_1 + char_1;
	v_termpty_save_free(short_1);

	int_1 = int_2;
	v_termpty_backlog_lock();

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_3 * short_3;
}
void v_termpty_reset_att( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_6 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_1 * int_2;
	float_1 = float_1;
	float_1 = float_1;
	int_4 = int_3 * int_3;
	int_1 = int_5 + int_5;
	long_1 = long_1 * long_1;
	double_3 = double_1 + double_1;
	double_1 = double_3 * double_1;
	short_1 = short_1 * short_2;
	double_1 = double_3 * double_4;
	long_2 = long_1;
	double_3 = double_3 * double_3;
	short_1 = short_2 + short_2;
	unsigned_int_4 = unsigned_int_5;
	short_4 = short_3 + short_1;
	int_5 = int_5 * int_6;
	char_1 = char_1 * char_1;
}
short v_termio_config_get( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	return short_1;
}
void v_termpty_reset_state( int parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	long_1 = long_1 + long_1;
	int_3 = int_1 + int_2;
	if(1)
	{
		int_1 = int_4 * int_2;
	}
	double_1 = double_1 + double_1;
	char_1 = char_1;
	double_1 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	v_termpty_reset_att(float_1);

	int_3 = int_3 * int_2;
	short_1 = short_2;
	double_4 = double_2 + double_3;
	short_3 = v_termio_config_get(float_2);

	long_2 = long_2;
	float_2 = float_2 + float_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	char_1 = char_1 * char_2;
	float_2 = float_3 * float_2;
	double_2 = double_1;
	char_2 = char_3 + char_1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_4 * double_1;
	int_5 = int_5 * int_4;
	unsigned_int_4 = unsigned_int_2;
	int_3 = int_1;
	double_2 = double_4 * double_4;
	char_1 = char_3 * char_3;
	double_5 = double_5 + double_6;
	int_5 = int_3 * int_5;
	v_termio_set_cursor_shape(double_2,float_1);

	double_6 = double_1 + double_5;
	char_2 = char_3 * char_2;
	v_termpty_clear_backlog(short_1);

	int_3 = int_3 * int_4;
	int_1 = int_3 * int_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
	double_7 = double_4 * double_2;
	char_3 = char_4;
	double_2 = double_7;
	char_5 = char_1 * char_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_6;
	v_termpty_clear_tabs_on_screen(short_4);

	double_3 = double_4 + double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_4 = int_4 * int_5;
	}
	if(1)
	{
		char_2 = char_3 * char_2;
	}
}
void v_termpty_resize_tabs( short parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
	}
	int_1 = int_2 * int_2;
	char_1 = char_2;
	if(1)
	{
	}
	if(1)
	{
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_4 = char_2 * char_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_3 = double_1 + double_2;
		}
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
}
char v__termpty_init( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int_1 = int_1 * int_2;
	int_2 = int_3 * int_2;
	v_termpty_resize_tabs(short_1,int_2,int_3);

	short_1 = short_2 + short_2;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	v_termpty_reset_state(int_3);

	short_3 = short_1 * short_1;
	short_1 = short_1;
	int_2 = int_4 + int_3;
	int_1 = int_1;
	long_2 = long_1 + long_1;
	float_1 = float_1;
	short_2 = short_4 + short_5;
	short_2 = short_2 + short_5;
	double_3 = double_1 * double_2;
	return char_1;
}
int v__add_default_keys( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	short short_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	float float_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_6 = 1;
	double double_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char_2 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	long_1 = long_1 + long_2;
	int_1 = int_2 + int_1;
	float_2 = float_1 * float_1;
	char_2 = char_1 + char_3;
	short_1 = short_1 * short_1;
	float_1 = float_1 * float_1;
	short_2 = short_2 + short_3;
	double_2 = double_1 * double_1;
	short_4 = short_3 * short_1;
	float_3 = float_3 + float_4;
	double_1 = double_2;
	int_3 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_5;
	char_3 = char_1 + char_1;
	long_1 = long_2 + long_2;
	float_3 = float_1 + float_2;
	double_3 = double_1;
	float_2 = float_4 + float_3;
	double_1 = double_3 * double_3;
	float_3 = float_5 * float_5;
	long_1 = long_3 * long_3;
	double_2 = double_2 * double_2;
	int_1 = int_2;
	unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
	double_1 = double_2 * double_2;
	int_3 = int_3 + int_4;
	char_2 = char_3 * char_1;
	int_4 = int_2;
	int_3 = int_1 * int_4;
	short_4 = short_2 + short_2;
	char_2 = char_3 * char_2;
	unsigned_int_7 = unsigned_int_8;
	long_3 = long_3 * long_3;
	int_2 = int_1 + int_4;
	float_6 = float_5 + float_4;
	long_1 = long_2 * long_3;
	double_4 = double_2 + double_1;
	int_1 = int_5 + int_6;
	int_4 = int_7 + int_2;
	double_5 = double_4 * double_5;
	double_3 = double_4 * double_2;
	short_1 = short_1 * short_1;
	return int_2;
}
void v_colors_standard_get( int parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4,short parameter_5,unsigned int parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_2 = int_1 + int_1;
		long_2 = long_1 * long_2;
		char_1 = char_1 + char_2;
		int_2 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_2;
		short_2 = short_1 + short_1;
		int_3 = int_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	int_1 = int_3 + int_2;
	int_1 = int_3 + int_1;
	int_3 = int_2 + int_1;
}
unsigned int v_config_new()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_5 = 1;
		int int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_5 = 1;
		float float_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_6 = 1;
		int int_6 = 1;
		char_2 = char_1 * char_2;
		short_1 = short_1 + short_1;
		double_3 = double_1 + double_2;
		int_1 = int_2;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_4;
		double_4 = double_4 + double_5;
		int_3 = int_3 * int_2;
		char_1 = char_1 * char_2;
		int_3 = int_3 + int_3;
		double_5 = double_2 * double_4;
		float_2 = float_1 + float_2;
		int_1 = int_1 + int_2;
		long_3 = long_1 + long_2;
		int_3 = int_3;
		long_3 = long_4 * long_2;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		char_2 = char_3 * char_3;
		long_4 = long_1 * long_2;
		short_4 = short_2 * short_3;
		long_5 = long_1 * long_2;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
		int_4 = int_3 + int_2;
		long_4 = long_2;
		float_3 = float_4;
		long_3 = long_1 + long_1;
		short_1 = short_1 + short_5;
		short_5 = short_2 * short_4;
		double_3 = double_5 + double_4;
		float_5 = float_3 * float_2;
		unsigned_int_6 = unsigned_int_1 + unsigned_int_3;
		int_2 = int_3 * int_1;
		long_3 = long_1;
		double_6 = double_6 + double_3;
		v_colors_standard_get(int_1,int_5,unsigned_int_2,unsigned_int_1,short_4,unsigned_int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		int_3 = int_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		long_2 = long_5 + long_5;
		unsigned_int_7 = unsigned_int_2 * unsigned_int_2;
		double_2 = double_2 * double_3;
		unsigned_int_2 = unsigned_int_5;
		int_5 = int_5 + int_5;
		double_5 = double_5 * double_3;
		unsigned_int_4 = unsigned_int_6 * unsigned_int_3;
		long_5 = long_5 * long_3;
		int_5 = int_1;
		long_6 = long_1;
		double_1 = double_3 * double_3;
		long_3 = long_4 * long_5;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				unsigned int unsigned_int_8 = 1;
				short short_6 = 1;
				unsigned_int_1 = unsigned_int_3 + unsigned_int_8;
				int_2 = v__add_default_keys(char_3);

				short_3 = short_1 * short_4;
				float_1 = float_5 + float_4;
				short_6 = short_5 + short_1;
				int_6 = int_4 + int_1;
				int_3 = int_3;
			}
		}
		int_1 = int_6 + int_5;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_2;
	}
	return unsigned_int_5;
}
int main()
{
	int uni_para =273;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_1;
	int_3 = int_1 + int_2;
	double_2 = double_1 + double_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	long_2 = long_2 + long_2;
	short_1 = short_1 + short_1;
	short_3 = short_2 * short_2;
	if(1)
	{
	}
	double_2 = double_1;
	float_2 = float_1 * float_1;
	unsigned_int_5 = unsigned_int_2;
	int_1 = int_3;
	if(1)
	{
		double_3 = double_3 + double_3;
	}
	if(1)
	{
		long_1 = long_2 * long_1;
	}
	int_4 = int_1 + int_4;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	double_4 = double_1 + double_2;
	long_1 = long_2;
	char controller4vul_1851[2];
	fgets(controller4vul_1851 ,2 ,stdin);
	if( strcmp( controller4vul_1851, "7") < 0)
	{
		float float_3 = 1;
		float float_4 = 1;
		long long_3 = 1;
		float float_5 = 1;
		float float_6 = 1;
		if(1)
		{
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			unsigned_int_7 = unsigned_int_1 * unsigned_int_6;
		}
		if(1)
		{
			int_4 = int_3 + int_2;
		}
		float_3 = float_1 + float_1;
		if(1)
		{
			short short_4 = 1;
			short_3 = short_2 * short_4;
		}
		double_1 = double_3 * double_3;
		if(1)
		{
			float_4 = float_3 + float_4;
		}
		double_5 = double_5 * double_4;
		if(1)
		{
			double_2 = double_3 * double_3;
		}
		long_2 = long_1 + long_1;
		if(1)
		{
			float_1 = float_3 + float_4;
		}
		if(1)
		{
			long_3 = long_1;
		}
		float_1 = float_5 * float_1;
		if(1)
		{
			float_6 = float_6 * float_1;
		}
		long_3 = long_3 + long_3;
		if(1)
		{
			char_1 = char_1;
		}
		char controller4vul_1852[2];
		fgets(controller4vul_1852 ,2 ,stdin);
		if( strcmp( controller4vul_1852, "R") < 0)
		{
			int int_5 = 1;
			int int_7 = 1;
			int_4 = int_5 * int_6;
			char controller4vul_1853[3];
			fgets(controller4vul_1853 ,3 ,stdin);
			if( strcmp( controller4vul_1853, "L&") < 0)
			{
				long long_5 = 1;
				long long_6 = 1;
				unsigned int unsigned_int_8 = 1;
				long_2 = long_1 + long_2;
				unsigned_int_2 = unsigned_int_5;
				char controller4vul_1854[2];
				fgets(controller4vul_1854 ,2 ,stdin);
				if( strcmp( controller4vul_1854, "D") > 0)
				{
					v_termpty_handle_buf(char_1,long_4,int_6,uni_para);

					unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
				}
				if(1)
				{
					double_2 = double_2 * double_5;
				}
				if(1)
				{
					long_4 = long_2 * long_5;
				}
				if(1)
				{
					long_2 = long_3 * long_4;
				}
				if(1)
				{
					int_3 = int_7 + int_6;
				}
				if(1)
				{
					long_6 = long_6 + long_5;
				}
				if(1)
				{
					unsigned_int_7 = unsigned_int_8 * unsigned_int_8;
				}
				if(1)
				{
					unsigned_int_3 = unsigned_int_8 * unsigned_int_6;
				}
				if(1)
				{
					unsigned_int_2 = unsigned_int_8 + unsigned_int_6;
				}
				if(1)
				{
					short_2 = short_2 * short_1;
				}
				if(1)
				{
					long long_7 = 1;
					long_7 = long_6 * long_1;
				}
				if(1)
				{
					float_4 = float_2 * float_6;
				}
			}
			if(1)
			{
				int_1 = int_7;
			}
		}
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
	}
	if(1)
	{
		char_1 = char_1 + char_2;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_7 + unsigned_int_1;
	}
	if(1)
	{
		short_5 = short_5 + short_3;
		if(1)
		{
			double_4 = double_1 * double_2;
		}
	}
	double_5 = double_3 * double_5;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_5;
	short_5 = short_3 + short_1;
	short_2 = short_6 + short_7;
	if(1)
	{
		double double_6 = 1;
		double_6 = double_5 + double_1;
		double_3 = double_1 * double_4;
	}
	return int_1;
}
