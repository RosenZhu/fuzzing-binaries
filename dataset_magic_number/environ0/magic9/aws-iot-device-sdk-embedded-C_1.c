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

long _aws_iot_mqtt_internal_serialize_publish( int parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4,short parameter_5,long parameter_6,long parameter_7,long parameter_8,double parameter_9,double parameter_10,double parameter_11);
char _aws_iot_mqtt_internal_publish( long parameter_1,char parameter_2,unsigned int parameter_3,char parameter_4);
void aws_iot_mqtt_publish( char parameter_1,double parameter_2,long parameter_3,short parameter_4);
long aws_iot_mqtt_tests_publish_thread_runner();
char aws_iot_mqtt_internal_deserialize_ack( float parameter_1,double parameter_2,short parameter_3,char parameter_4,float parameter_5);
float _aws_iot_mqtt_deserialize_unsuback( unsigned int parameter_1,short parameter_2,char parameter_3);
float _aws_iot_mqtt_serialize_unsubscribe( float parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,short parameter_5,short parameter_6,char parameter_7,double parameter_8);
double _aws_iot_mqtt_internal_unsubscribe( short parameter_1,float parameter_2,float parameter_3,int uni_para);
double aws_iot_mqtt_unsubscribe( long parameter_1,char parameter_2,double parameter_3,int uni_para);
short aws_iot_mqtt_tests_sub_unsub_thread_runner(int uni_para);
char aws_iot_mqtt_tests_yield_thread_runner();
unsigned int _aws_iot_mqtt_force_client_disconnect( double parameter_1);
unsigned int aws_iot_mqtt_internal_serialize_zero( float parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4);
char _aws_iot_mqtt_internal_disconnect( double parameter_1);
short aws_iot_mqtt_disconnect( short parameter_1);
int _aws_iot_mqtt_handle_disconnect( float parameter_1);
long _aws_iot_mqtt_keep_alive( float parameter_1);
unsigned int _aws_iot_mqtt_internal_resubscribe( unsigned int parameter_1);
unsigned int aws_iot_mqtt_resubscribe( int parameter_1);
short aws_iot_mqtt_attempt_reconnect( long parameter_1);
short _aws_iot_mqtt_handle_reconnect( long parameter_1);
long _aws_iot_mqtt_internal_yield( char parameter_1,short parameter_2);
long aws_iot_mqtt_yield( int parameter_1,int parameter_2);
unsigned int aws_iot_mqtt_tests_message_aggregator( char parameter_1,char parameter_2,double parameter_3,float parameter_4);
int _aws_iot_mqtt_deserialize_suback( int parameter_1,double parameter_2,int parameter_3,double parameter_4,int parameter_5,double parameter_6);
void _aws_iot_mqtt_get_free_message_handler_index();
long _aws_iot_mqtt_serialize_subscribe( unsigned int parameter_1,short parameter_2,char parameter_3,int parameter_4,short parameter_5,char parameter_6,char parameter_7,int parameter_8,double parameter_9);
unsigned int aws_iot_mqtt_get_next_packet_id( double parameter_1);
double _aws_iot_mqtt_internal_subscribe( short parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4,long parameter_5);
int aws_iot_mqtt_is_client_connected( float parameter_1);
char aws_iot_mqtt_subscribe( unsigned int parameter_1,long parameter_2,double parameter_3,long parameter_4,double parameter_5);
char aws_iot_mqtt_tests_subscribe_to_test_topic( short parameter_1,int parameter_2,unsigned int parameter_3);
unsigned int _aws_iot_mqtt_deserialize_connack( float parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4);
void countdown_sec( short parameter_1,short parameter_2);
short aws_iot_mqtt_internal_serialize_ack( long parameter_1,char parameter_2,long parameter_3,int parameter_4,char parameter_5,long parameter_6);
unsigned int _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,short parameter_3);
short _aws_iot_mqtt_internal_deliver_message( char parameter_1,char parameter_2,long parameter_3,short parameter_4);
int aws_iot_mqtt_internal_read_uint16_t( char parameter_1);
unsigned int _aws_iot_mqtt_read_string_with_len( char parameter_1,float parameter_2,float parameter_3,short parameter_4,int uni_para);
int aws_iot_mqtt_internal_decode_remaining_length_from_buffer( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void aws_iot_mqtt_internal_read_char( short parameter_1);
short aws_iot_mqtt_internal_deserialize_publish( long parameter_1,int parameter_2,long parameter_3,long parameter_4,char parameter_5,unsigned int parameter_6,unsigned int parameter_7,long parameter_8,short parameter_9,unsigned int parameter_10,int uni_para);
unsigned int _aws_iot_mqtt_internal_handle_publish( unsigned int parameter_1,char parameter_2,int uni_para);
long _aws_iot_mqtt_internal_decode_packet_remaining_len( char parameter_1,char parameter_2,double parameter_3,short parameter_4);
long _aws_iot_mqtt_internal_readWrapper( float parameter_1,float parameter_2,long parameter_3,char parameter_4,float parameter_5);
void _aws_iot_mqtt_internal_read_packet( int parameter_1,long parameter_2,double parameter_3);
short aws_iot_mqtt_internal_cycle_read( char parameter_1,short parameter_2,float parameter_3,int uni_para);
float aws_iot_mqtt_internal_wait_for_read( char parameter_1,char parameter_2,float parameter_3,int uni_para);
double aws_iot_mqtt_internal_send_packet( char parameter_1,int parameter_2,long parameter_3);
void aws_iot_mqtt_internal_write_uint_16( long parameter_1,char parameter_2);
void aws_iot_mqtt_internal_write_utf8_string( char parameter_1,char parameter_2,unsigned int parameter_3);
float aws_iot_mqtt_internal_write_len_to_buffer( int parameter_1,double parameter_2);
void aws_iot_mqtt_internal_write_char( long parameter_1,int parameter_2);
void aws_iot_mqtt_internal_init_header( char parameter_1,long parameter_2,float parameter_3,long parameter_4,int parameter_5);
int aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( short parameter_1);
long _aws_iot_get_connect_packet_length( float parameter_1);
int _aws_iot_mqtt_serialize_connect( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4);
void countdown_ms( int parameter_1,double parameter_2);
unsigned int _aws_iot_mqtt_internal_connect( int parameter_1,int parameter_2);
long aws_iot_mqtt_set_client_state( unsigned int parameter_1,long parameter_2,int parameter_3);
int _aws_iot_mqtt_is_client_state_valid_for_connect( double parameter_1);
char aws_iot_mqtt_get_client_state( long parameter_1);
unsigned int aws_iot_mqtt_internal_flushBuffers();
double aws_iot_mqtt_connect( short parameter_1,long parameter_2);
void init_timer();
float iot_tls_destroy();
short iot_tls_is_connected( unsigned int parameter_1);
float iot_tls_disconnect( char parameter_1);
int iot_tls_mqtt_get_fixed_uint16_from_message( short parameter_1,short parameter_2);
double iot_tls_mqtt_copy_string_from_message( char parameter_1,int parameter_2,int parameter_3);
double iot_tls_mqtt_get_end_of_variable_length_int( float parameter_1,char parameter_2);
short iot_tls_mqtt_read_variable_length_int( double parameter_1,char parameter_2);
char iot_tls_write( long parameter_1,char parameter_2,float parameter_3,char parameter_4,short parameter_5);
short isTimerExpired( float parameter_1);
long has_timer_expired( float parameter_1);
long iot_tls_read( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,unsigned int parameter_5);
char _iot_tls_verify_cert(int parameter_2,int parameter_3,char parameter_4);
short iot_tls_connect( double parameter_1,double parameter_2);
void _iot_tls_set_connect_params( int parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,int parameter_6,float parameter_7,char parameter_8);
short iot_tls_init( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,double parameter_6,unsigned int parameter_7,float parameter_8);
int aws_iot_mqtt_set_connect_params( char parameter_1,float parameter_2);
short aws_iot_mqtt_init( unsigned int parameter_1,long parameter_2);
char aws_iot_mqtt_tests_disconnect_callback_handler( short parameter_1);
int aws_iot_mqtt_tests_multi_threading_validation(int uni_para);
long _aws_iot_mqtt_internal_serialize_publish( int parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4,short parameter_5,long parameter_6,long parameter_7,long parameter_8,double parameter_9,double parameter_10,double parameter_11)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_7 = 1;
	double_1 = tanh ( double_2 ) ;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_3 = double_2;
	double_4 = ldexp ( double_1 , int_2 ) ;
	aws_iot_mqtt_internal_write_uint_16(long_1,char_1);

	double_5 = cosh ( double_3 ) ;
	if(1)
	{
		double_4 = log ( double_5 ) ;
	}
	double_4 = asin ( double_1 ) ;
	aws_iot_mqtt_internal_write_char(long_1,int_3);

	double_6 = ceil ( double_3 ) ;
	aws_iot_mqtt_internal_write_utf8_string(char_2,char_2,unsigned_int_1);

	double_1 = tanh ( double_2 ) ;
	if(1)
	{
		double_2 = sinh ( double_3 ) ;
	}
	char controller_3[4];
	fgets(controller_3 ,4 ,stdin);
	if( strcmp( controller_3, "p}R") < 0)
	{
		long_2 = long_2 + long_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	double_5 = ceil ( double_2 ) ;
	aws_iot_mqtt_internal_init_header(char_3,long_2,float_1,long_2,int_3);

	long_2 = long_1 + long_1;
	double_2 = fabs ( double_4 ) ;
	int_4 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_1);

	int_1 = int_1 * int_1;
	if(1)
	{
		double_7 = atan ( double_5 ) ;
	}
	double_6 = double_2;
	float_1 = aws_iot_mqtt_internal_write_len_to_buffer(int_4,double_1);

	int_2 = int_4 * int_2;
	double_3 = acos ( double_4 ) ;
	double_4 = ceil ( double_7 ) ;
}
char _aws_iot_mqtt_internal_publish( long parameter_1,char parameter_2,unsigned int parameter_3,char parameter_4)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_5 = 1;
	short short_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_3 = 1;
	int_1 = int_1;
	countdown_ms(int_1,double_1);

	double_1 = exp ( double_1 ) ;
	long_1 = long_1;
	double_2 = fabs ( double_1 ) ;
	float_1 = aws_iot_mqtt_internal_wait_for_read(char_1,char_1,float_2,658);

	char_2 = char_2;
	init_timer();

	double_1 = atan ( double_1 ) ;
	double_3 = tanh ( double_2 ) ;
	double_3 = fabs ( double_4 ) ;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_5 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		char char_3 = 1;
		long_1 = _aws_iot_mqtt_internal_serialize_publish(int_1,int_1,long_2,unsigned_int_1,short_1,long_1,long_1,long_1,double_5,double_1,double_4);

		int_2 = int_2;
	}
	short_2 = short_1;
	if(1)
	{
		char_1 = aws_iot_mqtt_internal_deserialize_ack(float_1,double_6,short_1,char_2,float_1);

		long_1 = long_1 + long_1;
	}
	double_5 = acos ( double_2 ) ;
	if(1)
	{
		double_7 = aws_iot_mqtt_internal_send_packet(char_1,int_3,long_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_5 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		char char_3 = 1;
		char_1 = char_3 * char_2;
		if(1)
		{
			double_4 = log10 ( double_5 ) ;
		}
		int_3 = int_1;
		if(1)
		{
			unsigned_int_3 = aws_iot_mqtt_get_next_packet_id(double_5);

			double_6 = log10 ( double_6 ) ;
		}
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
}
void aws_iot_mqtt_publish( char parameter_1,double parameter_2,long parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	float float_1 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = atan ( double_2 ) ;
	double_3 = sqrt ( double_4 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		char_1 = _aws_iot_mqtt_internal_publish(long_1,char_2,unsigned_int_1,char_2);

		double_3 = pow ( double_1 , double_4 ) ;
	}
	if(1)
	{
		char_3 = aws_iot_mqtt_get_client_state(long_2);

		long_1 = aws_iot_mqtt_set_client_state(unsigned_int_2,long_2,int_1);

		double_1 = tan ( double_2 ) ;
	}
	double_5 = floor ( double_5 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		float float_1 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_4 = fmod ( double_6 , double_4 ) ;
	}
	int_2 = int_2 * int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		float float_1 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_5 = int_3 + int_4;
	}
	double_7 = ceil ( double_3 ) ;
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		long_1 = long_2;
	}
	double_4 = ldexp ( double_4 , int_6 ) ;
	int_1 = aws_iot_mqtt_is_client_connected(float_1);

}
long aws_iot_mqtt_tests_publish_thread_runner()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_7 = 1;
	short short_1 = 1;
	double double_8 = 1;
	int int_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	double double_6 = 1;
	double_1 = pow ( double_1 , double_1 ) ;
	double_1 = exp ( double_1 ) ;
	double_1 = acos ( double_2 ) ;
	long_1 = long_2;
	double_1 = double_2 * double_1;
	int_1 = int_1 * int_2;
	double_1 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		double double_7 = 1;
		short short_1 = 1;
		double double_8 = 1;
		int int_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		short short_2 = 1;
		double double_6 = 1;
		int_1 = int_3 + int_1;
		char_1 = aws_iot_mqtt_get_client_state(long_1);

		double_3 = exp ( double_4 ) ;
		float_1 = float_2;
		char_1 = char_2;
		double_1 = ceil ( double_2 ) ;
		double_3 = ceil ( double_2 ) ;
		do
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			double double_7 = 1;
			short short_1 = 1;
			double double_8 = 1;
			int int_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_3 = 1;
			short short_2 = 1;
			double double_6 = 1;
			int_5 = int_1 + int_4;
			double_2 = asin ( double_5 ) ;
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		double_4 = atan2 ( double_5 , double_3 ) ;
		looper_2 += 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			double double_7 = 1;
			short short_1 = 1;
			double double_8 = 1;
			int int_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_3 = 1;
			short short_2 = 1;
			double double_6 = 1;
			unsigned_int_1 = unsigned_int_1;
			do
			{
				double double_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				char char_1 = 1;
				double double_7 = 1;
				short short_1 = 1;
				double double_8 = 1;
				int int_3 = 1;
				double double_4 = 1;
				float float_1 = 1;
				float float_2 = 1;
				char char_2 = 1;
				double double_5 = 1;
				int int_4 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_3 = 1;
				short short_2 = 1;
				double double_6 = 1;
				double_6 = asin ( double_4 ) ;
				double_1 = atan ( double_7 ) ;
			}
			int looper_3 = 0;
			while(looper_3 < 1)
			aws_iot_mqtt_publish(char_1,double_2,long_1,short_1);

			char_2 = char_3 + char_1;
			looper_3 += 1;
			short_2 = short_1 + short_1;
			if(1)
			{
				double_4 = fmod ( double_1 , double_4 ) ;
			}
		}
	}
	double_8 = double_3 * double_7;
	return long_2;
}
char aws_iot_mqtt_internal_deserialize_ack( float parameter_1,double parameter_2,short parameter_3,char parameter_4,float parameter_5)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = acos ( double_1 ) ;
	long_1 = long_1;
	short_1 = short_1 * short_2;
	int_1 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(unsigned_int_1,unsigned_int_2,unsigned_int_1);

	double_1 = tan ( double_2 ) ;
	double_3 = acos ( double_2 ) ;
	double_4 = pow ( double_4 , double_3 ) ;
	double_4 = pow ( double_2 , double_1 ) ;
	if(1)
	{
		double_5 = fmod ( double_2 , double_1 ) ;
	}
	if(1)
	{
		double_4 = sinh ( double_5 ) ;
	}
	long_2 = long_1;
	char_1 = char_2;
	double_2 = double_4 * double_4;
	unsigned_int_1 = unsigned_int_2;
	char controller_3[6];
	fgets(controller_3 ,6 ,stdin);
	if( strcmp( controller_3, "~^6vU") < 0)
	{
		double double_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_6 = 1;
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	aws_iot_mqtt_internal_read_char(short_2);

	int_2 = int_3;
	int_1 = int_3;
	if(1)
	{
		int_3 = aws_iot_mqtt_internal_read_uint16_t(char_1);

		double_5 = tan ( double_1 ) ;
	}
	double_4 = cosh ( double_3 ) ;
	double_6 = ldexp ( double_2 , int_4 ) ;
}
float _aws_iot_mqtt_deserialize_unsuback( unsigned int parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	double_1 = fmod ( double_2 , double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_2 = ceil ( double_1 ) ;
	double_3 = exp ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	char_1 = aws_iot_mqtt_internal_deserialize_ack(float_1,double_2,short_1,char_1,float_2);

	double_2 = ceil ( double_2 ) ;
}
float _aws_iot_mqtt_serialize_unsubscribe( float parameter_1,int parameter_2,unsigned int parameter_3,double parameter_4,short parameter_5,short parameter_6,char parameter_7,double parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = tan ( double_1 ) ;
	double_2 = atan ( double_2 ) ;
	aws_iot_mqtt_internal_write_char(long_1,int_1);

	aws_iot_mqtt_internal_write_uint_16(long_2,char_1);

	double_2 = fabs ( double_1 ) ;
	aws_iot_mqtt_internal_write_utf8_string(char_2,char_2,unsigned_int_1);

	double_1 = pow ( double_1 , double_1 ) ;
	double_2 = exp ( double_2 ) ;
	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double_3 = acos ( double_1 ) ;
	}
	aws_iot_mqtt_internal_init_header(char_2,long_3,float_1,long_2,int_2);

	float_1 = aws_iot_mqtt_internal_write_len_to_buffer(int_3,double_1);

	double_3 = fabs ( double_3 ) ;
	if(1)
	{
		int_3 = int_3 + int_1;
	}
	double_4 = sqrt ( double_1 ) ;
	double_1 = log10 ( double_4 ) ;
	double_3 = fabs ( double_1 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_3 = 1;
		long long_3 = 1;
		float float_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_4 = ldexp ( double_5 , int_3 ) ;
	}
	double_4 = tan ( double_3 ) ;
	int_3 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_1);

	double_4 = tan ( double_4 ) ;
}
double _aws_iot_mqtt_internal_unsubscribe( short parameter_1,float parameter_2,float parameter_3,int uni_para)
{
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = aws_iot_mqtt_internal_wait_for_read(char_1,char_1,float_1,uni_para);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	int_1 = int_2;
	float_2 = float_1;
	short_1 = short_1 * short_1;
	char_1 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_1 = fabs ( double_1 ) ;
		}
	}
	if(1)
	{
		float float_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		short short_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = double_2 * double_2;
	double_2 = floor ( double_1 ) ;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_2;
	if(1)
	{
		double_3 = acos ( double_2 ) ;
	}
	double_1 = ldexp ( double_4 , int_3 ) ;
	if(1)
	{
		double_1 = double_3;
	}
	char_3 = char_2 * char_1;
	if(1)
	{
		short_1 = short_1;
	}
	int_3 = int_1;
	if(1)
	{
		int_2 = int_1 + int_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_1 = sinh ( double_1 ) ;
		}
	}
	double_4 = pow ( double_4 , double_1 ) ;
}
double aws_iot_mqtt_unsubscribe( long parameter_1,char parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	char controller4vul_84[2];
	fgets(controller4vul_84 ,3 ,stdin);
	if( strcmp( controller4vul_84, "ry") > 0)
	{
		double_2 = _aws_iot_mqtt_internal_unsubscribe(short_1,float_1,float_1,uni_para);

		return double_2;
	}
	if(1)
	{
		return double_4;
	}
	double_3 = double_2;
	if(1)
	{
		return double_3;
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_2;
		return double_3;
	}
	char_1 = char_2;
	double_5 = tanh ( double_4 ) ;
	if(1)
	{
		double_4 = double_5 + double_4;
	}
	return double_5;
}
short aws_iot_mqtt_tests_sub_unsub_thread_runner(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_5 = 1;
	short short_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = log ( double_1 ) ;
	double_1 = log ( double_1 ) ;
	double_2 = tanh ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		double double_5 = 1;
		short short_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		looper_1 += 1;
		do
		{
			double_4 = double_3 + double_2;
			double_3 = ceil ( double_1 ) ;
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		long_2 = long_1 + long_2;
		looper_2 += 1;
		char controller4vul_83[4];
		fgets(controller4vul_83 ,5 ,stdin);
		if( strcmp( controller4vul_83, "Fv~s") == 0)
		{
			double_3 = aws_iot_mqtt_unsubscribe(long_2,char_1,double_5,uni_para);

			double_2 = double_4 * double_5;
		}
		do
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			double double_5 = 1;
			short short_1 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_6 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double_6 = log10 ( double_3 ) ;
			char_3 = char_2 * char_1;
		}
		int looper_3 = 0;
		while(looper_3 < 1)
		double_4 = double_1;
		looper_3 += 1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "@Q") > 0)
		{
			double_5 = tanh ( double_1 ) ;
		}
	}
	return short_1;
}
char aws_iot_mqtt_tests_yield_thread_runner()
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_1 = int_1 * int_1;
	double_1 = tan ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		looper_1 += 1;
		do
		{
			int_2 = int_2;
			double_1 = tan ( double_1 ) ;
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		double_1 = atan2 ( double_1 , double_2 ) ;
		looper_2 += 1;
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			char char_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long_1 = aws_iot_mqtt_yield(int_2,int_1);

			double_3 = log ( double_1 ) ;
		}
	}
	return char_1;
}
unsigned int _aws_iot_mqtt_force_client_disconnect( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_2 = short_1 + short_2;
	double_1 = double_1 + double_1;
}
unsigned int aws_iot_mqtt_internal_serialize_zero( float parameter_1,unsigned int parameter_2,int parameter_3,long parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	aws_iot_mqtt_internal_write_char(long_1,int_1);

	double_1 = fabs ( double_2 ) ;
	double_2 = log ( double_1 ) ;
	double_1 = fmod ( double_1 , double_3 ) ;
	float_1 = aws_iot_mqtt_internal_write_len_to_buffer(int_2,double_3);

	double_2 = log10 ( double_4 ) ;
	if(1)
	{
		double_2 = fmod ( double_4 , double_4 ) ;
	}
	if(1)
	{
		double_4 = double_1;
	}
	double_4 = acos ( double_1 ) ;
	double_1 = atan ( double_1 ) ;
	if(1)
	{
		double_3 = tanh ( double_4 ) ;
	}
	unsigned_int_1 = unsigned_int_2;
	aws_iot_mqtt_internal_init_header(char_1,long_2,float_2,long_3,int_1);

	double_3 = double_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
}
char _aws_iot_mqtt_internal_disconnect( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = floor ( double_2 ) ;
	float_1 = float_1;
	unsigned_int_1 = aws_iot_mqtt_internal_serialize_zero(float_2,unsigned_int_2,int_1,long_1);

	short_2 = short_1 * short_2;
	float_3 = float_3 * float_4;
	double_3 = floor ( double_1 ) ;
	if(1)
	{
		double_4 = cos ( double_4 ) ;
	}
	double_1 = exp ( double_5 ) ;
	int_3 = int_2 + int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		short short_3 = 1;
		char char_1 = 1;
		int int_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_3;
	}
	unsigned_int_4 = unsigned_int_5;
	init_timer();

	countdown_ms(int_3,double_6);

	double_6 = double_4;
	if(1)
	{
		double_7 = sinh ( double_2 ) ;
	}
	short_1 = short_2 * short_3;
	double_7 = aws_iot_mqtt_internal_send_packet(char_1,int_4,long_2);

}
short aws_iot_mqtt_disconnect( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long_2 = long_1 * long_1;
	double_1 = atan ( double_1 ) ;
	double_2 = cos ( double_3 ) ;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		int int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		char char_2 = 1;
		double_4 = sqrt ( double_1 ) ;
	}
	short_1 = short_1;
	if(1)
	{
		long_2 = aws_iot_mqtt_set_client_state(unsigned_int_1,long_3,int_1);

		short_3 = short_1 + short_2;
	}
	short_3 = short_2;
	if(1)
	{
		char_1 = aws_iot_mqtt_get_client_state(long_1);

		int_2 = int_2;
	}
	char_1 = _aws_iot_mqtt_internal_disconnect(double_3);

	float_1 = float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		int int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		char char_2 = 1;
		double_5 = ldexp ( double_5 , int_3 ) ;
	}
	else
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		int int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char_1 = char_2 + char_1;
	}
	int_2 = aws_iot_mqtt_is_client_connected(float_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
int _aws_iot_mqtt_handle_disconnect( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned_int_1 = _aws_iot_mqtt_force_client_disconnect(double_1);

	int_1 = int_1;
	double_1 = sinh ( double_1 ) ;
	double_1 = log10 ( double_1 ) ;
	if(1)
	{
		double_2 = acos ( double_1 ) ;
	}
	if(1)
	{
		double_1 = log ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	short_1 = aws_iot_mqtt_disconnect(short_2);

	double_2 = tanh ( double_3 ) ;
}
long _aws_iot_mqtt_keep_alive( float parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long_1 = has_timer_expired(float_1);

	double_1 = ldexp ( double_2 , int_1 ) ;
	double_2 = fabs ( double_3 ) ;
	init_timer();

	long_1 = long_1;
	char_1 = char_1 * char_1;
	if(1)
	{
		double_2 = ceil ( double_1 ) ;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "}") > 0)
	{
		double_4 = sinh ( double_3 ) ;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double_1 = floor ( double_2 ) ;
		double_3 = tanh ( double_4 ) ;
	}
	char_2 = char_3;
	countdown_sec(short_1,short_1);

	double_5 = atan2 ( double_2 , double_6 ) ;
	double_4 = fmod ( double_4 , double_2 ) ;
	countdown_ms(int_1,double_1);

	double_3 = pow ( double_1 , double_2 ) ;
	if(1)
	{
		double_6 = tan ( double_4 ) ;
	}
	double_2 = atan2 ( double_7 , double_6 ) ;
	if(1)
	{
		double_5 = atan2 ( double_8 , double_2 ) ;
		double_1 = double_4 + double_3;
	}
	double_2 = aws_iot_mqtt_internal_send_packet(char_3,int_1,long_1);

	double_7 = atan2 ( double_3 , double_7 ) ;
	int_2 = _aws_iot_mqtt_handle_disconnect(float_1);

	double_8 = cosh ( double_3 ) ;
	double_7 = ceil ( double_7 ) ;
	unsigned_int_1 = aws_iot_mqtt_internal_serialize_zero(float_2,unsigned_int_2,int_3,long_2);

}
unsigned int _aws_iot_mqtt_internal_resubscribe( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_6 = 1;
	short short_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	double double_8 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_7 = 1;
	short short_4 = 1;
	double_1 = exp ( double_1 ) ;
	int_1 = int_2;
	double_2 = pow ( double_3 , double_3 ) ;
	short_1 = short_1 + short_1;
	unsigned_int_1 = unsigned_int_2;
	countdown_ms(int_3,double_3);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_3 = int_3 * int_4;
	float_1 = aws_iot_mqtt_internal_wait_for_read(char_1,char_1,float_2,91);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_4 = acos ( double_2 ) ;
	unsigned_int_3 = aws_iot_mqtt_get_next_packet_id(double_3);

	double_1 = log ( double_5 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		char char_2 = 1;
		long long_1 = 1;
		double double_6 = 1;
		short short_2 = 1;
		char char_3 = 1;
		short short_3 = 1;
		double double_8 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_7 = 1;
		short short_4 = 1;
		if(1)
		{
		}
		int_5 = int_1;
		_aws_iot_mqtt_get_free_message_handler_index();

		double_4 = double_2;
		double_5 = tan ( double_1 ) ;
		if(1)
		{
			double_3 = aws_iot_mqtt_internal_send_packet(char_2,int_4,long_1);

			double_3 = double_6;
		}
		double_5 = tan ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			char char_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			char char_2 = 1;
			long long_1 = 1;
			double double_6 = 1;
			short short_2 = 1;
			char char_3 = 1;
			short short_3 = 1;
			double double_8 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_7 = 1;
			short short_4 = 1;
			int_1 = _aws_iot_mqtt_deserialize_suback(int_4,double_5,int_3,double_3,int_3,double_5);

			double_7 = sinh ( double_2 ) ;
		}
		int_4 = int_4 * int_6;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			char char_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			char char_2 = 1;
			long long_1 = 1;
			double double_6 = 1;
			short short_2 = 1;
			char char_3 = 1;
			short short_3 = 1;
			double double_8 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_7 = 1;
			short short_4 = 1;
			long_1 = _aws_iot_mqtt_serialize_subscribe(unsigned_int_1,short_2,char_3,int_2,short_3,char_2,char_2,int_1,double_8);

			short_4 = short_1;
		}
		double_8 = cosh ( double_8 ) ;
		if(1)
		{
			double_4 = double_4 * double_8;
		}
	}
	double_6 = tan ( double_2 ) ;
	init_timer();

}
unsigned int aws_iot_mqtt_resubscribe( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_3 = int_1 + int_2;
	char_1 = aws_iot_mqtt_get_client_state(long_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned_int_2 = _aws_iot_mqtt_internal_resubscribe(unsigned_int_1);

		short_3 = short_1 + short_2;
	}
	if(1)
	{
		int_4 = int_2 + int_1;
	}
	if(1)
	{
		long_1 = aws_iot_mqtt_set_client_state(unsigned_int_1,long_1,int_4);

		double_1 = sinh ( double_1 ) ;
	}
	int_1 = aws_iot_mqtt_is_client_connected(float_1);

	long_2 = long_2 + long_1;
	if(1)
	{
		double_1 = cos ( double_1 ) ;
	}
	double_1 = tanh ( double_2 ) ;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		double_3 = fabs ( double_1 ) ;
	}
	double_3 = atan2 ( double_1 , double_3 ) ;
}
short aws_iot_mqtt_attempt_reconnect( long parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = aws_iot_mqtt_connect(short_1,long_1);

	double_1 = double_2 + double_2;
	int_1 = aws_iot_mqtt_is_client_connected(float_1);

	double_2 = double_2;
	if(1)
	{
		double_3 = sinh ( double_4 ) ;
	}
	if(1)
	{
		int_1 = int_1;
	}
	double_2 = fmod ( double_2 , double_1 ) ;
	if(1)
	{
		unsigned_int_1 = aws_iot_mqtt_resubscribe(int_2);

		long_1 = long_1;
		long_1 = aws_iot_mqtt_set_client_state(unsigned_int_2,long_2,int_3);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_1 = log ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char_1 = aws_iot_mqtt_get_client_state(long_2);

		double_5 = atan2 ( double_4 , double_6 ) ;
	}
	int_2 = int_3 + int_2;
}
short _aws_iot_mqtt_handle_reconnect( long parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	short short_1 = 1;
	double double_6 = 1;
	countdown_ms(int_1,double_1);

	float_1 = float_1;
	long_1 = has_timer_expired(float_1);

	double_2 = asin ( double_2 ) ;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_7 = 1;
		short short_1 = 1;
		double double_6 = 1;
		short_1 = short_1;
	}
	double_3 = ceil ( double_4 ) ;
	if(1)
	{
		double_4 = double_2;
	}
	if(1)
	{
		short_2 = aws_iot_mqtt_attempt_reconnect(long_1);

		double_5 = ldexp ( double_1 , int_1 ) ;
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_2 = 1;
			double double_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_7 = 1;
			short short_1 = 1;
			double double_6 = 1;
			double_6 = double_3 + double_4;
			if(1)
			{
				char_2 = char_1 + char_2;
			}
			unsigned_int_1 = unsigned_int_1;
		}
	}
	long_2 = aws_iot_mqtt_set_client_state(unsigned_int_1,long_3,int_1);

	double_5 = atan2 ( double_5 , double_7 ) ;
	if(1)
	{
		char_1 = char_2;
	}
	double_2 = tan ( double_5 ) ;
	double_4 = acos ( double_1 ) ;
}
long _aws_iot_mqtt_internal_yield( char parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	long long_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	float float_3 = 1;
	init_timer();

	int_1 = int_2;
	long_1 = long_2;
	double_1 = cos ( double_1 ) ;
	double_1 = cosh ( double_2 ) ;
	char_1 = aws_iot_mqtt_get_client_state(long_1);

	double_3 = cos ( double_4 ) ;
	double_5 = cosh ( double_5 ) ;
	short_1 = _aws_iot_mqtt_handle_reconnect(long_2);

	int_1 = int_1;
	do
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		long long_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		float float_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			if(1)
			{
				float_1 = float_1;
			}
			short_1 = aws_iot_mqtt_internal_cycle_read(char_1,short_2,float_2,380);

			double_2 = atan ( double_2 ) ;
		}
		unsigned_int_3 = unsigned_int_3;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			float float_1 = 1;
			short short_2 = 1;
			float float_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			long long_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_6 = 1;
			float float_3 = 1;
			char_3 = char_2 + char_1;
		}
		else
		{
			if(1)
			{
				countdown_ms(int_3,double_2);

				char_2 = char_1;
			}
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			float float_1 = 1;
			short short_2 = 1;
			float float_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			long long_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_6 = 1;
			float float_3 = 1;
			double_5 = cosh ( double_6 ) ;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				short short_1 = 1;
				float float_1 = 1;
				short short_2 = 1;
				float float_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				short short_3 = 1;
				long long_3 = 1;
				short short_4 = 1;
				short short_5 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_6 = 1;
				float float_3 = 1;
				int_2 = _aws_iot_mqtt_handle_disconnect(float_2);

				long_2 = has_timer_expired(float_1);

				double_4 = atan2 ( double_6 , double_6 ) ;
				if(1)
				{
					long_1 = aws_iot_mqtt_set_client_state(unsigned_int_4,long_2,int_1);

					double_2 = double_4;
				}
				float_3 = float_3 + float_3;
				double_5 = ldexp ( double_6 , int_3 ) ;
				double_5 = double_2 + double_3;
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
	short_3 = short_1 * short_1;
	looper_1 += 1;
	long_3 = _aws_iot_mqtt_keep_alive(float_2);

	short_4 = short_4 + short_5;
}
long aws_iot_mqtt_yield( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_6 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = cosh ( double_2 ) ;
	double_3 = tanh ( double_3 ) ;
	if(1)
	{
		double_3 = pow ( double_1 , double_1 ) ;
	}
	int_1 = aws_iot_mqtt_is_client_connected(float_1);

	double_1 = sinh ( double_4 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_6 = 1;
		long long_2 = 1;
		char char_2 = 1;
		short short_1 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		float_1 = float_2 + float_2;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_4 = 1;
			char char_1 = 1;
			long long_1 = 1;
			double double_6 = 1;
			long long_2 = 1;
			char char_2 = 1;
			short short_1 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			double_5 = pow ( double_5 , double_1 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_4 = 1;
			char char_1 = 1;
			long long_1 = 1;
			double double_6 = 1;
			long long_2 = 1;
			char char_2 = 1;
			short short_1 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			char_1 = aws_iot_mqtt_get_client_state(long_1);

			double_4 = atan2 ( double_6 , double_7 ) ;
		}
		double_1 = double_4;
		if(1)
		{
			double_3 = log ( double_2 ) ;
		}
	}
	double_4 = sinh ( double_6 ) ;
	if(1)
	{
		double_4 = cosh ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_4 = 1;
			char char_1 = 1;
			long long_1 = 1;
			double double_6 = 1;
			long long_2 = 1;
			char char_2 = 1;
			short short_1 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			long_2 = _aws_iot_mqtt_internal_yield(char_2,short_1);

			unsigned_int_1 = unsigned_int_1;
		}
	}
	float_1 = float_1;
	long_3 = aws_iot_mqtt_set_client_state(unsigned_int_2,long_1,int_1);

}
unsigned int aws_iot_mqtt_tests_message_aggregator( char parameter_1,char parameter_2,double parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int_1 = int_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = atan2 ( double_2 , double_3 ) ;
	int_2 = int_1;
	int_2 = int_1;
	double_2 = ldexp ( double_2 , int_2 ) ;
	int_4 = int_3 + int_2;
	double_4 = log ( double_2 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		float_1 = float_2;
		int_4 = int_4 + int_5;
		double_4 = cos ( double_5 ) ;
		double_3 = double_4 * double_2;
		if(1)
		{
			return unsigned_int_1;
		}
		double_3 = double_1;
		double_4 = sqrt ( double_6 ) ;
		double_7 = asin ( double_2 ) ;
		if(1)
		{
			return unsigned_int_2;
		}
		int_5 = int_5 * int_3;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_3 = 1;
			double_8 = fmod ( double_3 , double_2 ) ;
		}
		else
		{
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_3 = 1;
			float_1 = float_2;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
		}
		double_1 = floor ( double_7 ) ;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_3 = 1;
			float_1 = float_3;
			int_3 = int_4;
		}
	}
	else
	{
		long_2 = aws_iot_mqtt_yield(int_5,int_3);

		char_1 = aws_iot_mqtt_get_client_state(long_1);

		double_3 = ceil ( double_2 ) ;
	}
}
int _aws_iot_mqtt_deserialize_suback( int parameter_1,double parameter_2,int parameter_3,double parameter_4,int parameter_5,double parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = fmod ( double_1 , double_2 ) ;
	int_1 = int_1 * int_2;
	int_2 = int_1 * int_3;
	float_2 = float_1 * float_1;
	double_2 = cos ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_2;
	}
	double_2 = sinh ( double_1 ) ;
	double_4 = double_3 * double_2;
	double_3 = tan ( double_5 ) ;
	char_3 = char_1 * char_2;
	double_3 = atan ( double_5 ) ;
	if(1)
	{
		double_5 = double_3;
	}
	double_3 = atan2 ( double_1 , double_2 ) ;
	if(1)
	{
		int_4 = int_1 + int_2;
	}
	double_2 = atan2 ( double_1 , double_3 ) ;
	if(1)
	{
		double_6 = atan ( double_2 ) ;
	}
	aws_iot_mqtt_internal_read_char(short_1);

	double_2 = acos ( double_3 ) ;
	int_2 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(unsigned_int_1,unsigned_int_1,unsigned_int_2);

	float_2 = float_1;
	if(1)
	{
		int_4 = aws_iot_mqtt_internal_read_uint16_t(char_1);

		double_2 = double_2 * double_2;
	}
	unsigned_int_2 = unsigned_int_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_4;
		}
		double_6 = acos ( double_2 ) ;
	}
	unsigned_int_5 = unsigned_int_5 + unsigned_int_4;
}
void _aws_iot_mqtt_get_free_message_handler_index()
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = double_1 * double_1;
	short_2 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	unsigned_int_1 = unsigned_int_2;
}
long _aws_iot_mqtt_serialize_subscribe( unsigned int parameter_1,short parameter_2,char parameter_3,int parameter_4,short parameter_5,char parameter_6,char parameter_7,int parameter_8,double parameter_9)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double double_6 = 1;
	int_1 = int_1;
	char_2 = char_1 + char_2;
	int_3 = int_2 * int_3;
	double_1 = pow ( double_1 , double_1 ) ;
	int_3 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_1);

	aws_iot_mqtt_internal_write_char(long_1,int_3);

	double_2 = log10 ( double_2 ) ;
	if(1)
	{
		aws_iot_mqtt_internal_write_uint_16(long_1,char_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	double_1 = ceil ( double_3 ) ;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = atan2 ( double_4 , double_4 ) ;
	}
	if(1)
	{
		double_1 = tanh ( double_1 ) ;
	}
	double_1 = log ( double_4 ) ;
	if(1)
	{
		float_1 = aws_iot_mqtt_internal_write_len_to_buffer(int_2,double_4);

		double_5 = ceil ( double_2 ) ;
	}
	short_1 = short_2;
	aws_iot_mqtt_internal_write_utf8_string(char_1,char_2,unsigned_int_1);

	double_5 = sinh ( double_5 ) ;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		float float_2 = 1;
		long long_2 = 1;
		int int_4 = 1;
		double double_6 = 1;
		double_4 = floor ( double_6 ) ;
		aws_iot_mqtt_internal_init_header(char_3,long_1,float_2,long_2,int_3);

		double_3 = double_2;
	}
	char_3 = char_2;
	int_4 = int_3 * int_1;
}
unsigned int aws_iot_mqtt_get_next_packet_id( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double _aws_iot_mqtt_internal_subscribe( short parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_6 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_2 = 1;
	double double_8 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_9 = 1;
	int int_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = pow ( double_2 , double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_1 = fabs ( double_3 ) ;
	double_5 = double_1 * double_4;
	long_1 = _aws_iot_mqtt_serialize_subscribe(unsigned_int_1,short_1,char_1,int_1,short_1,char_2,char_2,int_2,double_5);

	double_5 = floor ( double_4 ) ;
	double_4 = fmod ( double_1 , double_5 ) ;
	init_timer();

	int_1 = int_1 * int_2;
	double_5 = tan ( double_5 ) ;
	double_4 = log ( double_1 ) ;
	long_2 = long_1;
	double_3 = double_6 + double_5;
	double_1 = aws_iot_mqtt_internal_send_packet(char_3,int_2,long_3);

	double_1 = asin ( double_3 ) ;
	float_1 = float_1;
	if(1)
	{
		unsigned_int_2 = aws_iot_mqtt_get_next_packet_id(double_1);

		double_7 = fabs ( double_4 ) ;
	}
	char_2 = char_2 * char_2;
	if(1)
	{
		double_2 = ldexp ( double_5 , int_3 ) ;
	}
	float_1 = aws_iot_mqtt_internal_wait_for_read(char_4,char_5,float_2,864);

	double_3 = log10 ( double_6 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		long long_2 = 1;
		double double_6 = 1;
		char char_3 = 1;
		long long_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_2 = 1;
		double double_8 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float_3 = float_1;
	}
	double_2 = double_5;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		long long_2 = 1;
		double double_6 = 1;
		char char_3 = 1;
		long long_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_2 = 1;
		double double_8 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	}
	short_1 = short_1;
	if(1)
	{
		double_8 = log10 ( double_1 ) ;
	}
	double_8 = exp ( double_6 ) ;
	double_6 = tan ( double_1 ) ;
	short_2 = short_1;
	countdown_ms(int_3,double_6);

	int_4 = _aws_iot_mqtt_deserialize_suback(int_5,double_9,int_4,double_8,int_2,double_8);

	double_7 = floor ( double_9 ) ;
	double_3 = asin ( double_9 ) ;
	double_9 = ldexp ( double_3 , int_6 ) ;
	_aws_iot_mqtt_get_free_message_handler_index();

}
int aws_iot_mqtt_is_client_connected( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = exp ( double_1 ) ;
	double_1 = exp ( double_1 ) ;
	if(1)
	{
		double_2 = floor ( double_3 ) ;
		double_1 = log ( double_4 ) ;
	}
	{
		double_4 = pow ( double_4 , double_1 ) ;
		double_2 = double_2 + double_5;
		double_2 = acos ( double_3 ) ;
	}
	double_2 = fmod ( double_1 , double_5 ) ;
}
char aws_iot_mqtt_subscribe( unsigned int parameter_1,long parameter_2,double parameter_3,long parameter_4,double parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = sinh ( double_2 ) ;
	int_1 = aws_iot_mqtt_is_client_connected(float_1);

	double_2 = asin ( double_1 ) ;
	if(1)
	{
		double_1 = acos ( double_3 ) ;
	}
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	char_1 = aws_iot_mqtt_get_client_state(long_1);

	double_3 = double_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		long long_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		unsigned_int_3 = unsigned_int_3;
	}
	char_2 = char_3;
	if(1)
	{
		double_1 = _aws_iot_mqtt_internal_subscribe(short_1,short_2,float_2,unsigned_int_2,long_2);

		double_1 = double_2;
	}
	double_3 = log ( double_2 ) ;
	long_1 = aws_iot_mqtt_set_client_state(unsigned_int_2,long_2,int_1);

	float_2 = float_3 + float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		long long_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int_2 = int_1;
	}
	float_3 = float_3 * float_1;
}
char aws_iot_mqtt_tests_subscribe_to_test_topic( short parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_1 = exp ( double_2 ) ;
	char_1 = aws_iot_mqtt_subscribe(unsigned_int_1,long_1,double_3,long_2,double_3);

	unsigned_int_2 = aws_iot_mqtt_tests_message_aggregator(char_2,char_2,double_3,float_1);

	float_2 = float_1;
	double_2 = log ( double_3 ) ;
	long_3 = long_3 * long_3;
	float_2 = float_1;
	int_1 = int_2;
	return char_1;
}
unsigned int _aws_iot_mqtt_deserialize_connack( float parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long_1 = long_1 * long_1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_2 = cos ( double_2 ) ;
	double_1 = exp ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_3 = atan2 ( double_4 , double_4 ) ;
	double_4 = log10 ( double_2 ) ;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "-uX6") > 0)
	{
		double_5 = fabs ( double_4 ) ;
	}
	if(1)
	{
		double_1 = cosh ( double_4 ) ;
	}
	double_5 = cos ( double_2 ) ;
	double_2 = sqrt ( double_3 ) ;
	double_4 = log ( double_1 ) ;
	int_2 = int_1 * int_2;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	if(1)
	{
		double_5 = fmod ( double_3 , double_1 ) ;
	}
	char_2 = char_1 + char_2;
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_2 = 1;
		float float_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		int int_7 = 1;
		long_2 = long_2;
	}
	double_5 = cos ( double_3 ) ;
	int_2 = int_1;
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_2 = 1;
		float float_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		int int_7 = 1;
		float_1 = float_1;
	}
	short_1 = short_2;
	int_1 = int_1;
	int_2 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(unsigned_int_2,unsigned_int_2,unsigned_int_2);

	double_4 = asin ( double_1 ) ;
	{
		long long_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_2 = 1;
		float float_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		int int_7 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		int_5 = int_3 + int_4;
		double_6 = fmod ( double_2 , double_5 ) ;
		unsigned_int_4 = unsigned_int_1;
		unsigned_int_4 = unsigned_int_6;
		int_7 = int_3 + int_6;
		aws_iot_mqtt_internal_read_char(short_3);

		unsigned_int_5 = unsigned_int_1;
	}
	float_2 = float_2 * float_3;
}
void countdown_sec( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double_1 = floor ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = sinh ( double_1 ) ;
	float_1 = float_1 * float_1;
}
short aws_iot_mqtt_internal_serialize_ack( long parameter_1,char parameter_2,long parameter_3,int parameter_4,char parameter_5,long parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_6 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	double double_7 = 1;
	double double_5 = 1;
	double_1 = exp ( double_2 ) ;
	double_2 = fmod ( double_2 , double_1 ) ;
	aws_iot_mqtt_internal_write_char(long_1,int_1);

	double_2 = fmod ( double_1 , double_3 ) ;
	long_1 = long_1 + long_1;
	double_2 = log ( double_2 ) ;
	if(1)
	{
		double_3 = tan ( double_1 ) ;
	}
	double_3 = tanh ( double_3 ) ;
	if(1)
	{
		int_1 = int_1 + int_2;
	}
	double_4 = log10 ( double_3 ) ;
	double_3 = floor ( double_4 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_6 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_3 = 1;
		double double_7 = 1;
		double double_5 = 1;
		double_5 = sqrt ( double_5 ) ;
	}
	float_1 = aws_iot_mqtt_internal_write_len_to_buffer(int_3,double_6);

	aws_iot_mqtt_internal_write_uint_16(long_2,char_1);

	double_3 = fabs ( double_6 ) ;
	double_6 = sinh ( double_4 ) ;
	aws_iot_mqtt_internal_init_header(char_2,long_3,float_1,long_3,int_2);

	double_1 = double_7 * double_6;
	double_1 = tan ( double_4 ) ;
	char_2 = char_1 + char_1;
}
unsigned int _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = sqrt ( double_1 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	double_1 = pow ( double_2 , double_3 ) ;
	double_3 = cosh ( double_2 ) ;
	double_2 = acos ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int_3 = int_1 * int_2;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				double_2 = asin ( double_1 ) ;
			}
		}
		if(1)
		{
			double_3 = ldexp ( double_3 , int_1 ) ;
		}
		double_4 = atan ( double_2 ) ;
		double_1 = floor ( double_4 ) ;
	}
	double_2 = cos ( double_5 ) ;
	return unsigned_int_2;
}
short _aws_iot_mqtt_internal_deliver_message( char parameter_1,char parameter_2,long parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double_1 = cos ( double_2 ) ;
	int_2 = int_1 * int_1;
	double_2 = ldexp ( double_2 , int_3 ) ;
	double_2 = tan ( double_3 ) ;
	if(1)
	{
		char_1 = aws_iot_mqtt_get_client_state(long_1);

		long_2 = aws_iot_mqtt_set_client_state(unsigned_int_1,long_3,int_3);

		int_3 = int_2;
	}
	double_3 = exp ( double_1 ) ;
	double_1 = log10 ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double_1 = cosh ( double_1 ) ;
				}
			}
		}
	}
	double_3 = log10 ( double_1 ) ;
	unsigned_int_2 = _aws_iot_mqtt_internal_is_topic_matched(char_2,char_3,short_1);

	double_3 = log ( double_1 ) ;
}
int aws_iot_mqtt_internal_read_uint16_t( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_2 = char_1 * char_1;
	double_1 = asin ( double_1 ) ;
	float_2 = float_1 + float_1;
	double_2 = pow ( double_1 , double_1 ) ;
	double_2 = asin ( double_2 ) ;
	double_1 = atan2 ( double_1 , double_1 ) ;
	return int_1;
}
unsigned int _aws_iot_mqtt_read_string_with_len( char parameter_1,float parameter_2,float parameter_3,short parameter_4,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char * vul_var;
	double_1 = acos ( double_1 ) ;
	int_1 = int_2;
	char controller4vul_89[3];
	fgets(controller4vul_89 ,4 ,stdin);
	if( strcmp( controller4vul_89, ",/z") == 0)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double_1 = sqrt ( double_2 ) ;
		char controller4vul_90[1];
		fgets(controller4vul_90 ,2 ,stdin);
		if( strcmp( controller4vul_90, ",") == 0)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			float float_1 = 1;
			int int_3 = 1;
			double double_3 = 1;
			vul_var=(char*)malloc(20*sizeof(char));
			strcpy(vul_var, "CWE-761");
			if(uni_para == 299)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			float_1 = float_1;
			int_3 = int_2;
			double_2 = double_3;
		}
	}
	char_2 = char_1 + char_1;
}
int aws_iot_mqtt_internal_decode_remaining_length_from_buffer( unsigned int parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = floor ( double_2 ) ;
	double_1 = atan2 ( double_1 , double_3 ) ;
	int_2 = int_1 * int_1;
	double_2 = tan ( double_3 ) ;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			double_4 = double_2;
		}
		double_3 = pow ( double_2 , double_4 ) ;
		int_3 = int_1;
		char_1 = char_1;
		short_2 = short_1 + short_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_2 = double_1;
	looper_1 += 1;
	double_2 = sinh ( double_4 ) ;
	double_4 = exp ( double_2 ) ;
}
void aws_iot_mqtt_internal_read_char( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = ceil ( double_2 ) ;
}
short aws_iot_mqtt_internal_deserialize_publish( long parameter_1,int parameter_2,long parameter_3,long parameter_4,char parameter_5,unsigned int parameter_6,unsigned int parameter_7,long parameter_8,short parameter_9,unsigned int parameter_10,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_1 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = pow ( double_1 , double_2 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = sinh ( double_1 ) ;
	long_1 = long_1;
	double_1 = floor ( double_3 ) ;
	double_3 = fabs ( double_2 ) ;
	char controller4vul_88[2];
	fgets(controller4vul_88 ,3 ,stdin);
	if( strcmp( controller4vul_88, "WE") == 0)
	{
		unsigned_int_2 = _aws_iot_mqtt_read_string_with_len(char_1,float_1,float_1,short_1,uni_para);

		double_4 = asin ( double_2 ) ;
	}
	if(1)
	{
		double_4 = double_3;
	}
	double_3 = fabs ( double_5 ) ;
	if(1)
	{
		double_2 = pow ( double_3 , double_2 ) ;
	}
	double_4 = double_4 * double_2;
	double_3 = double_6 + double_5;
	double_4 = fabs ( double_6 ) ;
	double_7 = fmod ( double_3 , double_4 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_1 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_3 = char_2 * char_1;
	}
	double_8 = acos ( double_2 ) ;
	int_1 = int_1;
	if(1)
	{
		double_9 = acos ( double_3 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_1 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	double_9 = ceil ( double_1 ) ;
	double_10 = atan2 ( double_5 , double_5 ) ;
	unsigned_int_5 = unsigned_int_5 + unsigned_int_1;
}
unsigned int _aws_iot_mqtt_internal_handle_publish( unsigned int parameter_1,char parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_5 = 1;
	double double_7 = 1;
	double_2 = double_1 * double_2;
	double_3 = acos ( double_2 ) ;
	double_1 = acos ( double_1 ) ;
	double_1 = double_3 + double_3;
	int_2 = int_1 + int_1;
	double_1 = asin ( double_4 ) ;
	double_4 = tanh ( double_1 ) ;
	double_3 = asin ( double_2 ) ;
	short_3 = short_1 * short_2;
	char_1 = char_2;
	char controller4vul_87[4];
	fgets(controller4vul_87 ,5 ,stdin);
	if( strcmp( controller4vul_87, "C1yo") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_5 = 1;
		double double_7 = 1;
		short_2 = aws_iot_mqtt_internal_deserialize_publish(long_1,int_3,long_1,long_1,char_3,unsigned_int_1,unsigned_int_1,long_1,short_4,unsigned_int_1,uni_para);

		short_5 = short_5 + short_5;
	}
	double_1 = atan ( double_5 ) ;
	if(1)
	{
		double_5 = sinh ( double_3 ) ;
	}
	if(1)
	{
		double_3 = sinh ( double_1 ) ;
	}
	double_4 = floor ( double_6 ) ;
	char controller_3[5];
	fgets(controller_3 ,5 ,stdin);
	if( strcmp( controller_3, "5r!E") < 0)
	{
		double_3 = ceil ( double_3 ) ;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_5 = 1;
		double double_7 = 1;
		double_1 = pow ( double_5 , double_7 ) ;
	}
	int_1 = int_1;
}
long _aws_iot_mqtt_internal_decode_packet_remaining_len( char parameter_1,char parameter_2,double parameter_3,short parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	long long_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_5 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = sqrt ( double_1 ) ;
	float_1 = float_1 + float_1;
	int_2 = int_1 + int_1;
	double_2 = ldexp ( double_3 , int_2 ) ;
	double_3 = sinh ( double_4 ) ;
	int_1 = int_3 + int_3;
	double_4 = atan ( double_2 ) ;
	do
	{
		double double_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		long long_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		double double_5 = 1;
		char char_2 = 1;
		short short_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		if(1)
		{
			long_1 = _aws_iot_mqtt_internal_readWrapper(float_2,float_1,long_1,char_1,float_2);

			double_1 = pow ( double_2 , double_1 ) ;
		}
		char_2 = char_1 * char_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "P") < 0)
		{
			double double_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			long long_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			double double_5 = 1;
			char char_2 = 1;
			short short_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long_2 = long_2 * long_3;
		}
		double_1 = pow ( double_2 , double_4 ) ;
		short_1 = short_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_1 = ldexp ( double_3 , int_3 ) ;
	looper_1 += 1;
	double_5 = double_2 + double_5;
	int_3 = int_2 * int_2;
}
long _aws_iot_mqtt_internal_readWrapper( float parameter_1,float parameter_2,long parameter_3,char parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double_1 = double_2;
	long_1 = long_1 * long_1;
	double_3 = tan ( double_1 ) ;
	long_2 = long_1 * long_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double_2 = double_4 * double_2;
		int_1 = int_1 * int_2;
		float_1 = float_2;
		double_4 = fabs ( double_2 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double_5 = atan ( double_5 ) ;
		double_3 = double_4;
	}
	return long_1;
}
void _aws_iot_mqtt_internal_read_packet( int parameter_1,long parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	double double_11 = 1;
	char_2 = char_1 * char_2;
	short_2 = short_1 + short_1;
	double_2 = double_1 * double_2;
	long_1 = _aws_iot_mqtt_internal_readWrapper(float_1,float_2,long_1,char_3,float_3);

	double_2 = exp ( double_3 ) ;
	double_4 = cos ( double_5 ) ;
	char_2 = char_4;
	double_7 = double_5 + double_6;
	double_8 = log ( double_4 ) ;
	int_2 = int_1 + int_2;
	init_timer();

	long_2 = _aws_iot_mqtt_internal_decode_packet_remaining_len(char_2,char_1,double_2,short_3);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	countdown_ms(int_2,double_6);

	double_9 = pow ( double_4 , double_7 ) ;
	double_3 = atan2 ( double_4 , double_7 ) ;
	if(1)
	{
	}
	if(1)
	{
	}
	unsigned_int_3 = aws_iot_mqtt_internal_flushBuffers();

	double_1 = ceil ( double_7 ) ;
	if(1)
	{
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_4 = 1;
		double double_11 = 1;
		float_1 = float_2 + float_4;
		do
		{
			double_1 = log10 ( double_6 ) ;
			if(1)
			{
				double_4 = pow ( double_2 , double_3 ) ;
				if(1)
				{
					double_8 = log ( double_6 ) ;
				}
				else
				{
					double_8 = atan2 ( double_6 , double_6 ) ;
				}
			}
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		double_10 = atan2 ( double_1 , double_11 ) ;
		looper_1 += 1;
		if(1)
		{
			char_2 = char_2;
		}
		else
		{
		}
	}
	if(1)
	{
		double_1 = fabs ( double_1 ) ;
		if(1)
		{
		}
	}
	unsigned_int_1 = unsigned_int_4;
	double_6 = sinh ( double_7 ) ;
	double_1 = pow ( double_10 , double_7 ) ;
	double_8 = ceil ( double_10 ) ;
}
short aws_iot_mqtt_internal_cycle_read( char parameter_1,short parameter_2,float parameter_3,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = long_1;
	double_1 = asin ( double_1 ) ;
	char controller4vul_86[4];
	fgets(controller4vul_86 ,5 ,stdin);
	if( strcmp( controller4vul_86, "`]l ") == 0)
	{
		unsigned_int_1 = _aws_iot_mqtt_internal_handle_publish(unsigned_int_2,char_1,uni_para);

		return short_1;
	}
	double_1 = asin ( double_1 ) ;
	if(1)
	{
		double_2 = exp ( double_2 ) ;
	}
	short_2 = short_1;
	float_1 = float_1;
	if(1)
	{
		return short_3;
	}
	if(1)
	{
		return short_1;
	}
	if(1)
	{
		return short_2;
	}
	{
		long long_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		float float_1 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double_2 = exp ( double_2 ) ;
		double_3 = double_4;
		float_3 = float_2 * float_2;
		double_4 = double_3 + double_2;
	}
	return short_2;
}
float aws_iot_mqtt_internal_wait_for_read( char parameter_1,char parameter_2,float parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_4 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_2 = double_3;
	double_2 = log10 ( double_3 ) ;
	char controller4vul_85[3];
	fgets(controller4vul_85 ,4 ,stdin);
	if( strcmp( controller4vul_85, "oi2") == 0)
	{
		short_1 = aws_iot_mqtt_internal_cycle_read(char_1,short_1,float_1,uni_para);

		double_3 = asin ( double_1 ) ;
	}
	int_1 = int_2;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double double_4 = 1;
		if(1)
		{
			double_1 = tan ( double_1 ) ;
		}
		double_3 = ldexp ( double_4 , int_1 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	looper_1 += 1;
	double_3 = floor ( double_5 ) ;
}
double aws_iot_mqtt_internal_send_packet( char parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_6 = 1;
	double_1 = cos ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	if(1)
	{
		long_1 = has_timer_expired(float_1);

		double_3 = atan ( double_3 ) ;
	}
	if(1)
	{
		double_4 = pow ( double_4 , double_4 ) ;
	}
	int_2 = int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		double double_6 = 1;
		char_1 = char_1;
	}
	double_1 = cosh ( double_4 ) ;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_5 = double_2 + double_1;
		if(1)
		{
		}
		double_3 = log ( double_3 ) ;
	}
	float_2 = float_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		double double_6 = 1;
		double_6 = tan ( double_5 ) ;
	}
	if(1)
	{
		double_1 = double_4;
	}
}
void aws_iot_mqtt_internal_write_uint_16( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double_1 = tan ( double_1 ) ;
	double_2 = fabs ( double_3 ) ;
	double_4 = cos ( double_1 ) ;
	float_1 = float_1;
}
void aws_iot_mqtt_internal_write_utf8_string( char parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = atan ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		char char_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = atan2 ( double_3 , double_2 ) ;
		aws_iot_mqtt_internal_write_uint_16(long_1,char_1);

		int_1 = int_2;
	}
}
float aws_iot_mqtt_internal_write_len_to_buffer( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	float float_3 = 1;
	int int_1 = 1;
	float_1 = float_2;
	double_1 = fabs ( double_1 ) ;
	double_2 = double_1 * double_1;
	do
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		float float_3 = 1;
		int int_1 = 1;
		double_2 = log ( double_3 ) ;
		float_1 = float_3;
		if(1)
		{
			double_2 = log10 ( double_1 ) ;
		}
		int_1 = int_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	looper_1 += 1;
	double_4 = fmod ( double_4 , double_3 ) ;
}
void aws_iot_mqtt_internal_write_char( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = fmod ( double_2 , double_3 ) ;
	double_4 = log ( double_5 ) ;
}
void aws_iot_mqtt_internal_init_header( char parameter_1,long parameter_2,float parameter_3,long parameter_4,int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = exp ( double_1 ) ;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "Tl{T") < 0)
	{
		double_1 = pow ( double_1 , double_2 ) ;
	}
	double_3 = exp ( double_1 ) ;
	double_1 = double_2 * double_4;
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double_1 = cos ( double_5 ) ;
		short_1 = short_1 + short_2;
		int_3 = int_1 + int_2;
		int_2 = int_3 + int_1;
		double_5 = exp ( double_1 ) ;
		double_3 = tanh ( double_3 ) ;
		double_1 = atan2 ( double_2 , double_4 ) ;
		double_2 = acos ( double_4 ) ;
		double_3 = log10 ( double_1 ) ;
		double_3 = asin ( double_5 ) ;
		double_2 = pow ( double_4 , double_3 ) ;
		float_1 = float_1 + float_1;
		double_2 = exp ( double_2 ) ;
		unsigned_int_1 = unsigned_int_1;
	}
	double_2 = double_2 + double_3;
	double_3 = fabs ( double_3 ) ;
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_2;
	}
	double_4 = sqrt ( double_3 ) ;
	double_5 = log ( double_6 ) ;
}
int aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( short parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char_2 = char_1 + char_1;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "=z3tC") > 0)
	{
		double_1 = double_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "vx") < 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	if(1)
	{
		double_1 = cos ( double_2 ) ;
	}
	else
	{
		double_1 = double_1 * double_1;
	}
	return int_1;
}
long _aws_iot_get_connect_packet_length( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_2 = log ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_1 = log ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double_2 = atan2 ( double_1 , double_3 ) ;
	}
	if(1)
	{
		double_1 = sinh ( double_4 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double_5 = fabs ( double_4 ) ;
	}
	unsigned_int_2 = unsigned_int_3;
}
int _aws_iot_mqtt_serialize_connect( float parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_5 = 1;
	float float_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char_2 = char_1 * char_2;
	double_1 = double_1 * double_1;
	aws_iot_mqtt_internal_write_utf8_string(char_3,char_4,unsigned_int_1);

	double_2 = ceil ( double_2 ) ;
	aws_iot_mqtt_internal_init_header(char_1,long_1,float_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	long_4 = long_2 + long_3;
	if(1)
	{
		int_1 = int_2;
	}
	{
		return int_1;
	}
	double_3 = acos ( double_3 ) ;
	double_2 = tan ( double_2 ) ;
	if(1)
	{
		int_3 = int_1;
	}
	double_2 = exp ( double_3 ) ;
	if(1)
	{
		double_3 = fabs ( double_2 ) ;
	}
	int_1 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_1);

	float_1 = float_1;
	double_3 = double_4 + double_3;
	short_2 = short_1 + short_2;
	short_2 = short_3 * short_4;
	double_4 = double_3;
	if(1)
	{
		double_5 = tan ( double_4 ) ;
	}
	if(1)
	{
		double_5 = atan2 ( double_5 , double_6 ) ;
		aws_iot_mqtt_internal_write_char(long_5,int_2);

		double_4 = double_4;
		int_1 = int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_5 = 1;
		float float_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		float float_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	if(1)
	{
		float_2 = aws_iot_mqtt_internal_write_len_to_buffer(int_3,double_7);

		char_4 = char_1 + char_2;
	}
	double_2 = ceil ( double_3 ) ;
	double_8 = fmod ( double_4 , double_1 ) ;
	if(1)
	{
		double_3 = tanh ( double_6 ) ;
	}
	else
	{
		double_8 = atan ( double_9 ) ;
	}
	if(1)
	{
		double_4 = log10 ( double_6 ) ;
		double_5 = sinh ( double_8 ) ;
	}
	if(1)
	{
		double_8 = sqrt ( double_8 ) ;
	}
	if(1)
	{
		long_2 = _aws_iot_get_connect_packet_length(float_3);

		int_3 = int_2 * int_4;
	}
	int_4 = int_2;
	double_3 = tanh ( double_9 ) ;
	aws_iot_mqtt_internal_write_uint_16(long_4,char_1);

}
void countdown_ms( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float_1 = float_1 + float_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		looper_1 += 1;
		double_1 = cosh ( double_1 ) ;
		double_2 = exp ( double_3 ) ;
	}
}
unsigned int _aws_iot_mqtt_internal_connect( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_9 = 1;
	int int_4 = 1;
	char char_3 = 1;
	int int_5 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double_1 = double_1 + double_2;
	double_3 = floor ( double_4 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = atan ( double_2 ) ;
	double_5 = double_1 + double_2;
	int_1 = aws_iot_mqtt_set_connect_params(char_1,float_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		double_6 = fabs ( double_2 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			int int_1 = 1;
			char char_1 = 1;
			float float_1 = 1;
			double double_6 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_9 = 1;
			int int_4 = 1;
			char char_3 = 1;
			int int_5 = 1;
			float float_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_1 = 1;
			char char_2 = 1;
			long_1 = long_2;
		}
	}
	double_4 = tan ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_9 = 1;
		int int_4 = 1;
		char char_3 = 1;
		int int_5 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		char char_2 = 1;
		unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	}
	double_2 = asin ( double_7 ) ;
	double_1 = sinh ( double_2 ) ;
	double_8 = cos ( double_6 ) ;
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		char_1 = char_1;
	}
	double_7 = atan2 ( double_6 , double_6 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_9 = 1;
		int int_4 = 1;
		char char_3 = 1;
		int int_5 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		char char_2 = 1;
		short_1 = short_1;
	}
	countdown_sec(short_2,short_3);

	double_8 = exp ( double_3 ) ;
	if(1)
	{
		double_6 = log ( double_3 ) ;
	}
	double_2 = cosh ( double_8 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_9 = 1;
		int int_4 = 1;
		char char_3 = 1;
		int int_5 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		init_timer();

		countdown_ms(int_2,double_6);

		double_4 = acos ( double_1 ) ;
	}
	int_3 = int_1 + int_2;
	double_2 = log10 ( double_9 ) ;
	unsigned_int_2 = _aws_iot_mqtt_deserialize_connack(float_1,double_4,unsigned_int_3,int_1);

	int_3 = int_2 + int_2;
	int_3 = _aws_iot_mqtt_serialize_connect(float_1,int_2,unsigned_int_6,int_4);

	double_8 = aws_iot_mqtt_internal_send_packet(char_3,int_5,long_1);

	float_1 = aws_iot_mqtt_internal_wait_for_read(char_1,char_3,float_2,282);

}
long aws_iot_mqtt_set_client_state( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	double_1 = log ( double_2 ) ;
	double_2 = double_1 * double_3;
	double_4 = log ( double_4 ) ;
	if(1)
	{
		char_1 = aws_iot_mqtt_get_client_state(long_1);

		double_1 = sinh ( double_3 ) ;
	}
	double_3 = atan ( double_5 ) ;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		double_4 = cosh ( double_6 ) ;
		double_3 = double_1 + double_1;
	}
	else
	{
		double_5 = asin ( double_2 ) ;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	double_6 = double_1 + double_7;
}
int _aws_iot_mqtt_is_client_state_valid_for_connect( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_3 = int_1 + int_2;
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = cosh ( double_2 ) ;
		unsigned_int_1 = unsigned_int_2;
		double_1 = cos ( double_1 ) ;
		double_2 = atan2 ( double_2 , double_1 ) ;
	}
	return int_1;
}
char aws_iot_mqtt_get_client_state( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = sinh ( double_2 ) ;
	if(1)
	{
		return char_1;
	}
	int_1 = int_2;
}
unsigned int aws_iot_mqtt_internal_flushBuffers()
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long_3 = long_1 * long_2;
	return unsigned_int_1;
}
double aws_iot_mqtt_connect( short parameter_1,long parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_1 = long_1 + long_1;
	double_1 = fabs ( double_1 ) ;
	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		unsigned_int_1 = _aws_iot_mqtt_internal_connect(int_1,int_2);

		double_1 = ceil ( double_2 ) ;
	}
	char_1 = aws_iot_mqtt_get_client_state(long_2);

	short_1 = short_2;
	double_1 = sqrt ( double_2 ) ;
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		short short_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	}
	int_3 = int_2 * int_1;
	short_3 = short_1 + short_3;
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		short short_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_4 = _aws_iot_mqtt_is_client_state_valid_for_connect(double_1);

		double_1 = fabs ( double_3 ) ;
		double_2 = fmod ( double_4 , double_3 ) ;
		if(1)
		{
			double_3 = floor ( double_2 ) ;
		}
		double_2 = double_4;
	}
	else
	{
		long_1 = aws_iot_mqtt_set_client_state(unsigned_int_4,long_2,int_1);

		double_1 = tanh ( double_2 ) ;
	}
	double_5 = ceil ( double_1 ) ;
	unsigned_int_3 = aws_iot_mqtt_internal_flushBuffers();

}
void init_timer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
}
float iot_tls_destroy()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	double_1 = sqrt ( double_2 ) ;
	long_2 = long_1 * long_2;
	double_3 = fmod ( double_2 , double_2 ) ;
	int_1 = int_1;
	short_2 = short_1 * short_1;
	double_1 = tan ( double_3 ) ;
	double_3 = atan ( double_3 ) ;
	short_2 = short_3;
	char_3 = char_1 + char_2;
	return float_1;
}
short iot_tls_is_connected( unsigned int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
float iot_tls_disconnect( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1 + double_1;
	double_2 = exp ( double_3 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	float_2 = float_1 * float_2;
	looper_1 += 1;
	return float_2;
}
int iot_tls_mqtt_get_fixed_uint16_from_message( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double_1 = cos ( double_2 ) ;
	double_3 = sinh ( double_4 ) ;
	return int_1;
}
double iot_tls_mqtt_copy_string_from_message( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = iot_tls_mqtt_get_fixed_uint16_from_message(short_1,short_2);

	double_1 = asin ( double_2 ) ;
	long_1 = long_2;
	return double_1;
}
double iot_tls_mqtt_get_end_of_variable_length_int( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_3 = 1;
	double double_2 = 1;
	double_1 = fabs ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_3 = 1;
		double double_2 = 1;
		looper_1 += 1;
		double_2 = cos ( double_2 ) ;
	}
	double_3 = log ( double_3 ) ;
	return double_1;
}
short iot_tls_mqtt_read_variable_length_int( double parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 + double_2;
	double_3 = ceil ( double_4 ) ;
	do
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3;
		double_3 = exp ( double_2 ) ;
		int_1 = int_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	int_2 = int_1 + int_2;
	looper_1 += 1;
	return short_1;
}
char iot_tls_write( long parameter_1,char parameter_2,float parameter_3,char parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_1 = log10 ( double_2 ) ;
	double_2 = acos ( double_1 ) ;
	float_1 = float_2;
	long_1 = has_timer_expired(float_1);

	double_1 = cos ( double_2 ) ;
	char_1 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			if(1)
			{
				double_3 = acos ( double_3 ) ;
				double_4 = iot_tls_mqtt_get_end_of_variable_length_int(float_2,char_1);

				double_4 = ldexp ( double_2 , int_1 ) ;
			}
		}
		if(1)
		{
		}
	}
	double_1 = iot_tls_mqtt_copy_string_from_message(char_1,int_1,int_1);

	double_4 = acos ( double_2 ) ;
	if(1)
	{
		return char_2;
	}
	if(1)
	{
		return char_1;
	}
	return char_2;
	short_1 = iot_tls_mqtt_read_variable_length_int(double_3,char_2);

}
short isTimerExpired( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = cosh ( double_1 ) ;
	long_1 = long_1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float_2 = float_1 * float_1;
		double_1 = atan2 ( double_2 , double_3 ) ;
		if(1)
		{
			double double_1 = 1;
			long long_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_4 = cos ( double_4 ) ;
		}
	}
	else
	{
		double double_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_1 = cosh ( double_5 ) ;
	}
	return short_1;
}
long has_timer_expired( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double_1 = tan ( double_2 ) ;
	double_3 = double_3;
	double_2 = double_4 * double_3;
	return long_1;
}
long iot_tls_read( long parameter_1,unsigned int parameter_2,unsigned int parameter_3,long parameter_4,unsigned int parameter_5)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_4 = 1;
	long long_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_1 = has_timer_expired(float_1);

	double_1 = log10 ( double_1 ) ;
	double_2 = ldexp ( double_1 , int_1 ) ;
	double_1 = fmod ( double_3 , double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_1 = log10 ( double_3 ) ;
		if(1)
		{
			long long_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			double double_3 = 1;
			long long_2 = 1;
			short short_1 = 1;
			float float_4 = 1;
			long long_3 = 1;
			double double_4 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double_1 = sqrt ( double_1 ) ;
			double_3 = acos ( double_4 ) ;
			float_2 = float_2 + float_3;
		}
		if(1)
		{
			return long_2;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		short_1 = isTimerExpired(float_4);

		double_2 = cosh ( double_3 ) ;
		return long_2;
	}
	if(1)
	{
		return long_2;
	}
	else
	{
		return long_3;
	}
}
char _iot_tls_verify_cert(int parameter_2,int parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	double_2 = fmod ( double_3 , double_2 ) ;
	char_1 = char_1;
	double_2 = sinh ( double_3 ) ;
	double_5 = double_3 + double_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long_1 = long_1 * long_1;
	}
	else
	{
		double_1 = asin ( double_3 ) ;
		double_4 = atan2 ( double_3 , double_4 ) ;
	}
	return char_2;
}
short iot_tls_connect( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_7 = 1;
	short short_3 = 1;
	double double_8 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	double double_9 = 1;
	short short_5 = 1;
	long long_4 = 1;
	short short_7 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_8 = 1;
	char char_4 = 1;
	float float_4 = 1;
	double double_11 = 1;
	int int_4 = 1;
	double double_13 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_14 = 1;
	double double_17 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_6 = 1;
	double double_12 = 1;
	double double_15 = 1;
	double double_16 = 1;
	double_1 = sinh ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = ldexp ( double_4 , int_1 ) ;
	double_4 = tanh ( double_2 ) ;
	short_1 = short_2;
	double_5 = acos ( double_2 ) ;
	double_1 = asin ( double_5 ) ;
	if(1)
	{
		return short_2;
	}
	if(1)
	{
		double_3 = exp ( double_5 ) ;
	}
	int_2 = int_1 * int_1;
	double_2 = log10 ( double_4 ) ;
	long_1 = long_1 * long_1;
	double_1 = fabs ( double_5 ) ;
	float_1 = float_1;
	double_2 = pow ( double_6 , double_3 ) ;
	short_1 = short_1 + short_2;
	double_1 = tanh ( double_3 ) ;
	float_2 = float_3;
	double_3 = log ( double_4 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_7 = 1;
		short short_3 = 1;
		double double_8 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_4 = 1;
		double double_9 = 1;
		short short_5 = 1;
		long long_4 = 1;
		short short_7 = 1;
		char char_3 = 1;
		int int_3 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_8 = 1;
		char char_4 = 1;
		float float_4 = 1;
		double double_11 = 1;
		int int_4 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		double double_17 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_6 = 1;
		double double_12 = 1;
		double double_15 = 1;
		double double_16 = 1;
		long_1 = long_2 + long_2;
		return short_1;
	}
	double_7 = double_2 + double_4;
	double_2 = acos ( double_4 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_7 = 1;
		short short_3 = 1;
		double double_8 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_4 = 1;
		double double_9 = 1;
		short short_5 = 1;
		long long_4 = 1;
		short short_7 = 1;
		char char_3 = 1;
		int int_3 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_8 = 1;
		char char_4 = 1;
		float float_4 = 1;
		double double_11 = 1;
		int int_4 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		double double_17 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_6 = 1;
		double double_12 = 1;
		double double_15 = 1;
		double double_16 = 1;
		long_1 = long_3;
		return short_3;
	}
	double_8 = floor ( double_1 ) ;
	double_8 = log10 ( double_5 ) ;
	char_2 = char_1 + char_2;
	if(1)
	{
		double_3 = tanh ( double_5 ) ;
		return short_4;
	}
	double_9 = ceil ( double_6 ) ;
	if(1)
	{
		int_2 = int_2 + int_1;
		double_3 = sqrt ( double_2 ) ;
		return short_3;
	}
	double_6 = atan ( double_5 ) ;
	short_2 = short_3 * short_5;
	long_4 = long_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_7 = 1;
		short short_3 = 1;
		double double_8 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_4 = 1;
		double double_9 = 1;
		short short_5 = 1;
		long long_4 = 1;
		short short_7 = 1;
		char char_3 = 1;
		int int_3 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_8 = 1;
		char char_4 = 1;
		float float_4 = 1;
		double double_11 = 1;
		int int_4 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		double double_17 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_6 = 1;
		double double_12 = 1;
		double double_15 = 1;
		double double_16 = 1;
		short_6 = short_2;
		{
			return short_5;
			return short_5;
			return short_7;
		}
		double_5 = sinh ( double_3 ) ;
	}
	char_3 = _iot_tls_verify_cert(int_3,int_2,char_1);

	double_7 = sinh ( double_10 ) ;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
		return short_5;
	}
	unsigned_int_2 = unsigned_int_1;
	float_3 = float_2 + float_2;
	if(1)
	{
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
		return short_8;
	}
	short_5 = short_4;
	if(1)
	{
		double_10 = atan ( double_8 ) ;
	}
	else
	{
		double_5 = double_10 * double_5;
	}
	double_10 = double_8;
	double_1 = floor ( double_10 ) ;
	if(1)
	{
		double_7 = acos ( double_3 ) ;
		return short_8;
	}
	_iot_tls_set_connect_params(int_3,char_1,char_4,char_1,char_3,int_2,float_4,char_2);

	double_10 = atan2 ( double_6 , double_9 ) ;
	if(1)
	{
		if(1)
		{
			double_1 = atan ( double_9 ) ;
			return short_8;
		}
	}
	if(1)
	{
		double_1 = ceil ( double_7 ) ;
		return short_5;
	}
	if(1)
	{
		double_5 = cosh ( double_1 ) ;
		return short_7;
	}
	double_8 = cos ( double_8 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
	double_4 = cos ( double_10 ) ;
	double_5 = ldexp ( double_11 , int_4 ) ;
	char_3 = char_1 + char_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			short_5 = short_7;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_5 = 1;
				int int_2 = 1;
				long long_1 = 1;
				float float_1 = 1;
				double double_6 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_7 = 1;
				short short_3 = 1;
				double double_8 = 1;
				char char_1 = 1;
				char char_2 = 1;
				short short_4 = 1;
				double double_9 = 1;
				short short_5 = 1;
				long long_4 = 1;
				short short_7 = 1;
				char char_3 = 1;
				int int_3 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				short short_8 = 1;
				char char_4 = 1;
				float float_4 = 1;
				double double_11 = 1;
				int int_4 = 1;
				double double_13 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_14 = 1;
				double double_17 = 1;
				long long_2 = 1;
				long long_3 = 1;
				short short_6 = 1;
				double double_12 = 1;
				double double_15 = 1;
				double double_16 = 1;
				double_12 = log ( double_10 ) ;
			}
			return short_3;
		}
	}
	double_1 = atan2 ( double_9 , double_11 ) ;
	if(1)
	{
		double_9 = asin ( double_7 ) ;
	}
	else
	{
		double_9 = ceil ( double_13 ) ;
	}
	unsigned_int_3 = unsigned_int_5;
	if(1)
	{
		if(1)
		{
			double_8 = fabs ( double_6 ) ;
			double_14 = exp ( double_5 ) ;
			double_10 = floor ( double_2 ) ;
			double_7 = log10 ( double_3 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_5 = 1;
			int int_2 = 1;
			long long_1 = 1;
			float float_1 = 1;
			double double_6 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_7 = 1;
			short short_3 = 1;
			double double_8 = 1;
			char char_1 = 1;
			char char_2 = 1;
			short short_4 = 1;
			double double_9 = 1;
			short short_5 = 1;
			long long_4 = 1;
			short short_7 = 1;
			char char_3 = 1;
			int int_3 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_8 = 1;
			char char_4 = 1;
			float float_4 = 1;
			double double_11 = 1;
			int int_4 = 1;
			double double_13 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_14 = 1;
			double double_17 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_6 = 1;
			double double_12 = 1;
			double double_15 = 1;
			double double_16 = 1;
			double_6 = cos ( double_9 ) ;
			double_15 = fmod ( double_5 , double_15 ) ;
		}
	}
	else
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
		short_2 = short_7;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_7 = 1;
		short short_3 = 1;
		double double_8 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_4 = 1;
		double double_9 = 1;
		short short_5 = 1;
		long long_4 = 1;
		short short_7 = 1;
		char char_3 = 1;
		int int_3 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_8 = 1;
		char char_4 = 1;
		float float_4 = 1;
		double double_11 = 1;
		int int_4 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		double double_17 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_6 = 1;
		double double_12 = 1;
		double double_15 = 1;
		double double_16 = 1;
		double_5 = double_7 + double_14;
		double_1 = tanh ( double_3 ) ;
		double_3 = sqrt ( double_16 ) ;
	}
	double_17 = log ( double_13 ) ;
	return short_2;
}
void _iot_tls_set_connect_params( int parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,int parameter_6,float parameter_7,char parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = cos ( double_2 ) ;
	short_2 = short_1 * short_1;
	double_1 = fabs ( double_2 ) ;
	char_1 = char_2;
	double_3 = log ( double_2 ) ;
	double_2 = log10 ( double_4 ) ;
	int_3 = int_1 * int_2;
}
short iot_tls_init( float parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,double parameter_6,unsigned int parameter_7,float parameter_8)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_5 = 1;
	long long_3 = 1;
	float float_6 = 1;
	long_1 = iot_tls_read(long_2,unsigned_int_1,unsigned_int_2,long_1,unsigned_int_3);

	unsigned_int_2 = unsigned_int_1;
	double_1 = acos ( double_2 ) ;
	double_1 = cos ( double_3 ) ;
	float_1 = iot_tls_disconnect(char_1);

	float_2 = float_2;
	unsigned_int_2 = unsigned_int_2;
	short_1 = iot_tls_connect(double_2,double_4);

	short_1 = iot_tls_is_connected(unsigned_int_1);

	short_3 = short_1 + short_2;
	char_2 = char_1 * char_1;
	float_4 = float_3 + float_4;
	return short_4;
	_iot_tls_set_connect_params(int_1,char_1,char_1,char_1,char_2,int_2,float_5,char_2);

	char_1 = iot_tls_write(long_3,char_2,float_6,char_1,short_1);

	float_1 = iot_tls_destroy();

}
int aws_iot_mqtt_set_connect_params( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	}
	double_1 = log10 ( double_1 ) ;
	long_1 = long_1;
	int_1 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_3 = 1;
			int_3 = int_1;
		}
		double_1 = sinh ( double_1 ) ;
	}
	double_2 = log10 ( double_2 ) ;
	else
	{
		double_1 = double_2 + double_3;
	}
	double_4 = cosh ( double_2 ) ;
	double_1 = fmod ( double_3 , double_5 ) ;
	double_5 = log ( double_3 ) ;
	unsigned_int_3 = unsigned_int_1;
	double_5 = tanh ( double_6 ) ;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_5 = pow ( double_5 , double_7 ) ;
	double_5 = log10 ( double_5 ) ;
	double_4 = ceil ( double_6 ) ;
	double_4 = sinh ( double_2 ) ;
	float_1 = float_2;
	unsigned_int_3 = unsigned_int_3;
}
short aws_iot_mqtt_init( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char char_6 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_4 = 1;
	short short_5 = 1;
	int int_6 = 1;
	float float_3 = 1;
	double double_9 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = double_2;
	double_2 = log ( double_3 ) ;
	double_3 = atan2 ( double_3 , double_1 ) ;
	int_2 = int_1 + int_2;
	if(1)
	{
		double_3 = double_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_4;
		unsigned_int_1 = unsigned_int_2;
		float_1 = float_1;
		init_timer();

		double_4 = cos ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_2;
	short_1 = iot_tls_init(float_1,char_1,char_2,char_3,char_4,double_2,unsigned_int_1,float_1);

	double_4 = acos ( double_2 ) ;
	int_4 = aws_iot_mqtt_set_connect_params(char_5,float_2);

	double_4 = log ( double_4 ) ;
	double_4 = sinh ( double_1 ) ;
	short_2 = short_1 + short_2;
	int_3 = int_5;
	unsigned_int_2 = unsigned_int_1;
	short_3 = short_1;
	char_2 = char_6 + char_5;
	if(1)
	{
		double_1 = atan2 ( double_5 , double_4 ) ;
	}
	float_1 = float_2;
	double_2 = ceil ( double_2 ) ;
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	double_6 = double_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_2 = 1;
		short short_2 = 1;
		int int_5 = 1;
		short short_3 = 1;
		char char_6 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int int_6 = 1;
		float float_3 = 1;
		double double_9 = 1;
		long long_3 = 1;
		long long_4 = 1;
		float_2 = float_3 + float_3;
		double_1 = tanh ( double_3 ) ;
	}
	double_5 = tanh ( double_7 ) ;
	if(1)
	{
		double_4 = cos ( double_5 ) ;
		double_2 = exp ( double_2 ) ;
		double_8 = atan2 ( double_4 , double_8 ) ;
	}
	short_2 = short_4 * short_5;
	double_5 = tanh ( double_5 ) ;
	long_2 = long_2 * long_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_2 = 1;
		short short_2 = 1;
		int int_5 = 1;
		short short_3 = 1;
		char char_6 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_4 = 1;
		short short_5 = 1;
		int int_6 = 1;
		float float_3 = 1;
		double double_9 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double_9 = tan ( double_9 ) ;
		double_2 = asin ( double_9 ) ;
		long_1 = long_1;
		long_3 = long_3 * long_4;
		double_2 = tanh ( double_8 ) ;
	}
	int_5 = int_1 + int_2;
	int_3 = int_3 + int_6;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_1 = sinh ( double_4 ) ;
}
char aws_iot_mqtt_tests_disconnect_callback_handler( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = asin ( double_1 ) ;
}
int aws_iot_mqtt_tests_multi_threading_validation(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	double double_8 = 1;
	int int_5 = 1;
	double double_9 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_11 = 1;
	double double_12 = 1;
	short short_5 = 1;
	double double_13 = 1;
	long long_2 = 1;
	double double_14 = 1;
	double double_15 = 1;
	double double_17 = 1;
	double double_18 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_10 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_16 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_2;
	char_1 = char_1 + char_1;
	char_2 = char_2 * char_1;
	short_1 = short_1 * short_1;
	double_3 = cosh ( double_1 ) ;
	short_2 = short_1;
	double_3 = tan ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_3 = atan ( double_2 ) ;
	double_3 = cos ( double_2 ) ;
	unsigned_int_2 = unsigned_int_2;
	double_2 = double_1 + double_3;
	double_1 = atan ( double_1 ) ;
	double_2 = fabs ( double_1 ) ;
	double_4 = fabs ( double_1 ) ;
	double_2 = cosh ( double_1 ) ;
	double_2 = ceil ( double_4 ) ;
	double_4 = asin ( double_5 ) ;
	double_2 = atan ( double_6 ) ;
	int_2 = int_1 + int_2;
	double_2 = double_6;
	double_3 = ldexp ( double_4 , int_2 ) ;
	long_1 = long_1 + long_1;
	float_2 = float_1 + float_2;
	double_3 = double_4 + double_2;
	double_3 = atan2 ( double_7 , double_6 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		short short_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		double double_8 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		short short_5 = 1;
		double double_13 = 1;
		long long_2 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		double double_18 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_10 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_16 = 1;
		unsigned int unsigned_int_6 = 1;
		short_4 = short_3 * short_1;
		int_3 = int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_5 = atan2 ( double_1 , double_5 ) ;
		}
	}
	unsigned_int_2 = unsigned_int_1;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		short short_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		double double_8 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		short short_5 = 1;
		double double_13 = 1;
		long long_2 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		double double_18 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_10 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_16 = 1;
		unsigned int unsigned_int_6 = 1;
		int_4 = int_2 + int_3;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		float_3 = float_1 + float_1;
		double_8 = floor ( double_2 ) ;
		unsigned_int_3 = unsigned_int_2;
		unsigned_int_4 = unsigned_int_3;
		unsigned_int_3 = unsigned_int_4;
		short_2 = short_4 + short_1;
		int_5 = int_3;
		double_2 = ceil ( double_4 ) ;
		double_5 = double_7 + double_9;
		double_4 = double_7;
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_1 = unsigned_int_3;
		int_6 = int_6 + int_7;
		double_5 = double_6;
		double_4 = fmod ( double_4 , double_9 ) ;
		double_1 = sqrt ( double_6 ) ;
		char_1 = char_3 + char_3;
		int_2 = int_6;
		int_4 = int_1 * int_7;
		double_4 = sinh ( double_8 ) ;
		double_6 = double_7;
		unsigned_int_1 = unsigned_int_5;
		double_10 = log ( double_1 ) ;
		double_1 = double_11;
		double_9 = atan ( double_7 ) ;
		double_2 = sqrt ( double_3 ) ;
		double_12 = asin ( double_2 ) ;
		char controller4vul_82[3];
		fgets(controller4vul_82 ,4 ,stdin);
		if( strcmp( controller4vul_82, "emY") == 0)
		{
			short_5 = aws_iot_mqtt_tests_sub_unsub_thread_runner(uni_para);

			double_4 = pow ( double_3 , double_4 ) ;
			return int_6;
		}
		double_4 = asin ( double_13 ) ;
	}
	int looper_3 = 0;
	while(looper_3 < 1)
	long_2 = long_2;
	looper_3 += 1;
	if(1)
	{
		double_6 = atan ( double_8 ) ;
	}
	else
	{
		double_4 = floor ( double_1 ) ;
		return int_1;
	}
	double_9 = double_7;
	double_11 = log ( double_9 ) ;
	double_9 = log10 ( double_6 ) ;
	double_14 = cos ( double_3 ) ;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		short short_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		double double_8 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		short short_5 = 1;
		double double_13 = 1;
		long long_2 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		double double_18 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_10 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_16 = 1;
		unsigned int unsigned_int_6 = 1;
		double_14 = double_15 * double_13;
		long_3 = long_4;
		double_13 = fmod ( double_13 , double_3 ) ;
	}
	do
	{
		double_1 = double_12;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			double_3 = ceil ( double_15 ) ;
		}
		double_15 = ceil ( double_8 ) ;
		int_7 = int_1;
	}
	int looper_6 = 0;
	while(looper_6 < 1)
	double_11 = tanh ( double_3 ) ;
	looper_6 += 1;
	short_2 = short_1;
	double_13 = double_7;
	double_6 = double_7;
	short_1 = short_1;
	int_1 = int_6 + int_6;
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		short short_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		double double_8 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		short short_5 = 1;
		double double_13 = 1;
		long long_2 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		double double_18 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_10 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_16 = 1;
		unsigned int unsigned_int_6 = 1;
		double_16 = floor ( double_3 ) ;
	}
	double_7 = tan ( double_17 ) ;
	for(int looper_8=0; looper_8<1;looper_8++)
	{
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				int_7 = int_5 * int_7;
			}
		}
	}
	double_9 = sqrt ( double_12 ) ;
	double_4 = cos ( double_3 ) ;
	if(1)
	{
		short_5 = short_5;
		double_7 = sqrt ( double_14 ) ;
		double_12 = atan2 ( double_18 , double_18 ) ;
		int_5 = int_5;
		double_11 = ceil ( double_3 ) ;
		double_17 = acos ( double_18 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		short short_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		double double_8 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		short short_5 = 1;
		double double_13 = 1;
		long long_2 = 1;
		double double_14 = 1;
		double double_15 = 1;
		double double_17 = 1;
		double double_18 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_10 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_16 = 1;
		unsigned int unsigned_int_6 = 1;
		double_18 = double_7;
		float_3 = float_2 + float_3;
		double_5 = acos ( double_4 ) ;
		double_1 = double_14;
		unsigned_int_3 = unsigned_int_6;
	}
	int_4 = int_1 + int_3;
	return int_5;
}
int main()
{
	int uni_para =299;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	double_1 = atan ( double_2 ) ;
	double_2 = log10 ( double_2 ) ;
	char controller4vul_81[1];
	fgets(controller4vul_81 ,2 ,stdin);
	if( strcmp( controller4vul_81, "&") == 0)
	{
		int_1 = aws_iot_mqtt_tests_multi_threading_validation(uni_para);

		double_3 = ceil ( double_3 ) ;
		double_2 = tanh ( double_1 ) ;
		unsigned_int_1 = unsigned_int_1;
		return int_1;
	}
	double_1 = double_4;
	unsigned_int_2 = unsigned_int_2;
	double_4 = pow ( double_3 , double_1 ) ;
	return int_1;
}
