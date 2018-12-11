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

double aws_iot_mqtt_internal_deserialize_ack( long parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4,char parameter_5);
void _aws_iot_mqtt_internal_serialize_publish( short parameter_1,double parameter_2,double parameter_3,short parameter_4,unsigned int parameter_5,char parameter_6,short parameter_7,char parameter_8,int parameter_9,unsigned int parameter_10,long parameter_11);
unsigned int _aws_iot_mqtt_internal_publish( char parameter_1,long parameter_2,short parameter_3,double parameter_4);
int aws_iot_mqtt_publish( double parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4);
short _aws_iot_mqtt_force_client_disconnect( double parameter_1);
unsigned int aws_iot_mqtt_internal_serialize_zero( float parameter_1,char parameter_2,short parameter_3,int parameter_4);
float _aws_iot_mqtt_internal_disconnect( int parameter_1);
long aws_iot_mqtt_disconnect( short parameter_1);
double _aws_iot_mqtt_handle_disconnect( unsigned int parameter_1);
short _aws_iot_mqtt_keep_alive( double parameter_1);
double _aws_iot_mqtt_handle_reconnect( int parameter_1);
double _aws_iot_mqtt_internal_yield( long parameter_1,float parameter_2);
void aws_iot_mqtt_yield( short parameter_1,float parameter_2);
long iot_subscribe_callback_handler( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4);
float _aws_iot_mqtt_internal_subscribe( long parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5);
float aws_iot_mqtt_subscribe( float parameter_1,int parameter_2,float parameter_3,char parameter_4,float parameter_5);
float aws_iot_mqtt_autoreconnect_set_status( unsigned int parameter_1,unsigned int parameter_2);
unsigned int iot_tls_destroy( float parameter_1);
short iot_tls_is_connected( unsigned int parameter_1);
int iot_tls_disconnect();
unsigned int iot_tls_mqtt_get_fixed_uint16_from_message( int parameter_1,unsigned int parameter_2);
float iot_tls_mqtt_copy_string_from_message( char parameter_1,unsigned int parameter_2,float parameter_3);
float iot_tls_mqtt_get_end_of_variable_length_int( int parameter_1,double parameter_2);
unsigned int iot_tls_mqtt_read_variable_length_int( unsigned int parameter_1,float parameter_2);
double iot_tls_write( long parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,double parameter_5);
unsigned int isTimerExpired( char parameter_1);
long iot_tls_read( double parameter_1,short parameter_2,float parameter_3,char parameter_4,char parameter_5);
double _iot_tls_verify_cert(unsigned int parameter_2,int parameter_3,long parameter_4);
float iot_tls_connect( char parameter_1,unsigned int parameter_2);
void _iot_tls_set_connect_params( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,int parameter_6,int parameter_7,int parameter_8);
int iot_tls_init( int parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,float parameter_6,float parameter_7,long parameter_8);
int aws_iot_mqtt_init( char parameter_1,double parameter_2);
long _aws_iot_mqtt_deserialize_suback( float parameter_1,int parameter_2,double parameter_3,short parameter_4,long parameter_5,char parameter_6);
char aws_iot_mqtt_get_next_packet_id( char parameter_1);
short _aws_iot_mqtt_serialize_subscribe( char parameter_1,double parameter_2,float parameter_3,double parameter_4,long parameter_5,unsigned int parameter_6,short parameter_7,double parameter_8,char parameter_9);
float _aws_iot_mqtt_get_free_message_handler_index( int parameter_1);
int _aws_iot_mqtt_internal_resubscribe( double parameter_1);
unsigned int aws_iot_mqtt_resubscribe( char parameter_1);
short _aws_iot_mqtt_deserialize_connack( float parameter_1,float parameter_2,char parameter_3,short parameter_4);
void countdown_sec( short parameter_1,char parameter_2);
float aws_iot_mqtt_internal_serialize_ack( int parameter_1,int parameter_2,char parameter_3,long parameter_4,int parameter_5,float parameter_6);
float _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,long parameter_3);
float _aws_iot_mqtt_internal_deliver_message( char parameter_1,char parameter_2,char parameter_3,double parameter_4,int uni_para);
void aws_iot_mqtt_internal_read_uint16_t( short parameter_1);
unsigned int _aws_iot_mqtt_read_string_with_len( char parameter_1,short parameter_2,double parameter_3,short parameter_4);
double aws_iot_mqtt_internal_decode_remaining_length_from_buffer( double parameter_1,char parameter_2,float parameter_3);
double aws_iot_mqtt_internal_read_char( int parameter_1);
float aws_iot_mqtt_internal_deserialize_publish( long parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4,char parameter_5,double parameter_6,int parameter_7,unsigned int parameter_8,int parameter_9,double parameter_10);
short _aws_iot_mqtt_internal_handle_publish( short parameter_1,char parameter_2,int uni_para);
long _aws_iot_mqtt_internal_decode_packet_remaining_len( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4);
unsigned int _aws_iot_mqtt_internal_readWrapper( double parameter_1,short parameter_2,int parameter_3,long parameter_4,float parameter_5);
short _aws_iot_mqtt_internal_read_packet( short parameter_1,unsigned int parameter_2,long parameter_3);
float aws_iot_mqtt_internal_cycle_read( short parameter_1,short parameter_2,double parameter_3,int uni_para);
char aws_iot_mqtt_internal_wait_for_read( char parameter_1,long parameter_2,float parameter_3,int uni_para);
char has_timer_expired( char parameter_1);
double aws_iot_mqtt_internal_send_packet( float parameter_1,float parameter_2,int parameter_3);
void aws_iot_mqtt_internal_write_uint_16( double parameter_1,float parameter_2);
void aws_iot_mqtt_internal_write_utf8_string( short parameter_1,char parameter_2,int parameter_3);
long aws_iot_mqtt_internal_write_len_to_buffer( float parameter_1,double parameter_2);
void aws_iot_mqtt_internal_write_char( unsigned int parameter_1,unsigned int parameter_2);
long aws_iot_mqtt_internal_init_header( float parameter_1,short parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5);
short aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( int parameter_1);
int _aws_iot_get_connect_packet_length( short parameter_1);
int _aws_iot_mqtt_serialize_connect( unsigned int parameter_1,char parameter_2,float parameter_3,long parameter_4);
void countdown_ms( float parameter_1,double parameter_2);
void init_timer( int parameter_1);
void aws_iot_mqtt_set_connect_params( unsigned int parameter_1,unsigned int parameter_2);
long _aws_iot_mqtt_internal_connect( long parameter_1,char parameter_2,int uni_para);
long aws_iot_mqtt_set_client_state( long parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
char _aws_iot_mqtt_is_client_state_valid_for_connect( char parameter_1);
char aws_iot_mqtt_get_client_state( float parameter_1,int uni_para);
double aws_iot_mqtt_internal_flushBuffers( float parameter_1);
long aws_iot_mqtt_connect( char parameter_1,char parameter_2,int uni_para);
short aws_iot_mqtt_is_client_connected( double parameter_1);
short aws_iot_mqtt_attempt_reconnect( char parameter_1);
unsigned int aws_iot_is_autoreconnect_enabled( int parameter_1);
unsigned int disconnectCallbackHandler( char parameter_1);
unsigned int parseInputArgsForConnectParams( int parameter_1,char parameter_2);
double aws_iot_mqtt_internal_deserialize_ack( long parameter_1,unsigned int parameter_2,double parameter_3,char parameter_4,char parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double_1 = aws_iot_mqtt_internal_read_char(int_1);

	double_1 = cos ( double_2 ) ;
	aws_iot_mqtt_internal_read_uint16_t(short_1);

	int_1 = int_1;
	double_2 = double_2 * double_1;
	double_1 = double_1 * double_2;
	double_2 = double_2 + double_2;
	double_2 = cosh ( double_1 ) ;
	double_2 = acos ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_3 = 1;
		double double_6 = 1;
		int int_2 = 1;
		long long_3 = 1;
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		double_3 = acos ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 * long_1;
	double_3 = atan ( double_4 ) ;
	double_2 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(double_2,char_1,float_1);

	double_3 = ldexp ( double_5 , int_3 ) ;
	if(1)
	{
		double_2 = log10 ( double_4 ) ;
	}
	double_3 = sinh ( double_2 ) ;
	double_1 = log ( double_6 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_3 = 1;
		double double_6 = 1;
		int int_2 = 1;
		long long_3 = 1;
		long_3 = long_3;
	}
	double_5 = cos ( double_3 ) ;
	double_4 = log10 ( double_3 ) ;
}
void _aws_iot_mqtt_internal_serialize_publish( short parameter_1,double parameter_2,double parameter_3,short parameter_4,unsigned int parameter_5,char parameter_6,short parameter_7,char parameter_8,int parameter_9,unsigned int parameter_10,long parameter_11)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	short_1 = short_1;
	double_1 = atan ( double_2 ) ;
	float_1 = float_1 * float_1;
	double_2 = fabs ( double_2 ) ;
	double_2 = double_2 + double_2;
	if(1)
	{
		long_1 = aws_iot_mqtt_internal_write_len_to_buffer(float_2,double_2);

		double_2 = tan ( double_3 ) ;
	}
	double_1 = ceil ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	float_3 = float_3;
	if(1)
	{
		double_2 = double_2;
	}
	if(1)
	{
		double_1 = sinh ( double_3 ) ;
	}
	aws_iot_mqtt_internal_write_char(unsigned_int_2,unsigned_int_1);

	long_1 = long_1;
	if(1)
	{
		double_2 = fabs ( double_4 ) ;
	}
	double_3 = ldexp ( double_1 , int_1 ) ;
	short_1 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(int_2);

	double_3 = log ( double_4 ) ;
	double_1 = ldexp ( double_1 , int_2 ) ;
	double_2 = tanh ( double_3 ) ;
	if(1)
	{
		aws_iot_mqtt_internal_write_utf8_string(short_2,char_1,int_2);

		double_3 = exp ( double_2 ) ;
	}
	double_4 = tanh ( double_2 ) ;
	long_1 = aws_iot_mqtt_internal_init_header(float_3,short_1,double_3,unsigned_int_1,short_1);

	double_3 = sinh ( double_3 ) ;
	double_2 = ldexp ( double_3 , int_2 ) ;
	unsigned_int_3 = unsigned_int_3;
	aws_iot_mqtt_internal_write_uint_16(double_1,float_4);

}
unsigned int _aws_iot_mqtt_internal_publish( char parameter_1,long parameter_2,short parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_6 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_7 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	double double_10 = 1;
	double_1 = sinh ( double_1 ) ;
	double_2 = atan2 ( double_2 , double_2 ) ;
	_aws_iot_mqtt_internal_serialize_publish(short_1,double_2,double_1,short_1,unsigned_int_1,char_1,short_2,char_1,int_1,unsigned_int_2,long_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_3 = atan2 ( double_2 , double_4 ) ;
	char_1 = aws_iot_mqtt_get_next_packet_id(char_1);

	double_1 = floor ( double_5 ) ;
	long_1 = long_2;
	init_timer(int_2);

	double_6 = ceil ( double_5 ) ;
	long_1 = long_2 * long_3;
	if(1)
	{
		char_1 = char_2;
	}
	countdown_ms(float_1,double_6);

	double_6 = fabs ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		int int_2 = 1;
		double double_6 = 1;
		long long_3 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char char_3 = 1;
		double double_7 = 1;
		float float_2 = 1;
		int int_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		char char_4 = 1;
		double double_10 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	char_3 = aws_iot_mqtt_internal_wait_for_read(char_1,long_1,float_1,319);

	double_6 = log10 ( double_5 ) ;
	if(1)
	{
		double_3 = fabs ( double_5 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		int int_2 = 1;
		double double_6 = 1;
		long long_3 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char char_3 = 1;
		double double_7 = 1;
		float float_2 = 1;
		int int_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		char char_4 = 1;
		double double_10 = 1;
		long_4 = long_2 * long_3;
		if(1)
		{
			double_7 = aws_iot_mqtt_internal_send_packet(float_2,float_2,int_3);

			double_1 = sinh ( double_8 ) ;
		}
		char_4 = char_1 + char_4;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_2 = 1;
			int int_2 = 1;
			double double_6 = 1;
			long long_3 = 1;
			char char_2 = 1;
			float float_1 = 1;
			char char_3 = 1;
			double double_7 = 1;
			float float_2 = 1;
			int int_3 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_4 = 1;
			char char_4 = 1;
			double double_10 = 1;
			double_9 = aws_iot_mqtt_internal_deserialize_ack(long_2,unsigned_int_1,double_8,char_2,char_1);

			double_10 = acos ( double_10 ) ;
		}
	}
	double_6 = log ( double_9 ) ;
}
int aws_iot_mqtt_publish( double parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	double_1 = double_1;
	double_1 = cosh ( double_1 ) ;
	double_1 = log10 ( double_2 ) ;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "B$") == 0)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		short_1 = aws_iot_mqtt_is_client_connected(double_2);

		char_1 = char_2;
	}
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "C9") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		double_3 = ceil ( double_1 ) ;
	}
	char_2 = aws_iot_mqtt_get_client_state(float_1,523);

	double_2 = pow ( double_4 , double_4 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		int_1 = int_1;
	}
	unsigned_int_1 = _aws_iot_mqtt_internal_publish(char_1,long_1,short_1,double_4);

	double_1 = ldexp ( double_1 , int_2 ) ;
	long_1 = aws_iot_mqtt_set_client_state(long_1,long_2,unsigned_int_2,915);

	long_3 = long_3 + long_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_8 = unsigned_int_6 + unsigned_int_7;
	}
	float_1 = float_1 + float_1;
}
short _aws_iot_mqtt_force_client_disconnect( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double_2 = double_1 * double_1;
	long_3 = long_1 * long_2;
	double_3 = log ( double_1 ) ;
}
unsigned int aws_iot_mqtt_internal_serialize_zero( float parameter_1,char parameter_2,short parameter_3,int parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	int int_1 = 1;
	short short_3 = 1;
	float_1 = float_2;
	double_1 = double_2;
	double_3 = sqrt ( double_1 ) ;
	double_4 = cos ( double_5 ) ;
	if(1)
	{
		double_4 = log ( double_5 ) ;
	}
	if(1)
	{
		long_1 = long_2;
	}
	float_1 = float_2;
	long_2 = aws_iot_mqtt_internal_init_header(float_2,short_1,double_1,unsigned_int_1,short_2);

	long_1 = aws_iot_mqtt_internal_write_len_to_buffer(float_1,double_2);

	double_2 = asin ( double_1 ) ;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		int int_1 = 1;
		short short_3 = 1;
		short_1 = short_3;
	}
	double_3 = cosh ( double_1 ) ;
	double_2 = double_6;
	aws_iot_mqtt_internal_write_char(unsigned_int_1,unsigned_int_2);

	double_6 = floor ( double_7 ) ;
	int_1 = int_1 * int_1;
}
float _aws_iot_mqtt_internal_disconnect( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_6 = 1;
	double double_6 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double_1 = aws_iot_mqtt_internal_send_packet(float_1,float_1,int_1);

	double_1 = tan ( double_2 ) ;
	double_3 = double_4;
	double_3 = log10 ( double_4 ) ;
	double_2 = double_4 * double_5;
	double_3 = double_1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		float float_6 = 1;
		double double_6 = 1;
		int int_3 = 1;
		float float_3 = 1;
		float_4 = float_2 + float_3;
	}
	float_5 = float_2;
	short_1 = short_1;
	char controller_2[5];
	fgets(controller_2 ,5 ,stdin);
	if( strcmp( controller_2, "e8lx") == 0)
	{
		unsigned_int_1 = aws_iot_mqtt_internal_serialize_zero(float_4,char_1,short_1,int_2);

		countdown_ms(float_6,double_2);

		double_5 = double_5 + double_1;
	}
	double_4 = double_3 + double_6;
	double_1 = ceil ( double_3 ) ;
	if(1)
	{
		int_3 = int_2;
	}
	double_6 = sinh ( double_1 ) ;
	init_timer(int_3);

}
long aws_iot_mqtt_disconnect( short parameter_1)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char_1 = aws_iot_mqtt_get_client_state(float_1,154);

	float_1 = _aws_iot_mqtt_internal_disconnect(int_1);

	float_1 = float_1 * float_1;
	short_1 = aws_iot_mqtt_is_client_connected(double_1);

	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_2 = ldexp ( double_1 , int_2 ) ;
	}
	double_1 = acos ( double_1 ) ;
	if(1)
	{
		char_1 = char_1;
	}
	int_2 = int_3;
	if(1)
	{
		double_1 = atan ( double_2 ) ;
	}
	float_2 = float_1 * float_1;
	if(1)
	{
		double_1 = exp ( double_2 ) ;
	}
	else
	{
		long_1 = aws_iot_mqtt_set_client_state(long_1,long_1,unsigned_int_2,827);

		double_1 = asin ( double_1 ) ;
	}
	double_2 = pow ( double_2 , double_2 ) ;
}
double _aws_iot_mqtt_handle_disconnect( unsigned int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short_1 = short_1;
	short_1 = _aws_iot_mqtt_force_client_disconnect(double_1);

	double_1 = exp ( double_1 ) ;
	long_1 = aws_iot_mqtt_disconnect(short_1);

	double_1 = fabs ( double_2 ) ;
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	char controller_2[4];
	fgets(controller_2 ,4 ,stdin);
	if( strcmp( controller_2, "/RT") > 0)
	{
		double_3 = tanh ( double_1 ) ;
	}
	long_2 = long_1 * long_2;
	double_4 = acos ( double_3 ) ;
}
short _aws_iot_mqtt_keep_alive( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int_1 = int_1;
	init_timer(int_2);

	long_1 = long_2;
	double_1 = double_1;
	short_2 = short_1 + short_2;
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		double_1 = double_1 + double_1;
	}
	if(1)
	{
		double_2 = atan2 ( double_2 , double_2 ) ;
	}
	if(1)
	{
		double_2 = double_1;
		double_2 = _aws_iot_mqtt_handle_disconnect(unsigned_int_1);

		short_2 = short_2 + short_2;
	}
	double_3 = pow ( double_2 , double_3 ) ;
	countdown_ms(float_1,double_2);

	float_3 = float_2 + float_1;
	double_3 = cos ( double_2 ) ;
	double_2 = ldexp ( double_3 , int_1 ) ;
	if(1)
	{
		int_2 = int_2;
	}
	unsigned_int_1 = aws_iot_mqtt_internal_serialize_zero(float_4,char_1,short_1,int_2);

	double_1 = atan2 ( double_2 , double_2 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		double_4 = pow ( double_2 , double_1 ) ;
		double_4 = tanh ( double_3 ) ;
	}
	char_1 = has_timer_expired(char_1);

	double_2 = aws_iot_mqtt_internal_send_packet(float_1,float_1,int_3);

	long_1 = long_2 + long_1;
	countdown_sec(short_2,char_1);

	unsigned_int_2 = unsigned_int_2;
	char_3 = char_2 + char_1;
}
double _aws_iot_mqtt_handle_reconnect( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	if(1)
	{
		double_1 = tanh ( double_1 ) ;
	}
	double_2 = cos ( double_1 ) ;
	if(1)
	{
		char_2 = char_2 + char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = double_3 + double_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			double double_4 = 1;
			short short_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			countdown_ms(float_1,double_2);

			float_2 = float_3;
			if(1)
			{
				double_4 = exp ( double_1 ) ;
			}
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
	}
	short_1 = aws_iot_mqtt_attempt_reconnect(char_1);

	double_5 = acos ( double_2 ) ;
	if(1)
	{
		double_2 = atan ( double_6 ) ;
	}
	char_1 = has_timer_expired(char_1);

	double_1 = sqrt ( double_6 ) ;
	long_1 = aws_iot_mqtt_set_client_state(long_2,long_3,unsigned_int_2,895);

	double_4 = cosh ( double_1 ) ;
}
double _aws_iot_mqtt_internal_yield( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	short short_4 = 1;
	double_1 = _aws_iot_mqtt_handle_reconnect(int_1);

	double_1 = sinh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	countdown_ms(float_1,double_1);

	double_1 = log10 ( double_1 ) ;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_1 = aws_iot_mqtt_get_client_state(float_2,879);

	long_2 = long_2 * long_3;
	short_1 = _aws_iot_mqtt_keep_alive(double_2);

	char_1 = has_timer_expired(char_2);

	double_2 = atan2 ( double_1 , double_2 ) ;
	do
	{
		double double_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		float float_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_7 = 1;
		short short_4 = 1;
		double_1 = sinh ( double_3 ) ;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			float float_2 = 1;
			long long_3 = 1;
			short short_1 = 1;
			double double_2 = 1;
			char char_2 = 1;
			double double_4 = 1;
			double double_6 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_7 = 1;
			short short_4 = 1;
			if(1)
			{
				double_3 = cos ( double_3 ) ;
			}
			double_4 = fabs ( double_5 ) ;
		}
		double_6 = tan ( double_2 ) ;
		if(1)
		{
			float_3 = float_3;
		}
		else
		{
			if(1)
			{
				double_4 = _aws_iot_mqtt_handle_disconnect(unsigned_int_3);

				unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
			}
		}
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			float float_2 = 1;
			long long_3 = 1;
			short short_1 = 1;
			double double_2 = 1;
			char char_2 = 1;
			double double_4 = 1;
			double double_6 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_7 = 1;
			short short_4 = 1;
			float_3 = aws_iot_mqtt_internal_cycle_read(short_2,short_3,double_6,865);

			long_1 = aws_iot_mqtt_set_client_state(long_4,long_5,unsigned_int_4,647);

			unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				float float_2 = 1;
				long long_3 = 1;
				short short_1 = 1;
				double double_2 = 1;
				char char_2 = 1;
				double double_4 = 1;
				double double_6 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				short short_3 = 1;
				long long_4 = 1;
				long long_5 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_2 = 1;
				double double_3 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_7 = 1;
				short short_4 = 1;
				double_3 = fmod ( double_3 , double_7 ) ;
				if(1)
				{
					unsigned_int_2 = unsigned_int_4 + unsigned_int_4;
				}
				double_2 = double_6 * double_7;
				init_timer(int_1);

				int_1 = int_1;
				short_4 = short_4;
			}
			else
			{
			}
		}
		if(1)
		{
		}
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	unsigned_int_3 = unsigned_int_3 * unsigned_int_1;
	looper_1 += 1;
	int_2 = int_2;
}
void aws_iot_mqtt_yield( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	double double_5 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	float_2 = float_1 + float_1;
	if(1)
	{
		double_2 = log10 ( double_1 ) ;
	}
	double_2 = pow ( double_3 , double_2 ) ;
	if(1)
	{
		char_1 = aws_iot_mqtt_get_client_state(float_3,620);

		double_3 = ldexp ( double_4 , int_1 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		double double_5 = 1;
		if(1)
		{
			short_1 = aws_iot_mqtt_is_client_connected(double_3);

			long_1 = aws_iot_mqtt_set_client_state(long_2,long_2,unsigned_int_1,87);

			short_1 = short_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			float float_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_2 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			double double_5 = 1;
			float_1 = float_4;
		}
		unsigned_int_2 = unsigned_int_1;
		if(1)
		{
			double_1 = floor ( double_1 ) ;
		}
	}
	int_1 = int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		double double_5 = 1;
		double_5 = double_1 * double_4;
		if(1)
		{
			double_3 = fmod ( double_6 , double_2 ) ;
		}
	}
	double_2 = floor ( double_6 ) ;
	double_1 = _aws_iot_mqtt_internal_yield(long_1,float_3);

}
long iot_subscribe_callback_handler( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = ceil ( double_2 ) ;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_3 = double_3;
	double_4 = sinh ( double_2 ) ;
}
float _aws_iot_mqtt_internal_subscribe( long parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	double double_5 = 1;
	short short_2 = 1;
	float float_4 = 1;
	char char_4 = 1;
	double double_7 = 1;
	double double_6 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_2;
	char_1 = aws_iot_mqtt_get_next_packet_id(char_1);

	double_2 = double_2 + double_2;
	int_1 = int_2;
	long_1 = _aws_iot_mqtt_deserialize_suback(float_1,int_2,double_1,short_1,long_2,char_2);

	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	int_1 = int_2;
	int_3 = int_1 + int_3;
	char_2 = aws_iot_mqtt_internal_wait_for_read(char_3,long_1,float_1,568);

	unsigned_int_4 = unsigned_int_4 * unsigned_int_1;
	countdown_ms(float_1,double_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	float_2 = _aws_iot_mqtt_get_free_message_handler_index(int_1);

	double_3 = fmod ( double_1 , double_1 ) ;
	long_1 = long_2 + long_3;
	double_1 = tan ( double_1 ) ;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		double_4 = acos ( double_4 ) ;
	}
	double_2 = fabs ( double_2 ) ;
	if(1)
	{
		float_3 = float_2 + float_3;
	}
	double_5 = asin ( double_3 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		double double_4 = 1;
		float float_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		float float_4 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_6 = 1;
		long long_4 = 1;
		init_timer(int_2);

		short_2 = _aws_iot_mqtt_serialize_subscribe(char_1,double_3,float_4,double_4,long_3,unsigned_int_2,short_2,double_4,char_4);

		double_6 = fmod ( double_5 , double_2 ) ;
	}
	double_4 = exp ( double_4 ) ;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "<") == 0)
	{
		double_3 = aws_iot_mqtt_internal_send_packet(float_2,float_4,int_2);

		int_2 = int_2 * int_3;
	}
	float_3 = float_3 + float_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		double double_4 = 1;
		float float_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		float float_4 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_6 = 1;
		long long_4 = 1;
		long_4 = long_1 + long_1;
	}
	double_4 = cos ( double_4 ) ;
	double_1 = tanh ( double_3 ) ;
	double_2 = exp ( double_4 ) ;
	float_3 = float_3;
	double_4 = log ( double_1 ) ;
	double_7 = double_2 * double_7;
}
float aws_iot_mqtt_subscribe( float parameter_1,int parameter_2,float parameter_3,char parameter_4,float parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long_1 = aws_iot_mqtt_set_client_state(long_2,long_3,unsigned_int_1,38);

	double_1 = sinh ( double_2 ) ;
	float_1 = float_1 * float_1;
	float_2 = _aws_iot_mqtt_internal_subscribe(long_2,double_2,unsigned_int_2,int_1,short_1);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		double_3 = tan ( double_3 ) ;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		float float_4 = 1;
		char char_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char_1 = aws_iot_mqtt_get_client_state(float_3,113);

		float_4 = float_2 + float_2;
	}
	double_3 = double_3;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		float float_4 = 1;
		char char_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char_2 = char_2 * char_1;
	}
	double_3 = cosh ( double_3 ) ;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		float float_4 = 1;
		char char_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short_2 = aws_iot_mqtt_is_client_connected(double_4);

		short_3 = short_2 + short_1;
	}
	long_2 = long_1;
	int_2 = int_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		float float_4 = 1;
		char char_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int_4 = int_3 + int_1;
	}
	double_5 = log10 ( double_2 ) ;
}
float aws_iot_mqtt_autoreconnect_set_status( unsigned int parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = short_2;
	if(1)
	{
		double_1 = ceil ( double_2 ) ;
	}
	double_2 = atan ( double_3 ) ;
	double_1 = exp ( double_3 ) ;
}
unsigned int iot_tls_destroy( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = floor ( double_1 ) ;
	double_1 = fmod ( double_2 , double_2 ) ;
	double_3 = cos ( double_2 ) ;
	short_1 = short_1 * short_2;
	char_1 = char_1 + char_1;
	double_3 = log ( double_3 ) ;
	double_1 = atan ( double_3 ) ;
	double_3 = ldexp ( double_1 , int_1 ) ;
	double_6 = double_4 * double_5;
	return unsigned_int_1;
}
short iot_tls_is_connected( unsigned int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
int iot_tls_disconnect()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_1;
	double_3 = cosh ( double_1 ) ;
	do
	{
		double_2 = double_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	float_1 = float_2;
	looper_1 += 1;
	return int_1;
}
unsigned int iot_tls_mqtt_get_fixed_uint16_from_message( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
}
float iot_tls_mqtt_copy_string_from_message( char parameter_1,unsigned int parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = iot_tls_mqtt_get_fixed_uint16_from_message(int_1,unsigned_int_1);

	double_1 = fmod ( double_2 , double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	return float_1;
}
float iot_tls_mqtt_get_end_of_variable_length_int( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		looper_1 += 1;
		double_3 = ldexp ( double_1 , int_1 ) ;
	}
	double_4 = ldexp ( double_1 , int_2 ) ;
	return float_1;
}
unsigned int iot_tls_mqtt_read_variable_length_int( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double_1 = cos ( double_2 ) ;
	double_2 = double_3;
	int_1 = int_2;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double_2 = fabs ( double_3 ) ;
		double_4 = atan ( double_4 ) ;
		double_1 = atan ( double_2 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_3 = fabs ( double_5 ) ;
	looper_1 += 1;
	return unsigned_int_1;
}
double iot_tls_write( long parameter_1,float parameter_2,float parameter_3,unsigned int parameter_4,double parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_4 = 1;
	float_1 = iot_tls_mqtt_get_end_of_variable_length_int(int_1,double_1);

	float_1 = iot_tls_mqtt_copy_string_from_message(char_1,unsigned_int_1,float_1);

	double_2 = log ( double_2 ) ;
	int_1 = int_1 + int_2;
	double_3 = asin ( double_3 ) ;
	unsigned_int_1 = iot_tls_mqtt_read_variable_length_int(unsigned_int_2,float_2);

	short_1 = short_1;
	char_2 = has_timer_expired(char_1);

	double_1 = double_3 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			if(1)
			{
				float float_1 = 1;
				int int_1 = 1;
				double double_1 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_2 = 1;
				int int_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_2 = 1;
				short short_1 = 1;
				char char_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_4 = 1;
				double_2 = cos ( double_4 ) ;
				double_2 = pow ( double_2 , double_1 ) ;
			}
		}
		if(1)
		{
		}
	}
	double_2 = tanh ( double_3 ) ;
	if(1)
	{
		return double_5;
	}
	if(1)
	{
		return double_6;
	}
	return double_2;
}
unsigned int isTimerExpired( char parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = tan ( double_1 ) ;
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_2 = acos ( double_3 ) ;
		double_1 = double_3;
		if(1)
		{
			double_2 = double_1 + double_3;
		}
	}
	else
	{
		short_2 = short_2;
	}
	return unsigned_int_1;
}
long iot_tls_read( double parameter_1,short parameter_2,float parameter_3,char parameter_4,char parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_1;
	double_1 = ceil ( double_1 ) ;
	double_2 = fmod ( double_3 , double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_2 = cosh ( double_2 ) ;
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_2 = 1;
			float float_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = asin ( double_3 ) ;
			char_1 = has_timer_expired(char_1);

			float_1 = float_1;
			double_4 = sqrt ( double_4 ) ;
		}
		if(1)
		{
			return long_1;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = isTimerExpired(char_1);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		return long_1;
	}
	if(1)
	{
		return long_2;
	}
	else
	{
		return long_1;
	}
}
double _iot_tls_verify_cert(unsigned int parameter_2,int parameter_3,long parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = log10 ( double_1 ) ;
	double_1 = asin ( double_1 ) ;
	double_1 = sinh ( double_1 ) ;
	double_1 = cosh ( double_1 ) ;
	int_3 = int_1 * int_2;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_4 = int_3;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = fmod ( double_1 , double_1 ) ;
		short_2 = short_1 * short_2;
	}
	return double_3;
}
float iot_tls_connect( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	float float_4 = 1;
	char char_5 = 1;
	int int_7 = 1;
	char char_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_7 = 1;
	double double_7 = 1;
	float float_5 = 1;
	long long_5 = 1;
	double double_8 = 1;
	double double_10 = 1;
	long long_6 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_11 = 1;
	long_2 = long_1 * long_2;
	char_1 = char_2;
	double_1 = exp ( double_2 ) ;
	int_1 = int_1 + int_2;
	double_2 = tanh ( double_2 ) ;
	int_1 = int_1;
	double_3 = cosh ( double_3 ) ;
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		int_1 = int_3;
	}
	float_1 = float_1;
	float_1 = float_2;
	double_1 = floor ( double_1 ) ;
	int_1 = int_4;
	unsigned_int_1 = unsigned_int_1;
	_iot_tls_set_connect_params(float_3,char_3,char_4,char_4,char_2,int_2,int_1,int_1);

	int_2 = int_5 + int_5;
	long_1 = long_2 * long_3;
	long_3 = long_4;
	double_4 = cos ( double_2 ) ;
	int_3 = int_6 + int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		return float_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		unsigned_int_2 = unsigned_int_5 * unsigned_int_6;
		return float_2;
	}
	double_1 = asin ( double_4 ) ;
	unsigned_int_1 = unsigned_int_6 + unsigned_int_6;
	double_5 = sinh ( double_2 ) ;
	if(1)
	{
		double_1 = ceil ( double_4 ) ;
		return float_4;
	}
	double_3 = cos ( double_3 ) ;
	if(1)
	{
		char_1 = char_5;
		double_1 = exp ( double_4 ) ;
		return float_2;
	}
	int_7 = int_4;
	float_1 = float_1 * float_3;
	char_5 = char_2;
	if(1)
	{
		double_4 = sinh ( double_4 ) ;
		{
			return float_4;
			return float_4;
			return float_4;
		}
		double_5 = double_3;
	}
	double_1 = double_5;
	if(1)
	{
		double_5 = sinh ( double_4 ) ;
		return float_3;
	}
	double_3 = fmod ( double_3 , double_2 ) ;
	char_1 = char_6;
	if(1)
	{
		double_4 = cos ( double_2 ) ;
		return float_3;
	}
	double_1 = sinh ( double_2 ) ;
	if(1)
	{
		double_6 = double_4 * double_1;
	}
	else
	{
		unsigned_int_7 = unsigned_int_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
	double_1 = double_3 + double_4;
	if(1)
	{
		double_6 = sqrt ( double_6 ) ;
		return float_4;
	}
	char_7 = char_4;
	if(1)
	{
		if(1)
		{
			unsigned_int_7 = unsigned_int_2;
			return float_2;
		}
	}
	if(1)
	{
		double_3 = fabs ( double_7 ) ;
		return float_2;
	}
	if(1)
	{
		float_3 = float_3 + float_3;
		return float_5;
	}
	long_1 = long_1 + long_5;
	double_2 = log ( double_2 ) ;
	int_6 = int_1;
	int_2 = int_5 * int_1;
	int_5 = int_4 * int_5;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			double_2 = fmod ( double_2 , double_7 ) ;
			if(1)
			{
				unsigned_int_5 = unsigned_int_6;
			}
			return float_5;
		}
	}
	double_4 = _iot_tls_verify_cert(unsigned_int_7,int_7,long_2);

	double_7 = sinh ( double_7 ) ;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		float float_4 = 1;
		char char_5 = 1;
		int int_7 = 1;
		char char_6 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_7 = 1;
		double double_7 = 1;
		float float_5 = 1;
		long long_5 = 1;
		double double_8 = 1;
		double double_10 = 1;
		long long_6 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_11 = 1;
		long_6 = long_6 * long_1;
	}
	else
	{
		double_1 = fmod ( double_8 , double_2 ) ;
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			int int_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_5 = 1;
			long long_3 = 1;
			long long_4 = 1;
			double double_4 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_5 = 1;
			float float_4 = 1;
			char char_5 = 1;
			int int_7 = 1;
			char char_6 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_7 = 1;
			char char_7 = 1;
			double double_7 = 1;
			float float_5 = 1;
			long long_5 = 1;
			double double_8 = 1;
			double double_10 = 1;
			long long_6 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_6 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_11 = 1;
			double_9 = double_9 * double_10;
			double_2 = log10 ( double_9 ) ;
			unsigned_int_8 = unsigned_int_4 + unsigned_int_5;
			double_2 = asin ( double_4 ) ;
		}
		else
		{
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			int int_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_5 = 1;
			long long_3 = 1;
			long long_4 = 1;
			double double_4 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_5 = 1;
			float float_4 = 1;
			char char_5 = 1;
			int int_7 = 1;
			char char_6 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_7 = 1;
			char char_7 = 1;
			double double_7 = 1;
			float float_5 = 1;
			long long_5 = 1;
			double double_8 = 1;
			double double_10 = 1;
			long long_6 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_6 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_11 = 1;
			double_6 = cos ( double_1 ) ;
			float_1 = float_6 * float_1;
		}
	}
	else
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		float float_4 = 1;
		char char_5 = 1;
		int int_7 = 1;
		char char_6 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_7 = 1;
		double double_7 = 1;
		float float_5 = 1;
		long long_5 = 1;
		double double_8 = 1;
		double double_10 = 1;
		long long_6 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_11 = 1;
		unsigned_int_6 = unsigned_int_6;
		short_1 = short_1 + short_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_5 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		float float_4 = 1;
		char char_5 = 1;
		int int_7 = 1;
		char char_6 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char char_7 = 1;
		double double_7 = 1;
		float float_5 = 1;
		long long_5 = 1;
		double double_8 = 1;
		double double_10 = 1;
		long long_6 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_11 = 1;
		double_4 = fmod ( double_2 , double_10 ) ;
		double_11 = tanh ( double_8 ) ;
		double_6 = exp ( double_11 ) ;
	}
	double_10 = log10 ( double_4 ) ;
	return float_5;
}
void _iot_tls_set_connect_params( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_2 = double_1 + double_1;
	double_2 = tanh ( double_1 ) ;
	double_2 = double_2;
	float_2 = float_1 + float_1;
	double_1 = cosh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_3;
}
int iot_tls_init( int parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,float parameter_6,float parameter_7,long parameter_8)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int_1 = iot_tls_disconnect();

	int_2 = int_1;
	double_1 = double_2;
	unsigned_int_1 = iot_tls_destroy(float_1);

	double_2 = pow ( double_1 , double_2 ) ;
	float_2 = iot_tls_connect(char_1,unsigned_int_2);

	double_2 = sqrt ( double_1 ) ;
	short_1 = iot_tls_is_connected(unsigned_int_3);

	double_1 = double_2 * double_1;
	double_2 = iot_tls_write(long_1,float_1,float_2,unsigned_int_3,double_3);

	double_2 = atan ( double_2 ) ;
	double_2 = fabs ( double_1 ) ;
	_iot_tls_set_connect_params(float_3,char_2,char_1,char_1,char_1,int_1,int_1,int_2);

	long_2 = iot_tls_read(double_1,short_1,float_1,char_2,char_1);

	double_4 = double_3 + double_4;
	return int_1;
}
int aws_iot_mqtt_init( char parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	double double_7 = 1;
	int int_2 = 1;
	double double_8 = 1;
	int int_3 = 1;
	double double_9 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_5 = 1;
	float float_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_10 = 1;
	int int_4 = 1;
	double double_11 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_7 = 1;
	int_1 = int_1 + int_1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_3 = tan ( double_4 ) ;
	double_4 = double_5 + double_6;
	if(1)
	{
		double_5 = double_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		double double_7 = 1;
		int int_2 = 1;
		double double_8 = 1;
		int int_3 = 1;
		double double_9 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_5 = 1;
		float float_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_10 = 1;
		int int_4 = 1;
		double double_11 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float float_7 = 1;
		float_2 = float_1 + float_2;
		double_2 = ldexp ( double_7 , int_2 ) ;
		double_8 = log ( double_4 ) ;
		init_timer(int_3);

		double_9 = cos ( double_7 ) ;
	}
	short_1 = short_1 * short_1;
	char_1 = char_2;
	float_4 = float_3 * float_1;
	double_8 = log10 ( double_1 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	double_4 = fabs ( double_1 ) ;
	float_6 = float_4 * float_5;
	double_5 = double_8 + double_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	char_2 = char_1;
	double_7 = atan2 ( double_1 , double_1 ) ;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, ":?") > 0)
	{
		aws_iot_mqtt_set_connect_params(unsigned_int_3,unsigned_int_2);

		int_2 = int_3;
	}
	long_1 = long_1 * long_2;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		double double_7 = 1;
		int int_2 = 1;
		double double_8 = 1;
		int int_3 = 1;
		double double_9 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_5 = 1;
		float float_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_10 = 1;
		int int_4 = 1;
		double double_11 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float float_7 = 1;
		long_4 = long_2 * long_3;
		double_2 = double_9;
	}
	double_8 = log ( double_6 ) ;
	if(1)
	{
		short_1 = short_1 * short_1;
		double_10 = exp ( double_7 ) ;
		int_4 = int_4 + int_3;
	}
	double_11 = cosh ( double_11 ) ;
	double_1 = double_11 * double_4;
	double_9 = asin ( double_8 ) ;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		double double_7 = 1;
		int int_2 = 1;
		double double_8 = 1;
		int int_3 = 1;
		double double_9 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_5 = 1;
		float float_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_10 = 1;
		int int_4 = 1;
		double double_11 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float float_7 = 1;
		double_4 = sqrt ( double_10 ) ;
		int_4 = int_3 * int_1;
		double_5 = double_6 + double_4;
		double_10 = asin ( double_6 ) ;
		float_6 = float_7;
	}
	double_5 = double_5;
	double_4 = double_10;
	double_1 = asin ( double_5 ) ;
	int_2 = iot_tls_init(int_4,char_3,char_1,char_4,char_2,float_5,float_6,long_2);

	unsigned_int_4 = unsigned_int_3;
}
long _aws_iot_mqtt_deserialize_suback( float parameter_1,int parameter_2,double parameter_3,short parameter_4,long parameter_5,char parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	int int_1 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_9 = 1;
	double double_8 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_3 = short_1 * short_2;
	double_1 = atan ( double_2 ) ;
	double_3 = floor ( double_3 ) ;
	if(1)
	{
		char_3 = char_1 * char_1;
	}
	long_1 = long_2;
	double_4 = exp ( double_1 ) ;
	aws_iot_mqtt_internal_read_uint16_t(short_3);

	double_2 = acos ( double_3 ) ;
	double_5 = asin ( double_1 ) ;
	double_4 = asin ( double_1 ) ;
	if(1)
	{
		double_3 = floor ( double_4 ) ;
	}
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		short short_4 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double double_9 = 1;
		double double_8 = 1;
		char_5 = char_3 + char_4;
	}
	double_6 = fabs ( double_5 ) ;
	if(1)
	{
		int_1 = int_1;
	}
	double_3 = fmod ( double_7 , double_2 ) ;
	double_1 = aws_iot_mqtt_internal_read_char(int_1);

	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		double_7 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(double_2,char_3,float_1);

		short_2 = short_1 + short_3;
	}
	double_2 = tanh ( double_2 ) ;
	short_4 = short_1 + short_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		short short_4 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double double_9 = 1;
		double double_8 = 1;
		looper_1 += 1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			int int_1 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			short short_4 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double double_9 = 1;
			double double_8 = 1;
			double_3 = floor ( double_8 ) ;
		}
		double_9 = tanh ( double_1 ) ;
	}
	float_1 = float_1;
}
char aws_iot_mqtt_get_next_packet_id( char parameter_1)
{
	char char_1 = 1;
	return char_1;
}
short _aws_iot_mqtt_serialize_subscribe( char parameter_1,double parameter_2,float parameter_3,double parameter_4,long parameter_5,unsigned int parameter_6,short parameter_7,double parameter_8,char parameter_9)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	double double_9 = 1;
	double_1 = double_1;
	double_2 = atan ( double_3 ) ;
	double_4 = floor ( double_2 ) ;
	char_1 = char_1;
	long_1 = aws_iot_mqtt_internal_write_len_to_buffer(float_1,double_1);

	aws_iot_mqtt_internal_write_utf8_string(short_1,char_1,int_1);

	double_1 = double_1;
	if(1)
	{
		char_1 = char_2;
	}
	char_3 = char_1 * char_2;
	double_1 = fabs ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = tanh ( double_5 ) ;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "0{") < 0)
	{
		aws_iot_mqtt_internal_write_uint_16(double_1,float_1);

		char_1 = char_3;
	}
	double_5 = ldexp ( double_3 , int_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_5 = 1;
		int int_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		short_2 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(int_2);

		aws_iot_mqtt_internal_write_char(unsigned_int_1,unsigned_int_1);

		int_3 = int_4;
	}
	double_2 = pow ( double_1 , double_6 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_1 = float_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_5 = 1;
		int int_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		double_6 = log ( double_7 ) ;
		double_8 = ldexp ( double_9 , int_2 ) ;
	}
	double_4 = pow ( double_8 , double_1 ) ;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	long_1 = aws_iot_mqtt_internal_init_header(float_2,short_1,double_6,unsigned_int_1,short_3);

}
float _aws_iot_mqtt_get_free_message_handler_index( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double_1 = atan ( double_1 ) ;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	double_2 = double_2;
}
int _aws_iot_mqtt_internal_resubscribe( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	double double_6 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = exp ( double_1 ) ;
	double_2 = exp ( double_1 ) ;
	char_1 = aws_iot_mqtt_get_next_packet_id(char_1);

	double_3 = aws_iot_mqtt_internal_send_packet(float_1,float_2,int_1);

	double_4 = double_3;
	double_5 = cosh ( double_4 ) ;
	short_1 = _aws_iot_mqtt_serialize_subscribe(char_1,double_3,float_1,double_1,long_1,unsigned_int_3,short_1,double_4,char_2);

	double_5 = log10 ( double_3 ) ;
	short_4 = short_2 + short_3;
	float_3 = _aws_iot_mqtt_get_free_message_handler_index(int_1);

	double_1 = fabs ( double_6 ) ;
	char_2 = aws_iot_mqtt_internal_wait_for_read(char_2,long_2,float_2,735);

	double_3 = asin ( double_2 ) ;
	double_1 = acos ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_3 = 1;
		double double_6 = 1;
		long long_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_4 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		if(1)
		{
		}
		char_1 = char_1;
		init_timer(int_2);

		long_1 = _aws_iot_mqtt_deserialize_suback(float_3,int_3,double_6,short_1,long_2,char_2);

		double_6 = pow ( double_2 , double_7 ) ;
		double_3 = atan2 ( double_7 , double_7 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_3 = 1;
			double double_6 = 1;
			long long_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_9 = 1;
			int_4 = int_4;
		}
		double_3 = fabs ( double_5 ) ;
		if(1)
		{
			double_8 = ceil ( double_3 ) ;
		}
		float_4 = float_3 + float_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_3 = 1;
			double double_6 = 1;
			long long_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_9 = 1;
			countdown_ms(float_1,double_4);

			unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
		}
		double_3 = atan2 ( double_8 , double_4 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_3 = 1;
			double double_6 = 1;
			long long_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_9 = 1;
			double_9 = tan ( double_4 ) ;
		}
	}
	unsigned_int_6 = unsigned_int_6 * unsigned_int_2;
}
unsigned int aws_iot_mqtt_resubscribe( char parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	short_1 = aws_iot_mqtt_is_client_connected(double_1);

	char_1 = aws_iot_mqtt_get_client_state(float_1,624);

	double_2 = exp ( double_2 ) ;
	long_1 = aws_iot_mqtt_set_client_state(long_1,long_1,unsigned_int_1,26);

	double_3 = atan ( double_1 ) ;
	if(1)
	{
		double_2 = pow ( double_1 , double_2 ) ;
	}
	if(1)
	{
		double_3 = tan ( double_1 ) ;
	}
	if(1)
	{
		double_3 = log10 ( double_4 ) ;
	}
	double_4 = pow ( double_5 , double_4 ) ;
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		char_1 = char_2 * char_3;
	}
	double_3 = log ( double_5 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		double_4 = ldexp ( double_6 , int_1 ) ;
	}
	int_1 = _aws_iot_mqtt_internal_resubscribe(double_3);

	short_2 = short_2;
}
short _aws_iot_mqtt_deserialize_connack( float parameter_1,float parameter_2,char parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	double double_10 = 1;
	int int_1 = 1;
	float float_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = sinh ( double_2 ) ;
	char_1 = char_2;
	double_1 = asin ( double_1 ) ;
	float_2 = float_1 + float_1;
	double_3 = asin ( double_1 ) ;
	double_4 = tan ( double_5 ) ;
	if(1)
	{
		double_2 = pow ( double_2 , double_6 ) ;
	}
	if(1)
	{
		long_2 = long_1 + long_1;
	}
	double_6 = atan2 ( double_1 , double_7 ) ;
	double_4 = fmod ( double_1 , double_8 ) ;
	double_9 = acos ( double_1 ) ;
	double_1 = sinh ( double_9 ) ;
	double_5 = double_9;
	if(1)
	{
		double_5 = acos ( double_6 ) ;
	}
	double_4 = sinh ( double_6 ) ;
	if(1)
	{
		double_3 = sinh ( double_5 ) ;
	}
	long_1 = long_2;
	double_8 = ceil ( double_7 ) ;
	if(1)
	{
		double_3 = double_1 + double_7;
	}
	double_9 = double_5;
	unsigned_int_3 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_2;
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		double double_10 = 1;
		int int_1 = 1;
		float float_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float float_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_3 = float_3;
		long_3 = long_4;
		double_2 = log ( double_4 ) ;
		unsigned_int_3 = unsigned_int_3;
		float_1 = float_4 + float_4;
		double_7 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(double_5,char_2,float_1);

		double_4 = pow ( double_2 , double_3 ) ;
		short_2 = short_1 * short_1;
	}
	float_1 = float_5;
	double_10 = aws_iot_mqtt_internal_read_char(int_1);

}
void countdown_sec( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1;
	double_1 = cos ( double_1 ) ;
	double_1 = sinh ( double_1 ) ;
	double_2 = exp ( double_3 ) ;
}
float aws_iot_mqtt_internal_serialize_ack( int parameter_1,int parameter_2,char parameter_3,long parameter_4,int parameter_5,float parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	long_1 = aws_iot_mqtt_internal_init_header(float_1,short_1,double_1,unsigned_int_1,short_2);

	double_2 = sqrt ( double_2 ) ;
	char_1 = char_1 + char_2;
	double_1 = double_2;
	int_3 = int_2 + int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	long_2 = aws_iot_mqtt_internal_write_len_to_buffer(float_2,double_3);

	double_2 = ceil ( double_4 ) ;
	if(1)
	{
		float_2 = float_1 * float_2;
	}
	double_5 = acos ( double_3 ) ;
	int_2 = int_3;
	if(1)
	{
		double_5 = double_1 * double_5;
	}
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_4 = double_1;
	aws_iot_mqtt_internal_write_uint_16(double_1,float_2);

	int_1 = int_1 + int_2;
	aws_iot_mqtt_internal_write_char(unsigned_int_3,unsigned_int_2);

	double_6 = sinh ( double_4 ) ;
	double_2 = atan2 ( double_5 , double_6 ) ;
}
float _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,long parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_1 = sqrt ( double_1 ) ;
	if(1)
	{
		return float_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2;
	double_1 = atan2 ( double_1 , double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		short short_1 = 1;
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			int_1 = int_1 * int_1;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				double double_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				short short_1 = 1;
				looper_2 += 1;
				short_1 = short_1;
			}
		}
		if(1)
		{
			char_1 = char_2;
		}
		int_1 = int_1;
		double_2 = sqrt ( double_2 ) ;
	}
	double_1 = log10 ( double_3 ) ;
	return float_1;
}
float _aws_iot_mqtt_internal_deliver_message( char parameter_1,char parameter_2,char parameter_3,double parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	char_1 = char_1 + char_1;
	short_2 = short_1 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		double_3 = double_1 + double_2;
	}
	double_3 = atan ( double_2 ) ;
	int_2 = int_1 + int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_71[3];
		fgets(controller4vul_71 ,4 ,stdin);
		if( strcmp( controller4vul_71, ";jQ") > 0)
		{
			char controller4vul_72[5];
			fgets(controller4vul_72 ,6 ,stdin);
			if( strcmp( controller4vul_72, "Vf4TK") > 0)
			{
				long_1 = aws_iot_mqtt_set_client_state(long_2,long_1,unsigned_int_1,uni_para);

				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					float float_1 = 1;
					char char_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					double double_2 = 1;
					double double_3 = 1;
					int int_1 = 1;
					int int_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					double double_1 = 1;
					float float_2 = 1;
					float_2 = float_2 + float_2;
				}
			}
		}
	}
	float_1 = float_1;
	double_3 = double_3;
}
void aws_iot_mqtt_internal_read_uint16_t( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = tan ( double_2 ) ;
	double_2 = double_2 * double_2;
	double_3 = double_2 + double_3;
	double_2 = ceil ( double_4 ) ;
	double_4 = tan ( double_4 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
unsigned int _aws_iot_mqtt_read_string_with_len( char parameter_1,short parameter_2,double parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1;
	if(1)
	{
		double_1 = tanh ( double_1 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			double double_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			long_1 = long_1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
	}
	double_1 = exp ( double_1 ) ;
	aws_iot_mqtt_internal_read_uint16_t(short_1);

}
double aws_iot_mqtt_internal_decode_remaining_length_from_buffer( double parameter_1,char parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double_1 = log10 ( double_2 ) ;
	int_1 = int_1;
	double_2 = fabs ( double_3 ) ;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_2;
	double_3 = double_1 + double_3;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		if(1)
		{
			double_4 = floor ( double_3 ) ;
		}
		float_2 = float_1 * float_2;
		double_4 = tanh ( double_3 ) ;
		double_1 = ceil ( double_1 ) ;
		short_3 = short_3 * short_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	char_2 = char_1 + char_1;
	looper_1 += 1;
	double_2 = log ( double_4 ) ;
	double_2 = fmod ( double_1 , double_3 ) ;
}
double aws_iot_mqtt_internal_read_char( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = fabs ( double_2 ) ;
	double_1 = pow ( double_2 , double_3 ) ;
	return double_1;
}
float aws_iot_mqtt_internal_deserialize_publish( long parameter_1,float parameter_2,unsigned int parameter_3,long parameter_4,char parameter_5,double parameter_6,int parameter_7,unsigned int parameter_8,int parameter_9,double parameter_10)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_4 = 1;
	double double_7 = 1;
	short short_3 = 1;
	char char_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	short short_4 = 1;
	long long_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double_1 = aws_iot_mqtt_internal_read_char(int_1);

	double_2 = asin ( double_1 ) ;
	int_2 = int_1 * int_1;
	double_3 = floor ( double_2 ) ;
	double_1 = tanh ( double_3 ) ;
	char_1 = char_2;
	double_3 = double_2 * double_3;
	double_4 = atan ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		short short_3 = 1;
		char char_5 = 1;
		double double_8 = 1;
		double double_9 = 1;
		short short_4 = 1;
		long long_4 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		short short_3 = 1;
		char char_5 = 1;
		double double_8 = 1;
		double double_9 = 1;
		short short_4 = 1;
		long long_4 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short_1 = short_2;
	}
	float_1 = float_2;
	if(1)
	{
		double_5 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(double_6,char_3,float_2);

		double_5 = tan ( double_1 ) ;
	}
	long_3 = long_1 * long_2;
	char_1 = char_4 * char_1;
	char_3 = char_2 + char_3;
	unsigned_int_1 = _aws_iot_mqtt_read_string_with_len(char_2,short_1,double_7,short_3);

	double_7 = double_5;
	if(1)
	{
		double_5 = double_1;
	}
	char_5 = char_5;
	double_8 = sinh ( double_9 ) ;
	if(1)
	{
		double_2 = sinh ( double_6 ) ;
	}
	if(1)
	{
		double_5 = fmod ( double_4 , double_3 ) ;
	}
	aws_iot_mqtt_internal_read_uint16_t(short_4);

	long_3 = long_3 * long_4;
	char_6 = char_1;
	double_8 = cosh ( double_3 ) ;
}
short _aws_iot_mqtt_internal_handle_publish( short parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	int int_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	double_1 = cosh ( double_1 ) ;
	double_2 = fabs ( double_2 ) ;
	double_2 = sinh ( double_1 ) ;
	float_1 = float_1 * float_2;
	short_2 = short_1 + short_1;
	double_3 = ldexp ( double_4 , int_1 ) ;
	double_4 = floor ( double_5 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = ceil ( double_3 ) ;
	long_1 = long_1 + long_1;
	char controller4vul_70[3];
	fgets(controller4vul_70 ,4 ,stdin);
	if( strcmp( controller4vul_70, "W 2") == 0)
	{
		float_1 = _aws_iot_mqtt_internal_deliver_message(char_1,char_1,char_2,double_4,uni_para);

		double_2 = cos ( double_5 ) ;
	}
	double_5 = asin ( double_5 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		int int_2 = 1;
		double double_6 = 1;
		short short_3 = 1;
		int_2 = int_3;
	}
	if(1)
	{
		double_1 = log ( double_1 ) ;
	}
	long_2 = long_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		int int_2 = 1;
		double double_6 = 1;
		short short_3 = 1;
		double_4 = sinh ( double_6 ) ;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		int int_2 = 1;
		double double_6 = 1;
		short short_3 = 1;
		short_3 = short_2;
	}
	int_4 = int_4 + int_3;
}
long _aws_iot_mqtt_internal_decode_packet_remaining_len( char parameter_1,unsigned int parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_1 + double_1;
	double_2 = atan ( double_3 ) ;
	short_2 = short_1 * short_2;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		long long_1 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			double_1 = sqrt ( double_2 ) ;
		}
		char_1 = char_1 + char_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_3 = 1;
			long long_1 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		double_4 = acos ( double_4 ) ;
		double_4 = fabs ( double_5 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_6 = double_4 * double_6;
	looper_1 += 1;
	double_2 = double_7 + double_4;
	unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
	unsigned_int_2 = _aws_iot_mqtt_internal_readWrapper(double_2,short_3,int_1,long_1,float_1);

}
unsigned int _aws_iot_mqtt_internal_readWrapper( double parameter_1,short parameter_2,int parameter_3,long parameter_4,float parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_3 = int_1 * int_2;
	double_1 = log10 ( double_2 ) ;
	double_2 = log10 ( double_2 ) ;
	int_4 = int_4 + int_4;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char_1 = char_1 + char_1;
		double_1 = sinh ( double_1 ) ;
		char_1 = char_1 + char_1;
		float_1 = float_2;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = cos ( double_3 ) ;
		double_4 = sinh ( double_2 ) ;
	}
	return unsigned_int_1;
}
short _aws_iot_mqtt_internal_read_packet( short parameter_1,unsigned int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_1;
	double_1 = tanh ( double_2 ) ;
	double_3 = cosh ( double_1 ) ;
	double_1 = double_2;
	countdown_ms(float_1,double_3);

	double_2 = aws_iot_mqtt_internal_flushBuffers(float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_4 = exp ( double_4 ) ;
	int_2 = int_1 + int_1;
	double_3 = double_2 + double_5;
	double_3 = tan ( double_4 ) ;
	float_2 = float_1 * float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "UP") < 0)
	{
		return short_2;
	}
	if(1)
	{
		return short_2;
	}
	double_3 = pow ( double_4 , double_1 ) ;
	if(1)
	{
		return short_1;
	}
	if(1)
	{
		double_4 = floor ( double_6 ) ;
		do
		{
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_5 = 1;
			float float_2 = 1;
			double double_6 = 1;
			long long_1 = 1;
			char char_1 = 1;
			short short_3 = 1;
			int int_3 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_7 = 1;
			double_5 = double_7;
			if(1)
			{
				double_5 = cosh ( double_6 ) ;
				if(1)
				{
					long_1 = _aws_iot_mqtt_internal_decode_packet_remaining_len(char_1,unsigned_int_2,float_2,int_2);

					double_2 = acos ( double_1 ) ;
				}
				else
				{
					unsigned_int_3 = unsigned_int_1;
				}
			}
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		init_timer(int_1);

		unsigned_int_3 = _aws_iot_mqtt_internal_readWrapper(double_2,short_3,int_3,long_1,float_2);

		double_2 = fmod ( double_2 , double_1 ) ;
		looper_1 += 1;
		if(1)
		{
			double_6 = double_5;
			return short_3;
		}
		else
		{
			return short_3;
		}
	}
	if(1)
	{
		double_8 = double_1 * double_4;
		if(1)
		{
			return short_1;
		}
	}
	double_8 = sinh ( double_6 ) ;
	double_2 = atan2 ( double_6 , double_4 ) ;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
}
float aws_iot_mqtt_internal_cycle_read( short parameter_1,short parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = sqrt ( double_2 ) ;
	double_2 = exp ( double_2 ) ;
	char controller4vul_69[2];
	fgets(controller4vul_69 ,3 ,stdin);
	if( strcmp( controller4vul_69, ":u") == 0)
	{
		short_1 = _aws_iot_mqtt_internal_handle_publish(short_1,char_1,uni_para);

		return float_1;
	}
	long_3 = long_1 * long_2;
	if(1)
	{
		double_1 = sinh ( double_1 ) ;
	}
	double_2 = log ( double_3 ) ;
	double_3 = atan2 ( double_4 , double_1 ) ;
	if(1)
	{
		return float_2;
	}
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_2;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double_1 = double_4;
		int_1 = int_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1 + int_1;
	}
	return float_1;
}
char aws_iot_mqtt_internal_wait_for_read( char parameter_1,long parameter_2,float parameter_3,int uni_para)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = aws_iot_mqtt_internal_cycle_read(short_1,short_2,double_1,uni_para);

	float_2 = float_2;
	double_2 = fabs ( double_2 ) ;
	double_1 = fmod ( double_2 , double_2 ) ;
	if(1)
	{
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	double_3 = double_2;
	do
	{
		if(1)
		{
			double_4 = double_2;
		}
		double_4 = log ( double_3 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_1 = ldexp ( double_4 , int_1 ) ;
	looper_1 += 1;
	double_1 = cosh ( double_3 ) ;
}
char has_timer_expired( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_1;
	double_2 = double_1 * double_2;
	return char_1;
}
double aws_iot_mqtt_internal_send_packet( float parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int_1 = int_1;
	double_1 = tanh ( double_2 ) ;
	double_1 = asin ( double_1 ) ;
	if(1)
	{
		char_1 = has_timer_expired(char_1);

		double_3 = fabs ( double_3 ) ;
	}
	if(1)
	{
		double_2 = ceil ( double_1 ) ;
	}
	double_1 = atan ( double_4 ) ;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		int int_4 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	double_2 = atan ( double_4 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		int int_4 = 1;
		looper_1 += 1;
		int_2 = int_3;
		if(1)
		{
		}
		long_1 = long_1;
	}
	double_2 = fabs ( double_3 ) ;
	if(1)
	{
		double_1 = ldexp ( double_3 , int_3 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		int int_4 = 1;
		int_4 = int_2 * int_4;
	}
}
void aws_iot_mqtt_internal_write_uint_16( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = log ( double_1 ) ;
	double_2 = pow ( double_2 , double_2 ) ;
	double_1 = ceil ( double_1 ) ;
	double_1 = log ( double_2 ) ;
}
void aws_iot_mqtt_internal_write_utf8_string( short parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_1 = log ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double_3 = exp ( double_1 ) ;
		double_2 = fabs ( double_2 ) ;
	}
	aws_iot_mqtt_internal_write_uint_16(double_2,float_1);

}
long aws_iot_mqtt_internal_write_len_to_buffer( float parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_4 = 1;
	double_1 = double_1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_3 = sinh ( double_1 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_5 = 1;
		double double_4 = 1;
		double_3 = cosh ( double_1 ) ;
		double_3 = asin ( double_1 ) ;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "Uj") == 0)
		{
			double_2 = atan2 ( double_3 , double_1 ) ;
		}
		double_2 = fmod ( double_4 , double_1 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	long_1 = long_1 + long_1;
	looper_1 += 1;
	double_2 = double_5;
}
void aws_iot_mqtt_internal_write_char( unsigned int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int_1 = int_1;
	int_1 = int_1 * int_1;
}
long aws_iot_mqtt_internal_init_header( float parameter_1,short parameter_2,double parameter_3,unsigned int parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = asin ( double_1 ) ;
	if(1)
	{
		double_1 = double_2;
	}
	double_2 = atan2 ( double_3 , double_4 ) ;
	double_3 = exp ( double_2 ) ;
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		return long_1;
		double_5 = fabs ( double_5 ) ;
		double_3 = log ( double_1 ) ;
		short_2 = short_1 * short_1;
		char_1 = char_2;
		double_3 = double_4;
		short_1 = short_3;
		double_6 = double_6;
		char_2 = char_1;
		double_4 = double_5;
		double_3 = double_1;
		double_2 = double_4;
		double_1 = sqrt ( double_7 ) ;
		unsigned_int_1 = unsigned_int_2;
		double_4 = atan2 ( double_2 , double_4 ) ;
	}
	double_6 = double_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	{
		double_4 = cosh ( double_5 ) ;
	}
	double_6 = fabs ( double_5 ) ;
	long_1 = long_2 + long_2;
}
short aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = char_2;
	if(1)
	{
		double_1 = atan ( double_1 ) ;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_1 = int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_1 = asin ( double_2 ) ;
	}
	else
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_3 = fabs ( double_4 ) ;
	}
	return short_1;
}
int _aws_iot_get_connect_packet_length( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double_1 = asin ( double_2 ) ;
	double_3 = exp ( double_4 ) ;
	long_1 = long_1;
	double_2 = fabs ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		double_1 = acos ( double_5 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long_2 = long_1;
	}
	double_3 = ldexp ( double_3 , int_1 ) ;
}
int _aws_iot_mqtt_serialize_connect( unsigned int parameter_1,char parameter_2,float parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double double_7 = 1;
	float float_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	long long_2 = 1;
	int int_6 = 1;
	double double_9 = 1;
	double double_10 = 1;
	float float_4 = 1;
	long long_3 = 1;
	int int_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = cos ( double_2 ) ;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_2 = ceil ( double_1 ) ;
	int_2 = int_3;
	double_3 = double_1;
	if(1)
	{
		double_3 = log ( double_3 ) ;
	}
	{
		return int_4;
	}
	long_1 = aws_iot_mqtt_internal_write_len_to_buffer(float_1,double_4);

	double_1 = fmod ( double_2 , double_5 ) ;
	double_3 = double_6;
	if(1)
	{
		aws_iot_mqtt_internal_write_uint_16(double_5,float_1);

		unsigned_int_1 = unsigned_int_2;
	}
	int_2 = int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	aws_iot_mqtt_internal_write_utf8_string(short_1,char_1,int_5);

	float_2 = float_2 * float_1;
	double_4 = sinh ( double_1 ) ;
	double_3 = cos ( double_7 ) ;
	float_2 = float_2 * float_3;
	short_1 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(int_4);

	long_1 = aws_iot_mqtt_internal_init_header(float_2,short_2,double_3,unsigned_int_3,short_2);

	double_8 = acos ( double_2 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		int int_5 = 1;
		float float_2 = 1;
		double double_7 = 1;
		float float_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		long long_2 = 1;
		int int_6 = 1;
		double double_9 = 1;
		double double_10 = 1;
		float float_4 = 1;
		long long_3 = 1;
		int int_7 = 1;
		aws_iot_mqtt_internal_write_char(unsigned_int_2,unsigned_int_2);

		float_4 = float_4 + float_1;
	}
	if(1)
	{
		long_2 = long_1 * long_2;
		int_6 = _aws_iot_get_connect_packet_length(short_1);

		double_6 = sinh ( double_2 ) ;
		double_8 = atan ( double_2 ) ;
	}
	if(1)
	{
		double_9 = atan2 ( double_8 , double_6 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		int int_5 = 1;
		float float_2 = 1;
		double double_7 = 1;
		float float_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		long long_2 = 1;
		int int_6 = 1;
		double double_9 = 1;
		double double_10 = 1;
		float float_4 = 1;
		long long_3 = 1;
		int int_7 = 1;
		long_3 = long_1 + long_1;
	}
	double_2 = double_8;
	double_1 = log ( double_6 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		int int_5 = 1;
		float float_2 = 1;
		double double_7 = 1;
		float float_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		long long_2 = 1;
		int int_6 = 1;
		double double_9 = 1;
		double double_10 = 1;
		float float_4 = 1;
		long long_3 = 1;
		int int_7 = 1;
		int_3 = int_7 + int_3;
	}
	else
	{
		double_8 = exp ( double_6 ) ;
	}
	if(1)
	{
		double_3 = atan ( double_9 ) ;
		double_7 = double_3 + double_3;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		long_2 = long_1;
	}
	double_4 = sinh ( double_10 ) ;
	double_5 = acos ( double_3 ) ;
}
void countdown_ms( float parameter_1,double parameter_2)
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
}
void init_timer( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = pow ( double_2 , double_2 ) ;
}
void aws_iot_mqtt_set_connect_params( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_1 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	if(1)
	{
		double_2 = atan2 ( double_1 , double_2 ) ;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = cosh ( double_2 ) ;
	double_1 = double_4 + double_4;
	double_4 = acos ( double_3 ) ;
	if(1)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		double_3 = double_1;
	}
	double_2 = ldexp ( double_4 , int_2 ) ;
	else
	{
		double_2 = asin ( double_3 ) ;
	}
	long_1 = long_2;
	double_4 = atan ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1;
	double_3 = double_5 + double_6;
	double_4 = asin ( double_1 ) ;
	double_3 = log ( double_2 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	double_1 = ceil ( double_4 ) ;
	double_3 = fabs ( double_1 ) ;
	double_7 = double_7 + double_7;
	double_5 = sqrt ( double_8 ) ;
	short_1 = short_1 * short_1;
}
long _aws_iot_mqtt_internal_connect( long parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	double_1 = double_2 + double_3;
	double_2 = fmod ( double_1 , double_3 ) ;
	double_3 = atan2 ( double_3 , double_2 ) ;
	double_2 = double_1 * double_2;
	double_4 = ldexp ( double_4 , int_1 ) ;
	char controller4vul_67[3];
	fgets(controller4vul_67 ,4 ,stdin);
	if( strcmp( controller4vul_67, "F#_") == 0)
	{
		double_4 = double_1;
		char controller4vul_68[2];
		fgets(controller4vul_68 ,3 ,stdin);
		if( strcmp( controller4vul_68, "<H") == 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			float float_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = aws_iot_mqtt_internal_wait_for_read(char_2,long_1,float_1,uni_para);

			unsigned_int_1 = unsigned_int_1;
		}
	}
	char_3 = char_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	}
	long_2 = long_1;
	short_1 = short_1 * short_1;
	double_5 = ldexp ( double_4 , int_1 ) ;
	double_4 = ldexp ( double_6 , int_2 ) ;
	if(1)
	{
		double_1 = fabs ( double_3 ) ;
	}
	int_1 = int_1;
	if(1)
	{
		double_4 = atan ( double_5 ) ;
	}
	int_1 = int_1 + int_2;
	if(1)
	{
		double_3 = asin ( double_1 ) ;
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		double_6 = tanh ( double_5 ) ;
	}
	if(1)
	{
		double_1 = atan ( double_5 ) ;
	}
	double_2 = acos ( double_4 ) ;
	double_6 = sinh ( double_5 ) ;
	float_1 = float_1 * float_1;
}
long aws_iot_mqtt_set_client_state( long parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double_1 = sinh ( double_1 ) ;
	char_1 = char_1;
	double_1 = cosh ( double_1 ) ;
	char controller4vul_73[3];
	fgets(controller4vul_73 ,4 ,stdin);
	if( strcmp( controller4vul_73, "Qbd") == 0)
	{
		double double_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_6 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		char_1 = aws_iot_mqtt_get_client_state(float_1,uni_para);

		double_1 = ldexp ( double_1 , int_1 ) ;
	}
	double_1 = sinh ( double_1 ) ;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		double_2 = double_3;
		double_4 = double_3;
	}
	else
	{
		double double_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_6 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double_3 = double_4 * double_5;
	}
	double_6 = acos ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_6 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double_7 = log ( double_6 ) ;
	}
	double_3 = acos ( double_2 ) ;
}
char _aws_iot_mqtt_is_client_state_valid_for_connect( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = exp ( double_2 ) ;
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_2 = floor ( double_1 ) ;
		double_1 = double_3;
		double_3 = cosh ( double_1 ) ;
		short_2 = short_1 + short_1;
	}
	return char_1;
}
char aws_iot_mqtt_get_client_state( float parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 233)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	double_1 = atan2 ( double_1 , double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_3 = 1;
		double_3 = atan ( double_1 ) ;
	}
	double_4 = double_1 + double_2;
}
double aws_iot_mqtt_internal_flushBuffers( float parameter_1)
{
	double double_1 = 1;
	double_1 = floor ( double_1 ) ;
	return double_1;
}
long aws_iot_mqtt_connect( char parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	char char_4 = 1;
	double_1 = pow ( double_2 , double_2 ) ;
	double_2 = exp ( double_2 ) ;
	double_1 = floor ( double_2 ) ;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	long_1 = long_1 * long_1;
	double_3 = tanh ( double_4 ) ;
	if(1)
	{
		double_4 = double_4;
	}
	double_4 = asin ( double_5 ) ;
	double_5 = tan ( double_6 ) ;
	char controller4vul_65[2];
	fgets(controller4vul_65 ,3 ,stdin);
	if( strcmp( controller4vul_65, "qh") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		char char_4 = 1;
		unsigned_int_1 = unsigned_int_1;
		float_1 = float_2;
		char controller4vul_66[1];
		fgets(controller4vul_66 ,2 ,stdin);
		if( strcmp( controller4vul_66, ",") == 0)
		{
			long_1 = _aws_iot_mqtt_internal_connect(long_2,char_3,uni_para);

			double_3 = floor ( double_5 ) ;
		}
		double_7 = ceil ( double_6 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		char char_4 = 1;
		char_1 = char_2 + char_4;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
}
short aws_iot_mqtt_is_client_connected( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double_1 = pow ( double_2 , double_3 ) ;
	long_1 = long_2;
	if(1)
	{
		double_3 = cosh ( double_1 ) ;
		double_2 = asin ( double_2 ) ;
	}
	{
		double_2 = cos ( double_2 ) ;
		double_1 = floor ( double_2 ) ;
		double_4 = atan ( double_1 ) ;
	}
	double_1 = sinh ( double_4 ) ;
}
short aws_iot_mqtt_attempt_reconnect( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_2;
	double_1 = sinh ( double_2 ) ;
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	if(1)
	{
		double_3 = log10 ( double_1 ) ;
	}
	double_2 = asin ( double_4 ) ;
	if(1)
	{
		long_1 = aws_iot_mqtt_set_client_state(long_1,long_1,unsigned_int_1,61);

		double_4 = cosh ( double_3 ) ;
		double_1 = tanh ( double_2 ) ;
	}
	long_1 = aws_iot_mqtt_connect(char_1,char_1,719);

	char_1 = aws_iot_mqtt_get_client_state(float_1,558);

	unsigned_int_2 = aws_iot_mqtt_resubscribe(char_1);

	double_3 = log ( double_1 ) ;
	if(1)
	{
		double_4 = pow ( double_3 , double_3 ) ;
	}
	short_2 = aws_iot_mqtt_is_client_connected(double_2);

	double_1 = cosh ( double_3 ) ;
}
unsigned int aws_iot_is_autoreconnect_enabled( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = sinh ( double_2 ) ;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "Mm*3") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long_3 = long_1 * long_2;
		double_1 = cosh ( double_1 ) ;
	}
	float_1 = float_2;
}
unsigned int disconnectCallbackHandler( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_1 = double_1 * double_1;
	double_2 = cos ( double_3 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	double_1 = exp ( double_3 ) ;
	if(1)
	{
		unsigned_int_2 = aws_iot_is_autoreconnect_enabled(int_1);

		double_3 = pow ( double_4 , double_5 ) ;
	}
	else
	{
		double_1 = sqrt ( double_2 ) ;
		double_2 = double_5 * double_3;
		if(1)
		{
			double_2 = sinh ( double_4 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			char char_1 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double_5 = fmod ( double_6 , double_7 ) ;
		}
	}
	short_1 = aws_iot_mqtt_attempt_reconnect(char_1);

}
unsigned int parseInputArgsForConnectParams( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = sqrt ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			int_1 = int_2;
			double_1 = log ( double_1 ) ;
			double_2 = atan2 ( double_3 , double_1 ) ;
			double_3 = asin ( double_1 ) ;
			double_1 = log ( double_1 ) ;
			double_1 = fmod ( double_2 , double_1 ) ;
			double_3 = floor ( double_3 ) ;
			double_2 = double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1;
			}
			if(1)
			{
				double_3 = pow ( double_3 , double_3 ) ;
			}
			else
			{
				double double_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1;
			}
			double_4 = exp ( double_2 ) ;
		}
	}
}
int main(int argc, char **argv)
{
	int uni_para =233;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	long long_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	float float_4 = 1;
	long long_3 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_5 = 1;
	int int_8 = 1;
	double double_11 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_12 = 1;
	double double_13 = 1;
	unsigned int unsigned_int_5 = 1;
	float_1 = float_1 + float_2;
	double_1 = fabs ( double_1 ) ;
	double_2 = cosh ( double_3 ) ;
	double_4 = atan ( double_2 ) ;
	double_2 = double_3;
	double_3 = asin ( double_5 ) ;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = sinh ( double_3 ) ;
	double_1 = double_1 + double_3;
	double_3 = pow ( double_2 , double_1 ) ;
	int_5 = int_3 * int_4;
	short_2 = short_1 + short_1;
	long_1 = long_1;
	short_1 = short_3 + short_3;
	long_2 = long_1 * long_1;
	double_5 = acos ( double_4 ) ;
	double_4 = pow ( double_5 , double_3 ) ;
	float_1 = float_3;
	int_6 = int_1;
	float_4 = float_1;
	double_2 = cosh ( double_4 ) ;
	int_5 = int_6 + int_3;
	long_3 = long_1;
	double_4 = tanh ( double_3 ) ;
	double_1 = double_2 * double_1;
	double_5 = atan ( double_6 ) ;
	double_1 = acos ( double_3 ) ;
	char_3 = char_1 + char_2;
	long_3 = long_4;
	double_5 = log10 ( double_5 ) ;
	double_1 = cosh ( double_1 ) ;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_64[2];
	fgets(controller4vul_64 ,3 ,stdin);
	if( strcmp( controller4vul_64, "ds") == 0)
	{
		long_2 = aws_iot_mqtt_connect(char_1,char_3,uni_para);

		double_6 = double_1;
		return int_1;
	}
	int_7 = int_3;
	double_5 = double_5;
	double_7 = fabs ( double_8 ) ;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	double_4 = atan ( double_5 ) ;
	float_1 = float_5;
	double_9 = cosh ( double_10 ) ;
	double_3 = double_1;
	if(1)
	{
		double_5 = tan ( double_9 ) ;
		return int_7;
	}
	long_3 = long_3 * long_5;
	if(1)
	{
		double_10 = ceil ( double_9 ) ;
		return int_8;
	}
	double_8 = double_7 * double_8;
	double_8 = sinh ( double_6 ) ;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		short short_3 = 1;
		long long_2 = 1;
		float float_3 = 1;
		int int_6 = 1;
		float float_4 = 1;
		long long_3 = 1;
		double double_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_7 = 1;
		double double_7 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		long long_5 = 1;
		int int_8 = 1;
		double double_11 = 1;
		int int_9 = 1;
		int int_10 = 1;
		double double_12 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
		return int_6;
	}
	double_9 = ldexp ( double_9 , int_6 ) ;
	double_11 = ceil ( double_2 ) ;
	double_11 = ldexp ( double_7 , int_7 ) ;
	int_10 = int_4 * int_9;
	double_9 = cosh ( double_6 ) ;
	double_3 = asin ( double_12 ) ;
	double_13 = fabs ( double_4 ) ;
	if(1)
	{
		double_7 = ceil ( double_6 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		short_3 = short_3;
		if(1)
		{
		}
		int_9 = int_7 * int_3;
		double_11 = tanh ( double_8 ) ;
		double_7 = log ( double_1 ) ;
		long_1 = long_1;
		short_3 = short_1;
		if(1)
		{
			double_1 = pow ( double_5 , double_8 ) ;
		}
		double_13 = log10 ( double_7 ) ;
		double_8 = ceil ( double_12 ) ;
		double_5 = double_2;
		if(1)
		{
			double_9 = double_13;
			double_3 = double_11 + double_1;
		}
		if(1)
		{
			int_6 = int_9 + int_7;
		}
	}
	if(1)
	{
		double_1 = ceil ( double_6 ) ;
	}
	else
	{
		double_10 = double_8 * double_10;
	}
	return int_1;
}
