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

double incomplete( char parameter_1,int parameter_2);
short write_prompt( double parameter_1,int parameter_2);
double pushline( char parameter_1,int parameter_2);
float loadline( short parameter_1);
double dotty( double parameter_1);
int print_jit_status( double parameter_1);
char getargs( int parameter_1,char parameter_2,int parameter_3);
short handle_script( float parameter_1,char parameter_2,int parameter_3);
long dobytecode( unsigned int parameter_1,char parameter_2);
short dojitopt( int parameter_1,double parameter_2);
unsigned int runcmdopt( float parameter_1,unsigned int parameter_2);
short loadjitmodule( double parameter_1,int uni_para);
short dojitcmd( char parameter_1,double parameter_2,int uni_para);
unsigned int dolibrary( float parameter_1,double parameter_2);
char runargs( short parameter_1,char parameter_2,int parameter_3,int uni_para);
float print_version();
unsigned int dostring( float parameter_1,long parameter_2,int parameter_3);
double report( short parameter_1,int parameter_2,int uni_para);
int lstop( unsigned int parameter_1,char parameter_2);
char laction( int parameter_1);
short traceback( short parameter_1);
long docall( long parameter_1,int parameter_2,int parameter_3);
double dofile( double parameter_1,int parameter_2);
float handle_luainit();
void print_usage();
int collectargs( char parameter_1,int parameter_2);
int bundle_main( float parameter_1,int parameter_2,char parameter_3);
double ll_register( double parameter_1,unsigned int parameter_2);
short bundle_loader_c( short parameter_1);
unsigned int loaderror( float parameter_1);
short ll_sym( unsigned int parameter_1);
void mksymname( long parameter_1,float parameter_2,double parameter_3);
short bundle_loader_lua( double parameter_1);
float bundle_add_loaders( char parameter_1);
long pmain(int uni_para);
double l_message( char parameter_1,unsigned int parameter_2,int uni_para);
double incomplete( char parameter_1,int parameter_2)
{
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int_1 = int_2;
		double_1 = fabs ( double_2 ) ;
		char_1 = char_1 + char_1;
		char controller_2[6];
		fgets(controller_2 ,6 ,stdin);
		if( strcmp( controller_2, "7~nW)") == 0)
		{
			double_1 = cos ( double_2 ) ;
			return double_3;
		}
	}
	return double_4;
}
short write_prompt( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double_1 = tan ( double_2 ) ;
	long_1 = long_2;
	double_1 = double_1 + double_3;
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	int_1 = int_2 * int_1;
	double_4 = fmod ( double_4 , double_3 ) ;
	double_1 = double_2 + double_3;
}
double pushline( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_3 = 1;
	int int_2 = 1;
	long_2 = long_1 + long_1;
	double_1 = double_1 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_3 = 1;
		int int_2 = 1;
		short_1 = write_prompt(double_2,int_1);

		double_3 = tan ( double_3 ) ;
		if(1)
		{
			int_2 = int_1 + int_1;
		}
		if(1)
		{
			int_1 = int_2;
		}
		else
		{
			double_4 = log10 ( double_5 ) ;
		}
		return double_5;
	}
	return double_4;
}
float loadline( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long_1 = long_2;
	double_1 = tan ( double_1 ) ;
	if(1)
	{
		return float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_1 = log10 ( double_1 ) ;
		if(1)
		{
		}
		if(1)
		{
			return float_2;
		}
		double_1 = double_1 + double_2;
		double_1 = cosh ( double_1 ) ;
		double_3 = pushline(char_1,int_1);

		double_4 = pow ( double_3 , double_5 ) ;
	}
	unsigned_int_1 = unsigned_int_1;
	return float_3;
	double_3 = incomplete(char_2,int_1);

}
double dotty( double parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	double_1 = l_message(char_1,unsigned_int_1,980);

	int_3 = int_1 + int_2;
	double_1 = report(short_1,int_2,9);

	short_2 = short_3;
	double_1 = asin ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_5 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		looper_1 += 1;
		if(1)
		{
			double_1 = tanh ( double_3 ) ;
		}
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			double double_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_5 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			double_3 = double_4;
			float_1 = float_1 * float_1;
			if(1)
			{
				double_3 = ceil ( double_1 ) ;
			}
		}
	}
	double_4 = cos ( double_3 ) ;
	long_1 = docall(long_1,int_3,int_3);

	double_5 = fmod ( double_5 , double_1 ) ;
	double_2 = cos ( double_2 ) ;
	float_2 = loadline(short_3);

	double_2 = ldexp ( double_2 , int_3 ) ;
}
int print_jit_status( double parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int_2 = int_1 + int_1;
	long_2 = long_1 * long_1;
	double_1 = acos ( double_1 ) ;
	double_1 = double_2 * double_1;
	double_3 = double_1 + double_2;
	double_1 = double_2 + double_1;
	int_1 = int_2 * int_3;
	double_3 = asin ( double_1 ) ;
	double_2 = fmod ( double_1 , double_2 ) ;
	double_2 = cosh ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double_4 = sqrt ( double_3 ) ;
		short_1 = short_1;
	}
	long_1 = long_2;
}
char getargs( int parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = floor ( double_2 ) ;
	float_1 = float_2;
	double_2 = tanh ( double_3 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_4 = fabs ( double_1 ) ;
	}
	double_1 = acos ( double_4 ) ;
	double_5 = ceil ( double_1 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_3 = tanh ( double_3 ) ;
	}
	double_5 = tan ( double_1 ) ;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_6 = double_4 + double_5;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	return char_1;
}
short handle_script( float parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	double double_6 = 1;
	char char_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = atan2 ( double_2 , double_2 ) ;
	double_2 = atan2 ( double_2 , double_2 ) ;
	double_2 = double_3;
	long_1 = docall(long_1,int_1,int_1);

	double_2 = atan ( double_4 ) ;
	double_4 = ceil ( double_4 ) ;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "+") == 0)
	{
		double_5 = report(short_1,int_1,472);

		double_2 = ceil ( double_4 ) ;
	}
	double_1 = double_6;
	char_1 = getargs(int_2,char_2,int_2);

	double_5 = fmod ( double_1 , double_6 ) ;
	char controller_2[5];
	fgets(controller_2 ,5 ,stdin);
	if( strcmp( controller_2, "|iL^") == 0)
	{
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	else
	{
		unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	}
	return short_1;
}
long dobytecode( unsigned int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int_1 = int_1 + int_2;
	short_1 = loadjitmodule(double_1,663);

	double_1 = tan ( double_1 ) ;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "lwL") == 0)
	{
		return long_1;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "M.") == 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double_1 = acos ( double_2 ) ;
		double_3 = report(short_1,int_1,654);

		int_3 = int_3 + int_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double_1 = fmod ( double_3 , double_4 ) ;
	}
	return long_2;
}
short dojitopt( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_1 = log ( double_2 ) ;
	double_2 = log ( double_1 ) ;
	double_2 = tanh ( double_3 ) ;
	double_2 = double_4 + double_1;
	unsigned_int_1 = runcmdopt(float_1,unsigned_int_1);

	double_1 = ldexp ( double_1 , int_1 ) ;
	return short_1;
}
unsigned int runcmdopt( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		int int_3 = 1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_3 = 1;
			short short_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			int int_3 = 1;
			char_1 = char_2;
			double_4 = double_2 * double_3;
			if(1)
			{
			}
			if(1)
			{
				double_2 = fabs ( double_2 ) ;
			}
			else
			{
				double double_1 = 1;
				double double_3 = 1;
				short short_1 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_5 = 1;
				int int_3 = 1;
				double_3 = report(short_1,int_1,920);

				double_5 = log10 ( double_2 ) ;
			}
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		else
		{
			double double_1 = 1;
			double double_3 = 1;
			short short_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			int int_3 = 1;
			int_2 = int_1 + int_3;
		}
	}
	return unsigned_int_2;
}
short loadjitmodule( double parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_1;
	short_1 = short_1 + short_2;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_2 = pow ( double_2 , double_3 ) ;
	char controller4vul_86[4];
	fgets(controller4vul_86 ,5 ,stdin);
	if( strcmp( controller4vul_86, "(_ND") == 0)
	{
		short_2 = short_2 * short_1;
		char controller4vul_87[4];
		fgets(controller4vul_87 ,5 ,stdin);
		if( strcmp( controller4vul_87, "Z@gq") == 0)
		{
			char char_1 = 1;
			char char_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_1 = 1;
			int int_2 = 1;
			double_2 = report(short_2,int_1,uni_para);

			int_2 = int_1 + int_1;
		}
		return short_1;
	}
	double_4 = exp ( double_5 ) ;
	if(1)
	{
		double_1 = floor ( double_5 ) ;
		return short_1;
	}
	long_1 = long_1 * long_1;
	return short_2;
}
short dojitcmd( char parameter_1,double parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_6 = 1;
	double double_5 = 1;
	double_1 = log10 ( double_1 ) ;
	double_1 = log ( double_2 ) ;
	double_1 = exp ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	double_3 = log10 ( double_3 ) ;
	char controller4vul_85[3];
	fgets(controller4vul_85 ,4 ,stdin);
	if( strcmp( controller4vul_85, "uWJ") == 0)
	{
		short_1 = loadjitmodule(double_4,uni_para);

		double_3 = log10 ( double_1 ) ;
		if(1)
		{
			return short_2;
		}
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_6 = 1;
		double double_5 = 1;
		double_1 = floor ( double_5 ) ;
	}
	double_1 = sqrt ( double_6 ) ;
	return short_1;
}
unsigned int dolibrary( float parameter_1,double parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long_1 = docall(long_2,int_1,int_2);

	char_1 = char_1 * char_1;
	double_1 = atan2 ( double_2 , double_2 ) ;
	return unsigned_int_1;
	double_1 = report(short_1,int_2,905);

}
char runargs( short parameter_1,char parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double_1 = atan ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_84[3];
		fgets(controller4vul_84 ,4 ,stdin);
		if( strcmp( controller4vul_84, "F[6") == 0)
		{
			short_1 = dojitcmd(char_1,double_1,uni_para);

		}
		double_1 = atan2 ( double_2 , double_1 ) ;
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double_3 = asin ( double_1 ) ;
			if(1)
			{
				double_3 = asin ( double_4 ) ;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			if(1)
			{
				return char_2;
			}
			double_4 = double_5 * double_5;
			if(1)
			{
				double_3 = sinh ( double_4 ) ;
			}
			long_1 = long_2;
			if(1)
			{
				return char_3;
			}
			char_3 = char_1 * char_2;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				short short_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_5 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_6 = 1;
				double_6 = asin ( double_5 ) ;
			}
			unsigned_int_2 = unsigned_int_2;
			if(1)
			{
				return char_3;
			}
			if(1)
			{
				return char_3;
			}
			return char_3;
		}
	}
	return char_2;
}
float print_version()
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
}
unsigned int dostring( float parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double_1 = double_1;
	return unsigned_int_1;
	long_1 = docall(long_2,int_1,int_2);

	double_2 = report(short_1,int_2,357);

}
double report( short parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char controller4vul_88[5];
	fgets(controller4vul_88 ,6 ,stdin);
	if( strcmp( controller4vul_88, "6}:`,") == 0)
	{
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int_1 = int_1 + int_2;
		char controller4vul_89[1];
		fgets(controller4vul_89 ,2 ,stdin);
		if( strcmp( controller4vul_89, "m") == 0)
		{
			double double_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double_1 = l_message(char_1,unsigned_int_1,uni_para);

			double_2 = tanh ( double_3 ) ;
		}
		unsigned_int_1 = unsigned_int_2;
		int_3 = int_2 + int_2;
	}
	return double_1;
}
int lstop( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	double_2 = tanh ( double_3 ) ;
	char_2 = char_1 + char_1;
}
char laction( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_1 = lstop(unsigned_int_1,char_1);

	float_2 = float_1 * float_2;
	short_1 = short_1;
}
short traceback( short parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		if(1)
		{
			return short_1;
		}
		double_1 = log ( double_1 ) ;
	}
	long_1 = long_1 + long_1;
	return short_1;
}
long docall( long parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double_1 = fabs ( double_2 ) ;
	int_1 = int_2;
	double_2 = ldexp ( double_1 , int_1 ) ;
	double_2 = atan2 ( double_2 , double_3 ) ;
	if(1)
	{
		double_3 = pow ( double_1 , double_3 ) ;
	}
	short_1 = traceback(short_2);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_4 = 1;
		double_4 = atan ( double_3 ) ;
	}
	double_2 = double_1 + double_5;
	if(1)
	{
		char_1 = laction(int_2);

		long_1 = long_1 + long_1;
	}
	return long_1;
}
double dofile( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	double_1 = report(short_1,int_1,589);

	double_2 = tanh ( double_1 ) ;
	return double_1;
	long_1 = docall(long_2,int_2,int_2);

}
float handle_luainit()
{
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	if(1)
	{
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long_1 = long_2;
	}
	else
	{
		double_1 = log10 ( double_2 ) ;
	}
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_2;
	}
	else
	{
		return float_1;
	}
	double_1 = dofile(double_2,int_1);

	unsigned_int_1 = dostring(float_2,long_2,int_2);

}
void print_usage()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long_1 = long_2;
	double_1 = exp ( double_1 ) ;
	double_1 = double_1 + double_2;
	double_3 = ldexp ( double_1 , int_1 ) ;
}
int collectargs( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = sinh ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			return int_1;
		}
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_1 = tanh ( double_2 ) ;
			return int_2;
			return int_1;
			double_3 = pow ( double_4 , double_2 ) ;
			int_3 = int_3;
			float_1 = float_2;
			int_1 = int_4 * int_3;
			double_1 = ceil ( double_4 ) ;
			if(1)
			{
				float_1 = float_2;
				if(1)
				{
					return int_4;
				}
			}
			if(1)
			{
				return int_2;
			}
			int_4 = int_4 * int_2;
			return int_5;
			return int_1;
		}
	}
	return int_1;
}
int bundle_main( float parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double_1 = asin ( double_1 ) ;
	int_1 = int_1;
	double_2 = log10 ( double_3 ) ;
	double_4 = atan2 ( double_5 , double_1 ) ;
	double_3 = floor ( double_6 ) ;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "R]D^_") == 0)
	{
		double_7 = atan ( double_1 ) ;
		if(1)
		{
			double_5 = double_2;
			return int_1;
		}
		double_4 = pow ( double_4 , double_1 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		long_1 = long_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			double_2 = pow ( double_1 , double_5 ) ;
			float_1 = float_1;
		}
		short_1 = short_1 * short_2;
		long_2 = long_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_1 = double_3;
		}
		double_2 = cosh ( double_6 ) ;
	}
	double_5 = tanh ( double_4 ) ;
	double_7 = sinh ( double_7 ) ;
	return int_2;
}
double ll_register( double parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = tanh ( double_1 ) ;
	int_1 = int_2;
	char_1 = char_2;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "PGi/x") == 0)
	{
		int_3 = int_1 + int_2;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_1;
		char_3 = char_1 * char_1;
		double_2 = atan ( double_3 ) ;
		int_3 = int_1;
		double_2 = ceil ( double_1 ) ;
		double_1 = double_4 * double_3;
		double_4 = fmod ( double_3 , double_2 ) ;
	}
	return double_2;
}
short bundle_loader_c( short parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double_1 = asin ( double_1 ) ;
	mksymname(long_1,float_1,double_1);

	double_1 = ceil ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = log10 ( double_2 ) ;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "|yMB") == 0)
	{
		double double_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float_1 = float_2;
		double_3 = ll_register(double_2,unsigned_int_1);

		float_2 = float_2;
		return short_1;
	}
	int_1 = int_1 * int_1;
	short_2 = ll_sym(unsigned_int_2);

	double_1 = fabs ( double_4 ) ;
	return short_3;
}
unsigned int loaderror( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = floor ( double_2 ) ;
}
short ll_sym( unsigned int parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char_2 = char_1 + char_2;
	double_1 = tanh ( double_1 ) ;
	return short_1;
}
void mksymname( long parameter_1,float parameter_2,double parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_1 = cos ( double_1 ) ;
	double_1 = fmod ( double_1 , double_1 ) ;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "-511") == 0)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long_1 = long_1;
	}
	short_2 = short_1 + short_2;
	double_2 = ldexp ( double_3 , int_1 ) ;
	double_1 = fmod ( double_2 , double_3 ) ;
}
short bundle_loader_lua( double parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long_1 = long_1 * long_1;
	mksymname(long_1,float_1,double_1);

	unsigned_int_1 = loaderror(float_2);

	double_2 = sinh ( double_3 ) ;
	char_1 = char_1 + char_2;
	if(1)
	{
		long long_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short_1 = ll_sym(unsigned_int_1);

		double_4 = tan ( double_4 ) ;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		return short_1;
	}
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	char controller_2[4];
	fgets(controller_2 ,4 ,stdin);
	if( strcmp( controller_2, "]0U") == 0)
	{
		long long_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_5 = tanh ( double_2 ) ;
		double_2 = pow ( double_3 , double_3 ) ;
	}
	return short_1;
}
float bundle_add_loaders( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char_1 = char_1 * char_2;
	short_1 = bundle_loader_c(short_1);

	float_1 = float_1;
	int_1 = int_2;
	double_1 = double_1 * double_1;
	double_2 = tanh ( double_2 ) ;
	double_2 = cos ( double_1 ) ;
	double_2 = sqrt ( double_1 ) ;
	short_2 = bundle_loader_lua(double_1);

	double_3 = ceil ( double_4 ) ;
}
long pmain(int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short_2 = short_1 + short_1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_1 = double_1;
	double_3 = ldexp ( double_4 , int_1 ) ;
	double_3 = tan ( double_5 ) ;
	if(1)
	{
		double_1 = exp ( double_5 ) ;
	}
	double_5 = atan2 ( double_5 , double_2 ) ;
	double_3 = tan ( double_2 ) ;
	double_2 = fmod ( double_6 , double_3 ) ;
	int_1 = int_2 * int_3;
	double_7 = fabs ( double_3 ) ;
	if(1)
	{
		double_2 = sqrt ( double_7 ) ;
	}
	double_5 = pow ( double_5 , double_2 ) ;
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
		double double_6 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		short short_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double_6 = double_5 + double_3;
		unsigned_int_1 = unsigned_int_2;
		double_3 = fmod ( double_1 , double_5 ) ;
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
		double double_6 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		short short_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		double_7 = acos ( double_5 ) ;
		float_3 = float_1 * float_2;
	}
	char controller4vul_82[5];
	fgets(controller4vul_82 ,6 ,stdin);
	if( strcmp( controller4vul_82, "DbQHu") == 0)
	{
		double_6 = ldexp ( double_1 , int_3 ) ;
		char controller4vul_83[4];
		fgets(controller4vul_83 ,5 ,stdin);
		if( strcmp( controller4vul_83, "~d^k") > 0)
		{
			char_1 = runargs(short_3,char_1,int_4,uni_para);

			return long_1;
		}
	}
	if(1)
	{
		double_2 = atan2 ( double_5 , double_1 ) ;
	}
	double_4 = double_2 * double_5;
	if(1)
	{
		return long_2;
	}
	if(1)
	{
		double_4 = fmod ( double_1 , double_6 ) ;
		if(1)
		{
			return long_1;
		}
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
		long_2 = long_2;
	}
	if(1)
	{
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
			double double_6 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			short short_3 = 1;
			int int_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			short_4 = short_5;
			double_3 = atan ( double_3 ) ;
			double_1 = sinh ( double_2 ) ;
		}
		else
		{
			double_6 = exp ( double_4 ) ;
		}
	}
	return long_2;
}
double l_message( char parameter_1,unsigned int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char * vul_var;
	char controller4vul_90[4];
	fgets(controller4vul_90 ,5 ,stdin);
	if( strcmp( controller4vul_90, ")^6[") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 278)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		double_1 = acos ( double_1 ) ;
		char_1 = char_1 * char_1;
		long_1 = long_1 + long_1;
	}
	double_1 = fmod ( double_1 , double_2 ) ;
	double_3 = tan ( double_4 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
int main(int argc, char **argv)
{
	int uni_para =278;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = atan ( double_2 ) ;
	long_3 = long_1 * long_2;
	char controller4vul_81[3];
	fgets(controller4vul_81 ,4 ,stdin);
	if( strcmp( controller4vul_81, "5jD") == 0)
	{
		long_4 = pmain(uni_para);

		double_2 = exp ( double_3 ) ;
		return int_1;
	}
	double_1 = asin ( double_2 ) ;
	long_4 = long_2;
	double_4 = double_2 * double_2;
	double_3 = double_5 * double_6;
	double_3 = sqrt ( double_3 ) ;
	return int_1;
}
