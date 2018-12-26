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

int v_fputs( short parameter_1,int parameter_2);
short v_trace_dump_data( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
void v_retrace_dump_parameter( double parameter_1,double parameter_2,int parameter_3,int uni_para);
short v_trace_printf_backtrace( int parameter_1);
void v_retrace_log_and_redirect_after( long parameter_1);
short v_stat( int parameter_1,short parameter_2);
short v_trace_mode( short parameter_1,char parameter_2);
short v_strcpy( long parameter_1,unsigned int parameter_2);
unsigned int v_trace_printf_str( unsigned int parameter_1,float parameter_2,int parameter_3);
double v_retrace_print_parameter( unsigned int parameter_1,short parameter_2,double parameter_3,int parameter_4);
double v_trace_set_color( unsigned int parameter_1,char parameter_2);
double v_rtr_vaprintf( char parameter_1,int parameter_2,short parameter_3);
double v_rtr_printf( unsigned int parameter_1,float parameter_2,double parameter_3);
unsigned int v_trace_printf( double parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4);
float v_retrace_init_file_key();
char v_retrace_get_thread_file();
int v_rtr_check_config_token( short parameter_1,short parameter_2,float parameter_3,int parameter_4);
unsigned int v_parse_logging_options( int parameter_1,char parameter_2);
long v_rtr_init_logging_config();
char v_rtr_check_logging_config( short parameter_1,int parameter_2);
float v_get_config_file(int uni_para);
short v_get_config(int uni_para);
unsigned int v_rtr_parse_config( long parameter_1,short parameter_2,long parameter_3,int uni_para);
char v_rtr_get_config_single_internal( int parameter_1,unsigned int parameter_2,int uni_para);
void v_set_tracing_state_thread( int parameter_1);
void v_trace_restore( int parameter_1);
int v_trace_disable();
unsigned int v_retrace_get_time();
long v_get_tracing_state_thread();
short v_initialize_tracing_key();
long v_retrace_init_tracing_key();
char v_is_main_thread();
int v_get_tracing_state();
int v_get_tracing_enabled();
void v_retrace_event( char parameter_1,int uni_para);
void v_retrace_log_and_redirect_before( float parameter_1,int uni_para);
int v_memset( int parameter_1,int parameter_2,long parameter_3);
double v_dlopen( unsigned int parameter_1,int parameter_2,int uni_para);
short v_assert_string_equal( unsigned int parameter_1,double parameter_2);
int v_assert_int_equal( unsigned int parameter_1,short parameter_2);
void v_assert_non_null( int parameter_1);
unsigned int v_file_descriptor_get( int parameter_1);
void v_file_descriptor_remove( int parameter_1);
int v_file_descriptor_update( int parameter_1,char parameter_2,char parameter_3);
int v_test_fdlist();
int v_fputs( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_1 = 1;
	double_1 = double_2;
	if(1)
	{
		double_1 = double_2 * double_2;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		if(1)
		{
			double_2 = double_1;
		}
		short_1 = short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		int int_1 = 1;
		long_1 = long_1 + long_2;
		unsigned_int_3 = unsigned_int_3 * unsigned_int_4;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_1 = 1;
			int int_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_3 = 1;
			int int_1 = 1;
			long_3 = long_1 * long_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_1 = 1;
			int int_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_3 = 1;
			int int_1 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			short_1 = short_1 + short_1;
		}
		unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "f") < 0)
	{
		double_4 = double_5;
	}
	double_1 = double_1 * double_5;
	return int_2;
}
short v_trace_dump_data( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_3 = 1;
	short short_3 = 1;
	long long_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float_1 = float_1 + float_1;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_2 + double_1;
	double_1 = double_2 + double_3;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		long long_3 = 1;
		short short_3 = 1;
		long long_2 = 1;
		int int_2 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char controller4vul_6[2];
		fgets(controller4vul_6 ,3 ,stdin);
		if( strcmp( controller4vul_6, "M5") > 0)
		{
			char controller4vul_7[1];
			fgets(controller4vul_7 ,2 ,stdin);
			if( strcmp( controller4vul_7, "n") < 0)
			{
				float float_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_1 = 1;
				int int_1 = 1;
				long long_3 = 1;
				short short_3 = 1;
				long long_2 = 1;
				int int_2 = 1;
				char char_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				char_1 = v_rtr_get_config_single_internal(int_1,unsigned_int_1,uni_para);

				int_1 = int_1 + int_1;
				int_2 = int_2;
				float_1 = float_1;
			}
			double_2 = double_3;
			unsigned_int_2 = unsigned_int_2;
			long_1 = long_1;
		}
		float_1 = float_1;
		long_1 = long_1 + long_2;
	}
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "2") < 0)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		long long_3 = 1;
		short short_3 = 1;
		long long_2 = 1;
		int int_2 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char_2 = char_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
		short_2 = short_1 * short_1;
		int_1 = int_3;
		unsigned_int_4 = unsigned_int_3;
	}
	long_3 = long_1 + long_3;
	return short_3;
}
void v_retrace_dump_parameter( double parameter_1,double parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_4 = 1;
	long long_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char controller4vul_4[1];
	fgets(controller4vul_4 ,2 ,stdin);
	if( strcmp( controller4vul_4, ">") > 0)
	{
		double_1 = double_1;
		unsigned_int_1 = unsigned_int_1;
		double_2 = double_2 + double_1;
		char controller4vul_5[1];
		fgets(controller4vul_5 ,2 ,stdin);
		if( strcmp( controller4vul_5, "#") < 0)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			char char_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			long long_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_4 = 1;
			long long_5 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short_1 = v_trace_dump_data(unsigned_int_1,short_1,unsigned_int_2,uni_para);

			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_2 = unsigned_int_1;
		int_1 = int_1 + int_2;
		double_3 = double_2 * double_3;
		double_1 = double_4;
		long_1 = long_1;
		double_5 = double_1;
		short_1 = short_2;
		long_2 = long_1 * long_1;
		double_5 = double_2;
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			char char_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			long long_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_4 = 1;
			long long_5 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_3 = 1;
			short short_4 = 1;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				int_3 = int_2;
			}
		}
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float_1 = float_1 * float_1;
		long_3 = long_3;
		double_5 = double_5 + double_5;
		int_2 = int_1;
		long_1 = long_2 + long_3;
		double_3 = double_3;
		long_1 = long_2;
		int_3 = int_2;
		char_2 = char_3;
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double double_1 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_2 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				long long_1 = 1;
				double double_5 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_3 = 1;
				char char_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_1 = 1;
				long long_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				long long_4 = 1;
				long long_5 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				short short_3 = 1;
				short short_4 = 1;
				long_4 = long_4 + long_5;
				if(1)
				{
					double double_1 = 1;
					unsigned int unsigned_int_1 = 1;
					double double_2 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					long long_1 = 1;
					double double_5 = 1;
					long long_2 = 1;
					unsigned int unsigned_int_3 = 1;
					int int_3 = 1;
					char char_1 = 1;
					short short_2 = 1;
					unsigned int unsigned_int_4 = 1;
					float float_1 = 1;
					long long_3 = 1;
					char char_2 = 1;
					char char_3 = 1;
					long long_4 = 1;
					long long_5 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					short short_3 = 1;
					short short_4 = 1;
					double_4 = double_4 * double_5;
					int_2 = int_4;
					unsigned_int_5 = unsigned_int_5;
				}
			}
		}
	}
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_4 = 1;
		long long_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_1 = short_3 * short_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
	}
}
short v_trace_printf_backtrace( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = v_rtr_get_config_single_internal(int_1,unsigned_int_2,-1 );

	short_1 = short_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	long_3 = long_1 + long_2;
	unsigned_int_3 = unsigned_int_4;
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "Q") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		int int_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_4 = 1;
		long long_5 = 1;
		double double_2 = 1;
		char_2 = char_1 + char_2;
		unsigned_int_1 = unsigned_int_4 + unsigned_int_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_2 = 1;
			int int_2 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_4 = 1;
			long long_5 = 1;
			double double_2 = 1;
			unsigned_int_4 = v_trace_printf(double_1,int_1,unsigned_int_3,unsigned_int_1);

			double_1 = double_2;
		}
		int_1 = v_trace_disable();

		unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
		long_1 = long_2 * long_2;
		double_3 = v_trace_set_color(unsigned_int_6,char_1);

		long_5 = long_3 + long_4;
	}
	long_3 = long_3;
	return short_2;
	v_trace_restore(int_2);

}
void v_retrace_log_and_redirect_after( long parameter_1)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	v_retrace_event(char_1,-1 );

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1;
}
short v_stat( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double_3 = double_1 * double_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	int_2 = int_2 + int_1;
	long_2 = long_2;
	short_2 = short_1 + short_2;
	int_3 = int_2 + int_3;
	double_3 = double_3 * double_1;
	int_3 = v_memset(int_4,int_5,long_3);

	v_retrace_log_and_redirect_after(long_3);

	double_1 = double_2;
	v_retrace_log_and_redirect_before(float_1,-1 );

	double_3 = double_3 * double_4;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	double_5 = double_3;
	double_6 = double_1 * double_4;
	int_7 = int_6 * int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "&") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_3 = 1;
		float float_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_2 = 1;
		char char_1 = 1;
		double_1 = double_3 * double_2;
		float_1 = float_1 * float_2;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, ")&") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_3 = 1;
		float float_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char_1 = char_1;
	}
	short_1 = short_3;
	return short_4;
}
short v_trace_mode( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_2 = 1;
	short short_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_6 = 1;
	long long_3 = 1;
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double_2 = double_2 * double_3;
	}
	if(1)
	{
		int_1 = int_2;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 * long_1;
	int_3 = int_2 + int_3;
	int_1 = int_2;
	short_1 = short_2;
	char_3 = char_1 + char_2;
	double_1 = double_4;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "X") < 0)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	if(1)
	{
		double_4 = double_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 * unsigned_int_3;
	}
	if(1)
	{
		short_3 = short_3 * short_3;
	}
	short_3 = short_4 * short_4;
	long_1 = long_1 + long_1;
	double_2 = double_3;
	short_4 = short_4 * short_3;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	float_1 = float_1;
	int_1 = int_2 + int_4;
	long_1 = long_2 * long_2;
	if(1)
	{
		long_1 = long_1 + long_2;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		int int_4 = 1;
		long long_2 = 1;
		short short_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_6 = 1;
		long long_3 = 1;
		long_1 = long_2 + long_3;
	}
	char controller_11[2];
	fgets(controller_11 ,2 ,stdin);
	if( strcmp( controller_11, "w") > 0)
	{
		int_2 = int_3;
	}
	if(1)
	{
		int_1 = int_2;
	}
	unsigned_int_1 = unsigned_int_5;
	short_4 = short_2 * short_5;
	unsigned_int_2 = unsigned_int_3;
	int_1 = int_4;
	double_2 = double_5 * double_2;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_4;
	int_1 = int_4;
	unsigned_int_6 = unsigned_int_7;
	short_6 = short_2;
	return short_2;
}
short v_strcpy( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	long_2 = long_1 * long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "N") > 0)
	{
		int_1 = int_1;
	}
	char_1 = char_1 * char_2;
	float_1 = float_2;
	int_2 = int_1 + int_2;
	short_1 = short_1;
	return short_2;
}
unsigned int v_trace_printf_str( unsigned int parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double_1 = double_2;
	short_1 = v_strcpy(long_1,unsigned_int_1);

	int_1 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1;
	v_trace_restore(int_2);

	double_1 = double_1;
	int_3 = v_trace_disable();

	float_1 = float_2;
	char_2 = char_1 + char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "MA") > 0)
	{
	}
	int_1 = int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_2 = 1;
		char char_3 = 1;
		long_2 = long_1;
		unsigned_int_3 = v_trace_printf(double_3,int_4,unsigned_int_3,unsigned_int_1);

		char_1 = char_3;
	}
	return unsigned_int_1;
}
double v_retrace_print_parameter( unsigned int parameter_1,short parameter_2,double parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	int int_3 = 1;
	double double_2 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = v_trace_printf_str(unsigned_int_2,float_1,int_1);

	int_2 = int_1 * int_1;
	unsigned_int_1 = v_file_descriptor_get(int_2);

	char_2 = char_1 + char_2;
	double_1 = v_trace_set_color(unsigned_int_3,char_1);

	short_1 = v_stat(int_2,short_1);

	float_2 = float_2 * float_3;
	char_2 = char_3;
	double_1 = double_1;
	unsigned_int_2 = v_trace_printf(double_1,int_3,unsigned_int_3,unsigned_int_1);

	v_trace_restore(int_1);

	double_1 = double_2;
	short_1 = v_trace_mode(short_1,char_4);

	unsigned_int_3 = unsigned_int_4;
	int_2 = v_trace_disable();

	int_1 = int_3;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
	return double_2;
}
double v_trace_set_color( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "[^") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned_int_1 = v_trace_printf(double_1,int_1,unsigned_int_2,unsigned_int_1);

		float_2 = float_1 * float_1;
	}
	return double_1;
}
double v_rtr_vaprintf( char parameter_1,int parameter_2,short parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	short short_3 = 1;
	double double_3 = 1;
	float_3 = float_1 * float_2;
	double_1 = double_2;
	short_1 = short_1 * short_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2;
	float_6 = float_4 * float_5;
	float_7 = float_1;
	short_2 = short_3;
	short_3 = short_2;
	double_2 = double_3;
	return double_2;
}
double v_rtr_printf( unsigned int parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double_1 = v_rtr_vaprintf(char_1,int_1,short_1);

	int_1 = int_2;
	float_1 = float_1 + float_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	return double_2;
}
unsigned int v_trace_printf( double parameter_1,int parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double_1 = v_rtr_printf(unsigned_int_1,float_1,double_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_1 = v_retrace_get_time();

	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		float float_2 = 1;
		double_1 = double_3 + double_4;
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_4 = 1;
			float float_2 = 1;
			int_1 = v_trace_disable();

			v_trace_restore(int_2);

			float_2 = float_2;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
		}
	}
	double_3 = v_rtr_vaprintf(char_1,int_2,short_1);

	short_3 = short_1 + short_2;
	int_2 = int_2 + int_3;
	char_1 = v_is_main_thread();

	unsigned_int_4 = unsigned_int_1;
	int_1 = int_4 + int_4;
	return unsigned_int_5;
}
float v_retrace_init_file_key()
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	long_1 = long_2;
	return float_1;
}
char v_retrace_get_thread_file()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		short short_3 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short_1 = short_2;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, ".") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			float float_1 = 1;
			char char_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_2 = 1;
			short short_3 = 1;
			char char_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double_2 = double_1 * double_1;
			float_1 = v_retrace_init_file_key();

			short_1 = short_3 * short_1;
			if(1)
			{
				char_1 = v_is_main_thread();

				long_1 = long_2;
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				double double_1 = 1;
				float float_1 = 1;
				char char_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_2 = 1;
				short short_3 = 1;
				char char_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int_3 = int_1 + int_2;
			}
			char_2 = char_2;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				double double_1 = 1;
				float float_1 = 1;
				char char_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_2 = 1;
				short short_3 = 1;
				char char_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float_2 = float_2 + float_3;
			}
		}
	}
	return char_1;
}
int v_rtr_check_config_token( short parameter_1,short parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	return int_1;
}
unsigned int v_parse_logging_options( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "L") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		char char_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_3 = 1;
		char char_2 = 1;
		double_1 = double_1 * double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				int_1 = int_1;
				if(1)
				{
					short_2 = short_1 + short_1;
				}
				if(1)
				{
					int_1 = v_rtr_check_config_token(short_2,short_1,float_1,int_1);

					double_1 = double_1;
				}
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			int int_3 = 1;
			char char_1 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_3 = 1;
			char char_2 = 1;
			int_3 = int_2 + int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			int int_3 = 1;
			char char_1 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_3 = 1;
			char char_2 = 1;
			char_1 = char_1 + char_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char controller_8[2];
			fgets(controller_8 ,2 ,stdin);
			if( strcmp( controller_8, "S") > 0)
			{
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				float float_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				int int_3 = 1;
				char char_1 = 1;
				int int_4 = 1;
				int int_5 = 1;
				short short_3 = 1;
				char char_2 = 1;
				int_5 = int_4 * int_2;
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					float float_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					int int_3 = 1;
					char char_1 = 1;
					int int_4 = 1;
					int int_5 = 1;
					short short_3 = 1;
					char char_2 = 1;
					short_1 = short_3;
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					float float_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					int int_3 = 1;
					char char_1 = 1;
					int int_4 = 1;
					int int_5 = 1;
					short short_3 = 1;
					char char_2 = 1;
					char_2 = char_2 + char_2;
				}
			}
		}
	}
	return unsigned_int_1;
}
long v_rtr_init_logging_config()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = v_rtr_get_config_single_internal(int_1,unsigned_int_2,-1 );

	double_1 = double_2;
	if(1)
	{
	}
	char_2 = char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_5 = 1;
		char_1 = char_3;
		float_1 = float_1 * float_2;
	}
	double_1 = double_1 + double_2;
	short_2 = short_1 + short_1;
	if(1)
	{
		unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = int_2;
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "Wb") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double_1 = double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_4 = v_parse_logging_options(int_3,char_4);

		char_1 = char_5 + char_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_5 = 1;
		int_4 = v_memset(int_4,int_4,long_1);

		unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	}
	long_2 = long_1 * long_2;
	return long_2;
}
char v_rtr_check_logging_config( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	short_3 = short_1 * short_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "9") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float_1 = float_2;
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
	}
	if(1)
	{
	}
	return char_1;
	long_1 = v_rtr_init_logging_config();

	int_1 = v_rtr_check_config_token(short_3,short_3,float_2,int_1);

}
float v_get_config_file(int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_5 = 1;
	short short_1 = 1;
	int int_5 = 1;
	char * vul_var;
	long_1 = long_2;
	int_2 = int_1 + int_1;
	char_3 = char_1 * char_2;
	int_2 = int_1;
	double_1 = double_2;
	char_1 = char_4 * char_4;
	double_2 = double_1 + double_1;
	char controller4vul_9[1];
	fgets(controller4vul_9 ,2 ,stdin);
	if( strcmp( controller4vul_9, "#") > 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		long_1 = long_2 * long_1;
		char controller4vul_10[1];
		fgets(controller4vul_10 ,2 ,stdin);
		if( strcmp( controller4vul_10, "Z") < 0)
		{
			strcpy(vul_var, "CWE-761");
			if(uni_para == 436)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
		}
	}
	int_2 = int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "f") > 0)
	{
	}
	double_4 = double_1 * double_3;
	if(1)
	{
	}
	int_4 = int_3 + int_2;
	double_1 = double_4;
	unsigned_int_1 = unsigned_int_2;
	float_2 = float_1 + float_1;
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "CR") > 0)
	{
	}
	char_4 = char_5;
	short_1 = short_1 * short_1;
	int_5 = int_3;
}
short v_get_config(int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	short_2 = short_1 + short_1;
	char controller4vul_8[1];
	fgets(controller4vul_8 ,2 ,stdin);
	if( strcmp( controller4vul_8, "P") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		float_1 = v_get_config_file(uni_para);

		double_2 = double_1 + double_1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		int_1 = int_1 + int_1;
		double_2 = double_3 + double_1;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "t") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		unsigned_int_3 = unsigned_int_4;
		float_2 = float_1;
	}
	if(1)
	{
		double_3 = double_1;
		double_3 = double_2 * double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		float_1 = float_3;
		char_1 = char_1;
	}
	unsigned_int_3 = unsigned_int_2;
	return short_2;
}
unsigned int v_rtr_parse_config( long parameter_1,short parameter_2,long parameter_3,int uni_para)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short_1 = v_get_config(uni_para);

	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = double_2;
	return unsigned_int_2;
}
char v_rtr_get_config_single_internal( int parameter_1,unsigned int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned_int_1 = v_rtr_parse_config(long_1,short_1,long_2,uni_para);

	double_1 = double_1;
	int_2 = int_1 + int_2;
	int_1 = int_1 * int_3;
	double_3 = double_1 * double_2;
	long_1 = long_2;
	short_1 = short_1;
	return char_1;
}
void v_set_tracing_state_thread( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_2 = int_1 + int_1;
}
void v_trace_restore( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_2;
	v_set_tracing_state_thread(int_1);

	float_1 = float_1 * float_1;
	char_1 = v_is_main_thread();

}
int v_trace_disable()
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	v_trace_restore(int_1);

	int_3 = int_2 * int_2;
	int_4 = int_4 * int_4;
	return int_4;
	int_2 = v_get_tracing_state();

}
unsigned int v_retrace_get_time()
{
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "3a") > 0)
	{
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int_1 = int_1;
		short_1 = short_2;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_3 = unsigned_int_3;
		long_1 = long_1 + long_2;
		short_4 = short_3 * short_1;
		double_1 = double_2;
	}
	short_2 = short_3;
	return unsigned_int_3;
}
long v_get_tracing_state_thread()
{
	long long_1 = 1;
	return long_1;
}
short v_initialize_tracing_key()
{
	int int_1 = 1;
	short short_1 = 1;
	int_1 = int_1 + int_1;
	return short_1;
}
long v_retrace_init_tracing_key()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short_1 = v_initialize_tracing_key();

	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 + double_1;
	return long_1;
}
char v_is_main_thread()
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_2 = float_1 * float_2;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double_1 = double_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long_3 = long_1 * long_2;
		}
	}
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return char_1;
}
int v_get_tracing_state()
{
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "9") < 0)
	{
		char char_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		char_1 = v_is_main_thread();

		int_2 = int_1 * int_1;
	}
	return int_1;
	long_1 = v_retrace_init_tracing_key();

	long_1 = v_get_tracing_state_thread();

}
int v_get_tracing_enabled()
{
	int int_1 = 1;
	return int_1;
	int_1 = v_get_tracing_state();

}
void v_retrace_event( char parameter_1,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long_1 = long_1;
	short_2 = short_1 + short_1;
	double_2 = double_1 + double_2;
	int_2 = int_1 + int_2;
	double_3 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_3[2];
	fgets(controller4vul_3 ,3 ,stdin);
	if( strcmp( controller4vul_3, "eg") < 0)
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		double double_4 = 1;
		v_retrace_dump_parameter(double_1,double_1,int_3,uni_para);

		double_2 = double_4 * double_2;
	}
}
void v_retrace_log_and_redirect_before( float parameter_1,int uni_para)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v_retrace_event(char_1,uni_para);

	long_2 = long_1 * long_1;
	char_1 = char_1;
}
int v_memset( int parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int_2 = int_1 * int_1;
	long_1 = long_2;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_1 * double_2;
	double_2 = double_1;
	double_2 = double_2 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, ",") < 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		int int_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	}
	double_2 = double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "M3") > 0)
	{
	}
	double_5 = double_4 + double_3;
	double_5 = double_3 * double_1;
	char controller_3[2];
	fgets(controller_3 ,2 ,stdin);
	if( strcmp( controller_3, "G") < 0)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		int int_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		long_3 = long_1;
		short_1 = short_1;
		if(1)
		{
			double_3 = double_5;
		}
		int_3 = int_1 * int_2;
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "lH") < 0)
	{
	}
	short_1 = short_1 * short_2;
	if(1)
	{
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
	short_1 = short_1 + short_1;
	int_2 = int_3 + int_3;
	int_4 = int_2;
	return int_2;
}
double v_dlopen( unsigned int parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_2 = long_1 + long_1;
	long_1 = long_2 * long_1;
	double_1 = double_2;
	char_1 = char_1;
	char_2 = char_2;
	char_4 = char_2 * char_3;
	int_1 = int_1 + int_2;
	int_1 = int_3;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_5;
	long_1 = long_3 + long_1;
	int_3 = int_1;
	float_1 = float_1;
	char controller4vul_2[1];
	fgets(controller4vul_2 ,2 ,stdin);
	if( strcmp( controller4vul_2, "{") > 0)
	{
		v_retrace_log_and_redirect_before(float_1,uni_para);

		double_2 = double_1;
	}
	double_4 = double_1 + double_3;
	return double_3;
}
short v_assert_string_equal( unsigned int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_3 = 1;
	double double_3 = 1;
	char char_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 * short_2;
	long_1 = long_1 + long_2;
	if(1)
	{
		float_1 = float_1;
	}
	if(1)
	{
		double_1 = double_1;
	}
	if(1)
	{
		double_1 = double_2;
	}
	if(1)
	{
		unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
	}
	int_1 = int_1 + int_1;
	if(1)
	{
		char_2 = char_1 + char_1;
		float_1 = float_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_3 = 1;
		double double_3 = 1;
		char char_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		if(1)
		{
			double_2 = double_2;
		}
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
		unsigned_int_5 = unsigned_int_3;
	}
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_1 * int_2;
	if(1)
	{
	}
	unsigned_int_7 = unsigned_int_3 * unsigned_int_6;
	if(1)
	{
	}
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_4 = unsigned_int_7 + unsigned_int_1;
	char controller_13[2];
	fgets(controller_13 ,2 ,stdin);
	if( strcmp( controller_13, "U") < 0)
	{
	}
	long_2 = long_2 * long_3;
	double_3 = double_1 * double_2;
	short_1 = short_1;
	char_2 = char_1 + char_3;
	short_1 = short_3;
	if(1)
	{
		int_2 = int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_3 = 1;
		double double_3 = 1;
		char char_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		double_1 = double_1 + double_4;
	}
	return short_2;
}
int v_assert_int_equal( unsigned int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_3;
		}
	}
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_3 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_2 = 1;
			double double_4 = 1;
			char char_2 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_3 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				int int_2 = 1;
				char char_1 = 1;
				char char_3 = 1;
				int int_1 = 1;
				double double_3 = 1;
				double double_2 = 1;
				double double_4 = 1;
				char char_2 = 1;
				double double_5 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_3 = 1;
				if(1)
				{
					int_2 = int_1 + int_1;
				}
				if(1)
				{
					double_1 = double_2 + double_2;
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_1 = 1;
					int int_2 = 1;
					char char_1 = 1;
					char char_3 = 1;
					int int_1 = 1;
					double double_3 = 1;
					double double_2 = 1;
					double double_4 = 1;
					char char_2 = 1;
					double double_5 = 1;
					float float_1 = 1;
					float float_2 = 1;
					unsigned int unsigned_int_4 = 1;
					float float_3 = 1;
					double_4 = double_3 + double_1;
				}
				if(1)
				{
					double_3 = double_2;
					if(1)
					{
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						unsigned int unsigned_int_3 = 1;
						double double_1 = 1;
						int int_2 = 1;
						char char_1 = 1;
						char char_3 = 1;
						int int_1 = 1;
						double double_3 = 1;
						double double_2 = 1;
						double double_4 = 1;
						char char_2 = 1;
						double double_5 = 1;
						float float_1 = 1;
						float float_2 = 1;
						unsigned int unsigned_int_4 = 1;
						float float_3 = 1;
						char_2 = char_1 * char_1;
					}
				}
			}
			if(1)
			{
				int_1 = int_1;
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_1 = 1;
					int int_2 = 1;
					char char_1 = 1;
					char char_3 = 1;
					int int_1 = 1;
					double double_3 = 1;
					double double_2 = 1;
					double double_4 = 1;
					char char_2 = 1;
					double double_5 = 1;
					float float_1 = 1;
					float float_2 = 1;
					unsigned int unsigned_int_4 = 1;
					float float_3 = 1;
					double_3 = double_5 * double_3;
				}
			}
		}
	}
	char_1 = char_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_3 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_2 = 1;
			double double_4 = 1;
			char char_2 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_3 = 1;
			float_1 = float_2;
		}
	}
	if(1)
	{
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_3 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_2 = 1;
			double double_4 = 1;
			char char_2 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_3 = 1;
			unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
			char controller_15[3];
			fgets(controller_15 ,3 ,stdin);
			if( strcmp( controller_15, "E_") > 0)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				int int_2 = 1;
				char char_1 = 1;
				char char_3 = 1;
				int int_1 = 1;
				double double_3 = 1;
				double double_2 = 1;
				double double_4 = 1;
				char char_2 = 1;
				double double_5 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_3 = 1;
				float_3 = float_3;
			}
		}
	}
	return int_2;
}
void v_assert_non_null( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
unsigned int v_file_descriptor_get( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "q") < 0)
	{
	}
	return unsigned_int_1;
}
void v_file_descriptor_remove( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double_1 = double_1 * double_1;
	float_1 = float_1 + float_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if(remainder_check(controller_1,100,2))
	{
		double double_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		char_1 = char_1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, "0") > 0)
		{
			double double_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			char controller_3[3];
			fgets(controller_3 ,3 ,stdin);
			if( strcmp( controller_3, "hJ") == 0)
			{
				double double_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_1 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				short short_1 = 1;
				short_1 = short_1;
			}
			long_2 = long_1 * long_1;
		}
		unsigned_int_1 = v_file_descriptor_get(int_1);

		unsigned_int_1 = unsigned_int_2;
	}
}
int v_file_descriptor_update( int parameter_1,char parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_1 = 1;
	int_1 = int_2;
	float_2 = float_1 + float_2;
	double_1 = double_1 + double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_1 = 1;
		int_3 = int_3;
		v_file_descriptor_remove(int_3);

		double_3 = double_3;
		double_4 = double_3 * double_3;
		double_5 = double_1;
		double_1 = double_6;
		char_1 = char_1;
	}
	return int_1;
}
int v_test_fdlist()
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_2 = 1;
	short_1 = v_assert_string_equal(unsigned_int_1,double_1);

	double_1 = double_1;
	int_1 = int_1 + int_1;
	v_assert_non_null(int_1);

	double_3 = double_2 * double_3;
	double_2 = double_1;
	double_2 = double_1;
	float_1 = float_1;
	double_1 = double_3;
	int_1 = v_file_descriptor_update(int_1,char_1,char_1);

	v_file_descriptor_remove(int_1);

	char_1 = char_1 + char_1;
	double_1 = double_3;
	float_4 = float_2 + float_3;
	double_2 = double_2 * double_2;
	float_1 = float_5 * float_3;
	double_4 = double_1 + double_3;
	unsigned_int_1 = v_file_descriptor_get(int_1);

	double_4 = double_3 + double_2;
	float_5 = float_1 * float_3;
	int_3 = int_1 + int_2;
	int_1 = int_3 * int_1;
	double_2 = double_5;
	short_2 = short_3;
	int_1 = int_4;
	int_2 = int_5;
	long_2 = long_1 * long_1;
	double_2 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = v_assert_int_equal(unsigned_int_2,short_1);

		short_2 = short_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		short short_4 = 1;
		short short_5 = 1;
		char char_2 = 1;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		short short_4 = 1;
		short short_5 = 1;
		char char_2 = 1;
		double_1 = double_6 * double_3;
		long_1 = long_1;
		int_2 = int_4;
		short_4 = short_3;
	}
	int_4 = int_6;
	float_3 = float_4 * float_4;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		short short_4 = 1;
		short short_5 = 1;
		char char_2 = 1;
		short_5 = short_1;
		char_2 = char_2;
	}
	unsigned_int_5 = unsigned_int_2 + unsigned_int_3;
	return int_4;
}
int main()
{
	int uni_para =436;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	short_1 = short_2;
	char_1 = char_2;
	char_2 = char_1 + char_1;
	char controller4vul_1[2];
	fgets(controller4vul_1 ,3 ,stdin);
	if( strcmp( controller4vul_1, "L}") > 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		double_1 = v_dlopen(unsigned_int_1,int_1,uni_para);

		char_3 = char_3;
	}
	int_2 = int_1;
	double_2 = double_3;
	return int_1;
}
