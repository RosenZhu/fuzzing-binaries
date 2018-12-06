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

void dump_table( short parameter_1,long parameter_2);
char dump_x( unsigned int parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5);
short dump_llx( char parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4,int parameter_5);
long dump_indent( short parameter_1,double parameter_2);
double dump_header( unsigned int parameter_1,unsigned int parameter_2);
long dump_bmfs( char parameter_1,unsigned int parameter_2);
short cmd_dump( unsigned int parameter_1,int parameter_2,short parameter_3);
void bmfs_get_status( int parameter_1,char parameter_2);
void bmfs_status_init();
unsigned int cmd_status( double parameter_1,int parameter_2,double parameter_3);
int bmfs_delete_dir( unsigned int parameter_1,char parameter_2);
int bmfs_delete_dir_recursively( unsigned int parameter_1,long parameter_2);
double cmd_rmdir( float parameter_1,int parameter_2,int parameter_3);
char delete_table_entry( float parameter_1,short parameter_2);
double delete_entry( float parameter_1,long parameter_2);
int bmfs_delete_file( short parameter_1,long parameter_2);
int cmd_rm( long parameter_1,int parameter_2,float parameter_3);
short cmd_touch( int parameter_1,int parameter_2,long parameter_3);
void bmfs_entry_set_deleted( int parameter_1);
void bmfs_entry_copy( double parameter_1,float parameter_2);
int bmfs_rename( char parameter_1,float parameter_2,short parameter_3);
int cmd_mv( int parameter_1,int parameter_2,unsigned int parameter_3);
int bmfs_create_dir( unsigned int parameter_1,char parameter_2);
char cmd_mkdir( int parameter_1,int parameter_2,char parameter_3);
double time_print( unsigned int parameter_1);
float next_without_skipping( float parameter_1);
float bmfs_dir_next( double parameter_1);
long find_dir( unsigned int parameter_1,long parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5,int uni_para);
int bmfs_entry_is_directory( int parameter_1);
int bmfs_dir_import( char parameter_1,int uni_para);
void bmfs_dir_set_disk( int parameter_1,short parameter_2);
double open_dir( double parameter_1,char parameter_2,double parameter_3,int uni_para);
int bmfs_open_dir( long parameter_1,char parameter_2,char parameter_3,int uni_para);
void bmfs_dir_init( int parameter_1);
double cmd_ls( unsigned int parameter_1,int parameter_2,float parameter_3,int uni_para);
void bmfs_table_entry_set_deleted();
int bmfs_table_free( unsigned int parameter_1,float parameter_2);
void bmfs_host_free( short parameter_1,double parameter_2);
unsigned int table_free( short parameter_1);
char bmfs_host_malloc( char parameter_1,unsigned int parameter_2,short parameter_3);
char bmfs_host_init( long parameter_1);
void table_host_init( char parameter_1);
unsigned int table_malloc( double parameter_1,unsigned int parameter_2);
unsigned int copy_over_data( int parameter_1,double parameter_2,unsigned int parameter_3,float parameter_4);
int bmfs_table_realloc( double parameter_1,double parameter_2,double parameter_3);
unsigned int file_resize( short parameter_1,char parameter_2);
int bmfs_file_write( unsigned int parameter_1,char parameter_2,float parameter_3,double parameter_4);
void bmfs_file_set_mode( float parameter_1,char parameter_2);
double bmfs_table_find( double parameter_1,int parameter_2);
short can_fit_entry( int parameter_1,float parameter_2);
short add_entry( long parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int entry_exists( int parameter_1,float parameter_2,unsigned int parameter_3,char parameter_4);
long create_entry( char parameter_1,int parameter_2,int parameter_3);
double new_get_block_size( short parameter_1);
int bmfs_create_file( double parameter_1,int parameter_2);
void cmd_cp( int parameter_1,int parameter_2,short parameter_3);
int bmfs_file_seek( short parameter_1,int parameter_2,int parameter_3);
int bmfs_file_read( int parameter_1,char parameter_3,short parameter_4);
int bmfs_file_eof( short parameter_1);
int bmfs_get_current_time( short parameter_1);
int bmfs_entry_save( int parameter_1,char parameter_2);
long file_can_write( unsigned int parameter_1);
void bmfs_file_close( char parameter_1);
int bmfs_file_import( long parameter_1);
char find_file( float parameter_1,double parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5);
int bmfs_entry_is_deleted( char parameter_1);
float is_entry( long parameter_1,char parameter_2,int parameter_3);
double find_entry( double parameter_1,int parameter_2,double parameter_3,char parameter_4,unsigned int parameter_5);
float is_separator( char parameter_1);
int bmfs_path_split_root( float parameter_1,float parameter_2);
void bmfs_path_set( short parameter_1,int parameter_2,unsigned int parameter_3);
void bmfs_path_init( char parameter_1);
int bmfs_entry_read( int parameter_1,long parameter_2,int uni_para);
void bmfs_file_set_disk( float parameter_1,float parameter_2);
float open_file( short parameter_1,double parameter_2,double parameter_3);
int bmfs_open_file( float parameter_1,float parameter_2,double parameter_3);
void bmfs_file_init( int parameter_1);
void cmd_cat( unsigned int parameter_1,int parameter_2,int parameter_3);
void bmfs_table_set_count( long parameter_1,char parameter_2);
int bmfs_header_check( char parameter_1);
int bmfs_import( long parameter_1);
int bmfs_export( long parameter_1);
void bmfs_filedisk_done( unsigned int parameter_1);
int bmfs_header_write( unsigned int parameter_1,short parameter_2);
char next_entry( double parameter_1);
double bmfs_table_next( int parameter_1);
void bmfs_table_view_deleted( int parameter_1);
void bmfs_table_begin( char parameter_1);
int bmfs_table_save_all( long parameter_1);
int bmfs_disk_tell( double parameter_1,char parameter_2,int uni_para);
void bmfs_memcpy(double parameter_2,float parameter_3);
int bmfs_entry_write( unsigned int parameter_1,int parameter_2);
int bmfs_table_entry_write( double parameter_1,unsigned int parameter_2);
int bmfs_table_save( long parameter_1);
void bmfs_table_entry_copy( float parameter_1,float parameter_2);
int bmfs_table_push( short parameter_1,float parameter_2);
long bmfs_table_entry_is_deleted();
void bmfs_encode_uint32( unsigned int parameter_1);
void bmfs_encode_uint64( unsigned int parameter_1);
float bmfs_table_entry_checksum( int parameter_1);
int bmfs_table_entry_read( char parameter_1,float parameter_2);
float prev_entry( char parameter_1);
int bmfs_table_previous();
void bmfs_table_hide_deleted();
void bmfs_table_end( int parameter_1);
int get_block_size( unsigned int parameter_1);
float to_block_size( float parameter_1,double parameter_2);
int bmfs_table_alloc( long parameter_1,long parameter_2,char parameter_3);
int bmfs_allocate( long parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void bmfs_entry_set_type( char parameter_1,short parameter_2);
void bmfs_entry_init( double parameter_1);
void bmfs_table_set_max_offset( unsigned int parameter_1,int parameter_2);
void bmfs_table_set_min_offset( short parameter_1,short parameter_2);
void bmfs_table_set_offset( long parameter_1,short parameter_2);
int bmfs_format( char parameter_1,long parameter_2);
void bmfs_table_set_block_size( unsigned int parameter_1,float parameter_2);
void bmfs_set_block_size( char parameter_1,short parameter_2);
int bmfs_disk_write( short parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4);
short bmfs_crc32( char parameter_1,char parameter_2,double parameter_3);
unsigned int bmfs_decode_uint32( short parameter_1);
char bmfs_decode_uint64( int parameter_1);
int bmfs_disk_read( double parameter_1,long parameter_3,double parameter_4);
int bmfs_header_read( long parameter_1,double parameter_2);
int bmfs_disk_seek( long parameter_1,double parameter_2,int parameter_3);
int bmfs_check_signature( unsigned int parameter_1);
long cmd_format( long parameter_1,int parameter_2,long parameter_3);
void bmfs_table_set_disk( double parameter_1,short parameter_2);
void bmfs_set_disk( char parameter_1,float parameter_2);
void bmfs_table_set_host( long parameter_1,int parameter_2);
void bmfs_host_done( float parameter_1,float parameter_2);
void bmfs_set_host( char parameter_1,long parameter_2);
void bmfs_table_entry_init( int parameter_1);
void bmfs_table_init( short parameter_1);
void bmfs_header_init();
void bmfs_init();
void bmfs_filedisk_set_offset( short parameter_1,double parameter_2);
float bmfs_strerror( int parameter_1);
int bmfs_filedisk_open( float parameter_1,char parameter_2,short parameter_3);
short bmfs_filedisk_write(int parameter_2,long parameter_3,float parameter_4);
long bmfs_filedisk_read(char parameter_3,int parameter_4);
char bmfs_filedisk_tell(char parameter_2);
char to_bmfs_errno( int parameter_1);
long bmfs_filedisk_seek(long parameter_2,int parameter_3);
void bmfs_disk_init( unsigned int parameter_1);
void bmfs_filedisk_init( double parameter_1);
char file_exists( unsigned int parameter_1);
double print_version();
unsigned int print_usage( unsigned int parameter_1);
long print_help( char parameter_1,int parameter_2,short parameter_3);
int command_parse( unsigned int parameter_1);
int bmfs_size_bytes( char parameter_1,float parameter_2);
void to_type( char parameter_1,float parameter_2);
int bmfs_size_parse( char parameter_1,int parameter_2);
char is_opt( unsigned int parameter_1,char parameter_2,short parameter_3);
void dump_table( short parameter_1,long parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_3 = 0;
	char char_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_4 = 0;
	short short_1 = 0;
	long long_1 = 0;
	short short_2 = 0;
	short short_3 = 0;
	float float_2 = 0;
	float float_3 = 0;
	unsigned int unsigned_int_4 = 0;
	char char_4 = 0;
	long long_2 = 0;
	char char_5 = 0;
	float float_1 = 0;
	double_1 = ceil ( double_2 ) ;
	char_2 = char_1 - char_1;
	unsigned_int_3 = unsigned_int_1 / unsigned_int_2;
	double_2 = double_3 * double_3;
	for(int looper_1=0; looper_1<5;looper_1++)
	{
		double double_1 = 0;
		double double_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_3 = 0;
		char char_3 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_4 = 0;
		short short_1 = 0;
		long long_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		float float_2 = 0;
		float float_3 = 0;
		unsigned int unsigned_int_4 = 0;
		char char_4 = 0;
		long long_2 = 0;
		char char_5 = 0;
		float float_1 = 0;
		bmfs_table_begin(char_3);

		float_1 = float_1;
		char controller_1[5];
		scanf("%5s", controller_1);
		if( strcmp( controller_1, "T}Xy4") < 0)
		{
		}
		bmfs_table_view_deleted(int_1);

		double_2 = ldexp ( double_1 , int_2 ) ;
		double_3 = exp ( double_3 ) ;
		unsigned_int_3 = unsigned_int_3;
		int_2 = int_1 / int_3;
		double_4 = tan ( double_4 ) ;
		double_2 = ldexp ( double_4 , int_1 ) ;
		short_1 = short_1;
		short_1 = dump_llx(char_2,unsigned_int_2,long_1,unsigned_int_1,int_2);

		short_2 = short_2 - short_3;
	}
	long_1 = dump_indent(short_2,double_1);

	float_3 = float_2 * float_2;
	unsigned_int_2 = unsigned_int_1 / unsigned_int_4;
	char_2 = dump_x(unsigned_int_1,short_3,char_4,unsigned_int_4,long_2);

	unsigned_int_2 = unsigned_int_3;
	double_2 = ldexp ( double_2 , int_3 ) ;
	double_4 = cos ( double_4 ) ;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	char_3 = char_4 / char_5;
	double_1 = bmfs_table_next(int_2);

}
char dump_x( unsigned int parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5)
{
	double double_1 = 0;
	char char_1 = 0;
	long long_1 = 0;
	short short_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double_1 = log10 ( double_1 ) ;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "l2") > 0)
	{
		double double_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		short short_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double_2 = floor ( double_2 ) ;
	}
	else
	{
		double double_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		short short_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double_1 = fmod ( double_3 , double_4 ) ;
	}
	return char_1;
	long_1 = dump_indent(short_1,double_1);

}
short dump_llx( char parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4,int parameter_5)
{
	long long_1 = 0;
	short short_1 = 0;
	double double_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_2 = 0;
	long_1 = dump_indent(short_1,double_1);

	long_2 = long_2 + long_3;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, ")") > 0)
	{
		double_1 = sinh ( double_2 ) ;
	}
	else
	{
		double_1 = tan ( double_2 ) ;
	}
	return short_1;
}
long dump_indent( short parameter_1,double parameter_2)
{
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	for(int looper_1=0; looper_1<8;looper_1++)
	{
		long long_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double_1 = fabs ( double_2 ) ;
	}
	return long_1;
}
double dump_header( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	long long_4 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_2 = 0;
	short short_2 = 0;
	short short_3 = 0;
	double double_5 = 0;
	double_1 = asin ( double_1 ) ;
	double_1 = log ( double_2 ) ;
	double_2 = atan ( double_3 ) ;
	int_1 = int_1;
	double_3 = double_2 + double_1;
	char_1 = dump_x(unsigned_int_1,short_1,char_1,unsigned_int_1,long_1);

	long_4 = long_2 - long_3;
	double_4 = pow ( double_4 , double_1 ) ;
	short_1 = dump_llx(char_1,unsigned_int_1,long_3,unsigned_int_2,int_2);

	unsigned_int_2 = unsigned_int_1;
	long_1 = long_1 * long_4;
	short_3 = short_2 * short_1;
	return double_5;
	long_1 = dump_indent(short_2,double_5);

}
long dump_bmfs( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	short short_1 = 0;
	long long_1 = 0;
	double double_4 = 0;
	double_1 = dump_header(unsigned_int_1,unsigned_int_1);

	double_1 = exp ( double_1 ) ;
	double_2 = sinh ( double_3 ) ;
	dump_table(short_1,long_1);

	double_4 = asin ( double_4 ) ;
	return long_1;
}
short cmd_dump( unsigned int parameter_1,int parameter_2,short parameter_3)
{
	float float_1 = 0;
	long long_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_3 = 0;
	short short_2 = 0;
	short short_3 = 0;
	double double_4 = 0;
	double double_3 = 0;
	float_1 = float_1;
	long_1 = dump_bmfs(char_1,unsigned_int_1);

	double_1 = ceil ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			double_1 = tan ( double_1 ) ;
			if(1)
			{
				char_2 = is_opt(unsigned_int_2,char_2,short_1);

				unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
				return short_2;
			}
		}
		unsigned_int_3 = unsigned_int_1 / unsigned_int_3;
	}
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		float float_1 = 0;
		long long_1 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_2 = 0;
		short short_3 = 0;
		double double_4 = 0;
		double double_3 = 0;
		double_3 = fabs ( double_3 ) ;
		return short_3;
	}
	double_2 = asin ( double_4 ) ;
	unsigned_int_1 = unsigned_int_2;
	return short_1;
}
void bmfs_get_status( int parameter_1,char parameter_2)
{
	float float_1 = 0;
	float float_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	float_2 = float_1 - float_2;
	double_1 = atan2 ( double_2 , double_1 ) ;
	bmfs_table_begin(char_1);

	double_2 = atan ( double_3 ) ;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<5;looper_1++)
	{
		float float_1 = 0;
		float float_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		char char_1 = 0;
		double double_3 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double_2 = double_2;
		char controller_1[1];
		scanf("%1s", controller_1);
		if( strcmp( controller_1, "f") < 0)
		{
		}
		bmfs_table_hide_deleted();

		double_1 = bmfs_table_next(int_3);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
}
void bmfs_status_init()
{
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	short short_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_2 = 0;
	unsigned_int_1 = unsigned_int_1;
	double_1 = ceil ( double_1 ) ;
	short_1 = short_1;
	int_1 = int_1 - int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = fabs ( double_2 ) ;
}
unsigned int cmd_status( double parameter_1,int parameter_2,double parameter_3)
{
	int int_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	short short_1 = 0;
	short short_2 = 0;
	bmfs_get_status(int_1,char_1);

	unsigned_int_1 = unsigned_int_1;
	float_1 = float_2;
	double_1 = cos ( double_1 ) ;
	double_1 = fmod ( double_1 , double_1 ) ;
	long_1 = long_2;
	unsigned_int_4 = unsigned_int_2 / unsigned_int_3;
	long_1 = long_1;
	double_1 = double_1 - double_1;
	bmfs_status_init();

	short_1 = short_2;
	double_1 = log10 ( double_1 ) ;
	return unsigned_int_4;
}
int bmfs_delete_dir( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	long long_1 = 0;
	char char_1 = 0;
	float float_1 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_3 = 0;
	int int_4 = 0;
	double double_3 = 0;
	int int_5 = 0;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	bmfs_dir_init(int_1);

	double_1 = fmod ( double_2 , double_1 ) ;
	int_2 = bmfs_open_dir(long_1,char_1,char_1,230);

	float_1 = bmfs_dir_next(double_1);

	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		return int_3;
	}
	char controller_2[3];
	scanf("%3s", controller_2);
	if( strcmp( controller_2, "R`_") < 0)
	{
		return int_4;
	}
	double_1 = delete_entry(float_1,long_1);

	double_3 = acos ( double_2 ) ;
	char controller_3[5];
	scanf("%5s", controller_3);
	if( strcmp( controller_3, "A9/&$") > 0)
	{
		return int_5;
	}
	return int_4;
}
int bmfs_delete_dir_recursively( unsigned int parameter_1,long parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	long long_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	short short_1 = 0;
	short short_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_4 = 0;
	int int_5 = 0;
	double double_4 = 0;
	bmfs_dir_init(int_1);

	int_2 = bmfs_open_dir(long_1,char_1,char_2,694);

	double_3 = double_1 - double_2;
	double_1 = atan ( double_3 ) ;
	short_2 = short_1 + short_1;
	if(1)
	{
		return int_2;
	}
	for(int looper_1=0; looper_1<3;looper_1++)
	{
		int int_1 = 0;
		int int_2 = 0;
		long long_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		short short_1 = 0;
		short short_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		int int_5 = 0;
		double double_4 = 0;
		double_1 = delete_entry(float_1,long_1);

		double_2 = tan ( double_2 ) ;
		if(1)
		{
		}
		float_2 = bmfs_dir_next(double_1);

		double_4 = double_4 * double_1;
		char controller_3[2];
		scanf("%2s", controller_3);
		if( strcmp( controller_3, "F3") < 0)
		{
			return int_3;
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		return int_4;
	}
	return int_5;
}
double cmd_rmdir( float parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_2 = 0;
	short short_1 = 0;
	double double_1 = 0;
	float float_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	double double_5 = 0;
	int int_2 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_5 = 0;
	char_1 = is_opt(unsigned_int_1,char_2,short_1);

	double_1 = cosh ( double_1 ) ;
	float_1 = bmfs_strerror(int_1);

	float_1 = float_1 * float_1;
	unsigned_int_2 = unsigned_int_2;
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		looper_1 += 1;
		if(1)
		{
		}
		char controller_2[3];
		scanf("%3s", controller_2);
		if( strcmp( controller_2, "u;3") > 0)
		{
			int_1 = bmfs_delete_dir(unsigned_int_1,char_1);

			double_1 = cosh ( double_1 ) ;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4;
		}
		else
		{
			double_2 = sinh ( double_1 ) ;
			return double_1;
		}
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	int looper_2 = 0;
	while(looper_2 < 7)
	{
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_2 = 0;
		short short_1 = 0;
		double double_1 = 0;
		float float_1 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_2 = 0;
		double double_3 = 0;
		long long_1 = 0;
		double double_5 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_5 = 0;
		looper_2 += 1;
		if(1)
		{
			char char_1 = 0;
			unsigned int unsigned_int_1 = 0;
			char char_2 = 0;
			short short_1 = 0;
			double double_1 = 0;
			float float_1 = 0;
			int int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			unsigned int unsigned_int_3 = 0;
			unsigned int unsigned_int_4 = 0;
			double double_2 = 0;
			double double_3 = 0;
			long long_1 = 0;
			double double_5 = 0;
			int int_2 = 0;
			double double_4 = 0;
			unsigned int unsigned_int_5 = 0;
			unsigned_int_3 = unsigned_int_5;
			return double_1;
		}
		int_2 = int_2 + int_2;
		char controller_5[4];
		scanf("%4s", controller_5);
		if( strcmp( controller_5, "VHrW") < 0)
		{
			unsigned_int_2 = unsigned_int_2 / unsigned_int_4;
		}
		else
		{
			double_1 = double_3 - double_1;
		}
		if(1)
		{
			int_1 = bmfs_delete_dir_recursively(unsigned_int_1,long_1);

			double_1 = ldexp ( double_3 , int_2 ) ;
			double_2 = cos ( double_3 ) ;
			return double_3;
		}
		double_2 = cos ( double_4 ) ;
	}
	return double_5;
}
char delete_table_entry( float parameter_1,short parameter_2)
{
	char char_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	float float_1 = 0;
	return char_1;
	int_1 = bmfs_table_free(unsigned_int_1,float_1);

}
double delete_entry( float parameter_1,long parameter_2)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	char char_1 = 0;
	float float_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_2 = 0;
	short short_1 = 0;
	bmfs_entry_set_deleted(int_1);

	unsigned_int_2 = unsigned_int_1 - unsigned_int_1;
	if(1)
	{
		return double_1;
	}
	int_2 = bmfs_entry_save(int_3,char_1);

	float_1 = float_1;
	double_2 = exp ( double_3 ) ;
	char controller_2[1];
	scanf("%1s", controller_2);
	if( strcmp( controller_2, "N") > 0)
	{
		return double_1;
	}
	return double_3;
	char_2 = delete_table_entry(float_1,short_1);

}
int bmfs_delete_file( short parameter_1,long parameter_2)
{
	short short_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_1 = 0;
	float float_1 = 0;
	long long_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_2 = 0;
	float float_2 = 0;
	short_1 = short_1 / short_1;
	int_1 = int_1 / int_1;
	unsigned_int_1 = unsigned_int_1 - unsigned_int_2;
	int_1 = int_1 - int_1;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "([sM") < 0)
	{
		return int_1;
	}
	double_1 = delete_entry(float_1,long_1);

	double_2 = double_3;
	char controller_2[3];
	scanf("%3s", controller_2);
	if( strcmp( controller_2, ";8R") > 0)
	{
		return int_1;
	}
	return int_1;
	bmfs_file_init(int_2);

	int_1 = bmfs_open_file(float_2,float_2,double_3);

}
int cmd_rm( long parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	int int_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	double double_3 = 0;
	int int_2 = 0;
	long long_4 = 0;
	int int_3 = 0;
	long long_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double_1 = double_1 * double_2;
	float_1 = bmfs_strerror(int_1);

	long_1 = long_2;
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
			char_1 = is_opt(unsigned_int_1,char_1,short_1);

			double_3 = cos ( double_3 ) ;
		}
		else
		{
			double double_1 = 0;
			double double_2 = 0;
			float float_1 = 0;
			int int_1 = 0;
			long long_1 = 0;
			long long_2 = 0;
			char char_1 = 0;
			unsigned int unsigned_int_1 = 0;
			short short_1 = 0;
			double double_3 = 0;
			int int_2 = 0;
			long long_4 = 0;
			int int_3 = 0;
			long long_3 = 0;
			double double_4 = 0;
			double double_5 = 0;
			double double_6 = 0;
			long_2 = long_2 - long_3;
			return int_2;
		}
		double_1 = ceil ( double_2 ) ;
	}
	int looper_2 = 0;
	while(looper_2 < 7)
	{
		double double_1 = 0;
		double double_2 = 0;
		float float_1 = 0;
		int int_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		short short_1 = 0;
		double double_3 = 0;
		int int_2 = 0;
		long long_4 = 0;
		int int_3 = 0;
		long long_3 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		looper_2 += 1;
		if(1)
		{
			double_1 = ceil ( double_1 ) ;
			return int_1;
		}
		double_2 = ceil ( double_4 ) ;
		if(1)
		{
			double_1 = asin ( double_2 ) ;
			int_2 = bmfs_delete_file(short_1,long_4);

			double_4 = sqrt ( double_5 ) ;
			return int_3;
		}
		double_6 = atan2 ( double_3 , double_5 ) ;
	}
	return int_3;
}
short cmd_touch( int parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	short short_3 = 0;
	float float_1 = 0;
	int int_1 = 0;
	short short_4 = 0;
	double double_2 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	short short_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_1 = 0;
	float float_2 = 0;
	unsigned_int_1 = unsigned_int_2;
	int looper_1 = 0;
	while(looper_1 < 8)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		short short_3 = 0;
		float float_1 = 0;
		int int_1 = 0;
		short short_4 = 0;
		double double_2 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_2 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_1 = 0;
		float float_2 = 0;
		looper_1 += 1;
		if(1)
		{
		}
		else
		{
			unsigned_int_3 = unsigned_int_1 / unsigned_int_2;
			return short_1;
		}
		unsigned_int_3 = unsigned_int_3;
	}
	int looper_2 = 0;
	while(looper_2 < 8)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		short short_1 = 0;
		short short_3 = 0;
		float float_1 = 0;
		int int_1 = 0;
		short short_4 = 0;
		double double_2 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_2 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_1 = 0;
		float float_2 = 0;
		looper_2 += 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			short short_1 = 0;
			short short_3 = 0;
			float float_1 = 0;
			int int_1 = 0;
			short short_4 = 0;
			double double_2 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_3 = 0;
			short short_2 = 0;
			long long_1 = 0;
			long long_2 = 0;
			double double_1 = 0;
			float float_2 = 0;
			double_1 = tan ( double_1 ) ;
			return short_1;
		}
		short_3 = short_2 + short_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			short short_1 = 0;
			short short_3 = 0;
			float float_1 = 0;
			int int_1 = 0;
			short short_4 = 0;
			double double_2 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_3 = 0;
			short short_2 = 0;
			long long_1 = 0;
			long long_2 = 0;
			double double_1 = 0;
			float float_2 = 0;
			float_2 = float_1 + float_1;
			int_1 = int_1 - int_1;
			return short_4;
		}
		int_1 = bmfs_create_file(double_2,int_1);

		long_1 = long_2;
	}
	return short_3;
	float_1 = bmfs_strerror(int_2);

}
void bmfs_entry_set_deleted( int parameter_1)
{
	double double_1 = 0;
	double_1 = tan ( double_1 ) ;
}
void bmfs_entry_copy( double parameter_1,float parameter_2)
{
	double double_1 = 0;
	double_1 = tanh ( double_1 ) ;
}
int bmfs_rename( char parameter_1,float parameter_2,short parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	float float_4 = 0;
	double double_3 = 0;
	long long_2 = 0;
	char char_2 = 0;
	char char_3 = 0;
	int int_3 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	float float_3 = 0;
	double_1 = tanh ( double_1 ) ;
	double_2 = asin ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	long_1 = create_entry(char_1,int_1,int_2);

	double_2 = atan ( double_2 ) ;
	bmfs_file_init(int_2);

	float_1 = float_1 + float_2;
	double_1 = ceil ( double_1 ) ;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		long long_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		float float_4 = 0;
		double double_3 = 0;
		long long_2 = 0;
		char char_2 = 0;
		char char_3 = 0;
		int int_3 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		float float_3 = 0;
		float_3 = float_3;
		bmfs_entry_copy(double_1,float_4);

		double_1 = double_3 + double_1;
		int_1 = bmfs_open_dir(long_2,char_2,char_3,265);

		int_2 = int_3 + int_1;
		if(1)
		{
			return int_2;
		}
		double_2 = cosh ( double_3 ) ;
	}
	if(1)
	{
		return int_3;
	}
	else
	{
		bmfs_entry_init(double_3);

		double_3 = fabs ( double_2 ) ;
	}
	double_2 = double_3;
	long_3 = long_1;
	double_1 = sqrt ( double_2 ) ;
	bmfs_entry_set_deleted(int_3);

	float_2 = float_1;
	double_2 = exp ( double_3 ) ;
	if(1)
	{
		return int_3;
	}
	int_2 = bmfs_entry_save(int_1,char_1);

	unsigned_int_3 = unsigned_int_2 - unsigned_int_3;
	char controller_5[4];
	scanf("%4s", controller_5);
	if( strcmp( controller_5, "KfT*") < 0)
	{
		return int_1;
	}
	return int_2;
	int_2 = bmfs_open_file(float_1,float_4,double_2);

	bmfs_dir_init(int_2);

}
int cmd_mv( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	double double_3 = 0;
	float float_1 = 0;
	int int_4 = 0;
	double double_5 = 0;
	int int_5 = 0;
	char char_1 = 0;
	float float_2 = 0;
	short short_1 = 0;
	int int_6 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_3 = 0;
	char char_2 = 0;
	int_1 = int_1;
	int looper_1 = 0;
	while(looper_1 < 3)
	{
		looper_1 += 1;
		char controller_1[2];
		scanf("%2s", controller_1);
		if( strcmp( controller_1, "b0") < 0)
		{
		}
		else
		{
			double_1 = fmod ( double_1 , double_2 ) ;
			return int_2;
		}
	}
	double_2 = double_1 / double_2;
	double_2 = fmod ( double_2 , double_3 ) ;
	int looper_2 = 0;
	while(looper_2 < 3)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_2 = 0;
		double double_3 = 0;
		float float_1 = 0;
		int int_4 = 0;
		double double_5 = 0;
		int int_5 = 0;
		char char_1 = 0;
		float float_2 = 0;
		short short_1 = 0;
		int int_6 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		char char_2 = 0;
		looper_2 += 1;
		if(1)
		{
			int int_1 = 0;
			double double_1 = 0;
			double double_2 = 0;
			int int_2 = 0;
			double double_3 = 0;
			float float_1 = 0;
			int int_4 = 0;
			double double_5 = 0;
			int int_5 = 0;
			char char_1 = 0;
			float float_2 = 0;
			short short_1 = 0;
			int int_6 = 0;
			double double_4 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			char char_2 = 0;
			float_1 = bmfs_strerror(int_2);

			unsigned_int_1 = unsigned_int_1 / unsigned_int_2;
			return int_1;
		}
		if(1)
		{
			int int_1 = 0;
			double double_1 = 0;
			double double_2 = 0;
			int int_2 = 0;
			double double_3 = 0;
			float float_1 = 0;
			int int_4 = 0;
			double double_5 = 0;
			int int_5 = 0;
			char char_1 = 0;
			float float_2 = 0;
			short short_1 = 0;
			int int_6 = 0;
			double double_4 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			char char_2 = 0;
			int_2 = int_3;
		}
		if(1)
		{
			double_2 = double_3;
		}
		else
		{
			double_2 = tanh ( double_4 ) ;
			return int_4;
		}
		double_4 = sqrt ( double_1 ) ;
	}
	double_2 = fmod ( double_3 , double_5 ) ;
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_2 = 0;
		double double_3 = 0;
		float float_1 = 0;
		int int_4 = 0;
		double double_5 = 0;
		int int_5 = 0;
		char char_1 = 0;
		float float_2 = 0;
		short short_1 = 0;
		int int_6 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		char char_2 = 0;
		double_5 = fabs ( double_5 ) ;
		int_5 = bmfs_rename(char_1,float_2,short_1);

		char_2 = char_2;
		return int_6;
	}
	return int_1;
}
int bmfs_create_dir( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_1 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	long long_1 = 0;
	char char_1 = 0;
	int int_4 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_5 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_3 = 0;
	char char_2 = 0;
	short short_3 = 0;
	double double_4 = 0;
	char char_3 = 0;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "Q") < 0)
	{
		return int_1;
	}
	int_2 = int_3;
	double_1 = new_get_block_size(short_1);

	unsigned_int_2 = unsigned_int_1 / unsigned_int_2;
	if(1)
	{
		return int_3;
	}
	long_1 = create_entry(char_1,int_4,int_3);

	double_1 = pow ( double_2 , double_3 ) ;
	bmfs_entry_init(double_3);

	int_5 = bmfs_get_current_time(short_2);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	long_1 = long_1 - long_1;
	bmfs_entry_set_type(char_2,short_3);

	double_1 = acos ( double_1 ) ;
	double_4 = acos ( double_3 ) ;
	double_4 = fabs ( double_4 ) ;
	int_5 = bmfs_allocate(long_1,unsigned_int_2,unsigned_int_1);

	char_3 = char_3;
	if(1)
	{
		return int_1;
	}
	return int_1;
}
char cmd_mkdir( int parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	char char_1 = 0;
	float float_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_2 = 0;
	char char_4 = 0;
	char char_5 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	long long_2 = 0;
	char char_3 = 0;
	double_1 = asin ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 0;
		double double_2 = 0;
		int int_1 = 0;
		char char_1 = 0;
		float float_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_2 = 0;
		char char_4 = 0;
		char char_5 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_3 = 0;
		long long_1 = 0;
		long long_2 = 0;
		char char_3 = 0;
		looper_1 += 1;
		char controller_1[2];
		scanf("%2s", controller_1);
		if( strcmp( controller_1, "9p") < 0)
		{
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			char char_1 = 0;
			float float_1 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_1 = 0;
			char char_2 = 0;
			char char_4 = 0;
			char char_5 = 0;
			double double_4 = 0;
			unsigned int unsigned_int_2 = 0;
			double double_3 = 0;
			long long_1 = 0;
			long long_2 = 0;
			char char_3 = 0;
			double_2 = ldexp ( double_3 , int_1 ) ;
			return char_1;
		}
		double_4 = sinh ( double_1 ) ;
		float_1 = bmfs_strerror(int_2);

		char_1 = char_1 + char_1;
		char controller_2[1];
		scanf("%1s", controller_2);
		if( strcmp( controller_2, "^") < 0)
		{
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			char char_1 = 0;
			float float_1 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_1 = 0;
			char char_2 = 0;
			char char_4 = 0;
			char char_5 = 0;
			double double_4 = 0;
			unsigned int unsigned_int_2 = 0;
			double double_3 = 0;
			long long_1 = 0;
			long long_2 = 0;
			char char_3 = 0;
			long_2 = long_1 / long_2;
			int_1 = bmfs_create_dir(unsigned_int_1,char_2);

			char_3 = char_3;
			return char_4;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	return char_5;
}
double time_print( unsigned int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double_1 = pow ( double_2 , double_2 ) ;
	double_2 = double_3;
	int_2 = int_1 * int_1;
	float_1 = float_1 + float_2;
	double_3 = tanh ( double_3 ) ;
}
float next_without_skipping( float parameter_1)
{
	float float_1 = 0;
	float float_2 = 0;
	float float_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	float float_4 = 0;
	float float_5 = 0;
	int int_1 = 0;
	int int_2 = 0;
	long long_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_3 = 0;
	float_3 = float_1 + float_2;
	double_1 = sqrt ( double_1 ) ;
	double_1 = log ( double_1 ) ;
	double_2 = double_2;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, ")|nk") < 0)
	{
		return float_4;
	}
	float_1 = float_2 + float_2;
	char controller_2[1];
	scanf("%1s", controller_2);
	if( strcmp( controller_2, ":") > 0)
	{
		return float_5;
	}
	int_1 = int_1;
	if(1)
	{
		return float_4;
	}
	int_1 = bmfs_entry_read(int_2,long_1,790);

	double_3 = tanh ( double_3 ) ;
	return float_2;
	int_2 = bmfs_disk_seek(long_1,double_4,int_3);

}
float bmfs_dir_next( double parameter_1)
{
	float float_1 = 0;
	double double_1 = 0;
	float float_2 = 0;
	int int_1 = 0;
	char char_1 = 0;
	double double_2 = 0;
	float_1 = next_without_skipping(float_1);

	double_1 = tan ( double_1 ) ;
	for(int looper_1=0; looper_1<9;looper_1++)
	{
		float float_1 = 0;
		double double_1 = 0;
		float float_2 = 0;
		int int_1 = 0;
		char char_1 = 0;
		double double_2 = 0;
		double_1 = ceil ( double_2 ) ;
		if(1)
		{
			return float_1;
		}
		char controller_2[4];
		scanf("%4s", controller_2);
		if( strcmp( controller_2, ">AyU") < 0)
		{
			return float_1;
		}
		if(1)
		{
			return float_2;
		}
	}
	return float_2;
	int_1 = bmfs_entry_is_deleted(char_1);

}
long find_dir( unsigned int parameter_1,long parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_1 = 0;
	char char_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_5 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_6 = 0;
	double double_7 = 0;
	double_1 = pow ( double_2 , double_1 ) ;
	double_1 = log10 ( double_3 ) ;
	double_1 = log ( double_4 ) ;
	double_2 = sinh ( double_3 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		int int_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_6 = 0;
		double double_7 = 0;
		looper_1 += 1;
		double_3 = atan2 ( double_2 , double_4 ) ;
		double_4 = atan2 ( double_4 , double_1 ) ;
		double_2 = tanh ( double_3 ) ;
		double_5 = fabs ( double_4 ) ;
		char controller4vul_7[5];
		scanf("%5s", controller4vul_7);
		if( strcmp( controller4vul_7, "-fZ/=") < 0)
		{
			int_1 = bmfs_dir_import(char_1,uni_para);

			return long_1;
		}
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		char controller_1[5];
		scanf("%5s", controller_1);
		if( strcmp( controller_1, "<fmcq") > 0)
		{
			return long_1;
		}
		if(1)
		{
			return long_1;
		}
		if(1)
		{
			return long_2;
		}
		double_6 = exp ( double_7 ) ;
	}
	return long_3;
}
int bmfs_entry_is_directory( int parameter_1)
{
	int int_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "/n!T(") > 0)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
}
int bmfs_dir_import( char parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_1 = 0;
	int int_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	long long_4 = 0;
	double double_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_3 = 0;
	double double_4 = 0;
	unsigned_int_3 = unsigned_int_1 - unsigned_int_2;
	double_1 = atan ( double_1 ) ;
	char controller4vul_8[5];
	scanf("%5s", controller4vul_8);
	if( strcmp( controller4vul_8, "5[_S8") > 0)
	{
		int_1 = bmfs_entry_read(int_1,long_1,uni_para);

		return int_1;
	}
	long_4 = long_2 * long_3;
	double_2 = double_2;
	char_2 = char_1 - char_1;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "wlp") < 0)
	{
		return int_2;
	}
	char controller_2[2];
	scanf("%2s", controller_2);
	if( strcmp( controller_2, "q4") > 0)
	{
		return int_3;
	}
	long_3 = long_2;
	double_3 = double_1 - double_1;
	double_4 = ceil ( double_4 ) ;
	return int_2;
}
void bmfs_dir_set_disk( int parameter_1,short parameter_2)
{
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double_1 = tanh ( double_2 ) ;
	}
}
double open_dir( double parameter_1,char parameter_2,double parameter_3,int uni_para)
{
	long long_1 = 0;
	long long_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_3 = 0;
	short short_1 = 0;
	char char_1 = 0;
	double double_3 = 0;
	int int_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	float float_1 = 0;
	long long_4 = 0;
	double double_7 = 0;
	char char_2 = 0;
	char char_3 = 0;
	int int_4 = 0;
	double double_8 = 0;
	float float_2 = 0;
	unsigned int unsigned_int_2 = 0;
	long_2 = long_1 + long_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		int_2 = int_1 - int_1;
	}
	double_1 = fmod ( double_2 , double_1 ) ;
	char controller4vul_6[5];
	scanf("%5s", controller4vul_6);
	if( strcmp( controller4vul_6, ",F-7d") < 0)
	{
		long_2 = find_dir(unsigned_int_1,long_3,short_1,char_1,unsigned_int_1,uni_para);

		return double_3;
	}
	double_1 = sinh ( double_2 ) ;
	double_2 = fabs ( double_3 ) ;
	double_2 = ldexp ( double_3 , int_3 ) ;
	if(1)
	{
		return double_1;
	}
	long_3 = long_3;
	if(1)
	{
		return double_4;
	}
	double_1 = double_1 + double_3;
	double_1 = exp ( double_3 ) ;
	double_2 = double_3 * double_1;
	if(1)
	{
		return double_5;
	}
	double_3 = floor ( double_6 ) ;
	float_1 = float_1;
	long_4 = long_1;
	double_4 = asin ( double_7 ) ;
	char_3 = char_2 / char_2;
	int looper_2 = 0;
	while(looper_2 < 10)
	{
		long long_1 = 0;
		long long_2 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		long long_3 = 0;
		short short_1 = 0;
		char char_1 = 0;
		double double_3 = 0;
		int int_3 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		float float_1 = 0;
		long long_4 = 0;
		double double_7 = 0;
		char char_2 = 0;
		char char_3 = 0;
		int int_4 = 0;
		double double_8 = 0;
		float float_2 = 0;
		unsigned int unsigned_int_2 = 0;
		looper_2 += 1;
		int_4 = int_2 * int_1;
		if(1)
		{
		}
		float_2 = float_1;
		char_1 = char_2 - char_2;
		if(1)
		{
			return double_5;
		}
		unsigned_int_2 = unsigned_int_2;
		char controller_6[4];
		scanf("%4s", controller_6);
		if( strcmp( controller_6, ":7V`") < 0)
		{
			return double_8;
		}
	}
	double_1 = cos ( double_3 ) ;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		double_4 = floor ( double_6 ) ;
		double_3 = ceil ( double_2 ) ;
		int_3 = int_4;
		if(1)
		{
			return double_5;
		}
		return double_1;
	}
	double_6 = log ( double_5 ) ;
	short_1 = short_1 + short_1;
	if(1)
	{
		return double_2;
	}
	return double_5;
}
int bmfs_open_dir( long parameter_1,char parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 0;
	char char_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	int int_2 = 0;
	char controller4vul_5[2];
	scanf("%2s", controller4vul_5);
	if( strcmp( controller4vul_5, "2k") > 0)
	{
		double_1 = open_dir(double_1,char_1,double_2,uni_para);

		return int_1;
	}
	double_3 = pow ( double_4 , double_5 ) ;
	if(1)
	{
		return int_2;
	}
	return int_1;
}
void bmfs_dir_init( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_4 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double_1 = ceil ( double_2 ) ;
	double_3 = double_1;
	int_2 = int_1 + int_1;
	double_2 = tan ( double_2 ) ;
	double_1 = double_4;
	long_1 = long_2;
	bmfs_entry_init(double_1);

}
double cmd_ls( unsigned int parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_3 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_4 = 0;
	double double_5 = 0;
	long long_1 = 0;
	long long_2 = 0;
	short short_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	short short_2 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	long long_3 = 0;
	short short_3 = 0;
	double double_6 = 0;
	int int_4 = 0;
	double_1 = double_2;
	int_1 = int_2;
	double_2 = exp ( double_3 ) ;
	float_1 = float_2;
	double_3 = double_4;
	double_1 = sqrt ( double_5 ) ;
	long_1 = long_2;
	double_2 = ldexp ( double_3 , int_2 ) ;
	short_1 = short_1;
	int_2 = int_2 + int_1;
	double_2 = double_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
			double_4 = cosh ( double_2 ) ;
		}
		char controller4vul_3[4];
		scanf("%4s", controller4vul_3);
		if( strcmp( controller4vul_3, "Xa-/") < 0)
		{
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			int int_2 = 0;
			double double_3 = 0;
			float float_1 = 0;
			float float_2 = 0;
			double double_4 = 0;
			double double_5 = 0;
			long long_1 = 0;
			long long_2 = 0;
			short short_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			short short_2 = 0;
			int int_3 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			long long_3 = 0;
			short short_3 = 0;
			double double_6 = 0;
			int int_4 = 0;
			char controller4vul_4[2];
			scanf("%2s", controller4vul_4);
			if( strcmp( controller4vul_4, "F{") < 0)
			{
				int_2 = bmfs_open_dir(long_2,char_1,char_2,uni_para);

				unsigned_int_1 = unsigned_int_1 / unsigned_int_1;
				return double_1;
			}
			char controller_1[2];
			scanf("%2s", controller_1);
			if( strcmp( controller_1, "wY") < 0)
			{
				short_1 = short_1 * short_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
				return double_1;
			}
			else
			{
				double_1 = sqrt ( double_4 ) ;
				return double_2;
			}
			short_2 = short_2;
		}
		else
		{
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			int int_2 = 0;
			double double_3 = 0;
			float float_1 = 0;
			float float_2 = 0;
			double double_4 = 0;
			double double_5 = 0;
			long long_1 = 0;
			long long_2 = 0;
			short short_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			short short_2 = 0;
			int int_3 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			long long_3 = 0;
			short short_3 = 0;
			double double_6 = 0;
			int int_4 = 0;
			long_1 = long_3;
			return double_2;
		}
		double_2 = acos ( double_5 ) ;
	}
	int_3 = int_1 - int_2;
	if(1)
	{
		int_1 = int_3 / int_1;
	}
	double_2 = fabs ( double_4 ) ;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_3 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_4 = 0;
		double double_5 = 0;
		long long_1 = 0;
		long long_2 = 0;
		short short_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		short short_2 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		long long_3 = 0;
		short short_3 = 0;
		double double_6 = 0;
		int int_4 = 0;
		short_1 = short_2 / short_3;
		double_4 = log ( double_1 ) ;
		return double_4;
	}
	for(int looper_2=0; looper_2<9;looper_2++)
	{
		char_1 = char_2 * char_1;
		if(1)
		{
		}
		if(1)
		{
			char_2 = char_2 / char_1;
		}
		if(1)
		{
			int_3 = int_1 + int_1;
		}
		if(1)
		{
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			int int_2 = 0;
			double double_3 = 0;
			float float_1 = 0;
			float float_2 = 0;
			double double_4 = 0;
			double double_5 = 0;
			long long_1 = 0;
			long long_2 = 0;
			short short_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			short short_2 = 0;
			int int_3 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			long long_3 = 0;
			short short_3 = 0;
			double double_6 = 0;
			int int_4 = 0;
			double_6 = floor ( double_1 ) ;
		}
		else
		{
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			int int_2 = 0;
			double double_3 = 0;
			float float_1 = 0;
			float float_2 = 0;
			double double_4 = 0;
			double double_5 = 0;
			long long_1 = 0;
			long long_2 = 0;
			short short_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			short short_2 = 0;
			int int_3 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			long long_3 = 0;
			short short_3 = 0;
			double double_6 = 0;
			int int_4 = 0;
			int_4 = int_4;
		}
	}
	return double_3;
}
void bmfs_table_entry_set_deleted()
{
	long long_1 = 0;
	long long_2 = 0;
	long_1 = long_1 * long_2;
}
int bmfs_table_free( unsigned int parameter_1,float parameter_2)
{
	int int_1 = 0;
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	char char_1 = 0;
	int_1 = bmfs_table_save(long_1);

	double_2 = double_1 * double_2;
	for(int looper_1=0; looper_1<9;looper_1++)
	{
		double_1 = pow ( double_1 , double_2 ) ;
		char controller_1[1];
		scanf("%1s", controller_1);
		if( strcmp( controller_1, "#") > 0)
		{
			return int_1;
		}
		char controller_2[4];
		scanf("%4s", controller_2);
		if( strcmp( controller_2, "`l96") > 0)
		{
		}
		double_1 = bmfs_table_next(int_2);

		bmfs_table_entry_set_deleted();

		double_1 = double_2 + double_2;
		bmfs_table_begin(char_1);

		double_1 = atan ( double_2 ) ;
		char controller_3[4];
		scanf("%4s", controller_3);
		if( strcmp( controller_3, "FkQQ") < 0)
		{
			return int_2;
		}
		return int_2;
	}
	return int_1;
}
void bmfs_host_free( short parameter_1,double parameter_2)
{
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "I") > 0)
	{
		double double_1 = 0;
		double double_2 = 0;
		double_1 = pow ( double_1 , double_2 ) ;
	}
}
unsigned int table_free( short parameter_1)
{
	double double_1 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	short short_1 = 0;
	double double_2 = 0;
	double_1 = exp ( double_1 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	double_1 = fmod ( double_1 , double_1 ) ;
	table_host_init(char_1);

	bmfs_host_free(short_1,double_2);

}
char bmfs_host_malloc( char parameter_1,unsigned int parameter_2,short parameter_3)
{
	char char_1 = 0;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "g") < 0)
	{
		return char_1;
	}
	else
	{
		return char_1;
	}
}
char bmfs_host_init( long parameter_1)
{
	char char_1 = 0;
	char char_2 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, ".(A") > 0)
	{
		return char_1;
	}
	else
	{
		return char_2;
	}
}
void table_host_init( char parameter_1)
{
	char char_1 = 0;
	long long_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 0;
		long long_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int_2 = int_1 / int_1;
		char controller_3[3];
		scanf("%3s", controller_3);
		if( strcmp( controller_3, "ljT") > 0)
		{
		}
	}
	char_1 = bmfs_host_init(long_1);

}
unsigned int table_malloc( double parameter_1,unsigned int parameter_2)
{
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	table_host_init(char_1);

	char_1 = bmfs_host_malloc(char_2,unsigned_int_1,short_1);

	long_1 = long_1 / long_2;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "TI}") < 0)
	{
		return unsigned_int_1;
	}
	return unsigned_int_1;
}
unsigned int copy_over_data( int parameter_1,double parameter_2,unsigned int parameter_3,float parameter_4)
{
	double double_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_2 = 0;
	long long_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_3 = 0;
	long long_2 = 0;
	double double_5 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_4 = 0;
	unsigned int unsigned_int_5 = 0;
	int int_4 = 0;
	double double_7 = 0;
	double double_8 = 0;
	int int_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double_1 = ceil ( double_1 ) ;
	if(1)
	{
		double_1 = tanh ( double_1 ) ;
	}
	double_1 = atan2 ( double_1 , double_1 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 8)
	{
		double double_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_2 = 0;
		long long_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		short short_1 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_3 = 0;
		long long_2 = 0;
		double double_5 = 0;
		double double_6 = 0;
		unsigned int unsigned_int_4 = 0;
		unsigned int unsigned_int_5 = 0;
		int int_4 = 0;
		double double_7 = 0;
		double double_8 = 0;
		int int_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		looper_1 += 1;
		if(1)
		{
			int_2 = int_1 * int_1;
		}
		long_1 = long_1;
		double_2 = atan2 ( double_3 , double_4 ) ;
		if(1)
		{
			unsigned_int_2 = table_free(short_1);

			double_3 = ceil ( double_3 ) ;
			return unsigned_int_1;
		}
		double_3 = double_2;
		if(1)
		{
			unsigned_int_3 = table_malloc(double_3,unsigned_int_2);

			int_3 = bmfs_disk_read(double_2,long_2,double_5);

			double_3 = sqrt ( double_6 ) ;
			return unsigned_int_4;
		}
		if(1)
		{
			long_2 = long_1;
			return unsigned_int_5;
		}
		char_2 = char_1 - char_1;
		char controller_7[5];
		scanf("%5s", controller_7);
		if( strcmp( controller_7, "dHs#_") < 0)
		{
			double_1 = ldexp ( double_3 , int_1 ) ;
			return unsigned_int_2;
		}
		int_4 = bmfs_disk_seek(long_1,double_7,int_4);

		double_1 = acos ( double_7 ) ;
		double_4 = cosh ( double_6 ) ;
		if(1)
		{
			double_2 = log ( double_5 ) ;
			return unsigned_int_4;
		}
		if(1)
		{
			int_4 = int_4 / int_3;
			return unsigned_int_4;
		}
		double_7 = tanh ( double_4 ) ;
	}
	double_4 = atan2 ( double_6 , double_8 ) ;
	return unsigned_int_2;
	int_4 = bmfs_disk_write(short_1,unsigned_int_3,int_2,unsigned_int_1);

}
int bmfs_table_realloc( double parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_4 = 0;
	unsigned int unsigned_int_3 = 0;
	float float_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_5 = 0;
	long long_1 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double double_7 = 0;
	double double_8 = 0;
	double double_9 = 0;
	int int_6 = 0;
	short short_1 = 0;
	float float_2 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_10 = 0;
	double double_11 = 0;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "hj") > 0)
	{
		return int_1;
	}
	bmfs_table_end(int_2);

	int_1 = get_block_size(unsigned_int_1);

	double_1 = atan ( double_1 ) ;
	if(1)
	{
		return int_2;
	}
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "U") < 0)
	{
		return int_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_4 = bmfs_table_free(unsigned_int_3,float_1);

	double_1 = atan ( double_2 ) ;
	bmfs_table_entry_init(int_3);

	double_3 = double_4;
	int_5 = bmfs_table_previous();

	long_1 = long_1 - long_1;
	double_1 = tanh ( double_5 ) ;
	if(1)
	{
		return int_2;
	}
	double_2 = double_6 - double_7;
	double_4 = asin ( double_8 ) ;
	double_9 = double_1;
	double_2 = atan ( double_6 ) ;
	double_1 = tanh ( double_8 ) ;
	int_6 = bmfs_table_push(short_1,float_2);

	char_1 = char_1;
	if(1)
	{
		return int_4;
	}
	double_8 = ceil ( double_4 ) ;
	if(1)
	{
		return int_2;
	}
	unsigned_int_4 = copy_over_data(int_5,double_10,unsigned_int_3,float_1);

	double_7 = tanh ( double_4 ) ;
	if(1)
	{
		return int_4;
	}
	double_3 = bmfs_table_find(double_2,int_1);

	bmfs_table_hide_deleted();

	double_11 = acos ( double_8 ) ;
	return int_3;
}
unsigned int file_resize( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "Kzi%`") > 0)
	{
		return unsigned_int_1;
	}
	double_1 = pow ( double_2 , double_3 ) ;
	double_1 = double_1 * double_4;
	if(1)
	{
		return unsigned_int_1;
	}
	double_3 = ceil ( double_2 ) ;
	double_4 = fmod ( double_4 , double_3 ) ;
	return unsigned_int_1;
	int_1 = bmfs_table_realloc(double_4,double_3,double_3);

}
int bmfs_file_write( unsigned int parameter_1,char parameter_2,float parameter_3,double parameter_4)
{
	int int_1 = 0;
	int int_2 = 0;
	short short_1 = 0;
	int int_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_4 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_2 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_5 = 0;
	double double_6 = 0;
	if(1)
	{
		return int_1;
	}
	int_2 = bmfs_file_seek(short_1,int_3,int_3);

	double_1 = double_1;
	if(1)
	{
		double_2 = ceil ( double_3 ) ;
		if(1)
		{
			return int_4;
		}
	}
	unsigned_int_1 = file_resize(short_2,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		return int_3;
	}
	double_1 = ceil ( double_4 ) ;
	int_3 = bmfs_disk_write(short_1,unsigned_int_1,int_1,unsigned_int_3);

	double_4 = ceil ( double_2 ) ;
	if(1)
	{
		return int_4;
	}
	double_3 = pow ( double_3 , double_4 ) ;
	if(1)
	{
		int int_1 = 0;
		int int_2 = 0;
		short short_1 = 0;
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		int int_4 = 0;
		unsigned int unsigned_int_1 = 0;
		short short_2 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double_5 = floor ( double_6 ) ;
	}
	if(1)
	{
		double_1 = acos ( double_5 ) ;
	}
	return int_4;
}
void bmfs_file_set_mode( float parameter_1,char parameter_2)
{
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "F") > 0)
	{
		double double_1 = 0;
		double_1 = atan ( double_1 ) ;
	}
}
double bmfs_table_find( double parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_1 = 0;
	double double_1 = 0;
	int int_1 = 0;
	long long_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	unsigned_int_1 = unsigned_int_1 - unsigned_int_2;
	bmfs_table_begin(char_1);

	double_1 = bmfs_table_next(int_1);

	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<10;looper_1++)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		char char_1 = 0;
		double double_1 = 0;
		int int_1 = 0;
		long long_1 = 0;
		double double_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		float_2 = float_1 * float_1;
		char controller_1[5];
		scanf("%5s", controller_1);
		if( strcmp( controller_1, "?A5dC") > 0)
		{
		}
		char controller_2[3];
		scanf("%3s", controller_2);
		if( strcmp( controller_2, "VC_") < 0)
		{
			return double_2;
		}
	}
	return double_2;
	bmfs_table_hide_deleted();

}
short can_fit_entry( int parameter_1,float parameter_2)
{
	double double_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double_1 = bmfs_table_find(double_1,int_1);

	int_1 = int_2 + int_1;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "B") < 0)
	{
		return short_1;
	}
	char controller_2[2];
	scanf("%2s", controller_2);
	if( strcmp( controller_2, "6&") < 0)
	{
		return short_2;
	}
	return short_2;
}
short add_entry( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	short short_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_1 = 0;
	short short_2 = 0;
	float float_1 = 0;
	int int_3 = 0;
	short short_3 = 0;
	long long_1 = 0;
	double double_2 = 0;
	long long_2 = 0;
	short short_4 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_4 = 0;
	short short_5 = 0;
	if(1)
	{
		return short_1;
	}
	int_1 = bmfs_entry_write(unsigned_int_1,int_2);

	char_2 = char_1 / char_2;
	double_1 = floor ( double_1 ) ;
	if(1)
	{
		return short_1;
	}
	short_2 = can_fit_entry(int_2,float_1);

	int_3 = int_1;
	if(1)
	{
		return short_3;
	}
	int_2 = bmfs_disk_seek(long_1,double_2,int_2);

	long_2 = long_2 / long_2;
	char controller_4[3];
	scanf("%3s", controller_4);
	if( strcmp( controller_4, "^|H") > 0)
	{
		return short_4;
	}
	double_3 = sinh ( double_4 ) ;
	int_2 = int_4;
	if(1)
	{
		return short_2;
	}
	return short_5;
}
unsigned int entry_exists( int parameter_1,float parameter_2,unsigned int parameter_3,char parameter_4)
{
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_4 = 0;
	char char_1 = 0;
	long_1 = long_1 - long_1;
	bmfs_entry_init(double_1);

	double_2 = acos ( double_3 ) ;
	int_1 = int_2;
	if(1)
	{
		return unsigned_int_1;
	}
	else
	{
		return unsigned_int_2;
	}
	double_2 = find_entry(double_1,int_1,double_4,char_1,unsigned_int_1);

}
long create_entry( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 0;
	int int_1 = 0;
	short short_1 = 0;
	long long_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_2 = 0;
	long long_2 = 0;
	char char_1 = 0;
	long long_3 = 0;
	long long_4 = 0;
	float float_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	int int_2 = 0;
	float float_2 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_7 = 0;
	int int_3 = 0;
	short short_2 = 0;
	double double_8 = 0;
	char char_2 = 0;
	long long_5 = 0;
	bmfs_header_init();

	double_1 = ldexp ( double_1 , int_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		looper_1 += 1;
		short_1 = add_entry(long_1,unsigned_int_1,int_1);

		unsigned_int_1 = unsigned_int_1;
	}
	double_2 = atan2 ( double_2 , double_2 ) ;
	if(1)
	{
		return long_2;
	}
	bmfs_path_init(char_1);

	long_4 = long_3 - long_4;
	float_1 = float_1 + float_1;
	bmfs_entry_init(double_1);

	double_3 = exp ( double_4 ) ;
	if(1)
	{
		return long_1;
	}
	char_1 = char_1;
	char controller_3[5];
	scanf("%5s", controller_3);
	if( strcmp( controller_3, "_[i%_") > 0)
	{
		return long_1;
	}
	double_2 = tanh ( double_2 ) ;
	double_4 = fmod ( double_1 , double_1 ) ;
	double_3 = log ( double_3 ) ;
	if(1)
	{
		return long_2;
	}
	double_4 = sqrt ( double_3 ) ;
	double_3 = sinh ( double_3 ) ;
	int_1 = bmfs_disk_seek(long_1,double_5,int_2);

	int_2 = int_1 * int_2;
	int_1 = bmfs_path_split_root(float_2,float_2);

	double_3 = tan ( double_6 ) ;
	double_4 = atan ( double_1 ) ;
	int looper_2 = 0;
	while(looper_2 < 4)
	{
		looper_2 += 1;
		unsigned_int_2 = entry_exists(int_2,float_2,unsigned_int_3,char_1);

		double_4 = exp ( double_4 ) ;
		if(1)
		{
		}
		double_7 = sqrt ( double_7 ) ;
		int_2 = int_2 + int_2;
		if(1)
		{
			return long_4;
		}
		int_3 = bmfs_entry_read(int_3,long_3,474);

		double_1 = double_2;
		if(1)
		{
			return long_3;
		}
	}
	double_7 = tanh ( double_2 ) ;
	if(1)
	{
		return long_2;
	}
	int_3 = bmfs_header_read(long_3,double_2);

	double_6 = ldexp ( double_7 , int_1 ) ;
	for(int looper_3=0; looper_3<3;looper_3++)
	{
		int_2 = int_2 / int_2;
	}
	bmfs_path_set(short_2,int_2,unsigned_int_1);

	double_7 = sinh ( double_2 ) ;
	if(1)
	{
		return long_1;
	}
	double_6 = find_entry(double_8,int_3,double_7,char_1,unsigned_int_1);

	char_2 = char_1 + char_2;
	if(1)
	{
		return long_1;
	}
	return long_5;
}
double new_get_block_size( short parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "?f15V") < 0)
	{
		return double_1;
	}
	else
	{
		return double_2;
	}
}
int bmfs_create_file( double parameter_1,int parameter_2)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	int int_2 = 0;
	long long_1 = 0;
	int int_3 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	char char_1 = 0;
	long long_3 = 0;
	char char_2 = 0;
	char char_3 = 0;
	short short_2 = 0;
	int int_4 = 0;
	long long_4 = 0;
	if(1)
	{
		return int_1;
	}
	double_1 = acos ( double_2 ) ;
	bmfs_entry_init(double_2);

	double_1 = atan2 ( double_3 , double_4 ) ;
	if(1)
	{
		return int_2;
	}
	long_1 = long_1 * long_1;
	int_3 = bmfs_allocate(long_2,unsigned_int_1,unsigned_int_1);

	double_3 = new_get_block_size(short_1);

	char_1 = char_1;
	long_3 = create_entry(char_2,int_1,int_2);

	double_4 = sqrt ( double_4 ) ;
	char_1 = char_3;
	bmfs_entry_set_type(char_3,short_1);

	int_2 = bmfs_get_current_time(short_2);

	double_4 = ldexp ( double_4 , int_4 ) ;
	long_4 = long_1 + long_4;
	double_1 = sinh ( double_1 ) ;
	if(1)
	{
		return int_4;
	}
	return int_4;
}
void cmd_cp( int parameter_1,int parameter_2,short parameter_3)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double double_7 = 0;
	double double_8 = 0;
	int int_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_9 = 0;
	float float_3 = 0;
	double double_10 = 0;
	long long_1 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_3 = 0;
	float float_6 = 0;
	double double_13 = 0;
	double double_14 = 0;
	float float_4 = 0;
	float float_5 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_12 = 0;
	double double_11 = 0;
	double double_15 = 0;
	int int_4 = 0;
	if(1)
	{
		int_1 = bmfs_create_file(double_1,int_1);

		double_2 = double_3;
	}
	if(1)
	{
		char_1 = char_1;
	}
	if(1)
	{
		double_1 = double_3 * double_3;
	}
	double_3 = asin ( double_4 ) ;
	double_4 = sinh ( double_1 ) ;
	if(1)
	{
		double_3 = double_5;
		double_4 = tan ( double_6 ) ;
		double_7 = atan2 ( double_8 , double_2 ) ;
	}
	bmfs_file_init(int_1);

	int_2 = bmfs_open_file(float_1,float_2,double_3);

	bmfs_file_set_mode(float_1,char_1);

	double_5 = cos ( double_9 ) ;
	double_8 = exp ( double_8 ) ;
	bmfs_file_close(char_1);

	float_3 = float_2 + float_2;
	double_8 = fmod ( double_6 , double_6 ) ;
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double double_7 = 0;
		double double_8 = 0;
		int int_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_9 = 0;
		float float_3 = 0;
		double double_10 = 0;
		long long_1 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		float float_6 = 0;
		double double_13 = 0;
		double double_14 = 0;
		float float_4 = 0;
		float float_5 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_12 = 0;
		double double_11 = 0;
		double double_15 = 0;
		int int_4 = 0;
		double_10 = log10 ( double_5 ) ;
		float_5 = float_3 - float_4;
		long_1 = long_2;
	}
	double_9 = double_3 + double_7;
	if(1)
	{
		double_5 = double_7;
		double_3 = log10 ( double_6 ) ;
		double_6 = double_4;
	}
	double_3 = ceil ( double_8 ) ;
	long_3 = long_3;
	double_7 = log10 ( double_10 ) ;
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double double_7 = 0;
		double double_8 = 0;
		int int_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_9 = 0;
		float float_3 = 0;
		double double_10 = 0;
		long long_1 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		float float_6 = 0;
		double double_13 = 0;
		double double_14 = 0;
		float float_4 = 0;
		float float_5 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_12 = 0;
		double double_11 = 0;
		double double_15 = 0;
		int int_4 = 0;
		double_2 = double_2;
		unsigned_int_1 = unsigned_int_2;
		int_3 = bmfs_file_write(unsigned_int_2,char_1,float_2,double_1);

		unsigned_int_4 = unsigned_int_3 / unsigned_int_3;
	}
	int looper_1 = 0;
	while(looper_1 < 4)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double double_7 = 0;
		double double_8 = 0;
		int int_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_9 = 0;
		float float_3 = 0;
		double double_10 = 0;
		long long_1 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		float float_6 = 0;
		double double_13 = 0;
		double double_14 = 0;
		float float_4 = 0;
		float float_5 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_4 = 0;
		double double_12 = 0;
		double double_11 = 0;
		double double_15 = 0;
		int int_4 = 0;
		looper_1 += 1;
		double_6 = floor ( double_3 ) ;
		if(1)
		{
			int int_1 = 0;
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			char char_1 = 0;
			double double_4 = 0;
			double double_5 = 0;
			double double_6 = 0;
			double double_7 = 0;
			double double_8 = 0;
			int int_2 = 0;
			float float_1 = 0;
			float float_2 = 0;
			double double_9 = 0;
			float float_3 = 0;
			double double_10 = 0;
			long long_1 = 0;
			long long_3 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			float float_6 = 0;
			double double_13 = 0;
			double double_14 = 0;
			float float_4 = 0;
			float float_5 = 0;
			long long_2 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_3 = 0;
			unsigned int unsigned_int_4 = 0;
			double double_12 = 0;
			double double_11 = 0;
			double double_15 = 0;
			int int_4 = 0;
			double_3 = asin ( double_3 ) ;
			double_7 = double_11;
			char_1 = char_1;
			double_12 = fmod ( double_11 , double_6 ) ;
			double_5 = fabs ( double_3 ) ;
			float_6 = bmfs_strerror(int_1);

			long_3 = long_3 / long_1;
		}
		double_8 = pow ( double_4 , double_13 ) ;
		double_13 = cosh ( double_3 ) ;
		if(1)
		{
			int int_1 = 0;
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			char char_1 = 0;
			double double_4 = 0;
			double double_5 = 0;
			double double_6 = 0;
			double double_7 = 0;
			double double_8 = 0;
			int int_2 = 0;
			float float_1 = 0;
			float float_2 = 0;
			double double_9 = 0;
			float float_3 = 0;
			double double_10 = 0;
			long long_1 = 0;
			long long_3 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			float float_6 = 0;
			double double_13 = 0;
			double double_14 = 0;
			float float_4 = 0;
			float float_5 = 0;
			long long_2 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_3 = 0;
			unsigned int unsigned_int_4 = 0;
			double double_12 = 0;
			double double_11 = 0;
			double double_15 = 0;
			int int_4 = 0;
			if(1)
			{
				double_10 = cos ( double_6 ) ;
			}
			double_8 = tan ( double_14 ) ;
			double_7 = ceil ( double_15 ) ;
			double_13 = floor ( double_12 ) ;
			double_12 = fmod ( double_9 , double_7 ) ;
			int_1 = int_4 + int_3;
		}
	}
	char_1 = char_1;
	double_14 = exp ( double_5 ) ;
	double_9 = exp ( double_13 ) ;
}
int bmfs_file_seek( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 0;
	int int_1 = 0;
	double double_2 = 0;
	long long_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_4 = 0;
	int int_4 = 0;
	double double_3 = 0;
	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		if(1)
		{
			return int_1;
		}
		double_1 = sqrt ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 0;
		int int_1 = 0;
		double double_2 = 0;
		long long_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		double double_4 = 0;
		int int_4 = 0;
		double double_3 = 0;
		if(1)
		{
			return int_1;
		}
		int_1 = bmfs_disk_seek(long_1,double_1,int_2);

		double_3 = log ( double_1 ) ;
	}
	else
	{
		return int_2;
	}
	int_3 = int_1 * int_1;
	double_2 = tanh ( double_4 ) ;
	if(1)
	{
		return int_4;
	}
	return int_1;
}
int bmfs_file_read( int parameter_1,char parameter_3,short parameter_4)
{
	int int_1 = 0;
	double double_1 = 0;
	int int_2 = 0;
	double double_2 = 0;
	short short_1 = 0;
	char char_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	int int_3 = 0;
	double double_3 = 0;
	int int_4 = 0;
	float float_1 = 0;
	double double_4 = 0;
	if(1)
	{
		return int_1;
	}
	double_1 = double_1;
	if(1)
	{
		return int_2;
	}
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "[") < 0)
	{
		int int_1 = 0;
		double double_1 = 0;
		int int_2 = 0;
		double double_2 = 0;
		short short_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		int int_3 = 0;
		double double_3 = 0;
		int int_4 = 0;
		float float_1 = 0;
		double double_4 = 0;
		float_1 = float_1 * float_1;
	}
	double_2 = pow ( double_1 , double_1 ) ;
	int_1 = bmfs_file_seek(short_1,int_2,int_2);

	char_1 = char_1;
	if(1)
	{
		return int_1;
	}
	long_3 = long_1 - long_2;
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		int int_2 = 0;
		double double_2 = 0;
		short short_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		int int_3 = 0;
		double double_3 = 0;
		int int_4 = 0;
		float float_1 = 0;
		double double_4 = 0;
		int_3 = bmfs_disk_read(double_3,long_3,double_2);

		double_4 = cosh ( double_2 ) ;
	}
	return int_4;
}
int bmfs_file_eof( short parameter_1)
{
	int int_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "a4rUX") > 0)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
}
int bmfs_get_current_time( short parameter_1)
{
	float float_1 = 0;
	int int_1 = 0;
	float_1 = float_1 + float_1;
	return int_1;
}
int bmfs_entry_save( int parameter_1,char parameter_2)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	short short_1 = 0;
	int int_3 = 0;
	long long_1 = 0;
	double double_3 = 0;
	int int_4 = 0;
	int int_5 = 0;
	int_1 = bmfs_entry_write(unsigned_int_1,int_1);

	unsigned_int_1 = unsigned_int_2 / unsigned_int_3;
	if(1)
	{
		return int_1;
	}
	double_1 = cos ( double_2 ) ;
	if(1)
	{
		return int_1;
	}
	int_2 = bmfs_get_current_time(short_1);

	int_3 = bmfs_disk_seek(long_1,double_3,int_1);

	long_1 = long_1;
	if(1)
	{
		return int_4;
	}
	return int_5;
}
long file_can_write( unsigned int parameter_1)
{
	long long_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "sj{;)") > 0)
	{
		return long_1;
	}
	return long_1;
}
void bmfs_file_close( char parameter_1)
{
	long long_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	char char_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "7yWWX") < 0)
	{
	}
	long_1 = file_can_write(unsigned_int_1);

	int_2 = int_1 * int_1;
	int_1 = bmfs_entry_save(int_3,char_1);

}
int bmfs_file_import( long parameter_1)
{
	double double_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	long long_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double_1 = ceil ( double_1 ) ;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "fD]m") > 0)
	{
		return int_1;
	}
	int_2 = bmfs_entry_read(int_3,long_1,500);

	float_1 = float_1 - float_2;
	return int_3;
}
char find_file( float parameter_1,double parameter_2,short parameter_3,double parameter_4,unsigned int parameter_5)
{
	short short_1 = 0;
	double double_1 = 0;
	float float_1 = 0;
	long long_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	long long_2 = 0;
	char char_2 = 0;
	char char_3 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	short_1 = short_1;
	double_1 = atan ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 8)
	{
		short short_1 = 0;
		double double_1 = 0;
		float float_1 = 0;
		long long_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		double double_2 = 0;
		int int_2 = 0;
		long long_2 = 0;
		char char_2 = 0;
		char char_3 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double double_5 = 0;
		looper_1 += 1;
		float_1 = is_entry(long_1,char_1,int_1);

		double_1 = cosh ( double_2 ) ;
		int_1 = int_1 / int_2;
		int_2 = bmfs_disk_seek(long_1,double_2,int_1);

		long_1 = long_2;
		double_2 = atan ( double_2 ) ;
		if(1)
		{
			return char_1;
		}
		double_3 = double_4;
		char controller_2[3];
		scanf("%3s", controller_2);
		if( strcmp( controller_2, "ol.") > 0)
		{
			if(1)
			{
				return char_2;
			}
		}
		if(1)
		{
			return char_2;
		}
		double_5 = double_5 + double_1;
	}
	return char_3;
	int_1 = bmfs_file_import(long_2);

}
int bmfs_entry_is_deleted( char parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	int_1 = int_1;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "t[") < 0)
	{
		return int_1;
	}
	return int_2;
}
float is_entry( long parameter_1,char parameter_2,int parameter_3)
{
	float float_1 = 0;
	double double_1 = 0;
	float float_2 = 0;
	int int_1 = 0;
	char char_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_1;
	}
	double_1 = log10 ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 9)
	{
		float float_1 = 0;
		double double_1 = 0;
		float float_2 = 0;
		int int_1 = 0;
		char char_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		looper_1 += 1;
		if(1)
		{
			return float_1;
		}
		double_2 = exp ( double_3 ) ;
	}
	if(1)
	{
		return float_1;
	}
	return float_2;
	int_1 = bmfs_entry_is_deleted(char_1);

}
double find_entry( double parameter_1,int parameter_2,double parameter_3,char parameter_4,unsigned int parameter_5)
{
	float float_1 = 0;
	long long_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	float float_2 = 0;
	float float_3 = 0;
	int int_2 = 0;
	long long_2 = 0;
	int int_3 = 0;
	long long_3 = 0;
	double double_4 = 0;
	double double_3 = 0;
	float_1 = is_entry(long_1,char_1,int_1);

	double_1 = pow ( double_2 , double_1 ) ;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "N!_") < 0)
	{
		return double_1;
	}
	bmfs_entry_init(double_1);

	float_2 = float_3;
	int_2 = bmfs_entry_read(int_2,long_2,41);

	int_1 = int_1 - int_3;
	int looper_1 = 0;
	while(looper_1 < 9)
	{
		float float_1 = 0;
		long long_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		float float_2 = 0;
		float float_3 = 0;
		int int_2 = 0;
		long long_2 = 0;
		int int_3 = 0;
		long long_3 = 0;
		double double_4 = 0;
		double double_3 = 0;
		looper_1 += 1;
		int_2 = bmfs_disk_seek(long_3,double_2,int_1);

		double_2 = sqrt ( double_1 ) ;
		double_2 = floor ( double_3 ) ;
		if(1)
		{
			return double_1;
		}
		if(1)
		{
			return double_4;
		}
		double_1 = atan ( double_2 ) ;
	}
	return double_4;
}
float is_separator( char parameter_1)
{
	float float_1 = 0;
	float float_2 = 0;
	if(1)
	{
		return float_1;
	}
	else
	{
		return float_2;
	}
}
int bmfs_path_split_root( float parameter_1,float parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	float float_1 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	char char_4 = 0;
	double double_5 = 0;
	long long_2 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_4 = 0;
	double_1 = cosh ( double_2 ) ;
	double_3 = ceil ( double_1 ) ;
	long_1 = long_1 * long_1;
	double_2 = cosh ( double_3 ) ;
	double_1 = sqrt ( double_3 ) ;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, ")v$4B") > 0)
	{
		char_1 = char_1;
		double_1 = sinh ( double_3 ) ;
	}
	double_3 = ldexp ( double_2 , int_1 ) ;
	char_1 = char_2 + char_3;
	float_1 = is_separator(char_2);

	double_4 = floor ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 6)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		long long_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		float float_1 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		char char_4 = 0;
		double double_5 = 0;
		long long_2 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_4 = 0;
		looper_1 += 1;
		char controller_2[3];
		scanf("%3s", controller_2);
		if( strcmp( controller_2, "c.C") < 0)
		{
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			long long_1 = 0;
			char char_1 = 0;
			int int_1 = 0;
			char char_2 = 0;
			char char_3 = 0;
			float float_1 = 0;
			double double_4 = 0;
			unsigned int unsigned_int_1 = 0;
			int int_2 = 0;
			int int_3 = 0;
			char char_4 = 0;
			double double_5 = 0;
			long long_2 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_4 = 0;
			char controller_3[3];
			scanf("%3s", controller_3);
			if( strcmp( controller_3, "A0L") > 0)
			{
				long_2 = long_1 - long_2;
				int_1 = int_1;
			}
			else
			{
				double double_1 = 0;
				double double_2 = 0;
				double double_3 = 0;
				long long_1 = 0;
				char char_1 = 0;
				int int_1 = 0;
				char char_2 = 0;
				char char_3 = 0;
				float float_1 = 0;
				double double_4 = 0;
				unsigned int unsigned_int_1 = 0;
				int int_2 = 0;
				int int_3 = 0;
				char char_4 = 0;
				double double_5 = 0;
				long long_2 = 0;
				unsigned int unsigned_int_2 = 0;
				int int_4 = 0;
				unsigned_int_1 = unsigned_int_2;
				long_2 = long_1;
				return int_2;
			}
		}
		else
		{
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			long long_1 = 0;
			char char_1 = 0;
			int int_1 = 0;
			char char_2 = 0;
			char char_3 = 0;
			float float_1 = 0;
			double double_4 = 0;
			unsigned int unsigned_int_1 = 0;
			int int_2 = 0;
			int int_3 = 0;
			char char_4 = 0;
			double double_5 = 0;
			long long_2 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_4 = 0;
			int_4 = int_3 / int_4;
		}
		double_3 = double_5;
	}
	char_4 = char_1;
	unsigned_int_1 = unsigned_int_1;
	return int_3;
}
void bmfs_path_set( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_1 = 0;
	unsigned_int_3 = unsigned_int_1 - unsigned_int_2;
	double_1 = double_1 + double_1;
}
void bmfs_path_init( char parameter_1)
{
	short short_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	short_1 = short_1;
	double_1 = double_2;
}
int bmfs_entry_read( int parameter_1,long parameter_2,int uni_para)
{
	double double_1 = 0;
	short short_1 = 0;
	int int_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double double_3 = 0;
	short short_2 = 0;
	char char_2 = 0;
	double double_4 = 0;
	short short_3 = 0;
	short short_4 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_5 = 0;
	char char_3 = 0;
	double_1 = cos ( double_1 ) ;
	short_1 = short_1 * short_1;
	double_1 = fabs ( double_1 ) ;
	char controller4vul_9[3];
	scanf("%3s", controller4vul_9);
	if( strcmp( controller4vul_9, "zej") < 0)
	{
		int_1 = bmfs_disk_tell(double_2,char_1,uni_para);

		return int_2;
	}
	double_1 = acos ( double_1 ) ;
	short_1 = short_1 * short_1;
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_3;
	}
	double_2 = double_3;
	short_2 = short_1;
	double_2 = exp ( double_2 ) ;
	char_1 = char_2;
	double_4 = log ( double_4 ) ;
	short_4 = short_3 / short_4;
	long_3 = long_1 * long_2;
	double_3 = atan ( double_5 ) ;
	double_1 = asin ( double_1 ) ;
	double_3 = floor ( double_2 ) ;
	char_3 = char_3;
	if(1)
	{
		return int_3;
	}
	double_5 = floor ( double_2 ) ;
	return int_1;
}
void bmfs_file_set_disk( float parameter_1,float parameter_2)
{
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "yE.3") < 0)
	{
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		short_3 = short_1 / short_2;
	}
}
float open_file( short parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 0;
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_4 = 0;
	float float_1 = 0;
	float float_2 = 0;
	short short_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	double double_5 = 0;
	short short_2 = 0;
	int int_2 = 0;
	char char_4 = 0;
	long long_2 = 0;
	int int_3 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	float float_3 = 0;
	float float_4 = 0;
	int int_4 = 0;
	int int_5 = 0;
	double double_7 = 0;
	float float_5 = 0;
	double double_6 = 0;
	int_1 = bmfs_entry_read(int_1,long_1,979);

	double_1 = atan ( double_1 ) ;
	double_1 = find_entry(double_2,int_1,double_3,char_1,unsigned_int_1);

	double_2 = double_4;
	int looper_1 = 0;
	while(looper_1 < 10)
	{
		looper_1 += 1;
		bmfs_file_set_disk(float_1,float_2);

		double_4 = double_1;
	}
	short_1 = short_1;
	if(1)
	{
		return float_1;
	}
	char_2 = char_1;
	char_3 = find_file(float_1,double_2,short_1,double_1,unsigned_int_1);

	double_5 = acos ( double_2 ) ;
	double_5 = log ( double_2 ) ;
	if(1)
	{
		return float_1;
	}
	double_1 = atan2 ( double_1 , double_3 ) ;
	if(1)
	{
		return float_2;
	}
	bmfs_path_set(short_2,int_2,unsigned_int_1);

	char_4 = char_4 + char_4;
	double_1 = pow ( double_5 , double_1 ) ;
	double_1 = double_2;
	if(1)
	{
		return float_1;
	}
	int_2 = bmfs_header_read(long_2,double_3);

	int_2 = int_3;
	double_1 = acos ( double_4 ) ;
	bmfs_path_init(char_4);

	long_3 = long_2;
	unsigned_int_2 = unsigned_int_3;
	float_2 = float_3 * float_4;
	int looper_2 = 0;
	while(looper_2 < 10)
	{
		int int_1 = 0;
		long long_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_4 = 0;
		float float_1 = 0;
		float float_2 = 0;
		short short_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		double double_5 = 0;
		short short_2 = 0;
		int int_2 = 0;
		char char_4 = 0;
		long long_2 = 0;
		int int_3 = 0;
		long long_3 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		float float_3 = 0;
		float float_4 = 0;
		int int_4 = 0;
		int int_5 = 0;
		double double_7 = 0;
		float float_5 = 0;
		double double_6 = 0;
		looper_2 += 1;
		int_1 = bmfs_path_split_root(float_1,float_1);

		double_4 = fabs ( double_6 ) ;
		if(1)
		{
		}
		bmfs_entry_init(double_5);

		double_2 = acos ( double_3 ) ;
		double_1 = ldexp ( double_3 , int_2 ) ;
		if(1)
		{
			return float_1;
		}
		double_2 = exp ( double_4 ) ;
		if(1)
		{
			return float_3;
		}
	}
	int_3 = bmfs_disk_seek(long_2,double_5,int_4);

	int_5 = int_1;
	if(1)
	{
		return float_2;
	}
	if(1)
	{
		return float_3;
	}
	double_5 = double_2;
	bmfs_header_init();

	double_5 = atan2 ( double_7 , double_2 ) ;
	if(1)
	{
		return float_3;
	}
	double_7 = atan ( double_1 ) ;
	return float_5;
}
int bmfs_open_file( float parameter_1,float parameter_2,double parameter_3)
{
	int int_1 = 0;
	int int_2 = 0;
	float float_1 = 0;
	short short_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, "}V") > 0)
	{
		return int_1;
	}
	return int_2;
	float_1 = open_file(short_1,double_1,double_2);

}
void bmfs_file_init( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double_1 = atan2 ( double_1 , double_2 ) ;
	bmfs_entry_init(double_3);

	int_1 = int_1 / int_2;
	double_4 = ldexp ( double_4 , int_1 ) ;
	double_4 = exp ( double_3 ) ;
	double_4 = floor ( double_2 ) ;
	double_3 = double_5 / double_5;
}
void cmd_cat( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	float float_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	float float_2 = 0;
	float float_3 = 0;
	short short_2 = 0;
	char char_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_6 = 0;
	double double_7 = 0;
	double double_5 = 0;
	char char_1 = 0;
	double double_8 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_3 = 0;
	double double_9 = 0;
	double_1 = log10 ( double_2 ) ;
	double_2 = log10 ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 2)
	{
		double double_1 = 0;
		double double_2 = 0;
		short short_1 = 0;
		float float_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		float float_2 = 0;
		float float_3 = 0;
		short short_2 = 0;
		char char_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double double_6 = 0;
		double double_7 = 0;
		double double_5 = 0;
		char char_1 = 0;
		double double_8 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		double double_9 = 0;
		looper_1 += 1;
		short_1 = short_1 / short_1;
		double_2 = log10 ( double_2 ) ;
		float_1 = bmfs_strerror(int_1);

		double_1 = ldexp ( double_2 , int_2 ) ;
		if(1)
		{
			double double_1 = 0;
			double double_2 = 0;
			short short_1 = 0;
			float float_1 = 0;
			int int_1 = 0;
			int int_2 = 0;
			float float_2 = 0;
			float float_3 = 0;
			short short_2 = 0;
			char char_2 = 0;
			double double_3 = 0;
			double double_4 = 0;
			double double_6 = 0;
			double double_7 = 0;
			double double_5 = 0;
			char char_1 = 0;
			double double_8 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			double double_9 = 0;
			double_3 = pow ( double_4 , double_5 ) ;
			int_1 = bmfs_open_file(float_2,float_3,double_1);

			double_1 = ceil ( double_2 ) ;
			char_1 = char_1;
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			double double_1 = 0;
			double double_2 = 0;
			short short_1 = 0;
			float float_1 = 0;
			int int_1 = 0;
			int int_2 = 0;
			float float_2 = 0;
			float float_3 = 0;
			short short_2 = 0;
			char char_2 = 0;
			double double_3 = 0;
			double double_4 = 0;
			double double_6 = 0;
			double double_7 = 0;
			double double_5 = 0;
			char char_1 = 0;
			double double_8 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			double double_9 = 0;
			looper_2 += 1;
			int_2 = bmfs_file_eof(short_2);

			double_6 = double_1 - double_2;
			double_7 = fabs ( double_8 ) ;
			char controller_2[2];
			scanf("%2s", controller_2);
			if( strcmp( controller_2, "m?") > 0)
			{
				double double_1 = 0;
				double double_2 = 0;
				short short_1 = 0;
				float float_1 = 0;
				int int_1 = 0;
				int int_2 = 0;
				float float_2 = 0;
				float float_3 = 0;
				short short_2 = 0;
				char char_2 = 0;
				double double_3 = 0;
				double double_4 = 0;
				double double_6 = 0;
				double double_7 = 0;
				double double_5 = 0;
				char char_1 = 0;
				double double_8 = 0;
				unsigned int unsigned_int_1 = 0;
				unsigned int unsigned_int_2 = 0;
				int int_3 = 0;
				double double_9 = 0;
				int_2 = int_1;
				unsigned_int_1 = unsigned_int_2;
				double_3 = floor ( double_7 ) ;
			}
			int_1 = bmfs_file_read(int_2,char_2,short_1);

			short_1 = short_1;
			if(1)
			{
				double double_1 = 0;
				double double_2 = 0;
				short short_1 = 0;
				float float_1 = 0;
				int int_1 = 0;
				int int_2 = 0;
				float float_2 = 0;
				float float_3 = 0;
				short short_2 = 0;
				char char_2 = 0;
				double double_3 = 0;
				double double_4 = 0;
				double double_6 = 0;
				double double_7 = 0;
				double double_5 = 0;
				char char_1 = 0;
				double double_8 = 0;
				unsigned int unsigned_int_1 = 0;
				unsigned int unsigned_int_2 = 0;
				int int_3 = 0;
				double double_9 = 0;
				int_3 = int_3;
				double_9 = floor ( double_2 ) ;
			}
		}
		double_7 = asin ( double_4 ) ;
		bmfs_file_init(int_1);

		bmfs_file_close(char_2);

		double_2 = fmod ( double_2 , double_6 ) ;
	}
}
void bmfs_table_set_count( long parameter_1,char parameter_2)
{
	short short_1 = 0;
	short short_2 = 0;
	short_1 = short_2;
}
int bmfs_header_check( char parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	if(1)
	{
		return int_1;
	}
	return int_2;
}
int bmfs_import( long parameter_1)
{
	int int_1 = 0;
	long long_1 = 0;
	short short_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_4 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	int int_5 = 0;
	long long_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	int int_6 = 0;
	int int_7 = 0;
	long long_3 = 0;
	if(1)
	{
		return int_1;
	}
	bmfs_table_set_offset(long_1,short_1);

	double_1 = sqrt ( double_2 ) ;
	char controller_2[5];
	scanf("%5s", controller_2);
	if( strcmp( controller_2, "or{VV") > 0)
	{
		return int_2;
	}
	int_2 = int_2;
	if(1)
	{
		return int_3;
	}
	unsigned_int_2 = unsigned_int_1 - unsigned_int_1;
	char controller_4[1];
	scanf("%1s", controller_4);
	if( strcmp( controller_4, "+") > 0)
	{
		return int_4;
	}
	bmfs_table_set_min_offset(short_1,short_1);

	double_1 = asin ( double_2 ) ;
	bmfs_table_set_max_offset(unsigned_int_3,int_1);

	unsigned_int_4 = unsigned_int_3;
	int_5 = bmfs_disk_seek(long_2,double_2,int_3);

	double_3 = log10 ( double_2 ) ;
	double_1 = atan2 ( double_3 , double_2 ) ;
	int_4 = bmfs_header_check(char_1);

	double_3 = atan ( double_1 ) ;
	double_1 = ldexp ( double_2 , int_3 ) ;
	bmfs_table_set_count(long_2,char_1);

	double_4 = ldexp ( double_5 , int_6 ) ;
	double_4 = ldexp ( double_4 , int_3 ) ;
	return int_7;
	int_3 = bmfs_header_read(long_3,double_5);

}
int bmfs_export( long parameter_1)
{
	int int_1 = 0;
	long long_1 = 0;
	double double_1 = 0;
	int int_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	int int_3 = 0;
	double double_2 = 0;
	int int_4 = 0;
	int int_5 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	if(1)
	{
		return int_1;
	}
	int_1 = bmfs_disk_seek(long_1,double_1,int_1);

	int_1 = int_2 / int_1;
	double_1 = cos ( double_1 ) ;
	if(1)
	{
		return int_1;
	}
	char_1 = char_2;
	char controller_3[3];
	scanf("%3s", controller_3);
	if( strcmp( controller_3, ".^b") > 0)
	{
		return int_3;
	}
	int_1 = bmfs_table_save_all(long_1);

	double_1 = atan ( double_2 ) ;
	if(1)
	{
		return int_4;
	}
	return int_2;
	int_5 = bmfs_header_write(unsigned_int_1,short_1);

}
void bmfs_filedisk_done( unsigned int parameter_1)
{
	char controller_1[2];
	scanf("%2s", controller_1);
	if( strcmp( controller_1, ")N") > 0)
	{
		unsigned int unsigned_int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		unsigned_int_1 = unsigned_int_1;
		double_1 = double_1 + double_2;
	}
}
int bmfs_header_write( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_4 = 0;
	int int_1 = 0;
	short short_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	short short_4 = 0;
	char char_3 = 0;
	int int_2 = 0;
	double double_5 = 0;
	double double_6 = 0;
	double double_7 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_4 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_8 = 0;
	int int_3 = 0;
	int int_4 = 0;
	double_1 = cos ( double_2 ) ;
	float_1 = float_2;
	double_3 = floor ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 - unsigned_int_2;
	bmfs_encode_uint64(unsigned_int_2);

	bmfs_encode_uint32(unsigned_int_2);

	short_2 = short_1 * short_1;
	double_2 = acos ( double_4 ) ;
	int_1 = int_1;
	short_1 = short_1 / short_3;
	char_1 = char_1 / char_2;
	double_4 = acos ( double_3 ) ;
	short_4 = bmfs_crc32(char_1,char_3,double_1);

	int_1 = int_1 * int_2;
	double_6 = double_3 * double_5;
	int_1 = int_1;
	int_1 = bmfs_disk_write(short_4,unsigned_int_1,int_2,unsigned_int_1);

	double_6 = acos ( double_7 ) ;
	double_6 = double_6 * double_5;
	unsigned_int_3 = unsigned_int_4;
	double_4 = asin ( double_4 ) ;
	long_1 = long_2;
	double_1 = log10 ( double_5 ) ;
	double_2 = double_8;
	if(1)
	{
		return int_3;
	}
	char controller_2[2];
	scanf("%2s", controller_2);
	if( strcmp( controller_2, "u-") < 0)
	{
		return int_3;
	}
	return int_4;
}
char next_entry( double parameter_1)
{
	char char_1 = 0;
	char char_2 = 0;
	short short_1 = 0;
	int int_1 = 0;
	float float_1 = 0;
	float float_2 = 0;
	float float_3 = 0;
	double double_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	int int_2 = 0;
	if(1)
	{
		return char_1;
	}
	if(1)
	{
		return char_2;
	}
	char_2 = char_2;
	short_1 = short_1 + short_1;
	int_1 = bmfs_table_entry_read(char_2,float_1);

	float_3 = float_1 / float_2;
	double_1 = asin ( double_1 ) ;
	if(1)
	{
		return char_1;
	}
	long_2 = long_1 - long_1;
	if(1)
	{
		return char_2;
	}
	short_1 = short_1;
	return char_1;
	int_1 = bmfs_disk_seek(long_3,double_1,int_2);

}
double bmfs_table_next( int parameter_1)
{
	char char_1 = 0;
	double double_1 = 0;
	long long_1 = 0;
	char char_2 = 0;
	for(int looper_1=0; looper_1<6;looper_1++)
	{
		char char_1 = 0;
		double double_1 = 0;
		long long_1 = 0;
		char char_2 = 0;
		char_1 = next_entry(double_1);

		char_1 = char_2;
		char controller_1[3];
		scanf("%3s", controller_1);
		if( strcmp( controller_1, "Q~~") > 0)
		{
			return double_1;
		}
		char controller_2[1];
		scanf("%1s", controller_2);
		if( strcmp( controller_2, "-") > 0)
		{
			return double_1;
		}
	}
	return double_1;
	long_1 = bmfs_table_entry_is_deleted();

}
void bmfs_table_view_deleted( int parameter_1)
{
	float float_1 = 0;
	float float_2 = 0;
	float float_3 = 0;
	float_3 = float_1 - float_2;
}
void bmfs_table_begin( char parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = cosh ( double_2 ) ;
}
int bmfs_table_save_all( long parameter_1)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	long long_3 = 0;
	int int_4 = 0;
	char char_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "cFk") > 0)
	{
		return int_1;
	}
	double_1 = asin ( double_2 ) ;
	bmfs_table_begin(char_1);

	int_1 = int_2;
	for(int looper_1=0; looper_1<8;looper_1++)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		char char_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		long long_3 = 0;
		int int_4 = 0;
		char char_2 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int_1 = int_3;
		if(1)
		{
		}
		long_2 = long_1 + long_1;
		int_3 = bmfs_table_save(long_3);

		double_3 = cosh ( double_2 ) ;
		char controller_3[1];
		scanf("%1s", controller_3);
		if( strcmp( controller_3, "Y") < 0)
		{
			int int_1 = 0;
			double double_1 = 0;
			double double_2 = 0;
			char char_1 = 0;
			int int_2 = 0;
			int int_3 = 0;
			long long_3 = 0;
			int int_4 = 0;
			char char_2 = 0;
			long long_1 = 0;
			long long_2 = 0;
			double double_3 = 0;
			unsigned int unsigned_int_1 = 0;
			bmfs_table_view_deleted(int_4);

			double_1 = bmfs_table_next(int_2);

			unsigned_int_1 = unsigned_int_1;
			return int_4;
		}
		char_1 = char_1;
	}
	char_2 = char_1 - char_1;
	return int_2;
	bmfs_table_hide_deleted();

}
int bmfs_disk_tell( double parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_1 = 0;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	if(1)
	{
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_1 = 0;
		strcpy(vul_var, "CWE-761");
		if(uni_para == 232)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		double_1 = atan ( double_1 ) ;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
}
void bmfs_memcpy(double parameter_2,float parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_3 = 0;
	double_1 = double_2;
	short_1 = short_2;
	for(int looper_1=0; looper_1<4;looper_1++)
	{
		double double_1 = 0;
		double double_2 = 0;
		short short_1 = 0;
		short short_2 = 0;
		double double_3 = 0;
		double_1 = floor ( double_3 ) ;
	}
}
int bmfs_entry_write( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 0;
	char char_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_2 = 0;
	float float_1 = 0;
	unsigned int unsigned_int_4 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_5 = 0;
	short short_3 = 0;
	int int_3 = 0;
	int int_4 = 0;
	char char_3 = 0;
	double double_4 = 0;
	short_1 = bmfs_crc32(char_1,char_1,double_1);

	double_1 = cos ( double_2 ) ;
	int_1 = int_1 - int_1;
	int_1 = bmfs_disk_write(short_1,unsigned_int_1,int_1,unsigned_int_1);

	double_1 = ldexp ( double_1 , int_1 ) ;
	unsigned_int_2 = unsigned_int_1;
	double_1 = fabs ( double_1 ) ;
	short_1 = short_2;
	double_3 = tan ( double_1 ) ;
	bmfs_encode_uint64(unsigned_int_3);

	double_2 = exp ( double_1 ) ;
	int_2 = int_1;
	bmfs_memcpy(double_2,float_1);

	short_2 = short_1;
	double_2 = log10 ( double_2 ) ;
	float_1 = float_1 / float_1;
	int_1 = int_2 / int_1;
	unsigned_int_4 = unsigned_int_2 - unsigned_int_1;
	char_2 = char_2;
	if(1)
	{
		return int_2;
	}
	unsigned_int_5 = unsigned_int_2 / unsigned_int_2;
	short_1 = short_2 - short_3;
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_4;
	}
	int_4 = bmfs_disk_tell(double_3,char_3,452);

	double_4 = tan ( double_2 ) ;
	return int_2;
	bmfs_encode_uint32(unsigned_int_5);

}
int bmfs_table_entry_write( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	float float_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_3 = 0;
	int int_3 = 0;
	int int_4 = 0;
	double_1 = cosh ( double_2 ) ;
	double_1 = double_2 / double_2;
	short_2 = short_1 + short_1;
	bmfs_encode_uint64(unsigned_int_1);

	long_2 = long_1 * long_1;
	bmfs_encode_uint32(unsigned_int_1);

	float_1 = bmfs_table_entry_checksum(int_1);

	int_2 = bmfs_disk_write(short_1,unsigned_int_1,int_2,unsigned_int_2);

	double_2 = ldexp ( double_3 , int_2 ) ;
	unsigned_int_2 = unsigned_int_1 / unsigned_int_2;
	double_3 = floor ( double_1 ) ;
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_4;
	}
	return int_3;
}
int bmfs_table_save( long parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	long long_1 = 0;
	double double_1 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	short short_3 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "?-R.#") < 0)
	{
		return int_1;
	}
	int_2 = bmfs_disk_seek(long_1,double_1,int_3);

	int_2 = bmfs_table_entry_write(double_1,unsigned_int_1);

	double_1 = tan ( double_1 ) ;
	short_1 = short_1 + short_1;
	short_1 = short_2 / short_3;
	double_3 = double_2 / double_3;
	if(1)
	{
		return int_1;
	}
	double_2 = sqrt ( double_3 ) ;
	if(1)
	{
		return int_2;
	}
	return int_3;
}
void bmfs_table_entry_copy( float parameter_1,float parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	short short_1 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double_1 = ldexp ( double_2 , int_1 ) ;
	short_1 = short_1 + short_1;
	double_1 = atan2 ( double_3 , double_2 ) ;
	double_4 = sinh ( double_4 ) ;
}
int bmfs_table_push( short parameter_1,float parameter_2)
{
	char char_1 = 0;
	char char_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	int int_1 = 0;
	long long_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_2 = 0;
	char_1 = char_1 / char_2;
	bmfs_table_entry_copy(float_1,float_1);

	float_2 = float_2;
	bmfs_table_end(int_1);

	int_1 = bmfs_table_save(long_1);

	unsigned_int_1 = unsigned_int_2;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "${}f") > 0)
	{
		return int_1;
	}
	int_2 = int_1 - int_2;
	return int_2;
}
long bmfs_table_entry_is_deleted()
{
	long long_1 = 0;
	long long_2 = 0;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, ")KWC") > 0)
	{
		return long_1;
	}
	return long_2;
}
void bmfs_encode_uint32( unsigned int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double_1 = atan2 ( double_2 , double_2 ) ;
	double_2 = ceil ( double_2 ) ;
	double_2 = tan ( double_1 ) ;
	long_1 = long_2;
	double_1 = floor ( double_1 ) ;
}
void bmfs_encode_uint64( unsigned int parameter_1)
{
	double double_1 = 0;
	int int_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double_1 = double_1 + double_1;
	int_1 = int_1;
	short_1 = short_2;
	double_2 = double_2;
	double_2 = cos ( double_1 ) ;
	double_2 = cosh ( double_1 ) ;
	double_2 = pow ( double_2 , double_2 ) ;
	double_1 = fmod ( double_3 , double_2 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
float bmfs_table_entry_checksum( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	char char_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_2 = 0;
	float float_1 = 0;
	double_1 = exp ( double_2 ) ;
	double_2 = double_1;
	short_1 = bmfs_crc32(char_1,char_1,double_2);

	double_2 = cos ( double_1 ) ;
	bmfs_encode_uint64(unsigned_int_1);

	unsigned_int_2 = unsigned_int_1;
	short_2 = short_1 * short_2;
	return float_1;
	bmfs_encode_uint32(unsigned_int_2);

}
int bmfs_table_entry_read( char parameter_1,float parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	short short_1 = 0;
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_3 = 0;
	double double_4 = 0;
	char char_1 = 0;
	int int_4 = 0;
	char char_2 = 0;
	int int_5 = 0;
	long long_1 = 0;
	int_1 = int_2;
	unsigned_int_1 = bmfs_decode_uint32(short_1);

	float_1 = bmfs_table_entry_checksum(int_2);

	double_1 = log10 ( double_2 ) ;
	double_1 = sinh ( double_3 ) ;
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_2;
	}
	double_4 = double_4;
	char_1 = bmfs_decode_uint64(int_4);

	double_3 = atan ( double_2 ) ;
	int_3 = int_3;
	char_2 = char_2 + char_2;
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "i") < 0)
	{
		return int_3;
	}
	return int_1;
	int_5 = bmfs_disk_read(double_3,long_1,double_3);

}
float prev_entry( char parameter_1)
{
	float float_1 = 0;
	double double_1 = 0;
	int int_1 = 0;
	char char_1 = 0;
	float float_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_2 = 0;
	float float_3 = 0;
	int int_2 = 0;
	if(1)
	{
		return float_1;
	}
	double_1 = atan ( double_1 ) ;
	int_1 = bmfs_table_entry_read(char_1,float_2);

	long_1 = long_2;
	double_1 = tanh ( double_1 ) ;
	double_1 = cos ( double_1 ) ;
	double_1 = double_2;
	if(1)
	{
		return float_3;
	}
	int_2 = int_1 + int_1;
	char controller_3[3];
	scanf("%3s", controller_3);
	if( strcmp( controller_3, "qI~") < 0)
	{
		return float_1;
	}
	return float_1;
	int_2 = bmfs_disk_seek(long_2,double_2,int_2);

}
int bmfs_table_previous()
{
	long long_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	float float_1 = 0;
	char char_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	for(int looper_1=0; looper_1<4;looper_1++)
	{
		long long_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		float float_1 = 0;
		char char_1 = 0;
		long long_2 = 0;
		long long_3 = 0;
		long_1 = bmfs_table_entry_is_deleted();

		long_2 = long_3;
		char controller_1[2];
		scanf("%2s", controller_1);
		if( strcmp( controller_1, "zC") < 0)
		{
			return int_1;
		}
		char controller_2[1];
		scanf("%1s", controller_2);
		if( strcmp( controller_2, "3") < 0)
		{
			return int_2;
		}
	}
	return int_2;
	float_1 = prev_entry(char_1);

}
void bmfs_table_hide_deleted()
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = log10 ( double_2 ) ;
}
void bmfs_table_end( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = cos ( double_2 ) ;
}
int get_block_size( unsigned int parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	if(1)
	{
		return int_1;
	}
	else
	{
		return int_2;
	}
}
float to_block_size( float parameter_1,double parameter_2)
{
	double double_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_2 = 0;
	float float_1 = 0;
	double_1 = asin ( double_1 ) ;
	int_1 = get_block_size(unsigned_int_1);

	int_1 = int_2;
	return float_1;
}
int bmfs_table_alloc( long parameter_1,long parameter_2,char parameter_3)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	int int_3 = 0;
	short short_1 = 0;
	float float_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_3 = 0;
	int int_4 = 0;
	float float_2 = 0;
	double double_4 = 0;
	int int_5 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_5 = 0;
	double double_6 = 0;
	if(1)
	{
		return int_1;
	}
	double_1 = floor ( double_2 ) ;
	int_3 = int_1 - int_2;
	int_1 = bmfs_table_push(short_1,float_1);

	char_1 = char_2;
	double_3 = ldexp ( double_3 , int_2 ) ;
	bmfs_table_entry_init(int_1);

	double_3 = ceil ( double_2 ) ;
	bmfs_table_end(int_4);

	float_2 = float_2 / float_2;
	float_1 = to_block_size(float_2,double_3);

	double_1 = atan2 ( double_4 , double_3 ) ;
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_2 = 0;
		int int_3 = 0;
		short short_1 = 0;
		float float_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		double double_3 = 0;
		int int_4 = 0;
		float float_2 = 0;
		double double_4 = 0;
		int int_5 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		double double_6 = 0;
		double_5 = tanh ( double_6 ) ;
	}
	if(1)
	{
		return int_1;
	}
	int_5 = bmfs_table_previous();

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		return int_4;
	}
	bmfs_table_hide_deleted();

	double_2 = sinh ( double_1 ) ;
	return int_4;
}
int bmfs_allocate( long parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	int int_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	char char_1 = 0;
	return int_1;
	int_1 = bmfs_table_alloc(long_1,long_2,char_1);

}
void bmfs_entry_set_type( char parameter_1,short parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double_1 = tanh ( double_1 ) ;
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double_2 = log ( double_1 ) ;
		double_1 = log ( double_3 ) ;
	}
}
void bmfs_entry_init( double parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	for(int looper_1=0; looper_1<5;looper_1++)
	{
		double_1 = floor ( double_1 ) ;
	}
	double_2 = sinh ( double_2 ) ;
	char_1 = char_1 / char_1;
	double_3 = atan ( double_2 ) ;
	double_3 = asin ( double_1 ) ;
	double_3 = cos ( double_3 ) ;
	double_2 = double_1;
	unsigned_int_2 = unsigned_int_1 / unsigned_int_1;
	double_3 = log10 ( double_1 ) ;
	double_2 = tanh ( double_3 ) ;
}
void bmfs_table_set_max_offset( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = log ( double_2 ) ;
}
void bmfs_table_set_min_offset( short parameter_1,short parameter_2)
{
	int int_1 = 0;
	int int_2 = 0;
	int_2 = int_1 - int_1;
}
void bmfs_table_set_offset( long parameter_1,short parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = tanh ( double_2 ) ;
}
int bmfs_format( char parameter_1,long parameter_2)
{
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	short short_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_3 = 0;
	short short_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_5 = 0;
	double double_5 = 0;
	int int_3 = 0;
	float float_1 = 0;
	int int_4 = 0;
	int int_5 = 0;
	char char_3 = 0;
	long_3 = long_1 - long_2;
	unsigned_int_2 = unsigned_int_1 - unsigned_int_1;
	bmfs_table_set_min_offset(short_1,short_1);

	char_1 = char_2;
	int_1 = bmfs_table_save_all(long_3);

	int_1 = bmfs_header_write(unsigned_int_3,short_2);

	double_2 = double_1 * double_2;
	int_1 = bmfs_disk_seek(long_2,double_2,int_2);

	int_1 = bmfs_entry_write(unsigned_int_3,int_2);

	double_3 = log10 ( double_1 ) ;
	bmfs_table_set_offset(long_3,short_2);

	int_1 = int_2 + int_1;
	int_2 = bmfs_allocate(long_3,unsigned_int_2,unsigned_int_3);

	double_3 = log10 ( double_1 ) ;
	unsigned_int_4 = unsigned_int_2 / unsigned_int_4;
	double_2 = atan ( double_2 ) ;
	double_2 = sqrt ( double_4 ) ;
	unsigned_int_5 = unsigned_int_4 - unsigned_int_3;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "M") < 0)
	{
		return int_2;
	}
	double_1 = ldexp ( double_5 , int_3 ) ;
	char controller_2[5];
	scanf("%5s", controller_2);
	if( strcmp( controller_2, "/1x]&") < 0)
	{
		return int_3;
	}
	double_5 = double_4;
	char controller_3[2];
	scanf("%2s", controller_3);
	if( strcmp( controller_3, "TK") < 0)
	{
		return int_1;
	}
	float_1 = float_1 * float_1;
	if(1)
	{
		return int_4;
	}
	bmfs_table_set_max_offset(unsigned_int_3,int_3);

	double_5 = atan2 ( double_1 , double_2 ) ;
	bmfs_entry_init(double_1);

	double_3 = cosh ( double_4 ) ;
	double_2 = atan ( double_1 ) ;
	char controller_5[4];
	scanf("%4s", controller_5);
	if( strcmp( controller_5, "}hBf") > 0)
	{
		return int_1;
	}
	double_1 = double_3 / double_4;
	if(1)
	{
		return int_3;
	}
	return int_5;
	bmfs_entry_set_type(char_3,short_2);

}
void bmfs_table_set_block_size( unsigned int parameter_1,float parameter_2)
{
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double_1 = sinh ( double_2 ) ;
	}
}
void bmfs_set_block_size( char parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 0;
	float float_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	float float_2 = 0;
	float float_3 = 0;
	if(1)
	{
		unsigned int unsigned_int_1 = 0;
		float float_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		float float_2 = 0;
		float float_3 = 0;
		bmfs_table_set_block_size(unsigned_int_1,float_1);

		char_3 = char_1 / char_2;
		float_1 = float_2 - float_3;
	}
}
int bmfs_disk_write( short parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4)
{
	int int_1 = 0;
	if(1)
	{
		return int_1;
	}
	return int_1;
}
short bmfs_crc32( char parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	short short_1 = 0;
	double double_3 = 0;
	double_1 = log10 ( double_2 ) ;
	int_1 = int_1;
	int looper_1 = 0;
	while(looper_1 < 10)
	{
		double double_1 = 0;
		double double_2 = 0;
		int int_1 = 0;
		short short_1 = 0;
		double double_3 = 0;
		looper_1 += 1;
		double_2 = atan ( double_3 ) ;
	}
	return short_1;
}
unsigned int bmfs_decode_uint32( short parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	double_1 = fmod ( double_2 , double_1 ) ;
	double_2 = sinh ( double_2 ) ;
	double_2 = atan ( double_2 ) ;
	double_1 = exp ( double_1 ) ;
	double_1 = sinh ( double_1 ) ;
	double_3 = log10 ( double_1 ) ;
	return unsigned_int_1;
}
char bmfs_decode_uint64( int parameter_1)
{
	double double_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	long long_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	double_1 = atan ( double_1 ) ;
	char_3 = char_1 / char_2;
	long_1 = long_1;
	double_1 = ceil ( double_1 ) ;
	double_1 = cosh ( double_2 ) ;
	double_3 = atan ( double_3 ) ;
	double_2 = sqrt ( double_2 ) ;
	double_3 = fabs ( double_3 ) ;
	double_3 = fmod ( double_1 , double_3 ) ;
	double_3 = ldexp ( double_2 , int_1 ) ;
	return char_1;
}
int bmfs_disk_read( double parameter_1,long parameter_3,double parameter_4)
{
	int int_1 = 0;
	int int_2 = 0;
	if(1)
	{
		return int_1;
	}
	return int_2;
}
int bmfs_header_read( long parameter_1,double parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	int int_1 = 0;
	int int_2 = 0;
	long long_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	long long_2 = 0;
	float float_1 = 0;
	long long_3 = 0;
	short short_1 = 0;
	char char_1 = 0;
	double double_6 = 0;
	int int_3 = 0;
	int int_4 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_7 = 0;
	int int_5 = 0;
	double_1 = acos ( double_1 ) ;
	double_2 = log10 ( double_1 ) ;
	double_1 = double_3;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_2;
	}
	long_1 = long_1;
	double_2 = double_4;
	double_4 = exp ( double_1 ) ;
	int_1 = bmfs_disk_read(double_5,long_2,double_1);

	float_1 = float_1;
	long_2 = long_3 + long_3;
	double_4 = double_2;
	short_1 = bmfs_crc32(char_1,char_1,double_6);

	int_3 = int_2 + int_1;
	double_5 = tanh ( double_3 ) ;
	int_4 = int_1 / int_2;
	double_3 = ceil ( double_2 ) ;
	double_6 = atan2 ( double_1 , double_2 ) ;
	char_2 = bmfs_decode_uint64(int_4);

	double_5 = pow ( double_6 , double_5 ) ;
	double_3 = tanh ( double_3 ) ;
	unsigned_int_1 = bmfs_decode_uint32(short_1);

	double_1 = pow ( double_4 , double_5 ) ;
	double_3 = tanh ( double_3 ) ;
	double_6 = double_4 - double_2;
	double_5 = double_1;
	double_5 = pow ( double_4 , double_4 ) ;
	double_5 = log10 ( double_5 ) ;
	double_3 = floor ( double_7 ) ;
	char controller_3[1];
	scanf("%1s", controller_3);
	if( strcmp( controller_3, "p") < 0)
	{
		return int_5;
	}
	return int_4;
}
int bmfs_disk_seek( long parameter_1,double parameter_2,int parameter_3)
{
	int int_1 = 0;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "C") > 0)
	{
		return int_1;
	}
	return int_1;
}
int bmfs_check_signature( unsigned int parameter_1)
{
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	long long_1 = 0;
	double double_1 = 0;
	long long_2 = 0;
	double double_2 = 0;
	int int_2 = 0;
	long long_3 = 0;
	long long_4 = 0;
	int int_3 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "L*gYq") > 0)
	{
		return int_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		return int_1;
	}
	int_1 = bmfs_header_read(long_1,double_1);

	long_2 = long_2;
	double_1 = tanh ( double_2 ) ;
	int_2 = bmfs_disk_seek(long_3,double_1,int_2);

	long_4 = long_3 / long_3;
	char controller_3[5];
	scanf("%5s", controller_3);
	if( strcmp( controller_3, "b>V[=") < 0)
	{
		return int_2;
	}
	if(1)
	{
		return int_1;
	}
	return int_3;
	bmfs_header_init();

}
long cmd_format( long parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 0;
	char char_1 = 0;
	long long_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_4 = 0;
	char char_2 = 0;
	long long_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_3 = 0;
	long long_5 = 0;
	long long_6 = 0;
	long long_7 = 0;
	int int_3 = 0;
	short short_1 = 0;
	unsigned int unsigned_int_3 = 0;
	char char_4 = 0;
	unsigned int unsigned_int_4 = 0;
	short short_2 = 0;
	short short_3 = 0;
	double double_7 = 0;
	double double_8 = 0;
	float float_1 = 0;
	long long_9 = 0;
	long long_10 = 0;
	long long_8 = 0;
	int_1 = bmfs_size_parse(char_1,int_1);

	long_1 = long_1 / long_1;
	int_2 = bmfs_disk_seek(long_1,double_1,int_1);

	double_1 = double_1;
	double_2 = ceil ( double_2 ) ;
	double_2 = cos ( double_1 ) ;
	if(1)
	{
		int_1 = bmfs_check_signature(unsigned_int_1);

		double_1 = double_2 + double_3;
		return long_2;
	}
	if(1)
	{
		double_1 = double_3 * double_3;
		return long_3;
	}
	int looper_1 = 0;
	while(looper_1 < 8)
	{
		looper_1 += 1;
		if(1)
		{
			double_1 = sqrt ( double_4 ) ;
		}
		if(1)
		{
			if(1)
			{
				int_1 = bmfs_format(char_2,long_2);

				double_1 = cosh ( double_1 ) ;
				return long_1;
			}
			if(1)
			{
				double_3 = sqrt ( double_3 ) ;
				return long_4;
			}
			int_2 = int_2 / int_2;
		}
		if(1)
		{
			if(1)
			{
				double_5 = double_5 - double_6;
				return long_2;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2;
				return long_3;
			}
			double_3 = floor ( double_5 ) ;
		}
		if(1)
		{
			char_3 = char_1 * char_1;
		}
		else
		{
			double_3 = floor ( double_4 ) ;
			return long_5;
		}
		long_6 = long_7;
	}
	int_3 = bmfs_disk_write(short_1,unsigned_int_3,int_2,unsigned_int_2);

	double_6 = ldexp ( double_2 , int_2 ) ;
	if(1)
	{
		double_1 = tan ( double_4 ) ;
		return long_4;
	}
	if(1)
	{
		char_4 = is_opt(unsigned_int_4,char_1,short_2);

		short_3 = short_3 + short_2;
		return long_6;
	}
	bmfs_set_block_size(char_2,short_3);

	double_6 = log ( double_2 ) ;
	char controller_13[3];
	scanf("%3s", controller_13);
	if( strcmp( controller_13, "]w&") < 0)
	{
		double_6 = atan ( double_7 ) ;
		return long_7;
	}
	if(1)
	{
		double_2 = fmod ( double_7 , double_5 ) ;
		return long_1;
	}
	if(1)
	{
		double_6 = floor ( double_8 ) ;
		return long_7;
	}
	double_5 = log10 ( double_3 ) ;
	if(1)
	{
		int int_1 = 0;
		char char_1 = 0;
		long long_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		long long_2 = 0;
		long long_3 = 0;
		double double_4 = 0;
		char char_2 = 0;
		long long_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		unsigned int unsigned_int_2 = 0;
		char char_3 = 0;
		long long_5 = 0;
		long long_6 = 0;
		long long_7 = 0;
		int int_3 = 0;
		short short_1 = 0;
		unsigned int unsigned_int_3 = 0;
		char char_4 = 0;
		unsigned int unsigned_int_4 = 0;
		short short_2 = 0;
		short short_3 = 0;
		double double_7 = 0;
		double double_8 = 0;
		float float_1 = 0;
		long long_9 = 0;
		long long_10 = 0;
		long long_8 = 0;
		long_3 = long_8;
		double_6 = tan ( double_8 ) ;
		return long_3;
	}
	double_6 = double_2;
	if(1)
	{
		return long_5;
	}
	float_1 = float_1;
	char controller_18[1];
	scanf("%1s", controller_18);
	if( strcmp( controller_18, "n") < 0)
	{
		return long_9;
	}
	int_1 = bmfs_size_bytes(char_3,float_1);

	double_4 = cosh ( double_3 ) ;
	double_2 = acos ( double_1 ) ;
	if(1)
	{
		return long_10;
	}
	return long_1;
}
void bmfs_table_set_disk( double parameter_1,short parameter_2)
{
	if(1)
	{
		double double_1 = 0;
		double_1 = fabs ( double_1 ) ;
	}
}
void bmfs_set_disk( char parameter_1,float parameter_2)
{
	double double_1 = 0;
	short short_1 = 0;
	double double_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	if(1)
	{
		double double_1 = 0;
		short short_1 = 0;
		double double_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		bmfs_table_set_disk(double_1,short_1);

		double_2 = log ( double_1 ) ;
		char_3 = char_1 - char_2;
	}
}
void bmfs_table_set_host( long parameter_1,int parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	char controller_1[5];
	scanf("%5s", controller_1);
	if( strcmp( controller_1, "I(b@v") == 0)
	{
		double double_1 = 0;
		double double_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_3 = 0;
		long long_1 = 0;
		long_1 = long_1 - long_1;
	}
	double_1 = double_1 / double_2;
	bmfs_host_done(float_1,float_2);

	double_3 = exp ( double_1 ) ;
}
void bmfs_host_done( float parameter_1,float parameter_2)
{
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "7") < 0)
	{
	}
}
void bmfs_set_host( char parameter_1,long parameter_2)
{
	long long_1 = 0;
	int int_1 = 0;
	float float_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_1 = 0;
	char controller_1[1];
	scanf("%1s", controller_1);
	if( strcmp( controller_1, "~") < 0)
	{
		long long_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_1 = 0;
		bmfs_table_set_host(long_1,int_1);

		double_1 = floor ( double_1 ) ;
	}
	bmfs_host_done(float_1,float_1);

	double_2 = ldexp ( double_3 , int_1 ) ;
	double_3 = pow ( double_3 , double_4 ) ;
	double_5 = floor ( double_4 ) ;
}
void bmfs_table_entry_init( int parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double_1 = double_2;
	double_3 = double_3 + double_1;
	double_3 = asin ( double_3 ) ;
	double_4 = sqrt ( double_1 ) ;
}
void bmfs_table_init( short parameter_1)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	long long_1 = 0;
	long long_2 = 0;
	int int_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double_1 = tanh ( double_2 ) ;
	bmfs_table_entry_init(int_1);

	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 / unsigned_int_2;
	long_1 = long_1 / long_2;
	unsigned_int_3 = unsigned_int_3 / unsigned_int_1;
	int_2 = int_2;
	double_2 = fabs ( double_3 ) ;
	char_2 = char_1 * char_2;
	double_1 = log ( double_3 ) ;
	double_3 = log ( double_2 ) ;
}
void bmfs_header_init()
{
	double double_1 = 0;
	int int_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_4 = 0;
	long long_1 = 0;
	long long_2 = 0;
	long long_3 = 0;
	double double_5 = 0;
	double double_6 = 0;
	int int_2 = 0;
	double double_7 = 0;
	double double_8 = 0;
	double double_9 = 0;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_1 = atan ( double_2 ) ;
	double_3 = sqrt ( double_3 ) ;
	char_1 = char_2;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_4;
	long_1 = long_2;
	long_1 = long_1;
	long_3 = long_3;
	double_1 = tanh ( double_5 ) ;
	double_6 = double_2 * double_6;
	double_2 = atan ( double_1 ) ;
	double_6 = ldexp ( double_2 , int_2 ) ;
	double_3 = log10 ( double_1 ) ;
	double_8 = double_7 * double_2;
	double_4 = sqrt ( double_6 ) ;
	double_4 = fmod ( double_7 , double_9 ) ;
}
void bmfs_init()
{
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_4 = 0;
	double double_4 = 0;
	short short_1 = 0;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = atan ( double_2 ) ;
	double_1 = log ( double_3 ) ;
	bmfs_header_init();

	double_3 = pow ( double_3 , double_3 ) ;
	double_1 = floor ( double_1 ) ;
	unsigned_int_3 = unsigned_int_4;
	double_4 = double_4;
	bmfs_table_init(short_1);

}
void bmfs_filedisk_set_offset( short parameter_1,double parameter_2)
{
	long long_1 = 0;
	long long_2 = 0;
	long_1 = long_1 - long_2;
}
float bmfs_strerror( int parameter_1)
{
	float float_1 = 0;
	float float_2 = 0;
	float float_3 = 0;
	{
		return float_1;
		return float_1;
		return float_1;
		return float_2;
		return float_1;
		return float_1;
		return float_2;
		return float_2;
		return float_1;
		return float_1;
		return float_2;
		return float_2;
	}
	return float_3;
}
int bmfs_filedisk_open( float parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	int int_4 = 0;
	char char_1 = 0;
	short short_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	double_1 = double_2;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		int int_1 = 0;
		int int_4 = 0;
		char char_1 = 0;
		short short_1 = 0;
		int int_2 = 0;
		int int_3 = 0;
		int_4 = int_2 - int_3;
	}
	char_1 = to_bmfs_errno(int_4);

	short_1 = short_1;
	return int_4;
}
short bmfs_filedisk_write(int parameter_2,long parameter_3,float parameter_4)
{
	short short_1 = 0;
	double double_1 = 0;
	short short_2 = 0;
	double double_2 = 0;
	short short_3 = 0;
	if(1)
	{
		return short_1;
	}
	double_1 = floor ( double_1 ) ;
	char controller_2[1];
	scanf("%1s", controller_2);
	if( strcmp( controller_2, "_") > 0)
	{
		return short_2;
	}
	double_2 = tan ( double_1 ) ;
	if(1)
	{
		double_1 = asin ( double_2 ) ;
	}
	return short_3;
}
long bmfs_filedisk_read(char parameter_3,int parameter_4)
{
	long long_1 = 0;
	double double_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	if(1)
	{
		return long_1;
	}
	double_1 = exp ( double_1 ) ;
	char controller_2[1];
	scanf("%1s", controller_2);
	if( strcmp( controller_2, "X") > 0)
	{
		return long_1;
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long long_1 = 0;
		double double_1 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		int_1 = int_1 - int_2;
	}
	return long_1;
}
char bmfs_filedisk_tell(char parameter_2)
{
	char char_1 = 0;
	long long_1 = 0;
	char char_2 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	char char_3 = 0;
	char char_5 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_4 = 0;
	int int_2 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "NZW") < 0)
	{
		return char_1;
	}
	long_1 = long_1;
	if(1)
	{
		return char_2;
	}
	float_1 = float_2;
	if(1)
	{
		char char_1 = 0;
		long long_1 = 0;
		char char_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		char char_3 = 0;
		char char_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		char char_4 = 0;
		int int_2 = 0;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		return char_2;
	}
	double_1 = cos ( double_2 ) ;
	if(1)
	{
		return char_2;
	}
	else
	{
		char char_1 = 0;
		long long_1 = 0;
		char char_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		char char_3 = 0;
		char char_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		char char_4 = 0;
		int int_2 = 0;
		char_3 = char_4;
	}
	if(1)
	{
		return char_5;
	}
	unsigned_int_3 = unsigned_int_3;
	char controller_7[3];
	scanf("%3s", controller_7);
	if( strcmp( controller_7, "8XW") > 0)
	{
		char char_1 = 0;
		long long_1 = 0;
		char char_2 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		char char_3 = 0;
		char char_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		char char_4 = 0;
		int int_2 = 0;
		char_2 = to_bmfs_errno(int_1);

		int_1 = int_2;
	}
	return char_3;
}
char to_bmfs_errno( int parameter_1)
{
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	{
		return char_1;
		return char_2;
		return char_2;
		return char_1;
		return char_2;
		return char_1;
		return char_3;
		return char_1;
		return char_3;
		return char_3;
		return char_2;
	}
}
long bmfs_filedisk_seek(long parameter_2,int parameter_3)
{
	long long_1 = 0;
	double double_1 = 0;
	char char_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	long long_2 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_3 = 0;
	if(1)
	{
		return long_1;
	}
	double_1 = tanh ( double_1 ) ;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		long long_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		long long_2 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_3 = 0;
		double_2 = tanh ( double_1 ) ;
		char_1 = to_bmfs_errno(int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 0;
		double double_1 = 0;
		char char_1 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		long long_2 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned_int_2 = unsigned_int_3 - unsigned_int_1;
	}
	else
	{
		return long_1;
	}
	if(1)
	{
		if(1)
		{
			return long_1;
		}
	}
	if(1)
	{
		return long_2;
	}
	else
	{
		if(1)
		{
			return long_2;
		}
	}
	return long_1;
}
void bmfs_disk_init( unsigned int parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int_1 = int_2;
	double_1 = log10 ( double_1 ) ;
	double_1 = floor ( double_1 ) ;
	double_2 = atan ( double_2 ) ;
	double_1 = double_1 / double_1;
}
void bmfs_filedisk_init( double parameter_1)
{
	short short_1 = 0;
	int int_1 = 0;
	long long_1 = 0;
	float float_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	short short_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	int int_2 = 0;
	long long_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	long long_3 = 0;
	int int_3 = 0;
	short_1 = bmfs_filedisk_write(int_1,long_1,float_1);

	double_1 = pow ( double_2 , double_1 ) ;
	short_2 = short_2;
	char_1 = bmfs_filedisk_tell(char_2);

	int_2 = int_1 / int_1;
	double_1 = double_1;
	double_2 = double_2 - double_1;
	double_2 = exp ( double_2 ) ;
	long_2 = bmfs_filedisk_read(char_1,int_2);

	double_1 = ceil ( double_3 ) ;
	bmfs_disk_init(unsigned_int_1);

	double_2 = atan ( double_2 ) ;
	long_3 = bmfs_filedisk_seek(long_3,int_3);

}
char file_exists( unsigned int parameter_1)
{
	double double_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double_1 = fabs ( double_1 ) ;
	if(1)
	{
		return char_1;
	}
	else
	{
		double double_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char_1 = char_2;
		return char_1;
	}
}
double print_version()
{
	double double_1 = 0;
	double double_2 = 0;
	double_1 = double_2;
}
unsigned int print_usage( unsigned int parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	float float_1 = 0;
	long long_1 = 0;
	long long_2 = 0;
	short short_1 = 0;
	double double_4 = 0;
	float float_2 = 0;
	float float_3 = 0;
	long long_3 = 0;
	long long_4 = 0;
	int int_3 = 0;
	int int_4 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_5 = 0;
	short short_2 = 0;
	int_1 = int_2;
	double_1 = atan2 ( double_2 , double_3 ) ;
	float_1 = float_1;
	long_2 = long_1 - long_2;
	short_1 = short_1;
	double_3 = atan2 ( double_4 , double_1 ) ;
	double_3 = double_1;
	double_3 = asin ( double_3 ) ;
	float_3 = float_2 + float_1;
	double_2 = sinh ( double_1 ) ;
	long_4 = long_3 * long_3;
	double_1 = ceil ( double_1 ) ;
	double_4 = double_3;
	int_3 = int_3 - int_4;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_3;
	double_5 = log ( double_4 ) ;
	short_2 = short_1 / short_2;
	double_2 = acos ( double_4 ) ;
	double_2 = cos ( double_4 ) ;
	int_3 = int_3;
	double_2 = asin ( double_1 ) ;
	double_2 = atan2 ( double_1 , double_4 ) ;
	double_3 = cos ( double_3 ) ;
}
long print_help( char parameter_1,int parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 0;
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_4 = 0;
	int int_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_3 = 0;
	unsigned int unsigned_int_5 = 0;
	short short_1 = 0;
	double double_7 = 0;
	short short_2 = 0;
	int int_1 = 0;
	short short_3 = 0;
	int int_3 = 0;
	double double_8 = 0;
	short short_4 = 0;
	double double_9 = 0;
	float float_1 = 0;
	unsigned int unsigned_int_6 = 0;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		return long_1;
	}
	double_1 = asin ( double_2 ) ;
	{
		unsigned int unsigned_int_1 = 0;
		long long_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_4 = 0;
		int int_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		unsigned int unsigned_int_3 = 0;
		unsigned int unsigned_int_5 = 0;
		short short_1 = 0;
		double double_7 = 0;
		short short_2 = 0;
		int int_1 = 0;
		short short_3 = 0;
		int int_3 = 0;
		double double_8 = 0;
		short short_4 = 0;
		double double_9 = 0;
		float float_1 = 0;
		unsigned int unsigned_int_6 = 0;
		double_3 = acos ( double_2 ) ;
		double_3 = log ( double_4 ) ;
		double_1 = atan ( double_2 ) ;
		double_1 = log10 ( double_2 ) ;
		unsigned_int_2 = print_usage(unsigned_int_1);

		double_3 = pow ( double_5 , double_3 ) ;
		double_6 = asin ( double_1 ) ;
		double_6 = log ( double_2 ) ;
		unsigned_int_2 = unsigned_int_2 / unsigned_int_3;
		unsigned_int_5 = unsigned_int_4 - unsigned_int_3;
		short_1 = short_1 - short_1;
		double_4 = atan2 ( double_7 , double_7 ) ;
		double_6 = double_7 + double_5;
		short_2 = short_2;
		int_2 = int_1 + int_1;
		short_1 = short_3 * short_1;
		int_2 = command_parse(unsigned_int_4);

		int_2 = int_3;
		double_8 = log10 ( double_1 ) ;
		double_3 = fabs ( double_6 ) ;
		double_3 = log10 ( double_4 ) ;
		short_4 = short_4 - short_4;
		short_3 = short_1 - short_1;
		double_9 = acos ( double_4 ) ;
		double_1 = double_3 + double_3;
		int_3 = int_2 - int_2;
		double_7 = pow ( double_8 , double_1 ) ;
		float_1 = float_1;
		double_8 = sqrt ( double_5 ) ;
		unsigned_int_5 = unsigned_int_6 - unsigned_int_3;
	}
}
int command_parse( unsigned int parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	int int_3 = 0;
	int int_4 = 0;
	int int_5 = 0;
	int int_6 = 0;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_4;
	}
	char controller_6[3];
	scanf("%3s", controller_6);
	if( strcmp( controller_6, "w7L") < 0)
	{
		return int_4;
	}
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_3;
	}
	if(1)
	{
		return int_5;
	}
	if(1)
	{
		return int_4;
	}
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_6;
	}
	if(1)
	{
		return int_5;
	}
	return int_2;
}
int bmfs_size_bytes( char parameter_1,float parameter_2)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	int int_2 = 0;
	double double_5 = 0;
	short short_1 = 0;
	short short_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		double_1 = acos ( double_2 ) ;
	}
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		int int_2 = 0;
		double double_5 = 0;
		short short_1 = 0;
		short short_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		double_3 = ldexp ( double_3 , int_2 ) ;
	}
	if(1)
	{
		double_4 = sinh ( double_2 ) ;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double_2 = acos ( double_1 ) ;
	}
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		int int_2 = 0;
		double double_5 = 0;
		short short_1 = 0;
		short short_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		double_4 = sinh ( double_5 ) ;
	}
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		int int_2 = 0;
		double double_5 = 0;
		short short_1 = 0;
		short short_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 / unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		int int_2 = 0;
		double double_5 = 0;
		short short_1 = 0;
		short short_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		char_3 = char_1 + char_2;
	}
	return int_1;
}
void to_type( char parameter_1,float parameter_2)
{
	int int_3 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_4 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_5 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_4 = 0;
	short short_1 = 0;
	short short_2 = 0;
	short short_3 = 0;
	if(1)
	{
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		int_3 = int_1 * int_2;
	}
	if(1)
	{
		int_3 = int_3;
	}
	if(1)
	{
		double_1 = fmod ( double_2 , double_2 ) ;
	}
	if(1)
	{
		double_1 = atan2 ( double_1 , double_3 ) ;
	}
	if(1)
	{
		double_2 = double_2 * double_1;
	}
	if(1)
	{
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		double_1 = double_4;
	}
	if(1)
	{
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double_2 = fabs ( double_1 ) ;
	}
	if(1)
	{
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		double_5 = atan ( double_2 ) ;
	}
	if(1)
	{
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		int_4 = int_3;
	}
	if(1)
	{
		int int_3 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_4 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_4 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		double_2 = cos ( double_3 ) ;
	}
	if(1)
	{
		double_3 = exp ( double_2 ) ;
	}
}
int bmfs_size_parse( char parameter_1,int parameter_2)
{
	int int_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	float float_1 = 0;
	short short_1 = 0;
	short short_2 = 0;
	short short_3 = 0;
	int int_2 = 0;
	double double_4 = 0;
	int int_3 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	char char_2 = 0;
	char controller_1[3];
	scanf("%3s", controller_1);
	if( strcmp( controller_1, "t(T") < 0)
	{
		return int_1;
	}
	double_1 = tan ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 4)
	{
		int int_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		float float_1 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short short_3 = 0;
		int int_2 = 0;
		double double_4 = 0;
		int int_3 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		char char_2 = 0;
		looper_1 += 1;
		double_3 = ldexp ( double_2 , int_1 ) ;
		char controller_2[5];
		scanf("%5s", controller_2);
		if( strcmp( controller_2, "8Zy1l") > 0)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		to_type(char_1,float_1);

		char_2 = char_1 * char_1;
		short_2 = short_1 + short_2;
	}
	short_2 = short_1 * short_3;
	char controller_3[5];
	scanf("%5s", controller_3);
	if( strcmp( controller_3, "&NI>T") < 0)
	{
		return int_2;
	}
	double_4 = atan2 ( double_3 , double_4 ) ;
	return int_3;
}
char is_opt( unsigned int parameter_1,char parameter_2,short parameter_3)
{
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	char char_4 = 0;
	char controller_1[4];
	scanf("%4s", controller_1);
	if( strcmp( controller_1, "NR,r") > 0)
	{
		return char_1;
	}
	char controller_2[5];
	scanf("%5s", controller_2);
	if( strcmp( controller_2, "uq;Pl") > 0)
	{
		return char_2;
	}
	if(1)
	{
		return char_3;
	}
	return char_4;
}
int main(int argc, const char **argv)
{
	int uni_para =232;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	float float_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	double double_6 = 0;
	long long_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_2 = 0;
	int int_3 = 0;
	float float_2 = 0;
	double double_7 = 0;
	unsigned int unsigned_int_3 = 0;
	double double_8 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double double_9 = 0;
	float float_3 = 0;
	float float_4 = 0;
	int int_4 = 0;
	unsigned int unsigned_int_4 = 0;
	int int_5 = 0;
	char char_3 = 0;
	char char_4 = 0;
	double double_10 = 0;
	int int_6 = 0;
	long long_2 = 0;
	long long_3 = 0;
	long long_4 = 0;
	unsigned int unsigned_int_5 = 0;
	double double_11 = 0;
	double double_12 = 0;
	double double_13 = 0;
	unsigned int unsigned_int_6 = 0;
	double double_14 = 0;
	double_1 = atan ( double_1 ) ;
	double_2 = double_3;
	char_1 = char_1 - char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		char controller4vul_1[4];
		scanf("%4s", controller4vul_1);
		if( strcmp( controller4vul_1, "}$XS") < 0)
		{
			char controller4vul_2[4];
			scanf("%4s", controller4vul_2);
			if( strcmp( controller4vul_2, "TAGB") < 0)
			{
				double_2 = cmd_ls(unsigned_int_1,int_1,float_1,uni_para);

				double_1 = ceil ( double_4 ) ;
				return int_1;
			}
			double_5 = atan2 ( double_1 , double_1 ) ;
		}
		if(1)
		{
			if(1)
			{
				double_4 = ceil ( double_4 ) ;
				return int_1;
			}
			double_5 = sqrt ( double_5 ) ;
		}
		else
		{
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			char char_1 = 0;
			char char_2 = 0;
			unsigned int unsigned_int_1 = 0;
			int int_1 = 0;
			float float_1 = 0;
			double double_4 = 0;
			double double_5 = 0;
			double double_6 = 0;
			long long_1 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			float float_2 = 0;
			double double_7 = 0;
			unsigned int unsigned_int_3 = 0;
			double double_8 = 0;
			short short_1 = 0;
			short short_2 = 0;
			double double_9 = 0;
			float float_3 = 0;
			float float_4 = 0;
			int int_4 = 0;
			unsigned int unsigned_int_4 = 0;
			int int_5 = 0;
			char char_3 = 0;
			char char_4 = 0;
			double double_10 = 0;
			int int_6 = 0;
			long long_2 = 0;
			long long_3 = 0;
			long long_4 = 0;
			unsigned int unsigned_int_5 = 0;
			double double_11 = 0;
			double double_12 = 0;
			double double_13 = 0;
			unsigned int unsigned_int_6 = 0;
			double double_14 = 0;
			double_5 = pow ( double_2 , double_6 ) ;
			long_1 = long_2;
			return int_2;
		}
	}
	double_1 = cosh ( double_6 ) ;
	if(1)
	{
		double_2 = exp ( double_4 ) ;
		return int_2;
	}
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		double_5 = sinh ( double_6 ) ;
		return int_3;
	}
	float_2 = float_2;
	{
		double_4 = ldexp ( double_7 , int_1 ) ;
		unsigned_int_1 = unsigned_int_2;
		return int_1;
		unsigned_int_3 = unsigned_int_1;
		return int_1;
		return int_2;
		return int_2;
	}
	double_6 = atan2 ( double_8 , double_2 ) ;
	short_2 = short_1 + short_2;
	if(1)
	{
		double_9 = atan ( double_2 ) ;
	}
	double_7 = ceil ( double_6 ) ;
	double_2 = sqrt ( double_1 ) ;
	int_3 = int_1 / int_3;
	if(1)
	{
		double_2 = floor ( double_2 ) ;
		float_3 = float_1;
		return int_2;
	}
	int_2 = int_3 / int_2;
	double_5 = atan2 ( double_9 , double_4 ) ;
	float_3 = float_4 / float_2;
	int_3 = int_3 - int_3;
	int_4 = int_2 + int_2;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		long long_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		float float_2 = 0;
		double double_7 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_8 = 0;
		short short_1 = 0;
		short short_2 = 0;
		double double_9 = 0;
		float float_3 = 0;
		float float_4 = 0;
		int int_4 = 0;
		unsigned int unsigned_int_4 = 0;
		int int_5 = 0;
		char char_3 = 0;
		char char_4 = 0;
		double double_10 = 0;
		int int_6 = 0;
		long long_2 = 0;
		long long_3 = 0;
		long long_4 = 0;
		unsigned int unsigned_int_5 = 0;
		double double_11 = 0;
		double double_12 = 0;
		double double_13 = 0;
		unsigned int unsigned_int_6 = 0;
		double double_14 = 0;
		int_4 = int_1;
		if(1)
		{
			double double_1 = 0;
			double double_2 = 0;
			double double_3 = 0;
			char char_1 = 0;
			char char_2 = 0;
			unsigned int unsigned_int_1 = 0;
			int int_1 = 0;
			float float_1 = 0;
			double double_4 = 0;
			double double_5 = 0;
			double double_6 = 0;
			long long_1 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_2 = 0;
			int int_3 = 0;
			float float_2 = 0;
			double double_7 = 0;
			unsigned int unsigned_int_3 = 0;
			double double_8 = 0;
			short short_1 = 0;
			short short_2 = 0;
			double double_9 = 0;
			float float_3 = 0;
			float float_4 = 0;
			int int_4 = 0;
			unsigned int unsigned_int_4 = 0;
			int int_5 = 0;
			char char_3 = 0;
			char char_4 = 0;
			double double_10 = 0;
			int int_6 = 0;
			long long_2 = 0;
			long long_3 = 0;
			long long_4 = 0;
			unsigned int unsigned_int_5 = 0;
			double double_11 = 0;
			double double_12 = 0;
			double double_13 = 0;
			unsigned int unsigned_int_6 = 0;
			double double_14 = 0;
			unsigned_int_5 = unsigned_int_4 / unsigned_int_3;
			return int_3;
		}
		int_1 = int_3 + int_1;
		long_1 = long_3 - long_4;
		char controller_9[3];
		scanf("%3s", controller_9);
		if( strcmp( controller_9, "&oF") < 0)
		{
			return int_2;
		}
		return int_1;
	}
	double_6 = pow ( double_5 , double_6 ) ;
	if(1)
	{
		double_1 = double_3 + double_1;
		double_7 = fabs ( double_3 ) ;
		return int_5;
	}
	char_3 = char_4;
	if(1)
	{
		float_1 = float_1;
		double_6 = floor ( double_4 ) ;
		double_6 = double_5;
		return int_1;
	}
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		long long_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		float float_2 = 0;
		double double_7 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_8 = 0;
		short short_1 = 0;
		short short_2 = 0;
		double double_9 = 0;
		float float_3 = 0;
		float float_4 = 0;
		int int_4 = 0;
		unsigned int unsigned_int_4 = 0;
		int int_5 = 0;
		char char_3 = 0;
		char char_4 = 0;
		double double_10 = 0;
		int int_6 = 0;
		long long_2 = 0;
		long long_3 = 0;
		long long_4 = 0;
		unsigned int unsigned_int_5 = 0;
		double double_11 = 0;
		double double_12 = 0;
		double double_13 = 0;
		unsigned int unsigned_int_6 = 0;
		double double_14 = 0;
		float_2 = float_4;
		double_8 = atan2 ( double_2 , double_3 ) ;
		double_8 = atan ( double_7 ) ;
		double_7 = sinh ( double_5 ) ;
		double_3 = fmod ( double_2 , double_8 ) ;
		double_5 = exp ( double_3 ) ;
		int_2 = int_3 * int_5;
		unsigned_int_3 = unsigned_int_1;
		double_9 = atan2 ( double_2 , double_10 ) ;
		double_2 = log ( double_11 ) ;
		double_1 = log ( double_8 ) ;
		int_2 = int_5 - int_5;
		return int_3;
	}
	short_1 = short_1 - short_1;
	if(1)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_1 = 0;
		int int_1 = 0;
		float float_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		double double_6 = 0;
		long long_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_2 = 0;
		int int_3 = 0;
		float float_2 = 0;
		double double_7 = 0;
		unsigned int unsigned_int_3 = 0;
		double double_8 = 0;
		short short_1 = 0;
		short short_2 = 0;
		double double_9 = 0;
		float float_3 = 0;
		float float_4 = 0;
		int int_4 = 0;
		unsigned int unsigned_int_4 = 0;
		int int_5 = 0;
		char char_3 = 0;
		char char_4 = 0;
		double double_10 = 0;
		int int_6 = 0;
		long long_2 = 0;
		long long_3 = 0;
		long long_4 = 0;
		unsigned int unsigned_int_5 = 0;
		double double_11 = 0;
		double double_12 = 0;
		double double_13 = 0;
		unsigned int unsigned_int_6 = 0;
		double double_14 = 0;
		double_12 = cosh ( double_13 ) ;
		unsigned_int_1 = unsigned_int_4 / unsigned_int_6;
		double_10 = ldexp ( double_14 , int_4 ) ;
		return int_6;
	}
	double_7 = double_6;
	if(1)
	{
		return int_5;
	}
	return int_1;
}
