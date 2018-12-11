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

double get_file_line( char parameter_1,int parameter_2);
void wait_for_file_changed( char parameter_1);
void do_monitor_file( int parameter_1,char parameter_2);
char mkprintable( char parameter_1);
double do_scan( int parameter_1,int uni_para);
void send_text( int parameter_1,unsigned int parameter_2);
int get_reg_value64( int parameter_1,int parameter_2);
void get_reg_value32( int parameter_1,int parameter_2);
void get_reg_value16( int parameter_1,int parameter_2);
int get_reg_value8( int parameter_1,int parameter_2);
long set_reg_value64( int parameter_1,int parameter_2,long parameter_3);
char set_reg_value32( int parameter_1,int parameter_2,int parameter_3);
double set_reg_value16( int parameter_1,int parameter_2,int parameter_3);
long set_reg_value8( int parameter_1,int parameter_2,int parameter_3);
double do_readee( int parameter_1);
int myread( int parameter_1,unsigned int parameter_2,int parameter_3);
int usb_i2ctxrx( int parameter_1,long parameter_2,int parameter_3,int parameter_4);
int myread_to( int parameter_1,long parameter_2,int parameter_3,int parameter_4,int uni_para);
float usb_spitxrx( int parameter_1,double parameter_2,int parameter_3,int parameter_4,int uni_para);
unsigned int i2c_txrx( int parameter_1,short parameter_2,int parameter_3,int parameter_4);
unsigned int spi_txrx( int parameter_1,char parameter_2,int parameter_3,int parameter_4);
void dump_buffer( double parameter_1,int parameter_2);
void dump_buf( char parameter_1,int parameter_2,int parameter_3);
float transfer( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para);
double do_ident( int parameter_1);
int tcsetattr( int parameter_1,int parameter_2,unsigned int parameter_3);
int tcgetattr( int parameter_1,double parameter_2);
void setup_virtual_serial( int parameter_1);
int new_pabort( double parameter_1);
void setup_spi_mode( int parameter_1);
void init_device( int parameter_1);
short pabort( char parameter_1);
int parse_opts( int parameter_1,char parameter_2);
char print_usage( int parameter_1);
double get_file_line( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = pabort(char_1);

	double_1 = tanh ( double_1 ) ;
	double_2 = log ( double_1 ) ;
	double_1 = double_1;
	double_1 = double_1 * double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "5e") == 0)
	{
		short short_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_3 = asin ( double_4 ) ;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short_1 = short_1 * short_1;
		long_3 = long_1 * long_2;
		if(1)
		{
			return double_2;
		}
	}
	double_4 = log ( double_5 ) ;
	int_3 = int_1 * int_2;
	return double_4;
}
void wait_for_file_changed( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = atan2 ( double_2 , double_3 ) ;
	int_1 = int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		looper_1 += 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short_1 = pabort(char_1);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
}
void do_monitor_file( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short_1 = short_1;
	float_1 = float_1;
	double_1 = double_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		send_text(int_1,unsigned_int_1);

		char_1 = char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			long long_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			double_1 = sqrt ( double_1 ) ;
			char controller_1[5];
			fgets(controller_1 ,5 ,stdin);
			if( strcmp( controller_1, ">D)`") == 0)
			{
			}
			int looper_3 = 0;
			while(looper_3 < 1)
			{
				looper_3 += 1;
				double_2 = double_3;
			}
			wait_for_file_changed(char_1);

			unsigned_int_1 = unsigned_int_1;
			char controller_2[4];
			fgets(controller_2 ,4 ,stdin);
			if( strcmp( controller_2, "q@p") > 0)
			{
				short short_1 = 1;
				float float_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_1 = 1;
				long long_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_2 = 1;
				long long_1 = 1;
				unsigned_int_2 = unsigned_int_2;
				double_1 = exp ( double_1 ) ;
				double_1 = get_file_line(char_1,int_1);

				double_2 = fabs ( double_3 ) ;
				long_1 = long_1;
			}
		}
	}
	long_2 = set_reg_value8(int_1,int_1,int_1);

}
char mkprintable( char parameter_1)
{
	char char_1 = 1;
	if(1)
	{
		return char_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "M:") > 0)
	{
		return char_1;
	}
	return char_1;
}
double do_scan( int parameter_1,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_1;
	double_1 = sqrt ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double_2 = double_2;
		double_2 = double_1;
		double_1 = log ( double_2 ) ;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			short short_1 = 1;
			double_3 = asin ( double_4 ) ;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			short short_1 = 1;
			float_1 = float_1 + float_1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_1 = acos ( double_2 ) ;
			}
			if(1)
			{
			}
			double_2 = double_1 + double_3;
			short_1 = short_1;
		}
	}
}
void send_text( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double_1 = cos ( double_2 ) ;
	double_2 = cos ( double_2 ) ;
	long_1 = long_2;
	short_1 = short_1 + short_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "ty") == 0)
	{
		double_2 = ldexp ( double_2 , int_1 ) ;
	}
	else
	{
		double_2 = floor ( double_1 ) ;
		double_3 = sqrt ( double_1 ) ;
	}
	long_2 = long_3 + long_2;
	float_1 = transfer(int_1,char_1,int_1,int_1,934);

	int_1 = int_2 + int_1;
	double_2 = sqrt ( double_3 ) ;
	char_1 = char_1;
}
int get_reg_value64( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double_1 = floor ( double_2 ) ;
	double_1 = asin ( double_3 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2;
	int_2 = int_1 * int_1;
	char_1 = char_1;
	int_2 = int_2 + int_2;
	return int_3;
	float_1 = transfer(int_1,char_1,int_1,int_4,169);

}
void get_reg_value32( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_1 = transfer(int_1,char_1,int_1,int_1,131);

	double_1 = exp ( double_1 ) ;
	double_2 = atan ( double_3 ) ;
	double_2 = ceil ( double_4 ) ;
	double_2 = log10 ( double_3 ) ;
}
void get_reg_value16( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = fabs ( double_2 ) ;
	int_1 = int_2;
	double_3 = pow ( double_3 , double_2 ) ;
	float_1 = transfer(int_3,char_1,int_3,int_2,517);

	double_4 = exp ( double_5 ) ;
}
int get_reg_value8( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int_1 = int_2;
	long_3 = long_1 + long_2;
	float_1 = transfer(int_3,char_1,int_2,int_4,812);

	double_1 = cosh ( double_2 ) ;
	short_1 = short_1 + short_1;
	return int_4;
}
long set_reg_value64( int parameter_1,int parameter_2,long parameter_3)
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
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_1 = tan ( double_1 ) ;
	double_1 = fmod ( double_2 , double_3 ) ;
	int_3 = int_1 + int_2;
	double_4 = tan ( double_1 ) ;
	double_4 = ceil ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_5;
	double_1 = ceil ( double_5 ) ;
	float_1 = transfer(int_1,char_1,int_2,int_1,638);

	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	unsigned_int_4 = unsigned_int_3;
	double_2 = exp ( double_6 ) ;
	double_2 = fmod ( double_6 , double_7 ) ;
}
char set_reg_value32( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = asin ( double_2 ) ;
	float_1 = transfer(int_1,char_1,int_1,int_2,16);

	double_3 = cos ( double_2 ) ;
	double_1 = exp ( double_3 ) ;
	double_2 = ldexp ( double_1 , int_1 ) ;
	double_1 = ldexp ( double_3 , int_1 ) ;
	int_2 = int_1 * int_3;
	unsigned_int_1 = unsigned_int_2;
	double_2 = sinh ( double_3 ) ;
}
double set_reg_value16( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = fmod ( double_2 , double_1 ) ;
	double_2 = double_1 * double_2;
	float_1 = transfer(int_1,char_1,int_1,int_2,153);

	int_3 = int_3 * int_3;
	double_2 = acos ( double_1 ) ;
	double_1 = exp ( double_3 ) ;
	double_4 = sqrt ( double_4 ) ;
}
long set_reg_value8( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double_1 = floor ( double_2 ) ;
	double_3 = fmod ( double_3 , double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	float_1 = transfer(int_1,char_1,int_2,int_1,424);

	char_1 = char_1;
	double_3 = sinh ( double_2 ) ;
}
double do_readee( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_2 = 1;
	float_1 = float_1 * float_1;
	float_2 = transfer(int_1,char_1,int_1,int_1,781);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	double_1 = asin ( double_1 ) ;
	int_2 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_2 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			int int_2 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_2 = 1;
			double_2 = pow ( double_1 , double_2 ) ;
		}
		double_1 = double_3 + double_3;
	}
	char_3 = char_2 * char_2;
}
int myread( int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double_1 = double_1 + double_2;
	double_2 = double_3 * double_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		looper_1 += 1;
		short_2 = short_1 + short_1;
		if(1)
		{
			return int_1;
		}
		double_4 = floor ( double_2 ) ;
	}
	return int_2;
}
int usb_i2ctxrx( int parameter_1,long parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_1 * char_1;
	double_1 = tanh ( double_2 ) ;
	short_1 = pabort(char_2);

	double_3 = tan ( double_4 ) ;
	double_3 = cosh ( double_4 ) ;
	if(1)
	{
		double_3 = fmod ( double_2 , double_2 ) ;
	}
	if(1)
	{
		int_1 = myread(int_1,unsigned_int_1,int_1);

		double_2 = tan ( double_1 ) ;
	}
	if(1)
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		int_3 = int_2 * int_1;
	}
	if(1)
	{
		double_4 = acos ( double_4 ) ;
	}
	if(1)
	{
		double_2 = double_3;
	}
	if(1)
	{
		int_3 = int_2 * int_3;
	}
}
int myread_to( int parameter_1,long parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char * vul_var;
	double_1 = fabs ( double_1 ) ;
	double_2 = sqrt ( double_1 ) ;
	double_3 = atan2 ( double_4 , double_4 ) ;
	double_5 = acos ( double_4 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_6 = fabs ( double_5 ) ;
	long_2 = long_1 * long_2;
	double_7 = sinh ( double_4 ) ;
	double_7 = fmod ( double_4 , double_2 ) ;
	short_1 = short_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_5 = floor ( double_6 ) ;
		char controller4vul_61[2];
		fgets(controller4vul_61 ,3 ,stdin);
		if( strcmp( controller4vul_61, "4A") == 0)
		{
			vul_var=(char*)malloc(20*sizeof(char));
			char controller4vul_62[5];
			fgets(controller4vul_62 ,6 ,stdin);
			if( strcmp( controller4vul_62, "nNF}3") < 0)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_6 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_7 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_1 = 1;
				double double_8 = 1;
				float float_1 = 1;
				float float_2 = 1;
				strcpy(vul_var, "CWE-761");
				double_4 = acos ( double_2 ) ;
				char controller4vul_63[5];
				fgets(controller4vul_63 ,6 ,stdin);
				if( strcmp( controller4vul_63, "Y$Cb<") > 0)
				{
					if(uni_para == 233)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
				}
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					unsigned int unsigned_int_1 = 1;
					double double_6 = 1;
					long long_1 = 1;
					long long_2 = 1;
					double double_7 = 1;
					short short_1 = 1;
					short short_2 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_1 = 1;
					double double_8 = 1;
					float float_1 = 1;
					float float_2 = 1;
					int_1 = int_1 + int_1;
				}
				unsigned_int_2 = unsigned_int_1;
			}
		}
		char controller_2[5];
		fgets(controller_2 ,5 ,stdin);
		if( strcmp( controller_2, ";evM") == 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_7 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_8 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_7 = sinh ( double_8 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_7 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_8 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_2;
		}
	}
	short_2 = short_2;
}
float usb_spitxrx( int parameter_1,double parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_1 + int_1;
	char controller4vul_60[2];
	fgets(controller4vul_60 ,3 ,stdin);
	if( strcmp( controller4vul_60, "<S") == 0)
	{
		int_2 = myread_to(int_2,long_1,int_2,int_2,uni_para);

		double_1 = exp ( double_2 ) ;
		double_1 = double_2;
		long_1 = long_1;
		double_1 = pow ( double_1 , double_3 ) ;
	}
	else
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_5 = 1;
		double_4 = double_3;
		double_4 = fabs ( double_3 ) ;
		double_1 = ceil ( double_4 ) ;
		double_1 = double_3;
		double_5 = ldexp ( double_3 , int_3 ) ;
		double_1 = cos ( double_3 ) ;
		int_4 = int_1 * int_2;
	}
	if(1)
	{
		int_4 = int_1;
	}
	if(1)
	{
		double_3 = double_1 + double_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_5 = 1;
		float_1 = float_1;
	}
	if(1)
	{
		double_5 = fmod ( double_5 , double_2 ) ;
	}
	if(1)
	{
		double_5 = double_5 * double_1;
	}
	if(1)
	{
		double_3 = atan ( double_3 ) ;
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_4;
	}
}
unsigned int i2c_txrx( int parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_1 = tanh ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		float float_1 = 1;
		if(1)
		{
			double double_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_2 = 1;
			float float_1 = 1;
			int_1 = int_1 + int_2;
		}
		double_1 = floor ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		float float_1 = 1;
		short_1 = pabort(char_1);

		char_1 = char_2;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float_1 = float_1;
		}
	}
}
unsigned int spi_txrx( int parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = char_1 + char_2;
	double_1 = ldexp ( double_2 , int_1 ) ;
	short_1 = pabort(char_3);

	int_2 = int_1 + int_2;
	double_2 = fabs ( double_1 ) ;
	double_1 = asin ( double_3 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_3 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_2 = float_1 * float_1;
	}
	double_1 = cosh ( double_4 ) ;
}
void dump_buffer( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = atan ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_1;
	}
}
void dump_buf( char parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = cos ( double_2 ) ;
	double_3 = tan ( double_1 ) ;
	dump_buffer(double_3,int_1);

	double_2 = sqrt ( double_3 ) ;
}
float transfer( int parameter_1,char parameter_2,int parameter_3,int parameter_4,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char controller4vul_59[2];
	fgets(controller4vul_59 ,3 ,stdin);
	if( strcmp( controller4vul_59, "LZ") == 0)
	{
		float_1 = usb_spitxrx(int_1,double_1,int_2,int_3,uni_para);

		double_2 = double_1;
	}
	if(1)
	{
		double_3 = ceil ( double_1 ) ;
	}
	if(1)
	{
		double_1 = atan2 ( double_4 , double_1 ) ;
	}
	if(1)
	{
		double_3 = sqrt ( double_1 ) ;
	}
	char controller_4[5];
	fgets(controller_4 ,5 ,stdin);
	if( strcmp( controller_4, "0cBR") > 0)
	{
		double_1 = ceil ( double_2 ) ;
	}
	else
	{
		float float_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_1;
	}
	if(1)
	{
		double_4 = double_1 * double_4;
	}
}
double do_ident( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_2;
	double_3 = double_3;
	float_1 = transfer(int_1,char_1,int_1,int_2,325);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_1 + int_3;
	double_1 = ldexp ( double_4 , int_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
		}
		short_2 = short_1 * short_1;
	}
	double_5 = pow ( double_5 , double_4 ) ;
}
int tcsetattr( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	return int_1;
}
int tcgetattr( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void setup_virtual_serial( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_3 = double_1 * double_2;
	int_1 = tcsetattr(int_1,int_1,unsigned_int_1);

	char_1 = char_1 * char_1;
	if(1)
	{
		int_2 = int_2;
	}
	long_3 = long_1 * long_2;
	int_1 = tcgetattr(int_2,double_3);

	double_1 = double_1 * double_2;
	double_1 = sqrt ( double_1 ) ;
	double_4 = log ( double_1 ) ;
	double_5 = tanh ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2;
	}
	short_1 = pabort(char_1);

}
int new_pabort( double parameter_1)
{
	double double_1 = 1;
	double_1 = ceil ( double_1 ) ;
	double_1 = exp ( double_1 ) ;
}
void setup_spi_mode( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_1 = int_2;
	double_1 = atan2 ( double_1 , double_1 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_2 = new_pabort(double_2);

		int_2 = int_3;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_3 * double_2;
	}
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	char controller_3[4];
	fgets(controller_3 ,4 ,stdin);
	if( strcmp( controller_3, "9zI") > 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short_1 = short_1;
	}
	double_1 = acos ( double_3 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_4 = tan ( double_4 ) ;
	}
	double_3 = tanh ( double_2 ) ;
	if(1)
	{
		double_3 = sqrt ( double_2 ) ;
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
	}
}
void init_device( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		setup_spi_mode(int_1);

		setup_virtual_serial(int_2);

		short_1 = short_2;
		char_1 = char_1 + char_1;
	}
}
short pabort( char parameter_1)
{
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_1 = 1;
	double double_3 = 1;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "WkAH") > 0)
	{
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double_1 = double_2;
	}
	else
	{
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double_3 = pow ( double_2 , double_4 ) ;
	}
	double_5 = fmod ( double_2 , double_4 ) ;
}
int parse_opts( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_5 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = fabs ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int int_5 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		looper_1 += 1;
		int_1 = int_2;
		float_1 = float_1;
		if(1)
		{
		}
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_2 = 1;
			double double_4 = 1;
			char char_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			char char_1 = 1;
			int int_3 = 1;
			int int_5 = 1;
			short short_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			int int_6 = 1;
			int int_7 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			double_3 = atan2 ( double_1 , double_1 ) ;
			if(1)
			{
				if(1)
				{
					double_4 = fabs ( double_1 ) ;
				}
				else
				{
					char_1 = char_2;
				}
			}
			double_3 = floor ( double_1 ) ;
			double_1 = tanh ( double_1 ) ;
			double_1 = cos ( double_3 ) ;
			int_4 = int_1 + int_3;
			unsigned_int_1 = unsigned_int_1;
			double_4 = cosh ( double_1 ) ;
			double_1 = atan2 ( double_2 , double_4 ) ;
			double_2 = log10 ( double_4 ) ;
			int_2 = int_4;
			int_3 = int_4 * int_3;
			if(1)
			{
				double_1 = fabs ( double_4 ) ;
			}
			double_1 = tanh ( double_2 ) ;
			if(1)
			{
				int_2 = int_1 + int_1;
			}
			int_4 = int_4 * int_3;
			double_2 = acos ( double_3 ) ;
			if(1)
			{
				double_2 = asin ( double_5 ) ;
			}
			if(1)
			{
				double_2 = double_5;
			}
			double_5 = tan ( double_1 ) ;
			char_2 = print_usage(int_4);

			int_4 = int_5 * int_1;
			short_1 = short_1;
			int_5 = int_3;
			char_1 = char_1;
			unsigned_int_1 = unsigned_int_1;
			int_3 = int_3;
			if(1)
			{
				double_2 = tan ( double_2 ) ;
			}
			double_3 = floor ( double_5 ) ;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_2 = 1;
				double double_4 = 1;
				char char_2 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_5 = 1;
				int int_1 = 1;
				float float_1 = 1;
				double double_3 = 1;
				char char_1 = 1;
				int int_3 = 1;
				int int_5 = 1;
				short short_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				short short_2 = 1;
				int int_6 = 1;
				int int_7 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_2 = 1;
				int_5 = int_6 + int_7;
				double_5 = tanh ( double_6 ) ;
			}
			long_2 = long_1 * long_1;
			if(1)
			{
				double_5 = tan ( double_5 ) ;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			short_2 = short_1 + short_2;
			float_1 = float_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int int_5 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		int int_6 = 1;
		int int_7 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double_5 = log ( double_4 ) ;
	}
	return int_2;
}
char print_usage( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = tanh ( double_2 ) ;
	char_2 = char_1 * char_1;
	char_1 = char_2 + char_2;
}
int main(int argc, char *argv[])
{
	int uni_para =233;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_7 = 1;
	int int_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	long long_1 = 1;
	double double_13 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_15 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	double double_14 = 1;
	short short_5 = 1;
	int int_6 = 1;
	float float_4 = 1;
	char char_4 = 1;
	double_1 = double_1;
	int_1 = int_1;
	float_3 = float_1 + float_2;
	double_1 = atan ( double_2 ) ;
	double_3 = log ( double_2 ) ;
	short_1 = short_1;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_7 = 1;
		int int_3 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_12 = 1;
		long long_1 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_15 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		double double_14 = 1;
		short short_5 = 1;
		int int_6 = 1;
		float float_4 = 1;
		char char_4 = 1;
		short_3 = short_2 * short_2;
		unsigned_int_1 = unsigned_int_2;
	}
	double_4 = asin ( double_3 ) ;
	if(1)
	{
		int_1 = int_2 + int_1;
		double_1 = tan ( double_4 ) ;
	}
	double_2 = floor ( double_4 ) ;
	if(1)
	{
		double_5 = log ( double_6 ) ;
	}
	short_3 = short_4;
	if(1)
	{
		char_3 = char_1 * char_2;
	}
	if(1)
	{
		double_2 = double_4 + double_4;
	}
	if(1)
	{
		double_1 = tanh ( double_7 ) ;
	}
	char controller4vul_56[1];
	fgets(controller4vul_56 ,2 ,stdin);
	if( strcmp( controller4vul_56, "6") == 0)
	{
		double_4 = acos ( double_6 ) ;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char controller4vul_57[3];
			fgets(controller4vul_57 ,4 ,stdin);
			if( strcmp( controller4vul_57, "4@E") < 0)
			{
				char controller4vul_58[3];
				fgets(controller4vul_58 ,4 ,stdin);
				if( strcmp( controller4vul_58, "*g8") == 0)
				{
					double_6 = do_scan(int_3,uni_para);

					double_1 = sinh ( double_4 ) ;
				}
				double_2 = double_1;
			}
			else
			{
				double_5 = asin ( double_4 ) ;
				double_8 = double_7;
			}
		}
		double_3 = floor ( double_4 ) ;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
			double_5 = exp ( double_6 ) ;
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_2 = 1;
				double double_3 = 1;
				short short_1 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				int int_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				short short_4 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_7 = 1;
				int int_3 = 1;
				double double_8 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				long long_1 = 1;
				double double_13 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_15 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				short short_2 = 1;
				int int_4 = 1;
				int int_5 = 1;
				long long_2 = 1;
				double double_14 = 1;
				short short_5 = 1;
				int int_6 = 1;
				float float_4 = 1;
				char char_4 = 1;
				int_1 = int_3 + int_2;
				int_4 = int_3;
			}
			if(1)
			{
				double_9 = atan2 ( double_9 , double_1 ) ;
			}
			{
				int_2 = int_1;
				double_10 = acos ( double_8 ) ;
				double_6 = log ( double_11 ) ;
				double_7 = asin ( double_12 ) ;
				long_1 = long_1;
				int_1 = int_3 * int_2;
			}
		}
		double_7 = tanh ( double_8 ) ;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double double_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			int int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_7 = 1;
			int int_3 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_12 = 1;
			long long_1 = 1;
			double double_13 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			short short_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_2 = 1;
			double double_14 = 1;
			short short_5 = 1;
			int int_6 = 1;
			float float_4 = 1;
			char char_4 = 1;
			double_1 = exp ( double_5 ) ;
			if(1)
			{
				double_6 = atan2 ( double_2 , double_3 ) ;
			}
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_2 = 1;
				double double_3 = 1;
				short short_1 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				int int_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				short short_4 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_7 = 1;
				int int_3 = 1;
				double double_8 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				long long_1 = 1;
				double double_13 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_15 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				short short_2 = 1;
				int int_4 = 1;
				int int_5 = 1;
				long long_2 = 1;
				double double_14 = 1;
				short short_5 = 1;
				int int_6 = 1;
				float float_4 = 1;
				char char_4 = 1;
				long_1 = long_1 + long_2;
				double_11 = cos ( double_10 ) ;
			}
			char controller_7[5];
			fgets(controller_7 ,5 ,stdin);
			if( strcmp( controller_7, "+~2?") == 0)
			{
				int_2 = int_2;
			}
			{
				double_3 = log ( double_12 ) ;
				double_13 = cos ( double_6 ) ;
				double_5 = double_11 * double_5;
				int_5 = int_5 * int_1;
				double_10 = ldexp ( double_2 , int_5 ) ;
				double_6 = ceil ( double_5 ) ;
			}
			if(1)
			{
				double_3 = fabs ( double_4 ) ;
			}
			if(1)
			{
				{
					double double_1 = 1;
					int int_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					double double_2 = 1;
					double double_3 = 1;
					short short_1 = 1;
					short short_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					int int_2 = 1;
					double double_5 = 1;
					double double_6 = 1;
					short short_4 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					double double_7 = 1;
					int int_3 = 1;
					double double_8 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					double double_9 = 1;
					double double_10 = 1;
					double double_11 = 1;
					double double_12 = 1;
					long long_1 = 1;
					double double_13 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_15 = 1;
					unsigned int unsigned_int_7 = 1;
					unsigned int unsigned_int_8 = 1;
					short short_2 = 1;
					int int_4 = 1;
					int int_5 = 1;
					long long_2 = 1;
					double double_14 = 1;
					short short_5 = 1;
					int int_6 = 1;
					float float_4 = 1;
					char char_4 = 1;
					int_1 = int_3 + int_5;
					unsigned_int_1 = unsigned_int_6;
					double_11 = pow ( double_12 , double_14 ) ;
					double_15 = acos ( double_3 ) ;
				}
			}
			else
			{
				double double_1 = 1;
				int int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_2 = 1;
				double double_3 = 1;
				short short_1 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				int int_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				short short_4 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_7 = 1;
				int int_3 = 1;
				double double_8 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				long long_1 = 1;
				double double_13 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_15 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				short short_2 = 1;
				int int_4 = 1;
				int int_5 = 1;
				long long_2 = 1;
				double double_14 = 1;
				short short_5 = 1;
				int int_6 = 1;
				float float_4 = 1;
				char char_4 = 1;
				short_5 = short_5;
			}
		}
		unsigned_int_3 = unsigned_int_1 * unsigned_int_7;
		unsigned_int_1 = unsigned_int_6 * unsigned_int_1;
	}
	if(1)
	{
		double_13 = double_5;
		double_3 = cos ( double_10 ) ;
		unsigned_int_7 = unsigned_int_2;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_5 = cosh ( double_9 ) ;
			if(1)
			{
				char_1 = char_2 + char_3;
				unsigned_int_6 = unsigned_int_4 + unsigned_int_3;
			}
			double_12 = sqrt ( double_10 ) ;
		}
		unsigned_int_5 = unsigned_int_1 * unsigned_int_6;
		double_8 = cos ( double_2 ) ;
		unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
		double_5 = tan ( double_1 ) ;
		double_4 = double_5;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_7 = 1;
		int int_3 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_12 = 1;
		long long_1 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_15 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		double double_14 = 1;
		short short_5 = 1;
		int int_6 = 1;
		float float_4 = 1;
		char char_4 = 1;
		int_6 = int_2 * int_1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			if(1)
			{
				double_10 = fabs ( double_3 ) ;
			}
			double_1 = log10 ( double_12 ) ;
		}
		float_3 = float_4 + float_1;
		double_4 = fmod ( double_5 , double_9 ) ;
	}
	if(1)
	{
		double_8 = log10 ( double_15 ) ;
	}
	if(1)
	{
		double_11 = sqrt ( double_8 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_7 = 1;
		int int_3 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_12 = 1;
		long long_1 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_15 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		double double_14 = 1;
		short short_5 = 1;
		int int_6 = 1;
		float float_4 = 1;
		char char_4 = 1;
		char_4 = char_1 * char_2;
	}
	double_5 = floor ( double_3 ) ;
	unsigned_int_8 = unsigned_int_2 + unsigned_int_7;
}
