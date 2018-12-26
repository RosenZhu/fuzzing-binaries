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

int v_remote_printf( char parameter_1,char parameter_2);
int v_posix_openpt( int parameter_1);
int v_do_target(int uni_para);
void v_clean_io();
void v_free_vector( char parameter_1);
void v_string_to_vector( char parameter_1);
void v_connection_node_queue( float parameter_1);
float v_addr_to_string( int parameter_1,char parameter_2,char parameter_3,int parameter_4);
int v_parse_socks_request( float parameter_1);
int v_handle_connection_socks_init();
int v_handle_connection_read( double parameter_1);
int v_handle_connection_write( char parameter_1);
int v_handle_connection_activate( int parameter_1);
int v_handle_proxy_read();
int v_handle_message_dt_connection_ht_active_dormant();
int v_handle_message_dt_connection_ht_data();
int v_proxy_connect( char parameter_1);
int v_handle_send_dt_connection_ht_destroy( short parameter_1,char parameter_2,char parameter_3);
int v_handle_message_dt_connection_ht_create_tun_tap();
int v_handle_message_dt_connection_ht_create();
float v_connection_node_find( unsigned int parameter_1,char parameter_2);
int v_handle_message_dt_connection_ht_destroy();
int v_handle_message_dt_proxy_ht_report();
int v_handle_message_dt_proxy_ht_create();
unsigned int v_proxy_node_find( int parameter_1,char parameter_2);
int v_handle_message_dt_proxy_ht_destroy();
int v_handle_message_dt_winresize();
unsigned int v_message_helper_create( char parameter_1,char parameter_2,long parameter_3);
int v_handle_message_dt_tty();
int v_send_consumed();
void v_print_valid_escapes();
void v_list_all();
int v_process_escape( char parameter_1);
int v_is_valid_escape( char parameter_1);
void v_message_shift( int parameter_1);
int v_send_message( int parameter_1);
int v_escape_check(int uni_para);
int v_handle_local_read(int uni_para);
void v_message_helper_destroy( char parameter_1);
int v_handle_local_write();
int v_handle_signal_sigwinch();
int v_handle_send_dt_nop();
int v_handle_send_dt_connection_ht_create( short parameter_1);
void v_connection_node_delete( long parameter_1);
int v_connection_node_create();
double v_handle_tun_tap_init( int parameter_1);
void v_signal_handler( int parameter_1);
int v_handle_send_dt_proxy_ht_report( long parameter_1);
int v_handle_send_dt_proxy_ht_create( char parameter_1,int parameter_2);
void v_proxy_node_delete( int parameter_1);
int v_proxy_listen( float parameter_1);
short v_proxy_node_create();
int v_proxy_node_new( char parameter_1,int parameter_2);
int v_broker(int uni_para);
int v_message_pull();
int v_negotiate_protocol();
int v_report_log( char parameter_1,long parameter_2);
int v_dummy_verify_callback( int parameter_1,char parameter_2);
void v_seppuku( int parameter_1);
int v_init_io_target();
int v_init_io_control();
int v_do_control();
void v_print_config();
int v_remote_write_encrypted(int parameter_2);
int v_remote_read_encrypted(int parameter_2);
int v_remote_write_plaintext(double parameter_2);
int v_remote_read_plaintext(double parameter_2);
void v_print_versions();
void v_examples( int parameter_1);
void v_usage();
int v_message_push();
int v_report_log_string( char parameter_1,int uni_para);
void v_report_error( char parameter_1,long parameter_2,int uni_para);
int v_remote_printf( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 * long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "MD") < 0)
	{
		char_3 = char_1 + char_2;
	}
	v_report_error(char_2,long_1,-1 );

	unsigned_int_1 = unsigned_int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "b") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		char char_4 = 1;
		long_1 = long_2 + long_1;
	}
	int_1 = v_message_push();

	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		char char_4 = 1;
		char_3 = char_4 * char_1;
	}
	return int_1;
}
int v_posix_openpt( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
int v_do_target(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_6 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_4 = 1;
	short short_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_6 = 1;
	long long_6 = 1;
	float float_4 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_11 = 1;
	long long_7 = 1;
	int int_8 = 1;
	char char_6 = 1;
	short short_6 = 1;
	char char_8 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_5 = 1;
	int int_9 = 1;
	int int_10 = 1;
	int int_11 = 1;
	char char_7 = 1;
	short short_7 = 1;
	unsigned int unsigned_int_12 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_1 + double_1;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_2;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	char_1 = char_1 * char_1;
	char_1 = char_2;
	float_1 = float_1;
	double_2 = double_3;
	float_1 = float_2 * float_1;
	if(1)
	{
		double_2 = double_2 + double_4;
	}
	if(1)
	{
		long_1 = long_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	int_4 = int_3;
	int_1 = int_3;
	short_1 = short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_4;
	}
	if(1)
	{
		double_5 = double_1;
	}
	if(1)
	{
		char_5 = char_3 + char_4;
	}
	if(1)
	{
		double_3 = double_4;
	}
	char controller4vul_71[2];
	fgets(controller4vul_71 ,3 ,stdin);
	if( strcmp( controller4vul_71, ".,") > 0)
	{
		char controller4vul_72[2];
		fgets(controller4vul_72 ,3 ,stdin);
		if( strcmp( controller4vul_72, "6;") < 0)
		{
			if(1)
			{
				char_2 = char_5;
			}
			char controller4vul_73[1];
			fgets(controller4vul_73 ,2 ,stdin);
			if( strcmp( controller4vul_73, "Y") > 0)
			{
				char controller4vul_74[1];
				fgets(controller4vul_74 ,2 ,stdin);
				if( strcmp( controller4vul_74, "p") > 0)
				{
					int_2 = v_broker(uni_para);

					short_1 = short_1 + short_2;
				}
				if(1)
				{
					int_1 = int_5;
				}
			}
		}
		short_1 = short_1;
	}
	if(1)
	{
		char_3 = char_2;
	}
	if(1)
	{
		long_1 = long_1 + long_3;
		char_1 = char_4 + char_3;
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_3;
		}
		if(1)
		{
		}
		if(1)
		{
		}
	}
	if(1)
	{
		short_2 = short_2;
	}
	if(1)
	{
		int_2 = int_4;
	}
	if(1)
	{
		if(1)
		{
			int_3 = int_1;
		}
		double_2 = double_2;
	}
	if(1)
	{
		double_4 = double_4 + double_2;
	}
	if(1)
	{
		unsigned_int_6 = unsigned_int_7;
	}
	unsigned_int_8 = unsigned_int_8;
	if(1)
	{
		int_6 = int_2 * int_2;
	}
	if(1)
	{
		short_1 = short_1 * short_3;
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		float_1 = float_2 * float_3;
	}
	long_2 = long_2 * long_1;
	unsigned_int_5 = unsigned_int_9;
	long_3 = long_3 + long_4;
	if(1)
	{
		long_3 = long_1 * long_3;
	}
	if(1)
	{
		unsigned_int_9 = unsigned_int_9;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_3;
	}
	if(1)
	{
		short_3 = short_4;
	}
	if(1)
	{
		unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
	}
	if(1)
	{
		long_2 = long_5;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		double_3 = double_2;
	}
	double_1 = double_1;
	double_5 = double_1;
	long_1 = long_2;
	unsigned_int_10 = unsigned_int_4 + unsigned_int_5;
	double_3 = double_1;
	short_3 = short_3;
	unsigned_int_2 = unsigned_int_9;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_9 = 1;
			long long_4 = 1;
			short short_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_10 = 1;
			double double_6 = 1;
			long long_6 = 1;
			float float_4 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_11 = 1;
			long long_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short short_6 = 1;
			char char_8 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			int int_9 = 1;
			int int_10 = 1;
			int int_11 = 1;
			char char_7 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_12 = 1;
			double_6 = double_7;
		}
	}
	if(1)
	{
		char_1 = char_3 * char_3;
	}
	int_2 = int_1 + int_5;
	unsigned_int_10 = unsigned_int_4 + unsigned_int_8;
	long_3 = long_6 + long_5;
	int_4 = int_3 + int_6;
	if(1)
	{
		float_4 = float_2 + float_4;
	}
	if(1)
	{
		int_1 = int_7;
	}
	char_2 = char_5 * char_5;
	unsigned_int_11 = unsigned_int_10;
	long_2 = long_6 + long_7;
	if(1)
	{
		int_3 = int_2;
	}
	if(1)
	{
		char_5 = char_3;
	}
	int_2 = int_8;
	float_4 = float_1 + float_2;
	int_7 = int_2 * int_2;
	if(1)
	{
		int_2 = int_7;
	}
	if(1)
	{
		double_6 = double_4;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_9 = 1;
			long long_4 = 1;
			short short_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_10 = 1;
			double double_6 = 1;
			long long_6 = 1;
			float float_4 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_11 = 1;
			long long_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short short_6 = 1;
			char char_8 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			int int_9 = 1;
			int int_10 = 1;
			int int_11 = 1;
			char char_7 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_12 = 1;
			char_4 = char_3;
			double_3 = double_8 * double_1;
		}
		unsigned_int_1 = unsigned_int_8;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_9 = 1;
			long long_4 = 1;
			short short_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_10 = 1;
			double double_6 = 1;
			long long_6 = 1;
			float float_4 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_11 = 1;
			long long_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short short_6 = 1;
			char char_8 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			int int_9 = 1;
			int int_10 = 1;
			int int_11 = 1;
			char char_7 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_12 = 1;
			short_2 = short_5;
		}
		char_6 = char_4;
		short_3 = short_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		long_3 = long_3 + long_7;
		if(1)
		{
			long_4 = long_1 * long_5;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
		}
		unsigned_int_1 = unsigned_int_7 + unsigned_int_4;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_9 = 1;
			long long_4 = 1;
			short short_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_10 = 1;
			double double_6 = 1;
			long long_6 = 1;
			float float_4 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_11 = 1;
			long long_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short short_6 = 1;
			char char_8 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			int int_9 = 1;
			int int_10 = 1;
			int int_11 = 1;
			char char_7 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_12 = 1;
			int_5 = int_9 + int_3;
		}
		unsigned_int_1 = unsigned_int_8;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_9 = 1;
			long long_4 = 1;
			short short_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_10 = 1;
			double double_6 = 1;
			long long_6 = 1;
			float float_4 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_11 = 1;
			long long_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short short_6 = 1;
			char char_8 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			int int_9 = 1;
			int int_10 = 1;
			int int_11 = 1;
			char char_7 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_12 = 1;
			int_3 = int_1 + int_10;
		}
	}
	if(1)
	{
		char_4 = char_6 + char_4;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_5 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_6 = 1;
		short short_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_9 = 1;
		long long_4 = 1;
		short short_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_10 = 1;
		double double_6 = 1;
		long long_6 = 1;
		float float_4 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_11 = 1;
		long long_7 = 1;
		int int_8 = 1;
		char char_6 = 1;
		short short_6 = 1;
		char char_8 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_5 = 1;
		int int_9 = 1;
		int int_10 = 1;
		int int_11 = 1;
		char char_7 = 1;
		short short_7 = 1;
		unsigned int unsigned_int_12 = 1;
		int_11 = int_3 * int_11;
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_9 = 1;
			long long_4 = 1;
			short short_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_10 = 1;
			double double_6 = 1;
			long long_6 = 1;
			float float_4 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_11 = 1;
			long long_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short short_6 = 1;
			char char_8 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			int int_9 = 1;
			int int_10 = 1;
			int int_11 = 1;
			char char_7 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_12 = 1;
			char_5 = char_7;
		}
		short_6 = short_2 + short_4;
		double_3 = double_2 * double_2;
	}
	if(1)
	{
		float_3 = float_1;
	}
	if(1)
	{
		int_3 = int_7;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_11 + unsigned_int_9;
	}
	if(1)
	{
		long_7 = long_3;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_9;
	}
	if(1)
	{
		unsigned_int_10 = unsigned_int_8;
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_6 = 1;
			short short_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_9 = 1;
			long long_4 = 1;
			short short_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_10 = 1;
			double double_6 = 1;
			long long_6 = 1;
			float float_4 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_11 = 1;
			long long_7 = 1;
			int int_8 = 1;
			char char_6 = 1;
			short short_6 = 1;
			char char_8 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			int int_9 = 1;
			int int_10 = 1;
			int int_11 = 1;
			char char_7 = 1;
			short short_7 = 1;
			unsigned int unsigned_int_12 = 1;
			short_7 = short_6 * short_3;
		}
		if(1)
		{
			unsigned_int_5 = unsigned_int_9;
		}
	}
	long_5 = long_7;
	char controller_55[3];
	fgets(controller_55 ,3 ,stdin);
	if( strcmp( controller_55, ",Z") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_5 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_6 = 1;
		short short_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_9 = 1;
		long long_4 = 1;
		short short_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_10 = 1;
		double double_6 = 1;
		long long_6 = 1;
		float float_4 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_11 = 1;
		long long_7 = 1;
		int int_8 = 1;
		char char_6 = 1;
		short short_6 = 1;
		char char_8 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_5 = 1;
		int int_9 = 1;
		int int_10 = 1;
		int int_11 = 1;
		char char_7 = 1;
		short short_7 = 1;
		unsigned int unsigned_int_12 = 1;
		unsigned_int_12 = unsigned_int_9;
	}
	double_1 = double_5;
	char_6 = char_8;
	return int_1;
}
void v_clean_io()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_3 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	long_2 = long_1 * long_1;
	double_1 = double_2;
	int_1 = int_3;
	int_1 = int_3 * int_2;
	v_message_helper_destroy(char_4);

	v_proxy_node_delete(int_3);

	v_connection_node_delete(long_1);

	float_1 = float_2;
}
void v_free_vector( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1;
	}
	double_1 = double_1 + double_1;
}
void v_string_to_vector( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1;
	short_2 = short_1;
	double_1 = double_1;
	char_1 = char_1;
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				}
			}
		}
	}
	float_1 = float_2;
	v_report_error(char_1,long_2,-1 );

	float_2 = float_2 + float_1;
}
void v_connection_node_queue( float parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_2 = double_2 + double_1;
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_1 + float_2;
	}
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	int_1 = int_2;
	short_1 = short_2;
}
float v_addr_to_string( int parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_2;
	char_1 = char_2;
	double_2 = double_1 + double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		char char_3 = 1;
		float float_1 = 1;
		char char_4 = 1;
		float float_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		long long_2 = 1;
		int_2 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		v_report_error(char_1,long_1,-1 );

		char_2 = char_3 * char_2;
	}
	if(1)
	{
		float_1 = float_1;
	}
	char_3 = char_4 * char_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		char char_3 = 1;
		float float_1 = 1;
		char char_4 = 1;
		float float_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		long long_2 = 1;
		float_3 = float_2 * float_3;
		double_2 = double_3 + double_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		char char_3 = 1;
		float float_1 = 1;
		char char_4 = 1;
		float float_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		float_1 = float_1;
	}
	return float_4;
}
int v_parse_socks_request( float parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	v_report_error(char_1,long_1,-1 );

	float_1 = v_addr_to_string(int_1,char_2,char_3,int_2);

	double_2 = double_1 + double_1;
	long_1 = long_2 + long_3;
	return int_3;
}
int v_handle_connection_socks_init()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	short short_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_6 = 1;
	long long_2 = 1;
	float float_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_2;
	short_1 = short_2;
	int_1 = v_handle_send_dt_connection_ht_create(short_1);

	double_1 = double_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_2 = double_1 * double_1;
			}
			if(1)
			{
				double_3 = double_1;
			}
			long_1 = long_1;
		}
	}
	short_2 = short_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_6 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		short short_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_6 = 1;
		long long_2 = 1;
		float float_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_5 = 1;
		unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			int_2 = int_1 + int_2;
		}
		long_2 = long_3;
	}
	char controller_7[2];
	fgets(controller_7 ,2 ,stdin);
	if( strcmp( controller_7, "s") < 0)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_4;
			if(1)
			{
				int_2 = v_parse_socks_request(float_1);

				float_2 = float_1 + float_1;
			}
			short_3 = short_1 * short_3;
		}
	}
	if(1)
	{
		int_1 = int_3;
		int_3 = v_handle_connection_socks_init();

		short_3 = short_3 * short_1;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_1 + float_3;
			float_1 = float_1 * float_4;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			long long_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_6 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_5 = 1;
			short short_4 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_6 = 1;
			long long_2 = 1;
			float float_5 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_5 = 1;
			float_5 = float_6;
			double_3 = double_2 + double_3;
		}
	}
	double_2 = double_2;
	if(1)
	{
		int_1 = int_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			long_3 = long_3;
		}
		int_3 = int_3 + int_2;
	}
	int_1 = v_message_push();

	unsigned_int_5 = unsigned_int_4 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
			float_1 = float_6 + float_1;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			long long_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_6 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_5 = 1;
			short short_4 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_6 = 1;
			long long_2 = 1;
			float float_5 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_5 = 1;
			unsigned_int_2 = unsigned_int_3;
			float_3 = float_1;
			short_1 = short_3;
			int_5 = v_handle_send_dt_connection_ht_destroy(short_4,char_3,char_2);

			v_report_error(char_4,long_1,-1 );

			double_5 = double_1 * double_4;
			int_2 = int_1;
			int_4 = int_2 + int_1;
			float_6 = float_4 + float_2;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				int int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_2 = 1;
				long long_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				short short_3 = 1;
				int int_3 = 1;
				float float_3 = 1;
				float float_4 = 1;
				float float_6 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_5 = 1;
				short short_4 = 1;
				char char_3 = 1;
				char char_4 = 1;
				int int_6 = 1;
				long long_2 = 1;
				float float_5 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char char_5 = 1;
				v_connection_node_delete(long_1);

				char_1 = char_5;
			}
		}
	}
	return int_6;
}
int v_handle_connection_read( double parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1;
	int_1 = int_1 + int_1;
	v_connection_node_delete(long_2);

	char_2 = char_1 * char_2;
	double_1 = double_1 * double_2;
	double_1 = double_1;
	long_2 = long_3 * long_1;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			int int_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			short short_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			long long_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			int_2 = int_1;
		}
		int_1 = v_handle_send_dt_connection_ht_destroy(short_1,char_1,char_3);

		char_4 = char_3 * char_4;
	}
	v_report_error(char_4,long_4,-1 );

	int_3 = v_message_push();

	int_3 = int_3 + int_3;
	int_4 = int_3 * int_4;
	if(1)
	{
		long long_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return int_2;
}
int v_handle_connection_write( char parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char char_3 = 1;
	int_1 = v_handle_send_dt_connection_ht_destroy(short_1,char_1,char_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return int_2;
	v_report_error(char_2,long_1,-1 );

	v_connection_node_delete(long_1);

	v_message_helper_destroy(char_3);

	int_2 = v_message_push();

}
int v_handle_connection_activate( int parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	v_report_error(char_1,long_1,-1 );

	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			long long_4 = 1;
			long long_5 = 1;
			int int_1 = 1;
			short short_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			long long_3 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long_3 = long_1 * long_2;
		}
		v_connection_node_delete(long_4);

		long_4 = long_4 + long_5;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			long long_4 = 1;
			long long_5 = 1;
			int int_1 = 1;
			short short_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			long long_3 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_1 = v_handle_send_dt_connection_ht_destroy(short_1,char_1,char_2);

			double_3 = double_1 * double_2;
		}
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			long long_4 = 1;
			long long_5 = 1;
			int int_1 = 1;
			short short_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_4 = 1;
			int int_4 = 1;
			long long_3 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 * int_2;
		}
		long_2 = long_5 * long_1;
	}
	double_2 = double_4 + double_2;
	return int_4;
}
int v_handle_proxy_read()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_5 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_2;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_5 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_1 = v_connection_node_create();

		double_2 = double_2 + double_1;
	}
	short_1 = short_2;
	int_3 = int_1 + int_2;
	int_3 = int_4 * int_1;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_5 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		if(1)
		{
			double_1 = double_2 + double_1;
		}
		float_1 = float_1;
		int_2 = int_1;
		double_1 = double_3 * double_3;
		int_3 = int_3;
		short_3 = short_2;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_5 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int_4 = int_5 + int_1;
		if(1)
		{
			int_3 = v_handle_send_dt_connection_ht_create(short_1);

			short_2 = short_3 * short_3;
		}
		v_report_error(char_1,long_1,-1 );

		int_2 = int_5;
		double_1 = double_4 * double_1;
		long_3 = long_2 + long_1;
		if(1)
		{
			long_2 = long_2;
		}
	}
	return int_2;
}
int v_handle_message_dt_connection_ht_active_dormant()
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	v_report_error(char_1,long_1,-1 );

	int_1 = int_1;
	if(1)
	{
		if(1)
		{
			int_2 = int_3;
		}
	}
	if(1)
	{
		int_3 = v_handle_send_dt_connection_ht_destroy(short_1,char_2,char_2);

		int_2 = int_2 + int_1;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		float_1 = v_connection_node_find(unsigned_int_1,char_2);

		int_4 = int_4 + int_3;
	}
	return int_2;
}
int v_handle_message_dt_connection_ht_data()
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "P9") > 0)
	{
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		long long_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		char char_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = v_handle_send_dt_connection_ht_destroy(short_1,char_1,char_1);

		v_report_error(char_2,long_1,-1 );

		unsigned_int_1 = v_message_helper_create(char_1,char_3,long_1);

		double_2 = double_1 * double_1;
	}
	v_connection_node_delete(long_2);

	int_2 = v_message_push();

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return int_2;
	float_1 = v_connection_node_find(unsigned_int_1,char_4);

}
int v_proxy_connect( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	int int_4 = 1;
	long long_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_4 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	double_1 = double_2;
	int_2 = int_1 + int_2;
	short_1 = short_1 * short_1;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	short_2 = short_3;
	if(1)
	{
		int_2 = int_2 + int_2;
	}
	int_3 = int_3 * int_2;
	if(1)
	{
		if(1)
		{
			unsigned_int_4 = unsigned_int_4;
		}
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		int int_4 = 1;
		long long_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_4 = 1;
		float float_3 = 1;
		double double_3 = 1;
		long_1 = long_1 + long_2;
	}
	float_2 = float_1 + float_1;
	short_2 = short_4 + short_4;
	int_4 = int_1 * int_2;
	long_3 = long_2 * long_3;
	char_1 = char_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		int int_4 = 1;
		long long_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_4 = 1;
		float float_3 = 1;
		double double_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
		long_4 = long_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		int int_4 = 1;
		long long_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_4 = 1;
		float float_3 = 1;
		double double_3 = 1;
		float_3 = float_1 * float_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_4 = 1;
			int int_4 = 1;
			long long_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			long long_1 = 1;
			long long_4 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double_3 = double_2 * double_1;
		}
		unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
		long_2 = long_2;
		char_2 = char_1;
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
				v_report_error(char_4,long_2,-1 );

				int_4 = int_4 * int_2;
			}
		}
		long_2 = long_3 * long_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
	if(1)
	{
	}
	return int_4;
}
int v_handle_send_dt_connection_ht_destroy( short parameter_1,char parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	short_1 = short_2;
	int_2 = int_1;
	short_3 = short_2 * short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "*k") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_3 = int_2 + int_2;
		v_report_error(char_1,long_1,-1 );

		long_2 = long_2 * long_1;
		long_5 = long_3 * long_4;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "R") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long_2 = long_6;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "EZ") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_4 = 1;
		int int_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = v_message_push();

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	return int_4;
}
int v_handle_message_dt_connection_ht_create_tun_tap()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			v_report_error(char_1,long_1,-1 );

			double_1 = v_handle_tun_tap_init(int_1);

			int_1 = int_1 + int_1;
		}
	}
	return int_1;
	int_1 = v_handle_send_dt_connection_ht_destroy(short_1,char_1,char_2);

}
int v_handle_message_dt_connection_ht_create()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	short short_2 = 1;
	char char_8 = 1;
	double double_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float_3 = float_1 * float_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		if(1)
		{
			double_2 = double_3;
		}
		if(1)
		{
			if(1)
			{
				char_2 = char_1 * char_1;
			}
			if(1)
			{
				int_1 = int_2;
			}
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		short short_2 = 1;
		char char_8 = 1;
		double double_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short_1 = short_1 * short_2;
	}
	char_1 = char_2 * char_1;
	char_3 = char_4;
	v_report_error(char_5,long_1,-1 );

	double_3 = double_1 + double_4;
	if(1)
	{
		int_3 = v_proxy_connect(char_5);

		unsigned_int_1 = unsigned_int_2;
	}
	int_1 = v_handle_message_dt_connection_ht_create_tun_tap();

	int_4 = v_handle_send_dt_connection_ht_destroy(short_1,char_6,char_7);

	unsigned_int_3 = unsigned_int_4;
	char_7 = char_5;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				char char_3 = 1;
				char char_4 = 1;
				char char_5 = 1;
				long long_1 = 1;
				double double_4 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_4 = 1;
				char char_6 = 1;
				char char_7 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_7 = 1;
				short short_2 = 1;
				char char_8 = 1;
				double double_5 = 1;
				int int_5 = 1;
				int int_6 = 1;
				char_2 = char_8 * char_7;
			}
		}
		if(1)
		{
			double_2 = double_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			long long_1 = 1;
			double double_4 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			char char_6 = 1;
			char char_7 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_7 = 1;
			short short_2 = 1;
			char char_8 = 1;
			double double_5 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double_5 = double_3 + double_5;
		}
		double_3 = double_4;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		short short_2 = 1;
		char char_8 = 1;
		double double_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int_1 = int_2 + int_5;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		short short_2 = 1;
		char char_8 = 1;
		double double_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float_3 = v_connection_node_find(unsigned_int_2,char_6);

		v_connection_node_delete(long_1);

		int_3 = v_connection_node_create();

		int_6 = int_6 + int_4;
	}
	return int_7;
}
float v_connection_node_find( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2;
	return float_1;
}
int v_handle_message_dt_connection_ht_destroy()
{
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_1;
	float_1 = v_connection_node_find(unsigned_int_1,char_1);

	short_1 = short_1;
	short_2 = short_1;
	short_1 = short_2 + short_2;
	if(1)
	{
		long long_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		if(1)
		{
			long long_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			long long_2 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double_2 = double_1 * double_2;
		}
		int_1 = int_2;
	}
	return int_1;
	v_connection_node_delete(long_2);

}
int v_handle_message_dt_proxy_ht_report()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		int_2 = int_2;
	}
	short_1 = v_proxy_node_create();

	v_report_error(char_1,long_1,-1 );

	long_2 = long_1;
	return int_3;
}
int v_handle_message_dt_proxy_ht_create()
{
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = v_proxy_node_new(char_1,int_2);

	v_report_error(char_2,long_1,-1 );

	long_2 = long_1 * long_2;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_1 + double_2;
	}
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_3 = v_handle_send_dt_proxy_ht_report(long_3);

		double_1 = double_3 * double_3;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "{") > 0)
	{
		if(1)
		{
			unsigned_int_1 = v_proxy_node_find(int_1,char_1);

			unsigned_int_1 = unsigned_int_1;
		}
	}
	return int_4;
	v_proxy_node_delete(int_3);

}
unsigned int v_proxy_node_find( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 * float_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ">{") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_2 = char_1 * char_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			float_2 = float_2;
			char_1 = char_2;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		}
	}
	float_4 = float_3 * float_3;
	return unsigned_int_4;
}
int v_handle_message_dt_proxy_ht_destroy()
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double_1 = double_1;
	char_1 = char_1;
	long_2 = long_1 + long_1;
	short_1 = short_1;
	if(1)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "P") < 0)
		{
			double double_1 = 1;
			char char_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			long long_3 = 1;
			long_3 = long_1 * long_2;
		}
		unsigned_int_1 = v_proxy_node_find(int_1,char_2);

		v_proxy_node_delete(int_2);

		double_1 = double_1;
	}
	return int_1;
}
int v_handle_message_dt_winresize()
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	v_report_error(char_1,long_1,-1 );

	int_1 = int_2;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	float_2 = float_1 * float_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_3 = int_2 * int_3;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 * short_2;
	}
	return int_1;
}
unsigned int v_message_helper_create( char parameter_1,char parameter_2,long parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1 + double_1;
	double_1 = double_1 * double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "w") > 0)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_3 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_2 = int_1 * int_1;
	}
	float_1 = float_1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_3 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_2 = float_3;
		short_2 = short_1 + short_1;
	}
	double_1 = double_1 * double_2;
	v_report_error(char_1,long_1,-1 );

	float_1 = float_4 * float_3;
	return unsigned_int_1;
}
int v_handle_message_dt_tty()
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char_1 = char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_4;
	int_2 = int_1 * int_2;
	int_2 = int_2 + int_2;
	if(1)
	{
	}
	short_1 = short_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	}
	double_2 = double_1 + double_2;
	if(1)
	{
		v_report_error(char_1,long_2,-1 );

		short_2 = short_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = double_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			long long_5 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			long_4 = long_3 * long_1;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			long long_5 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int_3 = int_3 * int_1;
			if(1)
			{
				char_1 = char_1;
				short_1 = short_1;
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				long long_2 = 1;
				double double_3 = 1;
				int int_3 = 1;
				long long_5 = 1;
				long long_3 = 1;
				long long_4 = 1;
				int int_4 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				unsigned int unsigned_int_5 = 1;
				float_3 = float_1 * float_2;
				float_4 = float_4;
			}
			double_1 = double_3;
			double_1 = double_2;
			int_4 = int_1 * int_2;
		}
	}
	char controller_8[3];
	fgets(controller_8 ,3 ,stdin);
	if( strcmp( controller_8, "Jp") < 0)
	{
		char_1 = char_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		long long_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_2;
	}
	if(1)
	{
		double_2 = double_1;
	}
	if(1)
	{
		double_2 = double_3;
	}
	return int_3;
	unsigned_int_3 = v_message_helper_create(char_1,char_2,long_5);

}
int v_send_consumed()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	float_2 = float_1 * float_1;
	char_1 = char_1 + char_1;
	char_3 = char_2 * char_3;
	double_1 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		v_report_error(char_3,long_1,-1 );

		short_1 = short_1;
	}
	int_1 = v_message_push();

	int_1 = int_2;
	if(1)
	{
		if(1)
		{
			char_2 = char_2 + char_1;
			double_1 = double_1 * double_2;
			short_1 = short_2;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	double_2 = double_3 * double_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	short_4 = short_3 + short_2;
	long_2 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		int_1 = int_3;
		int_2 = int_3;
		double_1 = double_3 + double_2;
	}
	double_2 = double_3;
	char_1 = char_3;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		float_3 = float_3;
	}
	return int_3;
}
void v_print_valid_escapes()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	short_1 = short_1 * short_1;
	int_1 = int_2;
	int_3 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 + double_1;
	int_4 = int_1;
	double_2 = double_1 + double_3;
}
void v_list_all()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	char_2 = char_1 * char_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	int_1 = int_1;
	float_3 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "(") > 0)
	{
		float_2 = float_3;
	}
	unsigned_int_1 = unsigned_int_3;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "-") < 0)
	{
		long_1 = long_1;
	}
	char_2 = char_3;
	long_1 = long_1;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5;
		unsigned_int_4 = unsigned_int_1;
	}
	short_3 = short_2 + short_1;
	short_4 = short_2 * short_1;
}
int v_process_escape( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float_1 = float_2;
	v_list_all();

	long_1 = long_1;
	double_1 = double_1 * double_2;
	v_print_valid_escapes();

	double_1 = double_2 + double_1;
	short_1 = short_1;
	return int_1;
	v_report_error(char_1,long_1,-1 );

}
int v_is_valid_escape( char parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	long_1 = long_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, " 9") > 0)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_message_shift( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long_1 = long_1;
	}
	short_2 = short_1 * short_1;
}
int v_send_message( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "oa") > 0)
	{
	}
	int_1 = v_message_push();

	unsigned_int_1 = unsigned_int_2;
	v_report_error(char_1,long_1,-1 );

	float_1 = float_1 * float_2;
	double_4 = double_3 + double_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int_1 = int_2 * int_2;
	}
	char_1 = char_1 + char_1;
	return int_1;
}
int v_escape_check(int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_6 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_7 = 1;
	char char_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_2 = int_1 + int_2;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_3 = 1;
		int int_6 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_7 = 1;
		char char_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double_1 = double_1 + double_2;
				}
				double_2 = double_3;
				unsigned_int_1 = unsigned_int_1;
			}
		}
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_1;
				double_1 = double_1 * double_2;
				if(1)
				{
					double_4 = double_3;
				}
			}
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					char char_3 = 1;
					int int_6 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					char char_2 = 1;
					double double_5 = 1;
					double double_6 = 1;
					unsigned int unsigned_int_3 = 1;
					char char_1 = 1;
					int int_3 = 1;
					int int_4 = 1;
					int int_5 = 1;
					double double_7 = 1;
					char char_4 = 1;
					short short_1 = 1;
					short short_2 = 1;
					if(1)
					{
						int int_1 = 1;
						int int_2 = 1;
						long long_1 = 1;
						long long_2 = 1;
						char char_3 = 1;
						int int_6 = 1;
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_4 = 1;
						char char_2 = 1;
						double double_5 = 1;
						double double_6 = 1;
						unsigned int unsigned_int_3 = 1;
						char char_1 = 1;
						int int_3 = 1;
						int int_4 = 1;
						int int_5 = 1;
						double double_7 = 1;
						char char_4 = 1;
						short short_1 = 1;
						short short_2 = 1;
						char_2 = char_1 * char_2;
					}
					unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
					double_5 = double_2;
				}
				int_2 = int_2;
				double_5 = double_4 * double_6;
			}
		}
		char controller4vul_80[1];
		fgets(controller4vul_80 ,2 ,stdin);
		if( strcmp( controller4vul_80, ")") > 0)
		{
			if(1)
			{
				char_2 = char_2;
				if(1)
				{
					double_5 = double_6;
				}
			}
			char controller4vul_81[1];
			fgets(controller4vul_81 ,2 ,stdin);
			if( strcmp( controller4vul_81, "f") > 0)
			{
				int int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_3 = 1;
				int int_6 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				char char_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_1 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int int_5 = 1;
				double double_7 = 1;
				char char_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				char controller4vul_82[2];
				fgets(controller4vul_82 ,3 ,stdin);
				if( strcmp( controller4vul_82, "MG") > 0)
				{
					char controller4vul_83[1];
					fgets(controller4vul_83 ,2 ,stdin);
					if( strcmp( controller4vul_83, ")") > 0)
					{
						int int_1 = 1;
						int int_2 = 1;
						long long_1 = 1;
						long long_2 = 1;
						char char_3 = 1;
						int int_6 = 1;
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_4 = 1;
						char char_2 = 1;
						double double_5 = 1;
						double double_6 = 1;
						unsigned int unsigned_int_3 = 1;
						char char_1 = 1;
						int int_3 = 1;
						int int_4 = 1;
						int int_5 = 1;
						double double_7 = 1;
						char char_4 = 1;
						short short_1 = 1;
						short short_2 = 1;
						char_3 = char_4;
						unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
						char controller4vul_84[2];
						fgets(controller4vul_84 ,3 ,stdin);
						if( strcmp( controller4vul_84, "?O") > 0)
						{
							char controller4vul_85[2];
							fgets(controller4vul_85 ,3 ,stdin);
							if( strcmp( controller4vul_85, "70") < 0)
							{
								v_report_error(char_3,long_1,uni_para);

								int_3 = int_2;
							}
						}
						int_4 = int_2 * int_4;
						int_1 = int_5;
					}
					if(1)
					{
						int int_1 = 1;
						int int_2 = 1;
						long long_1 = 1;
						long long_2 = 1;
						char char_3 = 1;
						int int_6 = 1;
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_4 = 1;
						char char_2 = 1;
						double double_5 = 1;
						double double_6 = 1;
						unsigned int unsigned_int_3 = 1;
						char char_1 = 1;
						int int_3 = 1;
						int int_4 = 1;
						int int_5 = 1;
						double double_7 = 1;
						char char_4 = 1;
						short short_1 = 1;
						short short_2 = 1;
						short_1 = short_1 * short_2;
						double_2 = double_2;
						char controller_2[3];
						fgets(controller_2 ,3 ,stdin);
						if( strcmp( controller_2, "K~") > 0)
						{
							double_1 = double_4 * double_5;
						}
						long_2 = long_1 * long_1;
						double_7 = double_4;
					}
				}
				if(1)
				{
					double_4 = double_7;
					if(1)
					{
						int_5 = int_1;
					}
					int_2 = int_3 * int_2;
					int_5 = int_2 * int_4;
				}
			}
		}
	}
	return int_6;
}
int v_handle_local_read(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	char_1 = char_1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			}
		}
	}
	char controller4vul_75[1];
	fgets(controller4vul_75 ,2 ,stdin);
	if( strcmp( controller4vul_75, "y") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			char char_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int_2 = int_1 + int_2;
		}
		char_2 = char_3;
		char controller4vul_76[2];
		fgets(controller4vul_76 ,3 ,stdin);
		if( strcmp( controller4vul_76, "ST") > 0)
		{
			char controller4vul_77[1];
			fgets(controller4vul_77 ,2 ,stdin);
			if( strcmp( controller4vul_77, "3") < 0)
			{
				char controller4vul_78[1];
				fgets(controller4vul_78 ,2 ,stdin);
				if( strcmp( controller4vul_78, "t") > 0)
				{
					char controller4vul_79[2];
					fgets(controller4vul_79 ,3 ,stdin);
					if( strcmp( controller4vul_79, "k5") > 0)
					{
						double double_1 = 1;
						double double_2 = 1;
						char char_1 = 1;
						unsigned int unsigned_int_1 = 1;
						int int_1 = 1;
						int int_3 = 1;
						char char_2 = 1;
						char char_3 = 1;
						int int_2 = 1;
						char char_4 = 1;
						long long_1 = 1;
						long long_2 = 1;
						unsigned int unsigned_int_2 = 1;
						int_1 = v_escape_check(uni_para);

						char_4 = char_2 * char_2;
					}
				}
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_1 = 1;
				int int_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				int int_2 = 1;
				char char_4 = 1;
				long long_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				long_1 = long_2;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					char char_1 = 1;
					unsigned int unsigned_int_1 = 1;
					int int_1 = 1;
					int int_3 = 1;
					char char_2 = 1;
					char char_3 = 1;
					int int_2 = 1;
					char char_4 = 1;
					long long_1 = 1;
					long long_2 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned_int_1 = unsigned_int_2;
				}
			}
		}
	}
	return int_3;
}
void v_message_helper_destroy( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_1;
	int_1 = int_2;
}
int v_handle_local_write()
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	return int_1;
	v_report_error(char_1,long_1,-1 );

	v_message_helper_destroy(char_2);

}
int v_handle_signal_sigwinch()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "]q") < 0)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	int_1 = v_message_push();

	double_2 = double_1;
	double_2 = double_1 * double_3;
	v_report_error(char_1,long_1,-1 );

	long_3 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_2 = double_4 * double_5;
	}
	return int_2;
}
int v_handle_send_dt_nop()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = v_message_push();

		v_report_error(char_1,long_1,-1 );

		short_2 = short_1 + short_2;
	}
	return int_1;
}
int v_handle_send_dt_connection_ht_create( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	char_1 = char_2;
	int_1 = int_1 + int_1;
	char_2 = char_2 + char_3;
	char_5 = char_4 * char_2;
	char_2 = char_5 * char_5;
	double_1 = double_1 * double_2;
	int_2 = v_message_push();

	unsigned_int_1 = unsigned_int_2;
	v_report_error(char_5,long_1,-1 );

	unsigned_int_2 = unsigned_int_1;
	int_2 = int_3 + int_3;
	double_1 = double_1 * double_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	return int_4;
}
void v_connection_node_delete( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		double_2 = double_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if(remainder_check(controller_3,100,1))
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_4 = double_2 * double_3;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_1 = short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = double_5;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	float_2 = float_1 + float_2;
}
int v_connection_node_create()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		float_3 = float_1 * float_2;
	}
	int_1 = int_1 + int_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "W") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		v_report_error(char_1,long_1,-1 );

		int_3 = int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		unsigned_int_3 = unsigned_int_3;
		char_1 = char_2;
		int_1 = int_1;
	}
	double_2 = double_2 * double_2;
	return int_3;
}
double v_handle_tun_tap_init( int parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	return double_1;
	v_report_error(char_1,long_1,-1 );

	int_1 = v_connection_node_create();

	v_connection_node_delete(long_2);

}
void v_signal_handler( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_2 = double_1 + double_1;
}
int v_handle_send_dt_proxy_ht_report( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	int_1 = int_1;
	int_1 = int_2;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	int_2 = v_message_push();

	char_2 = char_1 * char_2;
	v_report_error(char_3,long_1,-1 );

	int_2 = int_3 * int_3;
	long_1 = long_2;
	int_4 = int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		int int_3 = 1;
		long long_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		double_2 = double_2;
	}
	return int_4;
}
int v_handle_send_dt_proxy_ht_create( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = double_2;
	int_1 = int_1;
	long_1 = long_1 * long_1;
	short_1 = short_2;
	int_2 = v_message_push();

	double_4 = double_1 * double_3;
	float_1 = float_1;
	double_4 = double_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int_2 = int_2 + int_3;
	}
	short_4 = short_2 * short_3;
	v_report_error(char_1,long_1,-1 );

	int_4 = int_5;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_3;
	}
	return int_5;
}
void v_proxy_node_delete( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "&y") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			short_1 = short_2;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			unsigned_int_1 = unsigned_int_3;
		}
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
		int_2 = int_1 + int_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
	}
}
int v_proxy_listen( float parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_8 = 1;
	short short_1 = 1;
	v_report_error(char_1,long_1,-1 );

	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_2 = int_1;
	double_2 = double_1 + double_1;
	double_3 = double_4;
	float_1 = float_1 * float_1;
	double_5 = double_3;
	if(1)
	{
		double_6 = double_6 + double_7;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_8 = 1;
		short short_1 = 1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			unsigned_int_3 = unsigned_int_2;
		}
		int_3 = int_3;
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_8 = 1;
			short short_1 = 1;
			double_6 = double_8;
			char_2 = char_2;
		}
		char_2 = char_3;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_8 = 1;
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	double_6 = double_4;
	if(1)
	{
		double_5 = double_7;
	}
	double_2 = double_1;
	float_2 = float_3;
	return int_1;
}
short v_proxy_node_create()
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		v_report_error(char_1,long_1,-1 );

		float_2 = float_1 + float_1;
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long_1 = long_1 * long_1;
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long_1 = long_2 * long_3;
		double_1 = double_2;
		double_4 = double_3 + double_3;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	return short_1;
}
int v_proxy_node_new( char parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "1N") == 0)
	{
	}
	v_report_error(char_1,long_1,-1 );

	short_3 = v_proxy_node_create();

	int_1 = int_1 + int_1;
	long_1 = long_1;
	return int_2;
	int_1 = v_proxy_listen(float_1);

	v_proxy_node_delete(int_3);

}
int v_broker(int uni_para)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_6 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int_1 = v_handle_local_read(uni_para);

	short_3 = short_1 * short_2;
	int_2 = int_3;
	int_5 = int_4 + int_4;
	int_2 = int_4 + int_5;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_1;
	char_1 = char_1;
	short_2 = short_4;
	long_2 = long_1 + long_2;
	unsigned_int_2 = unsigned_int_1;
	int_4 = int_3;
	float_1 = float_2;
	double_2 = double_1 + double_1;
	long_3 = long_4;
	int_2 = int_6;
	double_1 = double_1 * double_2;
	short_2 = short_1 + short_1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1;
	double_1 = double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	char_2 = char_2 + char_3;
	long_1 = long_2;
	short_5 = short_4;
	short_5 = short_3;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	short_5 = short_6;
	int_5 = int_3 + int_5;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_5 * unsigned_int_1;
	char_1 = char_4;
	long_2 = long_5 * long_6;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_5;
	return int_1;
}
int v_message_pull()
{
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	short short_2 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	double double_3 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_10 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_2 = 1;
	int int_8 = 1;
	float float_1 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	double double_5 = 1;
	float float_3 = 1;
	int int_9 = 1;
	v_report_error(char_1,long_1,-1 );

	int_2 = int_1 * int_1;
	double_1 = double_1 + double_2;
	int_4 = int_3 * int_3;
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
	}
	int_5 = int_1;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		short short_2 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		double double_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_10 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_2 = 1;
		int int_8 = 1;
		float float_1 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		double double_5 = 1;
		float float_3 = 1;
		int int_9 = 1;
		short_1 = short_1 + short_2;
	}
	int_3 = int_3 + int_6;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		short short_2 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		double double_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_10 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_2 = 1;
		int int_8 = 1;
		float float_1 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		double double_5 = 1;
		float float_3 = 1;
		int int_9 = 1;
		unsigned_int_3 = unsigned_int_4;
	}
	int_7 = int_5;
	int_5 = int_6 + int_7;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		short short_2 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		double double_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_10 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_2 = 1;
		int int_8 = 1;
		float float_1 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		double double_5 = 1;
		float float_3 = 1;
		int int_9 = 1;
		short_3 = short_4;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		short short_2 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		double double_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_10 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_2 = 1;
		int int_8 = 1;
		float float_1 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		double double_5 = 1;
		float float_3 = 1;
		int int_9 = 1;
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_5 = 1;
			short short_2 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_7 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_10 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_2 = 1;
			int int_8 = 1;
			float float_1 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_3 = 1;
			double double_5 = 1;
			float float_3 = 1;
			int int_9 = 1;
			short_5 = short_2 * short_2;
		}
		double_3 = double_2 * double_1;
		double_3 = double_3 + double_1;
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_5 = 1;
			short short_2 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_7 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_10 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_2 = 1;
			int int_8 = 1;
			float float_1 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_3 = 1;
			double double_5 = 1;
			float float_3 = 1;
			int int_9 = 1;
			unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
		}
		unsigned_int_2 = unsigned_int_2;
		long_2 = long_2 * long_1;
		if(1)
		{
			double_2 = double_2;
		}
		int_5 = int_8 * int_7;
		float_2 = float_1 * float_1;
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_5 = 1;
			short short_2 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_7 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_10 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_2 = 1;
			int int_8 = 1;
			float float_1 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_3 = 1;
			double double_5 = 1;
			float float_3 = 1;
			int int_9 = 1;
			if(1)
			{
				float_1 = float_1 * float_2;
			}
			long_3 = long_1 * long_1;
			double_4 = double_5;
		}
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_5 = 1;
			short short_2 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_7 = 1;
			double double_3 = 1;
			float float_2 = 1;
			double double_4 = 1;
			int int_10 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_2 = 1;
			int int_8 = 1;
			float float_1 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_3 = 1;
			double double_5 = 1;
			float float_3 = 1;
			int int_9 = 1;
			float_3 = float_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
	if(1)
	{
		double_4 = double_3 + double_2;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_5 = 1;
		short short_2 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		double double_3 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_10 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_2 = 1;
		int int_8 = 1;
		float float_1 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		double double_5 = 1;
		float float_3 = 1;
		int int_9 = 1;
		int_9 = int_5 * int_9;
	}
	return int_10;
}
int v_negotiate_protocol()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_2 = 1;
	int int_5 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_3 = int_1 * int_2;
	float_1 = float_1 + float_1;
	short_1 = short_1 * short_1;
	if(1)
	{
		double_1 = double_1;
	}
	long_1 = long_1;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "I") > 0)
	{
		char_1 = char_1 + char_1;
	}
	char_2 = char_1;
	if(1)
	{
		int_1 = int_3 + int_3;
	}
	double_1 = double_1;
	if(1)
	{
		short_2 = short_1;
	}
	int_1 = int_2;
	if(1)
	{
		short_3 = short_3 + short_1;
	}
	if(1)
	{
		int_1 = int_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	if(1)
	{
		long_2 = long_1;
	}
	int_1 = int_1 * int_4;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	short_2 = short_3 + short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_2 = 1;
		int int_4 = 1;
		double double_2 = 1;
		int int_5 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long_2 = long_1 * long_3;
	}
	if(1)
	{
		int_1 = int_4;
	}
	double_2 = double_2;
	if(1)
	{
		int_4 = int_2 + int_1;
	}
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_2 = 1;
		int int_4 = 1;
		double double_2 = 1;
		int int_5 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		v_report_error(char_2,long_1,-1 );

		unsigned_int_4 = unsigned_int_3;
	}
	return int_5;
}
int v_report_log( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_2;
	double_2 = double_1;
	double_1 = double_3 * double_4;
	int_1 = v_report_log_string(char_1,-1 );

	int_1 = int_2 * int_2;
	double_3 = double_4;
	int_4 = int_2 + int_3;
	if(1)
	{
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "6") < 0)
		{
			double_2 = double_3;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	return int_4;
}
int v_dummy_verify_callback( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "2q") < 0)
	{
	}
	return int_1;
}
void v_seppuku( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short_1 = short_1;
	}
	double_2 = double_1 * double_2;
	v_report_error(char_1,long_1,-1 );

}
int v_init_io_target()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int_1 = v_init_io_control();

	double_2 = double_1 + double_1;
	if(1)
	{
	}
	int_2 = v_dummy_verify_callback(int_2,char_1);

	long_1 = long_2;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "]") > 0)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double_2 = double_3 + double_1;
	}
	return int_1;
	v_report_error(char_1,long_3,-1 );

	v_seppuku(int_1);

}
int v_init_io_control()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	int int_9 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int int_10 = 1;
	long long_4 = 1;
	char char_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_11 = 1;
	int int_12 = 1;
	char char_6 = 1;
	short_1 = short_1 + short_1;
	int_2 = int_1 + int_2;
	int_4 = int_1 + int_3;
	short_3 = short_2 + short_3;
	int_1 = v_init_io_target();

	double_1 = double_2;
	double_1 = double_3;
	double_3 = double_3 + double_2;
	int_2 = int_3;
	float_2 = float_1 * float_1;
	long_1 = long_1 + long_2;
	int_3 = int_2;
	int_1 = int_3 * int_4;
	char_1 = char_1 + char_1;
	int_5 = int_6;
	if(1)
	{
	}
	double_3 = double_2;
	if(1)
	{
		int_7 = int_6 * int_4;
	}
	v_report_error(char_1,long_2,-1 );

	int_8 = int_8;
	if(1)
	{
		int_4 = int_2 + int_9;
	}
	double_3 = double_4;
	int_5 = v_dummy_verify_callback(int_4,char_2);

	double_4 = double_4;
	if(1)
	{
		double_4 = double_4;
	}
	double_3 = double_4;
	double_4 = double_1;
	long_1 = long_2;
	char_4 = char_3 * char_3;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_10 = 1;
		long long_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_11 = 1;
		int int_12 = 1;
		char char_6 = 1;
		int_4 = int_10 + int_10;
	}
	if(1)
	{
		int_6 = int_1;
	}
	long_3 = long_2;
	double_3 = double_4 * double_3;
	if(1)
	{
		float_2 = float_2 * float_1;
	}
	if(1)
	{
		double_4 = double_1;
		float_1 = float_3;
	}
	v_seppuku(int_3);

	long_3 = long_1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_10 = 1;
		long long_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_11 = 1;
		int int_12 = 1;
		char char_6 = 1;
		long_4 = long_4;
	}
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_10 = 1;
		long long_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_11 = 1;
		int int_12 = 1;
		char char_6 = 1;
		char_5 = char_4;
	}
	if(1)
	{
		long_3 = long_3;
	}
	if(1)
	{
		short_2 = short_3;
	}
	long_1 = long_2 + long_1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_10 = 1;
		long long_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_11 = 1;
		int int_12 = 1;
		char char_6 = 1;
		short_1 = short_4 + short_2;
	}
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_10 = 1;
		long long_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_11 = 1;
		int int_12 = 1;
		char char_6 = 1;
		float_2 = float_3;
		float_1 = float_1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		int int_9 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_10 = 1;
		long long_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_11 = 1;
		int int_12 = 1;
		char char_6 = 1;
		int_12 = int_2 * int_11;
		char_6 = char_6;
		int_7 = v_report_log(char_3,long_1);

		long_2 = long_3 + long_3;
	}
	short_2 = short_1;
	return int_9;
}
int v_do_control()
{
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = v_init_io_control();

	v_report_error(char_1,long_1,-1 );

	int_1 = v_report_log(char_2,long_2);

	int_2 = v_broker(-1 );

	v_string_to_vector(char_3);

	v_free_vector(char_3);

	int_2 = int_2 * int_2;
	return int_3;
	int_2 = v_negotiate_protocol();

	int_4 = v_message_push();

	int_2 = v_message_pull();

}
void v_print_config()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	float float_3 = 1;
	if(1)
	{
	}
	long_3 = long_1 * long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_1;
	float_2 = float_1 * float_2;
	int_1 = int_2 * int_2;
	int_2 = int_2 + int_1;
	int_2 = int_1;
	if(1)
	{
	}
	double_1 = double_1 + double_1;
	double_2 = double_2 + double_3;
	double_4 = double_2 * double_4;
	int_2 = int_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_4 * long_5;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
	}
	float_3 = float_3 + float_2;
}
int v_remote_write_encrypted(int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	int_3 = int_1 * int_2;
	double_2 = double_1 * double_2;
	int_3 = int_1;
	float_3 = float_1 * float_2;
	char_2 = char_1 * char_1;
	long_1 = long_1;
	int_2 = int_4;
	float_6 = float_4 * float_5;
	double_3 = double_2 * double_3;
	char_1 = char_2 * char_1;
	long_1 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	long_3 = long_1 * long_2;
	int_4 = int_5 + int_2;
	int_2 = int_5 * int_6;
	short_1 = short_1 + short_2;
	float_5 = float_7 * float_7;
	double_1 = double_2 + double_3;
	short_4 = short_3 * short_2;
	int_2 = int_4 * int_4;
	double_2 = double_4 + double_4;
	return int_1;
	v_report_error(char_1,long_3,-1 );

}
int v_remote_read_encrypted(int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long_1 = long_2;
	long_1 = long_2;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		short short_1 = 1;
		v_report_error(char_1,long_1,-1 );

		long_3 = long_3 * long_2;
		double_1 = double_1 * double_1;
	}
	double_1 = double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		short short_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_3 = unsigned_int_2;
		}
		char_2 = char_1 + char_1;
		short_1 = short_1;
	}
	int_1 = int_1;
	return int_1;
}
int v_remote_write_plaintext(double parameter_2)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float_1 = float_1 + float_1;
	v_report_error(char_1,long_1,-1 );

	float_1 = float_1 * float_1;
	if(1)
	{
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "y_") < 0)
	{
	}
	return int_1;
}
int v_remote_read_plaintext(double parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	v_report_error(char_1,long_1,-1 );

	float_1 = float_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return int_1;
}
void v_print_versions()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	float_2 = float_1 + float_1;
	long_1 = long_1;
	double_1 = double_1 + double_1;
	short_2 = short_1 * short_2;
	int_1 = int_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	short_3 = short_2 * short_3;
}
void v_examples( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long_1 = long_1 * long_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[E") < 0)
	{
		short_1 = short_1 * short_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	int_1 = int_2;
	int_4 = int_3 * int_1;
	int_4 = int_4;
	short_2 = short_1;
	double_1 = double_1 + double_1;
	int_3 = int_2 * int_4;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	long_1 = long_2 + long_2;
	int_6 = int_1 + int_5;
	double_2 = double_1 * double_1;
	int_2 = int_4 + int_5;
	long_3 = long_3 * long_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	float_2 = float_1 + float_2;
	short_3 = short_3 + short_4;
	unsigned_int_4 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_5;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
	long_1 = long_3;
	int_5 = int_6;
}
void v_usage()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short_1 = short_1;
	double_2 = double_1 * double_1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_3;
	char_1 = char_1 + char_1;
	char_2 = char_2;
}
int v_message_push()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = double_2;
	int_2 = int_1 + int_2;
	int_2 = int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float_3 = float_1 * float_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_3 = double_2 * double_1;
	}
	short_1 = short_2;
	if(1)
	{
		float_4 = float_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_2 = double_1 * double_4;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_4 + unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_4;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4;
		}
		unsigned_int_3 = unsigned_int_5 + unsigned_int_1;
		if(1)
		{
			float_3 = float_3 + float_4;
		}
		float_4 = float_3 * float_3;
		if(1)
		{
			int_3 = int_3;
		}
		if(1)
		{
			float_4 = float_3;
			if(1)
			{
				short_2 = short_1 + short_1;
			}
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
	}
	return int_3;
	v_report_error(char_1,long_4,-1 );

}
int v_report_log_string( char parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char * vul_var;
	int_2 = int_1 * int_1;
	double_1 = double_1;
	double_1 = double_1 * double_1;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	short_2 = short_1;
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	char controller4vul_91[1];
	fgets(controller4vul_91 ,2 ,stdin);
	if( strcmp( controller4vul_91, "y") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		float float_1 = 1;
		int_1 = int_3;
		char controller4vul_92[2];
		fgets(controller4vul_92 ,3 ,stdin);
		if( strcmp( controller4vul_92, "1?") < 0)
		{
			char controller4vul_93[1];
			fgets(controller4vul_93 ,2 ,stdin);
			if( strcmp( controller4vul_93, "B") < 0)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_2 = 1;
				int int_3 = 1;
				char char_1 = 1;
				float float_1 = 1;
				vul_var=(char*)malloc(20*sizeof(char));
				strcpy(vul_var, "CWE-761");
				if(uni_para == 436)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				float_1 = float_1;
			}
		}
		char_1 = char_1 + char_1;
	}
	short_2 = short_2 + short_1;
}
void v_report_error( char parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_1 * char_2;
	int_3 = int_4;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			char_1 = char_2 * char_2;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_5 = 1;
			double_3 = double_1;
		}
		int_4 = int_4;
	}
	if(1)
	{
	}
	char controller4vul_86[2];
	fgets(controller4vul_86 ,3 ,stdin);
	if( strcmp( controller4vul_86, "}3") < 0)
	{
		char controller4vul_87[1];
		fgets(controller4vul_87 ,2 ,stdin);
		if( strcmp( controller4vul_87, "&") > 0)
		{
			char controller4vul_88[1];
			fgets(controller4vul_88 ,2 ,stdin);
			if( strcmp( controller4vul_88, ">") < 0)
			{
				char controller4vul_89[2];
				fgets(controller4vul_89 ,3 ,stdin);
				if( strcmp( controller4vul_89, "pq") < 0)
				{
					char controller4vul_90[1];
					fgets(controller4vul_90 ,2 ,stdin);
					if( strcmp( controller4vul_90, ")") > 0)
					{
						int int_1 = 1;
						int int_2 = 1;
						char char_1 = 1;
						char char_2 = 1;
						int int_3 = 1;
						int int_4 = 1;
						double double_1 = 1;
						double double_2 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						unsigned int unsigned_int_3 = 1;
						double double_3 = 1;
						float float_1 = 1;
						float float_2 = 1;
						double double_4 = 1;
						double double_5 = 1;
						long long_1 = 1;
						long long_2 = 1;
						long long_3 = 1;
						int int_5 = 1;
						int_3 = v_report_log_string(char_1,uni_para);

						float_2 = float_1 * float_2;
					}
				}
			}
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_5 = 1;
			double_4 = double_5;
			long_3 = long_1 * long_2;
			if(1)
			{
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
				int_3 = int_3 * int_3;
			}
			int_5 = int_2 * int_3;
			if(1)
			{
				if(1)
				{
					long_2 = long_2;
				}
			}
		}
	}
}
int main()
{
	int uni_para =436;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_5 = 1;
	long long_4 = 1;
	int_2 = int_1 * int_1;
	char_1 = char_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		float_3 = float_1 * float_2;
	}
	if(1)
	{
		double_2 = double_3 * double_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_3 = char_2 + char_3;
	int_3 = int_2 * int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		int_3 = int_2 + int_4;
	}
	if(1)
	{
		double_4 = double_2 * double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_5 = 1;
		long long_4 = 1;
		long_3 = long_1 * long_2;
	}
	if(1)
	{
		long_2 = long_3 + long_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		double_1 = double_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_5 = 1;
		long long_4 = 1;
		short_2 = short_1 * short_2;
	}
	if(1)
	{
		float_3 = float_1 + float_3;
	}
	char controller4vul_69[1];
	fgets(controller4vul_69 ,2 ,stdin);
	if( strcmp( controller4vul_69, "A") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_5 = 1;
		long long_4 = 1;
		double_4 = double_5;
		char controller4vul_70[1];
		fgets(controller4vul_70 ,2 ,stdin);
		if( strcmp( controller4vul_70, "l") < 0)
		{
			int_4 = v_do_target(uni_para);

			float_1 = float_2 * float_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Dq") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_5 = 1;
		long long_4 = 1;
		int_4 = int_5 * int_4;
		long_3 = long_4;
	}
	return int_2;
}
