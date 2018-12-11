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

void aws_iot_mqtt_internal_deserialize_ack( double parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5);
float _aws_iot_mqtt_internal_serialize_publish( short parameter_1,char parameter_2,long parameter_3,short parameter_4,long parameter_5,long parameter_6,float parameter_7,char parameter_8,char parameter_9,char parameter_10,char parameter_11);
void _aws_iot_mqtt_internal_publish( double parameter_1,int parameter_2,long parameter_3,int parameter_4);
int aws_iot_mqtt_publish( unsigned int parameter_1,long parameter_2,long parameter_3,float parameter_4);
void _aws_iot_mqtt_force_client_disconnect( long parameter_1);
long aws_iot_mqtt_internal_serialize_zero( float parameter_1,short parameter_2,short parameter_3,long parameter_4,int uni_para);
double _aws_iot_mqtt_internal_disconnect( long parameter_1,int uni_para);
void aws_iot_mqtt_disconnect( int parameter_1,int uni_para);
unsigned int _aws_iot_mqtt_handle_disconnect( unsigned int parameter_1,int uni_para);
double _aws_iot_mqtt_keep_alive( float parameter_1);
int _aws_iot_mqtt_handle_reconnect( long parameter_1);
float _aws_iot_mqtt_internal_yield( double parameter_1,char parameter_2,int uni_para);
int aws_iot_mqtt_yield( long parameter_1,unsigned int parameter_2,int uni_para);
unsigned int iot_subscribe_callback_handler( unsigned int parameter_1,char parameter_2,char parameter_3,long parameter_4);
float _aws_iot_mqtt_internal_subscribe( char parameter_1,long parameter_2,float parameter_3,unsigned int parameter_4,float parameter_5);
short aws_iot_mqtt_subscribe( unsigned int parameter_1,char parameter_2,long parameter_3,double parameter_4,double parameter_5);
double aws_iot_mqtt_autoreconnect_set_status( long parameter_1,unsigned int parameter_2);
void iot_tls_destroy( unsigned int parameter_1);
short iot_tls_is_connected( int parameter_1);
unsigned int iot_tls_disconnect();
unsigned int iot_tls_mqtt_get_fixed_uint16_from_message( double parameter_1,unsigned int parameter_2);
long iot_tls_mqtt_copy_string_from_message( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
int iot_tls_mqtt_get_end_of_variable_length_int( float parameter_1,unsigned int parameter_2);
long iot_tls_mqtt_read_variable_length_int( long parameter_1,float parameter_2);
long iot_tls_write( float parameter_1,double parameter_2,char parameter_3,float parameter_4,double parameter_5);
float isTimerExpired( long parameter_1);
int iot_tls_read( long parameter_1,float parameter_2,double parameter_3,float parameter_4,float parameter_5);
char _iot_tls_verify_cert(long parameter_2,int parameter_3,float parameter_4);
int iot_tls_connect( char parameter_1,unsigned int parameter_2);
void _iot_tls_set_connect_params( unsigned int parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,unsigned int parameter_6,unsigned int parameter_7,float parameter_8);
long iot_tls_init( short parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,float parameter_6,char parameter_7,short parameter_8);
unsigned int aws_iot_mqtt_init( double parameter_1,int parameter_2);
long _aws_iot_mqtt_deserialize_suback( double parameter_1,double parameter_2,short parameter_3,float parameter_4,double parameter_5,int parameter_6);
short aws_iot_mqtt_get_next_packet_id( float parameter_1);
float _aws_iot_mqtt_serialize_subscribe( short parameter_1,int parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5,int parameter_6,float parameter_7,short parameter_8,int parameter_9);
char _aws_iot_mqtt_get_free_message_handler_index( int parameter_1);
long _aws_iot_mqtt_internal_resubscribe( int parameter_1);
double aws_iot_mqtt_resubscribe( short parameter_1);
double _aws_iot_mqtt_deserialize_connack( short parameter_1,char parameter_2,double parameter_3,long parameter_4);
void countdown_sec( int parameter_1,double parameter_2);
char aws_iot_mqtt_internal_serialize_ack( unsigned int parameter_1,long parameter_2,double parameter_3,float parameter_4,float parameter_5,short parameter_6);
long _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,char parameter_3);
void _aws_iot_mqtt_internal_deliver_message( char parameter_1,char parameter_2,char parameter_3,float parameter_4);
float aws_iot_mqtt_internal_read_uint16_t( char parameter_1);
long _aws_iot_mqtt_read_string_with_len( char parameter_1,long parameter_2,long parameter_3,short parameter_4);
double aws_iot_mqtt_internal_decode_remaining_length_from_buffer( char parameter_1,short parameter_2,char parameter_3);
int aws_iot_mqtt_internal_read_char( short parameter_1);
unsigned int aws_iot_mqtt_internal_deserialize_publish( short parameter_1,unsigned int parameter_2,short parameter_3,float parameter_4,char parameter_5,double parameter_6,char parameter_7,short parameter_8,long parameter_9,float parameter_10);
unsigned int _aws_iot_mqtt_internal_handle_publish( int parameter_1,long parameter_2);
short _aws_iot_mqtt_internal_decode_packet_remaining_len( int parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4);
unsigned int _aws_iot_mqtt_internal_readWrapper( unsigned int parameter_1,float parameter_2,double parameter_3,unsigned int parameter_4,char parameter_5);
void _aws_iot_mqtt_internal_read_packet( float parameter_1,char parameter_2,double parameter_3);
float aws_iot_mqtt_internal_cycle_read( short parameter_1,unsigned int parameter_2,int parameter_3);
void aws_iot_mqtt_internal_wait_for_read( int parameter_1,double parameter_2,float parameter_3);
int has_timer_expired( float parameter_1);
int aws_iot_mqtt_internal_send_packet( int parameter_1,float parameter_2,int parameter_3);
void aws_iot_mqtt_internal_write_uint_16( float parameter_1,float parameter_2);
void aws_iot_mqtt_internal_write_utf8_string( long parameter_1,unsigned int parameter_2,unsigned int parameter_3);
int aws_iot_mqtt_internal_write_len_to_buffer( unsigned int parameter_1,char parameter_2,int uni_para);
void aws_iot_mqtt_internal_write_char( long parameter_1,char parameter_2);
unsigned int aws_iot_mqtt_internal_init_header( char parameter_1,long parameter_2,short parameter_3,int parameter_4,char parameter_5);
int aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( double parameter_1);
void _aws_iot_get_connect_packet_length( long parameter_1);
float _aws_iot_mqtt_serialize_connect( int parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4);
void countdown_ms( long parameter_1,short parameter_2);
void init_timer( unsigned int parameter_1);
float aws_iot_mqtt_set_connect_params( double parameter_1,char parameter_2);
double _aws_iot_mqtt_internal_connect( unsigned int parameter_1,float parameter_2);
void aws_iot_mqtt_set_client_state( short parameter_1,double parameter_2,float parameter_3);
char _aws_iot_mqtt_is_client_state_valid_for_connect( long parameter_1);
void aws_iot_mqtt_get_client_state();
unsigned int aws_iot_mqtt_internal_flushBuffers( long parameter_1);
long aws_iot_mqtt_connect( unsigned int parameter_1,int parameter_2);
short aws_iot_mqtt_is_client_connected( unsigned int parameter_1);
double aws_iot_mqtt_attempt_reconnect( int parameter_1);
void aws_iot_is_autoreconnect_enabled( int parameter_1);
int disconnectCallbackHandler( short parameter_1);
void parseInputArgsForConnectParams( int parameter_1,char parameter_2);
void aws_iot_mqtt_internal_deserialize_ack( double parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,long parameter_5)
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_5 = 1;
	int_1 = aws_iot_mqtt_internal_read_char(short_1);

	double_1 = cos ( double_1 ) ;
	double_1 = atan2 ( double_2 , double_3 ) ;
	double_2 = fabs ( double_2 ) ;
	char_1 = char_2;
	double_4 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(char_3,short_1,char_2);

	double_1 = floor ( double_4 ) ;
	double_5 = log ( double_6 ) ;
	int_1 = int_2 * int_2;
	if(1)
	{
		char_2 = char_2 + char_1;
	}
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		char char_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_2 = 1;
		float float_1 = 1;
		char char_4 = 1;
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_5 = 1;
		float_1 = aws_iot_mqtt_internal_read_uint16_t(char_4);

		unsigned_int_1 = unsigned_int_2;
	}
	int_3 = int_1;
	double_5 = exp ( double_1 ) ;
	double_4 = sqrt ( double_6 ) ;
	double_5 = acos ( double_4 ) ;
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		char char_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_2 = 1;
		float float_1 = 1;
		char char_4 = 1;
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_5 = 1;
		char_4 = char_5;
	}
	float_2 = float_2;
	int_4 = int_3;
	char controller_4[5];
	fgets(controller_4 ,5 ,stdin);
	if( strcmp( controller_4, "7q$]") < 0)
	{
		double_5 = acos ( double_4 ) ;
	}
	double_1 = sinh ( double_2 ) ;
	double_1 = fmod ( double_2 , double_1 ) ;
}
float _aws_iot_mqtt_internal_serialize_publish( short parameter_1,char parameter_2,long parameter_3,short parameter_4,long parameter_5,long parameter_6,float parameter_7,char parameter_8,char parameter_9,char parameter_10,char parameter_11)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double_1 = cosh ( double_1 ) ;
	double_2 = atan ( double_1 ) ;
	int_1 = int_1;
	char_1 = char_1 * char_1;
	aws_iot_mqtt_internal_write_char(long_1,char_2);

	double_1 = sqrt ( double_1 ) ;
	if(1)
	{
		double_1 = fmod ( double_1 , double_2 ) ;
	}
	double_1 = sinh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		short_2 = short_1 + short_2;
	}
	if(1)
	{
		char_2 = char_2 * char_1;
	}
	double_1 = floor ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_3 = 1;
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		aws_iot_mqtt_internal_write_utf8_string(long_2,unsigned_int_1,unsigned_int_3);

		int_2 = int_2 * int_2;
	}
	unsigned_int_1 = aws_iot_mqtt_internal_init_header(char_1,long_1,short_2,int_3,char_2);

	double_1 = double_1;
	int_1 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_3,char_3,66);

	double_2 = tanh ( double_2 ) ;
	int_4 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(double_1);

	short_2 = short_1 * short_2;
	char_3 = char_2 * char_3;
	if(1)
	{
		aws_iot_mqtt_internal_write_uint_16(float_1,float_2);

		double_1 = atan ( double_2 ) ;
	}
	double_1 = double_1 * double_3;
	double_4 = acos ( double_3 ) ;
	double_1 = double_5 + double_4;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
}
void _aws_iot_mqtt_internal_publish( double parameter_1,int parameter_2,long parameter_3,int parameter_4)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_3 = 1;
	long long_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	short_1 = aws_iot_mqtt_get_next_packet_id(float_1);

	double_1 = exp ( double_1 ) ;
	short_1 = short_1 * short_2;
	float_2 = float_1 + float_1;
	double_2 = ceil ( double_3 ) ;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_3;
	short_1 = short_3 * short_2;
	if(1)
	{
		init_timer(unsigned_int_4);

		int_1 = aws_iot_mqtt_internal_send_packet(int_2,float_1,int_3);

		double_3 = double_2;
	}
	double_2 = double_2 + double_2;
	if(1)
	{
		double_3 = sqrt ( double_3 ) ;
	}
	aws_iot_mqtt_internal_deserialize_ack(double_1,unsigned_int_5,char_1,unsigned_int_5,long_1);

	double_3 = sinh ( double_4 ) ;
	if(1)
	{
		double_4 = atan ( double_1 ) ;
	}
	if(1)
	{
		double_1 = cosh ( double_2 ) ;
		if(1)
		{
			countdown_ms(long_2,short_1);

			double_2 = double_5;
		}
		double_5 = double_1;
		if(1)
		{
			short short_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			short short_2 = 1;
			float float_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_1 = 1;
			long long_1 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double double_5 = 1;
			float float_3 = 1;
			long long_3 = 1;
			short short_4 = 1;
			float float_4 = 1;
			char char_2 = 1;
			int int_4 = 1;
			int_1 = int_2 + int_4;
		}
	}
	aws_iot_mqtt_internal_wait_for_read(int_1,double_4,float_3);

	double_5 = double_4 + double_2;
	float_3 = _aws_iot_mqtt_internal_serialize_publish(short_1,char_1,long_3,short_4,long_3,long_1,float_4,char_1,char_2,char_2,char_1);

}
int aws_iot_mqtt_publish( unsigned int parameter_1,long parameter_2,long parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	short short_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_5 = 1;
	double_1 = fmod ( double_2 , double_2 ) ;
	long_1 = long_1 + long_2;
	double_3 = cos ( double_3 ) ;
	if(1)
	{
		short_1 = aws_iot_mqtt_is_client_connected(unsigned_int_1);

		double_1 = atan ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		short short_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_5 = 1;
		unsigned_int_2 = unsigned_int_2;
	}
	int_1 = int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		short short_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_5 = 1;
		unsigned_int_1 = unsigned_int_3;
	}
	double_4 = tan ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		short short_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_5 = 1;
		aws_iot_mqtt_get_client_state();

		short_1 = short_2 + short_3;
	}
	double_2 = cosh ( double_1 ) ;
	int_1 = int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		short short_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_5 = 1;
		aws_iot_mqtt_set_client_state(short_4,double_1,float_1);

		short_4 = short_5 * short_1;
	}
	double_4 = ceil ( double_5 ) ;
	_aws_iot_mqtt_internal_publish(double_1,int_2,long_2,int_1);

}
void _aws_iot_mqtt_force_client_disconnect( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_3 = ldexp ( double_3 , int_1 ) ;
}
long aws_iot_mqtt_internal_serialize_zero( float parameter_1,short parameter_2,short parameter_3,long parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = pow ( double_2 , double_1 ) ;
	double_3 = fabs ( double_1 ) ;
	float_1 = float_1;
	double_1 = atan ( double_4 ) ;
	char controller4vul_83[1];
	fgets(controller4vul_83 ,2 ,stdin);
	if( strcmp( controller4vul_83, "@") == 0)
	{
		int_1 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_1,char_1,uni_para);

		int_2 = int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	double_3 = exp ( double_1 ) ;
	double_5 = log10 ( double_2 ) ;
	if(1)
	{
		double_4 = acos ( double_2 ) ;
	}
	double_6 = floor ( double_5 ) ;
	int_3 = int_2;
	double_7 = acos ( double_5 ) ;
	double_5 = fabs ( double_3 ) ;
}
double _aws_iot_mqtt_internal_disconnect( long parameter_1,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_6 = 1;
	char char_1 = 1;
	double double_5 = 1;
	long_1 = long_1;
	double_1 = sqrt ( double_2 ) ;
	double_2 = double_1 + double_1;
	double_3 = pow ( double_3 , double_1 ) ;
	double_2 = exp ( double_1 ) ;
	char controller4vul_82[1];
	fgets(controller4vul_82 ,2 ,stdin);
	if( strcmp( controller4vul_82, "j") == 0)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_6 = 1;
		char char_1 = 1;
		double double_5 = 1;
		long_1 = aws_iot_mqtt_internal_serialize_zero(float_1,short_1,short_2,long_2,uni_para);

		char_1 = char_1;
	}
	short_1 = short_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		double_4 = ceil ( double_1 ) ;
	}
	double_4 = tanh ( double_1 ) ;
	int_1 = int_1;
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		float float_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_6 = 1;
		char char_1 = 1;
		double double_5 = 1;
		double_5 = cosh ( double_2 ) ;
	}
	double_6 = cos ( double_3 ) ;
}
void aws_iot_mqtt_disconnect( int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double_1 = asin ( double_2 ) ;
	double_1 = ldexp ( double_3 , int_1 ) ;
	double_3 = floor ( double_3 ) ;
	char controller4vul_81[5];
	fgets(controller4vul_81 ,6 ,stdin);
	if( strcmp( controller4vul_81, "L9.,U") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		double_1 = _aws_iot_mqtt_internal_disconnect(long_1,uni_para);

		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = double_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "]") == 0)
	{
		double_3 = fmod ( double_2 , double_1 ) ;
	}
	int_2 = int_1;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	float_1 = float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int_3 = int_1;
	}
	else
	{
		double_2 = atan ( double_3 ) ;
	}
	double_1 = exp ( double_3 ) ;
}
unsigned int _aws_iot_mqtt_handle_disconnect( unsigned int parameter_1,int uni_para)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = cosh ( double_1 ) ;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_80[2];
	fgets(controller4vul_80 ,3 ,stdin);
	if( strcmp( controller4vul_80, ",J") == 0)
	{
		aws_iot_mqtt_disconnect(int_1,uni_para);

		double_2 = fabs ( double_2 ) ;
	}
	if(1)
	{
		float_2 = float_1;
	}
	double_2 = tanh ( double_2 ) ;
	double_1 = acos ( double_3 ) ;
}
double _aws_iot_mqtt_keep_alive( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_2 = 1;
	float_2 = float_1 * float_1;
	int_2 = int_1 + int_2;
	double_1 = acos ( double_2 ) ;
	unsigned_int_1 = _aws_iot_mqtt_handle_disconnect(unsigned_int_1);

	countdown_ms(long_1,short_1);

	double_2 = ldexp ( double_1 , int_2 ) ;
	if(1)
	{
		double_2 = asin ( double_2 ) ;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_2 = 1;
		long_1 = aws_iot_mqtt_internal_serialize_zero(float_1,short_1,short_2,long_2,667);

		int_2 = aws_iot_mqtt_internal_send_packet(int_1,float_2,int_1);

		char_3 = char_1 + char_2;
	}
	char controller_4[6];
	fgets(controller_4 ,6 ,stdin);
	if( strcmp( controller_4, "4L77M") < 0)
	{
		init_timer(unsigned_int_1);

		long_1 = long_3;
		double_3 = cos ( double_1 ) ;
	}
	double_4 = sinh ( double_5 ) ;
	char_3 = char_1 * char_1;
	countdown_sec(int_3,double_2);

	long_2 = long_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		double_3 = asin ( double_4 ) ;
	}
	double_3 = double_3;
	if(1)
	{
		double_1 = exp ( double_5 ) ;
		int_2 = has_timer_expired(float_1);

		double_1 = tanh ( double_5 ) ;
	}
	float_1 = float_3;
	short_4 = short_1 + short_3;
	float_1 = float_3 * float_1;
}
int _aws_iot_mqtt_handle_reconnect( long parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_1 = asin ( double_2 ) ;
	}
	aws_iot_mqtt_set_client_state(short_1,double_1,float_1);

	countdown_ms(long_2,short_2);

	double_1 = pow ( double_1 , double_1 ) ;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		float float_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float_2 = float_2;
		if(1)
		{
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			float float_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			float float_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_3 = atan2 ( double_4 , double_1 ) ;
			if(1)
			{
				double_2 = aws_iot_mqtt_attempt_reconnect(int_1);

				double_2 = tan ( double_2 ) ;
			}
			unsigned_int_3 = unsigned_int_1;
		}
	}
	int_1 = int_2;
	if(1)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		float float_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_5 = cosh ( double_5 ) ;
	}
	int_2 = has_timer_expired(float_1);

	unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
	double_3 = log10 ( double_6 ) ;
}
float _aws_iot_mqtt_internal_yield( double parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_1 = pow ( double_2 , double_1 ) ;
	short_1 = short_1 * short_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	double_1 = ceil ( double_2 ) ;
	double_3 = sinh ( double_1 ) ;
	double_4 = ceil ( double_3 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double_4 = double_1;
		if(1)
		{
			if(1)
			{
				double_2 = ldexp ( double_4 , int_3 ) ;
			}
			double_2 = exp ( double_5 ) ;
		}
		double_5 = cosh ( double_1 ) ;
		if(1)
		{
			double_5 = log10 ( double_1 ) ;
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double_6 = ceil ( double_3 ) ;
			}
		}
		char controller4vul_77[1];
		fgets(controller4vul_77 ,2 ,stdin);
		if( strcmp( controller4vul_77, ";") == 0)
		{
			double_1 = cosh ( double_3 ) ;
			char controller4vul_78[3];
			fgets(controller4vul_78 ,4 ,stdin);
			if( strcmp( controller4vul_78, "<0(") == 0)
			{
				double double_1 = 1;
				double double_2 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double_2 = double_5 + double_7;
				char controller4vul_79[5];
				fgets(controller4vul_79 ,6 ,stdin);
				if( strcmp( controller4vul_79, "cq^7H") == 0)
				{
					unsigned_int_3 = _aws_iot_mqtt_handle_disconnect(unsigned_int_2,uni_para);

					double_4 = floor ( double_5 ) ;
				}
				double_2 = double_7 * double_2;
				unsigned_int_1 = unsigned_int_3;
				int_1 = int_2 + int_1;
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
	int_3 = int_3;
	looper_1 += 1;
	int_4 = int_2;
}
int aws_iot_mqtt_yield( long parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = cosh ( double_2 ) ;
	double_4 = double_3 + double_4;
	if(1)
	{
		double_1 = sinh ( double_4 ) ;
	}
	short_1 = short_1;
	if(1)
	{
		double_2 = fmod ( double_1 , double_5 ) ;
	}
	char controller4vul_75[5];
	fgets(controller4vul_75 ,6 ,stdin);
	if( strcmp( controller4vul_75, "4CmvS") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		float float_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char controller4vul_76[1];
		fgets(controller4vul_76 ,2 ,stdin);
		if( strcmp( controller4vul_76, "H") == 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			double double_5 = 1;
			float float_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float_1 = _aws_iot_mqtt_internal_yield(double_4,char_1,uni_para);

			float_2 = float_2;
		}
		if(1)
		{
			double_5 = cosh ( double_1 ) ;
		}
		unsigned_int_1 = unsigned_int_2;
		char controller_2[4];
		fgets(controller_2 ,4 ,stdin);
		if( strcmp( controller_2, "nP>") > 0)
		{
			double_5 = atan ( double_5 ) ;
		}
	}
	double_2 = fabs ( double_1 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			double double_5 = 1;
			float float_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 + long_1;
		}
	}
	double_5 = sinh ( double_1 ) ;
}
unsigned int iot_subscribe_callback_handler( unsigned int parameter_1,char parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	double_2 = log ( double_2 ) ;
	double_3 = sinh ( double_4 ) ;
	char_1 = char_1;
}
float _aws_iot_mqtt_internal_subscribe( char parameter_1,long parameter_2,float parameter_3,unsigned int parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float float_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_5 = 1;
	double double_8 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = fabs ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_3 = ldexp ( double_3 , int_1 ) ;
	float_1 = _aws_iot_mqtt_serialize_subscribe(short_1,int_1,int_2,long_1,unsigned_int_1,int_3,float_2,short_2,int_1);

	int_4 = int_4;
	float_3 = float_3;
	countdown_ms(long_1,short_3);

	double_3 = tan ( double_1 ) ;
	double_2 = fabs ( double_2 ) ;
	double_1 = sqrt ( double_2 ) ;
	double_1 = double_2 + double_2;
	double_3 = fabs ( double_1 ) ;
	double_3 = atan2 ( double_2 , double_1 ) ;
	double_4 = double_3;
	double_1 = fabs ( double_3 ) ;
	if(1)
	{
		char_1 = _aws_iot_mqtt_get_free_message_handler_index(int_1);

		float_3 = float_4;
	}
	double_1 = tanh ( double_2 ) ;
	if(1)
	{
		double_4 = log10 ( double_1 ) ;
	}
	double_1 = fmod ( double_4 , double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		short short_2 = 1;
		int int_4 = 1;
		float float_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		float float_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_5 = 1;
		double double_8 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_2 = char_3;
	}
	aws_iot_mqtt_internal_wait_for_read(int_2,double_1,float_2);

	double_4 = double_5;
	if(1)
	{
		double_2 = atan2 ( double_2 , double_1 ) ;
	}
	char_1 = char_1 * char_1;
	if(1)
	{
		init_timer(unsigned_int_2);

		double_2 = log ( double_6 ) ;
	}
	double_3 = atan ( double_6 ) ;
	short_2 = aws_iot_mqtt_get_next_packet_id(float_4);

	long_1 = _aws_iot_mqtt_deserialize_suback(double_2,double_7,short_2,float_3,double_2,int_4);

	double_1 = log10 ( double_6 ) ;
	double_2 = cos ( double_3 ) ;
	double_7 = floor ( double_5 ) ;
	int_3 = aws_iot_mqtt_internal_send_packet(int_5,float_1,int_3);

	double_7 = tanh ( double_8 ) ;
	double_4 = floor ( double_8 ) ;
}
short aws_iot_mqtt_subscribe( unsigned int parameter_1,char parameter_2,long parameter_3,double parameter_4,double parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1 + int_2;
	double_1 = tan ( double_1 ) ;
	double_2 = tanh ( double_3 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	float_1 = _aws_iot_mqtt_internal_subscribe(char_2,long_1,float_2,unsigned_int_2,float_1);

	float_2 = float_2 * float_2;
	if(1)
	{
		aws_iot_mqtt_set_client_state(short_1,double_2,float_2);

		double_3 = exp ( double_1 ) ;
	}
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
		double_4 = double_4 + double_4;
	}
	double_1 = cosh ( double_1 ) ;
	float_1 = float_2 + float_1;
	if(1)
	{
		short_2 = aws_iot_mqtt_is_client_connected(unsigned_int_3);

		aws_iot_mqtt_get_client_state();

		double_5 = atan ( double_5 ) ;
	}
	double_4 = tan ( double_5 ) ;
}
double aws_iot_mqtt_autoreconnect_set_status( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	if(1)
	{
		double_2 = tanh ( double_1 ) ;
	}
	double_3 = floor ( double_1 ) ;
	double_4 = log ( double_1 ) ;
}
void iot_tls_destroy( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = fabs ( double_1 ) ;
	double_3 = double_1 + double_2;
	char_3 = char_1 * char_2;
	char_4 = char_2 * char_4;
	double_3 = exp ( double_1 ) ;
	double_4 = asin ( double_1 ) ;
	double_1 = cosh ( double_4 ) ;
	int_2 = int_1 * int_2;
	double_2 = double_4;
}
short iot_tls_is_connected( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
unsigned int iot_tls_disconnect()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_3 = double_1 * double_2;
	double_1 = log10 ( double_2 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	float_1 = float_1;
	looper_1 += 1;
	return unsigned_int_2;
}
unsigned int iot_tls_mqtt_get_fixed_uint16_from_message( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = double_2;
	float_1 = float_2;
	return unsigned_int_1;
}
long iot_tls_mqtt_copy_string_from_message( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long_1 = long_1;
	unsigned_int_1 = iot_tls_mqtt_get_fixed_uint16_from_message(double_1,unsigned_int_1);

	int_1 = int_1 + int_1;
	return long_1;
}
int iot_tls_mqtt_get_end_of_variable_length_int( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double_1 = pow ( double_2 , double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		looper_1 += 1;
		double_3 = ceil ( double_1 ) ;
	}
	int_2 = int_1 + int_2;
	return int_3;
}
long iot_tls_mqtt_read_variable_length_int( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	double_1 = floor ( double_2 ) ;
	double_3 = sinh ( double_1 ) ;
	double_2 = cos ( double_4 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double_5 = tan ( double_5 ) ;
		unsigned_int_1 = unsigned_int_2;
		double_6 = fabs ( double_4 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	int_2 = int_1 + int_1;
	looper_1 += 1;
	return long_1;
}
long iot_tls_write( float parameter_1,double parameter_2,char parameter_3,float parameter_4,double parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = atan ( double_2 ) ;
	double_1 = exp ( double_1 ) ;
	double_1 = atan ( double_1 ) ;
	int_1 = iot_tls_mqtt_get_end_of_variable_length_int(float_1,unsigned_int_1);

	double_1 = fmod ( double_3 , double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				float float_1 = 1;
				double double_3 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_2 = 1;
				char char_1 = 1;
				long long_3 = 1;
				double double_4 = 1;
				long_1 = iot_tls_mqtt_read_variable_length_int(long_1,float_1);

				double_4 = tanh ( double_2 ) ;
				unsigned_int_3 = unsigned_int_2;
			}
		}
		if(1)
		{
		}
	}
	long_2 = iot_tls_mqtt_copy_string_from_message(char_1,unsigned_int_2,unsigned_int_3);

	float_1 = float_1 * float_1;
	if(1)
	{
		return long_2;
	}
	if(1)
	{
		return long_3;
	}
	return long_3;
	int_1 = has_timer_expired(float_1);

}
float isTimerExpired( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = cos ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long_1 = long_1;
		double_2 = ldexp ( double_1 , int_1 ) ;
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			long long_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char_2 = char_1 + char_1;
		}
	}
	else
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_1 = short_1 + short_2;
	}
	return float_1;
}
int iot_tls_read( long parameter_1,float parameter_2,double parameter_3,float parameter_4,float parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = log10 ( double_2 ) ;
	int_1 = int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		looper_1 += 1;
		double_3 = atan ( double_1 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			int int_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			double_2 = double_1;
			double_1 = atan ( double_4 ) ;
			unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			return int_3;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		int_1 = has_timer_expired(float_1);

		float_2 = isTimerExpired(long_1);

		float_1 = float_2;
		return int_3;
	}
	if(1)
	{
		return int_3;
	}
	else
	{
		return int_4;
	}
}
char _iot_tls_verify_cert(long parameter_2,int parameter_3,float parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float_3 = float_1 * float_2;
	double_1 = fabs ( double_1 ) ;
	double_2 = atan2 ( double_1 , double_3 ) ;
	double_1 = fabs ( double_3 ) ;
	int_1 = int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long_1 = long_2;
	}
	else
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_3 = acos ( double_3 ) ;
		double_4 = log10 ( double_5 ) ;
	}
	return char_1;
}
int iot_tls_connect( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_2 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	double double_12 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_4 = 1;
	double_1 = fabs ( double_1 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = acos ( double_2 ) ;
	double_2 = double_2 + double_1;
	unsigned_int_2 = unsigned_int_4;
	double_2 = sqrt ( double_1 ) ;
	int_1 = int_1 * int_2;
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		double_2 = cos ( double_3 ) ;
	}
	double_1 = acos ( double_2 ) ;
	double_1 = acos ( double_2 ) ;
	int_2 = int_3 + int_4;
	int_2 = int_2 * int_2;
	double_2 = exp ( double_1 ) ;
	double_2 = floor ( double_3 ) ;
	double_1 = sinh ( double_2 ) ;
	double_2 = cosh ( double_3 ) ;
	char_2 = char_1 * char_2;
	unsigned_int_5 = unsigned_int_5;
	if(1)
	{
		double_2 = log10 ( double_4 ) ;
		return int_4;
	}
	int_4 = int_2;
	long_1 = long_1 * long_1;
	if(1)
	{
		long_1 = long_1;
		return int_3;
	}
	double_5 = log10 ( double_5 ) ;
	double_4 = exp ( double_6 ) ;
	double_2 = tan ( double_1 ) ;
	if(1)
	{
		double_4 = cos ( double_2 ) ;
		return int_3;
	}
	double_4 = fmod ( double_5 , double_7 ) ;
	if(1)
	{
		double_4 = exp ( double_8 ) ;
		double_5 = exp ( double_4 ) ;
		return int_1;
	}
	unsigned_int_5 = unsigned_int_5;
	long_1 = long_2 + long_2;
	double_6 = tan ( double_8 ) ;
	if(1)
	{
		double_4 = ceil ( double_7 ) ;
		{
			return int_4;
			return int_4;
			return int_1;
		}
		double_8 = atan2 ( double_9 , double_4 ) ;
	}
	double_1 = asin ( double_4 ) ;
	if(1)
	{
		double_2 = cos ( double_6 ) ;
		return int_1;
	}
	double_6 = log ( double_2 ) ;
	double_6 = asin ( double_10 ) ;
	if(1)
	{
		long_1 = long_1;
		return int_2;
	}
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
		double_1 = asin ( double_10 ) ;
	}
	else
	{
		double_6 = tanh ( double_7 ) ;
	}
	double_7 = atan ( double_3 ) ;
	double_11 = double_4 + double_4;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		double double_12 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		short_1 = short_1;
		return int_3;
	}
	_iot_tls_set_connect_params(unsigned_int_2,char_3,char_3,char_1,char_3,unsigned_int_4,unsigned_int_6,float_1);

	char_2 = _iot_tls_verify_cert(long_2,int_1,float_1);

	double_11 = floor ( double_2 ) ;
	if(1)
	{
		if(1)
		{
			double_7 = asin ( double_8 ) ;
			return int_3;
		}
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		double double_12 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		short_2 = short_3;
		return int_2;
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		double double_12 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		char_5 = char_4 * char_5;
		return int_1;
	}
	double_2 = tan ( double_11 ) ;
	double_2 = fmod ( double_3 , double_6 ) ;
	double_6 = double_12;
	double_11 = atan ( double_10 ) ;
	double_2 = cos ( double_9 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			float_1 = float_1 * float_1;
			if(1)
			{
				double_6 = tanh ( double_2 ) ;
			}
			return int_3;
		}
	}
	double_4 = log10 ( double_5 ) ;
	if(1)
	{
		float_1 = float_2 * float_1;
	}
	else
	{
		int_4 = int_4 * int_2;
	}
	double_4 = acos ( double_6 ) ;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_1 = 1;
			double double_12 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			short short_4 = 1;
			double_5 = fabs ( double_5 ) ;
			short_4 = short_4;
			float_2 = float_2 + float_1;
			double_2 = exp ( double_5 ) ;
		}
		else
		{
			float_1 = float_2;
			unsigned_int_3 = unsigned_int_3;
		}
	}
	else
	{
		double_1 = cosh ( double_3 ) ;
		double_6 = atan2 ( double_3 , double_8 ) ;
	}
	if(1)
	{
		double_8 = cos ( double_11 ) ;
		double_8 = double_1 + double_5;
		long_2 = long_1;
	}
	int_1 = int_1 * int_1;
	return int_1;
}
void _iot_tls_set_connect_params( unsigned int parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,unsigned int parameter_6,unsigned int parameter_7,float parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double_1 = fabs ( double_2 ) ;
	double_3 = ceil ( double_3 ) ;
	double_1 = atan ( double_1 ) ;
	double_1 = cos ( double_4 ) ;
	double_1 = sqrt ( double_1 ) ;
	char_1 = char_1;
	double_5 = tanh ( double_1 ) ;
}
long iot_tls_init( short parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,float parameter_6,char parameter_7,short parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	iot_tls_destroy(unsigned_int_2);

	long_1 = long_1 * long_1;
	int_1 = iot_tls_connect(char_1,unsigned_int_1);

	int_2 = iot_tls_read(long_1,float_1,double_1,float_2,float_2);

	long_1 = iot_tls_write(float_2,double_1,char_2,float_3,double_1);

	unsigned_int_1 = iot_tls_disconnect();

	char_3 = char_1;
	double_1 = pow ( double_2 , double_3 ) ;
	short_1 = iot_tls_is_connected(int_1);

	long_2 = long_3;
	long_3 = long_4 + long_4;
	double_4 = fmod ( double_3 , double_5 ) ;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	return long_1;
	_iot_tls_set_connect_params(unsigned_int_1,char_3,char_3,char_3,char_2,unsigned_int_3,unsigned_int_2,float_1);

}
unsigned int aws_iot_mqtt_init( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_5 = 1;
	short short_1 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 + long_2;
	double_1 = ceil ( double_1 ) ;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2;
		double_2 = ldexp ( double_3 , int_2 ) ;
		int_1 = int_1 + int_1;
		float_1 = aws_iot_mqtt_set_connect_params(double_2,char_1);

		int_1 = int_2 * int_1;
	}
	long_2 = long_3 * long_3;
	long_1 = long_4 + long_3;
	char_1 = char_1;
	double_1 = floor ( double_3 ) ;
	int_3 = int_2;
	int_4 = int_1;
	double_2 = sqrt ( double_3 ) ;
	char_2 = char_3;
	long_5 = iot_tls_init(short_1,char_3,char_1,char_2,char_4,float_1,char_4,short_1);

	double_4 = double_4 * double_5;
	if(1)
	{
		double_6 = cosh ( double_1 ) ;
	}
	double_2 = tan ( double_1 ) ;
	float_1 = float_1 + float_2;
	if(1)
	{
		double_2 = double_5;
	}
	long_3 = long_4;
	if(1)
	{
		double_4 = double_2 * double_2;
		double_1 = exp ( double_4 ) ;
	}
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_5 = 1;
		short short_1 = 1;
		char char_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		char_4 = char_3;
		double_2 = atan ( double_2 ) ;
		float_4 = float_3 * float_1;
	}
	double_5 = tan ( double_1 ) ;
	double_6 = double_1;
	double_5 = atan2 ( double_4 , double_1 ) ;
	if(1)
	{
		double_2 = double_5;
		init_timer(unsigned_int_5);

		double_3 = ceil ( double_4 ) ;
		short_1 = short_1;
		int_4 = int_3;
		long_4 = long_3 + long_4;
	}
	double_4 = log ( double_3 ) ;
	double_6 = atan ( double_3 ) ;
	double_4 = exp ( double_1 ) ;
	float_3 = float_1;
}
long _aws_iot_mqtt_deserialize_suback( double parameter_1,double parameter_2,short parameter_3,float parameter_4,double parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	int int_3 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_7 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	double_1 = double_1;
	double_2 = pow ( double_2 , double_2 ) ;
	double_3 = floor ( double_3 ) ;
	double_4 = sqrt ( double_1 ) ;
	double_5 = ceil ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		int int_3 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_7 = 1;
		char char_2 = 1;
		int int_2 = 1;
		float float_3 = 1;
		long long_3 = 1;
		int_2 = int_1 + int_2;
	}
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1;
	double_6 = cosh ( double_5 ) ;
	double_2 = exp ( double_4 ) ;
	double_1 = tan ( double_5 ) ;
	if(1)
	{
		int_3 = aws_iot_mqtt_internal_read_char(short_1);

		int_1 = int_3 + int_3;
	}
	short_1 = short_1 * short_1;
	if(1)
	{
		double_5 = double_4;
	}
	long_1 = long_1 + long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		int int_3 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_7 = 1;
		char char_2 = 1;
		int int_2 = 1;
		float float_3 = 1;
		long long_3 = 1;
		float_1 = float_1 * float_3;
	}
	float_1 = aws_iot_mqtt_internal_read_uint16_t(char_1);

	double_6 = log ( double_5 ) ;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		int int_3 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_7 = 1;
		char char_2 = 1;
		int int_2 = 1;
		float float_3 = 1;
		long long_3 = 1;
		long_3 = long_3 * long_2;
	}
	unsigned_int_1 = unsigned_int_2;
	short_2 = short_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			short_3 = short_2;
		}
		double_7 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(char_2,short_1,char_2);

		double_3 = double_7;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
short aws_iot_mqtt_get_next_packet_id( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
float _aws_iot_mqtt_serialize_subscribe( short parameter_1,int parameter_2,int parameter_3,long parameter_4,unsigned int parameter_5,int parameter_6,float parameter_7,short parameter_8,int parameter_9)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_1 = log10 ( double_2 ) ;
	int_1 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(double_2);

	double_2 = double_2 + double_1;
	double_1 = atan ( double_1 ) ;
	unsigned_int_1 = aws_iot_mqtt_internal_init_header(char_1,long_1,short_1,int_1,char_1);

	double_1 = asin ( double_1 ) ;
	aws_iot_mqtt_internal_write_uint_16(float_1,float_2);

	int_3 = int_1 * int_2;
	if(1)
	{
		double_2 = floor ( double_2 ) ;
	}
	float_2 = float_1 * float_2;
	aws_iot_mqtt_internal_write_char(long_1,char_1);

	int_3 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_2,char_2,379);

	aws_iot_mqtt_internal_write_utf8_string(long_1,unsigned_int_3,unsigned_int_2);

	double_1 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = atan ( double_4 ) ;
	}
	if(1)
	{
		short_1 = short_1;
	}
	int_4 = int_1 * int_2;
	if(1)
	{
		double_3 = fmod ( double_5 , double_5 ) ;
	}
	double_3 = fmod ( double_5 , double_5 ) ;
	unsigned_int_1 = unsigned_int_4 * unsigned_int_2;
	double_4 = atan2 ( double_6 , double_7 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_2;
		double_1 = sqrt ( double_3 ) ;
	}
	double_7 = log10 ( double_6 ) ;
	double_5 = cos ( double_1 ) ;
}
char _aws_iot_mqtt_get_free_message_handler_index( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short_1 = short_1 + short_2;
	double_1 = asin ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	double_2 = ldexp ( double_3 , int_1 ) ;
}
long _aws_iot_mqtt_internal_resubscribe( int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	float float_3 = 1;
	long long_3 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long_1 = long_1 * long_2;
	aws_iot_mqtt_internal_wait_for_read(int_1,double_1,float_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = log10 ( double_1 ) ;
	double_1 = floor ( double_2 ) ;
	int_1 = aws_iot_mqtt_internal_send_packet(int_1,float_2,int_2);

	long_2 = _aws_iot_mqtt_deserialize_suback(double_3,double_3,short_1,float_2,double_2,int_1);

	double_3 = log10 ( double_4 ) ;
	countdown_ms(long_1,short_2);

	int_3 = int_1;
	double_1 = asin ( double_1 ) ;
	short_1 = aws_iot_mqtt_get_next_packet_id(float_1);

	double_3 = ceil ( double_2 ) ;
	int_1 = int_2 * int_3;
	double_1 = double_2 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_1 = 1;
		float float_3 = 1;
		long long_3 = 1;
		short short_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		if(1)
		{
		}
		int_3 = int_1 + int_3;
		init_timer(unsigned_int_1);

		unsigned_int_2 = unsigned_int_1;
		double_2 = ldexp ( double_1 , int_4 ) ;
		if(1)
		{
			char_1 = _aws_iot_mqtt_get_free_message_handler_index(int_4);

			double_4 = cos ( double_1 ) ;
		}
		short_1 = short_3;
		if(1)
		{
			double_2 = log10 ( double_5 ) ;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
		double_5 = asin ( double_5 ) ;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			float float_2 = 1;
			int int_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			short short_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char char_1 = 1;
			float float_3 = 1;
			long long_3 = 1;
			short short_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double_1 = log10 ( double_6 ) ;
		}
	}
	float_2 = float_3;
	float_1 = _aws_iot_mqtt_serialize_subscribe(short_1,int_4,int_4,long_3,unsigned_int_1,int_3,float_2,short_2,int_1);

}
double aws_iot_mqtt_resubscribe( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = aws_iot_mqtt_is_client_connected(unsigned_int_2);

	short_3 = short_1 * short_2;
	if(1)
	{
		aws_iot_mqtt_set_client_state(short_1,double_1,float_1);

		double_2 = atan2 ( double_1 , double_2 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		double double_3 = 1;
		double_3 = cos ( double_2 ) ;
	}
	if(1)
	{
		double_4 = ceil ( double_4 ) ;
	}
	long_1 = _aws_iot_mqtt_internal_resubscribe(int_1);

	double_4 = tanh ( double_2 ) ;
	char controller_4[2];
	fgets(controller_4 ,2 ,stdin);
	if( strcmp( controller_4, "(") == 0)
	{
		double_5 = tanh ( double_4 ) ;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	int_1 = int_1;
	if(1)
	{
		double_2 = atan2 ( double_4 , double_5 ) ;
	}
	double_6 = cos ( double_4 ) ;
	aws_iot_mqtt_get_client_state();

}
double _aws_iot_mqtt_deserialize_connack( short parameter_1,char parameter_2,double parameter_3,long parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_6 = 1;
	int int_4 = 1;
	short short_2 = 1;
	double double_7 = 1;
	int int_5 = 1;
	double double_8 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_9 = 1;
	double double_10 = 1;
	float_1 = float_1;
	double_1 = fmod ( double_2 , double_2 ) ;
	double_3 = floor ( double_2 ) ;
	double_1 = tan ( double_3 ) ;
	double_4 = asin ( double_1 ) ;
	double_2 = double_2;
	int_1 = int_2;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		double_5 = asin ( double_1 ) ;
	}
	double_5 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(char_1,short_1,char_1);

	double_5 = log ( double_3 ) ;
	int_3 = int_3;
	double_2 = sinh ( double_2 ) ;
	double_2 = tan ( double_4 ) ;
	double_4 = atan ( double_1 ) ;
	if(1)
	{
		long_1 = long_1;
	}
	double_2 = atan ( double_6 ) ;
	if(1)
	{
		double_6 = sqrt ( double_2 ) ;
	}
	int_4 = aws_iot_mqtt_internal_read_char(short_2);

	long_1 = long_1;
	short_2 = short_1;
	if(1)
	{
		double_5 = log ( double_2 ) ;
	}
	double_5 = sinh ( double_7 ) ;
	double_6 = acos ( double_2 ) ;
	double_2 = double_6 * double_3;
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		short short_1 = 1;
		int int_3 = 1;
		long long_1 = 1;
		double double_6 = 1;
		int int_4 = 1;
		short short_2 = 1;
		double double_7 = 1;
		int int_5 = 1;
		double double_8 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_9 = 1;
		double double_10 = 1;
		int_2 = int_5 + int_3;
		short_1 = short_2 + short_2;
		long_3 = long_1 + long_2;
		double_8 = log ( double_4 ) ;
		double_9 = acos ( double_6 ) ;
		double_1 = asin ( double_10 ) ;
		double_10 = tan ( double_10 ) ;
	}
	double_8 = ldexp ( double_1 , int_5 ) ;
}
void countdown_sec( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_2 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = floor ( double_1 ) ;
	double_1 = ldexp ( double_2 , int_2 ) ;
}
char aws_iot_mqtt_internal_serialize_ack( unsigned int parameter_1,long parameter_2,double parameter_3,float parameter_4,float parameter_5,short parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_4 = 1;
	long long_2 = 1;
	char char_5 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = log10 ( double_2 ) ;
	int_1 = int_1 + int_1;
	double_1 = exp ( double_3 ) ;
	double_1 = cosh ( double_2 ) ;
	unsigned_int_1 = aws_iot_mqtt_internal_init_header(char_1,long_1,short_1,int_2,char_1);

	double_3 = tan ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		char char_4 = 1;
		long long_2 = 1;
		char char_5 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char_4 = char_2 + char_3;
	}
	aws_iot_mqtt_internal_write_char(long_2,char_5);

	double_1 = floor ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		char char_4 = 1;
		long long_2 = 1;
		char char_5 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float_2 = float_1 * float_2;
	}
	double_1 = ldexp ( double_1 , int_2 ) ;
	double_2 = tanh ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		char char_4 = 1;
		long long_2 = 1;
		char char_5 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2;
	}
	double_3 = log ( double_2 ) ;
	double_4 = sqrt ( double_1 ) ;
	double_2 = exp ( double_2 ) ;
	int_1 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_3,char_4,224);

	unsigned_int_4 = unsigned_int_1;
	aws_iot_mqtt_internal_write_uint_16(float_1,float_3);

	float_3 = float_4;
}
long _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,char parameter_3)
{
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float_1 = float_1;
	if(1)
	{
		return long_1;
	}
	double_1 = floor ( double_1 ) ;
	double_1 = pow ( double_1 , double_1 ) ;
	double_1 = cosh ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		float float_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_3 = 1;
		char char_1 = 1;
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			double_3 = cos ( double_2 ) ;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				double_1 = atan ( double_3 ) ;
			}
		}
		if(1)
		{
			double_3 = tan ( double_2 ) ;
		}
		double_1 = atan2 ( double_1 , double_4 ) ;
		char_1 = char_1;
	}
	double_5 = double_4;
	return long_1;
}
void _aws_iot_mqtt_internal_deliver_message( char parameter_1,char parameter_2,char parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_2 = double_1 * double_1;
	aws_iot_mqtt_set_client_state(short_1,double_2,float_1);

	double_2 = tanh ( double_3 ) ;
	double_2 = double_1 * double_4;
	char_1 = char_1;
	if(1)
	{
		double_5 = double_1 * double_3;
	}
	double_3 = atan ( double_4 ) ;
	long_1 = _aws_iot_mqtt_internal_is_topic_matched(char_2,char_2,char_1);

	double_6 = fabs ( double_5 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					short short_1 = 1;
					float float_1 = 1;
					double double_3 = 1;
					double double_4 = 1;
					char char_1 = 1;
					double double_5 = 1;
					long long_1 = 1;
					char char_2 = 1;
					double double_6 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
				}
			}
		}
	}
	double_2 = cos ( double_2 ) ;
	char_1 = char_3;
	aws_iot_mqtt_get_client_state();

}
float aws_iot_mqtt_internal_read_uint16_t( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char_1 = char_2;
	double_1 = tanh ( double_1 ) ;
	double_3 = double_1 * double_2;
	int_2 = int_1 + int_2;
	double_1 = sqrt ( double_4 ) ;
	double_1 = cos ( double_1 ) ;
	return float_1;
}
long _aws_iot_mqtt_read_string_with_len( char parameter_1,long parameter_2,long parameter_3,short parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_1 = acos ( double_1 ) ;
	int_2 = int_1 + int_1;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double_2 = double_2;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_1 = 1;
			char char_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			float_1 = aws_iot_mqtt_internal_read_uint16_t(char_1);

			double_1 = cos ( double_1 ) ;
			double_1 = log10 ( double_1 ) ;
			long_1 = long_1;
		}
	}
	short_1 = short_1 * short_1;
}
double aws_iot_mqtt_internal_decode_remaining_length_from_buffer( char parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = floor ( double_1 ) ;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_1;
	double_1 = sqrt ( double_1 ) ;
	double_3 = atan2 ( double_4 , double_2 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		if(1)
		{
			double_2 = fmod ( double_5 , double_4 ) ;
		}
		double_3 = double_1;
		double_4 = exp ( double_1 ) ;
		int_1 = int_1;
		double_2 = double_4 + double_5;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	int_2 = int_1;
	looper_1 += 1;
	double_1 = double_1 * double_2;
	float_1 = float_2;
}
int aws_iot_mqtt_internal_read_char( short parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double_1 = atan2 ( double_1 , double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
unsigned int aws_iot_mqtt_internal_deserialize_publish( short parameter_1,unsigned int parameter_2,short parameter_3,float parameter_4,char parameter_5,double parameter_6,char parameter_7,short parameter_8,long parameter_9,float parameter_10)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	long long_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_2 = 1;
	double double_9 = 1;
	double_1 = ceil ( double_2 ) ;
	double_2 = exp ( double_2 ) ;
	float_1 = aws_iot_mqtt_internal_read_uint16_t(char_1);

	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1;
	double_3 = sinh ( double_1 ) ;
	double_2 = log ( double_2 ) ;
	double_4 = sinh ( double_5 ) ;
	if(1)
	{
		int_1 = aws_iot_mqtt_internal_read_char(short_1);

		double_5 = sqrt ( double_2 ) ;
	}
	if(1)
	{
		double_4 = double_5 * double_3;
	}
	double_3 = fmod ( double_5 , double_4 ) ;
	if(1)
	{
		float_2 = float_2;
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_6 = pow ( double_5 , double_1 ) ;
	double_6 = asin ( double_6 ) ;
	long_1 = _aws_iot_mqtt_read_string_with_len(char_2,long_1,long_2,short_1);

	double_7 = double_2;
	if(1)
	{
		short_1 = short_1;
	}
	double_7 = fabs ( double_6 ) ;
	float_1 = float_1 * float_2;
	if(1)
	{
		double_3 = asin ( double_4 ) ;
	}
	if(1)
	{
		double_7 = tan ( double_8 ) ;
	}
	double_1 = double_5 + double_8;
	double_4 = sqrt ( double_6 ) ;
	double_3 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(char_2,short_2,char_1);

	double_9 = log ( double_6 ) ;
}
unsigned int _aws_iot_mqtt_internal_handle_publish( int parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_5 = 1;
	float float_4 = 1;
	double_1 = double_1 * double_1;
	int_1 = int_1;
	double_1 = log10 ( double_2 ) ;
	int_2 = aws_iot_mqtt_internal_send_packet(int_3,float_1,int_3);

	double_1 = atan2 ( double_1 , double_3 ) ;
	double_4 = floor ( double_1 ) ;
	double_3 = acos ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_3 = tanh ( double_3 ) ;
	long_1 = long_1;
	unsigned_int_1 = aws_iot_mqtt_internal_deserialize_publish(short_1,unsigned_int_2,short_1,float_1,char_1,double_2,char_2,short_2,long_2,float_2);

	long_1 = long_2 * long_3;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		long long_2 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_5 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		int int_4 = 1;
		long long_5 = 1;
		float float_4 = 1;
		long_5 = long_4 * long_1;
	}
	double_4 = sinh ( double_1 ) ;
	if(1)
	{
		double_5 = exp ( double_3 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		long long_2 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_5 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		int int_4 = 1;
		long long_5 = 1;
		float float_4 = 1;
		float_1 = float_3 * float_4;
	}
	int_3 = int_3;
	if(1)
	{
		long_4 = long_3 * long_2;
	}
	char_1 = aws_iot_mqtt_internal_serialize_ack(unsigned_int_3,long_1,double_5,float_1,float_3,short_3);

	int_4 = int_4;
	if(1)
	{
		double_1 = asin ( double_3 ) ;
	}
	_aws_iot_mqtt_internal_deliver_message(char_2,char_2,char_2,float_2);

	double_5 = double_2;
}
short _aws_iot_mqtt_internal_decode_packet_remaining_len( int parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	int_1 = int_2;
	double_1 = asin ( double_2 ) ;
	double_3 = floor ( double_4 ) ;
	double_1 = tanh ( double_5 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_4 = pow ( double_4 , double_6 ) ;
	unsigned_int_2 = _aws_iot_mqtt_internal_readWrapper(unsigned_int_1,float_1,double_2,unsigned_int_1,char_1);

	int_2 = int_3 * int_4;
	do
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		float float_1 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_7 = 1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "9i") == 0)
		{
			double_3 = sinh ( double_4 ) ;
		}
		double_1 = log10 ( double_6 ) ;
		if(1)
		{
			double_1 = double_1 * double_2;
		}
		double_6 = pow ( double_7 , double_7 ) ;
		double_1 = floor ( double_2 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_4 = acos ( double_5 ) ;
	looper_1 += 1;
	double_2 = log ( double_5 ) ;
	double_4 = asin ( double_1 ) ;
}
unsigned int _aws_iot_mqtt_internal_readWrapper( unsigned int parameter_1,float parameter_2,double parameter_3,unsigned int parameter_4,char parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = exp ( double_1 ) ;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_2 = ceil ( double_2 ) ;
		double_3 = cos ( double_4 ) ;
		int_2 = int_1 * int_1;
		short_1 = short_2;
	}
	else
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double_4 = ceil ( double_1 ) ;
		long_1 = long_1 + long_2;
	}
	return unsigned_int_2;
}
void _aws_iot_mqtt_internal_read_packet( float parameter_1,char parameter_2,double parameter_3)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int int_3 = 1;
	double double_8 = 1;
	long long_4 = 1;
	float float_2 = 1;
	int int_4 = 1;
	countdown_ms(long_1,short_1);

	double_1 = sinh ( double_1 ) ;
	int_1 = int_1;
	double_1 = double_2;
	double_3 = double_3;
	short_2 = _aws_iot_mqtt_internal_decode_packet_remaining_len(int_2,long_2,unsigned_int_1,char_1);

	double_3 = tan ( double_4 ) ;
	unsigned_int_2 = _aws_iot_mqtt_internal_readWrapper(unsigned_int_3,float_1,double_5,unsigned_int_1,char_2);

	double_4 = cos ( double_4 ) ;
	double_6 = cos ( double_7 ) ;
	double_2 = fabs ( double_5 ) ;
	double_7 = sinh ( double_4 ) ;
	long_1 = long_1;
	double_6 = ldexp ( double_1 , int_1 ) ;
	unsigned_int_4 = aws_iot_mqtt_internal_flushBuffers(long_3);

	int_3 = int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_5 = atan2 ( double_4 , double_5 ) ;
	if(1)
	{
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "?S") < 0)
	{
		double_7 = cosh ( double_6 ) ;
		do
		{
			init_timer(unsigned_int_4);

			double_2 = ceil ( double_5 ) ;
			if(1)
			{
				double_6 = tan ( double_8 ) ;
				if(1)
				{
					double_5 = double_6 * double_5;
				}
				else
				{
					double_5 = log10 ( double_5 ) ;
				}
			}
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		unsigned_int_3 = unsigned_int_4;
		looper_1 += 1;
		if(1)
		{
			double_4 = double_4 * double_7;
		}
		else
		{
		}
	}
	if(1)
	{
		long long_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		int int_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		double double_5 = 1;
		char char_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		int int_3 = 1;
		double double_8 = 1;
		long long_4 = 1;
		float float_2 = 1;
		int int_4 = 1;
		int_4 = int_3;
		if(1)
		{
		}
	}
	long_4 = long_1 * long_3;
	double_1 = double_8 * double_8;
	float_1 = float_2;
	double_8 = log ( double_3 ) ;
}
float aws_iot_mqtt_internal_cycle_read( short parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = cosh ( double_1 ) ;
	double_1 = tanh ( double_2 ) ;
	if(1)
	{
		return float_1;
	}
	double_2 = log ( double_2 ) ;
	if(1)
	{
		double_1 = atan ( double_2 ) ;
	}
	double_3 = floor ( double_1 ) ;
	unsigned_int_1 = _aws_iot_mqtt_internal_handle_publish(int_1,long_1);

	long_3 = long_1 * long_2;
	if(1)
	{
		return float_1;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "pr") > 0)
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
		float float_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_2 = 1;
		char char_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		_aws_iot_mqtt_internal_read_packet(float_2,char_1,double_4);

		countdown_sec(int_2,double_2);

		double_4 = cosh ( double_3 ) ;
		double_1 = exp ( double_1 ) ;
		double_1 = floor ( double_3 ) ;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	return float_2;
}
void aws_iot_mqtt_internal_wait_for_read( int parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = cos ( double_1 ) ;
	int_3 = int_1 + int_2;
	int_1 = int_3;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_4 = has_timer_expired(float_1);

		long_2 = long_1 * long_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	do
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			double_1 = floor ( double_1 ) ;
		}
		unsigned_int_2 = unsigned_int_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_2 = pow ( double_3 , double_1 ) ;
	looper_1 += 1;
	float_2 = aws_iot_mqtt_internal_cycle_read(short_1,unsigned_int_1,int_5);

	double_1 = double_4 * double_5;
}
int has_timer_expired( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_1 = log10 ( double_2 ) ;
	double_3 = tanh ( double_1 ) ;
	short_1 = short_1 + short_2;
	return int_1;
}
int aws_iot_mqtt_internal_send_packet( int parameter_1,float parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	double double_4 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char_3 = char_1 + char_2;
	double_1 = fmod ( double_1 , double_1 ) ;
	double_1 = cos ( double_1 ) ;
	if(1)
	{
		double_1 = fabs ( double_2 ) ;
	}
	if(1)
	{
		double_2 = double_2 + double_3;
	}
	double_2 = sqrt ( double_1 ) ;
	if(1)
	{
		int_1 = has_timer_expired(float_1);

		double_2 = double_1 * double_1;
	}
	double_2 = log ( double_1 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		looper_1 += 1;
		double_4 = tanh ( double_3 ) ;
		if(1)
		{
		}
		int_2 = int_2;
	}
	double_2 = tanh ( double_5 ) ;
	if(1)
	{
		double_5 = cos ( double_5 ) ;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_1;
	}
}
void aws_iot_mqtt_internal_write_uint_16( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = sqrt ( double_1 ) ;
	char_1 = char_2;
	double_1 = sinh ( double_2 ) ;
	double_1 = double_3;
}
void aws_iot_mqtt_internal_write_utf8_string( long parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = floor ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		aws_iot_mqtt_internal_write_uint_16(float_1,float_1);

		double_3 = cos ( double_1 ) ;
		unsigned_int_1 = unsigned_int_1;
	}
}
int aws_iot_mqtt_internal_write_len_to_buffer( unsigned int parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 233)
	{
		vul_var = vul_var + 1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = tan ( double_2 ) ;
	double_2 = tan ( double_3 ) ;
	do
	{
		free(vul_var);
		unsigned_int_1 = unsigned_int_1;
		double_3 = floor ( double_2 ) ;
		if(1)
		{
			double_2 = tan ( double_2 ) ;
		}
		double_1 = acos ( double_1 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	char_1 = char_2;
	looper_1 += 1;
	long_1 = long_1;
}
void aws_iot_mqtt_internal_write_char( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = acos ( double_1 ) ;
	float_2 = float_1 + float_2;
}
unsigned int aws_iot_mqtt_internal_init_header( char parameter_1,long parameter_2,short parameter_3,int parameter_4,char parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = sqrt ( double_1 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_2 = fabs ( double_3 ) ;
	double_1 = double_3;
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		return unsigned_int_1;
		double_5 = double_4 * double_3;
		double_1 = fmod ( double_1 , double_5 ) ;
		double_4 = tanh ( double_2 ) ;
		int_2 = int_1 * int_1;
		double_1 = acos ( double_1 ) ;
		short_1 = short_2;
		double_1 = tanh ( double_5 ) ;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		double_1 = acos ( double_6 ) ;
		double_6 = atan2 ( double_4 , double_5 ) ;
		double_4 = cosh ( double_7 ) ;
		int_3 = int_2 + int_2;
		float_2 = float_1 * float_1;
		long_1 = long_2;
	}
	double_5 = ldexp ( double_1 , int_3 ) ;
	double_6 = cosh ( double_5 ) ;
	{
		double_1 = pow ( double_4 , double_6 ) ;
	}
	double_5 = acos ( double_6 ) ;
	double_3 = atan2 ( double_2 , double_1 ) ;
}
int aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = atan2 ( double_1 , double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_1 = ceil ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	return int_1;
}
void _aws_iot_get_connect_packet_length( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short_1 = short_2;
	double_1 = floor ( double_1 ) ;
	double_1 = ldexp ( double_2 , int_1 ) ;
	long_2 = long_1 + long_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_1 = acos ( double_3 ) ;
	}
	if(1)
	{
		double_2 = cos ( double_2 ) ;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_4 = cos ( double_1 ) ;
	}
	double_5 = floor ( double_1 ) ;
}
float _aws_iot_mqtt_serialize_connect( int parameter_1,double parameter_2,double parameter_3,unsigned int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_8 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short_1 = short_1 + short_2;
	double_1 = sqrt ( double_2 ) ;
	double_1 = asin ( double_2 ) ;
	double_1 = tanh ( double_1 ) ;
	int_1 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(double_3);

	int_1 = int_1;
	double_4 = tanh ( double_5 ) ;
	if(1)
	{
		double_1 = sqrt ( double_1 ) ;
	}
	{
		return float_1;
	}
	double_5 = ceil ( double_1 ) ;
	double_1 = exp ( double_2 ) ;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	_aws_iot_get_connect_packet_length(long_1);

	int_2 = int_1 + int_1;
	if(1)
	{
		double_4 = log ( double_1 ) ;
	}
	short_2 = short_1 + short_1;
	double_5 = pow ( double_1 , double_6 ) ;
	double_7 = double_2 * double_1;
	float_1 = float_1 + float_1;
	double_6 = atan ( double_2 ) ;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = aws_iot_mqtt_internal_init_header(char_1,long_1,short_2,int_2,char_2);

		double_7 = double_5;
		double_4 = double_6 + double_2;
		double_2 = ceil ( double_2 ) ;
	}
	if(1)
	{
		aws_iot_mqtt_internal_write_char(long_1,char_2);

		aws_iot_mqtt_internal_write_utf8_string(long_1,unsigned_int_2,unsigned_int_3);

		double_1 = sinh ( double_2 ) ;
	}
	if(1)
	{
		double_8 = tanh ( double_8 ) ;
	}
	double_3 = ldexp ( double_2 , int_2 ) ;
	double_4 = acos ( double_6 ) ;
	if(1)
	{
		double_1 = atan2 ( double_4 , double_3 ) ;
	}
	else
	{
		char_2 = char_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_8 = 1;
		float float_2 = 1;
		short short_3 = 1;
		char char_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double_1 = cosh ( double_5 ) ;
		char_3 = char_4;
	}
	if(1)
	{
		double_4 = tanh ( double_8 ) ;
	}
	if(1)
	{
		double_8 = double_6;
	}
	aws_iot_mqtt_internal_write_uint_16(float_2,float_2);

	short_2 = short_3;
	unsigned_int_2 = unsigned_int_1;
	int_2 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_2,char_5,76);

}
void countdown_ms( long parameter_1,short parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long_1 = long_1 * long_1;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "hlQdz") == 0)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_1 = ldexp ( double_2 , int_1 ) ;
	}
	if(1)
	{
		double_1 = floor ( double_1 ) ;
		int_1 = int_1;
		double_2 = double_1 + double_1;
	}
	else
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double_3 = atan2 ( double_2 , double_3 ) ;
	}
}
void init_timer( unsigned int parameter_1)
{
	float float_1 = 1;
	float_1 = float_1;
}
float aws_iot_mqtt_set_connect_params( double parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double_1 = atan ( double_2 ) ;
	if(1)
	{
		double_3 = fabs ( double_2 ) ;
	}
	double_1 = floor ( double_1 ) ;
	short_1 = short_1;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_2 = 1;
			double double_6 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short short_2 = 1;
			int int_1 = 1;
			int_1 = int_1;
		}
		double_4 = sinh ( double_1 ) ;
	}
	double_4 = double_1 * double_1;
	else
	{
		double_1 = log ( double_5 ) ;
	}
	float_2 = float_1;
	double_5 = double_6;
	int_2 = int_3;
	double_5 = cos ( double_1 ) ;
	double_5 = sinh ( double_6 ) ;
	double_5 = double_4;
	double_6 = atan2 ( double_2 , double_6 ) ;
	short_2 = short_2;
	double_5 = log ( double_3 ) ;
	double_6 = asin ( double_6 ) ;
	double_6 = asin ( double_4 ) ;
	float_2 = float_2;
}
double _aws_iot_mqtt_internal_connect( unsigned int parameter_1,float parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	float float_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	float float_6 = 1;
	int int_4 = 1;
	double double_7 = 1;
	float float_7 = 1;
	countdown_sec(int_1,double_1);

	double_1 = sinh ( double_1 ) ;
	float_1 = float_2;
	double_2 = sqrt ( double_2 ) ;
	int_1 = int_1 + int_2;
	double_1 = cosh ( double_2 ) ;
	double_2 = log10 ( double_3 ) ;
	if(1)
	{
		double_3 = _aws_iot_mqtt_deserialize_connack(short_1,char_1,double_3,long_1);

		double_3 = atan ( double_3 ) ;
		if(1)
		{
			long_1 = long_2;
		}
	}
	double_2 = double_2 * double_2;
	if(1)
	{
		char_1 = char_1 * char_1;
	}
	float_2 = float_2;
	double_1 = floor ( double_2 ) ;
	double_4 = tanh ( double_4 ) ;
	init_timer(unsigned_int_1);

	long_2 = long_1;
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	float_3 = float_4;
	if(1)
	{
		countdown_ms(long_2,short_1);

		char_1 = char_2 * char_1;
	}
	double_1 = floor ( double_4 ) ;
	if(1)
	{
		double_1 = double_2 * double_1;
	}
	aws_iot_mqtt_internal_wait_for_read(int_1,double_5,float_5);

	double_5 = log10 ( double_1 ) ;
	if(1)
	{
		double_2 = floor ( double_4 ) ;
	}
	if(1)
	{
		double_5 = atan2 ( double_2 , double_5 ) ;
	}
	int_1 = aws_iot_mqtt_internal_send_packet(int_1,float_1,int_3);

	double_3 = atan ( double_6 ) ;
	float_6 = _aws_iot_mqtt_serialize_connect(int_4,double_3,double_7,unsigned_int_1);

	double_3 = pow ( double_4 , double_5 ) ;
	float_7 = aws_iot_mqtt_set_connect_params(double_6,char_2);

	float_7 = float_2;
}
void aws_iot_mqtt_set_client_state( short parameter_1,double parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	aws_iot_mqtt_get_client_state();

	double_1 = exp ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_2 = int_1;
	}
	short_1 = short_2;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_2 = sinh ( double_1 ) ;
		char_1 = char_1 * char_2;
	}
	else
	{
		double_2 = double_2 * double_3;
	}
	double_3 = cosh ( double_4 ) ;
	char controller_4[5];
	fgets(controller_4 ,5 ,stdin);
	if( strcmp( controller_4, "Z#S-") == 0)
	{
		double_3 = exp ( double_4 ) ;
	}
	double_5 = ldexp ( double_3 , int_2 ) ;
}
char _aws_iot_mqtt_is_client_state_valid_for_connect( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = acos ( double_2 ) ;
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		long_3 = long_1 + long_2;
		int_1 = int_2;
		double_2 = double_1;
	}
	return char_1;
}
void aws_iot_mqtt_get_client_state()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = sinh ( double_2 ) ;
	if(1)
	{
	}
	double_1 = asin ( double_2 ) ;
}
unsigned int aws_iot_mqtt_internal_flushBuffers( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = tanh ( double_1 ) ;
	return unsigned_int_1;
}
long aws_iot_mqtt_connect( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = double_1;
	double_1 = ceil ( double_2 ) ;
	double_3 = floor ( double_2 ) ;
	if(1)
	{
		char_1 = _aws_iot_mqtt_is_client_state_valid_for_connect(long_1);

		double_4 = _aws_iot_mqtt_internal_connect(unsigned_int_1,float_1);

		double_3 = fabs ( double_3 ) ;
	}
	double_3 = floor ( double_4 ) ;
	float_1 = float_1 * float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_1 = ldexp ( double_1 , int_1 ) ;
	}
	short_1 = short_1 + short_2;
	aws_iot_mqtt_get_client_state();

	short_3 = short_3 + short_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		aws_iot_mqtt_set_client_state(short_3,double_5,float_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		double_3 = log10 ( double_2 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			long long_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			int int_1 = 1;
			double double_6 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float_2 = float_2 + float_3;
		}
		double_6 = pow ( double_6 , double_3 ) ;
	}
	else
	{
		double_5 = double_5 * double_1;
	}
	long_1 = long_1;
	unsigned_int_2 = aws_iot_mqtt_internal_flushBuffers(long_2);

}
short aws_iot_mqtt_is_client_connected( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = sinh ( double_2 ) ;
	double_1 = log10 ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		float_2 = float_1 * float_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double_2 = pow ( double_1 , double_1 ) ;
		double_3 = log ( double_3 ) ;
		double_1 = double_3 * double_4;
	}
	double_2 = tanh ( double_4 ) ;
}
double aws_iot_mqtt_attempt_reconnect( int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_2 = 1;
	double_1 = log10 ( double_1 ) ;
	short_1 = aws_iot_mqtt_is_client_connected(unsigned_int_1);

	aws_iot_mqtt_get_client_state();

	double_1 = acos ( double_2 ) ;
	if(1)
	{
		long_1 = aws_iot_mqtt_connect(unsigned_int_1,int_1);

		double_1 = ceil ( double_2 ) ;
	}
	if(1)
	{
		double_3 = acos ( double_4 ) ;
	}
	aws_iot_mqtt_set_client_state(short_2,double_4,float_1);

	long_2 = long_1;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		float float_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int int_2 = 1;
		double_5 = aws_iot_mqtt_resubscribe(short_1);

		int_2 = int_2;
		float_1 = float_1 + float_1;
	}
	short_3 = short_4;
	if(1)
	{
		double_3 = ldexp ( double_4 , int_1 ) ;
	}
	short_5 = short_1;
}
void aws_iot_is_autoreconnect_enabled( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = sqrt ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = tan ( double_1 ) ;
		int_2 = int_1 * int_1;
	}
	double_2 = atan2 ( double_3 , double_3 ) ;
}
int disconnectCallbackHandler( short parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double_1 = sinh ( double_1 ) ;
	int_1 = int_2;
	if(1)
	{
		return int_2;
	}
	double_1 = fabs ( double_2 ) ;
	if(1)
	{
		double_2 = asin ( double_3 ) ;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double_3 = double_3 * double_4;
		float_1 = float_2;
		if(1)
		{
			double_4 = aws_iot_mqtt_attempt_reconnect(int_3);

			float_1 = float_2;
		}
		else
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			aws_iot_is_autoreconnect_enabled(int_2);

			double_2 = ceil ( double_5 ) ;
		}
	}
}
void parseInputArgsForConnectParams( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = floor ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_6 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double_2 = floor ( double_3 ) ;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_1 = tanh ( double_4 ) ;
			double_4 = asin ( double_2 ) ;
			double_4 = floor ( double_3 ) ;
			double_5 = double_4;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
			double_6 = exp ( double_4 ) ;
			if(1)
			{
				double_6 = tanh ( double_3 ) ;
			}
			if(1)
			{
				double_2 = tanh ( double_1 ) ;
			}
			else
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_6 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int_1 = int_2;
			}
			double_6 = tanh ( double_6 ) ;
		}
	}
}
int main(int argc, char **argv)
{
	int uni_para =233;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_9 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_11 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_16 = 1;
	int int_6 = 1;
	double double_10 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_13 = 1;
	double double_14 = 1;
	double double_15 = 1;
	double double_17 = 1;
	double_1 = acos ( double_2 ) ;
	float_1 = float_1 * float_1;
	double_3 = double_2 * double_3;
	int_1 = int_2;
	double_2 = cos ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_4 = double_3;
	long_2 = long_1 * long_2;
	double_3 = log ( double_3 ) ;
	double_1 = tan ( double_4 ) ;
	double_4 = fabs ( double_4 ) ;
	char_2 = char_1 * char_2;
	int_2 = int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_4 = fmod ( double_5 , double_5 ) ;
	unsigned_int_3 = unsigned_int_1;
	double_5 = fmod ( double_1 , double_3 ) ;
	int_3 = int_2;
	double_5 = sinh ( double_4 ) ;
	double_3 = double_1;
	unsigned_int_2 = unsigned_int_3;
	double_5 = double_2;
	int_1 = int_4;
	double_6 = fabs ( double_5 ) ;
	char_2 = char_1 * char_2;
	double_7 = fabs ( double_5 ) ;
	char_3 = char_1;
	double_8 = double_3 + double_8;
	unsigned_int_4 = unsigned_int_4;
	double_3 = log10 ( double_3 ) ;
	char_1 = char_2;
	double_8 = atan ( double_6 ) ;
	float_2 = float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_4;
	char controller4vul_74[2];
	fgets(controller4vul_74 ,3 ,stdin);
	if( strcmp( controller4vul_74, "<c") == 0)
	{
		int_3 = aws_iot_mqtt_yield(long_2,unsigned_int_3,uni_para);

		double_4 = ldexp ( double_2 , int_1 ) ;
		return int_4;
	}
	double_8 = fmod ( double_6 , double_7 ) ;
	double_7 = tan ( double_4 ) ;
	double_1 = exp ( double_7 ) ;
	double_7 = floor ( double_7 ) ;
	double_9 = tan ( double_2 ) ;
	double_5 = cos ( double_1 ) ;
	double_8 = ceil ( double_4 ) ;
	int_3 = int_1 + int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_3 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_9 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_11 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_16 = 1;
		int int_6 = 1;
		double double_10 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		double_8 = pow ( double_10 , double_8 ) ;
		return int_3;
	}
	double_5 = double_6;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_3 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_9 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_11 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_16 = 1;
		int int_6 = 1;
		double double_10 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		float_5 = float_3 + float_4;
		return int_5;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	if(1)
	{
		double_5 = asin ( double_1 ) ;
		return int_1;
	}
	double_3 = log ( double_11 ) ;
	double_11 = tan ( double_12 ) ;
	double_9 = fabs ( double_3 ) ;
	double_11 = log ( double_12 ) ;
	unsigned_int_7 = unsigned_int_2;
	long_2 = long_2;
	int_3 = int_3 * int_2;
	if(1)
	{
		double_2 = atan ( double_5 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_3 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_9 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_11 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_16 = 1;
		int int_6 = 1;
		double double_10 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		looper_1 += 1;
		double_11 = fabs ( double_1 ) ;
		if(1)
		{
		}
		double_7 = acos ( double_8 ) ;
		double_4 = double_11;
		double_8 = atan ( double_5 ) ;
		int_4 = int_3 + int_1;
		double_4 = double_6 + double_13;
		if(1)
		{
			double_3 = log10 ( double_12 ) ;
		}
		if(1)
		{
		}
		double_1 = ceil ( double_7 ) ;
		double_13 = acos ( double_9 ) ;
		double_11 = pow ( double_11 , double_4 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_3 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			double double_9 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_11 = 1;
			double double_12 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_16 = 1;
			int int_6 = 1;
			double double_10 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_13 = 1;
			double double_14 = 1;
			double double_15 = 1;
			double double_17 = 1;
			double_5 = pow ( double_14 , double_5 ) ;
			double_15 = double_5;
		}
		if(1)
		{
			double_14 = double_16 + double_16;
		}
	}
	long_1 = long_2;
	if(1)
	{
		double_2 = double_16;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_3 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_9 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_11 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_16 = 1;
		int int_6 = 1;
		double double_10 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		double_17 = cos ( double_8 ) ;
	}
	return int_6;
}
