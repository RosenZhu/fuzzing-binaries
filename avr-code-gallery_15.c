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

short adc_read( double parameter_1);
void lcd_gotoxy( unsigned int parameter_1,double parameter_2);
void lcd_puts( long parameter_1);
void lcd_init( unsigned int parameter_1,int uni_para);
void adc_init();
short adc_read( double parameter_1)
{
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	short short_1 = 0;
	double double_4 = 0;
	int_1 = int_1 * int_2;
	double_1 = double_2;
	double_2 = double_3 + double_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		short short_1 = 0;
		double double_4 = 0;
		looper_1 += 1;
		double_2 = atan ( double_4 ) ;
	}
	return short_1;
}
void lcd_gotoxy( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_4 = 0;
	double double_3 = 0;
	float float_1 = 0;
	float float_2 = 0;
	if(1)
	{
		double_1 = floor ( double_2 ) ;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 0;
			double double_2 = 0;
			double double_4 = 0;
			double double_3 = 0;
			float float_1 = 0;
			float float_2 = 0;
			double_3 = cosh ( double_4 ) ;
		}
	}
	else
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_4 = 0;
		double double_3 = 0;
		float float_1 = 0;
		float float_2 = 0;
		float_1 = float_2;
	}
	char controller_4[3];
	scanf("%3s", controller_4);
	if( strcmp( controller_4, "rnd") > 0)
	{
		if(1)
		{
			double_1 = tan ( double_4 ) ;
		}
	}
	if(1)
	{
		double_4 = floor ( double_4 ) ;
	}
	char controller_7[3];
	scanf("%3s", controller_7);
	if( strcmp( controller_7, "c*%") > 0)
	{
		double_2 = fmod ( double_1 , double_4 ) ;
	}
	else
	{
		double_1 = cosh ( double_4 ) ;
	}
}
void lcd_puts( long parameter_1)
{
	double double_1 = 0;
	double_1 = sinh ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 8)
	{
		looper_1 += 1;
		double_1 = double_1;
	}
}
void lcd_init( unsigned int parameter_1,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	double double_3 = 0;
	float float_3 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double double_5 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_3 = 0;
	int int_2 = 0;
	short short_2 = 0;
	char char_1 = 0;
	char char_2 = 0;
	unsigned int unsigned_int_4 = 0;
	unsigned int unsigned_int_5 = 0;
	double double_7 = 0;
	double double_8 = 0;
	double double_9 = 0;
	double double_10 = 0;
	long long_1 = 0;
	long long_2 = 0;
	float float_1 = 0;
	double double_4 = 0;
	float float_2 = 0;
	float float_4 = 0;
	float float_5 = 0;
	char * vul_var;
	char controller4vul_2[2];
	scanf("%2s", controller4vul_2);
	if( strcmp( controller4vul_2, "#p") < 0)
	{
		double double_1 = 0;
		double double_2 = 0;
		short short_1 = 0;
		double double_3 = 0;
		float float_3 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		double double_6 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_2 = 0;
		short short_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_4 = 0;
		unsigned int unsigned_int_5 = 0;
		double double_7 = 0;
		double double_8 = 0;
		double double_9 = 0;
		double double_10 = 0;
		long long_1 = 0;
		long long_2 = 0;
		float float_1 = 0;
		double double_4 = 0;
		float float_2 = 0;
		float float_4 = 0;
		float float_5 = 0;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		char controller4vul_3[3];
		scanf("%3s", controller4vul_3);
		if( strcmp( controller4vul_3, "V*}") < 0)
		{
			if(uni_para == 72)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			double_1 = fabs ( double_1 ) ;
		}
		char controller_1[2];
		scanf("%2s", controller_1);
		if( strcmp( controller_1, "]/") > 0)
		{
			float_1 = float_1 * float_1;
			double_2 = log ( double_2 ) ;
			short_1 = short_1;
			double_2 = asin ( double_3 ) ;
		}
		else
		{
			double double_1 = 0;
			double double_2 = 0;
			short short_1 = 0;
			double double_3 = 0;
			float float_3 = 0;
			int int_1 = 0;
			unsigned int unsigned_int_1 = 0;
			unsigned int unsigned_int_2 = 0;
			double double_5 = 0;
			double double_6 = 0;
			unsigned int unsigned_int_3 = 0;
			int int_2 = 0;
			short short_2 = 0;
			char char_1 = 0;
			char char_2 = 0;
			unsigned int unsigned_int_4 = 0;
			unsigned int unsigned_int_5 = 0;
			double double_7 = 0;
			double double_8 = 0;
			double double_9 = 0;
			double double_10 = 0;
			long long_1 = 0;
			long long_2 = 0;
			float float_1 = 0;
			double double_4 = 0;
			float float_2 = 0;
			float float_4 = 0;
			float float_5 = 0;
			double_4 = double_2 * double_4;
			double_3 = cos ( double_3 ) ;
			double_3 = double_1;
			double_4 = pow ( double_1 , double_2 ) ;
			double_1 = asin ( double_1 ) ;
			float_3 = float_2 / float_1;
			double_3 = asin ( double_1 ) ;
		}
		double_1 = ldexp ( double_2 , int_1 ) ;
	}
	unsigned_int_2 = unsigned_int_1 - unsigned_int_1;
	double_5 = exp ( double_6 ) ;
	double_3 = cosh ( double_2 ) ;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	double_2 = tanh ( double_1 ) ;
	int_2 = int_1 + int_2;
	double_5 = pow ( double_3 , double_5 ) ;
	short_2 = short_1;
	char_1 = char_1 / char_1;
	char_1 = char_2;
	double_6 = atan ( double_3 ) ;
	
	{
		double double_1 = 0;
		double double_2 = 0;
		short short_1 = 0;
		double double_3 = 0;
		float float_3 = 0;
		int int_1 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		double double_5 = 0;
		double double_6 = 0;
		unsigned int unsigned_int_3 = 0;
		int int_2 = 0;
		short short_2 = 0;
		char char_1 = 0;
		char char_2 = 0;
		unsigned int unsigned_int_4 = 0;
		unsigned int unsigned_int_5 = 0;
		double double_7 = 0;
		double double_8 = 0;
		double double_9 = 0;
		double double_10 = 0;
		long long_1 = 0;
		long long_2 = 0;
		float float_1 = 0;
		double double_4 = 0;
		float float_2 = 0;
		float float_4 = 0;
		float float_5 = 0;
		float_3 = float_4 / float_5;
	}
	unsigned_int_4 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_5 / unsigned_int_3;
	double_6 = tanh ( double_7 ) ;
	double_2 = cos ( double_1 ) ;
	double_7 = fabs ( double_6 ) ;
	double_6 = sqrt ( double_6 ) ;
	double_8 = fmod ( double_1 , double_3 ) ;
	if(1)
	{
		int_2 = int_1;
	}
	double_1 = double_3 / double_9;
	double_10 = asin ( double_7 ) ;
	
	{
		double_2 = ceil ( double_3 ) ;
	}
	double_7 = log ( double_1 ) ;
	double_8 = fabs ( double_10 ) ;
	long_1 = long_1 / long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_1;
}
void adc_init()
{
	char char_1 = 0;
	double double_1 = 0;
	char_1 = char_1 - char_1;
	double_1 = double_1;
}
int main()
{
	int uni_para =72;
	double double_1 = 0;
	int int_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	short short_1 = 0;
	double double_4 = 0;
	double double_5 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_6 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_7 = 0;
	double double_8 = 0;
	double double_9 = 0;
	double_1 = log ( double_1 ) ;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_2 = log10 ( double_1 ) ;
	double_2 = fabs ( double_2 ) ;
	double_3 = cosh ( double_1 ) ;
	short_1 = short_1;
	double_1 = log10 ( double_2 ) ;
	double_1 = exp ( double_4 ) ;
	double_3 = tanh ( double_5 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 0;
		int int_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		short short_1 = 0;
		double double_4 = 0;
		double double_5 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_6 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_7 = 0;
		double double_8 = 0;
		double double_9 = 0;
		looper_1 += 1;
		double_5 = sqrt ( double_6 ) ;
		double_3 = sqrt ( double_1 ) ;
		char controller4vul_1[2];
		scanf("%2s", controller4vul_1);
		if( strcmp( controller4vul_1, "x8") > 0)
		{
			lcd_init(unsigned_int_1,uni_para);

			long_2 = long_1 - long_2;
		}
		else
		{
			double_2 = double_1 + double_4;
		}
		double_7 = double_5;
		double_1 = log10 ( double_5 ) ;
		double_1 = atan ( double_5 ) ;
		double_4 = sqrt ( double_8 ) ;
		long_1 = long_1 / long_2;
		double_8 = cos ( double_9 ) ;
		double_5 = fabs ( double_6 ) ;
	}
}
