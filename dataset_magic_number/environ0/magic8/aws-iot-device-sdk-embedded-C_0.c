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

long aws_iot_shadow_disconnect( unsigned int parameter_1);
void UpdateStatusCallback( unsigned int parameter_1,char parameter_2,char parameter_3,double parameter_4);
void addToAckWaitList( float parameter_1,short parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5,double parameter_7);
short _aws_iot_mqtt_internal_serialize_publish( long parameter_1,short parameter_2,float parameter_3,float parameter_4,unsigned int parameter_5,char parameter_6,char parameter_7,int parameter_8,char parameter_9,unsigned int parameter_10,long parameter_11);
short _aws_iot_mqtt_internal_publish( float parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4);
double aws_iot_mqtt_publish( long parameter_1,float parameter_2,long parameter_3,float parameter_4);
unsigned int publishToShadowAction( long parameter_1,long parameter_2,char parameter_3);
void incrementSubscriptionCnt( double parameter_1,short parameter_2,unsigned int parameter_3);
void isValidShadowVersionUpdate( unsigned int parameter_1);
char AckStatusCallback( char parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4);
double getNextFreeIndexOfSubscriptionList();
float subscribeToShadowActionAcks( short parameter_1,short parameter_2,unsigned int parameter_3);
double isSubscriptionPresent( long parameter_1,char parameter_2);
char getNextFreeIndexOfAckWaitList( unsigned int parameter_1);
double extractClientToken( float parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4);
short aws_iot_shadow_internal_action( char parameter_1,long parameter_2,long parameter_3,double parameter_4,long parameter_5,short parameter_7,short parameter_8);
void aws_iot_shadow_update( double parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4,char parameter_6,short parameter_7);
void _aws_iot_mqtt_force_client_disconnect( char parameter_1);
long aws_iot_mqtt_internal_serialize_zero( long parameter_1,float parameter_2,float parameter_3,long parameter_4);
long _aws_iot_mqtt_internal_disconnect( char parameter_1);
char aws_iot_mqtt_disconnect( long parameter_1);
void _aws_iot_mqtt_handle_disconnect( int parameter_1);
unsigned int _aws_iot_mqtt_keep_alive( char parameter_1);
float _aws_iot_mqtt_internal_resubscribe( float parameter_1,int uni_para);
char aws_iot_mqtt_resubscribe(int uni_para);
int aws_iot_mqtt_attempt_reconnect(int uni_para);
float _aws_iot_mqtt_handle_reconnect( int parameter_1,int uni_para);
double _aws_iot_mqtt_internal_yield( short parameter_1,unsigned int parameter_2,int uni_para);
char aws_iot_mqtt_yield( double parameter_1,int parameter_2,int uni_para);
double aws_iot_mqtt_internal_deserialize_ack( double parameter_1,short parameter_2,int parameter_3,double parameter_4,long parameter_5);
short _aws_iot_mqtt_deserialize_unsuback( float parameter_1,float parameter_2,unsigned int parameter_3);
long _aws_iot_mqtt_serialize_unsubscribe( unsigned int parameter_1,float parameter_2,long parameter_3,double parameter_4,short parameter_5,unsigned int parameter_6,float parameter_7,long parameter_8);
short _aws_iot_mqtt_internal_unsubscribe( short parameter_1,long parameter_2,unsigned int parameter_3);
long aws_iot_mqtt_unsubscribe( char parameter_1,unsigned int parameter_2,char parameter_3);
int findIndexOfSubscriptionList( short parameter_1);
double topicNameFromThingAndAction( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4);
long unsubscribeFromAcceptedAndRejected( char parameter_1);
void HandleExpiredResponseCallbacks();
int aws_iot_shadow_yield( long parameter_1,short parameter_2,int uni_para);
void parseStringValue( char parameter_1,float parameter_2,float parameter_3,double parameter_4);
long parseDoubleValue( double parameter_1,long parameter_2,short parameter_3);
char parseFloatValue( float parameter_1,char parameter_2,short parameter_3);
long parseUnsignedInteger8Value( int parameter_1,double parameter_2,double parameter_3);
char parseUnsignedInteger16Value( float parameter_1,char parameter_2,long parameter_3);
long parseInteger8Value( long parameter_1,double parameter_2,double parameter_3);
long parseInteger16Value( long parameter_1,long parameter_2,unsigned int parameter_3);
float parseInteger32Value( int parameter_1,long parameter_2,long parameter_3);
short parseBooleanValue( unsigned int parameter_1,long parameter_2,long parameter_3);
void UpdateValueIfNoObject( float parameter_1,float parameter_2,unsigned int parameter_3);
short isJsonKeyMatchingAndUpdateValue( char parameter_1,int parameter_3,char parameter_4,double parameter_5,short parameter_6);
void parseUnsignedInteger32Value( int parameter_1,short parameter_2,char parameter_3);
unsigned int jsoneq( float parameter_1,float parameter_2,long parameter_3);
char extractVersionNumber( unsigned int parameter_1,double parameter_3,float parameter_4);
double jsmn_parse_primitive( unsigned int parameter_1,short parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5);
unsigned int jsmn_fill_token( int parameter_1,char parameter_2,int parameter_3,int parameter_4);
void jsmn_parse_string( short parameter_1,short parameter_2,long parameter_3,float parameter_4,double parameter_5);
long jsmn_alloc_token( char parameter_1,long parameter_2,unsigned int parameter_3);
int jsmn_parse();
void jsmn_init();
void isJsonValidAndParse( int parameter_1,short parameter_2,short parameter_4);
short shadow_delta_callback( float parameter_1,char parameter_2,int parameter_3,long parameter_4);
long registerJsonTokenOnDelta( unsigned int parameter_1);
double aws_iot_shadow_register_delta( unsigned int parameter_1,long parameter_2);
void checkReturnValueOfSnPrintf( short parameter_1,double parameter_2);
char FillWithClientTokenSize( char parameter_1,int parameter_2);
char aws_iot_fill_with_client_token( char parameter_1,short parameter_2);
float buildJSONForReported( char parameter_1,short parameter_2,short parameter_3,double parameter_4);
char DeltaCallback( unsigned int parameter_1,unsigned int parameter_2,char parameter_3);
long aws_iot_mqtt_autoreconnect_set_status( long parameter_1,char parameter_2);
float aws_iot_shadow_set_autoreconnect_status( long parameter_1,unsigned int parameter_2);
int _aws_iot_mqtt_deserialize_suback( unsigned int parameter_1,float parameter_2,unsigned int parameter_3,float parameter_4,short parameter_5,long parameter_6);
long _aws_iot_mqtt_get_free_message_handler_index( short parameter_1);
long _aws_iot_mqtt_serialize_subscribe( long parameter_1,long parameter_2,long parameter_3,double parameter_4,int parameter_5,char parameter_6,long parameter_7,float parameter_8,int parameter_9);
void aws_iot_mqtt_get_next_packet_id( float parameter_1);
unsigned int _aws_iot_mqtt_internal_subscribe( short parameter_1,double parameter_2,int parameter_3,float parameter_4,short parameter_5);
int aws_iot_mqtt_is_client_connected( int parameter_1);
int aws_iot_mqtt_subscribe( float parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,long parameter_5);
void initializeRecords( char parameter_1);
double _aws_iot_mqtt_deserialize_connack( short parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4);
void countdown_sec( short parameter_1,unsigned int parameter_2);
long aws_iot_mqtt_internal_serialize_ack( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,short parameter_5,short parameter_6);
float _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,long parameter_3);
void _aws_iot_mqtt_internal_deliver_message( float parameter_1,char parameter_2,float parameter_3,short parameter_4);
char aws_iot_mqtt_internal_read_uint16_t( double parameter_1);
void _aws_iot_mqtt_read_string_with_len( char parameter_1,short parameter_2,long parameter_3,int parameter_4);
float aws_iot_mqtt_internal_decode_remaining_length_from_buffer( long parameter_1,double parameter_2,long parameter_3);
char aws_iot_mqtt_internal_read_char( unsigned int parameter_1);
unsigned int aws_iot_mqtt_internal_deserialize_publish( double parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4,char parameter_5,float parameter_6,float parameter_7,double parameter_8,float parameter_9,int parameter_10);
char _aws_iot_mqtt_internal_handle_publish( unsigned int parameter_1,int parameter_2);
long _aws_iot_mqtt_internal_decode_packet_remaining_len( short parameter_1,float parameter_2,long parameter_3,int parameter_4);
unsigned int _aws_iot_mqtt_internal_readWrapper( long parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4,char parameter_5);
long _aws_iot_mqtt_internal_read_packet( int parameter_1,short parameter_2,float parameter_3);
int aws_iot_mqtt_internal_cycle_read( long parameter_1,long parameter_2,double parameter_3);
float aws_iot_mqtt_internal_wait_for_read( float parameter_1,long parameter_2,short parameter_3,int uni_para);
int aws_iot_mqtt_internal_send_packet( int parameter_1,float parameter_2,double parameter_3);
void aws_iot_mqtt_internal_write_uint_16( long parameter_1,char parameter_2);
void aws_iot_mqtt_internal_write_utf8_string( long parameter_1,short parameter_2,double parameter_3);
float aws_iot_mqtt_internal_write_len_to_buffer( unsigned int parameter_1,short parameter_2);
void aws_iot_mqtt_internal_write_char( short parameter_1,unsigned int parameter_2);
short aws_iot_mqtt_internal_init_header( char parameter_1,char parameter_2,float parameter_3,long parameter_4,long parameter_5);
char aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( short parameter_1);
float _aws_iot_get_connect_packet_length( long parameter_1);
long _aws_iot_mqtt_serialize_connect( double parameter_1,int parameter_2,long parameter_3,double parameter_4);
void countdown_ms( short parameter_1,float parameter_2);
int _aws_iot_mqtt_internal_connect( long parameter_1,short parameter_2);
int aws_iot_mqtt_set_client_state( int parameter_1,char parameter_2,double parameter_3);
short _aws_iot_mqtt_is_client_state_valid_for_connect( long parameter_1);
void aws_iot_mqtt_get_client_state( long parameter_1);
short aws_iot_mqtt_internal_flushBuffers( int parameter_1);
long aws_iot_mqtt_connect( float parameter_1,int parameter_2);
void aws_iot_shadow_connect( char parameter_1,long parameter_2);
void initDeltaTokens();
void aws_iot_shadow_reset_last_received_version();
void resetClientTokenSequenceNum();
void init_timer();
float iot_tls_destroy( unsigned int parameter_1);
float iot_tls_is_connected( int parameter_1);
short iot_tls_disconnect( int parameter_1);
unsigned int iot_tls_mqtt_get_fixed_uint16_from_message( short parameter_1,double parameter_2);
long iot_tls_mqtt_copy_string_from_message( char parameter_1,double parameter_2,float parameter_3);
double iot_tls_mqtt_get_end_of_variable_length_int( long parameter_1,float parameter_2);
int iot_tls_mqtt_read_variable_length_int( int parameter_1,unsigned int parameter_2);
short iot_tls_write( unsigned int parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,short parameter_5);
float isTimerExpired( short parameter_1);
char has_timer_expired( unsigned int parameter_1);
int iot_tls_read( int parameter_1,float parameter_2,int parameter_3,short parameter_4,double parameter_5);
long _iot_tls_verify_cert(double parameter_2,int parameter_3,char parameter_4);
int iot_tls_connect( char parameter_1,long parameter_2);
void _iot_tls_set_connect_params( double parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,short parameter_6,float parameter_7,float parameter_8);
void iot_tls_init( double parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,short parameter_6,int parameter_7,unsigned int parameter_8);
long aws_iot_mqtt_set_connect_params( float parameter_1,short parameter_2);
int aws_iot_mqtt_init( int parameter_1,short parameter_2);
int aws_iot_shadow_init( float parameter_1,short parameter_2);
void parseInputArgsForConnectParams( int parameter_1,char parameter_2);
long aws_iot_shadow_disconnect( unsigned int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	return long_1;
	char_1 = aws_iot_mqtt_disconnect(long_2);

}
void UpdateStatusCallback( unsigned int parameter_1,char parameter_2,char parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_1;
	double_1 = acos ( double_1 ) ;
	double_2 = tan ( double_1 ) ;
	double_3 = atan ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		double_3 = floor ( double_3 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double_3 = ceil ( double_4 ) ;
	}
}
void addToAckWaitList( float parameter_1,short parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5,double parameter_7)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = int_2;
	countdown_sec(short_1,unsigned_int_1);

	int_1 = int_1;
	double_1 = fmod ( double_2 , double_1 ) ;
	init_timer();

	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_1 * double_1;
	double_3 = floor ( double_2 ) ;
	int_1 = int_2;
	double_2 = fmod ( double_4 , double_4 ) ;
}
short _aws_iot_mqtt_internal_serialize_publish( long parameter_1,short parameter_2,float parameter_3,float parameter_4,unsigned int parameter_5,char parameter_6,char parameter_7,int parameter_8,char parameter_9,unsigned int parameter_10,long parameter_11)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = cosh ( double_2 ) ;
	double_2 = ldexp ( double_2 , int_1 ) ;
	short_1 = aws_iot_mqtt_internal_init_header(char_1,char_1,float_1,long_1,long_2);

	double_1 = log10 ( double_2 ) ;
	int_2 = int_1;
	double_1 = log10 ( double_3 ) ;
	if(1)
	{
		short_3 = short_1 * short_2;
	}
	double_1 = ldexp ( double_4 , int_2 ) ;
	char_2 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_3);

	double_2 = sinh ( double_2 ) ;
	double_1 = atan ( double_5 ) ;
	if(1)
	{
		short_1 = short_2 * short_2;
	}
	if(1)
	{
		double_1 = fabs ( double_1 ) ;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double_2 = sqrt ( double_1 ) ;
	}
	double_6 = tanh ( double_1 ) ;
	int_2 = int_2 + int_3;
	int_4 = int_3 + int_3;
	double_7 = ceil ( double_2 ) ;
	if(1)
	{
		float_2 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_1,short_1);

		aws_iot_mqtt_internal_write_utf8_string(long_1,short_2,double_5);

		double_6 = ldexp ( double_1 , int_2 ) ;
	}
	double_6 = atan ( double_4 ) ;
	aws_iot_mqtt_internal_write_uint_16(long_3,char_2);

	short_3 = short_2 * short_1;
	aws_iot_mqtt_internal_write_char(short_2,unsigned_int_1);

	double_3 = tan ( double_1 ) ;
	long_4 = long_1;
}
short _aws_iot_mqtt_internal_publish( float parameter_1,short parameter_2,long parameter_3,unsigned int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	long long_4 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = acos ( double_1 ) ;
	short_1 = _aws_iot_mqtt_internal_serialize_publish(long_1,short_1,float_1,float_2,unsigned_int_1,char_1,char_2,int_1,char_3,unsigned_int_2,long_2);

	double_1 = double_1 * double_1;
	long_2 = long_2;
	long_3 = long_1 * long_2;
	unsigned_int_2 = unsigned_int_3;
	double_1 = floor ( double_1 ) ;
	double_1 = aws_iot_mqtt_internal_deserialize_ack(double_2,short_1,int_1,double_2,long_2);

	double_1 = atan ( double_3 ) ;
	if(1)
	{
		double_1 = tan ( double_3 ) ;
	}
	double_3 = asin ( double_4 ) ;
	if(1)
	{
		init_timer();

		double_2 = ldexp ( double_2 , int_2 ) ;
	}
	aws_iot_mqtt_get_next_packet_id(float_2);

	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
		double_1 = cosh ( double_4 ) ;
	}
	if(1)
	{
		countdown_ms(short_1,float_3);

		unsigned_int_1 = unsigned_int_4;
		if(1)
		{
			long_1 = long_3 * long_4;
		}
		int_2 = aws_iot_mqtt_internal_send_packet(int_1,float_4,double_1);

		float_2 = float_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			char char_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_3 = 1;
			long long_4 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			double double_5 = 1;
			double_1 = fabs ( double_5 ) ;
		}
	}
	unsigned_int_5 = unsigned_int_5;
	float_4 = aws_iot_mqtt_internal_wait_for_read(float_2,long_4,short_2,49);

}
double aws_iot_mqtt_publish( long parameter_1,float parameter_2,long parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_8 = 1;
	double_1 = sinh ( double_2 ) ;
	int_1 = aws_iot_mqtt_is_client_connected(int_2);

	double_4 = double_2 + double_3;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_9 = 1;
		double double_10 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		double double_8 = 1;
		short_1 = _aws_iot_mqtt_internal_publish(float_1,short_2,long_1,unsigned_int_3);

		double_4 = floor ( double_5 ) ;
	}
	if(1)
	{
		aws_iot_mqtt_get_client_state(long_1);

		double_2 = log10 ( double_2 ) ;
	}
	double_4 = tan ( double_6 ) ;
	if(1)
	{
		double_3 = double_6;
	}
	double_3 = atan2 ( double_7 , double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_9 = 1;
		double double_10 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		double double_8 = 1;
		double_8 = log10 ( double_9 ) ;
	}
	double_7 = double_10 + double_9;
	int_1 = aws_iot_mqtt_set_client_state(int_2,char_1,double_10);

	double_3 = sqrt ( double_7 ) ;
	if(1)
	{
		double_1 = cos ( double_7 ) ;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
}
unsigned int publishToShadowAction( long parameter_1,long parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int_3 = int_1 * int_2;
	double_1 = tan ( double_2 ) ;
	double_3 = topicNameFromThingAndAction(char_1,unsigned_int_1,unsigned_int_2,float_1);

	double_1 = pow ( double_4 , double_5 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	double_4 = double_4 * double_6;
	double_7 = ceil ( double_2 ) ;
	short_2 = short_1 + short_1;
	double_4 = aws_iot_mqtt_publish(long_1,float_2,long_1,float_1);

	double_3 = acos ( double_2 ) ;
	int_1 = int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	return unsigned_int_1;
}
void incrementSubscriptionCnt( double parameter_1,short parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_1 = fabs ( double_2 ) ;
	unsigned_int_2 = unsigned_int_2;
	float_3 = float_1 + float_2;
	long_2 = long_1 + long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_3 = 1;
				long long_3 = 1;
				double_1 = topicNameFromThingAndAction(char_1,unsigned_int_1,unsigned_int_3,float_2);

				double_1 = tan ( double_3 ) ;
				long_3 = long_2;
			}
		}
	}
}
void isValidShadowVersionUpdate( unsigned int parameter_1)
{
	if(1)
	{
	}
}
char AckStatusCallback( char parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	double double_7 = 1;
	char char_5 = 1;
	double double_8 = 1;
	double_1 = cos ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	short_1 = short_1;
	double_1 = acos ( double_2 ) ;
	float_1 = float_1 + float_2;
	double_3 = double_3;
	long_1 = long_2;
	if(1)
	{
		double_4 = sqrt ( double_4 ) ;
		return char_1;
	}
	unsigned_int_1 = unsigned_int_1;
	double_4 = atan ( double_4 ) ;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_3 = 1;
		char char_3 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		int int_2 = 1;
		double double_7 = 1;
		char char_5 = 1;
		double double_8 = 1;
		double_4 = extractClientToken(float_1,unsigned_int_2,char_2,int_1);

		int_2 = int_2 + int_3;
		return char_3;
	}
	if(1)
	{
		short_2 = short_2;
		if(1)
		{
			if(1)
			{
				double_5 = floor ( double_6 ) ;
			}
		}
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				if(1)
				{
					isJsonValidAndParse(int_3,short_3,short_2);

					double_6 = double_6 + double_1;
					if(1)
					{
						isValidShadowVersionUpdate(unsigned_int_1);

						double_3 = pow ( double_6 , double_2 ) ;
					}
					if(1)
					{
						long_2 = unsubscribeFromAcceptedAndRejected(char_4);

						double_5 = exp ( double_4 ) ;
					}
					if(1)
					{
						double double_1 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						short short_1 = 1;
						double double_2 = 1;
						float float_1 = 1;
						float float_2 = 1;
						double double_3 = 1;
						long long_1 = 1;
						long long_2 = 1;
						double double_4 = 1;
						char char_1 = 1;
						char char_2 = 1;
						int int_1 = 1;
						int int_3 = 1;
						char char_3 = 1;
						short short_2 = 1;
						double double_5 = 1;
						double double_6 = 1;
						short short_3 = 1;
						char char_4 = 1;
						unsigned int unsigned_int_3 = 1;
						float float_3 = 1;
						int int_2 = 1;
						double double_7 = 1;
						char char_5 = 1;
						double double_8 = 1;
						if(1)
						{
							double_5 = double_6 * double_7;
						}
						char_2 = char_4 * char_5;
						char_2 = extractVersionNumber(unsigned_int_3,double_6,float_3);

						double_8 = fmod ( double_5 , double_7 ) ;
						return char_1;
					}
				}
			}
		}
	}
}
double getNextFreeIndexOfSubscriptionList()
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			char char_3 = 1;
			char_3 = char_3;
			return double_1;
		}
	}
	return double_1;
}
float subscribeToShadowActionAcks( short parameter_1,short parameter_2,unsigned int parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	char char_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = has_timer_expired(unsigned_int_1);

	long_1 = aws_iot_mqtt_unsubscribe(char_2,unsigned_int_1,char_1);

	unsigned_int_2 = unsigned_int_2;
	double_1 = sqrt ( double_1 ) ;
	double_1 = acos ( double_1 ) ;
	double_1 = double_2;
	double_3 = double_1 + double_1;
	double_4 = acos ( double_3 ) ;
	double_2 = getNextFreeIndexOfSubscriptionList();

	countdown_sec(short_1,unsigned_int_2);

	double_4 = fmod ( double_5 , double_2 ) ;
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		int int_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		char char_3 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_4 = 1;
		double_6 = fabs ( double_3 ) ;
		char_3 = char_2;
		if(1)
		{
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			float float_1 = 1;
			int int_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_7 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_4 = 1;
			char char_3 = 1;
			float float_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_4 = 1;
			init_timer();

			float_1 = float_2;
			int_1 = int_1;
			int_2 = int_2 + int_1;
			double_2 = fabs ( double_2 ) ;
			if(1)
			{
				char char_1 = 1;
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				short short_1 = 1;
				double double_5 = 1;
				double double_6 = 1;
				float float_1 = 1;
				int int_3 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_7 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_5 = 1;
				float float_4 = 1;
				char char_3 = 1;
				float float_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_8 = 1;
				unsigned int unsigned_int_4 = 1;
				int_3 = aws_iot_mqtt_subscribe(float_3,unsigned_int_3,short_1,double_7,long_2);

				double_1 = double_8 * double_4;
				double_1 = ldexp ( double_3 , int_2 ) ;
				double_3 = double_6;
				unsigned_int_4 = unsigned_int_4;
				char_2 = AckStatusCallback(char_1,char_1,long_2,unsigned_int_5);

				double_1 = double_2;
				int looper_1 = 0;
				while(looper_1 < 1)
				{
					looper_1 += 1;
					double_6 = double_2 + double_1;
				}
			}
		}
	}
	if(1)
	{
		if(1)
		{
			double_4 = floor ( double_6 ) ;
			if(1)
			{
				double_2 = tan ( double_7 ) ;
			}
		}
		if(1)
		{
			double_7 = topicNameFromThingAndAction(char_1,unsigned_int_3,unsigned_int_1,float_4);

			double_5 = floor ( double_3 ) ;
		}
	}
	return float_1;
}
double isSubscriptionPresent( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char char_4 = 1;
	double_1 = sinh ( double_1 ) ;
	double_2 = double_2;
	float_1 = float_1 * float_1;
	double_1 = topicNameFromThingAndAction(char_1,unsigned_int_1,unsigned_int_1,float_2);

	double_2 = log ( double_1 ) ;
	double_2 = ceil ( double_1 ) ;
	float_3 = float_2;
	char_2 = char_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				double_2 = fabs ( double_1 ) ;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_3 = 1;
				char char_4 = 1;
				char_3 = char_4;
			}
		}
	}
	if(1)
	{
		return double_3;
	}
	return double_2;
}
char getNextFreeIndexOfAckWaitList( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_2;
	double_1 = fabs ( double_1 ) ;
	if(1)
	{
		return char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			char char_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_2 = cos ( double_3 ) ;
			double_2 = cosh ( double_3 ) ;
		}
	}
	return char_1;
}
double extractClientToken( float parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = cos ( double_2 ) ;
	int_3 = int_1 + int_2;
	jsmn_init();

	double_1 = fabs ( double_2 ) ;
	int_1 = jsmn_parse();

	double_3 = log10 ( double_1 ) ;
	double_1 = double_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_7 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_4 = atan ( double_5 ) ;
		return double_2;
	}
	if(1)
	{
		return double_6;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_7 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int_3 = int_3 * int_2;
			long_1 = long_1 + long_2;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_7 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_4 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
				double_7 = acos ( double_1 ) ;
				return double_2;
			}
			else
			{
				double_5 = pow ( double_6 , double_3 ) ;
				return double_7;
			}
		}
	}
	return double_7;
	unsigned_int_1 = jsoneq(float_1,float_2,long_1);

}
short aws_iot_shadow_internal_action( char parameter_1,long parameter_2,long parameter_3,double parameter_4,long parameter_5,short parameter_7,short parameter_8)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	int int_2 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_7 = 1;
	double_1 = log ( double_1 ) ;
	int_1 = int_1;
	double_1 = sqrt ( double_2 ) ;
	double_3 = extractClientToken(float_1,unsigned_int_1,char_1,int_1);

	double_3 = log10 ( double_4 ) ;
	double_3 = double_5;
	unsigned_int_1 = publishToShadowAction(long_1,long_1,char_2);

	double_3 = fabs ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_1 = 1;
		char char_2 = 1;
		float float_3 = 1;
		long long_2 = 1;
		char char_3 = 1;
		double double_6 = 1;
		int int_2 = 1;
		float float_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_7 = 1;
		float_2 = float_3;
	}
	char_1 = getNextFreeIndexOfAckWaitList(unsigned_int_1);

	double_2 = asin ( double_5 ) ;
	if(1)
	{
		if(1)
		{
			double_1 = isSubscriptionPresent(long_2,char_3);

			double_5 = double_4 * double_6;
		}
		if(1)
		{
			if(1)
			{
				int_2 = int_1 * int_1;
			}
			else
			{
				double double_1 = 1;
				int int_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_1 = 1;
				double double_4 = 1;
				double double_5 = 1;
				long long_1 = 1;
				char char_2 = 1;
				float float_3 = 1;
				long long_2 = 1;
				char char_3 = 1;
				double double_6 = 1;
				int int_2 = 1;
				float float_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_2 = 1;
				double double_7 = 1;
				float_4 = subscribeToShadowActionAcks(short_1,short_1,unsigned_int_1);

				double_4 = fabs ( double_7 ) ;
			}
		}
		else
		{
			incrementSubscriptionCnt(double_6,short_2,unsigned_int_2);

			double_5 = double_2;
		}
	}
	if(1)
	{
		addToAckWaitList(float_3,short_1,char_3,int_2,unsigned_int_1,double_5);

		double_1 = cos ( double_3 ) ;
	}
	if(1)
	{
		double_5 = double_5 * double_5;
	}
	float_3 = float_1 * float_4;
}
void aws_iot_shadow_update( double parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4,char parameter_6,short parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	if(1)
	{
		double_2 = cos ( double_1 ) ;
	}
	if(1)
	{
		double_2 = floor ( double_3 ) ;
	}
	int_1 = aws_iot_mqtt_is_client_connected(int_2);

	unsigned_int_1 = unsigned_int_1;
	short_1 = aws_iot_shadow_internal_action(char_1,long_1,long_2,double_3,long_2,short_2,short_3);

	unsigned_int_1 = unsigned_int_2;
}
void _aws_iot_mqtt_force_client_disconnect( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	float_2 = float_1 * float_2;
	double_1 = atan2 ( double_1 , double_1 ) ;
	double_1 = acos ( double_1 ) ;
}
long aws_iot_mqtt_internal_serialize_zero( long parameter_1,float parameter_2,float parameter_3,long parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_2 = log ( double_3 ) ;
	aws_iot_mqtt_internal_write_char(short_1,unsigned_int_1);

	int_3 = int_2 + int_3;
	double_4 = acos ( double_1 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		int_3 = int_3;
	}
	short_1 = aws_iot_mqtt_internal_init_header(char_1,char_1,float_1,long_1,long_1);

	float_3 = float_2 * float_1;
	float_1 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_1,short_2);

	short_1 = short_2;
	if(1)
	{
		short_2 = short_2 * short_2;
	}
	double_5 = fmod ( double_3 , double_3 ) ;
	double_1 = sqrt ( double_4 ) ;
	double_5 = sinh ( double_4 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
long _aws_iot_mqtt_internal_disconnect( char parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = aws_iot_mqtt_internal_send_packet(int_1,float_1,double_1);

	double_1 = tan ( double_2 ) ;
	double_1 = double_1 * double_3;
	init_timer();

	double_4 = cosh ( double_5 ) ;
	float_1 = float_1 + float_2;
	double_5 = tan ( double_2 ) ;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "+") < 0)
	{
		double_2 = tan ( double_1 ) ;
	}
	countdown_ms(short_1,float_3);

	double_2 = fabs ( double_1 ) ;
	double_1 = floor ( double_1 ) ;
	if(1)
	{
		long_1 = aws_iot_mqtt_internal_serialize_zero(long_2,float_3,float_4,long_1);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	double_1 = atan ( double_1 ) ;
	double_1 = fabs ( double_5 ) ;
	if(1)
	{
		int int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_2 = 1;
		short short_1 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	double_2 = double_6;
}
char aws_iot_mqtt_disconnect( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = aws_iot_mqtt_is_client_connected(int_2);

	double_1 = cos ( double_1 ) ;
	long_1 = long_2;
	char_1 = char_1;
	if(1)
	{
		double_1 = exp ( double_2 ) ;
	}
	char_2 = char_3;
	if(1)
	{
		int_1 = aws_iot_mqtt_set_client_state(int_2,char_1,double_1);

		double_1 = pow ( double_1 , double_3 ) ;
	}
	double_4 = atan2 ( double_4 , double_2 ) ;
	char controller_3[4];
	fgets(controller_3 ,4 ,stdin);
	if( strcmp( controller_3, "H6n") < 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_6 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	long_1 = _aws_iot_mqtt_internal_disconnect(char_1);

	double_5 = double_2 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_6 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int_3 = int_4;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_6 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_3 = ldexp ( double_4 , int_5 ) ;
	}
	double_4 = ldexp ( double_5 , int_6 ) ;
	aws_iot_mqtt_get_client_state(long_3);

}
void _aws_iot_mqtt_handle_disconnect( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_2;
	float_1 = float_2;
	float_4 = float_1 + float_3;
	if(1)
	{
		double_1 = double_2 + double_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	char_1 = aws_iot_mqtt_disconnect(long_1);

	double_2 = atan ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	_aws_iot_mqtt_force_client_disconnect(char_1);

}
unsigned int _aws_iot_mqtt_keep_alive( char parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	double double_7 = 1;
	char char_4 = 1;
	double_1 = sqrt ( double_1 ) ;
	long_1 = aws_iot_mqtt_internal_serialize_zero(long_1,float_1,float_2,long_2);

	char_1 = char_1 * char_2;
	double_2 = sqrt ( double_2 ) ;
	double_3 = ldexp ( double_1 , int_1 ) ;
	if(1)
	{
		double_3 = sinh ( double_2 ) ;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double_3 = log10 ( double_3 ) ;
	}
	if(1)
	{
		char_2 = char_3;
		short_1 = short_1;
	}
	double_2 = exp ( double_1 ) ;
	countdown_sec(short_1,unsigned_int_2);

	int_2 = int_3;
	long_1 = long_2 + long_2;
	double_3 = pow ( double_4 , double_1 ) ;
	if(1)
	{
		double_6 = double_5 * double_3;
	}
	double_4 = log10 ( double_5 ) ;
	if(1)
	{
		countdown_ms(short_2,float_2);

		double_5 = tanh ( double_3 ) ;
		init_timer();

		int_1 = aws_iot_mqtt_internal_send_packet(int_3,float_1,double_4);

		double_2 = cos ( double_5 ) ;
	}
	_aws_iot_mqtt_handle_disconnect(int_2);

	double_7 = double_6;
	char_3 = has_timer_expired(unsigned_int_1);

	char_2 = char_4 + char_3;
	double_3 = sinh ( double_6 ) ;
}
float _aws_iot_mqtt_internal_resubscribe( float parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_1 + long_1;
	double_1 = cos ( double_1 ) ;
	double_1 = asin ( double_1 ) ;
	int_1 = int_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = tanh ( double_3 ) ;
	double_3 = ldexp ( double_3 , int_2 ) ;
	double_4 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		char controller4vul_80[5];
		fgets(controller4vul_80 ,6 ,stdin);
		if( strcmp( controller4vul_80, ">YNcz") == 0)
		{
			float_1 = aws_iot_mqtt_internal_wait_for_read(float_1,long_1,short_1,uni_para);

		}
		double_3 = log ( double_1 ) ;
		double_3 = cosh ( double_5 ) ;
		double_1 = double_1 + double_5;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_4 = 1;
			float float_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			char_1 = char_2;
		}
		double_3 = tan ( double_4 ) ;
		if(1)
		{
			double_2 = cosh ( double_6 ) ;
		}
		double_7 = floor ( double_3 ) ;
		if(1)
		{
			double_7 = fmod ( double_2 , double_6 ) ;
		}
		unsigned_int_3 = unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_4 = 1;
			float float_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int_3 = int_2 * int_3;
		}
	}
	double_4 = floor ( double_5 ) ;
}
char aws_iot_mqtt_resubscribe(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = exp ( double_1 ) ;
	double_1 = atan2 ( double_2 , double_1 ) ;
	char controller4vul_79[2];
	fgets(controller4vul_79 ,3 ,stdin);
	if( strcmp( controller4vul_79, "G!") == 0)
	{
		float_1 = _aws_iot_mqtt_internal_resubscribe(float_2,uni_para);

		double_2 = cosh ( double_1 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		double_3 = floor ( double_3 ) ;
	}
	double_1 = sqrt ( double_3 ) ;
	if(1)
	{
		double_2 = pow ( double_4 , double_5 ) ;
	}
	double_4 = cosh ( double_2 ) ;
	int_1 = int_1;
	if(1)
	{
		double_4 = double_5;
	}
	double_4 = atan ( double_4 ) ;
}
int aws_iot_mqtt_attempt_reconnect(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = fabs ( double_1 ) ;
	double_1 = cos ( double_2 ) ;
	char controller4vul_78[2];
	fgets(controller4vul_78 ,3 ,stdin);
	if( strcmp( controller4vul_78, "H=") == 0)
	{
		char_1 = aws_iot_mqtt_resubscribe(uni_para);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = fmod ( double_3 , double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = atan2 ( double_1 , double_3 ) ;
		unsigned_int_2 = unsigned_int_1;
	}
	double_4 = tanh ( double_2 ) ;
	if(1)
	{
		double_4 = floor ( double_4 ) ;
	}
	double_4 = cosh ( double_1 ) ;
}
float _aws_iot_mqtt_handle_reconnect( int parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_2;
	double_1 = log10 ( double_2 ) ;
	char controller4vul_77[2];
	fgets(controller4vul_77 ,3 ,stdin);
	if( strcmp( controller4vul_77, "+e") == 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_2 = aws_iot_mqtt_attempt_reconnect(uni_para);

		short_2 = short_1 + short_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		double_3 = asin ( double_2 ) ;
	}
	if(1)
	{
		double_2 = ldexp ( double_2 , int_2 ) ;
		if(1)
		{
			double_2 = cosh ( double_4 ) ;
			if(1)
			{
				double_1 = log ( double_1 ) ;
			}
			double_4 = tan ( double_2 ) ;
		}
	}
	double_2 = double_3 * double_2;
	if(1)
	{
		double_4 = double_5;
	}
	double_1 = tanh ( double_2 ) ;
	double_5 = tan ( double_6 ) ;
}
double _aws_iot_mqtt_internal_yield( short parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	double double_7 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = exp ( double_2 ) ;
	double_4 = double_3 * double_4;
	int_1 = int_2;
	long_1 = long_1;
	double_5 = tan ( double_4 ) ;
	double_4 = ldexp ( double_4 , int_3 ) ;
	double_3 = atan ( double_3 ) ;
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
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_6 = 1;
		int int_4 = 1;
		double double_7 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_6 = fmod ( double_3 , double_1 ) ;
		if(1)
		{
			if(1)
			{
				double_6 = sinh ( double_4 ) ;
			}
			unsigned_int_1 = unsigned_int_2;
		}
		double_3 = cos ( double_3 ) ;
		if(1)
		{
			double_2 = sinh ( double_3 ) ;
		}
		if(1)
		{
			if(1)
			{
				int_1 = int_1 * int_4;
			}
		}
		char controller4vul_74[4];
		fgets(controller4vul_74 ,5 ,stdin);
		if( strcmp( controller4vul_74, "HoR;") == 0)
		{
			int_4 = int_4 * int_4;
			char controller4vul_75[4];
			fgets(controller4vul_75 ,5 ,stdin);
			if( strcmp( controller4vul_75, "-ED;") < 0)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				double double_5 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_6 = 1;
				int int_4 = 1;
				double double_7 = 1;
				long long_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double_7 = double_4 + double_1;
				char controller4vul_76[4];
				fgets(controller4vul_76 ,5 ,stdin);
				if( strcmp( controller4vul_76, "&>5?") == 0)
				{
					float_1 = _aws_iot_mqtt_handle_reconnect(int_2,uni_para);

					double_4 = ceil ( double_6 ) ;
				}
				int_1 = int_2;
				long_1 = long_2;
				char_1 = char_2;
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
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	looper_1 += 1;
	unsigned_int_2 = unsigned_int_5;
}
char aws_iot_mqtt_yield( double parameter_1,int parameter_2,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_2 = short_1 + short_2;
	float_1 = float_1 * float_1;
	char controller4vul_73[2];
	fgets(controller4vul_73 ,3 ,stdin);
	if( strcmp( controller4vul_73, "&&") == 0)
	{
		double_1 = _aws_iot_mqtt_internal_yield(short_2,unsigned_int_1,uni_para);

		double_1 = double_2 * double_2;
	}
	double_3 = asin ( double_4 ) ;
	if(1)
	{
		double_5 = sqrt ( double_6 ) ;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			double_2 = atan2 ( double_4 , double_3 ) ;
		}
		if(1)
		{
			short_2 = short_1 + short_1;
		}
		long_2 = long_1 * long_2;
		if(1)
		{
			double_3 = double_3 + double_5;
		}
	}
	double_6 = floor ( double_1 ) ;
	if(1)
	{
		double_5 = exp ( double_3 ) ;
		if(1)
		{
			double_4 = log10 ( double_3 ) ;
		}
	}
	double_6 = fabs ( double_1 ) ;
}
double aws_iot_mqtt_internal_deserialize_ack( double parameter_1,short parameter_2,int parameter_3,double parameter_4,long parameter_5)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float_1 = float_1 + float_1;
	int_1 = int_1;
	double_1 = double_1 + double_2;
	short_1 = short_1 * short_1;
	char_1 = aws_iot_mqtt_internal_read_char(unsigned_int_1);

	long_1 = long_2;
	double_3 = floor ( double_3 ) ;
	double_1 = cosh ( double_3 ) ;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		char_1 = aws_iot_mqtt_internal_read_uint16_t(double_3);

		double_2 = log10 ( double_1 ) ;
	}
	int_1 = int_2;
	double_1 = cosh ( double_1 ) ;
	short_2 = short_1;
	double_1 = exp ( double_2 ) ;
	if(1)
	{
		double_1 = floor ( double_1 ) ;
	}
	double_4 = fabs ( double_3 ) ;
	double_3 = acos ( double_2 ) ;
	if(1)
	{
		double_2 = double_1;
	}
	char_1 = char_2 * char_2;
	float_1 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(long_2,double_4,long_2);

	double_2 = sinh ( double_4 ) ;
}
short _aws_iot_mqtt_deserialize_unsuback( float parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double_1 = cosh ( double_2 ) ;
	double_3 = aws_iot_mqtt_internal_deserialize_ack(double_2,short_1,int_1,double_4,long_1);

	double_2 = log10 ( double_3 ) ;
	double_3 = sqrt ( double_2 ) ;
	double_4 = tanh ( double_1 ) ;
	double_5 = floor ( double_5 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double_2 = ldexp ( double_3 , int_2 ) ;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
long _aws_iot_mqtt_serialize_unsubscribe( unsigned int parameter_1,float parameter_2,long parameter_3,double parameter_4,short parameter_5,unsigned int parameter_6,float parameter_7,long parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_5 = 1;
	short short_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	char char_4 = 1;
	double_1 = fmod ( double_1 , double_1 ) ;
	double_1 = asin ( double_1 ) ;
	double_2 = fabs ( double_3 ) ;
	double_3 = log10 ( double_4 ) ;
	double_2 = cos ( double_3 ) ;
	aws_iot_mqtt_internal_write_char(short_1,unsigned_int_1);

	aws_iot_mqtt_internal_write_uint_16(long_1,char_1);

	double_4 = cos ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float_1 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_1,short_2);

		double_1 = floor ( double_2 ) ;
	}
	if(1)
	{
		aws_iot_mqtt_internal_write_utf8_string(long_2,short_1,double_2);

		double_4 = sqrt ( double_3 ) ;
	}
	double_1 = ceil ( double_4 ) ;
	if(1)
	{
		char_2 = char_2;
	}
	double_2 = tan ( double_5 ) ;
	short_3 = aws_iot_mqtt_internal_init_header(char_3,char_2,float_2,long_3,long_1);

	double_2 = fmod ( double_2 , double_6 ) ;
	double_6 = pow ( double_2 , double_5 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_1 = floor ( double_2 ) ;
	}
	double_6 = double_6 + double_6;
	double_6 = cos ( double_2 ) ;
	char_4 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_2);

}
short _aws_iot_mqtt_internal_unsubscribe( short parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_7 = 1;
	double_1 = tanh ( double_2 ) ;
	float_1 = aws_iot_mqtt_internal_wait_for_read(float_1,long_1,short_1,651);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_1 = _aws_iot_mqtt_serialize_unsubscribe(unsigned_int_3,float_1,long_1,double_1,short_1,unsigned_int_2,float_1,long_1);

	int_1 = aws_iot_mqtt_internal_send_packet(int_1,float_1,double_2);

	int_1 = int_1 + int_1;
	aws_iot_mqtt_get_next_packet_id(float_1);

	double_1 = log10 ( double_1 ) ;
	double_1 = atan2 ( double_3 , double_4 ) ;
	double_2 = exp ( double_3 ) ;
	double_2 = sqrt ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			countdown_ms(short_1,float_1);

			double_4 = atan ( double_4 ) ;
		}
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	int_1 = int_1 + int_1;
	double_3 = exp ( double_4 ) ;
	long_2 = long_2;
	if(1)
	{
		long_1 = long_2;
	}
	double_4 = log ( double_1 ) ;
	if(1)
	{
		double_5 = log ( double_5 ) ;
	}
	double_6 = log ( double_1 ) ;
	if(1)
	{
		double_4 = tanh ( double_5 ) ;
	}
	init_timer();

	short_2 = _aws_iot_mqtt_deserialize_unsuback(float_2,float_1,unsigned_int_2);

	double_1 = ldexp ( double_3 , int_2 ) ;
	if(1)
	{
		double_1 = floor ( double_5 ) ;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_6 = atan ( double_2 ) ;
		}
	}
	double_3 = pow ( double_7 , double_4 ) ;
}
long aws_iot_mqtt_unsubscribe( char parameter_1,unsigned int parameter_2,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_2 = short_1 * short_1;
	int_1 = int_2;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		return long_1;
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		return long_1;
	}
	int_2 = int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		aws_iot_mqtt_get_client_state(long_2);

		short_1 = _aws_iot_mqtt_internal_unsubscribe(short_2,long_2,unsigned_int_1);

		double_1 = double_2;
		return long_1;
	}
	int_2 = int_3 + int_1;
	double_4 = double_3 * double_3;
	if(1)
	{
		int_3 = aws_iot_mqtt_is_client_connected(int_1);

		int_1 = aws_iot_mqtt_set_client_state(int_4,char_1,double_3);

		double_4 = sqrt ( double_3 ) ;
	}
	return long_1;
}
int findIndexOfSubscriptionList( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = atan ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				return int_1;
			}
		}
	}
	return int_2;
}
double topicNameFromThingAndAction( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,float parameter_4)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_1;
	double_1 = ceil ( double_2 ) ;
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char_1 = char_1 + char_1;
	}
	if(1)
	{
		double_1 = double_1 * double_1;
	}
	if(1)
	{
		double_1 = fabs ( double_1 ) ;
	}
	if(1)
	{
		double_3 = sqrt ( double_4 ) ;
	}
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_5 = double_4;
	}
	if(1)
	{
		double_4 = cosh ( double_3 ) ;
	}
	else
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
}
long unsubscribeFromAcceptedAndRejected( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_1 = atan2 ( double_1 , double_2 ) ;
	char_2 = char_1 * char_2;
	double_3 = topicNameFromThingAndAction(char_2,unsigned_int_1,unsigned_int_1,float_1);

	long_2 = long_1 * long_2;
	double_4 = atan ( double_3 ) ;
	short_1 = short_2;
	double_1 = asin ( double_4 ) ;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_4 = 1;
			int int_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_5 = 1;
			float_2 = float_2 * float_1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_4 = 1;
				int int_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_5 = 1;
				float_2 = float_1 + float_3;
			}
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_4 = 1;
			int int_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_5 = 1;
			double_3 = atan ( double_5 ) ;
		}
	}
	long_2 = aws_iot_mqtt_unsubscribe(char_3,unsigned_int_2,char_4);

	double_4 = sqrt ( double_1 ) ;
	if(1)
	{
		if(1)
		{
			double_3 = double_1;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
			}
		}
		if(1)
		{
			int_1 = findIndexOfSubscriptionList(short_2);

			unsigned_int_1 = unsigned_int_1;
		}
	}
}
void HandleExpiredResponseCallbacks()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_1 = 1;
	char_1 = has_timer_expired(unsigned_int_1);

	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_2 = 1;
				double double_1 = 1;
				char controller_3[2];
				fgets(controller_3 ,2 ,stdin);
				if( strcmp( controller_3, ")") > 0)
				{
					char char_1 = 1;
					unsigned int unsigned_int_1 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_2 = 1;
					double double_1 = 1;
					double_1 = sinh ( double_1 ) ;
				}
				long_1 = unsubscribeFromAcceptedAndRejected(char_1);

				unsigned_int_2 = unsigned_int_3;
				double_2 = asin ( double_2 ) ;
			}
		}
	}
}
int aws_iot_shadow_yield( long parameter_1,short parameter_2,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char controller4vul_72[2];
	fgets(controller4vul_72 ,3 ,stdin);
	if( strcmp( controller4vul_72, "ZC") == 0)
	{
		char_1 = aws_iot_mqtt_yield(double_1,int_1,uni_para);

		return int_1;
	}
	double_2 = double_2;
	return int_2;
}
void parseStringValue( char parameter_1,float parameter_2,float parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = floor ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_1 = int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	double_2 = double_1 + double_2;
	long_1 = long_1;
}
long parseDoubleValue( double parameter_1,long parameter_2,short parameter_3)
{
	long long_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long_2 = long_1 + long_2;
		return long_3;
	}
	if(1)
	{
		long long_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
		return long_4;
	}
	return long_5;
}
char parseFloatValue( float parameter_1,char parameter_2,short parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	if(1)
	{
		char_1 = char_1;
		return char_1;
	}
	if(1)
	{
		char char_1 = 1;
		float float_1 = 1;
		float_1 = float_1;
		return char_1;
	}
	return char_1;
}
long parseUnsignedInteger8Value( int parameter_1,double parameter_2,double parameter_3)
{
	char char_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_4 = 1;
	if(1)
	{
		char char_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_4 = 1;
		char_3 = char_1 + char_2;
		return long_1;
	}
	if(1)
	{
		char char_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_4 = 1;
		char_3 = char_4;
		return long_1;
	}
	return long_1;
}
char parseUnsignedInteger16Value( float parameter_1,char parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int_1 = int_2;
		return char_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double_1 = asin ( double_1 ) ;
		return char_2;
	}
	return char_2;
}
long parseInteger8Value( long parameter_1,double parameter_2,double parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = log ( double_1 ) ;
		return long_1;
	}
	char controller_2[4];
	fgets(controller_2 ,4 ,stdin);
	if( strcmp( controller_2, "*sg") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
		return long_2;
	}
	return long_3;
}
long parseInteger16Value( long parameter_1,long parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = double_1 + double_2;
		return long_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
		return long_1;
	}
	return long_2;
}
float parseInteger32Value( int parameter_1,long parameter_2,long parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		long_1 = long_2;
		return float_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double_1 = asin ( double_1 ) ;
		return float_2;
	}
	return float_3;
}
short parseBooleanValue( unsigned int parameter_1,long parameter_2,long parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	if(1)
	{
		double_1 = acos ( double_1 ) ;
		return short_1;
	}
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double_1 = atan ( double_2 ) ;
	}
	else
	{
		double double_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float_1 = float_1;
		return short_1;
	}
	return short_1;
}
void UpdateValueIfNoObject( float parameter_1,float parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_2 = 1;
	long long_4 = 1;
	short short_2 = 1;
	double double_3 = 1;
	long long_5 = 1;
	double double_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	short short_3 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		long_1 = long_1 + long_1;
	}
	if(1)
	{
		long_2 = parseInteger8Value(long_3,double_1,double_1);

		parseUnsignedInteger32Value(int_1,short_1,char_1);

		float_1 = float_1 * float_1;
	}
	if(1)
	{
		float_2 = parseInteger32Value(int_2,long_1,long_2);

		double_1 = log ( double_2 ) ;
	}
	if(1)
	{
		char_1 = parseUnsignedInteger16Value(float_1,char_2,long_4);

		char_2 = parseFloatValue(float_2,char_2,short_2);

		double_1 = atan2 ( double_2 , double_3 ) ;
	}
	if(1)
	{
		long_5 = parseUnsignedInteger8Value(int_2,double_4,double_3);

		long_5 = long_4;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		double double_3 = 1;
		long long_5 = 1;
		double double_4 = 1;
		char char_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		parseStringValue(char_3,float_3,float_3,double_2);

		double_5 = double_3 + double_4;
	}
	if(1)
	{
		double_1 = cosh ( double_2 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		double double_3 = 1;
		long long_5 = 1;
		double double_4 = 1;
		char char_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		char_4 = char_1 * char_4;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		double double_3 = 1;
		long long_5 = 1;
		double double_4 = 1;
		char char_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		double double_3 = 1;
		long long_5 = 1;
		double double_4 = 1;
		char char_3 = 1;
		float float_3 = 1;
		short short_3 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		short_3 = parseBooleanValue(unsigned_int_1,long_2,long_6);

		long_6 = parseInteger16Value(long_1,long_2,unsigned_int_4);

		short_1 = short_4;
	}
	long_2 = parseDoubleValue(double_2,long_2,short_3);

}
short isJsonKeyMatchingAndUpdateValue( char parameter_1,int parameter_3,char parameter_4,double parameter_5,short parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = jsoneq(float_1,float_1,long_1);

	double_1 = fabs ( double_2 ) ;
	double_3 = pow ( double_2 , double_4 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_2 = asin ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_5 = 1;
			float float_2 = 1;
			double double_6 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_3 = double_2;
			double_1 = atan ( double_5 ) ;
			float_1 = float_2;
			UpdateValueIfNoObject(float_1,float_1,unsigned_int_1);

			double_6 = ldexp ( double_5 , int_1 ) ;
			unsigned_int_2 = unsigned_int_3;
			return short_1;
		}
		if(1)
		{
			return short_2;
		}
	}
	return short_2;
}
void parseUnsignedInteger32Value( int parameter_1,short parameter_2,char parameter_3)
{
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double_1 = tanh ( double_2 ) ;
	}
}
unsigned int jsoneq( float parameter_1,float parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				return unsigned_int_1;
			}
		}
	}
	return unsigned_int_2;
}
char extractVersionNumber( unsigned int parameter_1,double parameter_3,float parameter_4)
{
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	parseUnsignedInteger32Value(int_1,short_1,char_1);

	double_1 = cos ( double_1 ) ;
	float_1 = float_2;
	unsigned_int_1 = jsoneq(float_1,float_2,long_1);

	double_2 = log ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			long_1 = long_1;
			if(1)
			{
				return char_2;
			}
		}
	}
	return char_2;
}
double jsmn_parse_primitive( unsigned int parameter_1,short parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double_1 = exp ( double_2 ) ;
	int_1 = int_2;
	double_2 = acos ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		{
			double_1 = exp ( double_1 ) ;
		}
		if(1)
		{
			double_3 = asin ( double_1 ) ;
			return double_3;
		}
	}
	double_1 = cos ( double_1 ) ;
	return double_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double_4 = sinh ( double_3 ) ;
		return double_2;
	}
	long_1 = jsmn_alloc_token(char_1,long_2,unsigned_int_1);

	double_1 = ceil ( double_1 ) ;
	if(1)
	{
		double_3 = asin ( double_3 ) ;
		return double_2;
	}
	double_2 = sinh ( double_1 ) ;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_2 = atan ( double_3 ) ;
	return double_1;
	unsigned_int_1 = jsmn_fill_token(int_1,char_1,int_2,int_1);

}
unsigned int jsmn_fill_token( int parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = exp ( double_2 ) ;
	double_2 = acos ( double_2 ) ;
	int_1 = int_1;
	int_1 = int_2;
}
void jsmn_parse_string( short parameter_1,short parameter_2,long parameter_3,float parameter_4,double parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double_1 = log10 ( double_1 ) ;
	int_2 = int_1 * int_1;
	double_1 = cos ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double_2 = floor ( double_3 ) ;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			char char_1 = 1;
			long long_3 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_7 = 1;
			if(1)
			{
			}
			long_1 = long_1 * long_2;
			if(1)
			{
				char_1 = char_1;
			}
			long_3 = jsmn_alloc_token(char_1,long_4,unsigned_int_1);

			double_3 = tan ( double_2 ) ;
			double_2 = cos ( double_1 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			char char_1 = 1;
			long long_3 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_7 = 1;
			double_1 = cosh ( double_1 ) ;
			double_4 = tanh ( double_1 ) ;
			{
				double double_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_2 = 1;
				char char_1 = 1;
				long long_3 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_6 = 1;
				double double_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_7 = 1;
				double_5 = fmod ( double_3 , double_4 ) ;
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					if(1)
					{
						double_3 = double_4;
					}
					double_6 = sqrt ( double_6 ) ;
				}
				double_6 = pow ( double_3 , double_4 ) ;
				double_5 = pow ( double_7 , double_2 ) ;
			}
		}
	}
	unsigned_int_1 = jsmn_fill_token(int_2,char_1,int_1,int_1);

	double_6 = tanh ( double_6 ) ;
}
long jsmn_alloc_token( char parameter_1,long parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	int_1 = int_1 + int_1;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "=!]") > 0)
	{
		return long_1;
	}
	double_1 = fmod ( double_2 , double_1 ) ;
	double_3 = sqrt ( double_4 ) ;
	char_1 = char_1 * char_2;
	double_3 = ceil ( double_1 ) ;
	return long_2;
}
int jsmn_parse()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	float float_5 = 1;
	double double_6 = 1;
	double_1 = log10 ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_2;
	double_1 = pow ( double_1 , double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		short short_4 = 1;
		int int_4 = 1;
		double double_2 = 1;
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		long long_3 = 1;
		char char_4 = 1;
		float float_5 = 1;
		double double_6 = 1;
		int_2 = int_1 + int_2;
		double_2 = double_1;
		float_1 = float_1;
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			char char_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			short short_4 = 1;
			int int_4 = 1;
			double double_2 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			long long_3 = 1;
			char char_4 = 1;
			float float_5 = 1;
			double double_6 = 1;
			double_2 = fabs ( double_3 ) ;
			if(1)
			{
			}
			double_1 = tan ( double_1 ) ;
			if(1)
			{
				return int_2;
			}
			if(1)
			{
				long_1 = jsmn_alloc_token(char_1,long_2,unsigned_int_2);

				double_1 = double_1 + double_2;
				double_3 = ldexp ( double_2 , int_2 ) ;
			}
			double_3 = double_2;
			short_1 = short_1;
			float_4 = float_3 * float_4;
			if(1)
			{
			}
			int_1 = int_2 + int_2;
			if(1)
			{
				return int_1;
			}
			jsmn_parse_string(short_2,short_3,long_2,float_2,double_1);

			double_4 = atan2 ( double_5 , double_4 ) ;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double double_1 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_3 = 1;
					long long_1 = 1;
					char char_1 = 1;
					long long_2 = 1;
					short short_2 = 1;
					short short_3 = 1;
					int int_3 = 1;
					short short_4 = 1;
					int int_4 = 1;
					double double_2 = 1;
					short short_1 = 1;
					float float_3 = 1;
					float float_4 = 1;
					double double_4 = 1;
					double double_5 = 1;
					char char_2 = 1;
					unsigned int unsigned_int_3 = 1;
					char char_3 = 1;
					long long_3 = 1;
					char char_4 = 1;
					float float_5 = 1;
					double double_6 = 1;
					if(1)
					{
						return int_2;
					}
					char_1 = char_2 + char_2;
					long_1 = long_2 + long_3;
				}
				if(1)
				{
					if(1)
					{
						return int_1;
					}
				}
				unsigned_int_3 = unsigned_int_3;
			}
			else
			{
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					double_5 = asin ( double_4 ) ;
					if(1)
					{
						if(1)
						{
							return int_1;
						}
						int_1 = int_2 + int_2;
						int_1 = int_1;
					}
				}
				if(1)
				{
					return int_3;
				}
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_3 = cos ( double_4 ) ;
				if(1)
				{
					char_2 = char_3;
				}
			}
			double_3 = atan ( double_3 ) ;
			if(1)
			{
				return int_3;
			}
			float_1 = float_1;
			if(1)
			{
				double_2 = cosh ( double_2 ) ;
			}
			short_1 = short_1;
			if(1)
			{
				double double_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				char char_1 = 1;
				long long_2 = 1;
				short short_2 = 1;
				short short_3 = 1;
				int int_3 = 1;
				short short_4 = 1;
				int int_4 = 1;
				double double_2 = 1;
				short short_1 = 1;
				float float_3 = 1;
				float float_4 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				long long_3 = 1;
				char char_4 = 1;
				float float_5 = 1;
				double double_6 = 1;
				char_4 = char_3 + char_3;
				else
				{
					for(int looper_5=0; looper_5<1;looper_5++)
					{
						if(1)
						{
							if(1)
							{
								unsigned_int_3 = unsigned_int_2;
							}
						}
					}
				}
			}
			if(1)
			{
				double_3 = jsmn_parse_primitive(unsigned_int_1,short_4,int_1,int_2,unsigned_int_1);

				short_4 = short_2;
				if(1)
				{
					return int_2;
				}
			}
			else
			{
				double double_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				char char_1 = 1;
				long long_2 = 1;
				short short_2 = 1;
				short short_3 = 1;
				int int_3 = 1;
				short short_4 = 1;
				int int_4 = 1;
				double double_2 = 1;
				short short_1 = 1;
				float float_3 = 1;
				float float_4 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				long long_3 = 1;
				char char_4 = 1;
				float float_5 = 1;
				double double_6 = 1;
				float_3 = float_5;
			}
			if(1)
			{
				return int_2;
			}
			unsigned_int_1 = unsigned_int_3;
			if(1)
			{
				double double_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				char char_1 = 1;
				long long_2 = 1;
				short short_2 = 1;
				short short_3 = 1;
				int int_3 = 1;
				short short_4 = 1;
				int int_4 = 1;
				double double_2 = 1;
				short short_1 = 1;
				float float_3 = 1;
				float float_4 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				long long_3 = 1;
				char char_4 = 1;
				float float_5 = 1;
				double double_6 = 1;
				double_6 = double_1 * double_5;
			}
			return int_2;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				return int_4;
			}
		}
	}
	return int_3;
}
void jsmn_init()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1;
	double_1 = asin ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
}
void isJsonValidAndParse( int parameter_1,short parameter_2,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	int_3 = int_1;
	int_2 = jsmn_parse();

	short_2 = short_1 + short_1;
	double_1 = exp ( double_1 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	jsmn_init();

	double_1 = fabs ( double_2 ) ;
}
short shadow_delta_callback( float parameter_1,char parameter_2,int parameter_3,long parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double_1 = tan ( double_1 ) ;
	float_2 = float_1 + float_1;
	short_1 = isJsonKeyMatchingAndUpdateValue(char_1,int_1,char_1,double_2,short_2);

	double_1 = atan2 ( double_3 , double_2 ) ;
	float_3 = float_2;
	double_3 = log ( double_2 ) ;
	double_3 = exp ( double_4 ) ;
	double_3 = floor ( double_4 ) ;
	char_1 = extractVersionNumber(unsigned_int_1,double_3,float_4);

	int_3 = int_2 + int_2;
	int_3 = int_4;
	double_2 = fabs ( double_5 ) ;
	double_1 = log10 ( double_6 ) ;
	if(1)
	{
		double_3 = double_4;
		return short_2;
	}
	float_5 = float_6;
	isJsonValidAndParse(int_2,short_2,short_2);

	double_5 = double_5;
	if(1)
	{
		double_2 = double_7 + double_7;
		return short_2;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_6 = tanh ( double_1 ) ;
			}
			else
			{
				int_3 = int_3 * int_2;
				return short_2;
			}
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double double_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					short short_1 = 1;
					char char_1 = 1;
					int int_1 = 1;
					double double_2 = 1;
					short short_2 = 1;
					double double_3 = 1;
					float float_3 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					float float_4 = 1;
					int int_2 = 1;
					int int_3 = 1;
					int int_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					float float_5 = 1;
					float float_6 = 1;
					double double_7 = 1;
					double double_8 = 1;
					double_3 = pow ( double_8 , double_7 ) ;
				}
			}
		}
	}
}
long registerJsonTokenOnDelta( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_4 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		short short_4 = 1;
		long long_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double_1 = double_1;
		double_1 = pow ( double_2 , double_1 ) ;
		int_1 = aws_iot_mqtt_subscribe(float_1,unsigned_int_3,short_1,double_3,long_1);

		short_1 = shadow_delta_callback(float_1,char_1,int_1,long_1);

		short_3 = short_2 * short_3;
	}
	if(1)
	{
		return long_1;
	}
	double_3 = floor ( double_1 ) ;
	short_4 = short_1 * short_4;
	double_1 = log ( double_2 ) ;
	char_1 = char_1;
	double_3 = double_3;
	return long_2;
}
double aws_iot_shadow_register_delta( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		return double_2;
	}
	return double_3;
	int_1 = aws_iot_mqtt_is_client_connected(int_2);

	long_1 = registerJsonTokenOnDelta(unsigned_int_1);

}
void checkReturnValueOfSnPrintf( short parameter_1,double parameter_2)
{
	if(1)
	{
	}
	if(1)
	{
	}
}
char FillWithClientTokenSize( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	short_1 = short_1;
	char_1 = char_1 * char_1;
	return char_1;
}
char aws_iot_fill_with_client_token( char parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char_1 = FillWithClientTokenSize(char_2,int_1);

	checkReturnValueOfSnPrintf(short_1,double_1);

	double_1 = double_1 + double_1;
	double_1 = atan ( double_1 ) ;
	return char_1;
}
float buildJSONForReported( char parameter_1,short parameter_2,short parameter_3,double parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double_1 = atan ( double_1 ) ;
	if(1)
	{
		return float_1;
	}
	char_1 = aws_iot_fill_with_client_token(char_2,short_1);

	short_2 = short_1 * short_1;
	if(1)
	{
		return float_2;
	}
	double_1 = cosh ( double_2 ) ;
	if(1)
	{
		return float_1;
	}
	return float_2;
}
char DeltaCallback( unsigned int parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_2 = cosh ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_1 = buildJSONForReported(char_1,short_1,short_1,double_2);

		short_1 = short_2 * short_1;
	}
}
long aws_iot_mqtt_autoreconnect_set_status( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = log ( double_2 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = pow ( double_2 , double_3 ) ;
}
float aws_iot_shadow_set_autoreconnect_status( long parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	return float_1;
	long_1 = aws_iot_mqtt_autoreconnect_set_status(long_1,char_1);

}
int _aws_iot_mqtt_deserialize_suback( unsigned int parameter_1,float parameter_2,unsigned int parameter_3,float parameter_4,short parameter_5,long parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_5 = 1;
	double_3 = double_1 + double_2;
	int_2 = int_1 * int_1;
	double_4 = log10 ( double_3 ) ;
	double_5 = double_1 * double_4;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_3 = cos ( double_1 ) ;
	}
	int_3 = int_2;
	char_1 = aws_iot_mqtt_internal_read_uint16_t(double_3);

	double_2 = asin ( double_1 ) ;
	unsigned_int_2 = unsigned_int_2;
	double_1 = cosh ( double_2 ) ;
	double_3 = sinh ( double_2 ) ;
	if(1)
	{
		double_4 = atan ( double_3 ) ;
	}
	float_2 = float_1 * float_2;
	if(1)
	{
		double_2 = tan ( double_4 ) ;
	}
	double_2 = floor ( double_5 ) ;
	if(1)
	{
		double_3 = sinh ( double_2 ) ;
	}
	int_2 = int_1 * int_4;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		char char_2 = 1;
		long long_1 = 1;
		int int_5 = 1;
		int_4 = int_5;
	}
	double_1 = sqrt ( double_6 ) ;
	char_2 = aws_iot_mqtt_internal_read_char(unsigned_int_3);

	float_1 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(long_1,double_4,long_1);

	double_2 = ceil ( double_5 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			char_1 = char_1;
		}
		double_4 = double_1;
	}
	double_6 = ceil ( double_2 ) ;
}
long _aws_iot_mqtt_get_free_message_handler_index( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	char_1 = char_1;
}
long _aws_iot_mqtt_serialize_subscribe( long parameter_1,long parameter_2,long parameter_3,double parameter_4,int parameter_5,char parameter_6,long parameter_7,float parameter_8,int parameter_9)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double_1 = pow ( double_1 , double_1 ) ;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_1 = double_1;
	double_2 = ceil ( double_3 ) ;
	short_1 = aws_iot_mqtt_internal_init_header(char_1,char_2,float_1,long_1,long_1);

	long_3 = long_1 * long_2;
	if(1)
	{
		double_2 = double_3;
	}
	short_1 = short_2 + short_2;
	long_1 = long_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		int_1 = int_2 * int_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		int_3 = int_1 * int_3;
	}
	double_4 = asin ( double_2 ) ;
	if(1)
	{
		aws_iot_mqtt_internal_write_char(short_3,unsigned_int_1);

		aws_iot_mqtt_internal_write_utf8_string(long_3,short_1,double_4);

		double_3 = asin ( double_3 ) ;
	}
	double_4 = fabs ( double_1 ) ;
	double_3 = exp ( double_1 ) ;
	char_3 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_3);

	double_4 = atan ( double_1 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_2 = 1;
		double double_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		double_3 = ceil ( double_3 ) ;
		double_4 = pow ( double_5 , double_6 ) ;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	aws_iot_mqtt_internal_write_uint_16(long_3,char_1);

	double_1 = cosh ( double_6 ) ;
	float_2 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_2,short_3);

}
void aws_iot_mqtt_get_next_packet_id( float parameter_1)
{
}
unsigned int _aws_iot_mqtt_internal_subscribe( short parameter_1,double parameter_2,int parameter_3,float parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_7 = 1;
	int int_4 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double double_8 = 1;
	int int_5 = 1;
	long long_6 = 1;
	char char_1 = 1;
	float float_3 = 1;
	long long_7 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_9 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_3 + double_4;
	double_2 = cosh ( double_5 ) ;
	short_2 = short_1 + short_2;
	unsigned_int_2 = unsigned_int_1;
	double_6 = sinh ( double_1 ) ;
	int_1 = int_2;
	double_6 = tanh ( double_5 ) ;
	double_1 = sinh ( double_5 ) ;
	long_1 = long_1;
	double_1 = double_4;
	float_1 = aws_iot_mqtt_internal_wait_for_read(float_1,long_1,short_1,87);

	double_4 = log ( double_4 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_7 = 1;
		int int_4 = 1;
		float float_2 = 1;
		long long_5 = 1;
		double double_8 = 1;
		int int_5 = 1;
		long long_6 = 1;
		char char_1 = 1;
		float float_3 = 1;
		long long_7 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_9 = 1;
		long long_3 = 1;
		long long_4 = 1;
		long_2 = _aws_iot_mqtt_get_free_message_handler_index(short_1);

		long_4 = long_3 + long_4;
	}
	int_3 = aws_iot_mqtt_internal_send_packet(int_2,float_1,double_4);

	double_7 = log10 ( double_6 ) ;
	if(1)
	{
		int_4 = _aws_iot_mqtt_deserialize_suback(unsigned_int_1,float_2,unsigned_int_2,float_1,short_1,long_5);

		double_8 = fabs ( double_5 ) ;
	}
	int_5 = int_4;
	if(1)
	{
		long_5 = _aws_iot_mqtt_serialize_subscribe(long_6,long_1,long_2,double_2,int_2,char_1,long_6,float_1,int_1);

		short_1 = short_2 * short_1;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		double_4 = ceil ( double_2 ) ;
	}
	aws_iot_mqtt_get_next_packet_id(float_3);

	long_7 = long_6;
	if(1)
	{
		double_8 = floor ( double_4 ) ;
	}
	char_2 = char_2 + char_1;
	unsigned_int_3 = unsigned_int_1;
	double_3 = log10 ( double_4 ) ;
	init_timer();

	double_1 = tanh ( double_3 ) ;
	double_9 = log ( double_5 ) ;
	countdown_ms(short_2,float_3);

	double_1 = atan ( double_7 ) ;
}
int aws_iot_mqtt_is_client_connected( int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1;
	char_1 = char_2;
	if(1)
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_1 = tanh ( double_1 ) ;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char_2 = char_1;
		int_1 = int_2;
		double_2 = exp ( double_1 ) ;
	}
	double_3 = double_2;
}
int aws_iot_mqtt_subscribe( float parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,long parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_1 = fabs ( double_1 ) ;
	short_1 = short_1 + short_2;
	double_2 = asin ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double_2 = pow ( double_3 , double_4 ) ;
	}
	if(1)
	{
		aws_iot_mqtt_get_client_state(long_1);

		int_1 = aws_iot_mqtt_set_client_state(int_2,char_1,double_5);

		char_1 = char_1;
	}
	float_1 = float_2;
	if(1)
	{
		double_2 = cos ( double_5 ) ;
	}
	double_1 = ceil ( double_5 ) ;
	if(1)
	{
		long_1 = long_1;
	}
	short_2 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned_int_2 = _aws_iot_mqtt_internal_subscribe(short_1,double_5,int_1,float_1,short_1);

		double_6 = log ( double_7 ) ;
	}
	double_5 = double_3;
	int_2 = aws_iot_mqtt_is_client_connected(int_2);

}
void initializeRecords( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = asin ( double_1 ) ;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_2 = pow ( double_2 , double_1 ) ;
		double_1 = double_3 + double_4;
		double_3 = tanh ( double_4 ) ;
	}
	double_1 = floor ( double_5 ) ;
}
double _aws_iot_mqtt_deserialize_connack( short parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_2 = exp ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_3 = pow ( double_2 , double_1 ) ;
	double_2 = double_3 * double_1;
	double_2 = ldexp ( double_4 , int_1 ) ;
	if(1)
	{
		float_1 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(long_1,double_3,long_2);

		long_1 = long_2;
	}
	if(1)
	{
		double_4 = double_1;
	}
	char_1 = char_1;
	double_1 = ceil ( double_1 ) ;
	double_2 = sinh ( double_1 ) ;
	long_3 = long_3 * long_3;
	int_1 = int_2;
	if(1)
	{
		double_1 = log ( double_2 ) ;
	}
	float_1 = float_1 + float_1;
	if(1)
	{
		double_2 = double_4;
	}
	double_5 = cos ( double_2 ) ;
	double_6 = acos ( double_7 ) ;
	if(1)
	{
		double_2 = ceil ( double_3 ) ;
	}
	double_4 = sinh ( double_4 ) ;
	long_2 = long_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		long long_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		int_2 = int_2 * int_2;
		int_1 = int_1 * int_2;
		int_3 = int_2 + int_2;
		double_6 = cosh ( double_5 ) ;
		char_2 = aws_iot_mqtt_internal_read_char(unsigned_int_4);

		double_2 = tanh ( double_6 ) ;
		double_2 = cosh ( double_2 ) ;
		double_7 = cosh ( double_5 ) ;
	}
	double_5 = floor ( double_2 ) ;
}
void countdown_sec( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = sinh ( double_1 ) ;
	short_3 = short_1 + short_2;
	double_2 = double_1;
	float_1 = float_2;
}
long aws_iot_mqtt_internal_serialize_ack( unsigned int parameter_1,double parameter_2,double parameter_3,double parameter_4,short parameter_5,short parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_1 = tan ( double_1 ) ;
	short_1 = aws_iot_mqtt_internal_init_header(char_1,char_1,float_1,long_1,long_1);

	float_2 = float_1 * float_1;
	double_3 = floor ( double_1 ) ;
	float_1 = float_2;
	if(1)
	{
		double_4 = acos ( double_1 ) ;
	}
	double_4 = double_3 + double_4;
	if(1)
	{
		double_3 = floor ( double_4 ) ;
	}
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		char char_2 = 1;
		double double_6 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		aws_iot_mqtt_internal_write_char(short_2,unsigned_int_2);

		unsigned_int_3 = unsigned_int_4;
	}
	double_4 = cosh ( double_2 ) ;
	double_5 = double_5;
	aws_iot_mqtt_internal_write_uint_16(long_1,char_2);

	double_2 = pow ( double_5 , double_1 ) ;
	double_2 = double_2;
	double_4 = log10 ( double_6 ) ;
	float_3 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_4,short_1);

}
float _aws_iot_mqtt_internal_is_topic_matched( char parameter_1,char parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = cosh ( double_2 ) ;
	if(1)
	{
		return float_1;
	}
	unsigned_int_1 = unsigned_int_2;
	double_2 = sqrt ( double_1 ) ;
	double_3 = ldexp ( double_3 , int_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float float_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		looper_1 += 1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			double_1 = ceil ( double_1 ) ;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				double double_4 = 1;
				int int_2 = 1;
				float float_2 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				looper_2 += 1;
				unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
			}
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			int int_2 = 1;
			float float_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short_1 = short_2;
		}
		char_1 = char_1;
		double_1 = double_1 + double_2;
	}
	double_4 = ldexp ( double_3 , int_2 ) ;
	return float_2;
}
void _aws_iot_mqtt_internal_deliver_message( float parameter_1,char parameter_2,float parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_7 = 1;
	double_3 = double_1 + double_2;
	aws_iot_mqtt_get_client_state(long_1);

	double_2 = double_1;
	long_1 = long_2 * long_3;
	int_1 = aws_iot_mqtt_set_client_state(int_2,char_1,double_1);

	double_2 = log ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_7 = 1;
		float_1 = _aws_iot_mqtt_internal_is_topic_matched(char_1,char_1,long_3);

		double_3 = double_2 + double_4;
	}
	double_5 = sqrt ( double_3 ) ;
	double_6 = fabs ( double_1 ) ;
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
					double double_3 = 1;
					long long_1 = 1;
					long long_2 = 1;
					long long_3 = 1;
					int int_1 = 1;
					int int_2 = 1;
					char char_1 = 1;
					float float_1 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					double double_7 = 1;
					double_7 = tanh ( double_6 ) ;
				}
			}
		}
	}
	int_3 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
char aws_iot_mqtt_internal_read_uint16_t( double parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float_1 = float_1;
	double_1 = tanh ( double_1 ) ;
	double_1 = asin ( double_1 ) ;
	long_1 = long_2;
	double_1 = fmod ( double_2 , double_3 ) ;
	unsigned_int_1 = unsigned_int_2;
	return char_1;
}
void _aws_iot_mqtt_read_string_with_len( char parameter_1,short parameter_2,long parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = atan2 ( double_2 , double_2 ) ;
	if(1)
	{
		double_1 = double_3 * double_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			char char_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_3 = sinh ( double_1 ) ;
			unsigned_int_2 = unsigned_int_1;
			short_1 = short_2;
		}
	}
	int_1 = int_1;
	char_1 = aws_iot_mqtt_internal_read_uint16_t(double_3);

}
float aws_iot_mqtt_internal_decode_remaining_length_from_buffer( long parameter_1,double parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = acos ( double_2 ) ;
	double_2 = cosh ( double_1 ) ;
	double_3 = sqrt ( double_1 ) ;
	int_1 = int_1 * int_2;
	double_3 = ceil ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_4 = int_2 + int_3;
		}
		double_1 = asin ( double_2 ) ;
		double_2 = floor ( double_1 ) ;
		double_1 = double_4;
		double_4 = atan ( double_5 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	long_1 = long_1 + long_2;
	looper_1 += 1;
	unsigned_int_1 = unsigned_int_3;
	long_1 = long_1;
}
char aws_iot_mqtt_internal_read_char( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	short_1 = short_1;
	return char_1;
}
unsigned int aws_iot_mqtt_internal_deserialize_publish( double parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4,char parameter_5,float parameter_6,float parameter_7,double parameter_8,float parameter_9,int parameter_10)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_7 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_3 = floor ( double_1 ) ;
	float_1 = aws_iot_mqtt_internal_decode_remaining_length_from_buffer(long_1,double_3,long_1);

	double_4 = ldexp ( double_3 , int_2 ) ;
	double_1 = acos ( double_2 ) ;
	double_3 = cosh ( double_1 ) ;
	double_2 = ceil ( double_1 ) ;
	double_2 = exp ( double_5 ) ;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		_aws_iot_mqtt_read_string_with_len(char_1,short_1,long_2,int_1);

		double_2 = acos ( double_6 ) ;
	}
	float_3 = float_2 + float_3;
	if(1)
	{
		double_1 = sqrt ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = fabs ( double_5 ) ;
	double_5 = log ( double_6 ) ;
	double_3 = double_7 + double_6;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		short short_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_7 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char_2 = aws_iot_mqtt_internal_read_char(unsigned_int_1);

		int_2 = int_3;
	}
	unsigned_int_2 = unsigned_int_1;
	char_3 = char_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		short short_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_7 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	}
	if(1)
	{
		double_6 = double_6;
	}
	double_7 = exp ( double_7 ) ;
	char_3 = aws_iot_mqtt_internal_read_uint16_t(double_2);

	unsigned_int_1 = unsigned_int_4;
	double_1 = atan2 ( double_5 , double_2 ) ;
}
char _aws_iot_mqtt_internal_handle_publish( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_9 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double_1 = acos ( double_1 ) ;
	char_1 = char_2;
	int_1 = aws_iot_mqtt_internal_send_packet(int_2,float_1,double_1);

	double_2 = fabs ( double_2 ) ;
	int_3 = int_2 * int_2;
	double_1 = fabs ( double_1 ) ;
	int_3 = int_3;
	double_3 = asin ( double_4 ) ;
	unsigned_int_1 = aws_iot_mqtt_internal_deserialize_publish(double_5,char_3,unsigned_int_2,double_4,char_3,float_1,float_2,double_2,float_3,int_4);

	double_4 = fmod ( double_4 , double_3 ) ;
	double_4 = ldexp ( double_6 , int_3 ) ;
	double_3 = fabs ( double_6 ) ;
	if(1)
	{
		double_5 = cosh ( double_4 ) ;
	}
	double_1 = asin ( double_7 ) ;
	if(1)
	{
		double_1 = asin ( double_5 ) ;
	}
	if(1)
	{
		double_5 = log10 ( double_3 ) ;
	}
	double_8 = double_3 * double_5;
	if(1)
	{
		double_7 = tanh ( double_8 ) ;
	}
	long_1 = long_1 * long_1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_9 = 1;
		short short_3 = 1;
		float float_4 = 1;
		float_2 = float_4;
	}
	long_1 = aws_iot_mqtt_internal_serialize_ack(unsigned_int_2,double_8,double_8,double_8,short_1,short_2);

	double_3 = log10 ( double_9 ) ;
	_aws_iot_mqtt_internal_deliver_message(float_3,char_1,float_1,short_3);

}
long _aws_iot_mqtt_internal_decode_packet_remaining_len( short parameter_1,float parameter_2,long parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	double double_4 = 1;
	char char_3 = 1;
	short short_4 = 1;
	double_1 = tan ( double_1 ) ;
	double_1 = double_1;
	double_2 = log ( double_2 ) ;
	char_2 = char_1 * char_1;
	long_1 = long_2;
	short_3 = short_1 * short_2;
	double_1 = atan ( double_2 ) ;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_4 = 1;
		double double_4 = 1;
		char char_3 = 1;
		short short_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_4 = 1;
			double double_4 = 1;
			char char_3 = 1;
			short short_4 = 1;
			short_1 = short_3 + short_4;
		}
		double_1 = fabs ( double_1 ) ;
		if(1)
		{
			double_2 = log ( double_1 ) ;
		}
		char_2 = char_3;
		double_2 = sinh ( double_1 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_3 = cosh ( double_2 ) ;
	looper_1 += 1;
	double_2 = floor ( double_2 ) ;
	unsigned_int_1 = _aws_iot_mqtt_internal_readWrapper(long_2,char_1,double_1,unsigned_int_2,char_4);

	double_4 = sqrt ( double_2 ) ;
}
unsigned int _aws_iot_mqtt_internal_readWrapper( long parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4,char parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char_3 = char_1 * char_2;
	double_1 = double_1;
	double_1 = pow ( double_1 , double_1 ) ;
	double_1 = sqrt ( double_1 ) ;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_2 = double_3;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = atan2 ( double_3 , double_2 ) ;
	}
	else
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double_2 = cos ( double_2 ) ;
		double_1 = double_4;
	}
	return unsigned_int_3;
}
long _aws_iot_mqtt_internal_read_packet( int parameter_1,short parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_5 = 1;
	float float_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_2 = 1;
	short short_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = log ( double_2 ) ;
	short_1 = aws_iot_mqtt_internal_flushBuffers(int_1);

	double_3 = double_1;
	countdown_ms(short_1,float_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = exp ( double_2 ) ;
	init_timer();

	short_2 = short_2;
	float_1 = float_1;
	short_3 = short_1;
	double_3 = log ( double_1 ) ;
	double_2 = tanh ( double_3 ) ;
	double_3 = exp ( double_3 ) ;
	short_3 = short_1 * short_4;
	unsigned_int_1 = _aws_iot_mqtt_internal_readWrapper(long_1,char_1,double_4,unsigned_int_2,char_2);

	double_2 = sqrt ( double_2 ) ;
	if(1)
	{
		return long_2;
	}
	if(1)
	{
		return long_2;
	}
	double_4 = pow ( double_3 , double_5 ) ;
	if(1)
	{
		return long_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_1 = 1;
		char char_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_2 = 1;
		long long_2 = 1;
		double double_5 = 1;
		float float_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_2 = 1;
		short short_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double_3 = asin ( double_6 ) ;
		do
		{
			double_3 = double_5 * double_1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				short short_1 = 1;
				int int_1 = 1;
				double double_3 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				short short_4 = 1;
				long long_1 = 1;
				char char_1 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_2 = 1;
				long long_2 = 1;
				double double_5 = 1;
				float float_2 = 1;
				long long_3 = 1;
				long long_4 = 1;
				int int_2 = 1;
				short short_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_3 = 1;
				float_1 = float_2 + float_3;
				if(1)
				{
					long_3 = long_1 * long_2;
				}
				else
				{
					double double_1 = 1;
					double double_2 = 1;
					short short_1 = 1;
					int int_1 = 1;
					double double_3 = 1;
					float float_1 = 1;
					unsigned int unsigned_int_1 = 1;
					short short_2 = 1;
					short short_3 = 1;
					short short_4 = 1;
					long long_1 = 1;
					char char_1 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_2 = 1;
					char char_2 = 1;
					long long_2 = 1;
					double double_5 = 1;
					float float_2 = 1;
					long long_3 = 1;
					long long_4 = 1;
					int int_2 = 1;
					short short_5 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_8 = 1;
					float float_3 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
				}
			}
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		double_2 = atan2 ( double_7 , double_8 ) ;
		looper_1 += 1;
		if(1)
		{
			long_1 = _aws_iot_mqtt_internal_decode_packet_remaining_len(short_3,float_2,long_3,int_1);

			double_4 = tanh ( double_7 ) ;
			return long_4;
		}
		else
		{
			return long_3;
		}
	}
	if(1)
	{
		double_1 = asin ( double_5 ) ;
		if(1)
		{
			return long_4;
		}
	}
	long_4 = long_2;
	int_2 = int_1 + int_1;
	short_1 = short_2 + short_5;
	double_3 = asin ( double_5 ) ;
}
int aws_iot_mqtt_internal_cycle_read( long parameter_1,long parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	int int_4 = 1;
	float float_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = exp ( double_2 ) ;
	char_3 = char_1 + char_2;
	if(1)
	{
		return int_1;
	}
	countdown_sec(short_1,unsigned_int_1);

	int_1 = int_2;
	if(1)
	{
		int_1 = int_2;
	}
	double_3 = fmod ( double_3 , double_4 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_1;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		long long_1 = 1;
		int int_4 = 1;
		float float_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_1 = atan2 ( double_3 , double_3 ) ;
		double_1 = pow ( double_4 , double_4 ) ;
		char_3 = _aws_iot_mqtt_internal_handle_publish(unsigned_int_3,int_1);

		float_2 = float_1 * float_2;
		double_4 = fmod ( double_2 , double_1 ) ;
	}
	return int_3;
	long_1 = _aws_iot_mqtt_internal_read_packet(int_4,short_1,float_3);

}
float aws_iot_mqtt_internal_wait_for_read( float parameter_1,long parameter_2,short parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 299)
	{
		vul_var = vul_var + 1;
	}
	double_2 = double_1 * double_2;
	double_3 = cos ( double_4 ) ;
	short_2 = short_1 * short_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = acos ( double_5 ) ;
	do
	{
		free(vul_var);
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	char_1 = char_1 * char_1;
	looper_1 += 1;
	double_2 = floor ( double_4 ) ;
}
int aws_iot_mqtt_internal_send_packet( int parameter_1,float parameter_2,double parameter_3)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char_1 = has_timer_expired(unsigned_int_1);

	double_2 = double_1 + double_1;
	double_3 = sqrt ( double_1 ) ;
	float_1 = float_1 + float_1;
	if(1)
	{
		double_2 = cos ( double_3 ) ;
	}
	if(1)
	{
		double_1 = double_1 + double_3;
	}
	long_1 = long_1;
	if(1)
	{
		int_1 = int_1;
	}
	double_4 = sqrt ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		looper_1 += 1;
		float_3 = float_2 + float_1;
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1;
	}
	double_3 = double_3 * double_2;
	if(1)
	{
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double_5 = ldexp ( double_1 , int_2 ) ;
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
}
void aws_iot_mqtt_internal_write_uint_16( long parameter_1,char parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1;
	double_1 = ceil ( double_1 ) ;
	double_2 = ceil ( double_3 ) ;
	double_2 = tan ( double_1 ) ;
}
void aws_iot_mqtt_internal_write_utf8_string( long parameter_1,short parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = sinh ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = fmod ( double_3 , double_4 ) ;
		aws_iot_mqtt_internal_write_uint_16(long_1,char_1);

		int_1 = int_1 + int_2;
	}
}
float aws_iot_mqtt_internal_write_len_to_buffer( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	int_2 = int_1 * int_2;
	do
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		int_3 = int_2 + int_1;
		double_1 = log10 ( double_1 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_1 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short_1 = short_1;
		}
		unsigned_int_2 = unsigned_int_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_1 = cos ( double_1 ) ;
	looper_1 += 1;
	float_1 = float_1;
}
void aws_iot_mqtt_internal_write_char( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = floor ( double_1 ) ;
	char_1 = char_2;
}
short aws_iot_mqtt_internal_init_header( char parameter_1,char parameter_2,float parameter_3,long parameter_4,long parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double_1 = floor ( double_1 ) ;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "c;T") < 0)
	{
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_1 = ceil ( double_2 ) ;
	double_1 = double_2 + double_1;
	{
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		return short_1;
		double_3 = fabs ( double_3 ) ;
		double_4 = fabs ( double_2 ) ;
		short_1 = short_1 * short_2;
		short_3 = short_1 + short_1;
		char_1 = char_1;
		double_3 = tanh ( double_2 ) ;
		long_1 = long_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		double_5 = acos ( double_4 ) ;
		double_5 = double_3 + double_6;
		int_1 = int_2;
		double_2 = tanh ( double_1 ) ;
		double_1 = cos ( double_5 ) ;
		int_1 = int_3;
	}
	double_3 = atan2 ( double_4 , double_5 ) ;
	double_1 = floor ( double_3 ) ;
	{
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float_1 = float_1 * float_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_4 = cos ( double_5 ) ;
}
char aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float_1 = float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char_1 = char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = log10 ( double_1 ) ;
	}
	else
	{
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	return char_2;
}
float _aws_iot_get_connect_packet_length( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double_1 = sinh ( double_1 ) ;
	double_1 = exp ( double_2 ) ;
	double_3 = atan ( double_2 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int_1 = int_1;
	}
	if(1)
	{
		double_2 = fabs ( double_3 ) ;
	}
	double_2 = cosh ( double_1 ) ;
}
long _aws_iot_mqtt_serialize_connect( double parameter_1,int parameter_2,long parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_3 = 1;
	double double_5 = 1;
	short short_2 = 1;
	float float_3 = 1;
	double double_6 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_5 = 1;
	int int_2 = 1;
	double double_7 = 1;
	short short_3 = 1;
	char char_4 = 1;
	double double_8 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = log10 ( double_2 ) ;
	float_2 = float_1 + float_1;
	char_1 = char_2;
	short_1 = short_1;
	double_2 = tan ( double_3 ) ;
	double_3 = tan ( double_2 ) ;
	if(1)
	{
		float_1 = _aws_iot_get_connect_packet_length(long_1);

		aws_iot_mqtt_internal_write_char(short_1,unsigned_int_1);

		double_2 = double_3 + double_1;
	}
	{
		return long_2;
	}
	double_4 = cos ( double_3 ) ;
	int_1 = int_1;
	if(1)
	{
		aws_iot_mqtt_internal_write_utf8_string(long_3,short_1,double_3);

		double_1 = tan ( double_5 ) ;
	}
	short_2 = aws_iot_mqtt_internal_init_header(char_1,char_1,float_3,long_1,long_2);

	char_2 = char_1;
	if(1)
	{
		double_3 = log ( double_2 ) ;
	}
	double_4 = double_6;
	float_3 = float_2 + float_3;
	double_6 = sinh ( double_1 ) ;
	double_1 = asin ( double_5 ) ;
	double_4 = tanh ( double_1 ) ;
	if(1)
	{
		char_3 = aws_iot_mqtt_internal_get_final_packet_length_from_remaining_length(short_2);

		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		float float_3 = 1;
		double double_6 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_5 = 1;
		int int_2 = 1;
		double double_7 = 1;
		short short_3 = 1;
		char char_4 = 1;
		double double_8 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned_int_2 = unsigned_int_1;
		double_6 = sqrt ( double_4 ) ;
		char_4 = char_2;
	}
	if(1)
	{
		double_4 = double_6;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	char_3 = char_5;
	int_2 = int_2;
	if(1)
	{
		double_5 = asin ( double_7 ) ;
	}
	else
	{
		double_6 = acos ( double_3 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		float float_3 = 1;
		double double_6 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_5 = 1;
		int int_2 = 1;
		double double_7 = 1;
		short short_3 = 1;
		char char_4 = 1;
		double double_8 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_5 = double_4 * double_8;
		int_5 = int_3 + int_4;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		aws_iot_mqtt_internal_write_uint_16(long_2,char_3);

		double_6 = fabs ( double_2 ) ;
	}
	float_3 = aws_iot_mqtt_internal_write_len_to_buffer(unsigned_int_3,short_3);

	double_1 = double_2;
	double_4 = double_7 * double_7;
}
void countdown_ms( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "bJbYD") < 0)
	{
		double_1 = double_1 * double_1;
	}
	double_2 = atan ( double_3 ) ;
	double_1 = cos ( double_3 ) ;
	int_1 = int_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	}
	double_2 = sinh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
}
int _aws_iot_mqtt_internal_connect( long parameter_1,short parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = aws_iot_mqtt_internal_wait_for_read(float_1,long_1,short_1,289);

	double_1 = double_1;
	double_2 = log ( double_2 ) ;
	long_1 = _aws_iot_mqtt_serialize_connect(double_2,int_1,long_2,double_3);

	double_1 = tanh ( double_1 ) ;
	double_4 = fmod ( double_4 , double_4 ) ;
	double_4 = ldexp ( double_3 , int_1 ) ;
	double_2 = cos ( double_5 ) ;
	if(1)
	{
		int_1 = aws_iot_mqtt_internal_send_packet(int_2,float_1,double_1);

		short_2 = short_1 * short_2;
		if(1)
		{
			double_6 = floor ( double_5 ) ;
		}
	}
	double_3 = fabs ( double_7 ) ;
	if(1)
	{
		countdown_sec(short_1,unsigned_int_1);

		double_5 = fabs ( double_1 ) ;
	}
	double_2 = ldexp ( double_5 , int_3 ) ;
	long_1 = aws_iot_mqtt_set_connect_params(float_2,short_1);

	double_5 = asin ( double_6 ) ;
	init_timer();

	long_2 = long_3;
	float_1 = float_2;
	if(1)
	{
		double_7 = floor ( double_7 ) ;
	}
	double_2 = double_4;
	if(1)
	{
		float float_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_4 = 1;
		short short_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_2 * int_4;
	}
	double_5 = pow ( double_4 , double_5 ) ;
	if(1)
	{
		double_4 = _aws_iot_mqtt_deserialize_connack(short_3,unsigned_int_1,int_2,unsigned_int_1);

		int_1 = int_3 + int_1;
	}
	short_4 = short_4 * short_1;
	if(1)
	{
		float float_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_4 = 1;
		short short_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		countdown_ms(short_1,float_2);

		short_2 = short_5;
	}
	if(1)
	{
		float float_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_4 = 1;
		short short_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
	double_1 = floor ( double_4 ) ;
	double_4 = pow ( double_5 , double_3 ) ;
	double_7 = tan ( double_2 ) ;
}
int aws_iot_mqtt_set_client_state( int parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double_1 = atan2 ( double_2 , double_2 ) ;
	double_3 = double_3;
	int_1 = int_1 * int_1;
	if(1)
	{
		double_1 = sinh ( double_3 ) ;
	}
	aws_iot_mqtt_get_client_state(long_1);

	int_2 = int_3;
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		double_3 = atan ( double_1 ) ;
		int_3 = int_3;
	}
	else
	{
		double_3 = sinh ( double_2 ) ;
	}
	int_2 = int_2 * int_2;
	if(1)
	{
		double_1 = double_2 + double_1;
	}
	double_4 = cosh ( double_4 ) ;
}
short _aws_iot_mqtt_is_client_state_valid_for_connect( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double_1 = atan ( double_2 ) ;
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		short_1 = short_2;
		float_1 = float_1;
		char_1 = char_1;
		int_1 = int_1 + int_1;
	}
	return short_3;
}
void aws_iot_mqtt_get_client_state( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = log ( double_1 ) ;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "d|_") > 0)
	{
	}
	double_2 = floor ( double_2 ) ;
}
short aws_iot_mqtt_internal_flushBuffers( int parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 * int_1;
	return short_1;
}
long aws_iot_mqtt_connect( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_1 = 1;
	double double_7 = 1;
	float float_2 = 1;
	short short_5 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = cosh ( double_2 ) ;
	double_1 = cos ( double_2 ) ;
	short_1 = short_1 + short_1;
	if(1)
	{
		double_2 = cosh ( double_2 ) ;
	}
	float_1 = float_1;
	double_3 = atan ( double_4 ) ;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "K") < 0)
	{
		aws_iot_mqtt_get_client_state(long_1);

		int_1 = int_1 * int_1;
	}
	short_3 = short_2 + short_2;
	int_1 = int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		short short_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		char char_1 = 1;
		double double_7 = 1;
		float float_2 = 1;
		short short_5 = 1;
		long long_2 = 1;
		int int_2 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int_2 = int_3;
		short_4 = aws_iot_mqtt_internal_flushBuffers(int_3);

		double_3 = double_1 * double_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			int int_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			short short_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			char char_1 = 1;
			double double_7 = 1;
			float float_2 = 1;
			short short_5 = 1;
			long long_2 = 1;
			int int_2 = 1;
			int int_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double_4 = ceil ( double_5 ) ;
		}
		int_1 = int_4;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		short short_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		char char_1 = 1;
		double double_7 = 1;
		float float_2 = 1;
		short short_5 = 1;
		long long_2 = 1;
		int int_2 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_6 = ceil ( double_6 ) ;
	}
	int_5 = aws_iot_mqtt_set_client_state(int_6,char_1,double_7);

	float_1 = float_2;
	short_5 = _aws_iot_mqtt_is_client_state_valid_for_connect(long_2);

	int_1 = _aws_iot_mqtt_internal_connect(long_2,short_5);

}
void aws_iot_shadow_connect( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = sinh ( double_1 ) ;
	double_2 = double_1;
	double_3 = pow ( double_3 , double_3 ) ;
	float_1 = float_1 + float_2;
	if(1)
	{
		double_2 = double_1;
	}
	double_2 = double_1;
	double_4 = fmod ( double_4 , double_2 ) ;
	double_1 = log10 ( double_3 ) ;
	short_1 = short_1;
	double_2 = fabs ( double_4 ) ;
	double_2 = tanh ( double_3 ) ;
	double_2 = asin ( double_2 ) ;
	initializeRecords(char_1);

	double_3 = ceil ( double_3 ) ;
	char_1 = char_2 + char_1;
	short_1 = short_2 * short_2;
	double_5 = tanh ( double_6 ) ;
	if(1)
	{
		double_7 = tanh ( double_6 ) ;
	}
	double_6 = ceil ( double_2 ) ;
	if(1)
	{
		double_1 = fabs ( double_2 ) ;
		int_1 = aws_iot_mqtt_subscribe(float_2,unsigned_int_1,short_2,double_7,long_1);

		double_3 = floor ( double_4 ) ;
		long_1 = aws_iot_mqtt_connect(float_2,int_1);

		double_7 = floor ( double_4 ) ;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
}
void initDeltaTokens()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double_1 = exp ( double_2 ) ;
	}
	long_1 = long_1 + long_1;
	char_1 = char_2;
}
void aws_iot_shadow_reset_last_received_version()
{
	float float_1 = 1;
	float float_2 = 1;
	float_2 = float_1 * float_1;
}
void resetClientTokenSequenceNum()
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_2;
}
void init_timer()
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
}
float iot_tls_destroy( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	double_1 = fabs ( double_2 ) ;
	short_1 = short_1 * short_1;
	double_1 = double_1;
	double_2 = floor ( double_2 ) ;
	double_1 = log ( double_1 ) ;
	double_1 = atan2 ( double_1 , double_1 ) ;
	double_3 = atan ( double_4 ) ;
	double_3 = tan ( double_5 ) ;
	double_2 = tanh ( double_6 ) ;
	return float_1;
}
float iot_tls_is_connected( int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
short iot_tls_disconnect( int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char_1 = char_1 + char_2;
	int_1 = int_1;
	do
	{
		double_1 = tanh ( double_1 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_2 = pow ( double_1 , double_3 ) ;
	looper_1 += 1;
	return short_1;
}
unsigned int iot_tls_mqtt_get_fixed_uint16_from_message( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = fabs ( double_1 ) ;
	int_1 = int_2;
	return unsigned_int_1;
}
long iot_tls_mqtt_copy_string_from_message( char parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double_1 = double_1 + double_1;
	unsigned_int_1 = iot_tls_mqtt_get_fixed_uint16_from_message(short_1,double_2);

	double_1 = acos ( double_2 ) ;
	return long_1;
}
double iot_tls_mqtt_get_end_of_variable_length_int( long parameter_1,float parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		looper_1 += 1;
		double_1 = atan ( double_2 ) ;
	}
	char_1 = char_1;
	return double_1;
}
int iot_tls_mqtt_read_variable_length_int( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double_1 = cos ( double_1 ) ;
	double_2 = log ( double_3 ) ;
	double_2 = double_1;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		char_1 = char_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		float_1 = float_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
	looper_1 += 1;
	return int_1;
}
short iot_tls_write( unsigned int parameter_1,unsigned int parameter_2,float parameter_3,char parameter_4,short parameter_5)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long_1 = iot_tls_mqtt_copy_string_from_message(char_1,double_1,float_1);

	short_1 = short_2;
	int_1 = iot_tls_mqtt_read_variable_length_int(int_2,unsigned_int_1);

	int_1 = int_2 * int_2;
	short_3 = short_2 + short_1;
	char_2 = has_timer_expired(unsigned_int_1);

	int_3 = int_2;
	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			if(1)
			{
				long long_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				float float_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				short short_3 = 1;
				char char_2 = 1;
				int int_3 = 1;
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_4 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double_2 = cosh ( double_1 ) ;
				double_3 = iot_tls_mqtt_get_end_of_variable_length_int(long_1,float_1);

				double_4 = acos ( double_5 ) ;
			}
		}
		if(1)
		{
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		return short_1;
	}
	if(1)
	{
		return short_4;
	}
	return short_1;
}
float isTimerExpired( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short_1 = short_2;
	char_1 = char_1;
	if(1)
	{
		double_1 = floor ( double_2 ) ;
		double_1 = tanh ( double_3 ) ;
		if(1)
		{
			double_2 = ceil ( double_3 ) ;
		}
	}
	else
	{
		double_1 = fmod ( double_2 , double_3 ) ;
	}
	return float_1;
}
char has_timer_expired( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_2 = exp ( double_3 ) ;
	return char_1;
}
int iot_tls_read( int parameter_1,float parameter_2,int parameter_3,short parameter_4,double parameter_5)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = short_1;
	double_1 = acos ( double_2 ) ;
	double_1 = asin ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		short short_3 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		looper_1 += 1;
		short_1 = short_2 * short_2;
		if(1)
		{
			short short_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			short short_3 = 1;
			int int_1 = 1;
			short short_2 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char_1 = has_timer_expired(unsigned_int_1);

			char_1 = char_2 + char_2;
			float_1 = isTimerExpired(short_3);

			unsigned_int_2 = unsigned_int_3;
			double_2 = log10 ( double_2 ) ;
		}
		if(1)
		{
			return int_1;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		char_1 = char_1 * char_1;
		return int_1;
	}
	if(1)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
}
long _iot_tls_verify_cert(double parameter_2,int parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	int_1 = int_1 * int_1;
	double_1 = asin ( double_3 ) ;
	double_2 = floor ( double_3 ) ;
	double_2 = atan ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = acos ( double_4 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		double_2 = sqrt ( double_3 ) ;
	}
	return long_1;
}
int iot_tls_connect( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_12 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_13 = 1;
	int int_6 = 1;
	int_1 = int_2;
	float_1 = float_1;
	double_1 = sinh ( double_1 ) ;
	double_2 = sqrt ( double_2 ) ;
	double_3 = exp ( double_2 ) ;
	double_1 = pow ( double_3 , double_2 ) ;
	long_1 = _iot_tls_verify_cert(double_4,int_3,char_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		return int_4;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	double_2 = log10 ( double_5 ) ;
	unsigned_int_2 = unsigned_int_2;
	double_3 = log ( double_5 ) ;
	float_1 = float_1;
	double_6 = floor ( double_7 ) ;
	double_4 = fabs ( double_5 ) ;
	double_5 = acos ( double_1 ) ;
	double_8 = atan2 ( double_8 , double_1 ) ;
	double_2 = ldexp ( double_5 , int_1 ) ;
	double_7 = sinh ( double_9 ) ;
	if(1)
	{
		double_8 = floor ( double_3 ) ;
		return int_2;
	}
	double_9 = atan ( double_4 ) ;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		float_1 = float_2;
		return int_3;
	}
	double_7 = sinh ( double_9 ) ;
	double_10 = asin ( double_4 ) ;
	unsigned_int_5 = unsigned_int_1;
	if(1)
	{
		short_1 = short_1 * short_1;
		return int_3;
	}
	double_5 = double_1;
	if(1)
	{
		double_2 = tanh ( double_7 ) ;
		double_3 = sqrt ( double_9 ) ;
		return int_4;
	}
	double_1 = exp ( double_10 ) ;
	double_2 = fabs ( double_9 ) ;
	unsigned_int_5 = unsigned_int_3;
	if(1)
	{
		double_9 = log ( double_4 ) ;
		{
			return int_4;
			return int_4;
			return int_1;
		}
		unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
	}
	long_3 = long_1 * long_2;
	if(1)
	{
		int_1 = int_2;
		return int_4;
	}
	double_5 = acos ( double_6 ) ;
	double_1 = double_10 * double_10;
	if(1)
	{
		double_8 = sqrt ( double_6 ) ;
		return int_1;
	}
	short_1 = short_1;
	if(1)
	{
		char_1 = char_1;
	}
	else
	{
		unsigned_int_4 = unsigned_int_2 + unsigned_int_5;
	}
	double_3 = cos ( double_7 ) ;
	double_2 = tanh ( double_5 ) ;
	if(1)
	{
		double_4 = log ( double_1 ) ;
		return int_4;
	}
	int_1 = int_4 + int_4;
	if(1)
	{
		if(1)
		{
			int_1 = int_2 + int_5;
			return int_5;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
		return int_3;
	}
	if(1)
	{
		_iot_tls_set_connect_params(double_9,char_1,char_1,char_2,char_3,short_2,float_1,float_2);

		double_8 = tanh ( double_10 ) ;
		return int_2;
	}
	double_5 = fmod ( double_1 , double_7 ) ;
	float_3 = float_3;
	long_1 = long_2;
	double_8 = double_3 + double_8;
	long_4 = long_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			int_4 = int_1;
			if(1)
			{
				unsigned_int_5 = unsigned_int_6;
			}
			return int_4;
		}
	}
	double_6 = pow ( double_10 , double_1 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_12 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_13 = 1;
		int int_6 = 1;
		double_11 = log10 ( double_11 ) ;
	}
	else
	{
		double_9 = atan2 ( double_7 , double_12 ) ;
	}
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			double double_4 = 1;
			int int_3 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			short short_2 = 1;
			float float_3 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_12 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_13 = 1;
			int int_6 = 1;
			double_3 = double_12;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_7;
			double_8 = tanh ( double_5 ) ;
			double_9 = floor ( double_10 ) ;
		}
		else
		{
			double_7 = atan2 ( double_8 , double_10 ) ;
			double_4 = floor ( double_1 ) ;
		}
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_12 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_13 = 1;
		int int_6 = 1;
		double_13 = cos ( double_10 ) ;
		double_6 = double_4 * double_5;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_12 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_13 = 1;
		int int_6 = 1;
		double_7 = tan ( double_5 ) ;
		double_10 = ceil ( double_1 ) ;
		int_6 = int_4;
	}
	double_10 = double_3;
	return int_3;
}
void _iot_tls_set_connect_params( double parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,short parameter_6,float parameter_7,float parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	double_4 = log10 ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_4 = ceil ( double_3 ) ;
	double_4 = asin ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_4 = acos ( double_3 ) ;
}
void iot_tls_init( double parameter_1,char parameter_2,char parameter_3,char parameter_4,char parameter_5,short parameter_6,int parameter_7,unsigned int parameter_8)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_10 = 1;
	int int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double_3 = double_1 + double_2;
	double_4 = acos ( double_5 ) ;
	int_1 = iot_tls_read(int_1,float_1,int_1,short_1,double_6);

	float_1 = iot_tls_is_connected(int_1);

	double_7 = cos ( double_8 ) ;
	short_2 = iot_tls_write(unsigned_int_1,unsigned_int_2,float_2,char_1,short_1);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
	_iot_tls_set_connect_params(double_1,char_1,char_1,char_2,char_2,short_1,float_3,float_2);

	float_4 = iot_tls_destroy(unsigned_int_1);

	double_7 = ceil ( double_9 ) ;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_2;
	double_10 = fabs ( double_1 ) ;
	int_2 = iot_tls_connect(char_3,long_1);

	double_1 = sinh ( double_6 ) ;
	short_1 = iot_tls_disconnect(int_3);

}
long aws_iot_mqtt_set_connect_params( float parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short_1 = short_2;
	}
	float_1 = float_1;
	long_3 = long_1 * long_2;
	double_1 = atan2 ( double_2 , double_2 ) ;
	double_2 = tanh ( double_1 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		if(1)
		{
			double_2 = fabs ( double_3 ) ;
		}
		char_3 = char_1 + char_2;
	}
	double_2 = double_3;
	else
	{
		double_1 = cos ( double_2 ) ;
	}
	double_1 = atan2 ( double_1 , double_3 ) ;
	short_3 = short_4;
	double_3 = acos ( double_2 ) ;
	double_4 = atan ( double_2 ) ;
	double_4 = ldexp ( double_1 , int_1 ) ;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
	double_1 = ldexp ( double_3 , int_3 ) ;
	double_2 = tan ( double_1 ) ;
	double_1 = exp ( double_3 ) ;
	unsigned_int_5 = unsigned_int_2;
	double_1 = ldexp ( double_5 , int_3 ) ;
}
int aws_iot_mqtt_init( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	long long_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	float float_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_14 = 1;
	short short_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_12 = 1;
	double double_13 = 1;
	long long_2 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	char_2 = char_1 + char_2;
	double_3 = fmod ( double_4 , double_1 ) ;
	double_2 = sinh ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_6 = 1;
		long long_1 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		float float_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		short short_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_12 = 1;
		double double_13 = 1;
		long long_2 = 1;
		short_3 = short_1 + short_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_6 = 1;
		long long_1 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		float float_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		short short_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_12 = 1;
		double double_13 = 1;
		long long_2 = 1;
		double_3 = double_5;
		double_2 = tan ( double_5 ) ;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		float_1 = float_2;
	}
	double_1 = log10 ( double_6 ) ;
	int_1 = int_1;
	double_2 = sqrt ( double_2 ) ;
	double_1 = pow ( double_1 , double_1 ) ;
	long_1 = aws_iot_mqtt_set_connect_params(float_1,short_4);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	long_1 = long_1;
	char_4 = char_1 + char_3;
	double_1 = asin ( double_2 ) ;
	char_4 = char_2;
	if(1)
	{
		double_2 = cos ( double_6 ) ;
	}
	double_7 = sqrt ( double_2 ) ;
	double_2 = sinh ( double_1 ) ;
	if(1)
	{
		double_1 = atan2 ( double_2 , double_4 ) ;
	}
	double_5 = tan ( double_1 ) ;
	if(1)
	{
		double_8 = sqrt ( double_1 ) ;
		init_timer();

		double_9 = tanh ( double_3 ) ;
	}
	double_11 = double_10 * double_11;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_6 = 1;
		long long_1 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		float float_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		short short_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_12 = 1;
		double double_13 = 1;
		long long_2 = 1;
		float_2 = float_3 * float_2;
		double_9 = log ( double_1 ) ;
		double_12 = ldexp ( double_13 , int_1 ) ;
	}
	unsigned_int_1 = unsigned_int_3;
	float_1 = float_3 * float_2;
	iot_tls_init(double_8,char_5,char_2,char_6,char_6,short_2,int_2,unsigned_int_5);

	char_4 = char_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_6 = 1;
		long long_1 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		float float_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_14 = 1;
		short short_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_12 = 1;
		double double_13 = 1;
		long long_2 = 1;
		long_2 = long_2;
		double_11 = atan2 ( double_11 , double_11 ) ;
		double_5 = double_6 * double_14;
		char_3 = char_3 + char_1;
		int_1 = int_1;
	}
	double_14 = sqrt ( double_7 ) ;
	double_7 = cos ( double_11 ) ;
	double_3 = pow ( double_9 , double_4 ) ;
	double_10 = ldexp ( double_1 , int_2 ) ;
}
int aws_iot_shadow_init( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_8 = 1;
	double_1 = log ( double_1 ) ;
	int_1 = aws_iot_mqtt_init(int_1,short_1);

	float_2 = float_1 * float_1;
	double_1 = asin ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	float_1 = float_2;
	double_2 = double_1 + double_1;
	double_2 = atan2 ( double_2 , double_2 ) ;
	resetClientTokenSequenceNum();

	double_2 = fmod ( double_3 , double_2 ) ;
	initDeltaTokens();

	double_4 = atan ( double_4 ) ;
	double_1 = double_5 + double_4;
	int_2 = int_3;
	double_3 = double_2 + double_3;
	double_6 = exp ( double_7 ) ;
	aws_iot_shadow_reset_last_received_version();

	double_3 = double_6;
	long_1 = long_2;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		double_1 = acos ( double_8 ) ;
	}
	double_9 = ceil ( double_6 ) ;
	double_2 = cos ( double_7 ) ;
	double_6 = exp ( double_5 ) ;
	double_7 = asin ( double_4 ) ;
}
void parseInputArgsForConnectParams( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_4 = 1;
	float_1 = float_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		{
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_4 = 1;
			char_1 = char_2;
			float_1 = float_2 + float_3;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			double_3 = double_1 * double_2;
			double_1 = ldexp ( double_1 , int_1 ) ;
			double_4 = cosh ( double_1 ) ;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_4 = 1;
				float_3 = float_4 + float_3;
			}
			if(1)
			{
				double_5 = double_2;
			}
			else
			{
				double_5 = exp ( double_5 ) ;
			}
			unsigned_int_4 = unsigned_int_2 + unsigned_int_1;
		}
	}
}
int main(int argc, char **argv)
{
	int uni_para =299;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_9 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_10 = 1;
	int int_4 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_3 = 1;
	double double_12 = 1;
	double double_13 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_4 = 1;
	short_1 = short_1;
	double_1 = atan ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	double_2 = ldexp ( double_3 , int_1 ) ;
	char_1 = char_1 * char_2;
	double_4 = cosh ( double_2 ) ;
	double_4 = double_5 * double_5;
	double_5 = double_3;
	double_3 = fmod ( double_4 , double_2 ) ;
	double_2 = ldexp ( double_5 , int_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_3 = acos ( double_6 ) ;
	double_7 = pow ( double_2 , double_2 ) ;
	double_3 = double_6 * double_2;
	double_1 = exp ( double_2 ) ;
	double_5 = tanh ( double_6 ) ;
	double_8 = double_4 + double_1;
	unsigned_int_5 = unsigned_int_6;
	double_5 = log ( double_3 ) ;
	double_2 = floor ( double_5 ) ;
	int_1 = int_1;
	double_6 = asin ( double_2 ) ;
	double_9 = double_5 * double_6;
	char controller4vul_71[3];
	fgets(controller4vul_71 ,4 ,stdin);
	if( strcmp( controller4vul_71, "13y") > 0)
	{
		int_1 = aws_iot_shadow_yield(long_1,short_2,uni_para);

		int_2 = int_1 + int_3;
		return int_1;
	}
	char_2 = char_3 * char_1;
	double_10 = atan ( double_7 ) ;
	int_2 = int_2 * int_3;
	int_2 = int_4;
	double_5 = cos ( double_9 ) ;
	double_8 = cosh ( double_3 ) ;
	if(1)
	{
		double_11 = double_3;
		return int_4;
	}
	int_4 = int_3 + int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		return int_1;
	}
	double_2 = double_10 * double_7;
	double_2 = double_6 + double_11;
	unsigned_int_7 = unsigned_int_8;
	double_6 = sinh ( double_11 ) ;
	short_2 = short_1 * short_2;
	short_1 = short_1 * short_3;
	double_9 = fmod ( double_10 , double_12 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_4 = fabs ( double_7 ) ;
		if(1)
		{
			double_9 = tanh ( double_3 ) ;
		}
		if(1)
		{
			short short_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_9 = 1;
			long long_1 = 1;
			short short_2 = 1;
			int int_3 = 1;
			char char_3 = 1;
			double double_10 = 1;
			int int_4 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			short short_3 = 1;
			double double_12 = 1;
			double double_13 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_2 = 1;
			short short_4 = 1;
			double_3 = cos ( double_11 ) ;
			long_2 = long_1;
			unsigned_int_8 = unsigned_int_7 + unsigned_int_5;
		}
		double_13 = log10 ( double_9 ) ;
	}
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_9 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		char char_3 = 1;
		double double_10 = 1;
		int int_4 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_3 = 1;
		double double_12 = 1;
		double double_13 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		short short_4 = 1;
		short_3 = short_4 + short_4;
	}
	float_2 = float_1 * float_1;
	double_9 = tan ( double_12 ) ;
	char controller_6[3];
	fgets(controller_6 ,3 ,stdin);
	if( strcmp( controller_6, "5O") > 0)
	{
		double_3 = exp ( double_13 ) ;
	}
	return int_2;
}
