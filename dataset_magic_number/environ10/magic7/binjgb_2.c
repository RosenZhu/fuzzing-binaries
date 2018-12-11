#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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

void joypad_delete( short parameter_1);
char sprint_hex( char parameter_1,short parameter_2);
double disassemble_instr( unsigned int parameter_1,char parameter_2,double parameter_3);
void emulator_disassemble_rom( unsigned int parameter_1,short parameter_2,char parameter_3,long parameter_4);
void extract_min_heap( float parameter_1,char parameter_2);
void swap_pair( double parameter_1,char parameter_2);
void insert_heap( double parameter_1,short parameter_2,long parameter_3,char parameter_4);
unsigned int emulator_get_profiling_counters();
int emulator_get_rom_size();
void print_profile( double parameter_1);
void emulator_get_opcode_mnemonic( long parameter_1,char parameter_2,double parameter_3);
int compare_pair( int parameter_1,int parameter_2);
unsigned int emulator_get_cb_opcode_count();
short emulator_get_opcode_count();
void print_ops();
int emulator_get_registers( float parameter_1);
float emulator_get_frame_buffer( float parameter_1);
unsigned int write_frame_ppm( short parameter_1,unsigned int parameter_2);
double replace_extension( short parameter_1,double parameter_2);
short write_vram( double parameter_1,short parameter_2,short parameter_3);
int map_hdma_source_address();
double hdma_copy_byte( int parameter_1);
short dispatch_interrupt( float parameter_1);
int is_dma_access_ok( double parameter_1,int parameter_2);
float read_u8( double parameter_1,short parameter_2);
void tick( double parameter_1);
double read_u8_tick( short parameter_1,double parameter_2);
double execute_instruction( double parameter_1);
short emulator_step( unsigned int parameter_1);
char emulator_step_internal( long parameter_1);
short audio_buffer_get_frames( char parameter_1);
int emulator_run_until( char parameter_1,short parameter_2);
char get_time_sec();
void emulator_set_rom_usage_enabled( int parameter_1);
float joypad_unpack_buttons( short parameter_1);
short print_joypad_buttons( long parameter_1,long parameter_2);
unsigned int joypad_playback_callback( char parameter_1);
void emulator_set_joypad_callback( float parameter_1,double parameter_2);
long joypad_get_next_state( double parameter_1);
void emulator_get_ticks( char parameter_1);
long joypad_find_state( unsigned int parameter_1,short parameter_2);
long init_joypad_playback_state( long parameter_1,double parameter_2,long parameter_3);
void emulator_set_joypad_playback_callback( short parameter_1,char parameter_2,unsigned int parameter_3);
void file_data_delete( short parameter_1);
char alloc_joypad_chunk( char parameter_1);
unsigned int joypad_read( short parameter_1,double parameter_2);
void emulator_delete( long parameter_1);
long init_audio_buffer( double parameter_1,int parameter_2,int parameter_3);
short random_u32( double parameter_1);
short randomize_buffer( double parameter_1,unsigned int parameter_2,double parameter_3);
float update_bw_palette_rgba( int parameter_1);
short write_oam_no_mode_check( unsigned int parameter_1,float parameter_2,short parameter_3);
long make_pair( char parameter_1,short parameter_2);
void map_address( unsigned int parameter_1);
char read_wave_ram( unsigned int parameter_1,char parameter_2,int uni_para);
char read_nrx4_reg( char parameter_1);
double read_nrx2_reg( unsigned int parameter_1);
unsigned int read_nrx1_reg( int parameter_1);
unsigned int read_apu( unsigned int parameter_1,long parameter_2);
unsigned int read_io( int parameter_1,long parameter_2);
unsigned int is_using_oam( long parameter_1,unsigned int parameter_2);
long read_oam( float parameter_1,long parameter_2);
long is_almost_mode3( int parameter_1);
int is_using_vram( int parameter_1,char parameter_2);
short calculate_next_ppu_intr( double parameter_1);
void reverse_bits_u8( short parameter_1);
int map_select_to_address( long parameter_1);
unsigned int ppu_mode3_synchronize( double parameter_1);
float mode3_tick_count( float parameter_1);
double do_ppu_mode2( unsigned int parameter_1);
int check_stat( unsigned int parameter_1);
void check_ly_eq_lyc( long parameter_1,short parameter_2);
unsigned int ppu_synchronize( int parameter_1);
char read_vram( double parameter_1,double parameter_2);
float read_u8_pair( int parameter_1,short parameter_2,char parameter_3,int uni_para);
void dma_synchronize( long parameter_1,int uni_para);
char intr_synchronize( float parameter_1);
void clear_div( double parameter_1);
unsigned int calculate_next_timer_intr( double parameter_1);
long do_timer_interrupt( float parameter_1);
unsigned int increment_tima( short parameter_1);
unsigned int is_div_falling_edge( short parameter_1,float parameter_2,double parameter_3);
long timer_synchronize( unsigned int parameter_1);
short calculate_next_intr( int parameter_1);
double calculate_next_serial_intr( unsigned int parameter_1);
int serial_synchronize( char parameter_1);
void read_joyp_p10_p13( float parameter_1);
short check_joyp_intr();
void write_io( unsigned int parameter_1,int parameter_2,char parameter_3,int uni_para);
short write_noise_period( long parameter_1);
long write_wave_period( unsigned int parameter_1,unsigned int parameter_2);
long trigger_nr14_reg( double parameter_1,float parameter_2);
double trigger_nrx4_envelope( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
unsigned int write_nrx4_reg( short parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4,short parameter_5);
void write_nrx3_reg( long parameter_1,unsigned int parameter_2,double parameter_3);
long write_nrx2_reg( double parameter_1,short parameter_2,int parameter_3,unsigned int parameter_4);
char write_nrx1_reg( short parameter_1,short parameter_2,char parameter_3,long parameter_4);
unsigned int write_audio_frame( float parameter_1,float parameter_2);
short update_noise( unsigned int parameter_1,int parameter_2);
char update_wave( float parameter_1,float parameter_2,int parameter_3);
unsigned int update_square_wave( long parameter_1,char parameter_2);
short get_gb_frames_until_next_resampled_frame( unsigned int parameter_1);
double apu_update_channels( int parameter_1,short parameter_2);
int update_envelopes();
void update_lengths();
double write_square_wave_period( float parameter_1,double parameter_2,double parameter_3,int uni_para);
long calculate_sweep_frequency( int parameter_1);
long update_sweep( char parameter_1,int uni_para);
short apu_update( float parameter_1,float parameter_2,int uni_para);
char apu_synchronize(int uni_para);
double write_apu( unsigned int parameter_1,char parameter_2,char parameter_3);
short set_af_reg( short parameter_1,short parameter_2);
int validate_header_checksum( double parameter_1);
int get_enum_string( int parameter_1,char parameter_2,char parameter_3);
int get_result_string( float parameter_1);
void log_cart_info( int parameter_1);
long huc1_write_rom( float parameter_1,long parameter_2,double parameter_3);
float mbc5_write_rom( char parameter_1,char parameter_2,char parameter_3);
void mbc3_write_ext_ram( char parameter_1,short parameter_2,char parameter_3);
void emulator_ticks_to_time( double parameter_1,float parameter_2,float parameter_3,int parameter_4,unsigned int parameter_5,double parameter_6);
double mbc3_read_ext_ram( int parameter_1,double parameter_2);
unsigned int mbc3_write_rom( int parameter_1,double parameter_2,unsigned int parameter_3);
char mmm01_write_rom( unsigned int parameter_1,double parameter_2,int parameter_3);
void mbc2_write_ram( float parameter_1,unsigned int parameter_2,double parameter_3);
void mbc2_read_ram( int parameter_1,char parameter_2);
float mbc2_write_rom( unsigned int parameter_1,short parameter_2,long parameter_3);
void mbc1_write_rom( long parameter_1,int parameter_2,double parameter_3);
unsigned int set_ext_ram_bank( char parameter_1,short parameter_2);
short set_rom_bank( long parameter_1,int parameter_2,char parameter_3);
int mbc1_write_rom_shared( short parameter_1,long parameter_2,int parameter_3,char parameter_4,short parameter_5);
float mbc1m_write_rom( double parameter_1,double parameter_2,double parameter_3);
char dummy_write( int parameter_1,long parameter_2,int parameter_3);
int dummy_read( long parameter_1,char parameter_2);
float gb_write_ext_ram( short parameter_1,short parameter_2,float parameter_3);
double gb_read_ext_ram( float parameter_1,unsigned int parameter_2);
short init_memory_map( double parameter_1);
double set_cart_info( long parameter_1,char parameter_2);
float get_cart_info( float parameter_1,float parameter_2,unsigned int parameter_3);
float get_cart_infos( char parameter_1);
long init_emulator( short parameter_1,float parameter_2,int uni_para);
long set_rom_file_data( float parameter_1,float parameter_2);
short emulator_new( unsigned int parameter_1,int uni_para);
double get_file_size( double parameter_1,long parameter_2);
int file_read( char parameter_1,float parameter_2);
void usage( int parameter_1,char parameter_2);
void option_parser_delete( double parameter_1);
void emulator_set_profiling_enabled( char parameter_1);
void emulator_set_opcode_count_enabled( char parameter_1);
void emulator_print_log_systems();
void emulator_set_log_level( char parameter_1,unsigned int parameter_2);
char emulator_get_log_system_name();
unsigned int emulator_set_log_level_from_string( short parameter_1);
void emulator_set_trace( double parameter_1);
unsigned int make_option_result_with_value( char parameter_1,char parameter_2,char parameter_3);
void make_option_result( char parameter_1,int parameter_2,char parameter_3);
char option_parser_next();
void option_parser_new( unsigned int parameter_1,int parameter_2,int parameter_3,char parameter_4);
void parse_options( int parameter_1,char parameter_2);
void joypad_delete( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	if(1)
	{
	}
	int_1 = int_1 * int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		looper_1 += 1;
		int_4 = int_3 * int_3;
		double_1 = atan ( double_1 ) ;
		double_1 = ceil ( double_2 ) ;
		float_1 = float_1 * float_1;
	}
	long_1 = long_1;
}
char sprint_hex( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1;
	int_1 = int_1;
	char_1 = char_2;
}
double disassemble_instr( unsigned int parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_4 = 1;
	double_1 = floor ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1;
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_4 = 1;
		char_1 = char_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			char char_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_4 = 1;
			char_3 = char_1;
		}
		int_1 = int_1;
		char controller_2[4];
		fgets(controller_2 ,4 ,stdin);
		if( strcmp( controller_2, "s}#") == 0)
		{
			double_1 = fmod ( double_2 , double_1 ) ;
		}
		else
		{
			short_1 = short_1;
		}
		double_2 = fmod ( double_1 , double_2 ) ;
		int_2 = int_1 + int_1;
	}
	double_1 = double_1;
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_4 = 1;
		float_2 = float_3;
		double_1 = log10 ( double_1 ) ;
		char_2 = char_4;
	}
	char_2 = sprint_hex(char_2,short_1);

	unsigned_int_3 = unsigned_int_4;
	return double_3;
}
void emulator_disassemble_rom( unsigned int parameter_1,short parameter_2,char parameter_3,long parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int_1 = int_2;
	double_1 = double_2;
	double_2 = log10 ( double_1 ) ;
	double_1 = disassemble_instr(unsigned_int_1,char_1,double_2);

	char_2 = char_1;
	char_3 = char_3 * char_2;
	double_2 = atan2 ( double_1 , double_3 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double_2 = asin ( double_4 ) ;
	}
	short_1 = short_2;
}
void extract_min_heap( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	swap_pair(double_1,char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_3 = int_1 * int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		looper_1 += 1;
		unsigned_int_1 = unsigned_int_2;
		double_1 = log ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long_1 = long_2;
		}
		if(1)
		{
			double double_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
		}
		int_4 = int_3;
		double_2 = atan ( double_1 ) ;
	}
}
void swap_pair( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = cosh ( double_2 ) ;
	double_3 = pow ( double_4 , double_4 ) ;
	double_2 = log10 ( double_5 ) ;
}
void insert_heap( double parameter_1,short parameter_2,long parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_2;
	swap_pair(double_1,char_1);

	double_1 = ldexp ( double_2 , int_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		looper_1 += 1;
		double_3 = asin ( double_4 ) ;
		if(1)
		{
		}
		char_3 = char_1 * char_2;
		double_2 = tanh ( double_1 ) ;
	}
}
unsigned int emulator_get_profiling_counters()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int emulator_get_rom_size()
{
	int int_1 = 1;
	return int_1;
}
void print_profile( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	char char_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_7 = 1;
	long long_2 = 1;
	double double_8 = 1;
	unsigned_int_1 = emulator_get_profiling_counters();

	double_1 = tanh ( double_2 ) ;
	double_2 = sinh ( double_3 ) ;
	double_3 = fabs ( double_2 ) ;
	double_2 = atan2 ( double_4 , double_5 ) ;
	emulator_disassemble_rom(unsigned_int_1,short_1,char_1,long_1);

	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = tanh ( double_5 ) ;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = double_4 * double_5;
		double_5 = double_3 * double_6;
	}
	double_6 = acos ( double_1 ) ;
	double_4 = sinh ( double_6 ) ;
	char_2 = char_1 + char_1;
	double_2 = ldexp ( double_1 , int_3 ) ;
	int_3 = emulator_get_rom_size();

	extract_min_heap(float_1,char_2);

	double_7 = double_3 * double_6;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			double_2 = atan2 ( double_7 , double_7 ) ;
			insert_heap(double_2,short_1,long_2,char_2);

			double_6 = sqrt ( double_7 ) ;
		}
	}
	double_5 = exp ( double_8 ) ;
	int_2 = compare_pair(int_2,int_1);

}
void emulator_get_opcode_mnemonic( long parameter_1,char parameter_2,double parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	int_1 = int_1 + int_2;
	double_1 = fabs ( double_1 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		float_1 = float_1 + float_2;
		double_1 = atan ( double_1 ) ;
	}
	else
	{
		short_1 = short_1;
		double_2 = pow ( double_3 , double_3 ) ;
	}
	double_4 = tanh ( double_5 ) ;
	char_2 = char_1 + char_2;
	double_4 = cosh ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_7 = 1;
			long_2 = long_1 * long_1;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				short short_2 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_7 = 1;
				short_1 = short_2;
			}
			else
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				short short_2 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_7 = 1;
				double_2 = fabs ( double_5 ) ;
				double_2 = double_6;
				double_3 = sqrt ( double_4 ) ;
				double_5 = exp ( double_6 ) ;
			}
		}
		else
		{
			double_4 = log10 ( double_4 ) ;
		}
	}
	double_5 = double_3;
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		double_1 = pow ( double_4 , double_5 ) ;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_7 = floor ( double_1 ) ;
	}
}
int compare_pair( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = log ( double_1 ) ;
	if(1)
	{
		return int_1;
	}
	return int_2;
}
unsigned int emulator_get_cb_opcode_count()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = sqrt ( double_1 ) ;
	return unsigned_int_1;
}
short emulator_get_opcode_count()
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = acos ( double_2 ) ;
	return short_1;
}
void print_ops()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	long long_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_2;
	double_1 = floor ( double_2 ) ;
	double_3 = log10 ( double_2 ) ;
	unsigned_int_1 = emulator_get_cb_opcode_count();

	double_3 = cos ( double_3 ) ;
	int_2 = int_1 + int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_5 = 1;
		long long_1 = 1;
		char char_3 = 1;
		float float_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		int_3 = int_2;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
		int_1 = int_2;
		int_2 = int_4;
		double_4 = fmod ( double_1 , double_3 ) ;
		float_1 = float_1 + float_1;
	}
	double_3 = atan ( double_2 ) ;
	double_1 = fabs ( double_3 ) ;
	double_1 = fabs ( double_5 ) ;
	double_4 = double_1 + double_1;
	short_3 = emulator_get_opcode_count();

	char_2 = char_1 * char_1;
	double_5 = sqrt ( double_5 ) ;
	int_1 = compare_pair(int_4,int_5);

	double_3 = pow ( double_2 , double_1 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_5 = 1;
			long long_1 = 1;
			char char_3 = 1;
			float float_1 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_4 = 1;
			double_6 = cosh ( double_1 ) ;
			if(1)
			{
				if(1)
				{
					double_5 = pow ( double_6 , double_2 ) ;
				}
				else
				{
					short short_1 = 1;
					short short_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					unsigned int unsigned_int_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_4 = 1;
					double double_4 = 1;
					double double_5 = 1;
					short short_3 = 1;
					char char_1 = 1;
					char char_2 = 1;
					int int_5 = 1;
					long long_1 = 1;
					char char_3 = 1;
					float float_1 = 1;
					double double_6 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_4 = 1;
					emulator_get_opcode_mnemonic(long_1,char_3,double_4);

					unsigned_int_3 = unsigned_int_3;
				}
				double_1 = double_6 * double_3;
				int_1 = int_1;
			}
			else
			{
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_4 = 1;
				double double_4 = 1;
				double double_5 = 1;
				short short_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_5 = 1;
				long long_1 = 1;
				char char_3 = 1;
				float float_1 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_4 = 1;
				double_7 = acos ( double_2 ) ;
			}
			int_3 = int_5 + int_2;
			double_6 = atan ( double_3 ) ;
		}
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_5 = 1;
		long long_1 = 1;
		char char_3 = 1;
		float float_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
	}
	double_5 = cosh ( double_5 ) ;
	int_3 = int_3 + int_1;
}
int emulator_get_registers( float parameter_1)
{
	int int_1 = 1;
	return int_1;
}
float emulator_get_frame_buffer( float parameter_1)
{
	float float_1 = 1;
	return float_1;
}
unsigned int write_frame_ppm( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = floor ( double_2 ) ;
	double_3 = double_2;
	float_1 = emulator_get_frame_buffer(float_1);

	double_3 = pow ( double_3 , double_2 ) ;
	double_4 = acos ( double_3 ) ;
	float_3 = float_2 * float_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			double double_4 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long_1 = long_2;
			double_5 = pow ( double_1 , double_1 ) ;
			long_3 = long_2 + long_1;
			int_1 = int_2;
			double_1 = log ( double_1 ) ;
		}
		double_5 = floor ( double_1 ) ;
	}
	double_3 = double_6;
	return unsigned_int_1;
}
double replace_extension( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double_1 = cosh ( double_1 ) ;
	int_1 = int_1;
	long_1 = long_1 + long_1;
	if(1)
	{
		double_1 = ceil ( double_1 ) ;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double_2 = double_1;
	}
	return double_1;
}
short write_vram( double parameter_1,short parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	unsigned_int_1 = ppu_synchronize(int_1);

	int_2 = is_using_vram(int_3,char_1);

	double_1 = ceil ( double_1 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_2 = 1;
		char_1 = char_2 * char_1;
		return short_1;
	}
	double_2 = double_3;
	int_5 = int_4 * int_2;
}
int map_hdma_source_address()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	{
		return int_1;
		return int_1;
		return int_2;
		return int_1;
		return int_3;
		return int_1;
	}
	long_1 = make_pair(char_1,short_1);

}
double hdma_copy_byte( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_2 = 1;
	float_1 = read_u8_pair(int_1,short_1,char_1,977);

	float_2 = float_1 * float_2;
	double_1 = log ( double_1 ) ;
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double_1 = acos ( double_2 ) ;
	}
	else
	{
		float float_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	int_1 = int_1;
	short_1 = write_vram(double_1,short_1,short_1);

	double_1 = double_3;
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double_4 = ceil ( double_3 ) ;
		if(1)
		{
			if(1)
			{
				float float_1 = 1;
				int int_1 = 1;
				short short_1 = 1;
				char char_1 = 1;
				float float_2 = 1;
				double double_1 = 1;
				double double_3 = 1;
				int int_2 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				short short_2 = 1;
				short_2 = short_1;
			}
		}
		else
		{
			int_1 = int_1 * int_1;
		}
	}
	int_2 = map_hdma_source_address();

}
short dispatch_interrupt( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	char char_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_7 = 1;
	float float_2 = 1;
	short_2 = short_1 * short_1;
	if(1)
	{
		return short_3;
	}
	double_1 = atan ( double_1 ) ;
	double_2 = log ( double_2 ) ;
	double_2 = log10 ( double_1 ) ;
	float_1 = float_1;
	float_1 = float_1 + float_1;
	double_1 = atan ( double_2 ) ;
	char_1 = char_2;
	int_3 = int_1 * int_2;
	if(1)
	{
		double_3 = atan2 ( double_3 , double_1 ) ;
		char_2 = char_3;
		double_4 = double_3 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		char char_4 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_7 = 1;
		float float_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_2 = ceil ( double_1 ) ;
		double_2 = double_5 + double_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		char char_4 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_7 = 1;
		float float_2 = 1;
		long_2 = long_1 * long_1;
		unsigned_int_3 = unsigned_int_1;
		double_5 = ldexp ( double_6 , int_1 ) ;
		double_4 = ldexp ( double_6 , int_1 ) ;
	}
	if(1)
	{
		double_6 = cos ( double_1 ) ;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		char char_4 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_7 = 1;
		float float_2 = 1;
		double_7 = tan ( double_4 ) ;
		double_2 = acos ( double_3 ) ;
		double_7 = log10 ( double_6 ) ;
	}
	else
	{
		int_3 = int_2;
		short_2 = short_1 + short_2;
	}
	double_6 = sinh ( double_4 ) ;
	double_1 = log ( double_1 ) ;
	char_4 = char_2 + char_3;
	double_2 = double_3;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		char char_4 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_7 = 1;
		float float_2 = 1;
		float_1 = float_1 * float_2;
	}
	double_8 = atan2 ( double_2 , double_3 ) ;
	double_9 = acos ( double_9 ) ;
	tick(double_1);

}
int is_dma_access_ok( double parameter_1,int parameter_2)
{
	int int_1 = 1;
	return int_1;
}
float read_u8( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	char_1 = char_1 + char_1;
	if(1)
	{
		double_1 = log ( double_1 ) ;
		return float_1;
	}
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		float_2 = read_u8_pair(int_1,short_1,char_1,97);

		double_1 = double_1 + double_2;
		int_2 = is_dma_access_ok(double_2,int_1);

		double_1 = floor ( double_2 ) ;
		double_3 = double_1 + double_1;
		dma_synchronize(long_1,400);

		map_address(unsigned_int_1);

		long_2 = long_1;
		return float_1;
	}
	else
	{
		return float_2;
	}
}
void tick( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
}
double read_u8_tick( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	tick(double_1);

	float_1 = read_u8(double_1,short_1);

	int_2 = int_1 * int_1;
	return double_2;
}
double execute_instruction( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double_1 = fabs ( double_1 ) ;
	if(1)
	{
		return double_2;
	}
	unsigned_int_1 = ppu_synchronize(int_1);

	char_1 = intr_synchronize(float_1);

	tick(double_1);

	double_1 = floor ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		double double_4 = 1;
		looper_1 += 1;
		double_2 = read_u8_tick(short_1,double_2);

		float_1 = read_u8(double_3,short_2);

		double_4 = fmod ( double_3 , double_4 ) ;
		short_1 = dispatch_interrupt(float_1);

		double_2 = atan ( double_1 ) ;
	}
	return double_5;
	long_1 = timer_synchronize(unsigned_int_1);

	int_2 = serial_synchronize(char_2);

}
short emulator_step( unsigned int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	return short_1;
	int_1 = emulator_run_until(char_1,short_2);

}
char emulator_step_internal( long parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		if(1)
		{
			return char_1;
		}
		double_1 = execute_instruction(double_2);

		double_3 = double_2;
	}
	else
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = hdma_copy_byte(int_1);

		double_3 = cosh ( double_2 ) ;
		tick(double_2);

		short_3 = short_1 * short_2;
		short_1 = emulator_step(unsigned_int_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
}
short audio_buffer_get_frames( char parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int emulator_run_until( char parameter_1,short parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	char char_3 = 1;
	short_1 = audio_buffer_get_frames(char_1);

	int_2 = int_1 * int_1;
	if(1)
	{
		short_2 = check_joyp_intr();

		short_2 = short_1;
	}
	short_1 = short_3 * short_4;
	double_1 = cos ( double_1 ) ;
	char_2 = apu_synchronize(310);

	long_1 = long_1 * long_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = fmod ( double_2 , double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_4 = 1;
		char char_3 = 1;
		looper_1 += 1;
		char_2 = char_2 + char_3;
	}
	if(1)
	{
		double_3 = tanh ( double_4 ) ;
	}
	if(1)
	{
		double_4 = sqrt ( double_1 ) ;
	}
	char_4 = emulator_step_internal(long_1);

	double_3 = cosh ( double_1 ) ;
	return int_1;
}
char get_time_sec()
{
	char char_1 = 1;
	return char_1;
}
void emulator_set_rom_usage_enabled( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long_1 = long_2;
}
float joypad_unpack_buttons( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 + long_2;
	double_1 = tan ( double_1 ) ;
	long_1 = long_2;
	double_1 = exp ( double_1 ) ;
	char_1 = char_1;
	double_2 = floor ( double_1 ) ;
	double_3 = double_3;
	double_3 = log10 ( double_3 ) ;
	return float_1;
}
short print_joypad_buttons( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double_1 = fabs ( double_1 ) ;
}
unsigned int joypad_playback_callback( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	int int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = sinh ( double_1 ) ;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_5 = 1;
		char char_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		int int_2 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_1 = float_1 + float_2;
		long_1 = joypad_get_next_state(double_2);

		long_3 = long_1 + long_2;
		long_3 = joypad_find_state(unsigned_int_1,short_1);

		int_2 = int_1 * int_1;
	}
	double_3 = exp ( double_4 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_5 = 1;
		char char_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		int int_2 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		looper_1 += 1;
		double_4 = ceil ( double_1 ) ;
		long_5 = long_4 + long_2;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	char controller_2[4];
	fgets(controller_2 ,4 ,stdin);
	if( strcmp( controller_2, ".2v") == 0)
	{
		if(1)
		{
			double_1 = double_2;
		}
		else
		{
			double_4 = exp ( double_3 ) ;
		}
	}
	emulator_get_ticks(char_1);

	float_1 = joypad_unpack_buttons(short_2);

	char_2 = char_1 * char_1;
	short_3 = print_joypad_buttons(long_5,long_1);

}
void emulator_set_joypad_callback( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = floor ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
}
long joypad_get_next_state( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double_1 = fabs ( double_2 ) ;
	if(1)
	{
		double_1 = log ( double_3 ) ;
		return long_1;
	}
	double_1 = sqrt ( double_3 ) ;
	int_2 = int_1 * int_1;
	return long_2;
}
void emulator_get_ticks( char parameter_1)
{
}
long joypad_find_state( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_3 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_1 = log10 ( double_1 ) ;
	long_1 = long_2;
	double_1 = asin ( double_2 ) ;
	float_1 = float_1;
	double_2 = tan ( double_2 ) ;
	long_1 = long_2 * long_2;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_3 = 1;
		double double_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double_2 = atan2 ( double_2 , double_2 ) ;
		int_1 = int_2;
		return long_3;
	}
	if(1)
	{
		double_3 = tanh ( double_1 ) ;
		long_4 = long_1;
		return long_2;
	}
	if(1)
	{
		double_2 = sinh ( double_3 ) ;
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			looper_1 += 1;
			double_3 = log ( double_3 ) ;
		}
		long_4 = long_2 + long_3;
	}
	else
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_3 = 1;
		double double_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double_2 = acos ( double_4 ) ;
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			double_1 = ceil ( double_3 ) ;
		}
		char_1 = char_1;
	}
	double_1 = log ( double_4 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	short_1 = short_2;
	double_5 = cos ( double_2 ) ;
	double_1 = acos ( double_6 ) ;
	return long_3;
}
long init_joypad_playback_state( long parameter_1,double parameter_2,long parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	emulator_get_ticks(char_1);

	float_1 = float_1 + float_1;
	float_3 = float_2 + float_1;
	long_1 = joypad_get_next_state(double_1);

	double_2 = double_2;
	long_1 = joypad_find_state(unsigned_int_1,short_1);

	double_3 = log10 ( double_4 ) ;
}
void emulator_set_joypad_playback_callback( short parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double_1 = atan ( double_2 ) ;
	short_1 = short_2;
	long_1 = init_joypad_playback_state(long_1,double_2,long_1);

	emulator_set_joypad_callback(float_1,double_2);

	unsigned_int_1 = joypad_playback_callback(char_1);

}
void file_data_delete( short parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double_1 = sqrt ( double_1 ) ;
	float_3 = float_1 + float_2;
	double_2 = double_2 + double_1;
}
char alloc_joypad_chunk( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_1 = ceil ( double_2 ) ;
	int_1 = int_1 + int_2;
	double_1 = log10 ( double_1 ) ;
	return char_1;
}
unsigned int joypad_read( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = cos ( double_2 ) ;
	double_1 = exp ( double_3 ) ;
	double_2 = floor ( double_2 ) ;
	short_3 = short_1 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		char char_1 = 1;
		int int_4 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_3 = exp ( double_1 ) ;
		int_2 = int_1 * int_2;
		int_3 = int_1;
		float_1 = float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_4 = tan ( double_4 ) ;
		}
		double_2 = fmod ( double_4 , double_1 ) ;
	}
	double_1 = double_5;
	long_1 = long_1 * long_1;
	double_2 = atan2 ( double_2 , double_4 ) ;
	char_1 = alloc_joypad_chunk(char_1);

	int_4 = int_1 * int_2;
	double_3 = atan ( double_1 ) ;
	short_6 = short_4 * short_5;
	int_4 = int_3 * int_4;
	return unsigned_int_1;
}
void emulator_delete( long parameter_1)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_1 = fmod ( double_2 , double_1 ) ;
		double_3 = cos ( double_4 ) ;
	}
}
long init_audio_buffer( double parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double_1 = sinh ( double_1 ) ;
	double_2 = atan2 ( double_3 , double_2 ) ;
	float_1 = float_2;
	char_1 = char_2;
	double_3 = fmod ( double_1 , double_3 ) ;
	double_2 = fabs ( double_4 ) ;
	double_2 = sinh ( double_3 ) ;
	short_1 = short_2;
	return long_1;
}
short random_u32( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long_1 = long_2;
	double_1 = fabs ( double_1 ) ;
	char_1 = char_1;
	double_2 = sqrt ( double_1 ) ;
	double_1 = fmod ( double_2 , double_2 ) ;
	return short_1;
}
short randomize_buffer( double parameter_1,unsigned int parameter_2,double parameter_3)
{
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_5 = 1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_5 = 1;
		looper_1 += 1;
		short_1 = short_2;
		short_1 = short_2 + short_1;
		long_2 = long_1 + long_1;
		double_1 = floor ( double_1 ) ;
	}
	if(1)
	{
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_5 = 1;
		double_1 = fmod ( double_2 , double_3 ) ;
		{
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_4 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			double double_5 = 1;
			int_1 = int_1 * int_2;
			long_2 = long_1;
			unsigned_int_1 = unsigned_int_1;
			char_1 = char_1;
			double_2 = log10 ( double_3 ) ;
			short_2 = random_u32(double_4);

			double_5 = cosh ( double_2 ) ;
		}
	}
}
float update_bw_palette_rgba( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = log10 ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
}
short write_oam_no_mode_check( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char_2 = char_1 + char_1;
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double_1 = pow ( double_1 , double_2 ) ;
		long_3 = long_1 * long_2;
		double_3 = double_3 * double_1;
		double_4 = floor ( double_5 ) ;
		unsigned_int_1 = unsigned_int_1;
		float_1 = float_1;
		double_3 = double_2 + double_4;
		float_2 = float_1;
		double_2 = ldexp ( double_1 , int_1 ) ;
		long_3 = long_2 + long_1;
	}
}
long make_pair( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = log ( double_1 ) ;
	double_2 = ceil ( double_2 ) ;
	return long_1;
}
void map_address( unsigned int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	{
		{
			if(1)
			{
			}
			else
			{
			}
			{
				if(1)
				{
				}
			}
		}
	}
	long_1 = make_pair(char_1,short_1);

}
char read_wave_ram( unsigned int parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double_1 = double_1;
	char controller4vul_67[1];
	fgets(controller4vul_67 ,2 ,stdin);
	if( strcmp( controller4vul_67, "2") > 0)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		double_2 = cos ( double_2 ) ;
		char controller4vul_68[5];
		fgets(controller4vul_68 ,6 ,stdin);
		if( strcmp( controller4vul_68, "3se~~") > 0)
		{
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			double double_4 = 1;
			char_1 = apu_synchronize(uni_para);

			double_1 = atan ( double_3 ) ;
			unsigned_int_1 = unsigned_int_1;
		}
		else
		{
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			double double_4 = 1;
			short_1 = short_1;
			double_2 = floor ( double_4 ) ;
		}
		return char_2;
	}
	else
	{
		return char_2;
	}
}
char read_nrx4_reg( char parameter_1)
{
	char char_1 = 1;
	return char_1;
}
double read_nrx2_reg( unsigned int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
unsigned int read_nrx1_reg( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
unsigned int read_apu( unsigned int parameter_1,long parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	char_1 = apu_synchronize(343);

	double_1 = acos ( double_1 ) ;
	{
		return unsigned_int_1;
		return unsigned_int_2;
		return unsigned_int_3;
		return unsigned_int_4;
		return unsigned_int_3;
		return unsigned_int_3;
		return unsigned_int_1;
		return unsigned_int_5;
		return unsigned_int_2;
		return unsigned_int_5;
		return unsigned_int_2;
		return unsigned_int_2;
		return unsigned_int_2;
		return unsigned_int_1;
		return unsigned_int_1;
		return unsigned_int_3;
		return unsigned_int_1;
	}
	unsigned_int_2 = read_nrx1_reg(int_1);

	double_2 = read_nrx2_reg(unsigned_int_6);

	char_2 = read_nrx4_reg(char_1);

}
unsigned int read_io( int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			long long_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_7 = 1;
			char char_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			char_1 = char_1 * char_1;
		}
		return unsigned_int_1;
		return unsigned_int_2;
		return unsigned_int_2;
		return unsigned_int_1;
		return unsigned_int_3;
		return unsigned_int_4;
		return unsigned_int_3;
		return unsigned_int_2;
		return unsigned_int_4;
		return unsigned_int_4;
		return unsigned_int_2;
		return unsigned_int_1;
		return unsigned_int_2;
		return unsigned_int_3;
		return unsigned_int_1;
		return unsigned_int_4;
		return unsigned_int_2;
		return unsigned_int_5;
		return unsigned_int_1;
		return unsigned_int_6;
		return unsigned_int_2;
		return unsigned_int_4;
		return unsigned_int_4;
		return unsigned_int_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			long long_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_7 = 1;
			char char_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			long_2 = long_1 + long_1;
			return unsigned_int_4;
		}
		else
		{
			return unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			long long_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_7 = 1;
			char char_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			read_joyp_p10_p13(float_1);

			long_1 = timer_synchronize(unsigned_int_6);

			double_1 = cos ( double_1 ) ;
			return unsigned_int_5;
		}
		else
		{
			return unsigned_int_1;
		}
		return unsigned_int_1;
		return unsigned_int_5;
		return unsigned_int_2;
	}
	int_1 = serial_synchronize(char_2);

	char_2 = intr_synchronize(float_1);

	unsigned_int_7 = ppu_synchronize(int_1);

}
unsigned int is_using_oam( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	if(1)
	{
		return unsigned_int_1;
	}
	else
	{
		return unsigned_int_1;
	}
	long_1 = is_almost_mode3(int_1);

}
long read_oam( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = sqrt ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_1 = is_using_oam(long_1,unsigned_int_2);

		char_1 = char_2;
		return long_1;
	}
	short_3 = short_1 + short_2;
	int_1 = int_1 + int_2;
	{
		return long_1;
		return long_2;
		return long_1;
		return long_1;
	}
	unsigned_int_3 = ppu_synchronize(int_3);

	double_3 = ldexp ( double_3 , int_4 ) ;
}
long is_almost_mode3( int parameter_1)
{
	long long_1 = 1;
	return long_1;
}
int is_using_vram( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	if(1)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
	long_1 = is_almost_mode3(int_2);

}
short calculate_next_ppu_intr( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		short_1 = short_2;
	}
	else
	{
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double_1 = asin ( double_1 ) ;
	}
	short_1 = calculate_next_intr(int_1);

	float_1 = float_1;
}
void reverse_bits_u8( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1;
}
int map_select_to_address( long parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int ppu_mode3_synchronize( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_1 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	long long_3 = 1;
	double double_12 = 1;
	double double_13 = 1;
	double double_14 = 1;
	unsigned int unsigned_int_9 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		return unsigned_int_2;
	}
	double_1 = acos ( double_1 ) ;
	char_2 = char_1 + char_1;
	long_1 = long_1 + long_1;
	double_2 = ldexp ( double_1 , int_1 ) ;
	if(1)
	{
		double_2 = double_2;
	}
	double_2 = double_1 + double_1;
	double_2 = atan ( double_2 ) ;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_2 = acos ( double_2 ) ;
	double_2 = double_3;
	char_2 = char_1;
	int_1 = int_1 * int_1;
	long_1 = long_1 + long_1;
	double_1 = tanh ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_3 = 1;
		long long_2 = 1;
		short short_5 = 1;
		short short_6 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_1 = 1;
		double double_9 = 1;
		double double_10 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_4 = 1;
		long long_3 = 1;
		double double_12 = 1;
		double double_13 = 1;
		double double_14 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned int unsigned_int_8 = 1;
		double_4 = double_1 + double_2;
		double_2 = fabs ( double_2 ) ;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				int_2 = int_1 + int_1;
				double_2 = log10 ( double_5 ) ;
				double_4 = cos ( double_4 ) ;
				unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
				double_1 = cos ( double_1 ) ;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				long long_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_3 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_3 = 1;
				long long_2 = 1;
				short short_5 = 1;
				short short_6 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				float float_1 = 1;
				double double_9 = 1;
				double double_10 = 1;
				int int_4 = 1;
				int int_5 = 1;
				double double_11 = 1;
				unsigned int unsigned_int_7 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_5 = 1;
				short short_2 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				char char_3 = 1;
				char char_4 = 1;
				short short_4 = 1;
				long long_3 = 1;
				double double_12 = 1;
				double double_13 = 1;
				double double_14 = 1;
				unsigned int unsigned_int_9 = 1;
				unsigned int unsigned_int_8 = 1;
				int_2 = int_2 + int_2;
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					long long_1 = 1;
					double double_2 = 1;
					int int_1 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_3 = 1;
					int int_2 = 1;
					short short_1 = 1;
					short short_3 = 1;
					long long_2 = 1;
					short short_5 = 1;
					short short_6 = 1;
					double double_4 = 1;
					double double_5 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_8 = 1;
					float float_1 = 1;
					double double_9 = 1;
					double double_10 = 1;
					int int_4 = 1;
					int int_5 = 1;
					double double_11 = 1;
					unsigned int unsigned_int_7 = 1;
					int int_6 = 1;
					unsigned int unsigned_int_5 = 1;
					short short_2 = 1;
					int int_3 = 1;
					float float_2 = 1;
					float float_3 = 1;
					char char_3 = 1;
					char char_4 = 1;
					short short_4 = 1;
					long long_3 = 1;
					double double_12 = 1;
					double double_13 = 1;
					double double_14 = 1;
					unsigned int unsigned_int_9 = 1;
					unsigned int unsigned_int_8 = 1;
					reverse_bits_u8(short_1);

					unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
					unsigned_int_5 = unsigned_int_2;
				}
				else
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					long long_1 = 1;
					double double_2 = 1;
					int int_1 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_3 = 1;
					int int_2 = 1;
					short short_1 = 1;
					short short_3 = 1;
					long long_2 = 1;
					short short_5 = 1;
					short short_6 = 1;
					double double_4 = 1;
					double double_5 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_8 = 1;
					float float_1 = 1;
					double double_9 = 1;
					double double_10 = 1;
					int int_4 = 1;
					int int_5 = 1;
					double double_11 = 1;
					unsigned int unsigned_int_7 = 1;
					int int_6 = 1;
					unsigned int unsigned_int_5 = 1;
					short short_2 = 1;
					int int_3 = 1;
					float float_2 = 1;
					float float_3 = 1;
					char char_3 = 1;
					char char_4 = 1;
					short short_4 = 1;
					long long_3 = 1;
					double double_12 = 1;
					double double_13 = 1;
					double double_14 = 1;
					unsigned int unsigned_int_9 = 1;
					unsigned int unsigned_int_8 = 1;
					unsigned_int_1 = unsigned_int_3 * unsigned_int_6;
					short_1 = short_1 + short_2;
					double_5 = ceil ( double_1 ) ;
					if(1)
					{
						double_2 = log ( double_3 ) ;
					}
					if(1)
					{
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_1 = 1;
						char char_1 = 1;
						char char_2 = 1;
						long long_1 = 1;
						double double_2 = 1;
						int int_1 = 1;
						unsigned int unsigned_int_3 = 1;
						double double_3 = 1;
						int int_2 = 1;
						short short_1 = 1;
						short short_3 = 1;
						long long_2 = 1;
						short short_5 = 1;
						short short_6 = 1;
						double double_4 = 1;
						double double_5 = 1;
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_6 = 1;
						double double_6 = 1;
						double double_7 = 1;
						double double_8 = 1;
						float float_1 = 1;
						double double_9 = 1;
						double double_10 = 1;
						int int_4 = 1;
						int int_5 = 1;
						double double_11 = 1;
						unsigned int unsigned_int_7 = 1;
						int int_6 = 1;
						unsigned int unsigned_int_5 = 1;
						short short_2 = 1;
						int int_3 = 1;
						float float_2 = 1;
						float float_3 = 1;
						char char_3 = 1;
						char char_4 = 1;
						short short_4 = 1;
						long long_3 = 1;
						double double_12 = 1;
						double double_13 = 1;
						double double_14 = 1;
						unsigned int unsigned_int_9 = 1;
						unsigned int unsigned_int_8 = 1;
						double_6 = sinh ( double_4 ) ;
						double_1 = cosh ( double_7 ) ;
						if(1)
						{
							short_2 = short_3 * short_1;
						}
						if(1)
						{
							double_8 = cosh ( double_5 ) ;
						}
						if(1)
						{
							unsigned int unsigned_int_1 = 1;
							unsigned int unsigned_int_2 = 1;
							double double_1 = 1;
							char char_1 = 1;
							char char_2 = 1;
							long long_1 = 1;
							double double_2 = 1;
							int int_1 = 1;
							unsigned int unsigned_int_3 = 1;
							double double_3 = 1;
							int int_2 = 1;
							short short_1 = 1;
							short short_3 = 1;
							long long_2 = 1;
							short short_5 = 1;
							short short_6 = 1;
							double double_4 = 1;
							double double_5 = 1;
							unsigned int unsigned_int_4 = 1;
							unsigned int unsigned_int_6 = 1;
							double double_6 = 1;
							double double_7 = 1;
							double double_8 = 1;
							float float_1 = 1;
							double double_9 = 1;
							double double_10 = 1;
							int int_4 = 1;
							int int_5 = 1;
							double double_11 = 1;
							unsigned int unsigned_int_7 = 1;
							int int_6 = 1;
							unsigned int unsigned_int_5 = 1;
							short short_2 = 1;
							int int_3 = 1;
							float float_2 = 1;
							float float_3 = 1;
							char char_3 = 1;
							char char_4 = 1;
							short short_4 = 1;
							long long_3 = 1;
							double double_12 = 1;
							double double_13 = 1;
							double double_14 = 1;
							unsigned int unsigned_int_9 = 1;
							unsigned int unsigned_int_8 = 1;
							int_2 = map_select_to_address(long_2);

							char_3 = char_4;
						}
						int_1 = int_3;
						float_3 = float_1 * float_2;
						double_9 = pow ( double_10 , double_1 ) ;
						if(1)
						{
							double_3 = fmod ( double_4 , double_2 ) ;
							double_8 = sqrt ( double_5 ) ;
						}
					}
					else
					{
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_1 = 1;
						char char_1 = 1;
						char char_2 = 1;
						long long_1 = 1;
						double double_2 = 1;
						int int_1 = 1;
						unsigned int unsigned_int_3 = 1;
						double double_3 = 1;
						int int_2 = 1;
						short short_1 = 1;
						short short_3 = 1;
						long long_2 = 1;
						short short_5 = 1;
						short short_6 = 1;
						double double_4 = 1;
						double double_5 = 1;
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_6 = 1;
						double double_6 = 1;
						double double_7 = 1;
						double double_8 = 1;
						float float_1 = 1;
						double double_9 = 1;
						double double_10 = 1;
						int int_4 = 1;
						int int_5 = 1;
						double double_11 = 1;
						unsigned int unsigned_int_7 = 1;
						int int_6 = 1;
						unsigned int unsigned_int_5 = 1;
						short short_2 = 1;
						int int_3 = 1;
						float float_2 = 1;
						float float_3 = 1;
						char char_3 = 1;
						char char_4 = 1;
						short short_4 = 1;
						long long_3 = 1;
						double double_12 = 1;
						double double_13 = 1;
						double double_14 = 1;
						unsigned int unsigned_int_9 = 1;
						unsigned int unsigned_int_8 = 1;
						int_1 = int_3 + int_2;
						short_4 = short_4;
						long_3 = long_2;
						double_6 = double_4;
						double_6 = ldexp ( double_5 , int_4 ) ;
					}
					int_6 = int_5 * int_1;
					double_8 = fmod ( double_2 , double_11 ) ;
					int_5 = int_2 + int_5;
				}
				int_2 = int_6;
				unsigned_int_7 = unsigned_int_7 + unsigned_int_7;
				int_6 = int_5;
				double_8 = log ( double_5 ) ;
			}
		}
		if(1)
		{
			double_8 = exp ( double_9 ) ;
			double_7 = floor ( double_4 ) ;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				long long_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_3 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_3 = 1;
				long long_2 = 1;
				short short_5 = 1;
				short short_6 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				float float_1 = 1;
				double double_9 = 1;
				double double_10 = 1;
				int int_4 = 1;
				int int_5 = 1;
				double double_11 = 1;
				unsigned int unsigned_int_7 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_5 = 1;
				short short_2 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				char char_3 = 1;
				char char_4 = 1;
				short short_4 = 1;
				long long_3 = 1;
				double double_12 = 1;
				double double_13 = 1;
				double double_14 = 1;
				unsigned int unsigned_int_9 = 1;
				unsigned int unsigned_int_8 = 1;
				double_3 = double_10 + double_2;
				double_4 = atan2 ( double_2 , double_10 ) ;
				double_3 = ceil ( double_2 ) ;
				double_12 = log10 ( double_1 ) ;
				if(1)
				{
				}
				if(1)
				{
					double_13 = fabs ( double_11 ) ;
				}
				int_4 = int_5;
				if(1)
				{
					if(1)
					{
						double_6 = cos ( double_3 ) ;
					}
					else
					{
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_1 = 1;
						char char_1 = 1;
						char char_2 = 1;
						long long_1 = 1;
						double double_2 = 1;
						int int_1 = 1;
						unsigned int unsigned_int_3 = 1;
						double double_3 = 1;
						int int_2 = 1;
						short short_1 = 1;
						short short_3 = 1;
						long long_2 = 1;
						short short_5 = 1;
						short short_6 = 1;
						double double_4 = 1;
						double double_5 = 1;
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_6 = 1;
						double double_6 = 1;
						double double_7 = 1;
						double double_8 = 1;
						float float_1 = 1;
						double double_9 = 1;
						double double_10 = 1;
						int int_4 = 1;
						int int_5 = 1;
						double double_11 = 1;
						unsigned int unsigned_int_7 = 1;
						int int_6 = 1;
						unsigned int unsigned_int_5 = 1;
						short short_2 = 1;
						int int_3 = 1;
						float float_2 = 1;
						float float_3 = 1;
						char char_3 = 1;
						char char_4 = 1;
						short short_4 = 1;
						long long_3 = 1;
						double double_12 = 1;
						double double_13 = 1;
						double double_14 = 1;
						unsigned int unsigned_int_9 = 1;
						unsigned int unsigned_int_8 = 1;
						unsigned_int_7 = unsigned_int_8 + unsigned_int_6;
						double_13 = floor ( double_10 ) ;
					}
				}
				long_2 = long_2;
				if(1)
				{
					unsigned_int_6 = unsigned_int_2 + unsigned_int_1;
					if(1)
					{
						double_12 = log10 ( double_11 ) ;
					}
				}
				else
				{
					double_11 = fmod ( double_8 , double_6 ) ;
				}
				double_9 = tanh ( double_1 ) ;
				double_8 = pow ( double_13 , double_8 ) ;
				double_13 = cosh ( double_11 ) ;
				if(1)
				{
					double_14 = sqrt ( double_3 ) ;
					double_10 = exp ( double_8 ) ;
				}
				double_7 = double_14 + double_11;
				double_7 = sinh ( double_13 ) ;
				float_1 = float_1;
				double_10 = tanh ( double_12 ) ;
				double_5 = double_8 + double_5;
				double_8 = double_1 + double_7;
				double_7 = double_14 + double_5;
				unsigned_int_9 = unsigned_int_4 + unsigned_int_3;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					double_2 = fmod ( double_6 , double_10 ) ;
					if(1)
					{
						double_12 = sqrt ( double_11 ) ;
					}
				}
			}
		}
	}
	short_3 = short_5 * short_6;
}
float mode3_tick_count( float parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float_1 = float_1;
	double_1 = floor ( double_1 ) ;
	double_2 = ldexp ( double_2 , int_1 ) ;
	char_2 = char_1 + char_2;
	double_1 = floor ( double_3 ) ;
	double_2 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int_2 = int_1 + int_2;
		double_2 = asin ( double_4 ) ;
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_2 = 1;
			double double_4 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double_5 = double_4;
			double_5 = double_2 + double_3;
		}
		float_2 = float_1 * float_2;
		char_1 = char_1 * char_1;
		double_1 = ldexp ( double_1 , int_1 ) ;
		short_1 = short_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_6 = sinh ( double_3 ) ;
	}
	return float_3;
}
double do_ppu_mode2( unsigned int parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		return double_1;
	}
	char_2 = char_1 + char_1;
	double_2 = floor ( double_1 ) ;
	dma_synchronize(long_1,356);

	int_1 = int_2;
	double_1 = sinh ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double_1 = double_1;
		double_3 = atan2 ( double_3 , double_2 ) ;
		if(1)
		{
			double_2 = acos ( double_4 ) ;
			if(1)
			{
				int looper_2 = 0;
				while(looper_2 < 1)
				{
					float float_1 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_2 = 1;
					long long_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_3 = 1;
					unsigned int unsigned_int_1 = 1;
					looper_2 += 1;
					unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
					double_5 = double_4 + double_4;
				}
			}
			double_5 = double_2 * double_2;
			if(1)
			{
			}
		}
	}
	double_2 = double_4 + double_5;
}
int check_stat( unsigned int parameter_1)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		double_1 = fabs ( double_1 ) ;
		double_1 = pow ( double_2 , double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			double_2 = cos ( double_3 ) ;
		}
		double_2 = tanh ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char_1 = char_1;
	}
}
void check_ly_eq_lyc( long parameter_1,short parameter_2)
{
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = cosh ( double_1 ) ;
		int_1 = int_2;
		int_3 = int_3;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = long_2;
		float_1 = float_2;
		if(1)
		{
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "-,") == 0)
			{
				if(1)
				{
					double double_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					long long_1 = 1;
					long long_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned_int_1 = unsigned_int_2;
				}
			}
		}
	}
}
unsigned int ppu_synchronize( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	long long_1 = 1;
	int int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_15 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_13 = 1;
	int int_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_8 = 1;
	float float_4 = 1;
	double double_9 = 1;
	char char_4 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_14 = 1;
	long long_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_5 = 1;
	long long_3 = 1;
	long long_5 = 1;
	double_1 = cos ( double_2 ) ;
	double_2 = fabs ( double_3 ) ;
	double_1 = double_4;
	if(1)
	{
		return unsigned_int_1;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_7 = 1;
			long long_1 = 1;
			int int_5 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_13 = 1;
			int int_4 = 1;
			double double_5 = 1;
			float float_2 = 1;
			double double_6 = 1;
			long long_2 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_8 = 1;
			float float_4 = 1;
			double double_9 = 1;
			char char_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_14 = 1;
			long long_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_5 = 1;
			long long_3 = 1;
			long long_5 = 1;
			int_1 = int_1 + int_2;
			double_3 = double_1;
			double_4 = sinh ( double_3 ) ;
			unsigned_int_1 = unsigned_int_2;
			int_3 = int_2;
			double_4 = atan ( double_4 ) ;
			if(1)
			{
			}
			double_3 = atan ( double_4 ) ;
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_7 = 1;
				long long_1 = 1;
				int int_5 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_15 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_13 = 1;
				int int_4 = 1;
				double double_5 = 1;
				float float_2 = 1;
				double double_6 = 1;
				long long_2 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_8 = 1;
				float float_4 = 1;
				double double_9 = 1;
				char char_4 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				double double_14 = 1;
				long long_4 = 1;
				char char_5 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				float float_5 = 1;
				long long_3 = 1;
				long long_5 = 1;
				short_1 = calculate_next_ppu_intr(double_4);

				int_3 = int_4 + int_1;
				double_5 = sinh ( double_5 ) ;
				float_1 = float_2;
				unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
				double_6 = log ( double_7 ) ;
				if(1)
				{
					check_ly_eq_lyc(long_1,short_1);

					int_1 = int_3 + int_2;
					if(1)
					{
						int_1 = int_5;
						long_1 = long_1;
						double_1 = log10 ( double_7 ) ;
						double_7 = asin ( double_4 ) ;
						if(1)
						{
							double_6 = atan2 ( double_3 , double_7 ) ;
						}
						else
						{
							double_7 = double_7 * double_6;
						}
					}
					else
					{
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						double double_4 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						short short_1 = 1;
						float float_1 = 1;
						unsigned int unsigned_int_3 = 1;
						double double_7 = 1;
						long long_1 = 1;
						int int_5 = 1;
						float float_3 = 1;
						unsigned int unsigned_int_6 = 1;
						double double_15 = 1;
						int int_1 = 1;
						int int_2 = 1;
						int int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						double double_13 = 1;
						int int_4 = 1;
						double double_5 = 1;
						float float_2 = 1;
						double double_6 = 1;
						long long_2 = 1;
						short short_2 = 1;
						unsigned int unsigned_int_5 = 1;
						char char_1 = 1;
						char char_2 = 1;
						char char_3 = 1;
						double double_8 = 1;
						float float_4 = 1;
						double double_9 = 1;
						char char_4 = 1;
						double double_10 = 1;
						double double_11 = 1;
						double double_12 = 1;
						double double_14 = 1;
						long long_4 = 1;
						char char_5 = 1;
						unsigned int unsigned_int_7 = 1;
						unsigned int unsigned_int_8 = 1;
						float float_5 = 1;
						long long_3 = 1;
						long long_5 = 1;
						long_3 = long_2 + long_2;
						float_1 = float_3;
						if(1)
						{
							double_4 = double_1;
						}
						if(1)
						{
							double_1 = asin ( double_6 ) ;
						}
					}
				}
				else
				{
					short_2 = short_1;
					if(1)
					{
						int_2 = int_5;
					}
					else
					{
						unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
					}
				}
				char_3 = char_1 * char_2;
				double_3 = log10 ( double_2 ) ;
				double_2 = log10 ( double_8 ) ;
				double_4 = ceil ( double_1 ) ;
				double_2 = log10 ( double_4 ) ;
				float_1 = float_4;
				char_2 = char_2 + char_3;
				double_6 = tanh ( double_7 ) ;
				double_9 = tan ( double_3 ) ;
				int_5 = check_stat(unsigned_int_2);

				char_4 = char_2;
				unsigned_int_1 = unsigned_int_3;
				unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
				double_7 = acos ( double_3 ) ;
				double_8 = exp ( double_2 ) ;
				int_3 = int_1;
				double_5 = floor ( double_1 ) ;
				double_5 = tan ( double_10 ) ;
				double_1 = asin ( double_3 ) ;
				double_3 = ceil ( double_11 ) ;
				float_1 = mode3_tick_count(float_3);

				double_12 = cos ( double_13 ) ;
				unsigned_int_3 = ppu_mode3_synchronize(double_7);

				char_2 = char_4 * char_4;
				double_4 = tan ( double_6 ) ;
				double_2 = cosh ( double_14 ) ;
				double_1 = sqrt ( double_3 ) ;
				char_4 = char_3;
				long_4 = long_1 + long_1;
				char_1 = char_5 * char_3;
				if(1)
				{
					double_3 = exp ( double_9 ) ;
				}
				else
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					short short_1 = 1;
					float float_1 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_7 = 1;
					long long_1 = 1;
					int int_5 = 1;
					float float_3 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_15 = 1;
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_13 = 1;
					int int_4 = 1;
					double double_5 = 1;
					float float_2 = 1;
					double double_6 = 1;
					long long_2 = 1;
					short short_2 = 1;
					unsigned int unsigned_int_5 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					double double_8 = 1;
					float float_4 = 1;
					double double_9 = 1;
					char char_4 = 1;
					double double_10 = 1;
					double double_11 = 1;
					double double_12 = 1;
					double double_14 = 1;
					long long_4 = 1;
					char char_5 = 1;
					unsigned int unsigned_int_7 = 1;
					unsigned int unsigned_int_8 = 1;
					float float_5 = 1;
					long long_3 = 1;
					long long_5 = 1;
					long_2 = long_5;
					double_8 = floor ( double_5 ) ;
				}
				double_5 = log ( double_13 ) ;
				unsigned_int_1 = unsigned_int_7 * unsigned_int_7;
				unsigned_int_5 = unsigned_int_6;
				double_4 = ceil ( double_1 ) ;
				short_2 = short_2;
				unsigned_int_4 = unsigned_int_8 * unsigned_int_3;
				double_12 = fabs ( double_8 ) ;
				unsigned_int_1 = unsigned_int_4;
				double_1 = double_3;
				long_2 = long_4;
				double_1 = sqrt ( double_8 ) ;
				double_6 = sqrt ( double_1 ) ;
				double_14 = cosh ( double_11 ) ;
				int_4 = int_2;
				double_5 = tan ( double_11 ) ;
				int_3 = int_2;
				float_5 = float_4 * float_1;
			}
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
			double_13 = sqrt ( double_3 ) ;
		}
	}
	double_15 = fabs ( double_15 ) ;
	double_2 = do_ppu_mode2(unsigned_int_6);

}
char read_vram( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = fmod ( double_1 , double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float_1 = float_1;
		return char_1;
	}
	else
	{
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_1 = ppu_synchronize(int_1);

		int_1 = is_using_vram(int_2,char_1);

		double_2 = ceil ( double_3 ) ;
		return char_2;
	}
}
float read_u8_pair( int parameter_1,short parameter_2,char parameter_3,int uni_para)
{
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	{
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		double_1 = pow ( double_2 , double_3 ) ;
		double_2 = acos ( double_1 ) ;
		char controller4vul_66[3];
		fgets(controller4vul_66 ,4 ,stdin);
		if( strcmp( controller4vul_66, "p:r") < 0)
		{
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char_1 = read_wave_ram(unsigned_int_2,char_2,uni_para);

			int_2 = int_1 + int_1;
		}
		return float_1;
		return float_2;
		return float_3;
		return float_4;
		return float_3;
		return float_2;
		return float_3;
		double_1 = double_4 * double_5;
		return float_5;
		return float_3;
		return float_1;
		return float_3;
	}
}
void dma_synchronize( long parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		double_1 = cos ( double_1 ) ;
	}
	double_1 = fabs ( double_1 ) ;
	if(1)
	{
		double_1 = asin ( double_2 ) ;
	}
	double_1 = atan ( double_3 ) ;
	double_2 = cos ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char controller4vul_64[5];
		fgets(controller4vul_64 ,6 ,stdin);
		if( strcmp( controller4vul_64, "T#Btq") == 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			int int_3 = 1;
			short short_1 = 1;
			char char_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int_2 = int_1 * int_1;
			char controller4vul_65[5];
			fgets(controller4vul_65 ,6 ,stdin);
			if( strcmp( controller4vul_65, "03R!F") == 0)
			{
				float_1 = read_u8_pair(int_3,short_1,char_1,uni_para);

				double_2 = log10 ( double_2 ) ;
				double_2 = ceil ( double_4 ) ;
			}
		}
		double_3 = fmod ( double_4 , double_3 ) ;
		double_5 = atan2 ( double_2 , double_1 ) ;
		double_5 = acos ( double_1 ) ;
		double_1 = exp ( double_6 ) ;
		int_4 = int_5;
		if(1)
		{
			double_4 = ceil ( double_5 ) ;
		}
	}
}
char intr_synchronize( float parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_7 = 1;
	long long_2 = 1;
	dma_synchronize(long_1,181);

	int_1 = serial_synchronize(char_1);

	double_1 = sinh ( double_2 ) ;
	double_3 = log ( double_3 ) ;
	double_4 = pow ( double_5 , double_6 ) ;
	unsigned_int_1 = ppu_synchronize(int_1);

	double_7 = fmod ( double_5 , double_1 ) ;
	long_2 = timer_synchronize(unsigned_int_1);

}
void clear_div( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		double_1 = tanh ( double_2 ) ;
	}
	unsigned_int_1 = is_div_falling_edge(short_1,float_1,double_2);

	double_2 = sqrt ( double_1 ) ;
	unsigned_int_2 = increment_tima(short_1);

}
unsigned int calculate_next_timer_intr( double parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_2 = 1;
		short_1 = calculate_next_intr(int_1);

		long_1 = long_1;
		double_1 = sinh ( double_2 ) ;
		return unsigned_int_1;
	}
	double_3 = atan ( double_1 ) ;
	unsigned_int_2 = is_div_falling_edge(short_2,float_1,double_3);

	float_1 = float_1 + float_1;
	double_1 = fmod ( double_4 , double_2 ) ;
	double_1 = fmod ( double_1 , double_3 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_2 = unsigned_int_2;
		double_5 = acos ( double_4 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_2 = 1;
		looper_1 += 1;
		double_5 = double_1;
		int_2 = int_1;
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
	double_5 = pow ( double_2 , double_2 ) ;
	char_1 = char_1 + char_2;
}
long do_timer_interrupt( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double_1 = fabs ( double_1 ) ;
	double_2 = double_1;
	int_1 = int_1;
	double_3 = sqrt ( double_3 ) ;
	int_1 = int_2 + int_2;
	double_2 = ldexp ( double_4 , int_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_4 = tan ( double_5 ) ;
	unsigned_int_1 = calculate_next_timer_intr(double_1);

}
unsigned int increment_tima( short parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	if(1)
	{
		long long_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long_1 = do_timer_interrupt(float_1);

		double_1 = ldexp ( double_2 , int_1 ) ;
	}
}
unsigned int is_div_falling_edge( short parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = asin ( double_1 ) ;
	return unsigned_int_1;
}
long timer_synchronize( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = tanh ( double_2 ) ;
	if(1)
	{
		return long_1;
	}
	double_1 = fabs ( double_2 ) ;
	if(1)
	{
		double_2 = fabs ( double_2 ) ;
		return long_1;
	}
	double_2 = cosh ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			int int_1 = 1;
			int int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short_1 = short_1 + short_2;
			short_3 = short_1 * short_1;
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			int int_1 = 1;
			int int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
		unsigned_int_3 = increment_tima(short_3);

		int_1 = int_3 + int_3;
		unsigned_int_4 = is_div_falling_edge(short_3,float_1,double_1);

		char_1 = char_1 * char_2;
		if(1)
		{
			double_1 = acos ( double_1 ) ;
		}
	}
}
short calculate_next_intr( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = fmod ( double_2 , double_3 ) ;
}
double calculate_next_serial_intr( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		short short_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = double_1 * double_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		return double_1;
	}
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	double_2 = sqrt ( double_4 ) ;
	short_1 = calculate_next_intr(int_1);

	double_1 = floor ( double_3 ) ;
	short_1 = short_2;
}
int serial_synchronize( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_8 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double_3 = double_1 + double_2;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_8 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_7 = 1;
		long_3 = long_1 * long_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_4 = double_3 + double_2;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				double double_4 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_8 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_5 = 1;
				double double_7 = 1;
				char_2 = char_1 * char_1;
				double_5 = tanh ( double_3 ) ;
				if(1)
				{
					double_1 = sinh ( double_5 ) ;
					double_6 = cosh ( double_2 ) ;
					double_6 = atan ( double_5 ) ;
					double_6 = calculate_next_serial_intr(unsigned_int_1);

					double_1 = exp ( double_3 ) ;
				}
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				double double_4 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_8 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_5 = 1;
				double double_7 = 1;
				double_7 = double_7 + double_7;
			}
		}
	}
	double_8 = tanh ( double_4 ) ;
}
void read_joyp_p10_p13( float parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	short_1 = short_1 * short_1;
	if(1)
	{
		double_1 = asin ( double_2 ) ;
	}
	long_3 = long_1 + long_2;
	double_3 = floor ( double_4 ) ;
	double_3 = ldexp ( double_2 , int_1 ) ;
	double_4 = fmod ( double_2 , double_2 ) ;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_5 = 1;
			int_2 = int_1;
		}
		if(1)
		{
			long_2 = long_2;
		}
	}
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double_1 = double_5;
	}
}
short check_joyp_intr()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_2 = tanh ( double_1 ) ;
	}
	read_joyp_p10_p13(float_1);

}
void write_io( unsigned int parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_12 = 1;
	double double_13 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	double double_14 = 1;
	double double_15 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_5 = 1;
	float float_5 = 1;
	double double_16 = 1;
	short short_7 = 1;
	int int_8 = 1;
	short short_6 = 1;
	char char_6 = 1;
	char char_7 = 1;
	float float_6 = 1;
	double double_17 = 1;
	float float_7 = 1;
	double_1 = double_2;
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_12 = 1;
		double double_13 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_4 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_5 = 1;
		double double_14 = 1;
		double double_15 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long long_5 = 1;
		float float_5 = 1;
		double double_16 = 1;
		short short_7 = 1;
		int int_8 = 1;
		short short_6 = 1;
		char char_6 = 1;
		char char_7 = 1;
		float float_6 = 1;
		double double_17 = 1;
		float float_7 = 1;
		char_3 = char_1 * char_2;
		double_3 = double_1 + double_3;
		double_2 = tanh ( double_4 ) ;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		float_1 = float_2;
		float_1 = float_1;
		double_2 = log ( double_3 ) ;
		if(1)
		{
			short_2 = short_1 + short_1;
			short_2 = short_2 + short_2;
		}
		unsigned_int_3 = unsigned_int_3;
		double_3 = double_5 + double_5;
		double_5 = atan2 ( double_4 , double_4 ) ;
		double_2 = pow ( double_3 , double_6 ) ;
		double_3 = log10 ( double_2 ) ;
		if(1)
		{
			if(1)
			{
				double_1 = exp ( double_5 ) ;
				double_6 = log ( double_7 ) ;
				double_1 = cos ( double_5 ) ;
			}
			if(1)
			{
				int_1 = int_1 * int_1;
			}
			double_1 = fmod ( double_3 , double_3 ) ;
		}
		if(1)
		{
			double_4 = sinh ( double_2 ) ;
		}
		double_8 = ceil ( double_1 ) ;
		double_5 = ldexp ( double_3 , int_1 ) ;
		if(1)
		{
			double_4 = ldexp ( double_7 , int_1 ) ;
		}
		double_7 = tanh ( double_4 ) ;
		double_6 = tan ( double_8 ) ;
		double_7 = atan ( double_4 ) ;
		double_9 = double_10;
		double_8 = cos ( double_1 ) ;
		double_2 = double_11 + double_2;
		double_6 = fmod ( double_11 , double_10 ) ;
		if(1)
		{
			double_1 = atan2 ( double_9 , double_9 ) ;
			if(1)
			{
				double_7 = pow ( double_4 , double_8 ) ;
			}
			if(1)
			{
				double_7 = tanh ( double_8 ) ;
			}
			if(1)
			{
				double_9 = sqrt ( double_9 ) ;
			}
		}
		double_7 = tan ( double_1 ) ;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		double_12 = log ( double_5 ) ;
		double_2 = sinh ( double_13 ) ;
		long_3 = long_1 * long_2;
		float_2 = float_1 + float_1;
		double_4 = fmod ( double_11 , double_8 ) ;
		double_1 = exp ( double_2 ) ;
		double_12 = sinh ( double_10 ) ;
		double_12 = exp ( double_13 ) ;
		double_10 = tan ( double_12 ) ;
		short_2 = short_2 + short_1;
		double_13 = double_11 * double_2;
		int_2 = int_3;
		if(1)
		{
			double_2 = double_8;
			char_3 = char_3;
			char_1 = char_3;
			if(1)
			{
				unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
				float_2 = float_2 * float_2;
				double_3 = sinh ( double_2 ) ;
				double_7 = sqrt ( double_10 ) ;
				double_11 = atan2 ( double_4 , double_13 ) ;
				int_2 = int_2;
			}
			if(1)
			{
				short_3 = short_2;
				short_4 = short_4;
				for(int looper_1=0; looper_1<1;looper_1++)
				{
					double_3 = sinh ( double_5 ) ;
				}
				double_8 = exp ( double_7 ) ;
			}
			int_2 = int_2 * int_4;
		}
		long_1 = long_1;
		double_6 = sinh ( double_10 ) ;
		char_5 = char_2 + char_4;
		if(1)
		{
			unsigned_int_6 = unsigned_int_2;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_5;
			unsigned_int_6 = unsigned_int_4;
			if(1)
			{
				double_2 = double_6;
				double_4 = sqrt ( double_4 ) ;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				long long_4 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				int int_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_11 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_12 = 1;
				double double_13 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_5 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_4 = 1;
				char char_4 = 1;
				char char_5 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_5 = 1;
				double double_14 = 1;
				double double_15 = 1;
				int int_5 = 1;
				int int_6 = 1;
				int int_7 = 1;
				unsigned int unsigned_int_7 = 1;
				float float_3 = 1;
				float float_4 = 1;
				long long_5 = 1;
				float float_5 = 1;
				double double_16 = 1;
				short short_7 = 1;
				int int_8 = 1;
				short short_6 = 1;
				char char_6 = 1;
				char char_7 = 1;
				float float_6 = 1;
				double double_17 = 1;
				float float_7 = 1;
				short_6 = short_3 * short_5;
				double_11 = ceil ( double_10 ) ;
				short_2 = short_2 + short_3;
				double_14 = atan2 ( double_10 , double_3 ) ;
			}
		}
		double_15 = double_8 * double_1;
		int_6 = int_3 + int_5;
		int_7 = int_2 + int_5;
		double_3 = double_8;
		int_6 = int_4 + int_1;
		unsigned_int_1 = unsigned_int_7 + unsigned_int_5;
		float_4 = float_3 + float_4;
		double_9 = double_15 * double_6;
		int_6 = int_1 * int_4;
		short_1 = short_5;
		double_1 = tan ( double_2 ) ;
		double_6 = log10 ( double_5 ) ;
		if(1)
		{
			int_4 = int_7;
			double_11 = fmod ( double_11 , double_14 ) ;
		}
		double_6 = ceil ( double_1 ) ;
		double_14 = sinh ( double_7 ) ;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
		double_5 = sqrt ( double_3 ) ;
		double_2 = fabs ( double_13 ) ;
		unsigned_int_4 = unsigned_int_5;
		double_1 = cos ( double_11 ) ;
		char_1 = char_3;
		double_12 = cosh ( double_6 ) ;
		float_4 = float_2;
		double_12 = ldexp ( double_13 , int_3 ) ;
		long_4 = long_5;
		double_7 = double_15 + double_9;
		double_8 = floor ( double_7 ) ;
		short_3 = short_1 * short_1;
		float_2 = float_5 * float_4;
		double_3 = double_3 + double_1;
		unsigned_int_3 = unsigned_int_1;
		float_5 = float_5 + float_1;
		double_16 = sinh ( double_14 ) ;
		int_3 = int_3 * int_7;
		short_7 = short_4;
		double_6 = acos ( double_6 ) ;
		int_2 = int_1;
		double_11 = double_1;
		unsigned_int_3 = unsigned_int_6;
		double_15 = double_13;
		int_7 = int_8;
		int_5 = int_4;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_4 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_5 = 1;
			double double_14 = 1;
			double double_15 = 1;
			int int_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_5 = 1;
			float float_5 = 1;
			double double_16 = 1;
			short short_7 = 1;
			int int_8 = 1;
			short short_6 = 1;
			char char_6 = 1;
			char char_7 = 1;
			float float_6 = 1;
			double double_17 = 1;
			float float_7 = 1;
			char_4 = char_6;
		}
		if(1)
		{
			double_6 = fabs ( double_6 ) ;
			double_9 = fabs ( double_11 ) ;
		}
		if(1)
		{
			short_1 = short_5 + short_2;
		}
		if(1)
		{
			double_15 = floor ( double_9 ) ;
		}
		if(1)
		{
			int_1 = int_1 + int_7;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1;
		}
		char controller4vul_61[5];
		fgets(controller4vul_61 ,6 ,stdin);
		if( strcmp( controller4vul_61, "2[FjF") == 0)
		{
			double_6 = exp ( double_3 ) ;
			double_5 = cosh ( double_9 ) ;
			char controller4vul_62[5];
			fgets(controller4vul_62 ,6 ,stdin);
			if( strcmp( controller4vul_62, "|-:~D") == 0)
			{
				char controller4vul_63[2];
				fgets(controller4vul_63 ,3 ,stdin);
				if( strcmp( controller4vul_63, "v=") == 0)
				{
					dma_synchronize(long_4,uni_para);

					double_11 = sqrt ( double_1 ) ;
				}
				else
				{
					double_14 = acos ( double_3 ) ;
					double_10 = asin ( double_14 ) ;
				}
			}
			else
			{
				double_13 = asin ( double_16 ) ;
				unsigned_int_7 = unsigned_int_5 * unsigned_int_6;
			}
			if(1)
			{
				double_2 = ceil ( double_14 ) ;
			}
		}
		if(1)
		{
			double_12 = floor ( double_9 ) ;
			short_2 = short_5;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_4 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_5 = 1;
			double double_14 = 1;
			double double_15 = 1;
			int int_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_5 = 1;
			float float_5 = 1;
			double double_16 = 1;
			short short_7 = 1;
			int int_8 = 1;
			short short_6 = 1;
			char char_6 = 1;
			char char_7 = 1;
			float float_6 = 1;
			double double_17 = 1;
			float float_7 = 1;
			double_9 = fabs ( double_8 ) ;
			double_9 = asin ( double_14 ) ;
			double_2 = double_12;
			char_2 = char_7;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_4 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_5 = 1;
			double double_14 = 1;
			double double_15 = 1;
			int int_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_5 = 1;
			float float_5 = 1;
			double double_16 = 1;
			short short_7 = 1;
			int int_8 = 1;
			short short_6 = 1;
			char char_6 = 1;
			char char_7 = 1;
			float float_6 = 1;
			double double_17 = 1;
			float float_7 = 1;
			float_4 = float_6 * float_3;
			float_3 = float_2;
			int_8 = int_5;
			double_9 = atan2 ( double_16 , double_17 ) ;
			double_10 = tan ( double_15 ) ;
			double_10 = tan ( double_9 ) ;
			int_5 = int_2;
			int_2 = int_7 * int_1;
			if(1)
			{
				double_2 = double_15 + double_12;
			}
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_4 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_5 = 1;
			double double_14 = 1;
			double double_15 = 1;
			int int_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_5 = 1;
			float float_5 = 1;
			double double_16 = 1;
			short short_7 = 1;
			int int_8 = 1;
			short short_6 = 1;
			char char_6 = 1;
			char char_7 = 1;
			float float_6 = 1;
			double double_17 = 1;
			float float_7 = 1;
			double_11 = log ( double_5 ) ;
			float_1 = float_7 * float_7;
		}
		double_1 = tanh ( double_15 ) ;
		short_3 = short_2;
	}
}
short write_noise_period( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_2;
	double_1 = double_1;
	double_4 = double_2 * double_3;
	double_3 = floor ( double_1 ) ;
	double_4 = fabs ( double_3 ) ;
}
long write_wave_period( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = sinh ( double_2 ) ;
	double_3 = ldexp ( double_1 , int_1 ) ;
}
long trigger_nr14_reg( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double_1 = double_1;
	char_1 = char_2;
	long_1 = calculate_sweep_frequency(int_1);

	float_1 = float_2;
	double_2 = fabs ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		long_2 = long_2;
		double_1 = cos ( double_2 ) ;
	}
	else
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double_4 = log10 ( double_4 ) ;
	}
}
double trigger_nrx4_envelope( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_3 = char_1 + char_2;
	short_1 = short_1;
	double_1 = double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int_1 = int_1;
	}
	double_1 = acos ( double_2 ) ;
}
unsigned int write_nrx4_reg( short parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4,short parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_2;
	double_2 = acos ( double_1 ) ;
	char_1 = char_1;
	double_2 = fabs ( double_1 ) ;
	double_3 = ldexp ( double_4 , int_2 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_2 = double_3;
		char_1 = char_2;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double_4 = double_3;
			long_1 = long_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double_2 = log ( double_2 ) ;
			if(1)
			{
				double_2 = floor ( double_5 ) ;
			}
			double_3 = cos ( double_1 ) ;
		}
		if(1)
		{
			double_5 = tan ( double_6 ) ;
		}
	}
	double_5 = log10 ( double_6 ) ;
	return unsigned_int_1;
}
void write_nrx3_reg( long parameter_1,unsigned int parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_1;
}
long write_nrx2_reg( double parameter_1,short parameter_2,int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1 * double_1;
	double_1 = tan ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_2 = char_1 * char_1;
		int_1 = int_1 * int_2;
	}
	if(1)
	{
		char controller_3[3];
		fgets(controller_3 ,3 ,stdin);
		if( strcmp( controller_3, "c}") == 0)
		{
			double double_1 = 1;
			double double_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_2 = sqrt ( double_3 ) ;
			double_1 = cos ( double_4 ) ;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	double_5 = double_6;
	double_3 = floor ( double_3 ) ;
	long_1 = long_1 + long_2;
}
char write_nrx1_reg( short parameter_1,short parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	if(1)
	{
		double_1 = acos ( double_2 ) ;
	}
	double_1 = atan ( double_2 ) ;
	double_2 = tanh ( double_3 ) ;
}
unsigned int write_audio_frame( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_2;
	double_1 = atan2 ( double_2 , double_1 ) ;
	float_2 = float_1 + float_2;
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char_1 = char_1 * char_1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					short short_1 = 1;
					short short_2 = 1;
					double double_4 = 1;
					char char_1 = 1;
					long long_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					short short_3 = 1;
					short short_4 = 1;
					double double_3 = 1;
					int int_3 = 1;
					int int_4 = 1;
					double_1 = log ( double_3 ) ;
				}
			}
			long_1 = long_1 * long_1;
			int_2 = int_1 + int_2;
			short_4 = short_1 + short_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_4;
		}
		double_4 = double_1;
	}
	double_1 = ceil ( double_1 ) ;
}
short update_noise( unsigned int parameter_1,int parameter_2)
{
	if(1)
	{
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			int int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			looper_1 += 1;
			int_1 = int_1;
			float_3 = float_1 + float_2;
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_3 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					unsigned_int_1 = unsigned_int_2;
					if(1)
					{
						double_1 = double_1 * double_1;
					}
					else
					{
						int int_1 = 1;
						float float_1 = 1;
						float float_2 = 1;
						float float_3 = 1;
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						double double_4 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						int int_3 = 1;
						int int_2 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_5 = 1;
						int_2 = int_1 * int_1;
					}
					double_1 = ldexp ( double_1 , int_3 ) ;
					double_1 = log ( double_1 ) ;
				}
				else
				{
					int int_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_3 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					double_2 = double_2 + double_2;
					unsigned_int_5 = unsigned_int_3 * unsigned_int_4;
				}
			}
			else
			{
				double_2 = asin ( double_2 ) ;
			}
			double_3 = double_1 * double_1;
			double_4 = cos ( double_4 ) ;
		}
	}
}
char update_wave( float parameter_1,float parameter_2,int parameter_3)
{
	if(1)
	{
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			looper_1 += 1;
			int_1 = int_1 + int_1;
			double_1 = cosh ( double_2 ) ;
			if(1)
			{
				int int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_1 = 1;
				short short_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned_int_1 = unsigned_int_1;
				double_2 = sqrt ( double_3 ) ;
				short_1 = short_1;
				if(1)
				{
					double_1 = fabs ( double_4 ) ;
				}
				else
				{
					double_4 = ceil ( double_3 ) ;
				}
				double_2 = double_1 + double_3;
				double_4 = acos ( double_4 ) ;
			}
			else
			{
				int int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_1 = 1;
				short short_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char_1 = char_2;
				double_1 = fabs ( double_2 ) ;
			}
			double_4 = ldexp ( double_1 , int_1 ) ;
			double_2 = pow ( double_4 , double_5 ) ;
			double_6 = acos ( double_3 ) ;
		}
	}
}
unsigned int update_square_wave( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = double_1 + double_1;
	if(1)
	{
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			looper_1 += 1;
			double_1 = acos ( double_1 ) ;
			short_1 = short_1;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				float float_1 = 1;
				double_1 = double_2;
				float_1 = float_1 + float_1;
				double_2 = double_1;
			}
			else
			{
				int_2 = int_1;
				double_2 = exp ( double_1 ) ;
			}
			double_3 = log ( double_4 ) ;
			double_3 = tan ( double_2 ) ;
		}
	}
}
short get_gb_frames_until_next_resampled_frame( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = char_2;
	double_1 = cosh ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		looper_1 += 1;
		long_1 = long_2;
		double_2 = double_3;
	}
	return short_1;
}
double apu_update_channels( int parameter_1,short parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		looper_1 += 1;
		double_1 = cos ( double_1 ) ;
		double_1 = sqrt ( double_2 ) ;
		char_1 = update_wave(float_1,float_2,int_1);

		double_2 = exp ( double_1 ) ;
		double_3 = acos ( double_1 ) ;
		unsigned_int_1 = write_audio_frame(float_1,float_1);

		double_1 = log10 ( double_1 ) ;
		short_1 = update_noise(unsigned_int_1,int_1);

		double_3 = floor ( double_1 ) ;
		double_3 = tan ( double_1 ) ;
		unsigned_int_2 = unsigned_int_3;
		short_1 = get_gb_frames_until_next_resampled_frame(unsigned_int_1);

		unsigned_int_4 = update_square_wave(long_1,char_1);

		double_2 = floor ( double_3 ) ;
	}
}
int update_envelopes()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_1 = pow ( double_2 , double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double_2 = double_4 + double_1;
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				float_2 = float_1 * float_1;
				long_2 = long_1 + long_2;
				double_4 = ceil ( double_5 ) ;
				char controller_3[4];
				fgets(controller_3 ,4 ,stdin);
				if( strcmp( controller_3, "/jp") == 0)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					float float_1 = 1;
					float float_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double_2 = double_6 + double_3;
				}
				else
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					float float_1 = 1;
					float float_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double_1 = double_2 + double_7;
				}
			}
		}
		else
		{
			double_1 = double_5;
		}
	}
}
void update_lengths()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = cos ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_2 = long_1 + long_1;
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float_1 = float_2;
			}
		}
	}
}
double write_square_wave_period( float parameter_1,double parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 278)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	double_1 = double_1 * double_2;
	double_1 = floor ( double_1 ) ;
}
long calculate_sweep_frequency( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double_1 = log ( double_1 ) ;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "(") == 0)
	{
		return long_1;
	}
	else
	{
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double_2 = ceil ( double_2 ) ;
		return long_1;
	}
}
long update_sweep( char parameter_1,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char controller4vul_70[4];
	fgets(controller4vul_70 ,5 ,stdin);
	if( strcmp( controller4vul_70, "W95R") == 0)
	{
		double_1 = write_square_wave_period(float_1,double_1,double_2,uni_para);

		return long_1;
	}
	double_4 = double_3 + double_4;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			double_5 = double_6;
			double_3 = log10 ( double_7 ) ;
			if(1)
			{
				double double_1 = 1;
				float float_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				int int_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				char char_1 = 1;
				int_1 = int_1;
				double_3 = double_3 + double_1;
			}
			else
			{
				if(1)
				{
					double double_1 = 1;
					float float_1 = 1;
					double double_2 = 1;
					long long_1 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					double double_7 = 1;
					int int_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					char char_1 = 1;
					short_1 = short_2;
					double_7 = pow ( double_1 , double_2 ) ;
					char_1 = char_1;
				}
				if(1)
				{
					double_1 = atan ( double_7 ) ;
					double_4 = double_3;
				}
			}
		}
		else
		{
			double_4 = log10 ( double_1 ) ;
		}
	}
}
short apu_update( float parameter_1,float parameter_2,int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	long_1 = update_sweep(char_1,uni_para);

	int looper_1 = 0;
	while(looper_1 < 1)
	{
		long long_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		looper_1 += 1;
		short_1 = short_1;
		if(1)
		{
			long long_1 = 1;
			char char_1 = 1;
			short short_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_2 = 1;
			double_1 = atan2 ( double_2 , double_3 ) ;
			{
				long long_1 = 1;
				char char_1 = 1;
				short short_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_4 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				char char_2 = 1;
				float_1 = float_1 * float_2;
				double_3 = ldexp ( double_3 , int_1 ) ;
				char_2 = char_1;
			}
		}
		int_3 = int_1 + int_2;
		long_1 = long_1 * long_1;
		double_4 = tanh ( double_4 ) ;
	}
}
char apu_synchronize(int uni_para)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char controller4vul_69[1];
	fgets(controller4vul_69 ,2 ,stdin);
	if( strcmp( controller4vul_69, "o") == 0)
	{
		short short_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short_1 = apu_update(float_1,float_1,uni_para);

		double_1 = sqrt ( double_1 ) ;
		if(1)
		{
			short short_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_2 = 1;
			int_1 = int_1 + int_1;
			double_1 = atan ( double_1 ) ;
		}
		else
		{
			short short_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_2 = 1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				short short_1 = 1;
				float float_1 = 1;
				double double_1 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_1 = 1;
				short short_2 = 1;
				short_1 = short_2;
			}
			unsigned_int_1 = unsigned_int_1;
		}
	}
}
double write_apu( unsigned int parameter_1,char parameter_2,char parameter_3)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	char_1 = write_nrx1_reg(short_1,short_2,char_1,long_1);

	int_2 = int_1 * int_2;
	char_2 = apu_synchronize(490);

	double_1 = sqrt ( double_1 ) ;
	double_1 = log10 ( double_2 ) ;
	long_1 = write_wave_period(unsigned_int_1,unsigned_int_1);

	short_3 = write_noise_period(long_1);

	double_3 = exp ( double_1 ) ;
	write_nrx3_reg(long_2,unsigned_int_1,double_1);

	double_1 = write_square_wave_period(float_1,double_3,double_1,470);

	double_1 = trigger_nrx4_envelope(unsigned_int_2,unsigned_int_3,unsigned_int_2);

	int_3 = int_2 * int_3;
	unsigned_int_1 = write_nrx4_reg(short_2,char_1,long_3,unsigned_int_2,short_1);

	long_1 = trigger_nr14_reg(double_3,float_1);

	double_3 = floor ( double_2 ) ;
	double_1 = fmod ( double_1 , double_4 ) ;
	long_2 = write_nrx2_reg(double_2,short_1,int_2,unsigned_int_2);

}
short set_af_reg( short parameter_1,short parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short_1 = short_2;
	double_1 = acos ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_1 = log10 ( double_2 ) ;
	double_2 = double_3 * double_3;
}
int validate_header_checksum( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = fmod ( double_1 , double_1 ) ;
	}
	return int_1;
}
int get_enum_string( int parameter_1,char parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = cos ( double_2 ) ;
	return int_1;
}
int get_result_string( float parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = get_enum_string(int_1,char_1,char_2);

	long_2 = long_1 + long_1;
	return int_1;
}
void log_cart_info( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = asin ( double_2 ) ;
	float_1 = float_2;
	double_2 = cos ( double_1 ) ;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_2;
	int_1 = get_result_string(float_2);

	int_1 = validate_header_checksum(double_1);

	int_2 = int_2 + int_1;
	double_2 = double_2;
	double_1 = fmod ( double_3 , double_1 ) ;
	double_2 = asin ( double_4 ) ;
}
long huc1_write_rom( float parameter_1,long parameter_2,double parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char_1 = char_1;
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double_1 = fmod ( double_2 , double_2 ) ;
		short_2 = short_1 + short_2;
		double_2 = ceil ( double_1 ) ;
		double_2 = ldexp ( double_3 , int_1 ) ;
	}
	double_2 = tan ( double_3 ) ;
	if(1)
	{
		double_3 = acos ( double_2 ) ;
	}
	unsigned_int_1 = set_ext_ram_bank(char_1,short_3);

	double_1 = atan ( double_1 ) ;
	if(1)
	{
		double_2 = cosh ( double_2 ) ;
		double_1 = atan2 ( double_2 , double_4 ) ;
	}
	else
	{
		double_4 = log ( double_4 ) ;
	}
	float_1 = float_2;
	double_4 = atan ( double_3 ) ;
	short_2 = set_rom_bank(long_1,int_2,char_1);

}
float mbc5_write_rom( char parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_1 = set_ext_ram_bank(char_1,short_1);

		double_1 = ceil ( double_2 ) ;
		double_2 = double_1 + double_2;
		short_2 = set_rom_bank(long_1,int_1,char_2);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		double_2 = log10 ( double_1 ) ;
	}
	long_1 = long_1;
}
void mbc3_write_ext_ram( char parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_7 = 1;
	float float_3 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
	}
	double_1 = fmod ( double_2 , double_2 ) ;
	if(1)
	{
		short_1 = short_2;
	}
	if(1)
	{
	}
	double_3 = acos ( double_2 ) ;
	double_1 = tanh ( double_4 ) ;
	double_2 = atan2 ( double_4 , double_1 ) ;
	double_3 = sinh ( double_4 ) ;
	double_4 = double_5 * double_3;
	short_2 = short_1;
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_7 = 1;
		float float_3 = 1;
		short short_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = tan ( double_1 ) ;
		double_1 = floor ( double_2 ) ;
		double_6 = ceil ( double_2 ) ;
		emulator_ticks_to_time(double_3,float_1,float_2,int_1,unsigned_int_1,double_2);

		double_2 = double_4;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_4 = double_6 + double_7;
		double_4 = double_5;
		double_7 = sqrt ( double_7 ) ;
	}
	double_7 = double_4 + double_7;
	float_3 = gb_write_ext_ram(short_3,short_1,float_4);

	double_6 = double_1 * double_4;
	float_4 = float_5;
}
void emulator_ticks_to_time( double parameter_1,float parameter_2,float parameter_3,int parameter_4,unsigned int parameter_5,double parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_1 = char_2;
	double_1 = acos ( double_1 ) ;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_1 = atan2 ( double_2 , double_2 ) ;
	double_1 = double_1;
	double_2 = tan ( double_1 ) ;
}
double mbc3_read_ext_ram( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	if(1)
	{
		return double_1;
	}
	int_1 = int_2;
	if(1)
	{
		return double_2;
	}
	if(1)
	{
		return double_3;
	}
	double_2 = ceil ( double_2 ) ;
	long_2 = long_1 + long_1;
	char_1 = char_1;
	double_1 = gb_read_ext_ram(float_1,unsigned_int_1);

	double_1 = floor ( double_2 ) ;
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		emulator_ticks_to_time(double_4,float_1,float_2,int_1,unsigned_int_1,double_4);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		float_2 = float_2 * float_1;
		unsigned_int_2 = unsigned_int_1;
		short_1 = short_1 * short_1;
		double_3 = fabs ( double_1 ) ;
		double_4 = cosh ( double_4 ) ;
	}
	return double_4;
}
unsigned int mbc3_write_rom( int parameter_1,double parameter_2,unsigned int parameter_3)
{
	short short_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	long long_1 = 1;
	{
		short short_3 = 1;
		long long_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		short short_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_2 = 1;
		long long_1 = 1;
		double_1 = exp ( double_2 ) ;
		double_2 = fmod ( double_2 , double_3 ) ;
		double_3 = acos ( double_3 ) ;
		if(1)
		{
			short short_3 = 1;
			long long_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			short short_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_2 = 1;
			long long_1 = 1;
			short_2 = short_1 + short_2;
		}
		double_4 = tan ( double_5 ) ;
		double_3 = cos ( double_5 ) ;
		if(1)
		{
			short short_3 = 1;
			long long_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			short short_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long_1 = long_1;
		}
		short_3 = short_1;
	}
	short_3 = set_rom_bank(long_2,int_1,char_1);

	unsigned_int_1 = set_ext_ram_bank(char_2,short_4);

}
char mmm01_write_rom( unsigned int parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = tanh ( double_1 ) ;
	{
		double double_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = set_cart_info(long_1,char_1);

		double_1 = double_1;
		int_3 = int_1 * int_2;
		long_1 = long_1 + long_1;
		double_2 = fmod ( double_3 , double_2 ) ;
	}
}
void mbc2_write_ram( float parameter_1,unsigned int parameter_2,double parameter_3)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_1 = floor ( double_2 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
}
void mbc2_read_ram( int parameter_1,char parameter_2)
{
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "tku") == 0)
	{
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = cosh ( double_2 ) ;
	}
}
float mbc2_write_rom( unsigned int parameter_1,short parameter_2,long parameter_3)
{
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	{
		char char_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		double double_4 = 1;
		long long_2 = 1;
		if(1)
		{
			double_1 = atan2 ( double_2 , double_3 ) ;
		}
		char_1 = char_2;
		if(1)
		{
			char char_2 = 1;
			short short_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double_4 = double_2 * double_1;
			if(1)
			{
				char char_2 = 1;
				short short_1 = 1;
				long long_1 = 1;
				int int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				char char_1 = 1;
				double double_4 = 1;
				long long_2 = 1;
				short_1 = set_rom_bank(long_1,int_1,char_2);

				long_1 = long_2;
			}
			double_2 = pow ( double_3 , double_3 ) ;
		}
	}
}
void mbc1_write_rom( long parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = mbc1_write_rom_shared(short_1,long_1,int_2,char_1,short_2);

}
unsigned int set_ext_ram_bank( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = log ( double_2 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float_1 = float_1;
	}
	double_3 = double_3;
}
short set_rom_bank( long parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = log10 ( double_2 ) ;
	float_1 = float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	double_1 = acos ( double_3 ) ;
}
int mbc1_write_rom_shared( short parameter_1,long parameter_2,int parameter_3,char parameter_4,short parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_6 = 1;
	char char_5 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long_1 = long_1;
	{
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = sinh ( double_2 ) ;
		double_2 = ldexp ( double_1 , int_1 ) ;
	}
	double_3 = ldexp ( double_1 , int_1 ) ;
	int_3 = int_1 * int_2;
	if(1)
	{
		long long_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		double double_6 = 1;
		char char_5 = 1;
		short short_2 = 1;
		double double_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double_1 = tanh ( double_4 ) ;
	}
	double_5 = sqrt ( double_2 ) ;
	char_1 = char_2;
	short_1 = set_rom_bank(long_2,int_2,char_2);

	int_1 = int_4 * int_1;
	if(1)
	{
		long long_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		double double_6 = 1;
		char char_5 = 1;
		short short_2 = 1;
		double double_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_3 * char_2;
		double_3 = tanh ( double_1 ) ;
	}
	int_1 = int_1;
	int_3 = int_4 + int_3;
	double_1 = tan ( double_6 ) ;
	unsigned_int_1 = set_ext_ram_bank(char_5,short_2);

}
float mbc1m_write_rom( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int_1 = mbc1_write_rom_shared(short_1,long_1,int_1,char_1,short_1);

	double_1 = sinh ( double_1 ) ;
}
char dummy_write( int parameter_1,long parameter_2,int parameter_3)
{
}
int dummy_read( long parameter_1,char parameter_2)
{
	int int_1 = 1;
	return int_1;
}
float gb_write_ext_ram( short parameter_1,short parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = cosh ( double_1 ) ;
		double_1 = atan ( double_2 ) ;
		double_1 = tan ( double_2 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = log ( double_1 ) ;
	}
}
double gb_read_ext_ram( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "NR") == 0)
	{
		double_1 = pow ( double_1 , double_2 ) ;
		return double_3;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double_1 = ldexp ( double_1 , int_1 ) ;
		return double_2;
	}
}
short init_memory_map( double parameter_1)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	long long_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	mbc2_read_ram(int_1,char_1);

	char_2 = mmm01_write_rom(unsigned_int_1,double_1,int_2);

	double_1 = log10 ( double_2 ) ;
	double_2 = double_2;
	{
		long_1 = long_2;
		short_1 = short_1;
		char_2 = dummy_write(int_2,long_2,int_3);

		double_2 = acos ( double_2 ) ;
		double_2 = acos ( double_2 ) ;
		float_1 = float_1;
		double_3 = ldexp ( double_4 , int_1 ) ;
		char_1 = char_2 * char_1;
	}
	{
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		int int_3 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		long long_5 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		double_5 = atan ( double_5 ) ;
		double_6 = ceil ( double_7 ) ;
		unsigned_int_2 = unsigned_int_3;
		float_2 = mbc2_write_rom(unsigned_int_4,short_2,long_2);

		mbc3_write_ext_ram(char_3,short_1,char_3);

		double_5 = fabs ( double_6 ) ;
		mbc2_write_ram(float_2,unsigned_int_2,double_1);

		double_3 = log10 ( double_2 ) ;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		long_4 = long_3 + long_2;
		float_1 = gb_write_ext_ram(short_1,short_1,float_2);

		mbc1_write_rom(long_2,int_1,double_2);

		unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
		int_4 = int_1 * int_4;
		char controller_1[4];
		fgets(controller_1 ,4 ,stdin);
		if( strcmp( controller_1, "[N2") == 0)
		{
			int_2 = int_5 + int_3;
			double_4 = floor ( double_2 ) ;
		}
		long_5 = huc1_write_rom(float_2,long_1,double_8);

		double_4 = exp ( double_1 ) ;
		float_1 = mbc1m_write_rom(double_8,double_6,double_9);

		double_2 = log ( double_9 ) ;
		double_4 = double_4;
		int_5 = dummy_read(long_2,char_3);

		double_2 = double_1;
		return short_2;
	}
	double_6 = gb_read_ext_ram(float_1,unsigned_int_2);

	unsigned_int_1 = mbc3_write_rom(int_5,double_5,unsigned_int_4);

	double_8 = atan ( double_4 ) ;
	return short_2;
	double_5 = mbc3_read_ext_ram(int_3,double_7);

	float_1 = mbc5_write_rom(char_1,char_1,char_3);

}
double set_cart_info( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = asin ( double_2 ) ;
	double_1 = tan ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_1 = init_memory_map(double_2);

		int_2 = int_1 * int_1;
	}
}
float get_cart_info( float parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double_1 = double_1 + double_2;
	short_3 = short_1 + short_2;
	double_2 = double_3 + double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_2 * short_2;
	}
	double_3 = fabs ( double_1 ) ;
	float_1 = float_1;
	float_2 = float_1 + float_1;
	short_3 = short_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_3 = 1;
		int_2 = int_1 * int_2;
		double_2 = tanh ( double_3 ) ;
		double_4 = atan2 ( double_1 , double_5 ) ;
		long_1 = long_2;
		long_1 = long_1;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_3 = 1;
		double_1 = pow ( double_4 , double_4 ) ;
		double_5 = sinh ( double_4 ) ;
		int_3 = int_3;
		double_2 = sinh ( double_5 ) ;
		char_2 = char_1 * char_1;
		long_2 = long_3;
		double_2 = sinh ( double_2 ) ;
	}
	float_3 = float_4;
	long_2 = long_2 + long_2;
	short_3 = short_3 + short_5;
	return float_4;
}
float get_cart_infos( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_5 = 1;
	double double_3 = 1;
	double_1 = cos ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		char char_1 = 1;
		double double_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_5 = 1;
		double double_3 = 1;
		double_2 = pow ( double_3 , double_1 ) ;
		if(1)
		{
		}
		if(1)
		{
			if(1)
			{
				double_3 = cosh ( double_3 ) ;
				return float_1;
			}
			float_2 = float_1 + float_2;
		}
	}
	double_2 = set_cart_info(long_1,char_1);

	double_1 = log10 ( double_4 ) ;
	float_3 = get_cart_info(float_4,float_2,unsigned_int_1);

	double_2 = exp ( double_2 ) ;
	return float_5;
}
long init_emulator( short parameter_1,float parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double double_11 = 1;
	int int_5 = 1;
	int int_6 = 1;
	write_io(unsigned_int_1,int_1,char_1,uni_para);

	double_1 = cosh ( double_1 ) ;
	double_2 = double_2 + double_3;
	short_1 = short_2;
	double_4 = log10 ( double_3 ) ;
	short_1 = short_1 * short_1;
	long_1 = long_1 + long_1;
	double_3 = double_5 * double_2;
	double_2 = double_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = int_2;
	double_5 = ldexp ( double_3 , int_1 ) ;
	unsigned_int_2 = unsigned_int_2;
	double_3 = log ( double_5 ) ;
	double_3 = sqrt ( double_3 ) ;
	double_4 = log ( double_3 ) ;
	double_3 = ldexp ( double_2 , int_3 ) ;
	short_3 = short_4;
	double_6 = cosh ( double_3 ) ;
	float_3 = float_1 * float_2;
	double_5 = ldexp ( double_2 , int_1 ) ;
	double_6 = tanh ( double_5 ) ;
	double_6 = asin ( double_3 ) ;
	double_7 = log ( double_4 ) ;
	double_1 = exp ( double_3 ) ;
	double_7 = sqrt ( double_4 ) ;
	double_2 = atan2 ( double_7 , double_8 ) ;
	double_2 = log ( double_6 ) ;
	double_6 = double_9;
	double_10 = atan ( double_10 ) ;
	double_5 = double_3 + double_10;
	double_10 = asin ( double_1 ) ;
	unsigned_int_2 = unsigned_int_3;
	double_3 = sqrt ( double_10 ) ;
	double_4 = double_2 + double_9;
	long_2 = long_3;
	double_7 = atan ( double_2 ) ;
	double_9 = cos ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_2;
		int_3 = int_2 + int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			double_9 = exp ( double_8 ) ;
			int_1 = int_4;
		}
	}
	long_3 = long_4 * long_3;
	unsigned_int_3 = unsigned_int_1;
	double_6 = sinh ( double_8 ) ;
	double_1 = pow ( double_7 , double_9 ) ;
	double_3 = ceil ( double_11 ) ;
	int_5 = int_4;
	int_6 = int_4;
	return long_1;
}
long set_rom_file_data( float parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = asin ( double_1 ) ;
	int_1 = int_1;
	return long_1;
}
short emulator_new( unsigned int parameter_1,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long_1 = init_emulator(short_1,float_1,uni_para);

	double_1 = fmod ( double_2 , double_1 ) ;
	double_2 = double_2;
	double_1 = log10 ( double_2 ) ;
	double_2 = tanh ( double_3 ) ;
	return short_1;
	return short_2;
}
double get_file_size( double parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double_1 = tanh ( double_1 ) ;
	int_2 = int_1 + int_2;
	double_1 = exp ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_2;
	return double_3;
}
int file_read( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double_1 = atan ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = get_file_size(double_3,long_1);

	double_1 = atan ( double_1 ) ;
	double_3 = exp ( double_1 ) ;
	double_4 = tanh ( double_5 ) ;
	double_4 = tan ( double_5 ) ;
	short_1 = short_2;
	double_3 = tanh ( double_1 ) ;
	double_5 = tanh ( double_3 ) ;
	float_1 = float_2;
	return int_1;
}
void usage( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float_1 = float_2;
	short_1 = short_1;
	emulator_print_log_systems();

}
void option_parser_delete( double parameter_1)
{
	double double_1 = 1;
	double_1 = atan2 ( double_1 , double_1 ) ;
}
void emulator_set_profiling_enabled( char parameter_1)
{
	short short_1 = 1;
	short_1 = short_1;
}
void emulator_set_opcode_count_enabled( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
void emulator_print_log_systems()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = emulator_get_log_system_name();

	double_1 = tanh ( double_2 ) ;
	double_1 = floor ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_3 = pow ( double_4 , double_4 ) ;
	}
}
void emulator_set_log_level( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = cos ( double_2 ) ;
	double_1 = exp ( double_2 ) ;
}
char emulator_get_log_system_name()
{
	char char_1 = 1;
	{
		return char_1;
		return char_1;
	}
}
unsigned int emulator_set_log_level_from_string( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = atan ( double_1 ) ;
	if(1)
	{
		return unsigned_int_2;
	}
	double_1 = fabs ( double_1 ) ;
	emulator_set_log_level(char_1,unsigned_int_1);

	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			char_2 = emulator_get_log_system_name();

			double_2 = tan ( double_2 ) ;
		}
	}
	if(1)
	{
		return unsigned_int_1;
	}
	double_2 = double_2;
	return unsigned_int_4;
}
void emulator_set_trace( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
}
unsigned int make_option_result_with_value( char parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	if(1)
	{
		return unsigned_int_1;
	}
	else
	{
		return unsigned_int_2;
	}
	make_option_result(char_1,int_1,char_2);

}
void make_option_result( char parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = fabs ( double_2 ) ;
	double_3 = fmod ( double_3 , double_4 ) ;
	double_5 = acos ( double_4 ) ;
	double_6 = sqrt ( double_6 ) ;
}
char option_parser_next()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_2 = 1;
	double double_4 = 1;
	if(1)
	{
		return char_1;
	}
	double_1 = fmod ( double_2 , double_3 ) ;
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_2 = 1;
		double double_4 = 1;
		int_1 = int_2;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_1 = cos ( double_2 ) ;
				if(1)
				{
				}
				make_option_result(char_2,int_1,char_1);

				unsigned_int_1 = make_option_result_with_value(char_2,char_2,char_2);

				double_3 = floor ( double_2 ) ;
				if(1)
				{
					if(1)
					{
						if(1)
						{
							double_2 = sqrt ( double_2 ) ;
							return char_3;
						}
						else
						{
							if(1)
							{
								return char_3;
							}
							double_2 = atan2 ( double_2 , double_2 ) ;
							return char_4;
						}
					}
					else
					{
						return char_1;
					}
				}
			}
		}
		else
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char char_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_3 = 1;
				char char_4 = 1;
				char char_5 = 1;
				int int_2 = 1;
				double double_4 = 1;
				double_1 = double_2 * double_4;
				if(1)
				{
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							if(1)
							{
								return char_1;
							}
							char_4 = char_3 * char_2;
							return char_3;
						}
						else
						{
							return char_3;
						}
					}
					else
					{
						return char_3;
					}
				}
			}
		}
		return char_5;
	}
	else
	{
		return char_1;
	}
}
void option_parser_new( unsigned int parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	float_1 = float_1;
	double_1 = sqrt ( double_2 ) ;
	double_3 = exp ( double_3 ) ;
	short_1 = short_1 * short_1;
}
void parse_options( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	short short_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double_1 = log10 ( double_1 ) ;
	char_1 = char_2;
	double_1 = fmod ( double_2 , double_1 ) ;
	emulator_print_log_systems();

	short_1 = short_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		unsigned_int_1 = emulator_set_log_level_from_string(short_1);

		unsigned_int_1 = unsigned_int_1;
		{
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char char_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			double double_5 = 1;
			short short_2 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double_1 = tan ( double_1 ) ;
			double_2 = ceil ( double_3 ) ;
			double_3 = tanh ( double_3 ) ;
			double_4 = log ( double_1 ) ;
			double_3 = exp ( double_2 ) ;
			char_1 = char_2;
			{
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_6 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				int int_3 = 1;
				int int_4 = 1;
				char char_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				double double_5 = 1;
				short short_2 = 1;
				double double_8 = 1;
				double double_9 = 1;
				double_2 = double_2 + double_4;
				int_1 = int_1 + int_1;
				{
					char_1 = option_parser_next();

					unsigned_int_1 = unsigned_int_1;
					double_1 = floor ( double_2 ) ;
					emulator_set_opcode_count_enabled(char_1);

					double_2 = exp ( double_4 ) ;
					double_3 = sinh ( double_5 ) ;
				}
				emulator_set_trace(double_1);

				double_2 = tanh ( double_6 ) ;
				double_1 = double_2 * double_4;
				int_2 = int_1 + int_1;
				double_1 = atan ( double_6 ) ;
				double_6 = sinh ( double_1 ) ;
				if(1)
				{
					unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
					double_5 = fmod ( double_2 , double_4 ) ;
				}
				if(1)
				{
					double_7 = ldexp ( double_2 , int_2 ) ;
					if(1)
					{
						double double_1 = 1;
						char char_1 = 1;
						char char_2 = 1;
						double double_2 = 1;
						short short_1 = 1;
						unsigned int unsigned_int_1 = 1;
						double double_6 = 1;
						int int_2 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_7 = 1;
						int int_3 = 1;
						int int_4 = 1;
						char char_3 = 1;
						long long_1 = 1;
						long long_2 = 1;
						long long_3 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						double double_3 = 1;
						double double_4 = 1;
						int int_1 = 1;
						double double_5 = 1;
						short short_2 = 1;
						double double_8 = 1;
						double double_9 = 1;
						usage(int_2,char_2);

						short_1 = short_2 * short_1;
					}
				}
				if(1)
				{
					option_parser_new(unsigned_int_2,int_3,int_4,char_3);

					int_4 = int_1;
					emulator_set_profiling_enabled(char_1);

					double_7 = asin ( double_4 ) ;
				}
				char controller_5[5];
				fgets(controller_5 ,5 ,stdin);
				if( strcmp( controller_5, " +E5") == 0)
				{
					double_1 = asin ( double_1 ) ;
					if(1)
					{
						int_4 = int_3;
					}
				}
				else
				{
					double_6 = pow ( double_3 , double_4 ) ;
				}
			}
			int_3 = int_1;
			double_1 = double_7 + double_7;
		}
	}
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		short short_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		option_parser_delete(double_6);

		double_6 = log ( double_7 ) ;
		double_8 = asin ( double_9 ) ;
	}
	long_3 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_4;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
}
int main(int argc, char **argv)
{
	int uni_para =278;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_12 = 1;
	char char_5 = 1;
	int int_2 = 1;
	float float_4 = 1;
	double double_10 = 1;
	double double_11 = 1;
	char char_4 = 1;
	short_1 = emulator_new(unsigned_int_1,uni_para);

	double_1 = sinh ( double_2 ) ;
	char_1 = char_1;
	double_2 = tan ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	long_1 = long_1 + long_1;
	short_1 = short_2;
	int_1 = int_1;
	double_1 = cosh ( double_3 ) ;
	float_3 = float_1 * float_2;
	short_1 = short_1 * short_1;
	double_4 = pow ( double_2 , double_5 ) ;
	double_5 = asin ( double_4 ) ;
	double_4 = sinh ( double_4 ) ;
	double_5 = tan ( double_5 ) ;
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_12 = 1;
		char char_5 = 1;
		int int_2 = 1;
		float float_4 = 1;
		double double_10 = 1;
		double double_11 = 1;
		char char_4 = 1;
		double_1 = sqrt ( double_3 ) ;
		int_1 = int_2;
		double_5 = exp ( double_3 ) ;
		float_2 = float_4;
		double_4 = atan2 ( double_2 , double_3 ) ;
	}
	double_1 = acos ( double_3 ) ;
	double_6 = cos ( double_3 ) ;
	unsigned_int_2 = unsigned_int_3;
	double_7 = cosh ( double_4 ) ;
	char_1 = char_2;
	char_3 = char_2;
	double_5 = floor ( double_8 ) ;
	double_9 = sinh ( double_7 ) ;
	unsigned_int_4 = unsigned_int_4;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_6 = atan2 ( double_3 , double_1 ) ;
		if(1)
		{
			if(1)
			{
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_2 = 1;
				long long_1 = 1;
				short short_2 = 1;
				int int_1 = 1;
				double double_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_7 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_8 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_12 = 1;
				char char_5 = 1;
				int int_2 = 1;
				float float_4 = 1;
				double double_10 = 1;
				double double_11 = 1;
				char char_4 = 1;
				double_9 = double_10;
				double_10 = log10 ( double_5 ) ;
				float_2 = float_1;
				float_2 = float_3;
				char_1 = char_2 * char_3;
			}
			if(1)
			{
			}
		}
		if(1)
		{
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_7 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_12 = 1;
			char char_5 = 1;
			int int_2 = 1;
			float float_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			char char_4 = 1;
			double_4 = exp ( double_2 ) ;
			double_1 = log ( double_11 ) ;
		}
		if(1)
		{
			double_9 = acos ( double_3 ) ;
		}
	}
	double_1 = cosh ( double_9 ) ;
	long_1 = long_2 + long_2;
	unsigned_int_5 = unsigned_int_4;
	double_6 = atan2 ( double_6 , double_12 ) ;
	if(1)
	{
		double_9 = tan ( double_7 ) ;
	}
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_12 = 1;
		char char_5 = 1;
		int int_2 = 1;
		float float_4 = 1;
		double double_10 = 1;
		double double_11 = 1;
		char char_4 = 1;
		char_3 = char_4 * char_5;
	}
	if(1)
	{
		double_3 = fabs ( double_2 ) ;
	}
	double_5 = double_2 * double_6;
	if(1)
	{
		double_6 = fmod ( double_1 , double_7 ) ;
	}
	if(1)
	{
		char_1 = char_5;
	}
	return int_1;
}
