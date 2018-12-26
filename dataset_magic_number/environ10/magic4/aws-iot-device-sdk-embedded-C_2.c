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

float aws_iot_mqtt_internal_deserialize_ack( short parameter_1,float parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5);
float _aws_iot_mqtt_internal_serialize_publish( double parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,long parameter_6,char parameter_7,double parameter_8,long parameter_9,double parameter_10,int parameter_11);
unsigned int _aws_iot_mqtt_internal_publish( int parameter_1,short parameter_2,short parameter_3,long parameter_4);
double aws_iot_mqtt_publish( float parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4);
int _aws_iot_mqtt_force_client_disconnect( float parameter_1);
float aws_iot_mqtt_internal_serialize_zero( float parameter_1,short parameter_2,int parameter_3,short parameter_4);
float _aws_iot_mqtt_internal_disconnect( unsigned int parameter_1);
char aws_iot_mqtt_disconnect( long parameter_1);
void _aws_iot_mqtt_handle_disconnect( float parameter_1);
double _aws_iot_mqtt_keep_alive( long parameter_1);
float _aws_iot_mqtt_handle_reconnect( double parameter_1,int uni_para);
unsigned int _aws_iot_mqtt_internal_yield( double parameter_1,char parameter_2,int uni_para);
long aws_iot_mqtt_yield( int parameter_1,long parameter_2,int uni_para);
unsigned int iot_subscribe_callback_handler( float parameter_1,char parameter_2,short parameter_3,float parameter_4);
char _aws_iot_mqtt_internal_subscribe( unsigned int parameter_1,double parameter_2,float parameter_3,float parameter_4,unsigned int parameter_5);
double aws_iot_mqtt_subscribe( long parameter_1,long parameter_2,char parameter_3,int parameter_4,double parameter_5);
unsigned int aws_iot_mqtt_autoreconnect_set_status( char parameter_1,char parameter_2);
int iot_tls_destroy( unsigned int parameter_1);
void iot_tls_is_connected();
long iot_tls_disconnect( float parameter_1);
float iot_tls_mqtt_get_fixed_uint16_from_message( double parameter_1,double parameter_2);
void iot_tls_mqtt_copy_string_from_message( char parameter_1,long parameter_2,int parameter_3);
double iot_tls_mqtt_get_end_of_variable_length_int( char parameter_1,unsigned int parameter_2);
short iot_tls_mqtt_read_variable_length_int( int parameter_1,double parameter_2);
double iot_tls_write( double parameter_1,char parameter_2,char parameter_3,short parameter_4,float parameter_5);
void isTimerExpired( long parameter_1);
float iot_tls_read( int parameter_1,char parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5);
void _iot_tls_verify_cert(float parameter_2,int parameter_3,short parameter_4);
int iot_tls_connect( char parameter_1,short parameter_2);
void _iot_tls_set_connect_params( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,double parameter_6,long parameter_7,long parameter_8);
void iot_tls_init( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,long parameter_6,unsigned int parameter_7,short parameter_8);
int aws_iot_mqtt_init( long parameter_1,unsigned int parameter_2);
short _aws_iot_mqtt_deserialize_suback( unsigned int parameter_1,long parameter_2,double parameter_3,short parameter_4,double parameter_5,double parameter_6);
char aws_iot_mqtt_get_next_packet_id();
void _aws_iot_mqtt_serialize_subscribe( short parameter_1,int parameter_2,short parameter_3,int parameter_4,char parameter_5,float parameter_6,double parameter_7,double parameter_8,int parameter_9);
int _aws_iot_mqtt_get_free_message_handler_index( int parameter_1);
unsigned int _aws_iot_mqtt_internal_resubscribe( int parameter_1);
void aws_iot_mqtt_resubscribe( float parameter_1);
double _aws_iot_mqtt_deserialize_connack( char parameter_1,char parameter_2,double parameter_3,int parameter_4);
void countdown_sec( long parameter_1,char parameter_2);
int aws_iot_mqtt_internal_serialize_ack( short parameter_1,double parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5,unsigned int parameter_6);
double _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,int parameter_3);
long _aws_iot_mqtt_internal_deliver_message( float parameter_1,char parameter_2,double parameter_3,float parameter_4);
void aws_iot_mqtt_internal_read_uint16_t( unsigned int parameter_1);
short _aws_iot_mqtt_read_string_with_len( char parameter_1,char parameter_2,short parameter_3,short parameter_4);
float aws_iot_mqtt_internal_decode_remaining_length_from_buffer( long parameter_1,long parameter_2,int parameter_3);
short aws_iot_mqtt_internal_read_char();
float aws_iot_mqtt_internal_deserialize_publish( float parameter_1,long parameter_2,double parameter_3,short parameter_4,char parameter_5,char parameter_6,float parameter_7,int parameter_8,unsigned int parameter_9,long parameter_10,int uni_para);
unsigned int _aws_iot_mqtt_internal_handle_publish( int parameter_1,char parameter_2,int uni_para);
int _aws_iot_mqtt_internal_decode_packet_remaining_len( char parameter_1,short parameter_2,double parameter_3,float parameter_4);
unsigned int _aws_iot_mqtt_internal_readWrapper( short parameter_1,long parameter_2,unsigned int parameter_3,unsigned int parameter_4,double parameter_5);
long _aws_iot_mqtt_internal_read_packet( short parameter_1,long parameter_2,short parameter_3);
long aws_iot_mqtt_internal_cycle_read( short parameter_1,short parameter_2,double parameter_3,int uni_para);
int aws_iot_mqtt_internal_wait_for_read( double parameter_1,int parameter_2,float parameter_3,int uni_para);
float has_timer_expired( int parameter_1);
unsigned int aws_iot_mqtt_internal_send_packet( double parameter_1,int parameter_2,int parameter_3);
void aws_iot_mqtt_internal_write_uint_16( long parameter_1,short parameter_2);
void aws_iot_mqtt_internal_write_utf8_string( char parameter_1,short parameter_2,short parameter_3);
int aws_iot_mqtt_internal_write_len_to_buffer( double parameter_1,double parameter_2);
void aws_iot_mqtt_internal_write_char( int parameter_1,double parameter_2);
short aws_iot_mqtt_internal_init_header( long parameter_1,int parameter_2,short parameter_3,int parameter_4,long parameter_5);
double aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( double parameter_1);
short _aws_iot_get_connect_packet_length( long parameter_1);
char _aws_iot_mqtt_serialize_connect( int parameter_1,char parameter_2,double parameter_3,short parameter_4);
void countdown_ms( int parameter_1,unsigned int parameter_2);
void init_timer( short parameter_1);
char aws_iot_mqtt_set_connect_params( int parameter_1,unsigned int parameter_2);
void _aws_iot_mqtt_internal_connect( char parameter_1,int parameter_2,int uni_para);
double aws_iot_mqtt_set_client_state( float parameter_1,float parameter_2,long parameter_3);
int _aws_iot_mqtt_is_client_state_valid_for_connect( int parameter_1);
void aws_iot_mqtt_get_client_state();
char aws_iot_mqtt_internal_flushBuffers( long parameter_1);
float aws_iot_mqtt_connect( float parameter_1,char parameter_2,int uni_para);
short aws_iot_mqtt_is_client_connected( float parameter_1);
int aws_iot_mqtt_attempt_reconnect( unsigned int parameter_1,int uni_para);
float aws_iot_is_autoreconnect_enabled( double parameter_1);
int disconnectCallbackHandler( double parameter_1);
unsigned int parseInputArgsForConnectParams( int parameter_1,char parameter_2);
float aws_iot_mqtt_internal_deserialize_ack( short parameter_1,float parameter_2,short parameter_3,char parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	int int_3 = 1;
	double_1 = double_2;
	double_1 = cosh ( double_2 ) ;
	double_3 = double_4;
	aws_iot_mqtt_internal_read_uint16_t(unsigned_int_1);

	int_2 = int_1 * int_2;
	double_1 = ceil ( double_2 ) ;
	double_2 = fabs ( double_4 ) ;
	double_3 = cos ( double_4 ) ;
	if(1)
	{
		double_2 = asin ( double_2 ) ;
	}
	if(1)
	{
		double_1 = ceil ( double_4 ) ;
	}
	float_1 = float_2;
	short_2 = short_1 + short_2;
	double_1 = cosh ( double_3 ) ;
	double_4 = ceil ( double_3 ) ;
	if(1)
	{
		double_1 = cosh ( double_3 ) ;
	}
	float_3 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(long_1,long_1,int_2);

	double_5 = tanh ( double_6 ) ;
	long_3 = long_2 * long_3;
	if(1)
	{
		double_5 = double_1;
	}
	double_7 = sqrt ( double_6 ) ;
	int_3 = int_3 + int_2;
	short_2 = aws_iot_mqtt_internal_read_char();

}
float _aws_iot_mqtt_internal_serialize_publish( double parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,long parameter_6,char parameter_7,double parameter_8,long parameter_9,double parameter_10,int parameter_11)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = int_2;
	float_1 = float_1 * float_2;
	double_1 = floor ( double_1 ) ;
	double_3 = double_2 + double_3;
	short_1 = aws_iot_mqtt_internal_init_header(long_1,int_2,short_1,int_1,long_1);

	double_2 = sqrt ( double_3 ) ;
	if(1)
	{
		double_2 = fabs ( double_3 ) ;
	}
	double_2 = cosh ( double_1 ) ;
	int_2 = int_1 * int_1;
	double_3 = tanh ( double_1 ) ;
	if(1)
	{
		double_4 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(double_3);

		aws_iot_mqtt_internal_write_uint_16(long_1,short_1);

		char_2 = char_1 + char_1;
	}
	if(1)
	{
		aws_iot_mqtt_internal_write_char(int_2,double_2);

		double_1 = double_2;
	}
	double_2 = ldexp ( double_2 , int_2 ) ;
	if(1)
	{
		double_4 = fabs ( double_2 ) ;
	}
	int_3 = aws_iot_mqtt_internal_write_len_to_buffer(double_1,double_1);

	short_2 = short_3;
	double_3 = atan2 ( double_4 , double_5 ) ;
	double_2 = asin ( double_6 ) ;
	char_3 = char_2 * char_1;
	if(1)
	{
		double_5 = double_2 * double_1;
	}
	aws_iot_mqtt_internal_write_utf8_string(char_2,short_4,short_5);

	char_2 = char_4;
	long_2 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
}
unsigned int _aws_iot_mqtt_internal_publish( int parameter_1,short parameter_2,short parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_6 = 1;
	int int_5 = 1;
	double double_7 = 1;
	char char_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_4 = 1;
	double_1 = double_1 + double_1;
	double_2 = double_1 + double_1;
	double_2 = double_2;
	double_4 = double_1 * double_3;
	double_5 = double_4;
	double_1 = double_4;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = aws_iot_mqtt_internal_send_packet(double_4,int_1,int_1);

	double_3 = tan ( double_5 ) ;
	if(1)
	{
		init_timer(short_1);

		double_3 = log10 ( double_2 ) ;
	}
	double_3 = atan ( double_5 ) ;
	if(1)
	{
		float_1 = aws_iot_mqtt_internal_deserialize_ack(short_2,float_2,short_2,char_1,unsigned_int_1);

		double_2 = atan ( double_1 ) ;
	}
	int_2 = aws_iot_mqtt_internal_wait_for_read(double_5,int_3,float_2,589);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		float_1 = _aws_iot_mqtt_internal_serialize_publish(double_3,long_1,unsigned_int_1,int_3,int_4,long_2,char_2,double_5,long_2,double_6,int_5);

		float_2 = float_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		int int_4 = 1;
		long long_2 = 1;
		char char_2 = 1;
		double double_6 = 1;
		int int_5 = 1;
		double double_7 = 1;
		char char_3 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_4 = 1;
		double_2 = double_6;
		if(1)
		{
			double_4 = double_7 + double_5;
		}
		char_3 = aws_iot_mqtt_get_next_packet_id();

		char_1 = char_2 * char_4;
		if(1)
		{
			double_5 = asin ( double_7 ) ;
		}
	}
	countdown_ms(int_6,unsigned_int_4);

	double_7 = sinh ( double_4 ) ;
}
double aws_iot_mqtt_publish( float parameter_1,int parameter_2,short parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double_1 = fmod ( double_1 , double_1 ) ;
	float_1 = float_2;
	char_2 = char_1 + char_2;
	if(1)
	{
		short_1 = short_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "`") == 0)
	{
		short_1 = aws_iot_mqtt_is_client_connected(float_1);

		aws_iot_mqtt_get_client_state();

		double_1 = atan ( double_2 ) ;
	}
	short_3 = short_1 * short_2;
	char controller_3[5];
	fgets(controller_3 ,5 ,stdin);
	if( strcmp( controller_3, "vid1") == 0)
	{
		double_2 = asin ( double_1 ) ;
	}
	double_1 = pow ( double_3 , double_1 ) ;
	if(1)
	{
		unsigned_int_1 = _aws_iot_mqtt_internal_publish(int_1,short_1,short_1,long_1);

		double_1 = log ( double_4 ) ;
	}
	double_5 = exp ( double_3 ) ;
	long_3 = long_1 * long_2;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_7 = 1;
		float float_3 = 1;
		double double_6 = 1;
		double_3 = double_2 * double_6;
	}
	double_1 = tanh ( double_7 ) ;
	double_4 = aws_iot_mqtt_set_client_state(float_1,float_3,long_3);

}
int _aws_iot_mqtt_force_client_disconnect( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = floor ( double_1 ) ;
	double_2 = pow ( double_1 , double_2 ) ;
	double_1 = cos ( double_2 ) ;
}
float aws_iot_mqtt_internal_serialize_zero( float parameter_1,short parameter_2,int parameter_3,short parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int_1 = aws_iot_mqtt_internal_write_len_to_buffer(double_1,double_2);

	double_2 = asin ( double_2 ) ;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		long_1 = long_1;
	}
	aws_iot_mqtt_internal_write_char(int_2,double_1);

	double_3 = log10 ( double_2 ) ;
	short_2 = aws_iot_mqtt_internal_init_header(long_1,int_3,short_3,int_2,long_2);

	double_3 = cos ( double_3 ) ;
	if(1)
	{
		double_2 = asin ( double_3 ) ;
	}
	double_1 = sqrt ( double_4 ) ;
	char_1 = char_1 * char_1;
	double_4 = sqrt ( double_4 ) ;
	double_3 = exp ( double_4 ) ;
}
float _aws_iot_mqtt_internal_disconnect( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	float_1 = aws_iot_mqtt_internal_serialize_zero(float_2,short_1,int_1,short_2);

	double_1 = cosh ( double_1 ) ;
	double_2 = sinh ( double_3 ) ;
	unsigned_int_2 = unsigned_int_3;
	unsigned_int_4 = aws_iot_mqtt_internal_send_packet(double_3,int_1,int_2);

	int_3 = int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		short short_4 = 1;
		short_1 = short_3 + short_3;
	}
	countdown_ms(int_4,unsigned_int_2);

	long_2 = long_1 + long_2;
	double_1 = atan ( double_1 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		short short_4 = 1;
		double_1 = ceil ( double_4 ) ;
	}
	long_2 = long_3;
	float_2 = float_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		short short_4 = 1;
		short_4 = short_1;
	}
	double_3 = asin ( double_1 ) ;
	init_timer(short_2);

}
char aws_iot_mqtt_disconnect( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int_1 = int_2;
	float_1 = _aws_iot_mqtt_internal_disconnect(unsigned_int_1);

	double_1 = asin ( double_2 ) ;
	long_3 = long_1 * long_2;
	if(1)
	{
		int_3 = int_3;
	}
	double_1 = acos ( double_3 ) ;
	if(1)
	{
		double_4 = ldexp ( double_2 , int_3 ) ;
	}
	double_5 = ceil ( double_6 ) ;
	if(1)
	{
		aws_iot_mqtt_get_client_state();

		double_6 = double_3;
	}
	short_1 = aws_iot_mqtt_is_client_connected(float_1);

	double_5 = asin ( double_2 ) ;
	if(1)
	{
		double_4 = atan2 ( double_1 , double_2 ) ;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_1 = 1;
		float float_2 = 1;
		long long_4 = 1;
		int int_4 = 1;
		double_4 = aws_iot_mqtt_set_client_state(float_1,float_2,long_4);

		double_2 = ldexp ( double_2 , int_4 ) ;
	}
	double_6 = tanh ( double_6 ) ;
}
void _aws_iot_mqtt_handle_disconnect( float parameter_1)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = aws_iot_mqtt_disconnect(long_1);

	unsigned_int_1 = unsigned_int_2;
	char_1 = char_1;
	double_1 = exp ( double_2 ) ;
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_1 = _aws_iot_mqtt_force_client_disconnect(float_1);

		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_3 = double_4;
	}
	int_1 = int_1 * int_1;
	short_1 = short_1 * short_1;
}
double _aws_iot_mqtt_keep_alive( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_4 = 1;
	short short_2 = 1;
	double_2 = double_1 + double_2;
	int_1 = int_2;
	double_2 = double_1 + double_3;
	_aws_iot_mqtt_handle_disconnect(float_1);

	double_2 = tan ( double_3 ) ;
	if(1)
	{
		double_2 = log10 ( double_4 ) ;
	}
	if(1)
	{
		double_3 = double_2 * double_3;
	}
	if(1)
	{
		double_4 = fmod ( double_2 , double_1 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		float float_2 = 1;
		short short_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		short short_4 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
		float_1 = aws_iot_mqtt_internal_serialize_zero(float_2,short_1,int_2,short_3);

		double_5 = double_5;
	}
	int_2 = int_1;
	double_5 = cos ( double_3 ) ;
	double_5 = sqrt ( double_5 ) ;
	int_3 = int_4;
	if(1)
	{
		double_4 = atan ( double_6 ) ;
	}
	unsigned_int_1 = aws_iot_mqtt_internal_send_packet(double_5,int_1,int_2);

	double_3 = floor ( double_5 ) ;
	if(1)
	{
		double_6 = asin ( double_6 ) ;
		countdown_sec(long_1,char_1);

		double_1 = asin ( double_1 ) ;
	}
	short_4 = short_4 + short_4;
	countdown_ms(int_3,unsigned_int_1);

	double_5 = ldexp ( double_4 , int_4 ) ;
	float_1 = has_timer_expired(int_4);

	double_5 = sinh ( double_4 ) ;
	init_timer(short_3);

}
float _aws_iot_mqtt_handle_reconnect( double parameter_1,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = acos ( double_1 ) ;
	float_1 = float_2;
	char controller4vul_34[3];
	fgets(controller4vul_34 ,4 ,stdin);
	if( strcmp( controller4vul_34, "?cz") > 0)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float float_3 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_1 = aws_iot_mqtt_attempt_reconnect(unsigned_int_1,uni_para);

		float_1 = float_3;
	}
	float_2 = float_4;
	if(1)
	{
		double_1 = asin ( double_1 ) ;
	}
	if(1)
	{
		double_1 = double_1;
		if(1)
		{
			double double_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_4 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			float float_3 = 1;
			double double_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double_1 = sinh ( double_2 ) ;
			if(1)
			{
				double double_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_4 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				int int_4 = 1;
				int int_5 = 1;
				int int_6 = 1;
				float float_3 = 1;
				double double_2 = 1;
				char char_1 = 1;
				double double_3 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double_1 = ceil ( double_3 ) ;
			}
			char_1 = char_1;
		}
	}
	char_4 = char_2 * char_3;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		float float_3 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
	}
	int_4 = int_1;
	int_6 = int_4 * int_5;
}
unsigned int _aws_iot_mqtt_internal_yield( double parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = ldexp ( double_3 , int_1 ) ;
	double_2 = log10 ( double_2 ) ;
	char_1 = char_2;
	double_2 = asin ( double_2 ) ;
	double_3 = cosh ( double_2 ) ;
	do
	{
		double_3 = pow ( double_2 , double_2 ) ;
		char controller4vul_33[5];
		fgets(controller4vul_33 ,6 ,stdin);
		if( strcmp( controller4vul_33, "Kv?6@") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			float_1 = _aws_iot_mqtt_handle_reconnect(double_3,uni_para);

			if(1)
			{
				double_1 = fabs ( double_1 ) ;
			}
			short_2 = short_1 + short_1;
		}
		double_1 = cosh ( double_1 ) ;
		char controller_2[4];
		fgets(controller_2 ,4 ,stdin);
		if( strcmp( controller_2, "?@<") == 0)
		{
			double_3 = double_4;
		}
		else
		{
			if(1)
			{
				double_4 = exp ( double_4 ) ;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				float float_1 = 1;
				double double_4 = 1;
				double double_5 = 1;
				int int_2 = 1;
				int int_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				double_5 = fabs ( double_2 ) ;
				if(1)
				{
					double_3 = ldexp ( double_1 , int_2 ) ;
				}
				double_6 = ceil ( double_3 ) ;
				double_7 = double_5 * double_6;
				unsigned_int_3 = unsigned_int_1;
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
	double_4 = asin ( double_5 ) ;
	looper_1 += 1;
	int_2 = int_1 + int_3;
}
long aws_iot_mqtt_yield( int parameter_1,long parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_7 = 1;
	double double_5 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	int_2 = int_1 + int_1;
	char_1 = char_2;
	char controller4vul_32[3];
	fgets(controller4vul_32 ,4 ,stdin);
	if( strcmp( controller4vul_32, "UIu") == 0)
	{
		unsigned_int_1 = _aws_iot_mqtt_internal_yield(double_1,char_2,uni_para);

		double_1 = double_2;
	}
	double_3 = fabs ( double_2 ) ;
	if(1)
	{
		double_4 = asin ( double_1 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_7 = 1;
		double double_5 = 1;
		int int_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_6 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_7 = 1;
			double double_5 = 1;
			int int_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_6 = 1;
			int_2 = int_3;
		}
		if(1)
		{
			double_2 = atan ( double_1 ) ;
		}
		double_5 = log10 ( double_1 ) ;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_7 = 1;
			double double_5 = 1;
			int int_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_6 = 1;
			char_4 = char_3 + char_1;
		}
	}
	double_2 = tan ( double_4 ) ;
	if(1)
	{
		double_1 = log10 ( double_4 ) ;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_7 = 1;
			double double_5 = 1;
			int int_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_6 = 1;
			double_2 = sqrt ( double_6 ) ;
		}
	}
	double_7 = ceil ( double_1 ) ;
}
unsigned int iot_subscribe_callback_handler( float parameter_1,char parameter_2,short parameter_3,float parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double_1 = tan ( double_1 ) ;
	int_3 = int_1 * int_2;
	double_1 = ceil ( double_1 ) ;
	double_1 = double_1 + double_2;
}
char _aws_iot_mqtt_internal_subscribe( unsigned int parameter_1,double parameter_2,float parameter_3,float parameter_4,unsigned int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	long long_3 = 1;
	char char_3 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_3 = 1;
	char char_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned_int_1 = aws_iot_mqtt_internal_send_packet(double_1,int_1,int_2);

	long_1 = long_1 + long_2;
	char_1 = char_1;
	int_1 = int_2;
	short_1 = short_1 + short_1;
	double_2 = pow ( double_3 , double_3 ) ;
	double_4 = cos ( double_2 ) ;
	double_4 = tanh ( double_1 ) ;
	double_4 = log10 ( double_2 ) ;
	char_2 = aws_iot_mqtt_get_next_packet_id();

	short_2 = _aws_iot_mqtt_deserialize_suback(unsigned_int_2,long_2,double_1,short_1,double_5,double_5);

	double_3 = sinh ( double_6 ) ;
	double_2 = cos ( double_2 ) ;
	int_2 = aws_iot_mqtt_internal_wait_for_read(double_7,int_3,float_1,988);

	double_3 = double_5 + double_3;
	double_2 = double_2;
	countdown_ms(int_1,unsigned_int_3);

	double_8 = double_7 * double_6;
	if(1)
	{
		double_1 = double_8;
	}
	int_1 = _aws_iot_mqtt_get_free_message_handler_index(int_3);

	long_1 = long_3;
	if(1)
	{
		double_5 = fmod ( double_8 , double_6 ) ;
	}
	char_3 = char_1;
	if(1)
	{
		double_2 = double_5 * double_7;
	}
	double_2 = sinh ( double_8 ) ;
	if(1)
	{
		double_2 = sqrt ( double_3 ) ;
	}
	char_1 = char_2;
	if(1)
	{
		double_5 = sqrt ( double_9 ) ;
	}
	init_timer(short_1);

	double_7 = double_10 * double_9;
	double_9 = sinh ( double_5 ) ;
	double_11 = tanh ( double_8 ) ;
	double_8 = pow ( double_9 , double_6 ) ;
	double_10 = sqrt ( double_1 ) ;
	_aws_iot_mqtt_serialize_subscribe(short_2,int_3,short_3,int_2,char_4,float_2,double_11,double_8,int_4);

	double_4 = log ( double_9 ) ;
}
double aws_iot_mqtt_subscribe( long parameter_1,long parameter_2,char parameter_3,int parameter_4,double parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char_1 = char_2;
	double_1 = atan ( double_1 ) ;
	double_1 = floor ( double_1 ) ;
	if(1)
	{
		short_1 = aws_iot_mqtt_is_client_connected(float_1);

		aws_iot_mqtt_get_client_state();

		char_3 = _aws_iot_mqtt_internal_subscribe(unsigned_int_1,double_2,float_1,float_2,unsigned_int_1);

		double_3 = asin ( double_2 ) ;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_1 = 1;
		long long_2 = 1;
		double_2 = ldexp ( double_2 , int_1 ) ;
	}
	short_1 = short_2;
	if(1)
	{
		double_1 = double_1;
	}
	double_3 = double_2;
	if(1)
	{
		double_2 = double_4;
	}
	double_5 = aws_iot_mqtt_set_client_state(float_2,float_1,long_1);

	double_4 = double_4 + double_2;
	double_7 = double_6 + double_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	double_5 = double_3 + double_5;
}
unsigned int aws_iot_mqtt_autoreconnect_set_status( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double_1 = tan ( double_1 ) ;
	if(1)
	{
		double_1 = cos ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1 * double_1;
}
int iot_tls_destroy( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double_1 = log ( double_1 ) ;
	double_2 = ldexp ( double_1 , int_1 ) ;
	double_1 = fmod ( double_3 , double_1 ) ;
	double_3 = floor ( double_3 ) ;
	long_3 = long_1 + long_2;
	double_1 = pow ( double_3 , double_3 ) ;
	short_3 = short_1 + short_2;
	double_2 = floor ( double_4 ) ;
	double_4 = double_1;
	return int_1;
}
void iot_tls_is_connected()
{
}
long iot_tls_disconnect( float parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int_1 = int_1;
	double_1 = log10 ( double_2 ) ;
	do
	{
		double_3 = sinh ( double_2 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_3 = log10 ( double_3 ) ;
	looper_1 += 1;
	return long_1;
}
float iot_tls_mqtt_get_fixed_uint16_from_message( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double_1 = fmod ( double_1 , double_1 ) ;
	double_2 = exp ( double_1 ) ;
	return float_1;
}
void iot_tls_mqtt_copy_string_from_message( char parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = tanh ( double_1 ) ;
	float_1 = iot_tls_mqtt_get_fixed_uint16_from_message(double_2,double_1);

	char_1 = char_1 + char_1;
}
double iot_tls_mqtt_get_end_of_variable_length_int( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_3 = 1;
	double_1 = cosh ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		double double_3 = 1;
		looper_1 += 1;
		double_1 = double_2 + double_3;
	}
	char_1 = char_2;
	return double_4;
}
short iot_tls_mqtt_read_variable_length_int( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double_1 = cosh ( double_2 ) ;
	double_1 = floor ( double_2 ) ;
	double_2 = exp ( double_2 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double_1 = tan ( double_3 ) ;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = exp ( double_4 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_2 = acos ( double_3 ) ;
	looper_1 += 1;
	return short_1;
}
double iot_tls_write( double parameter_1,char parameter_2,char parameter_3,short parameter_4,float parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	int int_5 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float_1 = has_timer_expired(int_1);

	iot_tls_mqtt_copy_string_from_message(char_1,long_1,int_2);

	int_1 = int_2;
	int_1 = int_3 * int_4;
	char_1 = char_2;
	int_3 = int_4 + int_5;
	short_1 = iot_tls_mqtt_read_variable_length_int(int_5,double_1);

	double_1 = ceil ( double_1 ) ;
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
				char char_1 = 1;
				long long_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				char char_2 = 1;
				int int_5 = 1;
				short short_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double_2 = iot_tls_mqtt_get_end_of_variable_length_int(char_3,unsigned_int_1);

				float_2 = float_3;
				double_1 = double_1 * double_2;
			}
		}
		if(1)
		{
		}
	}
	double_3 = sinh ( double_3 ) ;
	if(1)
	{
		return double_2;
	}
	if(1)
	{
		return double_2;
	}
	return double_3;
}
void isTimerExpired( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = cos ( double_2 ) ;
	double_3 = double_2 + double_3;
	if(1)
	{
		double_2 = tan ( double_3 ) ;
		double_1 = atan ( double_2 ) ;
		if(1)
		{
			double_1 = pow ( double_4 , double_1 ) ;
		}
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_4 = double_3 + double_5;
	}
}
float iot_tls_read( int parameter_1,char parameter_2,short parameter_3,unsigned int parameter_4,int parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	isTimerExpired(long_1);

	int_1 = int_2;
	char_2 = char_1 * char_2;
	double_1 = sqrt ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		looper_1 += 1;
		double_3 = log ( double_1 ) ;
		if(1)
		{
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_4 = double_5;
			float_1 = has_timer_expired(int_1);

			double_1 = fabs ( double_1 ) ;
			char_1 = char_2 + char_1;
		}
		if(1)
		{
			return float_2;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double_1 = atan ( double_1 ) ;
		return float_2;
	}
	if(1)
	{
		return float_1;
	}
	else
	{
		return float_3;
	}
}
void _iot_tls_verify_cert(float parameter_2,int parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_3 = int_1 * int_2;
	double_1 = double_1;
	double_2 = asin ( double_2 ) ;
	long_1 = long_1 * long_1;
	double_2 = cosh ( double_2 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short_2 = short_1 + short_2;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_3 = fmod ( double_4 , double_3 ) ;
		double_5 = fabs ( double_5 ) ;
	}
}
int iot_tls_connect( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_2 = 1;
	double double_7 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	char char_3 = 1;
	double double_11 = 1;
	int int_8 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_12 = 1;
	long long_6 = 1;
	short short_5 = 1;
	double double_14 = 1;
	float float_5 = 1;
	char char_4 = 1;
	long long_5 = 1;
	double double_13 = 1;
	double_1 = floor ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1;
	double_1 = tanh ( double_1 ) ;
	int_1 = int_1;
	_iot_tls_set_connect_params(float_1,char_1,char_2,char_1,char_2,double_3,long_1,long_1);

	double_3 = pow ( double_2 , double_1 ) ;
	double_1 = double_1 * double_2;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		double_1 = atan ( double_1 ) ;
	}
	double_3 = asin ( double_2 ) ;
	double_2 = atan2 ( double_1 , double_3 ) ;
	int_2 = int_3;
	float_2 = float_3;
	double_2 = cos ( double_4 ) ;
	double_4 = tan ( double_4 ) ;
	double_1 = cosh ( double_4 ) ;
	double_4 = sqrt ( double_5 ) ;
	long_2 = long_1 + long_2;
	double_1 = pow ( double_6 , double_4 ) ;
	if(1)
	{
		double_6 = cosh ( double_5 ) ;
		return int_4;
	}
	int_2 = int_5;
	double_1 = cosh ( double_3 ) ;
	if(1)
	{
		int_2 = int_6 * int_7;
		return int_3;
	}
	int_6 = int_2;
	short_2 = short_2 + short_2;
	double_3 = log ( double_5 ) ;
	if(1)
	{
		short_2 = short_2;
		return int_7;
	}
	double_6 = atan2 ( double_7 , double_1 ) ;
	if(1)
	{
		float_1 = float_2;
		int_4 = int_6 * int_5;
		return int_3;
	}
	long_3 = long_3 + long_4;
	short_3 = short_4;
	long_2 = long_4;
	if(1)
	{
		double_7 = cos ( double_2 ) ;
		{
			return int_7;
			return int_6;
			return int_4;
		}
		double_6 = tanh ( double_4 ) ;
	}
	double_4 = double_8 * double_6;
	if(1)
	{
		double_4 = ceil ( double_4 ) ;
		return int_7;
	}
	double_6 = cos ( double_9 ) ;
	double_2 = fmod ( double_10 , double_10 ) ;
	if(1)
	{
		long_4 = long_4;
		return int_7;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		char char_3 = 1;
		double double_11 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_12 = 1;
		long long_6 = 1;
		short short_5 = 1;
		double double_14 = 1;
		float float_5 = 1;
		char char_4 = 1;
		long long_5 = 1;
		double double_13 = 1;
		float_4 = float_4 * float_5;
	}
	else
	{
		double_8 = tanh ( double_4 ) ;
	}
	char_3 = char_3 * char_1;
	double_8 = sinh ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		char char_3 = 1;
		double double_11 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_12 = 1;
		long long_6 = 1;
		short short_5 = 1;
		double double_14 = 1;
		float float_5 = 1;
		char char_4 = 1;
		long long_5 = 1;
		double double_13 = 1;
		char_3 = char_4;
		return int_6;
	}
	double_10 = pow ( double_6 , double_9 ) ;
	if(1)
	{
		if(1)
		{
			double_6 = exp ( double_11 ) ;
			return int_2;
		}
	}
	if(1)
	{
		double_7 = atan ( double_5 ) ;
		return int_2;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
		return int_8;
	}
	unsigned_int_1 = unsigned_int_3;
	double_9 = double_8;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_8 = fabs ( double_4 ) ;
	char_1 = char_3 * char_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			double_4 = exp ( double_12 ) ;
			if(1)
			{
				double_5 = pow ( double_5 , double_9 ) ;
			}
			return int_8;
		}
	}
	double_7 = double_3;
	if(1)
	{
		double_5 = cosh ( double_12 ) ;
	}
	else
	{
		double_2 = fmod ( double_2 , double_10 ) ;
	}
	double_10 = double_8 + double_5;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_2 = 1;
			double double_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			int int_7 = 1;
			short short_2 = 1;
			double double_7 = 1;
			long long_3 = 1;
			long long_4 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			char char_3 = 1;
			double double_11 = 1;
			int int_8 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_12 = 1;
			long long_6 = 1;
			short short_5 = 1;
			double double_14 = 1;
			float float_5 = 1;
			char char_4 = 1;
			long long_5 = 1;
			double double_13 = 1;
			long_3 = long_5 * long_5;
			long_3 = long_6;
			double_2 = asin ( double_10 ) ;
			double_7 = asin ( double_12 ) ;
		}
		else
		{
			double_7 = atan ( double_9 ) ;
			double_8 = ceil ( double_10 ) ;
		}
	}
	else
	{
		_iot_tls_verify_cert(float_4,int_6,short_5);

		double_4 = ceil ( double_8 ) ;
		short_5 = short_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		char char_3 = 1;
		double double_11 = 1;
		int int_8 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_12 = 1;
		long long_6 = 1;
		short short_5 = 1;
		double double_14 = 1;
		float float_5 = 1;
		char char_4 = 1;
		long long_5 = 1;
		double double_13 = 1;
		double_8 = sinh ( double_13 ) ;
		long_2 = long_6;
		double_13 = atan2 ( double_12 , double_11 ) ;
	}
	double_3 = atan ( double_14 ) ;
	return int_5;
}
void _iot_tls_set_connect_params( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,double parameter_6,long parameter_7,long parameter_8)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_1 = tan ( double_2 ) ;
	double_1 = tanh ( double_3 ) ;
	float_1 = float_1 + float_1;
	char_1 = char_2;
	double_1 = fabs ( double_4 ) ;
}
void iot_tls_init( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,long parameter_6,unsigned int parameter_7,short parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_6 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double_1 = double_1;
	double_1 = atan2 ( double_2 , double_3 ) ;
	int_1 = iot_tls_connect(char_1,short_1);

	long_1 = iot_tls_disconnect(float_1);

	int_2 = iot_tls_destroy(unsigned_int_1);

	double_4 = double_3;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	iot_tls_is_connected();

	double_2 = floor ( double_5 ) ;
	_iot_tls_set_connect_params(float_2,char_2,char_2,char_3,char_4,double_3,long_1,long_1);

	double_1 = iot_tls_write(double_2,char_2,char_1,short_2,float_1);

	double_2 = double_1 * double_2;
	double_2 = cosh ( double_6 ) ;
	float_3 = iot_tls_read(int_2,char_4,short_3,unsigned_int_2,int_2);

}
int aws_iot_mqtt_init( long parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	double double_8 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	double double_10 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_9 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = floor ( double_2 ) ;
	int_2 = int_1 * int_1;
	float_1 = float_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		short short_2 = 1;
		double double_8 = 1;
		int int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_4 = 1;
		double double_10 = 1;
		short short_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_9 = 1;
		char_1 = aws_iot_mqtt_set_connect_params(int_3,unsigned_int_1);

		long_2 = long_1 + long_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = atan2 ( double_4 , double_4 ) ;
		double_1 = tanh ( double_1 ) ;
		char_1 = char_1;
		char_2 = char_1 + char_1;
	}
	double_3 = tanh ( double_4 ) ;
	double_3 = log10 ( double_2 ) ;
	double_5 = exp ( double_2 ) ;
	double_4 = pow ( double_1 , double_5 ) ;
	double_1 = exp ( double_6 ) ;
	double_6 = fmod ( double_7 , double_7 ) ;
	double_4 = fabs ( double_5 ) ;
	float_1 = float_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		double_1 = tan ( double_2 ) ;
	}
	double_1 = log10 ( double_3 ) ;
	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		init_timer(short_1);

		double_6 = log10 ( double_6 ) ;
	}
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		iot_tls_init(float_1,char_3,char_2,char_4,char_3,long_3,unsigned_int_2,short_2);

		double_1 = exp ( double_8 ) ;
		char_3 = char_1;
	}
	int_2 = int_1 + int_4;
	if(1)
	{
		double_4 = tanh ( double_2 ) ;
		double_6 = exp ( double_4 ) ;
		unsigned_int_1 = unsigned_int_1;
	}
	short_1 = short_2 + short_3;
	unsigned_int_1 = unsigned_int_1;
	double_5 = floor ( double_1 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_3 = 1;
		short short_2 = 1;
		double double_8 = 1;
		int int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_4 = 1;
		double double_10 = 1;
		short short_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_9 = 1;
		double_4 = double_7 + double_2;
		float_3 = float_2 * float_3;
		double_5 = sqrt ( double_7 ) ;
		double_7 = cosh ( double_9 ) ;
		double_1 = double_2 + double_4;
	}
	short_2 = short_4;
	float_4 = float_4 + float_1;
	double_8 = double_10;
	short_5 = short_5 * short_4;
}
short _aws_iot_mqtt_deserialize_suback( unsigned int parameter_1,long parameter_2,double parameter_3,short parameter_4,double parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = double_2;
	float_1 = float_2;
	double_1 = acos ( double_2 ) ;
	double_1 = cosh ( double_3 ) ;
	int_1 = int_1;
	if(1)
	{
		double_1 = double_4 + double_1;
	}
	short_1 = aws_iot_mqtt_internal_read_char();

	double_3 = sinh ( double_2 ) ;
	char_1 = char_1;
	int_2 = int_1;
	double_5 = double_3 + double_3;
	double_3 = exp ( double_5 ) ;
	if(1)
	{
		short_1 = short_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		float_2 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(long_1,long_2,int_3);

		double_2 = double_4;
	}
	double_4 = log ( double_5 ) ;
	if(1)
	{
		double_4 = sqrt ( double_5 ) ;
	}
	double_1 = floor ( double_6 ) ;
	double_6 = sqrt ( double_3 ) ;
	if(1)
	{
		double_3 = acos ( double_5 ) ;
	}
	int_3 = int_4;
	double_5 = sqrt ( double_5 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		char controller_6[6];
		fgets(controller_6 ,6 ,stdin);
		if( strcmp( controller_6, "d~hyu") == 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			short short_1 = 1;
			char char_1 = 1;
			int int_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			double double_6 = 1;
			int int_4 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_2 * short_3;
		}
		double_3 = cos ( double_4 ) ;
	}
	int_1 = int_4;
	aws_iot_mqtt_internal_read_uint16_t(unsigned_int_1);

}
char aws_iot_mqtt_get_next_packet_id()
{
	char char_1 = 1;
	return char_1;
}
void _aws_iot_mqtt_serialize_subscribe( short parameter_1,int parameter_2,short parameter_3,int parameter_4,char parameter_5,float parameter_6,double parameter_7,double parameter_8,int parameter_9)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_4 = 1;
	double double_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	char char_7 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_8 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = cosh ( double_2 ) ;
	double_1 = atan ( double_3 ) ;
	char_3 = char_1 + char_2;
	if(1)
	{
		int_2 = int_3;
	}
	double_2 = log10 ( double_4 ) ;
	aws_iot_mqtt_internal_write_char(int_1,double_4);

	double_3 = double_2 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_4 = char_3;
	}
	if(1)
	{
		double_3 = ceil ( double_5 ) ;
	}
	char_6 = char_4 * char_5;
	if(1)
	{
		double_3 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(double_5);

		double_1 = atan2 ( double_1 , double_4 ) ;
	}
	double_2 = ceil ( double_1 ) ;
	double_5 = ceil ( double_2 ) ;
	char_7 = char_1 + char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		char char_4 = 1;
		double double_5 = 1;
		char char_5 = 1;
		char char_6 = 1;
		char char_7 = 1;
		long long_1 = 1;
		short short_1 = 1;
		char char_8 = 1;
		long long_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
		aws_iot_mqtt_internal_write_uint_16(long_1,short_1);

		char_1 = char_8 * char_8;
	}
	short_1 = aws_iot_mqtt_internal_init_header(long_2,int_3,short_2,int_3,long_2);

	char_5 = char_8;
	int_2 = aws_iot_mqtt_internal_write_len_to_buffer(double_3,double_1);

	aws_iot_mqtt_internal_write_utf8_string(char_5,short_1,short_3);

	char_3 = char_6;
}
int _aws_iot_mqtt_get_free_message_handler_index( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = pow ( double_1 , double_1 ) ;
	double_2 = sqrt ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	int_3 = int_1 + int_2;
}
unsigned int _aws_iot_mqtt_internal_resubscribe( int parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	_aws_iot_mqtt_serialize_subscribe(short_1,int_1,short_2,int_1,char_1,float_1,double_1,double_2,int_2);

	double_2 = asin ( double_1 ) ;
	double_1 = fmod ( double_1 , double_1 ) ;
	char_1 = char_2;
	double_3 = double_3 + double_3;
	unsigned_int_1 = aws_iot_mqtt_internal_send_packet(double_4,int_2,int_3);

	float_3 = float_2 + float_1;
	double_3 = exp ( double_5 ) ;
	float_4 = float_2 + float_3;
	char_1 = aws_iot_mqtt_get_next_packet_id();

	float_4 = float_5;
	double_5 = double_6 * double_5;
	double_1 = exp ( double_4 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		char char_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_6 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_8 = 1;
		if(1)
		{
		}
		int_3 = int_4;
		short_5 = short_3 * short_4;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			int_2 = _aws_iot_mqtt_get_free_message_handler_index(int_3);

			int_2 = aws_iot_mqtt_internal_wait_for_read(double_3,int_4,float_3,880);

			double_7 = log ( double_3 ) ;
		}
		init_timer(short_1);

		short_2 = _aws_iot_mqtt_deserialize_suback(unsigned_int_2,long_1,double_5,short_2,double_2,double_2);

		unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
		if(1)
		{
			double_6 = ceil ( double_1 ) ;
		}
		double_6 = cos ( double_4 ) ;
		if(1)
		{
			short short_1 = 1;
			int int_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_2 = 1;
			char char_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_5 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_6 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_8 = 1;
			unsigned_int_1 = unsigned_int_5;
		}
		double_4 = sinh ( double_7 ) ;
		if(1)
		{
			short short_1 = 1;
			int int_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_2 = 1;
			char char_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_5 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_6 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_8 = 1;
			double_4 = atan ( double_8 ) ;
		}
	}
	double_3 = acos ( double_3 ) ;
	countdown_ms(int_2,unsigned_int_3);

}
void aws_iot_mqtt_resubscribe( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	double double_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = floor ( double_2 ) ;
	double_2 = exp ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_3 = 1;
		double double_3 = 1;
		float float_4 = 1;
		long long_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		long long_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned_int_1 = _aws_iot_mqtt_internal_resubscribe(int_1);

		float_1 = float_1 * float_2;
	}
	if(1)
	{
		short_1 = aws_iot_mqtt_is_client_connected(float_3);

		double_3 = floor ( double_2 ) ;
	}
	if(1)
	{
		double_1 = aws_iot_mqtt_set_client_state(float_3,float_4,long_1);

		double_2 = double_1 * double_4;
	}
	short_1 = short_1 * short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_3 = 1;
		double double_3 = 1;
		float float_4 = 1;
		long long_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		long long_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		aws_iot_mqtt_get_client_state();

		char_3 = char_1 * char_2;
	}
	long_1 = long_2;
	short_3 = short_3;
	if(1)
	{
		double_4 = exp ( double_4 ) ;
	}
	double_2 = sinh ( double_3 ) ;
}
double _aws_iot_mqtt_deserialize_connack( char parameter_1,char parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_8 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double_1 = log ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	double_1 = log ( double_2 ) ;
	double_3 = fmod ( double_2 , double_1 ) ;
	double_2 = ceil ( double_3 ) ;
	short_1 = aws_iot_mqtt_internal_read_char();

	double_1 = pow ( double_2 , double_1 ) ;
	if(1)
	{
		double_4 = double_4;
	}
	if(1)
	{
		float_1 = float_1;
	}
	double_2 = atan ( double_5 ) ;
	double_1 = acos ( double_6 ) ;
	int_1 = int_2;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		double_2 = ceil ( double_1 ) ;
	}
	short_1 = short_2;
	if(1)
	{
		double_7 = pow ( double_6 , double_4 ) ;
	}
	unsigned_int_4 = unsigned_int_4;
	double_6 = atan2 ( double_6 , double_5 ) ;
	if(1)
	{
		double_1 = log ( double_7 ) ;
	}
	float_2 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(long_1,long_1,int_2);

	double_8 = ldexp ( double_3 , int_1 ) ;
	char_1 = char_1;
	double_1 = double_1 * double_7;
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		long long_1 = 1;
		double double_8 = 1;
		char char_1 = 1;
		int int_3 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double_5 = cosh ( double_3 ) ;
		double_2 = fmod ( double_4 , double_3 ) ;
		double_5 = sqrt ( double_6 ) ;
		double_4 = floor ( double_2 ) ;
		int_1 = int_3;
		double_1 = acos ( double_9 ) ;
		double_6 = tan ( double_10 ) ;
	}
	float_2 = float_2;
}
void countdown_sec( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = cos ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	short_1 = short_2;
}
int aws_iot_mqtt_internal_serialize_ack( short parameter_1,double parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5,unsigned int parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_2;
	int_1 = int_2;
	double_1 = cos ( double_2 ) ;
	long_1 = long_1 * long_1;
	if(1)
	{
		double_2 = tan ( double_2 ) ;
	}
	int_2 = aws_iot_mqtt_internal_write_len_to_buffer(double_1,double_2);

	double_3 = tanh ( double_1 ) ;
	char controller_2[6];
	fgets(controller_2 ,6 ,stdin);
	if( strcmp( controller_2, "^mI}+") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char_1 = char_1;
	}
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	short_3 = aws_iot_mqtt_internal_init_header(long_1,int_1,short_1,int_2,long_1);

	aws_iot_mqtt_internal_write_uint_16(long_1,short_1);

	double_3 = double_4 * double_2;
	if(1)
	{
		long_1 = long_1;
	}
	aws_iot_mqtt_internal_write_char(int_3,double_2);

	unsigned_int_3 = unsigned_int_2;
	double_1 = double_4 * double_1;
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
}
double _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char_2 = char_1 + char_1;
	if(1)
	{
		return double_1;
	}
	long_1 = long_1;
	double_1 = ceil ( double_1 ) ;
	double_2 = ldexp ( double_3 , int_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			double_3 = asin ( double_2 ) ;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				char char_1 = 1;
				char char_2 = 1;
				double double_1 = 1;
				long long_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				looper_2 += 1;
				double_4 = acos ( double_4 ) ;
			}
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	int_3 = int_2 * int_2;
	return double_1;
}
long _aws_iot_mqtt_internal_deliver_message( float parameter_1,char parameter_2,double parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double_1 = exp ( double_1 ) ;
	double_2 = asin ( double_2 ) ;
	double_1 = double_1;
	double_1 = _aws_iot_mqtt_internal_is_topic_matched(char_1,char_2,int_1);

	double_2 = double_3 * double_2;
	if(1)
	{
		double_4 = aws_iot_mqtt_set_client_state(float_1,float_1,long_1);

		int_1 = int_1 * int_2;
	}
	aws_iot_mqtt_get_client_state();

	double_4 = floor ( double_1 ) ;
	double_5 = tan ( double_4 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char controller_3[4];
			fgets(controller_3 ,4 ,stdin);
			if( strcmp( controller_3, "Jvu") == 0)
			{
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					char char_1 = 1;
					char char_2 = 1;
					int int_1 = 1;
					double double_3 = 1;
					double double_4 = 1;
					float float_1 = 1;
					long long_1 = 1;
					int int_2 = 1;
					double double_5 = 1;
					int int_4 = 1;
					float float_2 = 1;
					int int_3 = 1;
					int_4 = int_2 + int_3;
				}
			}
		}
	}
	float_1 = float_2 + float_1;
	int_2 = int_4;
}
void aws_iot_mqtt_internal_read_uint16_t( unsigned int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = cosh ( double_1 ) ;
	float_2 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_1;
	double_2 = floor ( double_3 ) ;
	int_1 = int_1;
}
short _aws_iot_mqtt_read_string_with_len( char parameter_1,char parameter_2,short parameter_3,short parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_1 = char_2;
	short_1 = short_2;
	if(1)
	{
		double_1 = fmod ( double_1 , double_1 ) ;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			aws_iot_mqtt_internal_read_uint16_t(unsigned_int_1);

			double_1 = asin ( double_1 ) ;
			float_1 = float_2;
			double_2 = tanh ( double_1 ) ;
		}
	}
	double_1 = double_2;
}
float aws_iot_mqtt_internal_decode_remaining_length_from_buffer( long parameter_1,long parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int_1 = int_2;
	double_1 = fmod ( double_1 , double_1 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = double_1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_1 = pow ( double_2 , double_2 ) ;
	do
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		char char_1 = 1;
		double double_4 = 1;
		if(1)
		{
			int_1 = int_1;
		}
		double_1 = double_2 * double_2;
		double_1 = cosh ( double_2 ) ;
		double_1 = fabs ( double_3 ) ;
		double_5 = double_4 + double_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	char_1 = char_1;
	looper_1 += 1;
	double_3 = double_5;
	unsigned_int_1 = unsigned_int_1;
}
short aws_iot_mqtt_internal_read_char()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double_1 = asin ( double_2 ) ;
	double_1 = atan ( double_3 ) ;
	return short_1;
}
float aws_iot_mqtt_internal_deserialize_publish( float parameter_1,long parameter_2,double parameter_3,short parameter_4,char parameter_5,char parameter_6,float parameter_7,int parameter_8,unsigned int parameter_9,long parameter_10,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_6 = 1;
	int int_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_9 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	double_1 = exp ( double_2 ) ;
	short_1 = short_1 * short_1;
	double_1 = atan ( double_3 ) ;
	short_1 = short_1;
	double_3 = log10 ( double_4 ) ;
	float_1 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char controller4vul_40[4];
	fgets(controller4vul_40 ,5 ,stdin);
	if( strcmp( controller4vul_40, "5mXw") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		double double_6 = 1;
		int int_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_9 = 1;
		strcpy(vul_var, "CWE-761");
		if(uni_para == 278)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		char_2 = char_1 + char_2;
	}
	if(1)
	{
		double_3 = ldexp ( double_2 , int_1 ) ;
	}
	double_2 = double_4 * double_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		double double_6 = 1;
		int int_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_9 = 1;
		double_4 = fmod ( double_5 , double_6 ) ;
	}
	int_2 = int_2 * int_1;
	double_6 = ldexp ( double_7 , int_3 ) ;
	double_6 = fabs ( double_7 ) ;
	unsigned_int_4 = unsigned_int_4;
	if(1)
	{
		double_8 = ldexp ( double_4 , int_2 ) ;
	}
	double_7 = floor ( double_2 ) ;
	double_6 = sinh ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		double double_6 = 1;
		int int_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_9 = 1;
		double_8 = double_8 * double_9;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	float_3 = float_1 + float_2;
	double_1 = sinh ( double_6 ) ;
	double_2 = double_3;
}
unsigned int _aws_iot_mqtt_internal_handle_publish( int parameter_1,char parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_3 = 1;
	double double_7 = 1;
	short_2 = short_1 * short_2;
	double_1 = tanh ( double_1 ) ;
	double_2 = fmod ( double_2 , double_1 ) ;
	double_1 = acos ( double_3 ) ;
	double_1 = sinh ( double_2 ) ;
	long_1 = long_2;
	long_2 = long_2;
	double_4 = sqrt ( double_2 ) ;
	double_1 = exp ( double_3 ) ;
	int_1 = int_1 + int_1;
	char controller4vul_39[1];
	fgets(controller4vul_39 ,2 ,stdin);
	if( strcmp( controller4vul_39, "(") == 0)
	{
		float_1 = aws_iot_mqtt_internal_deserialize_publish(float_2,long_2,double_5,short_2,char_1,char_1,float_1,int_1,unsigned_int_1,long_2,uni_para);

		double_4 = pow ( double_6 , double_2 ) ;
	}
	double_5 = fmod ( double_2 , double_4 ) ;
	if(1)
	{
		double_6 = ldexp ( double_5 , int_1 ) ;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		short short_4 = 1;
		short short_3 = 1;
		double double_7 = 1;
		short_3 = short_1;
	}
	short_4 = short_1;
	if(1)
	{
		double_4 = double_5 * double_3;
	}
	double_2 = pow ( double_3 , double_6 ) ;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		short short_4 = 1;
		short short_3 = 1;
		double double_7 = 1;
		double_4 = tanh ( double_7 ) ;
	}
	double_1 = cos ( double_5 ) ;
}
int _aws_iot_mqtt_internal_decode_packet_remaining_len( char parameter_1,short parameter_2,double parameter_3,float parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = long_1;
	int_1 = int_1;
	double_1 = fabs ( double_1 ) ;
	short_1 = short_1;
	unsigned_int_1 = _aws_iot_mqtt_internal_readWrapper(short_2,long_2,unsigned_int_1,unsigned_int_1,double_2);

	double_1 = asin ( double_2 ) ;
	double_2 = double_3;
	double_3 = sqrt ( double_1 ) ;
	do
	{
		long long_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		if(1)
		{
			double_1 = acos ( double_1 ) ;
		}
		double_4 = cos ( double_2 ) ;
		if(1)
		{
			int_1 = int_2;
		}
		double_1 = log10 ( double_4 ) ;
		int_2 = int_3 * int_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_4 = atan ( double_2 ) ;
	looper_1 += 1;
	double_5 = fmod ( double_4 , double_1 ) ;
	double_3 = atan2 ( double_4 , double_5 ) ;
}
unsigned int _aws_iot_mqtt_internal_readWrapper( short parameter_1,long parameter_2,unsigned int parameter_3,unsigned int parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double_1 = sinh ( double_2 ) ;
	double_2 = atan2 ( double_1 , double_1 ) ;
	float_2 = float_1 + float_1;
	int_1 = int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double_2 = fabs ( double_2 ) ;
		short_1 = short_1;
		double_1 = cos ( double_1 ) ;
		double_1 = tanh ( double_1 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		long_3 = long_1 * long_2;
		double_2 = atan ( double_3 ) ;
	}
	return unsigned_int_1;
}
long _aws_iot_mqtt_internal_read_packet( short parameter_1,long parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	double double_6 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_2 = double_1 + double_1;
	float_1 = float_1;
	double_3 = double_1 + double_3;
	int_1 = _aws_iot_mqtt_internal_decode_packet_remaining_len(char_1,short_1,double_4,float_1);

	double_2 = pow ( double_2 , double_1 ) ;
	double_3 = tanh ( double_3 ) ;
	unsigned_int_1 = unsigned_int_2;
	countdown_ms(int_1,unsigned_int_2);

	double_2 = fabs ( double_1 ) ;
	double_2 = log10 ( double_4 ) ;
	double_3 = sinh ( double_5 ) ;
	long_1 = long_1;
	double_5 = double_6;
	float_2 = float_1;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		return long_2;
	}
	unsigned_int_3 = _aws_iot_mqtt_internal_readWrapper(short_2,long_3,unsigned_int_2,unsigned_int_3,double_6);

	double_1 = sqrt ( double_4 ) ;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_3 = long_4;
		do
		{
			init_timer(short_2);

			char_2 = aws_iot_mqtt_internal_flushBuffers(long_3);

			double_2 = acos ( double_4 ) ;
			if(1)
			{
				int_2 = int_2 * int_2;
				if(1)
				{
					double_1 = acos ( double_6 ) ;
				}
				else
				{
					double_7 = double_5;
				}
			}
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		double_5 = acos ( double_5 ) ;
		looper_1 += 1;
		if(1)
		{
			double_7 = double_1;
			return long_4;
		}
		else
		{
			return long_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4 * unsigned_int_5;
		if(1)
		{
			return long_4;
		}
	}
	int_2 = int_3;
	double_1 = fmod ( double_8 , double_2 ) ;
	double_9 = sqrt ( double_6 ) ;
	double_1 = floor ( double_6 ) ;
}
long aws_iot_mqtt_internal_cycle_read( short parameter_1,short parameter_2,double parameter_3,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int_1 = int_1;
	double_1 = atan2 ( double_1 , double_1 ) ;
	char controller4vul_38[3];
	fgets(controller4vul_38 ,4 ,stdin);
	if( strcmp( controller4vul_38, "q[w") > 0)
	{
		unsigned_int_1 = _aws_iot_mqtt_internal_handle_publish(int_2,char_1,uni_para);

		return long_1;
	}
	int_2 = int_2 + int_2;
	if(1)
	{
		double_1 = atan2 ( double_1 , double_1 ) ;
	}
	double_1 = asin ( double_2 ) ;
	double_1 = floor ( double_1 ) ;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		return long_1;
	}
	char controller_4[6];
	fgets(controller_4 ,6 ,stdin);
	if( strcmp( controller_4, "*vz2y") == 0)
	{
		return long_1;
	}
	{
		int int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		double_3 = double_3 + double_3;
		double_3 = acos ( double_4 ) ;
		double_5 = double_2 + double_2;
		int_3 = int_3 + int_1;
	}
	return long_2;
}
int aws_iot_mqtt_internal_wait_for_read( double parameter_1,int parameter_2,float parameter_3,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	long_1 = aws_iot_mqtt_internal_cycle_read(short_1,short_2,double_1,uni_para);

	double_2 = floor ( double_2 ) ;
	float_2 = float_1 + float_1;
	int_1 = int_1;
	if(1)
	{
		float_1 = float_2;
	}
	double_3 = asin ( double_2 ) ;
	do
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_4 = 1;
		if(1)
		{
			double_1 = floor ( double_2 ) ;
		}
		double_2 = double_4 * double_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	short_3 = short_3 + short_4;
	looper_1 += 1;
	float_2 = float_2 * float_1;
}
float has_timer_expired( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double_1 = atan ( double_1 ) ;
	int_1 = int_1;
	char_1 = char_1 + char_1;
	return float_1;
}
unsigned int aws_iot_mqtt_internal_send_packet( double parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	float_1 = has_timer_expired(int_1);

	int_2 = int_2;
	float_1 = float_1 * float_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_1 = floor ( double_2 ) ;
	}
	if(1)
	{
		double_2 = ceil ( double_3 ) ;
	}
	double_3 = sinh ( double_1 ) ;
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		double_4 = atan2 ( double_5 , double_1 ) ;
	}
	double_4 = ceil ( double_3 ) ;
	double_1 = double_6;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		looper_1 += 1;
		long_1 = long_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_2;
	}
	double_3 = fmod ( double_2 , double_4 ) ;
	char controller_5[5];
	fgets(controller_5 ,5 ,stdin);
	if( strcmp( controller_5, "uQZh") == 0)
	{
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		double_7 = atan ( double_7 ) ;
	}
	if(1)
	{
		long_1 = long_1;
	}
}
void aws_iot_mqtt_internal_write_uint_16( long parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_2 = ldexp ( double_3 , int_1 ) ;
	long_2 = long_1 + long_1;
	int_1 = int_2;
}
void aws_iot_mqtt_internal_write_utf8_string( char parameter_1,short parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = acos ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_3 = fabs ( double_4 ) ;
		aws_iot_mqtt_internal_write_uint_16(long_1,short_1);

		double_3 = ceil ( double_5 ) ;
	}
}
int aws_iot_mqtt_internal_write_len_to_buffer( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_2 = double_2;
	double_2 = atan2 ( double_3 , double_1 ) ;
	do
	{
		double_5 = double_4 + double_4;
		double_2 = tan ( double_5 ) ;
		if(1)
		{
			double_5 = fmod ( double_5 , double_1 ) ;
		}
		double_4 = double_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_2 = double_5;
	looper_1 += 1;
	double_3 = ceil ( double_4 ) ;
}
void aws_iot_mqtt_internal_write_char( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
}
short aws_iot_mqtt_internal_init_header( long parameter_1,int parameter_2,short parameter_3,int parameter_4,long parameter_5)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long_2 = long_1 + long_1;
	if(1)
	{
		double_1 = double_1;
	}
	double_2 = log10 ( double_3 ) ;
	int_3 = int_1 * int_2;
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		return short_1;
		int_2 = int_2 + int_1;
		float_1 = float_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = atan ( double_3 ) ;
		double_3 = log ( double_4 ) ;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_4 = floor ( double_1 ) ;
		unsigned_int_2 = unsigned_int_2;
		int_2 = int_4;
		double_1 = ceil ( double_2 ) ;
		double_3 = sinh ( double_4 ) ;
		double_1 = asin ( double_2 ) ;
		double_1 = double_1 * double_5;
		char_3 = char_1 * char_2;
	}
	float_1 = float_1 * float_2;
	long_3 = long_2;
	{
		double_4 = atan2 ( double_3 , double_3 ) ;
	}
	double_1 = exp ( double_5 ) ;
	float_3 = float_4;
}
double aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = atan2 ( double_1 , double_1 ) ;
	if(1)
	{
		double_3 = double_1 + double_2;
	}
	if(1)
	{
		double_3 = asin ( double_4 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_5 = double_2;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
	return double_4;
}
short _aws_iot_get_connect_packet_length( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	double_1 = log ( double_1 ) ;
	int_1 = int_1 * int_2;
	double_1 = double_2 + double_1;
	long_2 = long_1 * long_1;
	if(1)
	{
		double_2 = double_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	long_3 = long_1;
}
char _aws_iot_mqtt_serialize_connect( int parameter_1,char parameter_2,double parameter_3,short parameter_4)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_4 = 1;
	long long_4 = 1;
	double double_7 = 1;
	double double_9 = 1;
	short_1 = aws_iot_mqtt_internal_init_header(long_1,int_1,short_2,int_2,long_1);

	double_1 = asin ( double_2 ) ;
	double_3 = double_3 * double_3;
	double_3 = sinh ( double_1 ) ;
	short_3 = short_3;
	double_4 = cos ( double_5 ) ;
	double_4 = log10 ( double_3 ) ;
	if(1)
	{
		short_2 = _aws_iot_get_connect_packet_length(long_2);

		long_3 = long_1;
	}
	{
		return char_1;
	}
	double_5 = asin ( double_2 ) ;
	double_1 = log10 ( double_3 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	int_2 = int_2 + int_1;
	if(1)
	{
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		long long_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		char_2 = char_1 * char_1;
	}
	double_5 = log ( double_1 ) ;
	float_2 = float_1 + float_1;
	double_5 = asin ( double_4 ) ;
	aws_iot_mqtt_internal_write_utf8_string(char_1,short_3,short_4);

	aws_iot_mqtt_internal_write_uint_16(long_2,short_4);

	short_5 = short_5;
	int_2 = aws_iot_mqtt_internal_write_len_to_buffer(double_6,double_2);

	int_2 = int_1 * int_3;
	if(1)
	{
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		long long_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		int_1 = int_4 + int_2;
	}
	if(1)
	{
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		long long_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		long_4 = long_4;
		double_1 = exp ( double_6 ) ;
	}
	if(1)
	{
		double_1 = floor ( double_6 ) ;
	}
	if(1)
	{
		double_4 = atan ( double_5 ) ;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_5 = short_4 + short_3;
	if(1)
	{
		double_6 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(double_5);

		float_2 = float_1;
	}
	else
	{
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		long long_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		double_6 = pow ( double_7 , double_4 ) ;
	}
	if(1)
	{
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_4 = 1;
		long long_4 = 1;
		double double_7 = 1;
		double double_9 = 1;
		double_1 = ldexp ( double_8 , int_1 ) ;
		double_2 = log10 ( double_9 ) ;
	}
	if(1)
	{
		short_2 = short_1;
	}
	if(1)
	{
		aws_iot_mqtt_internal_write_char(int_2,double_8);

		double_6 = double_3 * double_3;
	}
	unsigned_int_3 = unsigned_int_1;
	long_3 = long_3;
}
void countdown_ms( int parameter_1,unsigned int parameter_2)
{
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
}
void init_timer( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
}
char aws_iot_mqtt_set_connect_params( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	double_1 = double_1 * double_2;
	if(1)
	{
		char_2 = char_1 + char_2;
	}
	char_1 = char_3;
	char_1 = char_2;
	long_1 = long_2;
	double_4 = double_3 * double_1;
	if(1)
	{
		if(1)
		{
			double_5 = pow ( double_1 , double_5 ) ;
		}
		double_4 = cosh ( double_2 ) ;
	}
	double_4 = fmod ( double_5 , double_6 ) ;
	else
	{
		double_5 = exp ( double_2 ) ;
	}
	int_1 = int_1;
	short_1 = short_1;
	double_4 = double_4 * double_5;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_4;
	long_4 = long_3 * long_4;
	float_2 = float_1 * float_2;
	double_3 = sqrt ( double_1 ) ;
	double_4 = atan2 ( double_2 , double_3 ) ;
	double_3 = exp ( double_1 ) ;
	double_6 = atan ( double_7 ) ;
}
void _aws_iot_mqtt_internal_connect( char parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_7 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	double_1 = cosh ( double_2 ) ;
	double_2 = pow ( double_3 , double_2 ) ;
	long_2 = long_1 * long_1;
	double_1 = cosh ( double_4 ) ;
	char controller4vul_36[2];
	fgets(controller4vul_36 ,3 ,stdin);
	if( strcmp( controller4vul_36, "M,") < 0)
	{
		double_1 = pow ( double_5 , double_5 ) ;
		char controller4vul_37[4];
		fgets(controller4vul_37 ,5 ,stdin);
		if( strcmp( controller4vul_37, "Yu{_") < 0)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			float float_1 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_3 = 1;
			double double_6 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_2 = 1;
			short short_2 = 1;
			int int_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_7 = 1;
			int_1 = aws_iot_mqtt_internal_wait_for_read(double_1,int_1,float_1,uni_para);

			short_1 = short_2;
		}
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		double double_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		short short_2 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_7 = 1;
		int_2 = int_2 * int_2;
	}
	int_1 = int_1 + int_1;
	double_3 = tan ( double_5 ) ;
	long_2 = long_2 * long_3;
	double_1 = double_2 * double_4;
	if(1)
	{
		double_5 = sinh ( double_3 ) ;
	}
	double_6 = asin ( double_3 ) ;
	if(1)
	{
		char_1 = char_2;
	}
	double_6 = ceil ( double_6 ) ;
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	double_6 = fabs ( double_3 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		double double_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		short short_2 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_7 = 1;
		short_4 = short_3 * short_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		double double_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		short short_2 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_7 = 1;
		double_7 = floor ( double_6 ) ;
	}
	double_1 = ldexp ( double_4 , int_1 ) ;
	float_2 = float_1;
	double_5 = atan2 ( double_2 , double_5 ) ;
}
double aws_iot_mqtt_set_client_state( float parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = atan ( double_2 ) ;
	long_1 = long_1;
	double_4 = double_1 * double_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_2 = int_1 + int_2;
	}
	long_1 = long_1 + long_1;
	if(1)
	{
		return double_2;
	}
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "]") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		aws_iot_mqtt_get_client_state();

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		char_2 = char_1 + char_1;
	}
	else
	{
		int_3 = int_3;
	}
	double_4 = sqrt ( double_4 ) ;
	if(1)
	{
		int_3 = int_3 + int_1;
	}
	char_3 = char_4;
}
int _aws_iot_mqtt_is_client_state_valid_for_connect( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = asin ( double_2 ) ;
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int_1 = int_1;
		double_3 = sinh ( double_4 ) ;
		long_1 = long_2;
		double_2 = asin ( double_3 ) ;
	}
	return int_2;
}
void aws_iot_mqtt_get_client_state()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1;
}
char aws_iot_mqtt_internal_flushBuffers( long parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	double_1 = asin ( double_1 ) ;
	return char_1;
}
float aws_iot_mqtt_connect( float parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = fabs ( double_2 ) ;
	double_2 = fmod ( double_1 , double_2 ) ;
	char_1 = char_2;
	char controller4vul_35[4];
	fgets(controller4vul_35 ,5 ,stdin);
	if( strcmp( controller4vul_35, "D8xu") == 0)
	{
		_aws_iot_mqtt_internal_connect(char_3,int_1,uni_para);

		double_3 = exp ( double_3 ) ;
	}
	double_1 = log10 ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_4 = exp ( double_5 ) ;
	}
	int_1 = int_1;
	float_3 = float_1 + float_2;
	if(1)
	{
		double_1 = fmod ( double_4 , double_3 ) ;
		double_5 = cos ( double_3 ) ;
		if(1)
		{
			double_3 = ceil ( double_4 ) ;
		}
		double_6 = tanh ( double_1 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	double_5 = double_6 * double_6;
}
short aws_iot_mqtt_is_client_connected( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	float_1 = float_1 * float_2;
	double_1 = asin ( double_1 ) ;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "$") == 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		int_1 = int_1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		float_2 = float_3;
		double_2 = atan2 ( double_1 , double_1 ) ;
		double_3 = floor ( double_4 ) ;
	}
	double_4 = atan2 ( double_2 , double_3 ) ;
}
int aws_iot_mqtt_attempt_reconnect( unsigned int parameter_1,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float_1 = aws_iot_mqtt_connect(float_2,char_1,uni_para);

	double_1 = log ( double_2 ) ;
	long_2 = long_1 * long_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_1 = char_2 + char_3;
	}
	if(1)
	{
		long_2 = long_2;
	}
	long_2 = long_2;
	if(1)
	{
		double_1 = cos ( double_1 ) ;
		int_1 = int_1 + int_1;
	}
	double_1 = tan ( double_3 ) ;
	if(1)
	{
		int_1 = int_1 + int_1;
	}
	double_2 = asin ( double_3 ) ;
}
float aws_iot_is_autoreconnect_enabled( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = atan ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_3 = cos ( double_3 ) ;
		double_1 = floor ( double_4 ) ;
	}
	char_3 = char_1 * char_2;
}
int disconnectCallbackHandler( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = asin ( double_2 ) ;
	char_1 = char_2;
	if(1)
	{
		return int_1;
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_2 = exp ( double_3 ) ;
	}
	else
	{
		double_3 = floor ( double_4 ) ;
		double_3 = log10 ( double_2 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short_1 = short_2;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float_1 = aws_iot_is_autoreconnect_enabled(double_4);

			long_2 = long_1 * long_1;
		}
	}
	int_2 = aws_iot_mqtt_attempt_reconnect(unsigned_int_2,497);

}
unsigned int parseInputArgsForConnectParams( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = floor ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			double_2 = cosh ( double_3 ) ;
			double_1 = fabs ( double_1 ) ;
			int_3 = int_1 * int_2;
			double_4 = exp ( double_1 ) ;
			double_1 = double_3;
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			float_3 = float_1 + float_2;
			if(1)
			{
				double_4 = sinh ( double_1 ) ;
			}
			if(1)
			{
				double_2 = double_1 * double_4;
			}
			else
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
			}
			double_4 = sqrt ( double_5 ) ;
		}
	}
}
int main(int argc, char **argv)
{
	int uni_para =278;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_5 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double double_7 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_12 = 1;
	double double_13 = 1;
	float float_3 = 1;
	double double_14 = 1;
	double double_15 = 1;
	double double_16 = 1;
	char char_4 = 1;
	char_1 = char_2;
	double_1 = atan ( double_1 ) ;
	double_1 = ceil ( double_1 ) ;
	float_1 = float_1 + float_1;
	double_1 = sqrt ( double_2 ) ;
	short_3 = short_1 * short_2;
	double_1 = sinh ( double_1 ) ;
	short_2 = short_4 * short_3;
	double_3 = fabs ( double_2 ) ;
	double_1 = sqrt ( double_3 ) ;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_1 = asin ( double_2 ) ;
	double_2 = log10 ( double_3 ) ;
	short_5 = short_2;
	double_2 = atan2 ( double_1 , double_3 ) ;
	double_2 = double_4;
	double_3 = double_1;
	double_2 = double_1;
	int_3 = int_2 + int_3;
	double_5 = tan ( double_3 ) ;
	int_4 = int_1 * int_1;
	double_3 = double_2 * double_6;
	double_3 = log10 ( double_4 ) ;
	double_6 = atan2 ( double_4 , double_3 ) ;
	double_4 = fabs ( double_3 ) ;
	long_1 = long_1;
	double_5 = ldexp ( double_2 , int_2 ) ;
	double_6 = acos ( double_5 ) ;
	double_4 = fabs ( double_7 ) ;
	double_6 = sinh ( double_4 ) ;
	double_5 = double_6;
	float_2 = float_2;
	long_1 = long_1 + long_1;
	double_3 = ldexp ( double_2 , int_1 ) ;
	char controller4vul_31[5];
	fgets(controller4vul_31 ,6 ,stdin);
	if( strcmp( controller4vul_31, "+2S}{") == 0)
	{
		long_1 = aws_iot_mqtt_yield(int_3,long_2,uni_para);

		double_3 = acos ( double_5 ) ;
		return int_4;
	}
	double_1 = ceil ( double_4 ) ;
	char_2 = char_3;
	char_3 = char_3 * char_1;
	double_2 = exp ( double_7 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_5 = atan ( double_4 ) ;
	double_5 = log ( double_1 ) ;
	double_6 = double_4 * double_8;
	if(1)
	{
		double_7 = cos ( double_9 ) ;
		return int_3;
	}
	double_10 = ldexp ( double_11 , int_3 ) ;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		int int_1 = 1;
		short short_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_7 = 1;
		float float_2 = 1;
		long long_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_12 = 1;
		double double_13 = 1;
		float float_3 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_16 = 1;
		char char_4 = 1;
		float_3 = float_2;
		return int_4;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_4 = unsigned_int_5;
	if(1)
	{
		double_2 = ceil ( double_7 ) ;
		return int_1;
	}
	double_2 = double_6 * double_2;
	double_8 = cos ( double_2 ) ;
	double_12 = log10 ( double_13 ) ;
	double_12 = acos ( double_1 ) ;
	double_3 = fabs ( double_7 ) ;
	double_13 = tan ( double_3 ) ;
	double_10 = atan ( double_11 ) ;
	if(1)
	{
		double_11 = fabs ( double_1 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		int int_1 = 1;
		short short_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_7 = 1;
		float float_2 = 1;
		long long_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_12 = 1;
		double double_13 = 1;
		float float_3 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_16 = 1;
		char char_4 = 1;
		looper_1 += 1;
		double_13 = double_13 + double_11;
		if(1)
		{
		}
		double_3 = double_4;
		double_1 = cos ( double_7 ) ;
		double_14 = acos ( double_2 ) ;
		double_3 = cos ( double_15 ) ;
		double_15 = fabs ( double_6 ) ;
		if(1)
		{
			double_1 = pow ( double_9 , double_13 ) ;
		}
		double_9 = floor ( double_9 ) ;
		double_5 = sqrt ( double_11 ) ;
		double_14 = sqrt ( double_2 ) ;
		if(1)
		{
			char_1 = char_1 + char_3;
			float_2 = float_2 * float_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_3 = 1;
			int int_1 = 1;
			short short_5 = 1;
			double double_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			int int_4 = 1;
			double double_6 = 1;
			long long_1 = 1;
			double double_7 = 1;
			float float_2 = 1;
			long long_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_12 = 1;
			double double_13 = 1;
			float float_3 = 1;
			double double_14 = 1;
			double double_15 = 1;
			double double_16 = 1;
			char char_4 = 1;
			double_13 = cos ( double_16 ) ;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		int int_1 = 1;
		short short_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_7 = 1;
		float float_2 = 1;
		long long_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_12 = 1;
		double double_13 = 1;
		float float_3 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_16 = 1;
		char char_4 = 1;
		char_2 = char_3 * char_4;
	}
	else
	{
		double_12 = floor ( double_10 ) ;
	}
	return int_1;
}
