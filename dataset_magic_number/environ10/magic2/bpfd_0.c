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

void deslash( char parameter_1);
void apply_relo( float parameter_1,int parameter_2,int parameter_3);
int get_sym64_name_from_index( char parameter_1,int parameter_2,char parameter_3);
void apply_map_relocations( char parameter_1,int parameter_2,short parameter_3,int uni_para);
int bpf_create_map( float parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6);
int sym64_compare( long parameter_1,long parameter_2);
int read_section64_by_type( char parameter_1,int parameter_2,int parameter_3);
int read_sym64_tab( char parameter_1,int parameter_2,int parameter_3,char parameter_4);
int get_map_names( char parameter_1,int parameter_2,char parameter_3,int uni_para);
int create_maps( char parameter_1,int parameter_2,int parameter_3);
int _startswith( long parameter_1,long parameter_2);
int get_sym64_name( char parameter_1,int parameter_2,char parameter_3,int uni_para);
int read_code_sections( char parameter_1,long parameter_2);
short makeFormatList();
void new_format( long parameter_1,double parameter_2,float parameter_3,int parameter_4);
int toInt( char parameter_1);
char parseIntAndAdvance( double parameter_1,int uni_para);
float streamStateFromFormat( char parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para);
long printFormatStringLiteral( unsigned int parameter_1,long parameter_2);
double formatImpl( short parameter_1,char parameter_2,double parameter_3,int parameter_4,int uni_para);
void vformat( long parameter_1,short parameter_2,double parameter_3,int uni_para);
float format( unsigned int parameter_1,int uni_para);
short printf( char parameter_1,int uni_para);
int read_section64_by_id( char parameter_1,int parameter_2,int parameter_3,int uni_para);
int read_section64_header_strtab( char parameter_1,int parameter_2,char parameter_3,int uni_para);
int read_elf64_header( char parameter_1,double parameter_2);
int read_section64_headers_all( char parameter_1,int parameter_2,short parameter_3);
int read_section64_by_name( char parameter_1,char parameter_2,int parameter_3);
void deslash( char parameter_1)
{
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char_1 = char_2;
		}
	}
}
void apply_relo( float parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_1 = short_1 + short_1;
	double_1 = double_1;
	double_1 = atan2 ( double_2 , double_1 ) ;
	short_1 = printf(char_1,467);

	double_1 = double_2;
	if(1)
	{
		double_1 = double_3 * double_1;
	}
	double_3 = atan ( double_1 ) ;
	int_2 = int_1 * int_1;
}
int get_sym64_name_from_index( char parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double_1 = asin ( double_1 ) ;
	double_2 = exp ( double_2 ) ;
	int_1 = read_sym64_tab(char_1,int_2,int_3,char_1);

	float_1 = float_1;
	int_3 = get_sym64_name(char_2,int_4,char_2,594);

	double_1 = sinh ( double_3 ) ;
	if(1)
	{
		double_2 = sqrt ( double_4 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		char char_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double_1 = sqrt ( double_3 ) ;
		long_2 = long_1 + long_2;
	}
	float_2 = float_3;
	if(1)
	{
		double_2 = atan2 ( double_1 , double_2 ) ;
	}
	double_2 = tanh ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		char char_2 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double_5 = double_1 * double_4;
	}
	return int_3;
}
void apply_map_relocations( char parameter_1,int parameter_2,short parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_3 = 1;
	double double_6 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	short_2 = short_1 + short_1;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_3 = 1;
		double double_6 = 1;
		int_3 = int_1 * int_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_3 = 1;
		double double_6 = 1;
		looper_1 += 1;
		double_1 = double_2;
		double_1 = atan ( double_2 ) ;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_3 = 1;
			double double_2 = 1;
			double double_4 = 1;
			char char_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_5 = 1;
			double double_7 = 1;
			double double_3 = 1;
			double double_6 = 1;
			double_3 = exp ( double_2 ) ;
			double_1 = double_2 * double_3;
			double_4 = sqrt ( double_5 ) ;
			char controller4vul_12[1];
			fgets(controller4vul_12 ,2 ,stdin);
			if( strcmp( controller4vul_12, "s") > 0)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_3 = 1;
				double double_2 = 1;
				double double_4 = 1;
				char char_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_5 = 1;
				double double_7 = 1;
				double double_3 = 1;
				double double_6 = 1;
				char controller4vul_13[1];
				fgets(controller4vul_13 ,2 ,stdin);
				if( strcmp( controller4vul_13, "c") < 0)
				{
					int_3 = get_map_names(char_1,int_3,char_1,uni_para);

					double_5 = cos ( double_3 ) ;
				}
				double_6 = atan2 ( double_5 , double_7 ) ;
			}
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				if(1)
				{
					double_7 = sinh ( double_7 ) ;
				}
			}
			if(1)
			{
				double_2 = asin ( double_4 ) ;
			}
		}
		double_5 = sinh ( double_7 ) ;
	}
	if(1)
	{
		double_2 = sqrt ( double_4 ) ;
	}
}
int bpf_create_map( float parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double_1 = floor ( double_2 ) ;
	double_3 = double_3;
	double_3 = floor ( double_3 ) ;
	double_1 = tan ( double_1 ) ;
	double_4 = double_5;
	int_1 = int_2;
	char_1 = char_2;
	double_3 = sqrt ( double_3 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_5 = log10 ( double_1 ) ;
	if(1)
	{
		double_4 = ldexp ( double_3 , int_1 ) ;
		short_1 = short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		long_2 = long_1 * long_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			short_2 = short_1 * short_2;
			double_3 = fabs ( double_2 ) ;
			if(1)
			{
				double_4 = fmod ( double_2 , double_3 ) ;
			}
		}
	}
	return int_1;
}
int sym64_compare( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = log ( double_1 ) ;
	char_1 = char_2;
	return int_1;
}
int read_section64_by_type( char parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long_1 = long_2;
	double_1 = double_1;
	double_2 = tanh ( double_1 ) ;
	double_2 = fabs ( double_3 ) ;
	double_4 = pow ( double_2 , double_1 ) ;
	if(1)
	{
		return int_1;
	}
	int_1 = read_section64_headers_all(char_1,int_2,short_1);

	double_1 = double_2;
	if(1)
	{
		double_4 = floor ( double_3 ) ;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		if(1)
		{
		}
		double_4 = log ( double_3 ) ;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			char char_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			unsigned_int_1 = unsigned_int_2;
			double_3 = double_4;
		}
		if(1)
		{
			double_1 = double_1 * double_2;
			double_5 = floor ( double_4 ) ;
		}
		double_3 = pow ( double_5 , double_1 ) ;
		float_1 = float_2;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		unsigned_int_3 = unsigned_int_3;
	}
	char controller_7[2];
	fgets(controller_7 ,2 ,stdin);
	if( strcmp( controller_7, "/") == 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int_1 = int_3;
	}
	if(1)
	{
		short_1 = short_1;
	}
	return int_2;
}
int read_sym64_tab( char parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = cos ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = read_section64_by_type(char_1,int_2,int_1);

	double_3 = cosh ( double_4 ) ;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "2;;O}") == 0)
	{
		return int_3;
	}
	char controller_2[6];
	fgets(controller_2 ,6 ,stdin);
	if( strcmp( controller_2, "5V0*K") == 0)
	{
		double_2 = pow ( double_2 , double_4 ) ;
	}
	int_4 = sym64_compare(long_1,long_2);

	unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
	return int_2;
}
int get_map_names( char parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_7 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1;
	double_1 = double_1;
	double_2 = pow ( double_3 , double_4 ) ;
	double_4 = log ( double_3 ) ;
	double_2 = ceil ( double_4 ) ;
	int_1 = int_1;
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_7 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short short_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1;
	}
	double_4 = ceil ( double_4 ) ;
	if(1)
	{
		float_1 = float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_3 = log ( double_2 ) ;
		if(1)
		{
			int_1 = int_1 * int_2;
		}
		if(1)
		{
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_7 = 1;
			int int_5 = 1;
			int int_6 = 1;
			short short_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			double_1 = ldexp ( double_4 , int_1 ) ;
			char_1 = char_1;
			float_2 = float_1 * float_1;
		}
		if(1)
		{
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_7 = 1;
			int int_5 = 1;
			int int_6 = 1;
			short short_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			double_1 = double_4;
			double_1 = ceil ( double_5 ) ;
		}
	}
	if(1)
	{
		double_1 = cosh ( double_2 ) ;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			int_2 = int_1 + int_1;
		}
	}
	double_3 = sinh ( double_4 ) ;
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_7 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short short_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_6 = sinh ( double_1 ) ;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char controller4vul_14[3];
		fgets(controller4vul_14 ,4 ,stdin);
		if( strcmp( controller4vul_14, "WR!") < 0)
		{
			double_4 = atan ( double_4 ) ;
			char controller4vul_15[4];
			fgets(controller4vul_15 ,5 ,stdin);
			if( strcmp( controller4vul_15, "K;N`") < 0)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					char controller4vul_16[4];
					fgets(controller4vul_16 ,5 ,stdin);
					if( strcmp( controller4vul_16, "49so") > 0)
					{
						int_3 = get_sym64_name(char_1,int_4,char_1,uni_para);

						double_7 = ldexp ( double_3 , int_5 ) ;
					}
				}
				double_7 = double_2;
			}
		}
	}
	double_3 = sqrt ( double_4 ) ;
	int_5 = int_6;
	if(1)
	{
		double_2 = sqrt ( double_4 ) ;
	}
	char controller_2[6];
	fgets(controller_2 ,6 ,stdin);
	if( strcmp( controller_2, "U5zQP") == 0)
	{
		double_4 = double_2 * double_7;
	}
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_7 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short short_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	}
	return int_3;
}
int create_maps( char parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = get_map_names(char_1,int_1,char_2,119);

	double_1 = log10 ( double_1 ) ;
	int_2 = read_section64_by_name(char_3,char_3,int_1);

	float_1 = float_2;
	short_1 = printf(char_4,814);

	double_1 = fabs ( double_1 ) ;
	double_1 = cosh ( double_2 ) ;
	if(1)
	{
		double_1 = acos ( double_2 ) ;
	}
	double_2 = ceil ( double_1 ) ;
	if(1)
	{
		double_3 = floor ( double_2 ) ;
	}
	double_1 = double_1 + double_2;
	if(1)
	{
		double_4 = acos ( double_1 ) ;
		double_2 = exp ( double_3 ) ;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		char char_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_3 = bpf_create_map(float_2,short_1,int_1,int_1,int_4,int_5);

		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		double_3 = sqrt ( double_3 ) ;
		double_4 = sqrt ( double_4 ) ;
		double_4 = fmod ( double_4 , double_4 ) ;
	}
	double_5 = double_5;
	int_2 = int_1 * int_2;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		int int_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		char char_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		double_4 = double_4;
	}
	return int_4;
}
int _startswith( long parameter_1,long parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "o") == 0)
	{
		return int_1;
	}
	return int_2;
}
int get_sym64_name( char parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double_1 = acos ( double_2 ) ;
	int_1 = int_1;
	double_2 = tanh ( double_2 ) ;
	char controller4vul_17[3];
	fgets(controller4vul_17 ,4 ,stdin);
	if( strcmp( controller4vul_17, "]B!") < 0)
	{
		int_1 = read_section64_header_strtab(char_1,int_1,char_2,uni_para);

		return int_1;
	}
	if(1)
	{
		double_1 = pow ( double_3 , double_2 ) ;
		double_3 = sinh ( double_3 ) ;
	}
	double_3 = exp ( double_1 ) ;
	float_1 = float_1;
	char_1 = char_1 * char_3;
	double_3 = fabs ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_3 = 1;
		double double_4 = 1;
		double_4 = log ( double_1 ) ;
	}
	return int_1;
}
int read_code_sections( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_5 = 1;
	double double_3 = 1;
	short short_6 = 1;
	long long_5 = 1;
	long long_6 = 1;
	long long_7 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	short_2 = short_1 + short_1;
	long_3 = long_1 + long_2;
	double_2 = atan2 ( double_2 , double_1 ) ;
	if(1)
	{
		return int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_2 = 1;
		int int_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		long long_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_5 = 1;
		double double_3 = 1;
		short short_6 = 1;
		long long_5 = 1;
		long long_6 = 1;
		long long_7 = 1;
		double_1 = atan ( double_2 ) ;
		int_2 = read_section64_by_id(char_1,int_3,int_4,596);

		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_1 = asin ( double_2 ) ;
		short_5 = short_3 * short_4;
		if(1)
		{
			double_2 = atan2 ( double_1 , double_2 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_2 = 1;
			int int_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_4 = 1;
			long long_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_5 = 1;
			double double_3 = 1;
			short short_6 = 1;
			long long_5 = 1;
			long long_6 = 1;
			long long_7 = 1;
			double_1 = asin ( double_2 ) ;
			double_2 = pow ( double_2 , double_2 ) ;
			int_5 = _startswith(long_1,long_3);

			short_6 = short_3 + short_4;
			double_2 = tan ( double_3 ) ;
			if(1)
			{
				char_2 = char_3;
			}
			double_3 = fmod ( double_3 , double_2 ) ;
		}
		if(1)
		{
			int_3 = read_section64_headers_all(char_3,int_5,short_2);

			double_2 = tanh ( double_2 ) ;
		}
		unsigned_int_3 = unsigned_int_2;
		if(1)
		{
			double_1 = asin ( double_4 ) ;
			if(1)
			{
				long_3 = long_3 * long_4;
			}
			if(1)
			{
				double_5 = acos ( double_6 ) ;
				char controller_9[6];
				fgets(controller_9 ,6 ,stdin);
				if( strcmp( controller_9, "eU!Q!") == 0)
				{
					char_3 = char_3;
				}
				double_3 = asin ( double_4 ) ;
			}
		}
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_2 = 1;
			int int_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_4 = 1;
			long long_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_5 = 1;
			double double_3 = 1;
			short short_6 = 1;
			long long_5 = 1;
			long long_6 = 1;
			long long_7 = 1;
			long_6 = long_2 + long_5;
		}
		if(1)
		{
			double_4 = atan ( double_1 ) ;
			int_1 = int_2;
		}
	}
	double_7 = sqrt ( double_5 ) ;
	if(1)
	{
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			double_4 = acos ( double_2 ) ;
			if(1)
			{
				short_3 = short_4;
			}
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				double double_2 = 1;
				int int_2 = 1;
				char char_1 = 1;
				int int_3 = 1;
				int int_4 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_5 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_4 = 1;
				long long_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				char char_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_5 = 1;
				double double_3 = 1;
				short short_6 = 1;
				long long_5 = 1;
				long long_6 = 1;
				long long_7 = 1;
				long_4 = long_7;
			}
			char_3 = char_3;
			double_2 = cos ( double_6 ) ;
			char_1 = char_2 + char_2;
		}
	}
	if(1)
	{
		double_6 = double_6 + double_4;
	}
	return int_5;
	int_1 = get_sym64_name(char_3,int_4,char_4,170);

}
short makeFormatList()
{
	short short_1 = 1;
	return short_1;
}
void new_format( long parameter_1,double parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = log10 ( double_2 ) ;
}
int toInt( char parameter_1)
{
	int int_1 = 1;
	return int_1;
}
char parseIntAndAdvance( double parameter_1,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 278)
	{
		vul_var = vul_var + 1;
	}
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		free(vul_var);
		double_1 = cosh ( double_2 ) ;
	}
	int_4 = int_2 * int_3;
}
float streamStateFromFormat( char parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,double parameter_5,int parameter_6,int parameter_7,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_10 = 1;
	float float_4 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	double double_9 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_3 = 1;
	char_1 = parseIntAndAdvance(double_1,uni_para);

	if(1)
	{
		double_2 = atan2 ( double_1 , double_3 ) ;
		return float_1;
	}
	double_2 = sinh ( double_3 ) ;
	char_2 = char_3;
	long_2 = long_1 * long_2;
	unsigned_int_1 = unsigned_int_2;
	double_2 = log ( double_2 ) ;
	double_1 = atan ( double_2 ) ;
	unsigned_int_3 = unsigned_int_3;
	short_1 = short_1 + short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		{
			double_4 = log ( double_3 ) ;
			if(1)
			{
				double_2 = cos ( double_5 ) ;
				double_2 = sqrt ( double_2 ) ;
			}
			double_4 = acos ( double_3 ) ;
			double_3 = floor ( double_5 ) ;
			if(1)
			{
				double_2 = pow ( double_3 , double_4 ) ;
			}
			double_2 = atan2 ( double_5 , double_5 ) ;
			long_3 = long_2;
			double_5 = atan ( double_6 ) ;
		}
	}
	if(1)
	{
		double_1 = sqrt ( double_6 ) ;
		double_3 = floor ( double_6 ) ;
	}
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_3 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_10 = 1;
		float float_4 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		double double_9 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		double_5 = fabs ( double_6 ) ;
		double_6 = double_6 * double_4;
		if(1)
		{
			double_3 = sinh ( double_3 ) ;
		}
		if(1)
		{
			int_1 = int_1 + int_2;
		}
		if(1)
		{
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_3 = 1;
			double double_6 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_10 = 1;
			float float_4 = 1;
			short short_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			long long_4 = 1;
			double double_9 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_3 = 1;
			float_3 = float_2 + float_1;
			unsigned_int_1 = unsigned_int_4;
			unsigned_int_4 = unsigned_int_5;
		}
		char_1 = char_3;
		short_3 = short_1;
	}
	if(1)
	{
		double_6 = sqrt ( double_3 ) ;
		long_1 = long_2;
		if(1)
		{
			double_4 = log ( double_5 ) ;
			if(1)
			{
				double_6 = fabs ( double_5 ) ;
			}
			if(1)
			{
				char char_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				long long_3 = 1;
				double double_6 = 1;
				int int_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_7 = 1;
				double double_8 = 1;
				double double_10 = 1;
				float float_4 = 1;
				short short_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				long long_4 = 1;
				double double_9 = 1;
				char char_4 = 1;
				unsigned int unsigned_int_6 = 1;
				int int_3 = 1;
				long_2 = long_3 + long_4;
			}
		}
		if(1)
		{
			if(1)
			{
				double_5 = asin ( double_4 ) ;
			}
			if(1)
			{
				double_4 = cosh ( double_2 ) ;
			}
		}
		double_4 = double_3;
		double_6 = exp ( double_6 ) ;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		double_5 = double_3;
	}
	double_3 = tan ( double_7 ) ;
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_3 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_10 = 1;
		float float_4 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		double double_9 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		double_7 = fmod ( double_8 , double_9 ) ;
		double_8 = tan ( double_1 ) ;
		double_1 = sinh ( double_1 ) ;
		short_2 = short_1 + short_1;
		double_8 = pow ( double_4 , double_8 ) ;
		char_4 = char_2 + char_3;
		double_7 = tanh ( double_10 ) ;
		double_10 = tan ( double_1 ) ;
		double_5 = double_4 + double_4;
		double_7 = acos ( double_7 ) ;
		double_6 = fabs ( double_6 ) ;
		double_8 = pow ( double_5 , double_9 ) ;
		int_2 = int_2 + int_1;
		double_2 = double_9 + double_1;
		double_5 = tan ( double_6 ) ;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
		if(1)
		{
			double_3 = asin ( double_7 ) ;
		}
		double_3 = acos ( double_2 ) ;
		unsigned_int_5 = unsigned_int_5 * unsigned_int_6;
		unsigned_int_4 = unsigned_int_6;
		return float_4;
	}
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_3 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_10 = 1;
		float float_4 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		double double_9 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_3 = 1;
		int_2 = int_1 + int_3;
		double_10 = asin ( double_8 ) ;
		int_1 = int_2 + int_2;
	}
	return float_1;
}
long printFormatStringLiteral( unsigned int parameter_1,long parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = atan ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		{
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long_3 = long_1 * long_2;
			return long_1;
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, "0~") == 0)
			{
				return long_1;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
}
double formatImpl( short parameter_1,char parameter_2,double parameter_3,int parameter_4,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	int int_2 = 1;
	double double_7 = 1;
	double double_9 = 1;
	int int_3 = 1;
	double double_8 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	int_1 = int_1;
	double_1 = tanh ( double_2 ) ;
	double_3 = log10 ( double_4 ) ;
	long_2 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		int int_2 = 1;
		double double_7 = 1;
		double double_9 = 1;
		int int_3 = 1;
		double double_8 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		char_1 = char_2;
		double_1 = atan2 ( double_2 , double_3 ) ;
		double_3 = double_5 + double_4;
		double_3 = tan ( double_5 ) ;
		char controller4vul_20[2];
		fgets(controller4vul_20 ,3 ,stdin);
		if( strcmp( controller4vul_20, "8G") < 0)
		{
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			int int_2 = 1;
			double double_7 = 1;
			double double_9 = 1;
			int int_3 = 1;
			double double_8 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			float_1 = streamStateFromFormat(char_1,unsigned_int_1,int_1,float_1,double_6,int_2,int_2,uni_para);

			long_3 = long_2 + long_2;
			return double_6;
		}
		double_6 = double_5;
		if(1)
		{
			double_8 = double_7 + double_1;
		}
		else
		{
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			int int_2 = 1;
			double double_7 = 1;
			double double_9 = 1;
			int int_3 = 1;
			double double_8 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_3 = fabs ( double_2 ) ;
			double_8 = atan2 ( double_9 , double_3 ) ;
			double_2 = cosh ( double_4 ) ;
			double_9 = exp ( double_1 ) ;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char controller_2[5];
				fgets(controller_2 ,5 ,stdin);
				if( strcmp( controller_2, "u}FM") == 0)
				{
					double_7 = sinh ( double_7 ) ;
				}
			}
			double_7 = sinh ( double_3 ) ;
		}
		double_3 = floor ( double_9 ) ;
	}
	int_2 = int_2 + int_3;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		int int_2 = 1;
		double double_7 = 1;
		double double_9 = 1;
		int int_3 = 1;
		double double_8 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		float_2 = float_2;
	}
	double_9 = atan2 ( double_9 , double_3 ) ;
	double_6 = double_6;
	double_5 = exp ( double_7 ) ;
	char_2 = char_1;
}
void vformat( long parameter_1,short parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = formatImpl(short_1,char_1,double_2,int_1,uni_para);

	long_1 = long_2;
}
float format( unsigned int parameter_1,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	vformat(long_1,short_1,double_1,uni_para);

	long_2 = long_2;
}
short printf( char parameter_1,int uni_para)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = format(unsigned_int_1,uni_para);

	int_1 = int_2;
}
int read_section64_by_id( char parameter_1,int parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_8 = 1;
	short short_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_9 = 1;
	double_1 = double_1;
	double_1 = double_2;
	long_1 = long_2;
	char_2 = char_1 * char_2;
	double_3 = double_4;
	long_1 = long_1;
	double_2 = atan2 ( double_4 , double_2 ) ;
	float_2 = float_1 + float_1;
	char controller4vul_19[1];
	fgets(controller4vul_19 ,2 ,stdin);
	if( strcmp( controller4vul_19, "J") == 0)
	{
		short_1 = printf(char_2,uni_para);

		return int_1;
	}
	double_3 = exp ( double_1 ) ;
	if(1)
	{
		double_5 = fmod ( double_4 , double_6 ) ;
	}
	double_2 = log10 ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		short short_3 = 1;
		int int_2 = 1;
		double double_8 = 1;
		short short_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_9 = 1;
		double_2 = atan2 ( double_7 , double_3 ) ;
		double_5 = ldexp ( double_8 , int_1 ) ;
		short_3 = short_2 * short_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		short short_3 = 1;
		int int_2 = 1;
		double double_8 = 1;
		short short_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_9 = 1;
		float_4 = float_3 + float_2;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
	}
	double_1 = cosh ( double_2 ) ;
	double_1 = atan ( double_6 ) ;
	if(1)
	{
		double_5 = double_7;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		short short_3 = 1;
		int int_2 = 1;
		double double_8 = 1;
		short short_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_9 = 1;
		double_7 = ceil ( double_9 ) ;
	}
	if(1)
	{
		short_3 = short_3 * short_1;
	}
	return int_2;
}
int read_section64_header_strtab( char parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double_1 = atan ( double_2 ) ;
	double_3 = tanh ( double_1 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_2;
	double_1 = cosh ( double_2 ) ;
	char controller4vul_18[5];
	fgets(controller4vul_18 ,6 ,stdin);
	if( strcmp( controller4vul_18, "&0(}p") > 0)
	{
		int_1 = read_section64_by_id(char_1,int_2,int_1,uni_para);

		double_3 = cosh ( double_4 ) ;
	}
	long_2 = long_1 + long_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		double double_5 = 1;
		char_1 = char_2 * char_2;
	}
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double_2 = atan2 ( double_5 , double_2 ) ;
	}
	if(1)
	{
		double_4 = double_4;
	}
	int_1 = int_1;
	return int_3;
}
int read_elf64_header( char parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char_3 = char_1 + char_2;
	double_1 = cosh ( double_1 ) ;
	char_1 = char_3;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		int_2 = int_2 + int_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double_1 = exp ( double_2 ) ;
	}
	return int_1;
}
int read_section64_headers_all( char parameter_1,int parameter_2,short parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_5 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_4 = 1;
	short short_1 = 1;
	double double_6 = 1;
	int_1 = read_elf64_header(char_1,double_1);

	double_2 = cosh ( double_1 ) ;
	double_2 = floor ( double_3 ) ;
	double_2 = ldexp ( double_1 , int_2 ) ;
	double_3 = acos ( double_3 ) ;
	double_2 = pow ( double_1 , double_1 ) ;
	double_1 = floor ( double_3 ) ;
	double_4 = atan ( double_2 ) ;
	if(1)
	{
		return int_1;
	}
	double_2 = atan ( double_3 ) ;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_5 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_5 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		int_4 = int_1 * int_3;
		double_4 = tanh ( double_3 ) ;
	}
	double_4 = atan2 ( double_2 , double_3 ) ;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_5 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		long_3 = long_1 * long_2;
		long_5 = long_4 + long_1;
	}
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_5 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double_2 = double_5;
		short_1 = short_1 * short_1;
	}
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_5 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double_8 = double_6 + double_7;
		long_5 = long_2;
	}
	double_7 = fmod ( double_8 , double_8 ) ;
	double_3 = double_5 * double_8;
	if(1)
	{
		double_5 = double_5;
	}
	if(1)
	{
		long_1 = long_5;
	}
	return int_5;
}
int read_section64_by_name( char parameter_1,char parameter_2,int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_5 = 1;
	char char_3 = 1;
	short short_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_8 = 1;
	int_1 = int_1;
	long_1 = long_2;
	double_1 = asin ( double_2 ) ;
	double_2 = exp ( double_1 ) ;
	double_3 = pow ( double_3 , double_3 ) ;
	double_3 = tanh ( double_4 ) ;
	if(1)
	{
		return int_2;
	}
	double_4 = acos ( double_2 ) ;
	if(1)
	{
		double_4 = tanh ( double_2 ) ;
	}
	int_2 = read_section64_header_strtab(char_1,int_1,char_2,500);

	double_1 = cosh ( double_4 ) ;
	if(1)
	{
		double_5 = ldexp ( double_5 , int_3 ) ;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_5 = 1;
		char char_3 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_8 = 1;
		int_4 = int_3 + int_2;
		if(1)
		{
		}
		if(1)
		{
			int int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_3 = 1;
			int int_5 = 1;
			char char_3 = 1;
			short short_1 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_8 = 1;
			float_1 = float_1 + float_2;
			if(1)
			{
				int_5 = read_section64_headers_all(char_3,int_1,short_1);

				double_6 = cosh ( double_1 ) ;
				double_7 = double_2;
			}
			if(1)
			{
				double_5 = asin ( double_2 ) ;
				double_3 = tan ( double_2 ) ;
			}
			double_7 = sqrt ( double_1 ) ;
			double_1 = double_6;
			double_1 = log10 ( double_2 ) ;
		}
	}
	if(1)
	{
		double_4 = double_3;
	}
	if(1)
	{
		double_7 = acos ( double_6 ) ;
	}
	if(1)
	{
		double_1 = pow ( double_5 , double_5 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_5 = 1;
		char char_3 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_8 = 1;
		double_8 = log10 ( double_8 ) ;
	}
	return int_1;
}
int main()
{
	int uni_para =278;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = double_1 + double_2;
	double_2 = log10 ( double_3 ) ;
	unsigned_int_1 = unsigned_int_2;
	float_1 = float_1;
	short_1 = short_2;
	double_4 = sinh ( double_3 ) ;
	char controller4vul_11[5];
	fgets(controller4vul_11 ,6 ,stdin);
	if( strcmp( controller4vul_11, "I{($#") == 0)
	{
		apply_map_relocations(char_1,int_1,short_2,uni_para);

		double_3 = double_4;
	}
	else
	{
		double_4 = sinh ( double_1 ) ;
	}
	long_1 = long_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "@r") == 0)
	{
		long_1 = long_2;
	}
	double_1 = cosh ( double_5 ) ;
	char controller_2[5];
	fgets(controller_2 ,5 ,stdin);
	if( strcmp( controller_2, "KVss") == 0)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_4 = double_2 + double_3;
	}
	double_6 = ldexp ( double_6 , int_2 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_3 = 1;
		int int_4 = 1;
		looper_2 += 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_3;
		double_6 = fmod ( double_1 , double_5 ) ;
		double_5 = asin ( double_1 ) ;
		unsigned_int_2 = unsigned_int_4;
		short_4 = short_3 + short_4;
		long_3 = long_2 + long_3;
		double_1 = atan2 ( double_7 , double_3 ) ;
		unsigned_int_3 = unsigned_int_2;
		float_1 = float_1;
		double_4 = asin ( double_4 ) ;
		double_5 = sqrt ( double_8 ) ;
		int_4 = int_3 + int_2;
		long_2 = long_2;
	}
	return int_1;
}
