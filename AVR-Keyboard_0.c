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

void release_column( int parameter_1);
short usb_keyboard_send(int uni_para);
void send(int uni_para);
void key_press( unsigned int parameter_1,int uni_para);
void pull_column( int parameter_1);
void setup_bounce_timer();
void setup_leds();
void setup_io_pins();
char usb_configured();
void usb_init();
void init();
void release_column( int parameter_1)
{
}
short usb_keyboard_send(int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	double double_4 = 0;
	float float_1 = 0;
	float float_2 = 0;
	double double_5 = 0;
	float float_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	char char_3 = 0;
	double double_6 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	short short_1 = 0;
	short short_2 = 0;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	double_2 = double_1 + double_1;
	char controller4vul_3[5];
	scanf("%5s", controller4vul_3);
	if( strcmp( controller4vul_3, "%Um::") < 0)
	{
		strcpy(vul_var, "CWE-761");
		if(uni_para == 680)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		double_2 = exp ( double_2 ) ;
	}
	double_1 = fmod ( double_1 , double_3 ) ;
	double_4 = double_3 * double_2;
	float_1 = float_2;
	double_4 = fmod ( double_1 , double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 6)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_5 = 0;
		float float_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		double double_6 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_1 = 0;
		short short_2 = 0;
		looper_1 += 1;
		if(1)
		{
		}
		double_2 = atan2 ( double_1 , double_4 ) ;
		if(1)
		{
			double_5 = fmod ( double_4 , double_4 ) ;
		}
		if(1)
		{
			double_2 = fabs ( double_3 ) ;
		}
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_3 = floor ( double_1 ) ;
	}
	double_1 = cosh ( double_5 ) ;
	float_2 = float_3 + float_2;
	for(int looper_2=0; looper_2<4;looper_2++)
	{
		double double_1 = 0;
		double double_2 = 0;
		double double_3 = 0;
		double double_4 = 0;
		float float_1 = 0;
		float float_2 = 0;
		double double_5 = 0;
		float float_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		char char_3 = 0;
		double double_6 = 0;
		unsigned int unsigned_int_1 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		short short_1 = 0;
		short short_2 = 0;
		short_1 = short_2;
	}
	char_1 = char_1 * char_2;
	char_3 = char_3 + char_2;
	double_6 = atan ( double_6 ) ;
	char_1 = char_2;
}
void send(int uni_para)
{
	short short_1 = 0;
	double double_1 = 0;
	unsigned int unsigned_int_1 = 0;
	int int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	short_1 = usb_keyboard_send(uni_para);

	double_1 = asin ( double_1 ) ;
	for(int looper_1=0; looper_1<3;looper_1++)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_1 = int_1 + int_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
void key_press( unsigned int parameter_1,int uni_para)
{
	double double_1 = 0;
	double double_2 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_3 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double_1 = atan2 ( double_1 , double_1 ) ;
	double_1 = tan ( double_2 ) ;
	double_2 = cos ( double_1 ) ;
	char controller4vul_2[3];
	scanf("%3s", controller4vul_2);
	if( strcmp( controller4vul_2, "(*l") < 0)
	{
		double double_1 = 0;
		double double_2 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_3 = 0;
		short short_1 = 0;
		short short_2 = 0;
		send(uni_para);

		long_1 = long_2;
	}
	else
	{
		double double_1 = 0;
		double double_2 = 0;
		long long_1 = 0;
		long long_2 = 0;
		double double_3 = 0;
		short short_1 = 0;
		short short_2 = 0;
		for(int looper_1=0; looper_1<2;looper_1++)
		{
			double double_1 = 0;
			double double_2 = 0;
			long long_1 = 0;
			long long_2 = 0;
			double double_3 = 0;
			short short_1 = 0;
			short short_2 = 0;
			short_2 = short_1 * short_1;
		}
		double_3 = atan ( double_1 ) ;
	}
	double_2 = sinh ( double_1 ) ;
}
void pull_column( int parameter_1)
{
	char char_1 = 0;
	char_1 = char_1 + char_1;
}
void setup_bounce_timer()
{
	double double_1 = 0;
	int int_1 = 0;
	double_1 = cosh ( double_1 ) ;
	double_1 = tanh ( double_1 ) ;
	int_1 = int_1 * int_1;
	double_1 = double_1;
}
void setup_leds()
{
	double double_1 = 0;
	double double_2 = 0;
	short short_1 = 0;
	short short_2 = 0;
	double_1 = sqrt ( double_2 ) ;
	short_2 = short_1 * short_1;
}
void setup_io_pins()
{
	double double_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	unsigned int unsigned_int_2 = 0;
	double_1 = exp ( double_1 ) ;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<6;looper_1++)
	{
		double_2 = log10 ( double_1 ) ;
		double_1 = asin ( double_1 ) ;
	}
}
char usb_configured()
{
	char char_1 = 0;
	return char_1;
}
void usb_init()
{
	char char_1 = 0;
	char char_2 = 0;
	double double_1 = 0;
	double double_2 = 0;
	double double_3 = 0;
	long long_1 = 0;
	long long_2 = 0;
	double double_4 = 0;
	float float_1 = 0;
	char_1 = char_1 * char_2;
	double_1 = fmod ( double_2 , double_3 ) ;
	long_1 = long_2;
	int looper_1 = 0;
	while(looper_1 < 3)
	{
		looper_1 += 1;
		double_1 = sinh ( double_4 ) ;
	}
	double_3 = sinh ( double_2 ) ;
	long_1 = long_1;
	double_4 = cos ( double_3 ) ;
	float_1 = float_1;
	double_2 = acos ( double_1 ) ;
}
void init()
{
	long long_1 = 0;
	long long_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	double double_1 = 0;
	float float_1 = 0;
	double double_2 = 0;
	unsigned int unsigned_int_1 = 0;
	double double_3 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_3 = 0;
	char char_3 = 0;
	double double_5 = 0;
	double double_6 = 0;
	int int_3 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_4 = 0;
	long_1 = long_2;
	int_2 = int_1 + int_2;
	double_1 = double_1 * double_1;
	setup_bounce_timer();

	float_1 = float_1 * float_1;
	double_2 = exp ( double_1 ) ;
	setup_leds();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 7)
	{
		long long_1 = 0;
		long long_2 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		float float_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		char char_3 = 0;
		double double_5 = 0;
		double double_6 = 0;
		int int_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		double double_4 = 0;
		looper_1 += 1;
		char_2 = char_1 * char_2;
	}
	double_2 = ceil ( double_2 ) ;
	double_1 = double_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	setup_io_pins();

	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	for(int looper_2=0; looper_2<9;looper_2++)
	{
		long long_1 = 0;
		long long_2 = 0;
		int int_1 = 0;
		int int_2 = 0;
		double double_1 = 0;
		float float_1 = 0;
		double double_2 = 0;
		unsigned int unsigned_int_1 = 0;
		double double_3 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_3 = 0;
		char char_3 = 0;
		double double_5 = 0;
		double double_6 = 0;
		int int_3 = 0;
		char char_1 = 0;
		char char_2 = 0;
		double double_4 = 0;
		usb_init();

		char_3 = usb_configured();

		double_4 = pow ( double_5 , double_2 ) ;
		unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	}
	double_6 = ldexp ( double_5 , int_3 ) ;
}
int main(void)
{
	int uni_para =680;
	long long_1 = 0;
	double double_1 = 0;
	double double_2 = 0;
	int int_1 = 0;
	int int_2 = 0;
	unsigned int unsigned_int_2 = 0;
	unsigned int unsigned_int_1 = 0;
	char char_1 = 0;
	char char_2 = 0;
	double double_3 = 0;
	int int_3 = 0;
	int int_4 = 0;
	double double_4 = 0;
	float float_1 = 0;
	float float_2 = 0;
	int int_5 = 0;
	double double_5 = 0;
	long_1 = long_1;
	double_1 = ceil ( double_2 ) ;
	int_1 = int_1 * int_2;
	for(int looper_1=0; looper_1<3;looper_1++)
	{
		long long_1 = 0;
		double double_1 = 0;
		double double_2 = 0;
		int int_1 = 0;
		int int_2 = 0;
		unsigned int unsigned_int_2 = 0;
		unsigned int unsigned_int_1 = 0;
		char char_1 = 0;
		char char_2 = 0;
		double double_3 = 0;
		int int_3 = 0;
		int int_4 = 0;
		double double_4 = 0;
		float float_1 = 0;
		float float_2 = 0;
		int int_5 = 0;
		double double_5 = 0;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_1 = 0;
			double double_1 = 0;
			double double_2 = 0;
			int int_1 = 0;
			int int_2 = 0;
			unsigned int unsigned_int_2 = 0;
			unsigned int unsigned_int_1 = 0;
			char char_1 = 0;
			char char_2 = 0;
			double double_3 = 0;
			int int_3 = 0;
			int int_4 = 0;
			double double_4 = 0;
			float float_1 = 0;
			float float_2 = 0;
			int int_5 = 0;
			double double_5 = 0;
			char_2 = char_1 + char_1;
			double_2 = log10 ( double_3 ) ;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				long long_1 = 0;
				double double_1 = 0;
				double double_2 = 0;
				int int_1 = 0;
				int int_2 = 0;
				unsigned int unsigned_int_2 = 0;
				unsigned int unsigned_int_1 = 0;
				char char_1 = 0;
				char char_2 = 0;
				double double_3 = 0;
				int int_3 = 0;
				int int_4 = 0;
				double double_4 = 0;
				float float_1 = 0;
				float float_2 = 0;
				int int_5 = 0;
				double double_5 = 0;
				char controller4vul_1[4];
				scanf("%4s", controller4vul_1);
				if( strcmp( controller4vul_1, "9D!v") < 0)
				{
					key_press(unsigned_int_2,uni_para);

					double_4 = double_2;
				}
				double_2 = double_2;
				char controller_1[1];
				scanf("%1s", controller_1);
				if( strcmp( controller_1, "K") > 0)
				{
					char controller_2[4];
					scanf("%4s", controller_2);
					if( strcmp( controller_2, "kzLm") > 0)
					{
						double_2 = ldexp ( double_4 , int_3 ) ;
					}
					else
					{
						long long_1 = 0;
						double double_1 = 0;
						double double_2 = 0;
						int int_1 = 0;
						int int_2 = 0;
						unsigned int unsigned_int_2 = 0;
						unsigned int unsigned_int_1 = 0;
						char char_1 = 0;
						char char_2 = 0;
						double double_3 = 0;
						int int_3 = 0;
						int int_4 = 0;
						double double_4 = 0;
						float float_1 = 0;
						float float_2 = 0;
						int int_5 = 0;
						double double_5 = 0;
						int_4 = int_4 * int_5;
					}
				}
				char controller_3[1];
				scanf("%1s", controller_3);
				if( strcmp( controller_3, "o") > 0)
				{
					long long_1 = 0;
					double double_1 = 0;
					double double_2 = 0;
					int int_1 = 0;
					int int_2 = 0;
					unsigned int unsigned_int_2 = 0;
					unsigned int unsigned_int_1 = 0;
					char char_1 = 0;
					char char_2 = 0;
					double double_3 = 0;
					int int_3 = 0;
					int int_4 = 0;
					double double_4 = 0;
					float float_1 = 0;
					float float_2 = 0;
					int int_5 = 0;
					double double_5 = 0;
					double_3 = log10 ( double_5 ) ;
				}
				float_2 = float_1 * float_2;
			}
			int_3 = int_2 * int_4;
		}
	}
}
