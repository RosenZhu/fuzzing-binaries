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

void randclear( float parameter_1);
void zz_clear( long parameter_1);
void zz_subi( char parameter_1,int parameter_2,long parameter_3);
void zz_addi( double parameter_1,unsigned int parameter_2,double parameter_3);
void zz_fit( double parameter_1,char parameter_2);
void zz_muli( float parameter_1,double parameter_2,float parameter_3);
void zz_zero( float parameter_1);
float nn_set_str_raw( double parameter_1,double parameter_2,double parameter_3,int parameter_4);
unsigned int nn_get_str_raw( char parameter_1,int parameter_2,float parameter_3,float parameter_4);
void zz_init( double parameter_1);
int test_get_set_str_raw();
char nn_set_str( short parameter_1,float parameter_2,long parameter_3);
float nn_divrem1_simple_c( unsigned int parameter_1,int parameter_2,double parameter_3,double parameter_4,long parameter_5);
int nn_get_str( short parameter_1,int parameter_2);
int test_get_set_str();
long zz0_sub( unsigned int parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4,double parameter_5);
void zz0_mul( short parameter_1,char parameter_2,double parameter_3,long parameter_4,long parameter_5);
int nn_xgcd_lehmer( double parameter_1,unsigned int parameter_2,double parameter_3,long parameter_4,char parameter_5,float parameter_6);
int test_xgcd_lehmer();
float nn_cmp( short parameter_1,short parameter_2,char parameter_3,char parameter_4);
void nn_mullow_kara( float parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5,unsigned int parameter_6,int uni_para);
short nn_sub_mc( char parameter_1,unsigned int parameter_2,char parameter_3,double parameter_4,short parameter_5);
int nn_add_mc( float parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4,int parameter_5);
void nn_mulmid_kara( double parameter_1,char parameter_2,int parameter_3,long parameter_4,float parameter_5,unsigned int parameter_6);
unsigned int nn_divapprox_divconquer_preinv_c( char parameter_1,long parameter_2,char parameter_3,float parameter_4,char parameter_5,int parameter_6,double parameter_7);
double nn_divapprox_preinv_c( double parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7);
void nn_divrem_preinv_c( long parameter_1,long parameter_2,float parameter_3,unsigned int parameter_4,unsigned int parameter_5,unsigned int parameter_6,int parameter_7);
void nn_divrem_divconquer_preinv_c( unsigned int parameter_1,double parameter_2,short parameter_3,unsigned int parameter_4,double parameter_5,float parameter_6,long parameter_7,int uni_para);
int nn_divrem1_preinv_c( int parameter_1,float parameter_2,char parameter_3,long parameter_4,short parameter_5,int parameter_6);
void nn_divrem( float parameter_1,char parameter_2,long parameter_3,short parameter_4,long parameter_5,int uni_para);
double nn_gcd_lehmer( unsigned int parameter_1,char parameter_2,int parameter_3,long parameter_4,int parameter_5,int uni_para);
void nn_mul_toom32( double parameter_1,char parameter_2,int parameter_3,double parameter_4,short parameter_5,int uni_para);
float precompute_inverse1();
void nn_mul_toom33( float parameter_1,int parameter_2,short parameter_3,double parameter_4,char parameter_5,int uni_para);
void nn_mul_m( int parameter_1,float parameter_2,char parameter_3,double parameter_4,int uni_para);
void nn_mul_kara( double parameter_1,float parameter_2,float parameter_3,long parameter_4,char parameter_5);
void nn_mul( short parameter_1,float parameter_2,double parameter_3,float parameter_4,long parameter_5,int uni_para);
int test_gcd_lehmer(int uni_para);
void nn_div_hensel_preinv( int parameter_1,char parameter_2,double parameter_3,char parameter_4,float parameter_5,int parameter_6,double parameter_7);
char precompute_hensel_inverse1( int parameter_1,int parameter_2);
int test_div_hensel_preinv();
long _nn_divapprox_helper( unsigned int parameter_1,float parameter_2,float parameter_3,int parameter_4);
double nn_divapprox_classical_preinv_c( double parameter_1,char parameter_2,short parameter_3,unsigned int parameter_4,short parameter_5,char parameter_6,double parameter_7);
unsigned int nn_copy( int parameter_1,unsigned int parameter_2,float parameter_3);
int test_divapprox_classical_preinv();
void nn_divrem_classical_preinv_c( double parameter_1,char parameter_2,float parameter_3,int parameter_4,char parameter_5,float parameter_6,unsigned int parameter_7);
int nn_cmp_m( double parameter_1,double parameter_2,long parameter_3);
unsigned int precompute_inverse2( int parameter_1,unsigned int parameter_2);
int test_divrem_classical_preinv();
short nn_sub1( int parameter_1,int parameter_2,char parameter_3,double parameter_4);
int _nn_mulmid_add_lfix_m( unsigned int parameter_1,short parameter_2,double parameter_3,long parameter_4,float parameter_5,long parameter_6,int parameter_7);
void _nn_mulmid_sub_rfix_m( char parameter_1,int parameter_2,short parameter_3,long parameter_4,short parameter_5,short parameter_6,long parameter_7);
short _nn_mulmid_add_rfix_m( short parameter_1,short parameter_2,int parameter_3,double parameter_4,double parameter_5,long parameter_6,char parameter_7);
void nn_mulmid_classical( double parameter_1,double parameter_2,short parameter_3,char parameter_4,char parameter_5,short parameter_6);
int test_mulmid_classical();
int parse_fmt( int parameter_1,double parameter_2);
void bsdnt_printf( short parameter_1,char parameter_2);
char nn_add1( float parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4);
void nn_mulhigh_classical( int parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4,unsigned int parameter_5,short parameter_6);
void nn_mullow_classical( short parameter_1,double parameter_2,float parameter_3,char parameter_4,double parameter_5,int parameter_6);
int test_mullow_classical();
short nn_equal_m( double parameter_1,unsigned int parameter_2,float parameter_3);
void nn_mul_classical( double parameter_1,float parameter_2,float parameter_3,int parameter_4,double parameter_5);
float new_node( unsigned int parameter_1,unsigned int parameter_3,float parameter_4);
unsigned int nn_normalise( float parameter_1,unsigned int parameter_2);
void nn_random( unsigned int parameter_1,int parameter_2,double parameter_3);
void nn_test_random2( short parameter_1,double parameter_2,char parameter_3);
void nn_bit_set( float parameter_1,long parameter_2);
int nn_zero( unsigned int parameter_1,short parameter_2);
void nn_test_random1( long parameter_1,unsigned int parameter_2,float parameter_3);
void nn_test_random( short parameter_1,unsigned int parameter_2,short parameter_3);
long nn_init( double parameter_1);
long alloc_redzoned_nn( unsigned int parameter_1);
void randoms_of_len( double parameter_1,double parameter_2,float parameter_3,float parameter_4);
char randint( float parameter_1,unsigned int parameter_2);
void talker( char parameter_1);
void randoms_upto( long parameter_1,char parameter_2,int parameter_3,short parameter_4);
int test_mul_classical();
int test_quadratic(int uni_para);
int skiss_word( short parameter_1);
void skiss_clear( long parameter_1);
long skiss_init();
unsigned int mt_word( short parameter_1);
void mt_clear( unsigned int parameter_1);
long mt_init();
float kiss_word( short parameter_1);
void kiss_clear( float parameter_1);
unsigned int kiss_init();
long set_rand_algorithm( char parameter_1);
char randinit( int parameter_1);
void randclear( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
}
void zz_clear( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = atan2 ( double_2 , double_2 ) ;
}
void zz_subi( char parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	short short_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_6 = 1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	else
	{
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_5 = 1;
		short short_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		float float_2 = 1;
		double double_6 = 1;
		double_1 = tan ( double_2 ) ;
		double_3 = ceil ( double_3 ) ;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_4 = asin ( double_2 ) ;
		}
		else
		{
			if(1)
			{
				char_1 = nn_add1(float_1,unsigned_int_1,long_1,unsigned_int_1);

				double_4 = pow ( double_3 , double_3 ) ;
				int_1 = int_1;
			}
			if(1)
			{
				zz_addi(double_5,unsigned_int_2,double_4);

				double_1 = atan2 ( double_1 , double_2 ) ;
				if(1)
				{
					double_3 = log ( double_3 ) ;
				}
				else
				{
					unsigned int unsigned_int_1 = 1;
					double double_2 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					char char_1 = 1;
					float float_1 = 1;
					long long_1 = 1;
					int int_1 = 1;
					double double_5 = 1;
					short short_1 = 1;
					char char_2 = 1;
					double double_1 = 1;
					double double_3 = 1;
					short short_2 = 1;
					float float_2 = 1;
					double double_6 = 1;
					short_1 = short_2;
					short_1 = nn_sub1(int_1,int_1,char_2,double_2);

					float_2 = float_1;
				}
			}
			else
			{
				unsigned int unsigned_int_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				char char_1 = 1;
				float float_1 = 1;
				long long_1 = 1;
				int int_1 = 1;
				double double_5 = 1;
				short short_1 = 1;
				char char_2 = 1;
				double double_1 = 1;
				double double_3 = 1;
				short short_2 = 1;
				float float_2 = 1;
				double double_6 = 1;
				zz_fit(double_5,char_2);

				double_6 = double_2 * double_5;
				double_6 = tanh ( double_1 ) ;
			}
		}
	}
}
void zz_addi( double parameter_1,unsigned int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	if(1)
	{
		double_1 = log ( double_2 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double_2 = log10 ( double_2 ) ;
		zz_subi(char_1,int_1,long_1);

		double_1 = cosh ( double_1 ) ;
		if(1)
		{
			char_1 = char_1 * char_1;
			double_2 = fabs ( double_1 ) ;
		}
		if(1)
		{
			zz_fit(double_1,char_1);

			short_1 = nn_sub1(int_1,int_2,char_2,double_1);

			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			if(1)
			{
				double_1 = cosh ( double_1 ) ;
			}
			else
			{
				double_2 = sqrt ( double_1 ) ;
				double_3 = atan2 ( double_3 , double_3 ) ;
			}
		}
		else
		{
			double_1 = atan ( double_3 ) ;
			char_2 = nn_add1(float_1,unsigned_int_1,long_1,unsigned_int_1);

			double_1 = log ( double_2 ) ;
		}
	}
}
void zz_fit( double parameter_1,char parameter_2)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double_1 = sinh ( double_1 ) ;
		double_1 = cos ( double_2 ) ;
	}
}
void zz_muli( float parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	zz_fit(double_1,char_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_2 = fmod ( double_2 , double_3 ) ;
	}
	else
	{
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_4 = tanh ( double_4 ) ;
		double_4 = sinh ( double_4 ) ;
		double_5 = log ( double_3 ) ;
		double_2 = tanh ( double_6 ) ;
	}
}
void zz_zero( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 + double_2;
}
float nn_set_str_raw( double parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long_1 = long_1 + long_2;
	double_1 = tan ( double_1 ) ;
	double_2 = cosh ( double_2 ) ;
	if(1)
	{
		return float_1;
	}
	char_1 = nn_add1(float_1,unsigned_int_1,long_2,unsigned_int_2);

	double_2 = atan ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_3 = 1;
		char_3 = char_1 * char_2;
		double_3 = atan ( double_1 ) ;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_3 = 1;
			long_2 = long_2 + long_3;
		}
	}
	return float_1;
}
unsigned int nn_get_str_raw( char parameter_1,int parameter_2,float parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	unsigned_int_1 = nn_normalise(float_1,unsigned_int_2);

	long_2 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_2;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "Q4`K6") == 0)
	{
		return unsigned_int_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		looper_1 += 1;
		double_1 = atan ( double_2 ) ;
		double_2 = exp ( double_2 ) ;
	}
	double_2 = cosh ( double_2 ) ;
	double_3 = tan ( double_2 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		looper_2 += 1;
		int_1 = int_2;
		int_2 = int_1;
		double_4 = sqrt ( double_2 ) ;
	}
	return unsigned_int_1;
}
void zz_init( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = tan ( double_2 ) ;
	double_2 = tan ( double_3 ) ;
	char_1 = char_2;
}
int test_get_set_str_raw()
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	int int_4 = 1;
	double double_8 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	float float_4 = 1;
	char char_3 = 1;
	char_1 = char_1 * char_1;
	double_1 = tanh ( double_2 ) ;
	double_3 = tan ( double_1 ) ;
	double_2 = double_3 * double_1;
	zz_addi(double_1,unsigned_int_1,double_3);

	double_2 = ceil ( double_2 ) ;
	zz_clear(long_1);

	double_2 = double_3;
	double_3 = sinh ( double_2 ) ;
	long_1 = long_1;
	short_1 = short_1;
	double_4 = fmod ( double_4 , double_1 ) ;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	short_1 = nn_equal_m(double_2,unsigned_int_3,float_1);

	int_2 = int_1 + int_1;
	double_5 = sinh ( double_6 ) ;
	double_6 = floor ( double_6 ) ;
	double_3 = cos ( double_4 ) ;
	zz_init(double_2);

	zz_zero(float_1);

	double_3 = atan2 ( double_6 , double_4 ) ;
	double_2 = asin ( double_2 ) ;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "u") == 0)
	{
		double_5 = double_3;
		unsigned_int_3 = nn_copy(int_3,unsigned_int_4,float_1);

		float_1 = nn_set_str_raw(double_3,double_7,double_3,int_4);

		double_8 = log10 ( double_7 ) ;
		int_2 = int_4;
		double_2 = double_1;
	}
	float_2 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		zz_muli(float_2,double_7,float_3);

		double_5 = tan ( double_3 ) ;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
	}
	if(1)
	{
		double_7 = double_4 * double_4;
	}
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		int int_4 = 1;
		double double_8 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		short short_2 = 1;
		float float_4 = 1;
		char char_3 = 1;
		randoms_upto(long_1,char_2,int_3,short_2);

		char_3 = char_2 + char_1;
		double_5 = double_4 * double_5;
		double_8 = fabs ( double_6 ) ;
		int_3 = int_4;
	}
	double_1 = atan2 ( double_3 , double_5 ) ;
	unsigned_int_2 = nn_get_str_raw(char_1,int_2,float_4,float_1);

	double_1 = double_7;
	return int_2;
	randoms_of_len(double_3,double_3,float_2,float_3);

}
char nn_set_str( short parameter_1,float parameter_2,long parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char_1 = nn_add1(float_1,unsigned_int_1,long_1,unsigned_int_2);

	double_1 = exp ( double_2 ) ;
	int_1 = int_2;
	double_1 = asin ( double_3 ) ;
	if(1)
	{
		double_1 = sinh ( double_4 ) ;
		return char_1;
	}
	double_1 = log10 ( double_4 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		float float_2 = 1;
		double_2 = sqrt ( double_3 ) ;
		float_2 = float_1;
		if(1)
		{
			double_4 = double_2;
		}
	}
	int_3 = int_3 * int_1;
	return char_1;
}
float nn_divrem1_simple_c( unsigned int parameter_1,int parameter_2,double parameter_3,double parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	double_3 = fabs ( double_2 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_3 = sinh ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		int_1 = int_1 + int_1;
		double_2 = atan ( double_2 ) ;
		double_4 = cos ( double_2 ) ;
	}
	return float_1;
}
int nn_get_str( short parameter_1,int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_1;
	float_1 = float_2;
	int_1 = int_1;
	double_1 = fabs ( double_2 ) ;
	double_2 = cosh ( double_3 ) ;
	double_4 = asin ( double_3 ) ;
	if(1)
	{
		float_1 = nn_divrem1_simple_c(unsigned_int_1,int_1,double_1,double_1,long_1);

		double_2 = cosh ( double_3 ) ;
	}
	else
	{
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_2 = float_1;
		int_4 = int_2 * int_3;
		char_1 = char_1;
		double_3 = double_2;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_5 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned_int_2 = nn_copy(int_1,unsigned_int_3,float_3);

			int_4 = int_3 + int_4;
			double_2 = asin ( double_5 ) ;
			unsigned_int_2 = nn_normalise(float_4,unsigned_int_4);

			unsigned_int_3 = unsigned_int_1;
			int_2 = int_4;
			double_5 = floor ( double_3 ) ;
			long_2 = long_2 * long_1;
		}
		double_2 = double_3 * double_1;
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				float float_3 = 1;
				float float_4 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_2 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				double double_5 = 1;
				long long_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				short_1 = short_2;
			}
		}
	}
	char_2 = char_1 + char_1;
	return int_1;
}
int test_get_set_str()
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	int int_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double_1 = sqrt ( double_1 ) ;
	char_1 = nn_set_str(short_1,float_1,long_1);

	short_1 = nn_equal_m(double_1,unsigned_int_1,float_2);

	unsigned_int_1 = unsigned_int_1;
	double_2 = ldexp ( double_3 , int_1 ) ;
	double_2 = double_2;
	int_2 = int_2 + int_3;
	randoms_of_len(double_4,double_4,float_2,float_2);

	unsigned_int_2 = unsigned_int_1;
	double_2 = sinh ( double_3 ) ;
	int_3 = nn_get_str(short_2,int_4);

	double_3 = sinh ( double_5 ) ;
	double_4 = log10 ( double_6 ) ;
	randoms_upto(long_1,char_2,int_5,short_2);

	double_1 = exp ( double_7 ) ;
	double_1 = cosh ( double_8 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	}
	double_7 = sqrt ( double_4 ) ;
	double_9 = double_3;
	return int_2;
}
long zz0_sub( unsigned int parameter_1,short parameter_2,float parameter_3,unsigned int parameter_4,double parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_1;
	double_1 = floor ( double_3 ) ;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_2 = 1;
		double_1 = sinh ( double_1 ) ;
		float_1 = float_2;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_2 = 1;
			double_3 = ldexp ( double_2 , int_1 ) ;
			double_4 = ldexp ( double_5 , int_1 ) ;
		}
		if(1)
		{
			double_1 = floor ( double_4 ) ;
		}
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
		int_1 = int_1;
		if(1)
		{
			double_3 = tanh ( double_6 ) ;
		}
	}
	double_1 = double_7 * double_6;
	return long_1;
}
void zz0_mul( short parameter_1,char parameter_2,double parameter_3,long parameter_4,long parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double_3 = double_1 + double_2;
	double_3 = acos ( double_3 ) ;
	double_4 = double_1;
	if(1)
	{
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		short short_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double_7 = double_5 * double_6;
		float_1 = float_1;
		double_1 = log10 ( double_4 ) ;
	}
	nn_mul(short_1,float_2,double_5,float_1,long_1,504);

}
int nn_xgcd_lehmer( double parameter_1,unsigned int parameter_2,double parameter_3,long parameter_4,char parameter_5,float parameter_6)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_8 = 1;
	float float_3 = 1;
	double double_9 = 1;
	char char_4 = 1;
	float float_5 = 1;
	double double_10 = 1;
	double double_12 = 1;
	double double_13 = 1;
	short short_4 = 1;
	int int_7 = 1;
	int int_8 = 1;
	double double_15 = 1;
	long long_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	float float_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_8 = 1;
	long long_7 = 1;
	double double_14 = 1;
	char char_5 = 1;
	zz0_mul(short_1,char_1,double_1,long_1,long_1);

	double_2 = cos ( double_1 ) ;
	double_4 = double_3 * double_3;
	int_1 = int_2;
	double_4 = sinh ( double_2 ) ;
	short_3 = short_1 * short_2;
	short_2 = short_1 * short_3;
	double_2 = asin ( double_5 ) ;
	double_3 = pow ( double_6 , double_1 ) ;
	double_2 = tan ( double_6 ) ;
	long_1 = long_1;
	char_2 = char_2 * char_2;
	unsigned_int_1 = unsigned_int_1;
	double_6 = ceil ( double_4 ) ;
	double_6 = sqrt ( double_2 ) ;
	nn_divrem(float_1,char_1,long_1,short_3,long_2,978);

	double_5 = asin ( double_2 ) ;
	double_4 = floor ( double_3 ) ;
	unsigned_int_1 = nn_normalise(float_1,unsigned_int_2);

	double_6 = atan2 ( double_2 , double_7 ) ;
	double_7 = floor ( double_2 ) ;
	double_3 = ceil ( double_3 ) ;
	double_3 = fmod ( double_6 , double_4 ) ;
	int_2 = int_2;
	unsigned_int_3 = nn_copy(int_3,unsigned_int_4,float_1);

	double_5 = double_6 * double_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_8 = 1;
		float float_3 = 1;
		double double_9 = 1;
		char char_4 = 1;
		float float_5 = 1;
		double double_10 = 1;
		double double_12 = 1;
		double double_13 = 1;
		short short_4 = 1;
		int int_7 = 1;
		int int_8 = 1;
		double double_15 = 1;
		long long_3 = 1;
		int int_4 = 1;
		float float_2 = 1;
		float float_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_8 = 1;
		long long_7 = 1;
		double double_14 = 1;
		char char_5 = 1;
		looper_1 += 1;
		char_3 = nn_add1(float_1,unsigned_int_5,long_1,unsigned_int_6);

		long_1 = long_3;
		double_3 = cos ( double_1 ) ;
		double_4 = double_1 * double_2;
		int_5 = int_4 * int_5;
		int_5 = int_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_1 = 1;
			char char_1 = 1;
			double double_1 = 1;
			long long_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_8 = 1;
			float float_3 = 1;
			double double_9 = 1;
			char char_4 = 1;
			float float_5 = 1;
			double double_10 = 1;
			double double_12 = 1;
			double double_13 = 1;
			short short_4 = 1;
			int int_7 = 1;
			int int_8 = 1;
			double double_15 = 1;
			long long_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			float float_4 = 1;
			long long_4 = 1;
			long long_5 = 1;
			long long_6 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_8 = 1;
			long long_7 = 1;
			double double_14 = 1;
			char char_5 = 1;
			float_1 = float_2;
			double_3 = fmod ( double_4 , double_5 ) ;
			int_6 = int_5;
			double_4 = pow ( double_6 , double_6 ) ;
			if(1)
			{
				if(1)
				{
				}
			}
			else
			{
				if(1)
				{
				}
			}
			double_8 = floor ( double_8 ) ;
			int_6 = nn_zero(unsigned_int_4,short_2);

			float_1 = float_1 * float_3;
			double_7 = log10 ( double_6 ) ;
			double_5 = cosh ( double_6 ) ;
			int_5 = int_1 + int_3;
			long_1 = long_4;
		}
		if(1)
		{
			short short_1 = 1;
			char char_1 = 1;
			double double_1 = 1;
			long long_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_8 = 1;
			float float_3 = 1;
			double double_9 = 1;
			char char_4 = 1;
			float float_5 = 1;
			double double_10 = 1;
			double double_12 = 1;
			double double_13 = 1;
			short short_4 = 1;
			int int_7 = 1;
			int int_8 = 1;
			double double_15 = 1;
			long long_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			float float_4 = 1;
			long long_4 = 1;
			long long_5 = 1;
			long long_6 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_8 = 1;
			long long_7 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double_1 = floor ( double_1 ) ;
			long_5 = long_6;
			double_1 = tanh ( double_7 ) ;
			double_3 = cosh ( double_1 ) ;
			double_4 = cos ( double_7 ) ;
			double_9 = exp ( double_1 ) ;
			unsigned_int_2 = unsigned_int_2;
			float_3 = nn_cmp(short_1,short_3,char_2,char_4);

			float_1 = float_3;
			float_3 = float_2 * float_4;
		}
		else
		{
			short short_1 = 1;
			char char_1 = 1;
			double double_1 = 1;
			long long_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_8 = 1;
			float float_3 = 1;
			double double_9 = 1;
			char char_4 = 1;
			float float_5 = 1;
			double double_10 = 1;
			double double_12 = 1;
			double double_13 = 1;
			short short_4 = 1;
			int int_7 = 1;
			int int_8 = 1;
			double double_15 = 1;
			long long_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			float float_4 = 1;
			long long_4 = 1;
			long long_5 = 1;
			long long_6 = 1;
			double double_11 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_8 = 1;
			long long_7 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double_8 = exp ( double_2 ) ;
			double_1 = double_7;
			if(1)
			{
				float_5 = float_4;
				int_2 = int_3;
				double_9 = tanh ( double_10 ) ;
				double_8 = fmod ( double_9 , double_3 ) ;
				double_8 = fabs ( double_7 ) ;
				double_3 = ldexp ( double_11 , int_6 ) ;
			}
			else
			{
				unsigned_int_7 = unsigned_int_6;
				unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
				double_12 = ceil ( double_13 ) ;
				short_2 = short_2;
				double_9 = atan ( double_1 ) ;
				double_4 = exp ( double_10 ) ;
				double_3 = cos ( double_1 ) ;
			}
			if(1)
			{
				short short_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				long long_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_2 = 1;
				short short_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_8 = 1;
				float float_3 = 1;
				double double_9 = 1;
				char char_4 = 1;
				float float_5 = 1;
				double double_10 = 1;
				double double_12 = 1;
				double double_13 = 1;
				short short_4 = 1;
				int int_7 = 1;
				int int_8 = 1;
				double double_15 = 1;
				long long_3 = 1;
				int int_4 = 1;
				float float_2 = 1;
				float float_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double double_11 = 1;
				unsigned int unsigned_int_7 = 1;
				float float_6 = 1;
				unsigned int unsigned_int_8 = 1;
				long long_7 = 1;
				double double_14 = 1;
				char char_5 = 1;
				double_2 = double_4 * double_6;
				double_12 = pow ( double_13 , double_2 ) ;
				long_1 = zz0_sub(unsigned_int_6,short_4,float_1,unsigned_int_2,double_10);

				double_10 = fabs ( double_10 ) ;
				float_6 = float_3;
				unsigned_int_3 = unsigned_int_8;
				int_6 = int_3 * int_7;
				double_2 = floor ( double_10 ) ;
			}
			else
			{
				double_3 = fmod ( double_13 , double_5 ) ;
				double_6 = acos ( double_5 ) ;
				double_1 = log ( double_1 ) ;
				short_3 = short_3;
				double_13 = double_2 * double_13;
				unsigned_int_7 = unsigned_int_2;
			}
			if(1)
			{
				short short_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				long long_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_2 = 1;
				short short_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_8 = 1;
				float float_3 = 1;
				double double_9 = 1;
				char char_4 = 1;
				float float_5 = 1;
				double double_10 = 1;
				double double_12 = 1;
				double double_13 = 1;
				short short_4 = 1;
				int int_7 = 1;
				int int_8 = 1;
				double double_15 = 1;
				long long_3 = 1;
				int int_4 = 1;
				float float_2 = 1;
				float float_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double double_11 = 1;
				unsigned int unsigned_int_7 = 1;
				float float_6 = 1;
				unsigned int unsigned_int_8 = 1;
				long long_7 = 1;
				double double_14 = 1;
				char char_5 = 1;
				long_3 = long_7 * long_7;
				short_4 = nn_sub1(int_2,int_1,char_1,double_9);

				double_9 = double_11 + double_14;
			}
			if(1)
			{
				short short_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				long long_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_2 = 1;
				short short_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_8 = 1;
				float float_3 = 1;
				double double_9 = 1;
				char char_4 = 1;
				float float_5 = 1;
				double double_10 = 1;
				double double_12 = 1;
				double double_13 = 1;
				short short_4 = 1;
				int int_7 = 1;
				int int_8 = 1;
				double double_15 = 1;
				long long_3 = 1;
				int int_4 = 1;
				float float_2 = 1;
				float float_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double double_11 = 1;
				unsigned int unsigned_int_7 = 1;
				float float_6 = 1;
				unsigned int unsigned_int_8 = 1;
				long long_7 = 1;
				double double_14 = 1;
				char char_5 = 1;
				int_7 = int_7 * int_4;
				char_5 = char_2 * char_3;
			}
			double_1 = sinh ( double_10 ) ;
			double_6 = double_11;
			double_2 = fmod ( double_1 , double_4 ) ;
			double_4 = cos ( double_1 ) ;
			int_8 = int_4;
			short_1 = short_2 * short_4;
			double_13 = cosh ( double_4 ) ;
			double_15 = asin ( double_5 ) ;
			if(1)
			{
				double_3 = fabs ( double_2 ) ;
				unsigned_int_6 = unsigned_int_5;
				double_12 = sinh ( double_7 ) ;
			}
			else
			{
				double_13 = ceil ( double_5 ) ;
				double_8 = log ( double_4 ) ;
				double_7 = log ( double_7 ) ;
			}
		}
	}
	if(1)
	{
		double_15 = double_10;
		double_8 = pow ( double_6 , double_13 ) ;
		unsigned_int_6 = unsigned_int_2;
	}
	float_5 = float_1 + float_3;
	char controller_11[3];
	fgets(controller_11 ,3 ,stdin);
	if( strcmp( controller_11, "Ui") == 0)
	{
		double_1 = exp ( double_7 ) ;
	}
	if(1)
	{
		double_5 = tan ( double_12 ) ;
	}
	unsigned_int_3 = unsigned_int_5 + unsigned_int_4;
	int_5 = int_2 + int_7;
	return int_8;
}
int test_xgcd_lehmer()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_7 = 1;
	long long_3 = 1;
	char char_2 = 1;
	float float_3 = 1;
	double double_8 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double double_9 = 1;
	int int_5 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_4 = 1;
	short short_4 = 1;
	char char_3 = 1;
	int int_4 = 1;
	double double_12 = 1;
	double double_13 = 1;
	int_1 = int_1 + int_1;
	double_1 = floor ( double_2 ) ;
	double_3 = ceil ( double_1 ) ;
	double_4 = double_2 * double_3;
	int_2 = int_2 + int_1;
	randoms_of_len(double_3,double_1,float_1,float_2);

	double_3 = ldexp ( double_1 , int_1 ) ;
	double_1 = sqrt ( double_1 ) ;
	double_2 = log10 ( double_5 ) ;
	randoms_upto(long_1,char_1,int_2,short_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = cos ( double_1 ) ;
	double_6 = cos ( double_5 ) ;
	double_6 = sinh ( double_3 ) ;
	unsigned_int_3 = unsigned_int_4;
	int_2 = int_3;
	double_2 = cos ( double_5 ) ;
	double_2 = asin ( double_6 ) ;
	long_2 = long_1 * long_1;
	int_3 = nn_xgcd_lehmer(double_4,unsigned_int_2,double_7,long_3,char_2,float_3);

	double_4 = cos ( double_1 ) ;
	double_2 = acos ( double_8 ) ;
	unsigned_int_2 = nn_normalise(float_2,unsigned_int_4);

	double_4 = tanh ( double_7 ) ;
	double_5 = pow ( double_4 , double_1 ) ;
	short_1 = short_2;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		long long_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		char char_2 = 1;
		float float_3 = 1;
		double double_8 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		float float_4 = 1;
		double double_9 = 1;
		int int_5 = 1;
		double double_10 = 1;
		double double_11 = 1;
		int int_6 = 1;
		int int_7 = 1;
		long long_4 = 1;
		short short_4 = 1;
		char char_3 = 1;
		int int_4 = 1;
		double double_12 = 1;
		double double_13 = 1;
		int_3 = int_2 + int_4;
		nn_divrem(float_1,char_1,long_1,short_2,long_2,515);

		unsigned_int_2 = unsigned_int_5;
		short_1 = short_3;
		float_4 = float_1 * float_4;
		short_3 = short_3;
	}
	int_3 = nn_cmp_m(double_3,double_6,long_2);

	double_7 = acos ( double_9 ) ;
	double_7 = log10 ( double_5 ) ;
	char_1 = nn_add1(float_4,unsigned_int_5,long_2,unsigned_int_4);

	double_7 = atan2 ( double_8 , double_4 ) ;
	unsigned_int_5 = nn_copy(int_5,unsigned_int_5,float_1);

	double_6 = tan ( double_4 ) ;
	double_10 = pow ( double_5 , double_9 ) ;
	double_10 = asin ( double_6 ) ;
	double_10 = tanh ( double_7 ) ;
	double_9 = tanh ( double_4 ) ;
	double_11 = atan2 ( double_11 , double_7 ) ;
	double_5 = double_9;
	short_2 = short_1;
	int_6 = int_7;
	double_4 = sinh ( double_1 ) ;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		long long_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		char char_2 = 1;
		float float_3 = 1;
		double double_8 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		float float_4 = 1;
		double double_9 = 1;
		int int_5 = 1;
		double double_10 = 1;
		double double_11 = 1;
		int int_6 = 1;
		int int_7 = 1;
		long long_4 = 1;
		short short_4 = 1;
		char char_3 = 1;
		int int_4 = 1;
		double double_12 = 1;
		double double_13 = 1;
		double_3 = atan2 ( double_9 , double_3 ) ;
		double_6 = tan ( double_5 ) ;
		double_1 = nn_gcd_lehmer(unsigned_int_2,char_2,int_6,long_4,int_6,487);

		double_12 = ceil ( double_4 ) ;
		nn_mul(short_3,float_3,double_4,float_1,long_2,804);

		float_1 = nn_cmp(short_4,short_2,char_2,char_3);

		double_1 = log10 ( double_13 ) ;
		double_4 = floor ( double_8 ) ;
	}
	double_2 = double_2;
	return int_2;
}
float nn_cmp( short parameter_1,short parameter_2,char parameter_3,char parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	if(1)
	{
		if(1)
		{
			return float_1;
		}
		else
		{
			return float_2;
		}
	}
	else
	{
		return float_1;
	}
	int_1 = nn_cmp_m(double_1,double_1,long_1);

}
void nn_mullow_kara( float parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,unsigned int parameter_5,unsigned int parameter_6,int uni_para)
{
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	double double_5 = 1;
	short short_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	long_1 = long_1;
	char_1 = char_2;
	long_1 = long_2 * long_3;
	short_1 = short_1;
	int_1 = int_2;
	double_1 = cos ( double_1 ) ;
	int_2 = int_2;
	char_3 = char_3;
	double_1 = double_1;
	double_1 = floor ( double_1 ) ;
	char controller4vul_26[1];
	fgets(controller4vul_26 ,2 ,stdin);
	if( strcmp( controller4vul_26, "@") > 0)
	{
		nn_mul(short_2,float_1,double_2,float_1,long_2,uni_para);

		double_3 = double_3 * double_1;
	}
	double_2 = double_1 * double_4;
	int_1 = int_1;
	int_1 = int_2 + int_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_4 = int_3;
	short_2 = short_1 * short_2;
	double_4 = atan2 ( double_3 , double_5 ) ;
	short_2 = short_3;
	double_1 = tan ( double_4 ) ;
	long_4 = long_2 + long_1;
	char_4 = char_1 + char_2;
}
short nn_sub_mc( char parameter_1,unsigned int parameter_2,char parameter_3,double parameter_4,short parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_1 = 1;
	short short_3 = 1;
	double_1 = double_1;
	double_1 = fabs ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	short_1 = short_2;
	double_2 = atan2 ( double_1 , double_2 ) ;
	double_3 = atan2 ( double_3 , double_3 ) ;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_3;
	short_1 = short_2;
	double_4 = log ( double_3 ) ;
	double_5 = atan2 ( double_2 , double_1 ) ;
	double_6 = tan ( double_7 ) ;
	double_1 = atan ( double_5 ) ;
	double_3 = log ( double_1 ) ;
	double_8 = atan2 ( double_5 , double_6 ) ;
	double_7 = ldexp ( double_8 , int_1 ) ;
	double_8 = log10 ( double_5 ) ;
	return short_3;
}
int nn_add_mc( float parameter_1,unsigned int parameter_2,double parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	int_2 = int_1 + int_1;
	double_1 = exp ( double_1 ) ;
	double_1 = fmod ( double_2 , double_2 ) ;
	double_3 = acos ( double_2 ) ;
	double_4 = double_5;
	double_4 = asin ( double_3 ) ;
	double_5 = acos ( double_1 ) ;
	char_2 = char_1 + char_1;
	double_6 = log10 ( double_5 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_6 = asin ( double_2 ) ;
	int_3 = int_1;
	double_6 = tan ( double_6 ) ;
	unsigned_int_2 = unsigned_int_1;
	double_6 = atan2 ( double_7 , double_3 ) ;
	double_6 = double_4 + double_5;
	double_6 = tan ( double_1 ) ;
	return int_2;
}
void nn_mulmid_kara( double parameter_1,char parameter_2,int parameter_3,long parameter_4,float parameter_5,unsigned int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	double double_7 = 1;
	long long_4 = 1;
	short short_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	char char_4 = 1;
	short short_2 = 1;
	long long_6 = 1;
	long long_7 = 1;
	int int_3 = 1;
	double double_11 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_4 = 1;
	char char_5 = 1;
	double double_13 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_12 = 1;
	short short_5 = 1;
	int int_6 = 1;
	double_1 = double_1;
	double_1 = double_1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	double_2 = sinh ( double_1 ) ;
	double_3 = log ( double_3 ) ;
	double_2 = double_3 + double_3;
	char_1 = char_2;
	nn_mulmid_kara(double_3,char_3,int_1,long_1,float_1,unsigned_int_1);

	double_4 = fmod ( double_5 , double_2 ) ;
	int_2 = int_2 * int_2;
	double_6 = log ( double_1 ) ;
	char_1 = nn_add1(float_2,unsigned_int_1,long_2,unsigned_int_2);

	double_3 = double_6 + double_4;
	long_2 = long_3 + long_3;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "Zv") == 0)
	{
		double_6 = cosh ( double_6 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		double double_6 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		double double_7 = 1;
		long long_4 = 1;
		short short_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		char char_4 = 1;
		short short_2 = 1;
		long long_6 = 1;
		long long_7 = 1;
		int int_3 = 1;
		double double_11 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_3 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		char char_5 = 1;
		double double_13 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_12 = 1;
		short short_5 = 1;
		int int_6 = 1;
		int_1 = nn_add_mc(float_3,unsigned_int_2,double_7,int_2,int_1);

		long_5 = long_4 + long_3;
	}
	double_2 = double_6;
	double_6 = cosh ( double_7 ) ;
	short_1 = short_1 * short_1;
	double_6 = double_5;
	long_3 = long_1 * long_1;
	int_2 = nn_cmp_m(double_7,double_2,long_3);

	double_8 = double_6 * double_5;
	if(1)
	{
		double_6 = fabs ( double_9 ) ;
	}
	else
	{
		double_10 = double_5 + double_4;
	}
	if(1)
	{
		double_1 = acos ( double_7 ) ;
	}
	_nn_mulmid_sub_rfix_m(char_4,int_1,short_1,long_2,short_1,short_2,long_4);

	double_5 = tan ( double_1 ) ;
	double_9 = log ( double_7 ) ;
	long_7 = long_3 + long_6;
	if(1)
	{
		double_2 = double_4 * double_5;
	}
	else
	{
		double_9 = tanh ( double_1 ) ;
	}
	double_8 = ldexp ( double_10 , int_3 ) ;
	double_7 = fmod ( double_11 , double_9 ) ;
	double_5 = fmod ( double_9 , double_11 ) ;
	double_3 = asin ( double_8 ) ;
	float_5 = float_4 + float_5;
	if(1)
	{
		double_3 = fabs ( double_7 ) ;
		double_7 = atan ( double_8 ) ;
		double_10 = ceil ( double_8 ) ;
		int_4 = int_5;
	}
	else
	{
		int_5 = _nn_mulmid_add_lfix_m(unsigned_int_1,short_3,double_11,long_6,float_6,long_6,int_2);

		char_3 = char_2;
		double_7 = double_5;
		double_2 = sqrt ( double_3 ) ;
		double_3 = ldexp ( double_10 , int_4 ) ;
	}
	double_2 = atan2 ( double_2 , double_3 ) ;
	short_2 = nn_sub_mc(char_1,unsigned_int_3,char_2,double_9,short_4);

	double_2 = acos ( double_10 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		double double_6 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		double double_7 = 1;
		long long_4 = 1;
		short short_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		char char_4 = 1;
		short short_2 = 1;
		long long_6 = 1;
		long long_7 = 1;
		int int_3 = 1;
		double double_11 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_3 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_4 = 1;
		char char_5 = 1;
		double double_13 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_12 = 1;
		short short_5 = 1;
		int int_6 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
		double_10 = pow ( double_1 , double_1 ) ;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int int_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			double double_6 = 1;
			float float_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_3 = 1;
			float float_3 = 1;
			double double_7 = 1;
			long long_4 = 1;
			short short_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			char char_4 = 1;
			short short_2 = 1;
			long long_6 = 1;
			long long_7 = 1;
			int int_3 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_3 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_4 = 1;
			char char_5 = 1;
			double double_13 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_12 = 1;
			short short_5 = 1;
			int int_6 = 1;
			double_12 = atan2 ( double_9 , double_8 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int int_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			double double_6 = 1;
			float float_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_3 = 1;
			float float_3 = 1;
			double double_7 = 1;
			long long_4 = 1;
			short short_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			char char_4 = 1;
			short short_2 = 1;
			long long_6 = 1;
			long long_7 = 1;
			int int_3 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_3 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_4 = 1;
			char char_5 = 1;
			double double_13 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_12 = 1;
			short short_5 = 1;
			int int_6 = 1;
			short_5 = short_2;
		}
		else
		{
			short_1 = short_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int int_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			double double_6 = 1;
			float float_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_3 = 1;
			float float_3 = 1;
			double double_7 = 1;
			long long_4 = 1;
			short short_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			char char_4 = 1;
			short short_2 = 1;
			long long_6 = 1;
			long long_7 = 1;
			int int_3 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_3 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_4 = 1;
			char char_5 = 1;
			double double_13 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_12 = 1;
			short short_5 = 1;
			int int_6 = 1;
			char_5 = char_5;
			double_7 = ldexp ( double_10 , int_6 ) ;
		}
		double_6 = asin ( double_8 ) ;
		double_10 = double_11;
	}
	double_8 = cos ( double_3 ) ;
	nn_mulmid_classical(double_7,double_13,short_1,char_5,char_1,short_1);

}
unsigned int nn_divapprox_divconquer_preinv_c( char parameter_1,long parameter_2,char parameter_3,float parameter_4,char parameter_5,int parameter_6,double parameter_7)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	double double_6 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	int int_2 = 1;
	double double_8 = 1;
	float float_4 = 1;
	double double_9 = 1;
	short short_3 = 1;
	double double_10 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_11 = 1;
	int int_5 = 1;
	double double_12 = 1;
	double_1 = double_1 + double_1;
	nn_mulmid_kara(double_1,char_1,int_1,long_1,float_1,unsigned_int_1);

	float_2 = float_1;
	double_2 = pow ( double_3 , double_1 ) ;
	double_4 = nn_divapprox_classical_preinv_c(double_5,char_1,short_1,unsigned_int_1,short_1,char_1,double_6);

	double_2 = ceil ( double_2 ) ;
	short_2 = short_1 + short_2;
	char_1 = nn_add1(float_3,unsigned_int_1,long_2,unsigned_int_2);

	double_5 = double_1 * double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	double_7 = nn_divapprox_preinv_c(double_2,int_2,double_8,unsigned_int_1,float_4,unsigned_int_2,unsigned_int_1);

	double_3 = sinh ( double_2 ) ;
	if(1)
	{
		return unsigned_int_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		nn_divrem_divconquer_preinv_c(unsigned_int_2,double_9,short_3,unsigned_int_1,double_6,float_1,long_1,883);

		double_10 = pow ( double_10 , double_2 ) ;
		double_8 = double_7 + double_1;
		int_3 = int_3;
		double_2 = acos ( double_1 ) ;
		long_2 = _nn_divapprox_helper(unsigned_int_3,float_3,float_2,int_4);

		double_2 = double_4;
	}
	short_4 = nn_sub1(int_3,int_1,char_2,double_4);

	unsigned_int_4 = unsigned_int_2;
	double_1 = fabs ( double_3 ) ;
	if(1)
	{
		return unsigned_int_2;
	}
	double_9 = atan2 ( double_4 , double_11 ) ;
	double_8 = sinh ( double_11 ) ;
	double_9 = pow ( double_4 , double_7 ) ;
	double_6 = double_8 + double_10;
	double_9 = tanh ( double_11 ) ;
	double_5 = pow ( double_6 , double_5 ) ;
	char controller_3[6];
	fgets(controller_3 ,6 ,stdin);
	if( strcmp( controller_3, "es#Q:") == 0)
	{
		double double_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		double double_6 = 1;
		short short_2 = 1;
		float float_3 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		int int_2 = 1;
		double double_8 = 1;
		float float_4 = 1;
		double double_9 = 1;
		short short_3 = 1;
		double double_10 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_4 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_11 = 1;
		int int_5 = 1;
		double double_12 = 1;
		double_7 = atan ( double_1 ) ;
		int_5 = nn_cmp_m(double_9,double_4,long_1);

		double_12 = double_3 * double_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_4 = float_4 + float_1;
		}
	}
	if(1)
	{
		return unsigned_int_3;
	}
	double_2 = double_4;
	return unsigned_int_4;
}
double nn_divapprox_preinv_c( double parameter_1,int parameter_2,double parameter_3,unsigned int parameter_4,float parameter_5,unsigned int parameter_6,unsigned int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = nn_divapprox_divconquer_preinv_c(char_1,long_1,char_1,float_1,char_2,int_1,double_1);

	double_1 = double_2;
	if(1)
	{
		return double_3;
	}
	else
	{
		return double_2;
	}
	double_1 = nn_divapprox_classical_preinv_c(double_1,char_1,short_1,unsigned_int_2,short_1,char_3,double_2);

}
void nn_divrem_preinv_c( long parameter_1,long parameter_2,float parameter_3,unsigned int parameter_4,unsigned int parameter_5,unsigned int parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		nn_divrem_divconquer_preinv_c(unsigned_int_1,double_1,short_1,unsigned_int_1,double_2,float_1,long_1,226);

		unsigned_int_1 = unsigned_int_2;
	}
	else
	{
		unsigned_int_1 = unsigned_int_1;
	}
	nn_divrem_classical_preinv_c(double_1,char_1,float_2,int_1,char_1,float_2,unsigned_int_3);

}
void nn_divrem_divconquer_preinv_c( unsigned int parameter_1,double parameter_2,short parameter_3,unsigned int parameter_4,double parameter_5,float parameter_6,long parameter_7,int uni_para)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_4 = 1;
	double double_8 = 1;
	float_3 = float_1 + float_2;
	long_1 = long_2;
	double_1 = floor ( double_1 ) ;
	double_2 = sinh ( double_1 ) ;
	double_2 = double_2;
	int_1 = int_1 * int_1;
	double_1 = ldexp ( double_2 , int_2 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = fabs ( double_1 ) ;
	char controller4vul_25[3];
	fgets(controller4vul_25 ,4 ,stdin);
	if( strcmp( controller4vul_25, "&0~") < 0)
	{
		nn_mullow_kara(float_2,float_1,unsigned_int_1,int_3,unsigned_int_2,unsigned_int_3,uni_para);

		int_2 = int_3 * int_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_4 = 1;
		double double_8 = 1;
		looper_1 += 1;
		double_2 = log10 ( double_3 ) ;
		char_2 = char_1 + char_1;
		double_3 = atan ( double_1 ) ;
		int_4 = int_2;
		unsigned_int_3 = unsigned_int_3;
	}
	double_1 = ceil ( double_4 ) ;
	double_2 = asin ( double_3 ) ;
	double_5 = fmod ( double_3 , double_4 ) ;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "M<") == 0)
	{
		double_2 = pow ( double_2 , double_5 ) ;
		double_5 = atan2 ( double_6 , double_7 ) ;
	}
	double_5 = sqrt ( double_7 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_4 = 1;
		double double_8 = 1;
		looper_2 += 1;
		double_6 = atan2 ( double_8 , double_7 ) ;
		float_3 = float_1 * float_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
}
int nn_divrem1_preinv_c( int parameter_1,float parameter_2,char parameter_3,long parameter_4,short parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double_1 = double_1 * double_2;
	double_2 = log ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	return int_1;
}
void nn_divrem( float parameter_1,char parameter_2,long parameter_3,short parameter_4,long parameter_5,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_9 = 1;
	double double_8 = 1;
	short_1 = short_2;
	double_1 = sqrt ( double_2 ) ;
	int_3 = int_1 + int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_4 = int_5;
	double_1 = tanh ( double_3 ) ;
	double_2 = asin ( double_4 ) ;
	double_4 = acos ( double_4 ) ;
	double_5 = double_4;
	char controller4vul_24[5];
	fgets(controller4vul_24 ,6 ,stdin);
	if( strcmp( controller4vul_24, "fe[t_") == 0)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_9 = 1;
		double double_8 = 1;
		nn_divrem_divconquer_preinv_c(unsigned_int_1,double_4,short_2,unsigned_int_2,double_4,float_1,long_1,uni_para);

		double_2 = double_2;
		double_5 = cosh ( double_6 ) ;
		double_3 = pow ( double_7 , double_8 ) ;
	}
	else
	{
		double_5 = fmod ( double_3 , double_6 ) ;
	}
	if(1)
	{
		double_2 = fabs ( double_1 ) ;
		long_1 = long_1 + long_1;
	}
	else
	{
		double_4 = asin ( double_6 ) ;
		double_7 = acos ( double_3 ) ;
	}
	if(1)
	{
		double_7 = ceil ( double_7 ) ;
	}
	double_9 = sqrt ( double_5 ) ;
}
double nn_gcd_lehmer( unsigned int parameter_1,char parameter_2,int parameter_3,long parameter_4,int parameter_5,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_12 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_5 = 1;
	long long_6 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_7 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_2 = short_1 + short_1;
	double_1 = acos ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_3 = floor ( double_2 ) ;
	double_4 = fmod ( double_2 , double_4 ) ;
	double_4 = pow ( double_5 , double_6 ) ;
	long_1 = long_1;
	double_5 = exp ( double_6 ) ;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1;
	double_6 = asin ( double_3 ) ;
	double_5 = pow ( double_3 , double_4 ) ;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_12 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_1 = 1;
		long long_5 = 1;
		long long_6 = 1;
		float float_2 = 1;
		char char_3 = 1;
		double double_10 = 1;
		double double_11 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_7 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double_4 = cosh ( double_2 ) ;
		char_1 = char_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		long long_4 = 1;
		float float_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_12 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		int int_1 = 1;
		long long_5 = 1;
		long long_6 = 1;
		float float_2 = 1;
		char char_3 = 1;
		double double_10 = 1;
		double double_11 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_7 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		looper_1 += 1;
		double_7 = tanh ( double_6 ) ;
		double_5 = log ( double_5 ) ;
		long_4 = long_3 * long_2;
		double_1 = double_4;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			long long_4 = 1;
			float float_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_12 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			int int_1 = 1;
			long long_5 = 1;
			long long_6 = 1;
			float float_2 = 1;
			char char_3 = 1;
			double double_10 = 1;
			double double_11 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_7 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
			double_5 = tan ( double_7 ) ;
			char_1 = char_2 + char_2;
			double_6 = pow ( double_1 , double_3 ) ;
			char controller4vul_22[5];
			fgets(controller4vul_22 ,6 ,stdin);
			if( strcmp( controller4vul_22, "WN7aD") > 0)
			{
				char controller4vul_23[4];
				fgets(controller4vul_23 ,5 ,stdin);
				if( strcmp( controller4vul_23, "3VC#") == 0)
				{
					nn_divrem(float_1,char_1,long_4,short_2,long_1,uni_para);

				}
			}
			else
			{
				if(1)
				{
				}
			}
			double_6 = exp ( double_6 ) ;
			int_1 = int_1;
			float_1 = float_1 * float_2;
			double_6 = ceil ( double_6 ) ;
			long_6 = long_5 + long_2;
			double_2 = acos ( double_6 ) ;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			long long_4 = 1;
			float float_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_12 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			int int_1 = 1;
			long long_5 = 1;
			long long_6 = 1;
			float float_2 = 1;
			char char_3 = 1;
			double double_10 = 1;
			double double_11 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_7 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double_1 = log ( double_8 ) ;
			char_2 = char_3 + char_1;
			int_1 = int_1;
			char_3 = char_1;
		}
		else
		{
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			long long_4 = 1;
			float float_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_12 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			int int_1 = 1;
			long long_5 = 1;
			long long_6 = 1;
			float float_2 = 1;
			char char_3 = 1;
			double double_10 = 1;
			double double_11 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_7 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				long long_4 = 1;
				float float_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				double double_12 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				int int_1 = 1;
				long long_5 = 1;
				long long_6 = 1;
				float float_2 = 1;
				char char_3 = 1;
				double double_10 = 1;
				double double_11 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_7 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int_2 = int_1;
				double_9 = floor ( double_2 ) ;
				long_5 = long_4;
			}
			else
			{
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				long long_4 = 1;
				float float_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				double double_12 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				int int_1 = 1;
				long long_5 = 1;
				long long_6 = 1;
				float float_2 = 1;
				char char_3 = 1;
				double double_10 = 1;
				double double_11 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_7 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
				double_6 = pow ( double_5 , double_1 ) ;
				double_9 = acos ( double_4 ) ;
			}
			if(1)
			{
				double_2 = atan ( double_10 ) ;
				double_11 = fabs ( double_7 ) ;
				double_7 = pow ( double_9 , double_10 ) ;
			}
			else
			{
				double_8 = double_8 + double_6;
				double_10 = atan ( double_6 ) ;
				double_4 = log ( double_1 ) ;
			}
			double_2 = double_7;
			if(1)
			{
				int_1 = int_1;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				long long_4 = 1;
				float float_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				double double_12 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				int int_1 = 1;
				long long_5 = 1;
				long long_6 = 1;
				float float_2 = 1;
				char char_3 = 1;
				double double_10 = 1;
				double double_11 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_7 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_3 = 1;
				int int_4 = 1;
				long_6 = long_4 * long_7;
			}
			double_12 = atan ( double_8 ) ;
			double_11 = cosh ( double_6 ) ;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				long long_4 = 1;
				float float_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				double double_12 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				int int_1 = 1;
				long long_5 = 1;
				long long_6 = 1;
				float float_2 = 1;
				char char_3 = 1;
				double double_10 = 1;
				double double_11 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_7 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_3 = 1;
				int int_4 = 1;
				short_4 = short_3 * short_3;
				double_12 = log ( double_4 ) ;
				double_10 = fmod ( double_10 , double_1 ) ;
			}
			else
			{
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				long long_4 = 1;
				float float_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				double double_12 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				int int_1 = 1;
				long long_5 = 1;
				long long_6 = 1;
				float float_2 = 1;
				char char_3 = 1;
				double double_10 = 1;
				double double_11 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_7 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int_3 = int_4;
			}
		}
	}
	float_1 = float_3;
	double_9 = log10 ( double_12 ) ;
	return double_8;
}
void nn_mul_toom32( double parameter_1,char parameter_2,int parameter_3,double parameter_4,short parameter_5,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	float float_1 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_11 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_12 = 1;
	float float_2 = 1;
	int int_6 = 1;
	int_1 = int_1;
	double_1 = double_1;
	double_2 = tan ( double_1 ) ;
	int_2 = int_2;
	double_2 = cosh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	int_3 = int_1 * int_2;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1;
	double_1 = double_4;
	int_4 = int_2 + int_1;
	double_5 = acos ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	char_2 = char_3;
	double_2 = acos ( double_3 ) ;
	double_6 = fmod ( double_4 , double_4 ) ;
	double_6 = acos ( double_5 ) ;
	double_6 = atan ( double_2 ) ;
	long_1 = long_1 * long_1;
	double_4 = double_5 * double_4;
	double_7 = log10 ( double_1 ) ;
	double_4 = tan ( double_4 ) ;
	double_6 = double_2 * double_6;
	double_8 = floor ( double_3 ) ;
	double_2 = log ( double_1 ) ;
	double_9 = asin ( double_10 ) ;
	double_2 = cos ( double_10 ) ;
	double_5 = ceil ( double_6 ) ;
	unsigned_int_2 = unsigned_int_4 * unsigned_int_5;
	int_1 = int_5 * int_3;
	int_1 = int_4;
	char controller4vul_29[4];
	fgets(controller4vul_29 ,5 ,stdin);
	if( strcmp( controller4vul_29, "H/2Y") > 0)
	{
		nn_mul_m(int_2,float_1,char_4,double_5,uni_para);

		unsigned_int_6 = unsigned_int_3 * unsigned_int_4;
	}
	else
	{
		double_2 = double_5 + double_11;
	}
	double_8 = double_4 + double_4;
	long_3 = long_2 + long_3;
	unsigned_int_6 = unsigned_int_1 * unsigned_int_2;
	double_8 = ceil ( double_1 ) ;
	int_3 = int_1;
	double_1 = double_8;
	double_5 = tan ( double_11 ) ;
	double_7 = log10 ( double_1 ) ;
	double_5 = fmod ( double_1 , double_12 ) ;
	float_1 = float_2;
	int_6 = int_3;
	char_1 = char_4;
	double_12 = floor ( double_9 ) ;
}
float precompute_inverse1()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = fabs ( double_1 ) ;
	double_2 = atan2 ( double_3 , double_2 ) ;
	if(1)
	{
		return float_1;
	}
	return float_2;
}
void nn_mul_toom33( float parameter_1,int parameter_2,short parameter_3,double parameter_4,char parameter_5,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	char char_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_12 = 1;
	double double_13 = 1;
	double double_14 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_6 = 1;
	double double_15 = 1;
	unsigned int unsigned_int_8 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	if(uni_para == 278)
	{
		vul_var = vul_var + 1;
	}
	free(vul_var);
	unsigned_int_1 = unsigned_int_2;
	double_1 = floor ( double_2 ) ;
	double_3 = sinh ( double_4 ) ;
	char_2 = char_1 * char_1;
	double_4 = sinh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	float_2 = float_1 * float_1;
	int_1 = int_2;
	double_2 = double_3;
	double_2 = sinh ( double_2 ) ;
	double_2 = double_2 * double_3;
	double_5 = double_5 + double_1;
	char_3 = char_3 * char_3;
	double_1 = log ( double_3 ) ;
	double_3 = floor ( double_1 ) ;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	double_3 = sinh ( double_1 ) ;
	double_2 = tan ( double_5 ) ;
	double_1 = sqrt ( double_1 ) ;
	int_4 = int_3 + int_1;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
	int_3 = int_5 * int_2;
	double_3 = tanh ( double_3 ) ;
	double_2 = fmod ( double_1 , double_4 ) ;
	double_5 = double_4 * double_3;
	char_4 = char_4 + char_3;
	double_1 = acos ( double_5 ) ;
	double_3 = sqrt ( double_1 ) ;
	double_5 = fmod ( double_5 , double_5 ) ;
	double_6 = double_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
	double_4 = cosh ( double_1 ) ;
	double_1 = acos ( double_3 ) ;
	double_4 = atan ( double_7 ) ;
	double_3 = tan ( double_1 ) ;
	double_4 = fabs ( double_3 ) ;
	double_1 = fmod ( double_3 , double_1 ) ;
	double_2 = atan2 ( double_6 , double_5 ) ;
	double_8 = pow ( double_2 , double_4 ) ;
	double_7 = acos ( double_2 ) ;
	double_9 = double_7 + double_9;
	double_10 = atan2 ( double_11 , double_11 ) ;
	double_1 = sqrt ( double_5 ) ;
	unsigned_int_4 = unsigned_int_1;
	double_3 = double_6 * double_1;
	double_1 = tan ( double_9 ) ;
	double_2 = fmod ( double_7 , double_2 ) ;
	double_1 = ldexp ( double_1 , int_4 ) ;
	int_5 = int_3;
	double_6 = sqrt ( double_11 ) ;
	double_3 = floor ( double_3 ) ;
	short_1 = short_2;
	double_12 = log10 ( double_1 ) ;
	double_1 = acos ( double_9 ) ;
	double_13 = double_2 * double_9;
	double_11 = double_10;
	double_7 = asin ( double_8 ) ;
	char_2 = char_2;
	double_14 = cos ( double_9 ) ;
	double_2 = double_7;
	double_1 = sqrt ( double_6 ) ;
	double_9 = cosh ( double_9 ) ;
	double_7 = log ( double_14 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_7;
	int_5 = int_3 + int_6;
	double_4 = tanh ( double_14 ) ;
	int_2 = int_3;
	double_4 = fabs ( double_1 ) ;
	double_15 = ceil ( double_12 ) ;
	double_10 = sinh ( double_13 ) ;
	unsigned_int_2 = unsigned_int_2;
	double_12 = tanh ( double_3 ) ;
	unsigned_int_8 = unsigned_int_2;
	double_14 = double_4;
}
void nn_mul_m( int parameter_1,float parameter_2,char parameter_3,double parameter_4,int uni_para)
{
	float float_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char controller4vul_30[1];
	fgets(controller4vul_30 ,2 ,stdin);
	if( strcmp( controller4vul_30, "2") == 0)
	{
		nn_mul_toom33(float_1,int_1,short_1,double_1,char_1,uni_para);

		double_1 = ldexp ( double_1 , int_1 ) ;
	}
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "SK7") == 0)
	{
		double_1 = acos ( double_1 ) ;
	}
	if(1)
	{
		float float_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
	else
	{
		float float_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double_2 = fmod ( double_1 , double_1 ) ;
	}
}
void nn_mul_kara( double parameter_1,float parameter_2,float parameter_3,long parameter_4,char parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	double_1 = log10 ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	short_3 = short_1 * short_2;
	double_2 = exp ( double_2 ) ;
	double_3 = acos ( double_1 ) ;
	short_3 = short_3;
	double_4 = fmod ( double_5 , double_5 ) ;
	double_5 = tan ( double_6 ) ;
	double_1 = exp ( double_5 ) ;
	float_2 = float_1 + float_2;
	int_2 = int_1 * int_1;
	double_3 = tanh ( double_2 ) ;
	double_2 = cos ( double_1 ) ;
	double_2 = floor ( double_2 ) ;
	double_3 = pow ( double_6 , double_1 ) ;
	double_2 = sqrt ( double_3 ) ;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
	nn_mul(short_3,float_2,double_5,float_1,long_1,672);

	char_1 = char_1 * char_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_4;
	short_1 = short_4;
	short_3 = short_2;
	nn_mul_m(int_1,float_1,char_1,double_5,769);

}
void nn_mul( short parameter_1,float parameter_2,double parameter_3,float parameter_4,long parameter_5,int uni_para)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_4 = 1;
	short_3 = short_1 + short_2;
	short_1 = short_3;
	double_1 = ldexp ( double_1 , int_1 ) ;
	if(1)
	{
		double_2 = fmod ( double_2 , double_3 ) ;
		double_4 = sinh ( double_4 ) ;
	}
	char controller4vul_27[1];
	fgets(controller4vul_27 ,2 ,stdin);
	if( strcmp( controller4vul_27, "-") > 0)
	{
		char controller4vul_28[3];
		fgets(controller4vul_28 ,4 ,stdin);
		if( strcmp( controller4vul_28, "**{") < 0)
		{
			nn_mul_toom32(double_4,char_1,int_1,double_3,short_3,uni_para);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
	}
	else
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		unsigned_int_1 = unsigned_int_2;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double_1 = tan ( double_5 ) ;
				}
				else
				{
					double_4 = asin ( double_6 ) ;
				}
			}
			else
			{
				if(1)
				{
					short short_1 = 1;
					short short_2 = 1;
					short short_3 = 1;
					double double_1 = 1;
					int int_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					char char_1 = 1;
					unsigned int unsigned_int_1 = 1;
					double double_5 = 1;
					double double_6 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					short short_4 = 1;
					long_2 = long_1 + long_1;
				}
				else
				{
					unsigned_int_1 = unsigned_int_3;
				}
			}
		}
	}
	unsigned_int_3 = unsigned_int_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_6 = atan ( double_1 ) ;
	}
	unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
	double_2 = log10 ( double_3 ) ;
	double_6 = pow ( double_7 , double_3 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_4 = 1;
		looper_2 += 1;
		float_1 = float_2;
		short_1 = short_4;
		double_4 = log ( double_2 ) ;
		double_5 = atan2 ( double_1 , double_3 ) ;
	}
	double_5 = exp ( double_1 ) ;
}
int test_gcd_lehmer(int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_3 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_7 = 1;
	double_1 = log10 ( double_1 ) ;
	double_1 = tan ( double_1 ) ;
	double_1 = double_1 * double_1;
	double_1 = floor ( double_1 ) ;
	char_3 = char_1 + char_2;
	double_2 = acos ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1 * long_1;
	double_1 = log10 ( double_1 ) ;
	short_1 = short_1;
	double_1 = tanh ( double_4 ) ;
	double_4 = atan2 ( double_4 , double_3 ) ;
	char controller4vul_21[3];
	fgets(controller4vul_21 ,4 ,stdin);
	if( strcmp( controller4vul_21, "l5E") < 0)
	{
		double_1 = nn_gcd_lehmer(unsigned_int_1,char_1,int_1,long_3,int_2,uni_para);

		double_2 = cosh ( double_4 ) ;
	}
	else
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	double_5 = asin ( double_4 ) ;
	if(1)
	{
		double_3 = floor ( double_5 ) ;
	}
	if(1)
	{
		double_6 = tanh ( double_5 ) ;
	}
	else
	{
		int_2 = int_1;
	}
	short_4 = short_2 * short_3;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned_int_4 = unsigned_int_5;
	}
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_7 = 1;
		float_1 = float_1;
	}
	else
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_7 = 1;
		int_1 = int_3;
	}
	short_6 = short_5 + short_1;
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_7 = 1;
		double_3 = tan ( double_7 ) ;
		double_6 = log ( double_4 ) ;
	}
	double_6 = cos ( double_2 ) ;
	return int_1;
}
void nn_div_hensel_preinv( int parameter_1,char parameter_2,double parameter_3,char parameter_4,float parameter_5,int parameter_6,double parameter_7)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	long_1 = long_1 * long_2;
	float_2 = float_1 * float_1;
	double_1 = tan ( double_2 ) ;
	double_2 = fabs ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_1 = cos ( double_2 ) ;
	long_1 = long_3;
	float_1 = float_3;
	int_2 = int_1 * int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		char char_2 = 1;
		double_1 = ldexp ( double_3 , int_1 ) ;
		double_3 = asin ( double_2 ) ;
		short_1 = nn_sub1(int_1,int_1,char_1,double_2);

		float_3 = float_4;
	}
	double_1 = fabs ( double_3 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		char char_2 = 1;
		char_1 = char_2;
		double_1 = log ( double_1 ) ;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_1 = tanh ( double_1 ) ;
}
char precompute_hensel_inverse1( int parameter_1,int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char_1 = char_1 + char_1;
	char_1 = char_2 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	}
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
}
int test_div_hensel_preinv()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_7 = 1;
	float float_1 = 1;
	int int_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_6 = 1;
	char char_7 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_8 = 1;
	int int_8 = 1;
	double double_10 = 1;
	int int_9 = 1;
	short short_4 = 1;
	char char_5 = 1;
	double_1 = cosh ( double_2 ) ;
	double_1 = acos ( double_2 ) ;
	double_3 = fabs ( double_2 ) ;
	double_2 = fmod ( double_3 , double_3 ) ;
	double_1 = fabs ( double_3 ) ;
	double_3 = sinh ( double_2 ) ;
	double_3 = ceil ( double_3 ) ;
	double_4 = sinh ( double_1 ) ;
	double_4 = sqrt ( double_2 ) ;
	char_1 = precompute_hensel_inverse1(int_1,int_2);

	double_4 = ceil ( double_3 ) ;
	if(1)
	{
		double_1 = double_1 * double_4;
	}
	else
	{
		unsigned_int_1 = unsigned_int_2;
	}
	long_1 = long_1;
	double_5 = sqrt ( double_6 ) ;
	char_4 = char_2 + char_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_7 = 1;
		float float_1 = 1;
		int int_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_6 = 1;
		char char_7 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		char char_8 = 1;
		int int_8 = 1;
		double double_10 = 1;
		int int_9 = 1;
		short short_4 = 1;
		char char_5 = 1;
		double_3 = log ( double_3 ) ;
		double_2 = tan ( double_1 ) ;
		nn_div_hensel_preinv(int_2,char_3,double_7,char_4,float_1,int_3,double_1);

		double_8 = ceil ( double_6 ) ;
		double_1 = sinh ( double_7 ) ;
		char_2 = char_5;
	}
	double_4 = fmod ( double_2 , double_6 ) ;
	double_1 = log ( double_9 ) ;
	double_5 = double_3 * double_7;
	double_9 = ldexp ( double_1 , int_4 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_7 = char_4 + char_6;
	unsigned_int_1 = unsigned_int_1;
	float_2 = float_1 + float_2;
	double_7 = pow ( double_3 , double_8 ) ;
	nn_mulhigh_classical(int_1,short_1,unsigned_int_1,double_8,unsigned_int_2,short_1);

	double_2 = log10 ( double_3 ) ;
	if(1)
	{
		short_2 = short_1;
		double_5 = acos ( double_4 ) ;
		int_2 = int_2 + int_2;
		double_1 = sinh ( double_4 ) ;
		short_3 = short_3;
	}
	double_9 = exp ( double_6 ) ;
	int_6 = int_5 * int_4;
	int_6 = int_3;
	unsigned_int_2 = nn_copy(int_4,unsigned_int_2,float_2);

	double_5 = fmod ( double_7 , double_1 ) ;
	double_3 = tan ( double_2 ) ;
	unsigned_int_1 = nn_normalise(float_1,unsigned_int_3);

	long_1 = long_1 + long_1;
	nn_mul_classical(double_9,float_1,float_1,int_7,double_8);

	int_7 = int_3;
	randoms_upto(long_1,char_8,int_3,short_3);

	double_1 = exp ( double_5 ) ;
	double_5 = floor ( double_1 ) ;
	double_4 = cos ( double_9 ) ;
	bsdnt_printf(short_3,char_7);

	double_4 = fmod ( double_3 , double_2 ) ;
	int_2 = int_8;
	int_1 = int_1 * int_2;
	unsigned_int_3 = unsigned_int_2;
	double_1 = asin ( double_7 ) ;
	if(1)
	{
		double_3 = tan ( double_1 ) ;
		char_7 = char_8;
		short_1 = nn_equal_m(double_2,unsigned_int_3,float_1);

		double_8 = atan ( double_10 ) ;
		int_9 = int_7 * int_5;
		randoms_of_len(double_1,double_2,float_2,float_2);

		nn_mullow_classical(short_4,double_5,float_1,char_6,double_10,int_4);

		double_10 = ceil ( double_1 ) ;
		double_10 = acos ( double_5 ) ;
		double_1 = sqrt ( double_5 ) ;
		double_5 = fmod ( double_4 , double_10 ) ;
		short_1 = short_2 * short_1;
	}
	double_2 = floor ( double_10 ) ;
	return int_9;
}
long _nn_divapprox_helper( unsigned int parameter_1,float parameter_2,float parameter_3,int parameter_4)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = nn_add1(float_1,unsigned_int_1,long_1,unsigned_int_1);

	double_1 = floor ( double_1 ) ;
	double_2 = tanh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_2 = exp ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float_3 = float_2 * float_3;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	return long_1;
}
double nn_divapprox_classical_preinv_c( double parameter_1,char parameter_2,short parameter_3,unsigned int parameter_4,short parameter_5,char parameter_6,double parameter_7)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_8 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_9 = 1;
	long_1 = _nn_divapprox_helper(unsigned_int_1,float_1,float_1,int_1);

	char_2 = char_1 * char_1;
	char_3 = char_3 * char_1;
	int_1 = nn_cmp_m(double_1,double_1,long_2);

	double_2 = log10 ( double_2 ) ;
	double_3 = exp ( double_1 ) ;
	double_4 = double_1 * double_3;
	double_2 = atan ( double_5 ) ;
	double_2 = double_1;
	double_2 = ceil ( double_4 ) ;
	double_4 = floor ( double_6 ) ;
	double_2 = log10 ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_8 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_3 = 1;
		double double_9 = 1;
		double_3 = cos ( double_4 ) ;
		double_1 = double_6;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		if(1)
		{
			double_1 = double_1 * double_5;
			double_3 = acos ( double_5 ) ;
		}
		short_1 = short_2;
		int_1 = int_1;
	}
	double_4 = sinh ( double_7 ) ;
	double_2 = log ( double_3 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_8 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_3 = 1;
		double double_9 = 1;
		double_8 = log ( double_1 ) ;
		if(1)
		{
			return double_3;
		}
		long_1 = long_2;
		double_7 = floor ( double_8 ) ;
		char controller_3[6];
		fgets(controller_3 ,6 ,stdin);
		if( strcmp( controller_3, "yqV|B") == 0)
		{
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_8 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_3 = 1;
			double double_9 = 1;
			double_5 = log10 ( double_9 ) ;
			double_9 = double_7;
		}
		int_3 = int_2 * int_2;
		long_1 = long_3;
		double_2 = cos ( double_6 ) ;
	}
	return double_1;
}
unsigned int nn_copy( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = cos ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = tanh ( double_3 ) ;
	}
}
int test_divapprox_classical_preinv()
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_8 = 1;
	short short_1 = 1;
	int int_4 = 1;
	char char_3 = 1;
	short short_2 = 1;
	char char_4 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_10 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_2 = fmod ( double_2 , double_2 ) ;
	double_2 = tan ( double_2 ) ;
	char_1 = nn_add1(float_1,unsigned_int_1,long_1,unsigned_int_1);

	double_1 = tan ( double_1 ) ;
	double_2 = pow ( double_3 , double_4 ) ;
	double_3 = ceil ( double_3 ) ;
	double_1 = exp ( double_1 ) ;
	char_1 = char_1;
	double_4 = exp ( double_5 ) ;
	unsigned_int_2 = precompute_inverse2(int_1,unsigned_int_3);

	int_1 = int_1;
	do
	{
		double_3 = asin ( double_1 ) ;
		char_1 = char_2 + char_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_2 = tan ( double_4 ) ;
	looper_1 += 1;
	double_1 = double_6;
	double_7 = ldexp ( double_7 , int_2 ) ;
	double_4 = double_1;
	double_2 = acos ( double_6 ) ;
	double_1 = fabs ( double_2 ) ;
	int_3 = int_2;
	double_3 = ceil ( double_4 ) ;
	nn_mul_classical(double_6,float_2,float_1,int_2,double_8);

	double_5 = asin ( double_3 ) ;
	short_1 = short_1;
	if(1)
	{
		int_4 = int_4;
		bsdnt_printf(short_1,char_3);

		double_3 = acos ( double_1 ) ;
		double_2 = atan2 ( double_1 , double_5 ) ;
		short_2 = nn_sub1(int_2,int_3,char_4,double_6);

		double_7 = sinh ( double_7 ) ;
		double_7 = ceil ( double_3 ) ;
		double_2 = tan ( double_7 ) ;
	}
	double_3 = floor ( double_7 ) ;
	short_2 = nn_equal_m(double_7,unsigned_int_2,float_1);

	long_1 = long_1 + long_1;
	double_9 = fmod ( double_8 , double_8 ) ;
	unsigned_int_2 = nn_copy(int_3,unsigned_int_3,float_2);

	double_2 = log10 ( double_5 ) ;
	double_4 = double_9;
	double_4 = sqrt ( double_3 ) ;
	do
	{
		float_2 = float_2;
		double_2 = double_3 + double_3;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	looper_2 += 1;
	short_2 = short_2;
	int_2 = int_5 * int_3;
	nn_divrem_classical_preinv_c(double_5,char_2,float_3,int_3,char_3,float_1,unsigned_int_4);

	double_4 = fabs ( double_2 ) ;
	randoms_upto(long_1,char_1,int_5,short_2);

	int_4 = nn_cmp_m(double_2,double_3,long_1);

	float_2 = float_3;
	double_10 = tan ( double_1 ) ;
	char_1 = char_4;
	nn_mullow_classical(short_2,double_1,float_1,char_2,double_8,int_4);

	int_5 = int_6;
	randoms_of_len(double_10,double_7,float_2,float_3);

	double_7 = fabs ( double_4 ) ;
	double_10 = cos ( double_7 ) ;
	if(1)
	{
		double_9 = acos ( double_4 ) ;
		double_5 = acos ( double_8 ) ;
	}
	double_4 = double_1 * double_5;
	double_2 = nn_divapprox_classical_preinv_c(double_4,char_4,short_1,unsigned_int_3,short_1,char_3,double_6);

	double_8 = sinh ( double_8 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_2 = 1;
		double double_8 = 1;
		short short_1 = 1;
		int int_4 = 1;
		char char_3 = 1;
		short short_2 = 1;
		char char_4 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_5 = 1;
		float float_3 = 1;
		double double_10 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_4;
		double_6 = sinh ( double_4 ) ;
		double_7 = log ( double_10 ) ;
		double_6 = double_3;
		double_4 = double_9;
		double_5 = cos ( double_4 ) ;
	}
	char_3 = char_4 + char_1;
	return int_5;
}
void nn_divrem_classical_preinv_c( double parameter_1,char parameter_2,float parameter_3,int parameter_4,char parameter_5,float parameter_6,unsigned int parameter_7)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = nn_cmp_m(double_1,double_1,long_1);

	double_1 = tanh ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_2 = floor ( double_1 ) ;
	double_1 = fabs ( double_2 ) ;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_1 = log10 ( double_2 ) ;
	double_1 = pow ( double_2 , double_2 ) ;
	float_1 = float_2;
	char_1 = char_1 * char_2;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_1 = acos ( double_1 ) ;
		double_2 = ldexp ( double_1 , int_1 ) ;
		double_3 = log10 ( double_2 ) ;
		if(1)
		{
			double_3 = tan ( double_3 ) ;
			double_3 = sqrt ( double_4 ) ;
		}
		double_5 = double_1 + double_4;
	}
}
int nn_cmp_m( double parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			if(1)
			{
				return int_1;
			}
			else
			{
				return int_2;
			}
		}
	}
	return int_2;
}
unsigned int precompute_inverse2( int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = tanh ( double_2 ) ;
	double_1 = fabs ( double_3 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	if(1)
	{
		double_2 = double_1 * double_1;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double_1 = double_1;
		double_1 = double_2 * double_1;
		float_1 = float_1 + float_1;
	}
	if(1)
	{
		return unsigned_int_1;
	}
	double_3 = cos ( double_1 ) ;
	double_2 = ceil ( double_2 ) ;
	double_2 = acos ( double_4 ) ;
	double_4 = floor ( double_4 ) ;
	double_2 = double_4 + double_4;
	double_4 = floor ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		looper_1 += 1;
		int_1 = nn_cmp_m(double_3,double_5,long_1);

		long_2 = long_3;
		long_4 = long_3;
	}
	return unsigned_int_2;
}
int test_divrem_classical_preinv()
{
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	float float_3 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_8 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_9 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_3 = 1;
	char_1 = char_1;
	double_1 = sinh ( double_1 ) ;
	int_1 = nn_cmp_m(double_2,double_1,long_1);

	double_2 = sqrt ( double_3 ) ;
	nn_divrem_classical_preinv_c(double_3,char_2,float_1,int_1,char_2,float_2,unsigned_int_1);

	unsigned_int_2 = unsigned_int_2;
	nn_mul_classical(double_3,float_2,float_2,int_2,double_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	int_3 = int_4;
	short_1 = short_1 + short_1;
	unsigned_int_2 = nn_normalise(float_2,unsigned_int_1);

	double_1 = tan ( double_4 ) ;
	double_1 = cos ( double_5 ) ;
	double_1 = double_2 + double_3;
	if(1)
	{
		double_3 = double_4;
	}
	else
	{
		double_2 = double_1 * double_3;
	}
	double_3 = double_1 * double_5;
	double_1 = floor ( double_4 ) ;
	double_2 = ldexp ( double_3 , int_2 ) ;
	if(1)
	{
		double_1 = cos ( double_5 ) ;
		double_3 = tan ( double_2 ) ;
		double_6 = sqrt ( double_6 ) ;
		bsdnt_printf(short_1,char_2);

		int_1 = int_1;
		double_6 = double_4 * double_2;
		unsigned_int_4 = precompute_inverse2(int_3,unsigned_int_3);

		double_4 = ldexp ( double_2 , int_2 ) ;
	}
	double_2 = log ( double_7 ) ;
	char_1 = char_2;
	short_1 = nn_equal_m(double_2,unsigned_int_4,float_3);

	double_1 = ldexp ( double_2 , int_3 ) ;
	double_2 = atan ( double_2 ) ;
	randoms_upto(long_2,char_2,int_1,short_2);

	double_8 = atan2 ( double_2 , double_7 ) ;
	long_3 = long_4;
	do
	{
		char char_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		float float_3 = 1;
		long long_2 = 1;
		short short_2 = 1;
		double double_8 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_9 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		long_6 = long_5 + long_5;
		unsigned_int_3 = unsigned_int_4;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_7 = sqrt ( double_7 ) ;
	looper_1 += 1;
	char_1 = char_2;
	double_8 = sqrt ( double_3 ) ;
	double_9 = ldexp ( double_5 , int_2 ) ;
	double_4 = floor ( double_8 ) ;
	double_9 = double_9;
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		float float_3 = 1;
		long long_2 = 1;
		short short_2 = 1;
		double double_8 = 1;
		long long_3 = 1;
		long long_4 = 1;
		double double_9 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_3 = 1;
		randoms_of_len(double_9,double_1,float_3,float_3);

		int_3 = int_3 + int_3;
		double_6 = cosh ( double_9 ) ;
		double_1 = exp ( double_8 ) ;
		unsigned_int_4 = unsigned_int_5 + unsigned_int_5;
		float_1 = float_1 + float_1;
		int_3 = int_3;
		short_2 = short_3;
	}
	double_2 = cos ( double_9 ) ;
	return int_1;
}
short nn_sub1( int parameter_1,int parameter_2,char parameter_3,double parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int_1 = int_1 * int_2;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double_1 = ldexp ( double_1 , int_1 ) ;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		double_1 = acos ( double_1 ) ;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_4;
		}
	}
	return short_1;
}
int _nn_mulmid_add_lfix_m( unsigned int parameter_1,short parameter_2,double parameter_3,long parameter_4,float parameter_5,long parameter_6,int parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	float float_4 = 1;
	double_1 = double_2;
	float_1 = float_1;
	short_2 = short_1 * short_1;
	short_3 = nn_sub1(int_1,int_2,char_1,double_3);

	double_4 = tanh ( double_4 ) ;
	double_3 = double_5 * double_2;
	double_1 = atan ( double_6 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		int int_3 = 1;
		char char_2 = 1;
		float float_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			int int_3 = 1;
			char char_2 = 1;
			float float_4 = 1;
			int_1 = int_3;
		}
		unsigned_int_1 = unsigned_int_2;
		float_3 = float_1 + float_2;
		double_5 = log10 ( double_2 ) ;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		int int_3 = 1;
		char char_2 = 1;
		float float_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			int int_3 = 1;
			char char_2 = 1;
			float float_4 = 1;
			float_5 = float_4 * float_2;
		}
		double_1 = tan ( double_1 ) ;
		char_1 = char_2;
		double_5 = sinh ( double_6 ) ;
	}
	if(1)
	{
		float_2 = float_1;
	}
	int_2 = nn_zero(unsigned_int_2,short_3);

	double_5 = double_1;
	float_2 = float_2 + float_5;
	return int_2;
}
void _nn_mulmid_sub_rfix_m( char parameter_1,int parameter_2,short parameter_3,long parameter_4,short parameter_5,short parameter_6,long parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_2;
}
short _nn_mulmid_add_rfix_m( short parameter_1,short parameter_2,int parameter_3,double parameter_4,double parameter_5,long parameter_6,char parameter_7)
{
	short short_1 = 1;
	short short_2 = 1;
	short_2 = short_1 + short_1;
}
void nn_mulmid_classical( double parameter_1,double parameter_2,short parameter_3,char parameter_4,char parameter_5,short parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_6 = 1;
	double_1 = acos ( double_2 ) ;
	char_1 = char_2;
	double_3 = log ( double_4 ) ;
	double_3 = log10 ( double_1 ) ;
	double_4 = tan ( double_2 ) ;
	double_4 = sinh ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_2 = asin ( double_5 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_6 = 1;
		double_1 = double_4 * double_4;
		double_1 = log10 ( double_6 ) ;
		double_3 = fmod ( double_4 , double_7 ) ;
	}
	double_7 = atan ( double_7 ) ;
	unsigned_int_1 = unsigned_int_1;
}
int test_mulmid_classical()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_5 = 1;
	float float_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	float float_7 = 1;
	double double_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_7 = 1;
	short short_8 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_10 = 1;
	double_1 = cosh ( double_2 ) ;
	double_1 = ldexp ( double_3 , int_1 ) ;
	double_4 = double_2 + double_1;
	float_3 = float_1 * float_2;
	float_2 = float_4 * float_5;
	double_3 = fmod ( double_3 , double_1 ) ;
	double_2 = sinh ( double_1 ) ;
	double_4 = log ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_1 + long_1;
	double_1 = atan2 ( double_3 , double_5 ) ;
	float_6 = float_3;
	char_2 = char_1 + char_1;
	double_4 = log10 ( double_6 ) ;
	float_5 = float_7;
	double_7 = pow ( double_3 , double_3 ) ;
	float_1 = float_6 + float_4;
	if(1)
	{
		_nn_mulmid_sub_rfix_m(char_2,int_1,short_1,long_1,short_1,short_1,long_1);

		double_6 = pow ( double_4 , double_2 ) ;
		double_4 = cosh ( double_2 ) ;
		double_1 = double_7;
		short_2 = nn_equal_m(double_7,unsigned_int_1,float_7);

		double_3 = cosh ( double_2 ) ;
		double_7 = double_1;
	}
	double_7 = ldexp ( double_8 , int_1 ) ;
	double_4 = tanh ( double_2 ) ;
	double_4 = sinh ( double_4 ) ;
	double_2 = atan ( double_6 ) ;
	float_1 = float_6;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	randoms_of_len(double_3,double_8,float_2,float_3);

	char_3 = char_3;
	nn_mulmid_classical(double_1,double_2,short_3,char_1,char_1,short_4);

	double_5 = ceil ( double_7 ) ;
	double_1 = tan ( double_7 ) ;
	int_3 = int_1 * int_2;
	double_4 = acos ( double_5 ) ;
	int_3 = int_4;
	double_5 = double_9;
	double_1 = double_4;
	if(1)
	{
		float_3 = float_2 + float_3;
		unsigned_int_1 = unsigned_int_4 * unsigned_int_4;
		double_5 = ceil ( double_3 ) ;
		double_9 = sinh ( double_5 ) ;
		double_8 = cos ( double_8 ) ;
	}
	short_3 = short_5;
	short_2 = short_6 + short_4;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	short_5 = _nn_mulmid_add_rfix_m(short_1,short_5,int_4,double_2,double_8,long_2,char_2);

	double_6 = fmod ( double_6 , double_5 ) ;
	float_7 = float_6;
	randoms_upto(long_3,char_1,int_3,short_7);

	double_3 = asin ( double_1 ) ;
	double_4 = exp ( double_1 ) ;
	double_9 = pow ( double_6 , double_9 ) ;
	int_2 = _nn_mulmid_add_lfix_m(unsigned_int_1,short_8,double_8,long_3,float_1,long_1,int_4);

	long_1 = long_1;
	double_2 = tanh ( double_8 ) ;
	double_8 = ldexp ( double_9 , int_4 ) ;
	unsigned_int_4 = unsigned_int_5;
	double_5 = fmod ( double_10 , double_3 ) ;
	if(1)
	{
		double_5 = atan2 ( double_7 , double_5 ) ;
		double_7 = ldexp ( double_7 , int_2 ) ;
		char_2 = char_3 * char_1;
		float_6 = float_6;
		double_9 = double_2;
	}
	long_1 = long_1;
	return int_1;
}
int parse_fmt( int parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = atan2 ( double_2 , double_1 ) ;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float_1 = float_1;
	}
	if(1)
	{
		double_2 = fabs ( double_1 ) ;
		double_2 = asin ( double_2 ) ;
	}
	else
	{
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			looper_1 += 1;
			double_2 = double_1;
		}
	}
	if(1)
	{
		double_3 = cosh ( double_3 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_2 = sinh ( double_2 ) ;
			int_2 = int_1;
		}
		else
		{
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				double double_3 = 1;
				float float_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				looper_2 += 1;
				short_3 = short_1 + short_2;
			}
		}
	}
	if(1)
	{
		double_1 = atan ( double_2 ) ;
	}
	if(1)
	{
		double_3 = cosh ( double_3 ) ;
	}
	else
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_1 = pow ( double_4 , double_5 ) ;
	}
	return int_1;
}
void bsdnt_printf( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	double double_9 = 1;
	double double_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_7 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_6 = 1;
	double double_8 = 1;
	int_1 = int_1 + int_2;
	int_1 = int_3;
	double_1 = tan ( double_1 ) ;
	char_3 = char_1 * char_2;
	short_1 = short_1 * short_2;
	double_2 = floor ( double_2 ) ;
	double_2 = exp ( double_2 ) ;
	double_1 = sinh ( double_3 ) ;
	short_1 = short_3 * short_1;
	double_2 = atan2 ( double_2 , double_1 ) ;
	double_1 = cosh ( double_3 ) ;
	double_4 = atan2 ( double_3 , double_4 ) ;
	double_4 = ldexp ( double_5 , int_4 ) ;
	double_4 = cos ( double_3 ) ;
	int_3 = int_4 * int_3;
	double_5 = pow ( double_4 , double_3 ) ;
	double_2 = tan ( double_4 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_4 = 1;
		double double_9 = 1;
		double double_6 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_7 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_6 = 1;
		double double_8 = 1;
		looper_1 += 1;
		int_5 = parse_fmt(int_1,double_5);

		double_5 = double_2;
		double_5 = atan2 ( double_4 , double_2 ) ;
		double_4 = log ( double_6 ) ;
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_4 = 1;
			double double_9 = 1;
			double double_6 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_7 = 1;
			long long_1 = 1;
			float float_1 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_6 = 1;
			double double_8 = 1;
			double_5 = floor ( double_5 ) ;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				short short_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				int int_4 = 1;
				int int_5 = 1;
				short short_4 = 1;
				double double_9 = 1;
				double double_6 = 1;
				long long_2 = 1;
				long long_3 = 1;
				int int_7 = 1;
				long long_1 = 1;
				float float_1 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_6 = 1;
				double double_8 = 1;
				long_1 = long_2;
				double_3 = asin ( double_5 ) ;
			}
			else
			{
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				short short_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				int int_4 = 1;
				int int_5 = 1;
				short short_4 = 1;
				double double_9 = 1;
				double double_6 = 1;
				long long_2 = 1;
				long long_3 = 1;
				int int_7 = 1;
				long long_1 = 1;
				float float_1 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_6 = 1;
				double double_8 = 1;
				int_1 = int_3;
				float_1 = float_1;
			}
			double_3 = cosh ( double_1 ) ;
			double_3 = log10 ( double_3 ) ;
			short_3 = short_4;
			double_2 = double_2 * double_2;
			double_3 = cos ( double_3 ) ;
			double_3 = sinh ( double_5 ) ;
			long_3 = long_2;
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					short short_1 = 1;
					short short_2 = 1;
					double double_2 = 1;
					double double_3 = 1;
					short short_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_4 = 1;
					int int_5 = 1;
					short short_4 = 1;
					double double_9 = 1;
					double double_6 = 1;
					long long_2 = 1;
					long long_3 = 1;
					int int_7 = 1;
					long long_1 = 1;
					float float_1 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					int int_6 = 1;
					double double_8 = 1;
					double_7 = double_4 * double_4;
				}
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					short short_1 = 1;
					short short_2 = 1;
					double double_2 = 1;
					double double_3 = 1;
					short short_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_4 = 1;
					int int_5 = 1;
					short short_4 = 1;
					double double_9 = 1;
					double double_6 = 1;
					long long_2 = 1;
					long long_3 = 1;
					int int_7 = 1;
					long long_1 = 1;
					float float_1 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					int int_6 = 1;
					double double_8 = 1;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
				}
				char controller_5[3];
				fgets(controller_5 ,3 ,stdin);
				if( strcmp( controller_5, "60") == 0)
				{
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					short short_1 = 1;
					short short_2 = 1;
					double double_2 = 1;
					double double_3 = 1;
					short short_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_4 = 1;
					int int_5 = 1;
					short short_4 = 1;
					double double_9 = 1;
					double double_6 = 1;
					long long_2 = 1;
					long long_3 = 1;
					int int_7 = 1;
					long long_1 = 1;
					float float_1 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					int int_6 = 1;
					double double_8 = 1;
					float_2 = float_3;
					if(1)
					{
						int int_1 = 1;
						int int_2 = 1;
						int int_3 = 1;
						double double_1 = 1;
						char char_1 = 1;
						char char_2 = 1;
						char char_3 = 1;
						short short_1 = 1;
						short short_2 = 1;
						double double_2 = 1;
						double double_3 = 1;
						short short_3 = 1;
						double double_4 = 1;
						double double_5 = 1;
						int int_4 = 1;
						int int_5 = 1;
						short short_4 = 1;
						double double_9 = 1;
						double double_6 = 1;
						long long_2 = 1;
						long long_3 = 1;
						int int_7 = 1;
						long long_1 = 1;
						float float_1 = 1;
						double double_7 = 1;
						unsigned int unsigned_int_1 = 1;
						float float_2 = 1;
						float float_3 = 1;
						int int_6 = 1;
						double double_8 = 1;
						int_3 = int_6;
					}
					if(1)
					{
						int int_1 = 1;
						int int_2 = 1;
						int int_3 = 1;
						double double_1 = 1;
						char char_1 = 1;
						char char_2 = 1;
						char char_3 = 1;
						short short_1 = 1;
						short short_2 = 1;
						double double_2 = 1;
						double double_3 = 1;
						short short_3 = 1;
						double double_4 = 1;
						double double_5 = 1;
						int int_4 = 1;
						int int_5 = 1;
						short short_4 = 1;
						double double_9 = 1;
						double double_6 = 1;
						long long_2 = 1;
						long long_3 = 1;
						int int_7 = 1;
						long long_1 = 1;
						float float_1 = 1;
						double double_7 = 1;
						unsigned int unsigned_int_1 = 1;
						float float_2 = 1;
						float float_3 = 1;
						int int_6 = 1;
						double double_8 = 1;
						double_8 = asin ( double_4 ) ;
					}
					else
					{
						char_2 = char_3 + char_1;
					}
				}
				else
				{
					double_4 = fabs ( double_5 ) ;
					if(1)
					{
						int_1 = int_7 + int_5;
					}
					if(1)
					{
						double_1 = cos ( double_4 ) ;
					}
					else
					{
						double_4 = sinh ( double_6 ) ;
					}
				}
			}
			else
			{
				int_7 = int_2;
			}
		}
		double_4 = atan2 ( double_1 , double_2 ) ;
		double_2 = log ( double_9 ) ;
	}
	short_4 = short_3;
	double_9 = acos ( double_2 ) ;
}
char nn_add1( float parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	double_1 = cosh ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int_3 = int_1 * int_2;
		int_3 = int_2 * int_2;
		short_2 = short_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_2;
		}
	}
	return char_1;
}
void nn_mulhigh_classical( int parameter_1,short parameter_2,unsigned int parameter_3,double parameter_4,unsigned int parameter_5,short parameter_6)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double_1 = double_1;
	double_1 = log ( double_1 ) ;
	int_2 = int_1 + int_2;
	double_1 = tan ( double_2 ) ;
	float_1 = float_1;
	double_1 = atan ( double_1 ) ;
	if(1)
	{
		double_2 = tanh ( double_3 ) ;
	}
	double_4 = sinh ( double_4 ) ;
	double_4 = log ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		int_4 = int_2 + int_3;
		char_1 = char_2;
		char_2 = nn_add1(float_2,unsigned_int_1,long_1,unsigned_int_2);

		unsigned_int_3 = unsigned_int_1;
		double_4 = cosh ( double_5 ) ;
		double_1 = exp ( double_4 ) ;
		double_3 = tanh ( double_3 ) ;
	}
	else
	{
		double_1 = double_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		char_3 = char_1 + char_1;
	}
	if(1)
	{
		double_5 = atan ( double_4 ) ;
	}
}
void nn_mullow_classical( short parameter_1,double parameter_2,float parameter_3,char parameter_4,double parameter_5,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_1 = 1;
	double_1 = asin ( double_1 ) ;
	double_2 = pow ( double_3 , double_4 ) ;
	short_1 = short_1 + short_2;
	float_2 = float_1 * float_1;
	double_4 = cos ( double_1 ) ;
	short_1 = short_2 * short_1;
	double_5 = fabs ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_1 = 1;
		int_1 = int_1 * int_1;
	}
	double_2 = ldexp ( double_3 , int_2 ) ;
	double_4 = atan2 ( double_2 , double_1 ) ;
}
int test_mullow_classical()
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_4 = 1;
	int int_2 = 1;
	double double_6 = 1;
	float_1 = float_1 * float_2;
	float_1 = float_2;
	double_1 = pow ( double_2 , double_3 ) ;
	randoms_of_len(double_1,double_3,float_3,float_3);

	double_1 = fabs ( double_2 ) ;
	nn_mul_classical(double_1,float_3,float_2,int_1,double_1);

	short_1 = short_2;
	bsdnt_printf(short_3,char_1);

	double_2 = ceil ( double_1 ) ;
	nn_mullow_classical(short_1,double_1,float_2,char_1,double_3,int_1);

	double_2 = double_1;
	double_4 = double_1 * double_1;
	double_2 = sqrt ( double_3 ) ;
	long_1 = long_2;
	double_4 = cos ( double_3 ) ;
	float_1 = float_1 * float_1;
	double_5 = log10 ( double_4 ) ;
	short_1 = short_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_5 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_4 = 1;
		int int_2 = 1;
		double double_6 = 1;
		randoms_upto(long_1,char_2,int_1,short_3);

		double_2 = double_2 + double_5;
		short_3 = nn_equal_m(double_1,unsigned_int_1,float_2);

		double_6 = double_3 * double_1;
		double_3 = atan2 ( double_2 , double_6 ) ;
		nn_mulhigh_classical(int_1,short_4,unsigned_int_1,double_4,unsigned_int_1,short_1);

		double_4 = asin ( double_2 ) ;
	}
	double_5 = ldexp ( double_3 , int_1 ) ;
	return int_2;
}
short nn_equal_m( double parameter_1,unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int_1 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "x<") == 0)
		{
			return short_1;
		}
	}
	return short_1;
}
void nn_mul_classical( double parameter_1,float parameter_2,float parameter_3,int parameter_4,double parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_2;
	int_2 = int_1 + int_2;
	double_1 = acos ( double_2 ) ;
	double_1 = fmod ( double_3 , double_1 ) ;
	long_2 = long_1 + long_2;
	double_3 = cos ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_3;
	}
}
float new_node( unsigned int parameter_1,unsigned int parameter_3,float parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = log ( double_2 ) ;
	double_2 = ceil ( double_1 ) ;
	if(1)
	{
		double_2 = fabs ( double_3 ) ;
	}
	float_1 = float_1 * float_1;
	double_1 = ceil ( double_3 ) ;
	return float_2;
}
unsigned int nn_normalise( float parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		unsigned_int_1 = unsigned_int_1;
	}
	return unsigned_int_1;
}
void nn_random( unsigned int parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 + char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 * char_2;
	}
}
void nn_test_random2( short parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_1 = double_2;
	double_1 = asin ( double_3 ) ;
	double_4 = pow ( double_5 , double_1 ) ;
	nn_test_random1(long_1,unsigned_int_1,float_1);

	double_2 = asin ( double_5 ) ;
	float_2 = float_2;
	double_5 = ldexp ( double_6 , int_1 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
}
void nn_bit_set( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	if(1)
	{
		double_1 = pow ( double_1 , double_1 ) ;
	}
	int_1 = int_1;
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long_1 = long_1;
	}
	double_2 = log ( double_3 ) ;
	double_2 = log10 ( double_1 ) ;
}
int nn_zero( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = fmod ( double_2 , double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_3 = floor ( double_1 ) ;
	}
}
void nn_test_random1( long parameter_1,unsigned int parameter_2,float parameter_3)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char_1 = randint(float_1,unsigned_int_1);

	int_1 = nn_zero(unsigned_int_2,short_1);

	double_1 = cosh ( double_1 ) ;
	double_2 = acos ( double_3 ) ;
	nn_bit_set(float_1,long_1);

	double_4 = sinh ( double_3 ) ;
	int_2 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_5 = pow ( double_6 , double_2 ) ;
	}
}
void nn_test_random( short parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	{
		double double_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double_1 = atan2 ( double_2 , double_2 ) ;
		double_3 = ldexp ( double_3 , int_1 ) ;
		nn_test_random2(short_1,double_1,char_1);

		double_1 = fabs ( double_2 ) ;
		char_1 = randint(float_1,unsigned_int_1);

		nn_test_random1(long_1,unsigned_int_1,float_2);

		double_3 = log ( double_2 ) ;
		nn_random(unsigned_int_1,int_2,double_3);

		double_1 = asin ( double_2 ) ;
	}
}
long nn_init( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		return long_1;
	}
	else
	{
		return long_2;
	}
}
long alloc_redzoned_nn( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short_2 = short_1 * short_2;
	int_2 = int_1 * int_1;
	double_1 = tanh ( double_2 ) ;
	int_3 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1 + double_2;
		double_2 = double_2;
	}
	return long_1;
	long_1 = nn_init(double_1);

}
void randoms_of_len( double parameter_1,double parameter_2,float parameter_3,float parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	float float_3 = 1;
	unsigned_int_1 = nn_normalise(float_1,unsigned_int_2);

	unsigned_int_2 = unsigned_int_2;
	nn_test_random(short_1,unsigned_int_2,short_2);

	talker(char_1);

	double_1 = log10 ( double_1 ) ;
	double_2 = sqrt ( double_3 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		char char_2 = 1;
		short short_3 = 1;
		float float_3 = 1;
		looper_1 += 1;
		double_4 = double_2;
		double_1 = asin ( double_5 ) ;
		{
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_1 = 1;
			char char_2 = 1;
			short short_3 = 1;
			float float_3 = 1;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				char char_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_2 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_3 = 1;
				float float_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				int int_1 = 1;
				char char_2 = 1;
				short short_3 = 1;
				float float_3 = 1;
				looper_2 += 1;
				float_3 = float_2 * float_2;
			}
			long_1 = alloc_redzoned_nn(unsigned_int_3);

			char_1 = char_2;
			float_4 = new_node(unsigned_int_1,unsigned_int_4,float_2);

			double_4 = double_6 + double_5;
			short_2 = short_3;
			double_1 = fabs ( double_2 ) ;
		}
		double_6 = ldexp ( double_6 , int_1 ) ;
	}
	unsigned_int_1 = unsigned_int_5;
}
char randint( float parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	return char_1;
}
void talker( char parameter_1)
{
	int int_1 = 1;
	int_1 = int_1;
}
void randoms_upto( long parameter_1,char parameter_2,int parameter_3,short parameter_4)
{
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	char char_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int_1 = int_1;
	talker(char_1);

	double_1 = floor ( double_2 ) ;
	double_3 = tanh ( double_1 ) ;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		char char_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		int int_2 = 1;
		double_3 = atan2 ( double_4 , double_5 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		char char_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		int int_2 = 1;
		looper_1 += 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		{
			int int_1 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_5 = 1;
			char char_2 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			int int_2 = 1;
			if(1)
			{
				double_5 = cos ( double_5 ) ;
			}
			double_6 = sinh ( double_3 ) ;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				int int_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_5 = 1;
				char char_2 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_6 = 1;
				int int_2 = 1;
				looper_2 += 1;
				int_1 = int_2;
			}
			if(1)
			{
				char_2 = randint(float_1,unsigned_int_3);

				double_1 = fabs ( double_6 ) ;
			}
			int looper_3 = 0;
			while(looper_3 < 1)
			{
				looper_3 += 1;
				double_5 = log10 ( double_1 ) ;
			}
			double_2 = ldexp ( double_5 , int_1 ) ;
		}
	}
	double_2 = exp ( double_1 ) ;
}
int test_mul_classical()
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_7 = 1;
	int_1 = int_2;
	randoms_upto(long_1,char_1,int_3,short_1);

	double_1 = pow ( double_2 , double_2 ) ;
	double_2 = floor ( double_2 ) ;
	double_1 = tanh ( double_1 ) ;
	long_2 = long_2;
	short_2 = nn_equal_m(double_3,unsigned_int_1,float_1);

	double_3 = fabs ( double_2 ) ;
	double_3 = ldexp ( double_4 , int_2 ) ;
	int_3 = int_4;
	short_2 = short_3;
	do
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		char char_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		short short_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		int int_4 = 1;
		short short_3 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		double_4 = ldexp ( double_2 , int_1 ) ;
		unsigned_int_2 = unsigned_int_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	randoms_of_len(double_3,double_4,float_2,float_1);

	double_3 = double_1 * double_1;
	looper_1 += 1;
	double_5 = asin ( double_1 ) ;
	double_6 = log10 ( double_6 ) ;
	int_4 = int_2;
	char_2 = char_3;
	double_5 = log10 ( double_2 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		char char_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		short short_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		int int_4 = 1;
		short short_3 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_7 = 1;
		nn_mul_classical(double_3,float_2,float_2,int_5,double_2);

		double_6 = atan ( double_1 ) ;
		float_1 = float_2 + float_2;
		long_2 = long_1;
		unsigned_int_4 = unsigned_int_1;
		double_7 = log ( double_5 ) ;
	}
	double_2 = atan2 ( double_3 , double_2 ) ;
	return int_3;
}
int test_quadratic(int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	int_1 = test_gcd_lehmer(uni_para);

	double_1 = atan ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_2 = fabs ( double_3 ) ;
	double_4 = log10 ( double_4 ) ;
	double_2 = fmod ( double_3 , double_1 ) ;
	long_2 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = ceil ( double_2 ) ;
	double_1 = asin ( double_3 ) ;
	double_2 = atan ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_4 = double_4;
	long_1 = long_1;
	return int_2;
}
int skiss_word( short parameter_1)
{
	int int_1 = 1;
	return int_1;
}
void skiss_clear( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int_1 = int_2;
}
long skiss_init()
{
	long long_1 = 1;
	return long_1;
}
unsigned int mt_word( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void mt_clear( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
long mt_init()
{
	long long_1 = 1;
	return long_1;
}
float kiss_word( short parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void kiss_clear( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = acos ( double_2 ) ;
}
unsigned int kiss_init()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long set_rand_algorithm( char parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float_1 = kiss_word(short_1);

	float_2 = float_1;
	{
		float float_1 = 1;
		short short_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double_1 = atan2 ( double_1 , double_2 ) ;
		double_2 = sqrt ( double_1 ) ;
		long_1 = mt_init();

		double_1 = sqrt ( double_1 ) ;
		double_1 = double_1;
		unsigned_int_1 = kiss_init();

		double_2 = exp ( double_2 ) ;
		unsigned_int_2 = mt_word(short_1);

		double_2 = fmod ( double_3 , double_4 ) ;
		double_3 = double_1 + double_1;
		int_1 = int_1 + int_1;
		mt_clear(unsigned_int_2);

		short_2 = short_1 * short_1;
		double_5 = double_4 + double_2;
		skiss_clear(long_1);

		double_1 = tan ( double_2 ) ;
		double_6 = log ( double_5 ) ;
		int_2 = skiss_word(short_1);

		double_3 = double_3 * double_3;
		short_2 = short_2 + short_2;
		double_7 = tanh ( double_3 ) ;
		short_1 = short_1 + short_1;
	}
	long_1 = skiss_init();

	double_3 = sinh ( double_4 ) ;
	return long_1;
	kiss_clear(float_3);

}
char randinit( int parameter_1)
{
	long long_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long_1 = set_rand_algorithm(char_1);

	double_1 = double_2;
	double_3 = atan ( double_4 ) ;
}
int main(void)
{
	int uni_para =278;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int_1 = test_quadratic(uni_para);

	double_2 = double_1 + double_1;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = ldexp ( double_3 , int_2 ) ;
	unsigned_int_3 = unsigned_int_2;
	double_2 = tanh ( double_4 ) ;
	return int_1;
}
