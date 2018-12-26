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

char unzClose( long parameter_1);
void unzLocateFile( short parameter_1,unsigned int parameter_2,char parameter_3,int uni_para);
int do_extract_onefile( unsigned int parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,int uni_para);
void change_file_date( float parameter_1,unsigned int parameter_2,float parameter_3);
int aes_encrypt( char parameter_1,char parameter_2,long parameter_3);
short encr_data( char parameter_1,int parameter_2,char parameter_3);
void fcrypt_decrypt( int parameter_1,int parameter_2,unsigned int parameter_3);
int unzReadCurrentFile( float parameter_1,char parameter_2,short parameter_3);
int makedir();
int check_file_exists( long parameter_1);
char update_keys( char parameter_1,int parameter_2,int parameter_3);
short init_keys( int parameter_1,unsigned int parameter_2,float parameter_3);
int aes_encrypt_key256( unsigned int parameter_1,long parameter_2);
unsigned int aes_encrypt_key192( int parameter_1,char parameter_2);
void aes_encrypt_key128( char parameter_1,char parameter_2);
double aes_encrypt_key( char parameter_1,int parameter_2,short parameter_3);
int hmac_sha_key( short parameter_1,char parameter_2,unsigned int parameter_3);
void hmac_sha_begin( char parameter_1);
void derive_key( unsigned int parameter_1,unsigned int parameter_2,float parameter_3,short parameter_4,unsigned int parameter_5,long parameter_6,double parameter_7);
int fcrypt_init( int parameter_1,double parameter_2,long parameter_3,double parameter_4,int parameter_5,float parameter_6);
double unzGoToNextDisk( unsigned int parameter_1);
double unz64local_CheckCurrentFileCoherencyHeader( short parameter_1,char parameter_2,long parameter_3,short parameter_4);
void hmac_sha_data( unsigned int parameter_1,float parameter_2,float parameter_3);
void hmac_sha_end( unsigned int parameter_1,int parameter_2,float parameter_3);
int fcrypt_end( char parameter_1,double parameter_2);
long unzCloseCurrentFile( unsigned int parameter_1);
float unzOpenCurrentFile3( double parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5);
void unzOpenCurrentFilePassword( long parameter_1,char parameter_2);
int do_extract_currentfile( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
int do_extract_all( short parameter_1,int parameter_2,int parameter_3,short parameter_4);
char unzGoToNextFile2( float parameter_1,short parameter_2,char parameter_3,short parameter_4,short parameter_6,char parameter_7,int parameter_8);
double unzGoToNextFile();
void display_zpos64( double parameter_1,int parameter_2);
long unzGetCurrentFileInfo64( float parameter_1,short parameter_2,char parameter_3,double parameter_4,double parameter_6,char parameter_7,unsigned int parameter_8);
int do_list( int parameter_1);
int unzOpen64( double parameter_1);
float unz64local_DosDateToTmuDate( short parameter_1,short parameter_2,int uni_para);
int unz64local_GetCurrentFileInfoInternal( double parameter_1,double parameter_2,short parameter_3,char parameter_4,short parameter_5,float parameter_7,char parameter_8,short parameter_9,int uni_para);
int unzGoToFirstFile2( long parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_6,char parameter_7,float parameter_8,int uni_para);
float unzGoToFirstFile( int parameter_1);
long unz64local_getLong64( double parameter_1,unsigned int parameter_2,unsigned int parameter_3);
float unz64local_SearchCentralDir64( float parameter_1,unsigned int parameter_2,char parameter_3);
short unz64local_getShort( char parameter_1,float parameter_2,unsigned int parameter_3);
short unz64local_getByte( unsigned int parameter_1,unsigned int parameter_2,int parameter_3);
int unz64local_getLong( short parameter_1,long parameter_2,long parameter_3);
double unz64local_SearchCentralDir( short parameter_1,float parameter_2);
float ferror_file_func( long parameter_1,float parameter_2);
char fclose_file_func( float parameter_1,long parameter_2);
long fseek64_file_func( unsigned int parameter_1,float parameter_2,double parameter_3,int parameter_4);
float ftell64_file_func( float parameter_1,float parameter_2);
double fwrite_file_func( char parameter_1,short parameter_2,char parameter_3,char parameter_4);
unsigned int fread_file_func( char parameter_1,short parameter_2,char parameter_4);
short fopendisk64_file_func( float parameter_1,float parameter_2,int parameter_3,int parameter_4);
char file_build_ioposix( float parameter_1,float parameter_2);
char fopen64_file_func( long parameter_1,unsigned int parameter_2,int parameter_3);
void fill_fopen64_filefunc( short parameter_1);
void unzOpenInternal( unsigned int parameter_1,unsigned int parameter_2);
short unzOpen2_64( long parameter_1,char parameter_2);
long win32_error_file_func( short parameter_1,char parameter_2);
void win32_close_file_func( unsigned int parameter_1,double parameter_2);
char win32_seek64_file_func( long parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4);
char win32_setfilepointer_internal( float parameter_1,long parameter_2,char parameter_3,double parameter_4);
char win32_tell64_file_func( short parameter_1,float parameter_2);
long win32_write_file_func( short parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4);
float int( long parameter_1);
int uLong();
double win32_read_file_func( long parameter_1,short parameter_2,short parameter_4);
long win32_opendisk64_file_funcA( char parameter_1,int parameter_2,int parameter_3,int parameter_4);
float voidpf();
float win32_build_iowin();
char win32_translate_open_mode( int parameter_1,float parameter_2,float parameter_3,short parameter_4,unsigned int parameter_5);
unsigned int win32_open64_file_funcA( double parameter_1,double parameter_2,int parameter_3);
void fill_win32_filefunc64A( float parameter_1);
void do_help();
void do_banner();
char unzClose( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		return char_1;
	}
	char_1 = char_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		long_1 = unzCloseCurrentFile(unsigned_int_1);

		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		double_3 = double_1 * double_2;
	}
	if(1)
	{
		double_1 = tanh ( double_3 ) ;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	unsigned_int_2 = unsigned_int_5;
	int_1 = int_2;
	return char_1;
}
void unzLocateFile( short parameter_1,unsigned int parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = tan ( double_1 ) ;
	double_2 = log10 ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_1;
	double_1 = floor ( double_3 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_1 = char_1;
	char controller4vul_24[4];
	fgets(controller4vul_24 ,5 ,stdin);
	if( strcmp( controller4vul_24, "fSz$") == 0)
	{
		int_1 = unzGoToFirstFile2(long_1,char_2,char_2,int_2,int_3,char_1,float_1,uni_para);

	}
	if(1)
	{
	}
	double_4 = acos ( double_4 ) ;
	if(1)
	{
	}
	double_4 = pow ( double_4 , double_5 ) ;
	double_4 = atan2 ( double_5 , double_6 ) ;
	double_6 = cosh ( double_5 ) ;
	short_1 = short_2;
	unsigned_int_4 = unsigned_int_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			double_4 = cos ( double_4 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			long long_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_3 + unsigned_int_5;
		}
		if(1)
		{
		}
		double_3 = sqrt ( double_3 ) ;
	}
	double_6 = tanh ( double_6 ) ;
	double_3 = pow ( double_4 , double_3 ) ;
	double_3 = asin ( double_4 ) ;
	short_3 = short_3 * short_1;
}
int do_extract_onefile( unsigned int parameter_1,short parameter_2,int parameter_3,int parameter_4,int parameter_5,int uni_para)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char controller4vul_23[2];
	fgets(controller4vul_23 ,3 ,stdin);
	if( strcmp( controller4vul_23, "(|") < 0)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unzLocateFile(short_1,unsigned_int_1,char_1,uni_para);

		float_1 = float_1 + float_2;
		return int_1;
	}
	if(1)
	{
		return int_1;
	}
	return int_2;
}
void change_file_date( float parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_7 = 1;
	long long_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	int int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = tan ( double_2 ) ;
	int_2 = int_1 + int_1;
	double_2 = fmod ( double_1 , double_1 ) ;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "~_6a:") < 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_7 = 1;
		long long_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		int int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_2 = acos ( double_3 ) ;
		short_2 = short_1 + short_1;
		double_4 = cos ( double_2 ) ;
		double_5 = fmod ( double_6 , double_7 ) ;
		double_4 = atan2 ( double_4 , double_3 ) ;
	}
	else
	{
		if(1)
		{
			int_2 = int_2 + int_2;
		}
	}
	long_1 = long_1 * long_1;
	int_2 = int_1;
	double_3 = pow ( double_8 , double_9 ) ;
	double_7 = exp ( double_1 ) ;
	double_2 = tan ( double_5 ) ;
	double_7 = fmod ( double_9 , double_10 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_7 = 1;
		long long_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		int int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_11 = cos ( double_2 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_7 = 1;
		long long_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		int int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		double double_11 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = ldexp ( double_3 , int_3 ) ;
	double_2 = double_2;
	long_2 = long_3;
}
int aes_encrypt( char parameter_1,char parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char_1 = char_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double_1 = fabs ( double_2 ) ;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			float_2 = float_1 + float_2;
		}
		else
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			double_3 = pow ( double_3 , double_1 ) ;
		}
	}
	return int_1;
}
short encr_data( char parameter_1,int parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	long long_2 = 1;
	float_2 = float_1 * float_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		long long_2 = 1;
		looper_1 += 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			double double_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			long long_2 = 1;
			int_1 = aes_encrypt(char_1,char_2,long_1);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				float float_1 = 1;
				float float_2 = 1;
				int int_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				long long_1 = 1;
				double double_1 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_2 = 1;
				long long_2 = 1;
				looper_2 += 1;
				long_2 = long_1;
			}
			double_1 = asin ( double_2 ) ;
			double_2 = acos ( double_3 ) ;
		}
		unsigned_int_2 = unsigned_int_1;
	}
	double_3 = cosh ( double_1 ) ;
}
void fcrypt_decrypt( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double_1 = cosh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	hmac_sha_data(unsigned_int_3,float_1,float_1);

	short_1 = encr_data(char_1,int_1,char_2);

}
int unzReadCurrentFile( float parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	char char_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_13 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	short short_3 = 1;
	double double_12 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_3 = 1;
	double double_14 = 1;
	char char_5 = 1;
	double double_15 = 1;
	double double_16 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_1 = fabs ( double_3 ) ;
	double_3 = cosh ( double_3 ) ;
	if(1)
	{
		return int_2;
	}
	char_3 = char_1 + char_2;
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
		return int_2;
	}
	double_2 = atan ( double_4 ) ;
	double_3 = fabs ( double_3 ) ;
	if(1)
	{
		char controller_6[3];
		fgets(controller_6 ,3 ,stdin);
		if( strcmp( controller_6, "dZ") < 0)
		{
			double_1 = ceil ( double_4 ) ;
		}
	}
	else
	{
		if(1)
		{
			int_3 = int_3 * int_2;
		}
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_5 = 1;
		char char_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_8 = 1;
		double double_9 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_13 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_2 = 1;
		short short_3 = 1;
		double double_12 = 1;
		int int_6 = 1;
		int int_7 = 1;
		long long_3 = 1;
		double double_14 = 1;
		char char_5 = 1;
		double double_15 = 1;
		double double_16 = 1;
		looper_1 += 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_5 = 1;
			char char_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_8 = 1;
			double double_9 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_13 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_2 = 1;
			short short_3 = 1;
			double double_12 = 1;
			int int_6 = 1;
			int int_7 = 1;
			long long_3 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double double_15 = 1;
			double double_16 = 1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			fcrypt_decrypt(int_3,int_4,unsigned_int_3);

			double_1 = tan ( double_2 ) ;
			double_1 = sinh ( double_1 ) ;
			double_2 = log ( double_1 ) ;
			if(1)
			{
				double_4 = unzGoToNextDisk(unsigned_int_4);

				double_2 = ldexp ( double_2 , int_2 ) ;
			}
			long_1 = long_1;
			if(1)
			{
				double_3 = atan ( double_3 ) ;
			}
			if(1)
			{
				double_1 = pow ( double_1 , double_5 ) ;
			}
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				if(1)
				{
					return int_2;
				}
				char_4 = char_1 * char_3;
				double_6 = atan2 ( double_3 , double_2 ) ;
				double_6 = double_5;
				if(1)
				{
					if(1)
					{
						return int_2;
					}
					double_3 = log10 ( double_2 ) ;
					if(1)
					{
						return int_4;
					}
					double_2 = double_4 + double_7;
					double_4 = asin ( double_4 ) ;
				}
			}
			if(1)
			{
				if(1)
				{
					double_1 = log ( double_2 ) ;
				}
				else
				{
					if(1)
					{
						double_7 = tan ( double_3 ) ;
						for(int looper_3=0; looper_3<1;looper_3++)
						{
							double_1 = log ( double_6 ) ;
						}
					}
				}
				double_6 = atan2 ( double_3 , double_2 ) ;
			}
			double_2 = sinh ( double_3 ) ;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			double_7 = floor ( double_1 ) ;
			if(1)
			{
				return int_2;
			}
			if(1)
			{
				int_5 = int_1;
			}
			else
			{
				double_3 = floor ( double_4 ) ;
			}
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				double_8 = atan2 ( double_8 , double_9 ) ;
			}
			double_7 = fmod ( double_4 , double_1 ) ;
			unsigned_int_5 = unsigned_int_1;
			float_1 = float_2;
			double_7 = fabs ( double_4 ) ;
			double_10 = tan ( double_7 ) ;
			double_10 = log10 ( double_1 ) ;
			unsigned_int_4 = unsigned_int_1;
			char_2 = char_4 * char_4;
			double_11 = cos ( double_5 ) ;
		}
		char controller_22[2];
		fgets(controller_22 ,2 ,stdin);
		if( strcmp( controller_22, ":") < 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_5 = 1;
			char char_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_8 = 1;
			double double_9 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_13 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_2 = 1;
			short short_3 = 1;
			double double_12 = 1;
			int int_6 = 1;
			int int_7 = 1;
			long long_3 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double double_15 = 1;
			double double_16 = 1;
			double_1 = fmod ( double_10 , double_11 ) ;
			short_1 = short_2;
			unsigned_int_3 = unsigned_int_4;
			double_2 = sqrt ( double_7 ) ;
			double_3 = ceil ( double_7 ) ;
			int_3 = int_3;
			int_5 = uLong();

			double_3 = atan ( double_4 ) ;
			double_3 = tan ( double_3 ) ;
			double_2 = log ( double_10 ) ;
			double_2 = atan2 ( double_9 , double_1 ) ;
			long_2 = long_1 + long_2;
			short_1 = short_2 * short_3;
			double_8 = fabs ( double_2 ) ;
			double_1 = asin ( double_7 ) ;
			float_1 = float_2 + float_1;
			int_1 = int_1;
			double_7 = double_5;
			double_11 = sqrt ( double_3 ) ;
			double_10 = double_5 + double_11;
			double_12 = acos ( double_2 ) ;
			double_13 = double_12;
			int_7 = int_6 * int_6;
			double_1 = double_2 * double_12;
			double_1 = acos ( double_10 ) ;
			long_3 = long_2 * long_3;
			double_9 = double_5;
			if(1)
			{
				return int_3;
			}
			if(1)
			{
			}
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_5 = 1;
			char char_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_8 = 1;
			double double_9 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_13 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_2 = 1;
			short short_3 = 1;
			double double_12 = 1;
			int int_6 = 1;
			int int_7 = 1;
			long long_3 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double double_15 = 1;
			double double_16 = 1;
			double_5 = floor ( double_4 ) ;
			char_2 = char_1 * char_4;
			double_8 = exp ( double_13 ) ;
			double_7 = floor ( double_9 ) ;
			double_14 = ldexp ( double_14 , int_5 ) ;
			double_8 = double_10 + double_7;
			int_1 = int_2;
			if(1)
			{
				double_2 = double_5 + double_6;
			}
			double_7 = ldexp ( double_3 , int_3 ) ;
			unsigned_int_3 = unsigned_int_5 * unsigned_int_1;
			char_2 = char_4 + char_5;
			double_14 = atan2 ( double_2 , double_14 ) ;
			double_11 = log10 ( double_6 ) ;
			double_15 = ceil ( double_16 ) ;
			if(1)
			{
				return int_1;
			}
			if(1)
			{
			}
		}
	}
	if(1)
	{
		return int_2;
	}
	return int_1;
}
int makedir()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_5 = 1;
	int int_4 = 1;
	double_1 = cosh ( double_1 ) ;
	double_2 = asin ( double_1 ) ;
	double_2 = asin ( double_1 ) ;
	if(1)
	{
		return int_1;
	}
	float_1 = int(long_1);

	float_2 = float_3;
	if(1)
	{
		double_3 = acos ( double_3 ) ;
		return int_2;
	}
	double_4 = atan2 ( double_2 , double_5 ) ;
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	if(1)
	{
		double_1 = atan2 ( double_4 , double_3 ) ;
		return int_3;
	}
	char_2 = char_1 + char_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_5 = 1;
		int int_4 = 1;
		looper_1 += 1;
		double_5 = ceil ( double_2 ) ;
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			double_1 = ceil ( double_3 ) ;
		}
		double_4 = fabs ( double_4 ) ;
		int_3 = int_2 * int_4;
		if(1)
		{
			double_2 = fabs ( double_1 ) ;
			double_5 = fmod ( double_5 , double_2 ) ;
			return int_2;
		}
		if(1)
		{
		}
		double_3 = asin ( double_3 ) ;
	}
	double_3 = log ( double_3 ) ;
	return int_5;
}
int check_file_exists( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		return int_1;
	}
	int_2 = int_1;
	return int_3;
}
char update_keys( char parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	char_2 = char_1 * char_1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	float_1 = int(long_1);

	double_1 = floor ( double_2 ) ;
	double_3 = asin ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	return char_3;
}
short init_keys( int parameter_1,unsigned int parameter_2,float parameter_3)
{
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char_1 = update_keys(char_1,int_1,int_1);

	unsigned_int_1 = unsigned_int_1;
	double_1 = sqrt ( double_1 ) ;
	double_1 = sqrt ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		looper_1 += 1;
		int_4 = int_2 * int_3;
		double_1 = sqrt ( double_2 ) ;
	}
}
int aes_encrypt_key256( unsigned int parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_6 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	double double_9 = 1;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		double_1 = fmod ( double_2 , double_2 ) ;
		if(1)
		{
			double_3 = double_1 + double_3;
			return int_1;
		}
	}
	if(1)
	{
		int_2 = int_1 + int_2;
	}
	else
	{
		double_3 = sqrt ( double_2 ) ;
	}
	double_1 = cos ( double_2 ) ;
	if(1)
	{
		double_1 = asin ( double_1 ) ;
	}
	int_1 = int_2 * int_2;
	if(1)
	{
		double_4 = sinh ( double_3 ) ;
		double_4 = fmod ( double_3 , double_3 ) ;
		return int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_4 = 1;
		double double_9 = 1;
		double_5 = fmod ( double_6 , double_6 ) ;
		double_6 = acos ( double_5 ) ;
		long_1 = long_1;
		char_1 = char_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_4 = 1;
			double double_6 = 1;
			long long_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			float float_1 = 1;
			char char_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_4 = 1;
			double double_9 = 1;
			float_1 = float_1 + float_1;
			return int_1;
		}
		char_1 = char_2;
		if(1)
		{
			return int_3;
		}
		double_6 = sqrt ( double_2 ) ;
		if(1)
		{
			double_3 = double_4;
			if(1)
			{
				return int_3;
			}
			else
			{
				char_2 = char_1 + char_2;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_4 = 1;
			double double_6 = 1;
			long long_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			float float_1 = 1;
			char char_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_4 = 1;
			double double_9 = 1;
			double_5 = tan ( double_5 ) ;
			char_3 = char_2 + char_3;
		}
		else
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_4 = 1;
			double double_6 = 1;
			long long_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			float float_1 = 1;
			char char_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_4 = 1;
			double double_9 = 1;
			double_7 = double_1 * double_5;
		}
		return int_1;
	}
	else
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_6 = 1;
		long long_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_4 = 1;
		double double_9 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		if(1)
		{
			if(1)
			{
				double_6 = sqrt ( double_6 ) ;
			}
		}
		double_1 = tan ( double_8 ) ;
		long_2 = long_1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
		}
		char_4 = char_2 * char_1;
		double_9 = atan ( double_3 ) ;
	}
}
unsigned int aes_encrypt_key192( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = fabs ( double_2 ) ;
	if(1)
	{
		int_1 = int_1 * int_1;
		return unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	int_1 = int_2;
	double_1 = log ( double_3 ) ;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	double_3 = ceil ( double_4 ) ;
	long_1 = long_1;
	float_1 = float_2;
	short_3 = short_1 + short_2;
	double_1 = log10 ( double_2 ) ;
	long_2 = long_2;
	double_2 = atan2 ( double_3 , double_5 ) ;
	char_3 = char_1 * char_2;
	float_1 = float_2;
	double_6 = log ( double_7 ) ;
	double_1 = exp ( double_8 ) ;
	int_2 = int_1;
	char_3 = char_3 * char_2;
	int_3 = int_4;
	unsigned_int_4 = unsigned_int_2;
	double_4 = asin ( double_1 ) ;
	return unsigned_int_2;
}
void aes_encrypt_key128( char parameter_1,char parameter_2)
{
	if(1)
	{
		double double_1 = 1;
		double_1 = log10 ( double_1 ) ;
	}
}
double aes_encrypt_key( char parameter_1,int parameter_2,short parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	{
		return double_1;
		return double_1;
		return double_1;
		return double_1;
	}
	aes_encrypt_key128(char_1,char_2);

	unsigned_int_1 = aes_encrypt_key192(int_1,char_2);

	int_1 = aes_encrypt_key256(unsigned_int_2,long_1);

}
int hmac_sha_key( short parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long_1 = long_1;
			double_1 = tan ( double_1 ) ;
		}
		double_1 = fmod ( double_2 , double_2 ) ;
	}
	else
	{
		double_1 = tan ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_1;
	return int_1;
}
void hmac_sha_begin( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
void derive_key( unsigned int parameter_1,unsigned int parameter_2,float parameter_3,short parameter_4,unsigned int parameter_5,long parameter_6,double parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	char char_2 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	long long_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double_1 = tan ( double_2 ) ;
	short_1 = short_1 + short_1;
	float_2 = float_1 * float_2;
	double_1 = double_3;
	short_2 = short_3;
	double_3 = tan ( double_1 ) ;
	hmac_sha_end(unsigned_int_1,int_1,float_3);

	unsigned_int_2 = unsigned_int_2;
	hmac_sha_begin(char_1);

	int_4 = int_2 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_4 = 1;
		char char_2 = 1;
		float float_4 = 1;
		long long_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		long long_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int_5 = hmac_sha_key(short_4,char_2,unsigned_int_1);

		float_4 = float_4;
		long_1 = long_1;
		double_4 = pow ( double_5 , double_2 ) ;
		double_2 = ceil ( double_3 ) ;
		double_4 = atan ( double_5 ) ;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_4 = 1;
			char char_2 = 1;
			float float_4 = 1;
			long long_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			long long_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double_4 = ceil ( double_5 ) ;
			char_5 = char_3 * char_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_1 = atan2 ( double_3 , double_6 ) ;
			}
			hmac_sha_data(unsigned_int_2,float_1,float_3);

			double_5 = sinh ( double_1 ) ;
		}
		long_2 = long_2;
		double_5 = double_6 + double_6;
		int looper_4 = 0;
		while(looper_4 < 1)
		{
			looper_4 += 1;
			double_4 = sinh ( double_4 ) ;
		}
	}
}
int fcrypt_init( int parameter_1,double parameter_2,long parameter_3,double parameter_4,int parameter_5,float parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_6 = 1;
	int int_3 = 1;
	double_1 = fmod ( double_2 , double_3 ) ;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_1;
	}
	int_1 = int_1;
	int_1 = hmac_sha_key(short_1,char_1,unsigned_int_1);

	double_4 = atan ( double_3 ) ;
	hmac_sha_begin(char_2);

	char_3 = char_2 + char_3;
	double_2 = aes_encrypt_key(char_4,int_1,short_2);

	int_2 = int_1;
	double_3 = tan ( double_5 ) ;
	derive_key(unsigned_int_2,unsigned_int_1,float_1,short_3,unsigned_int_1,long_1,double_2);

	double_5 = fmod ( double_4 , double_5 ) ;
	double_2 = fmod ( double_2 , double_3 ) ;
	double_1 = log10 ( double_6 ) ;
	char_1 = char_1;
	return int_3;
}
double unzGoToNextDisk( unsigned int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double_1 = tan ( double_1 ) ;
	int_1 = uLong();

	double_2 = ceil ( double_2 ) ;
	double_3 = floor ( double_1 ) ;
	if(1)
	{
		return double_2;
	}
	short_2 = short_1 + short_2;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		if(1)
		{
			double_2 = cos ( double_3 ) ;
		}
		if(1)
		{
			double_2 = atan2 ( double_1 , double_3 ) ;
		}
		else
		{
			double double_1 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double_1 = atan2 ( double_1 , double_4 ) ;
		}
		if(1)
		{
			return double_1;
		}
		int_3 = int_2 + int_2;
	}
	return double_3;
}
double unz64local_CheckCurrentFileCoherencyHeader( short parameter_1,char parameter_2,long parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_9 = 1;
	double_1 = sinh ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	double_3 = sqrt ( double_3 ) ;
	unsigned_int_2 = unsigned_int_1;
	char_2 = char_1 + char_1;
	short_1 = unz64local_getShort(char_2,float_1,unsigned_int_1);

	double_1 = fmod ( double_1 , double_4 ) ;
	short_1 = short_2;
	double_4 = tanh ( double_2 ) ;
	double_5 = fabs ( double_6 ) ;
	if(1)
	{
		return double_7;
	}
	if(1)
	{
		return double_3;
	}
	if(1)
	{
		if(1)
		{
			double_7 = acos ( double_3 ) ;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_9 = 1;
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		double_2 = acos ( double_8 ) ;
	}
	if(1)
	{
		double_2 = pow ( double_2 , double_5 ) ;
	}
	if(1)
	{
		double_2 = unzGoToNextDisk(unsigned_int_4);

		double_4 = double_7 + double_6;
	}
	double_1 = double_8;
	if(1)
	{
		int_1 = uLong();

		double_4 = sqrt ( double_4 ) ;
	}
	if(1)
	{
		double_5 = exp ( double_7 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_9 = 1;
		int_1 = unz64local_getLong(short_2,long_1,long_1);

		unsigned_int_5 = unsigned_int_4;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_9 = 1;
		int_2 = int_2;
	}
	if(1)
	{
		double_8 = cos ( double_2 ) ;
	}
	if(1)
	{
		double_8 = fmod ( double_2 , double_3 ) ;
	}
	if(1)
	{
		double_1 = cosh ( double_4 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_9 = 1;
		short_4 = short_1 + short_3;
	}
	if(1)
	{
		double_6 = floor ( double_6 ) ;
	}
	if(1)
	{
		double_8 = atan2 ( double_1 , double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		int int_1 = 1;
		long long_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_9 = 1;
		double_1 = atan2 ( double_9 , double_4 ) ;
	}
	long_1 = long_1;
	if(1)
	{
		float_2 = int(long_2);

		double_5 = atan2 ( double_8 , double_2 ) ;
	}
	double_2 = double_2;
	char_1 = char_2;
	double_10 = double_7 + double_4;
	return double_1;
}
void hmac_sha_data( unsigned int parameter_1,float parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int_1 = int_1;
	if(1)
	{
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		if(1)
		{
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			short short_1 = 1;
			double double_1 = 1;
			int int_2 = 1;
			double_1 = double_1;
			double_1 = sqrt ( double_1 ) ;
		}
		double_2 = atan2 ( double_3 , double_4 ) ;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			short short_1 = 1;
			double double_1 = 1;
			int int_2 = 1;
			int_2 = int_1;
		}
		char_1 = char_1 + char_1;
		double_2 = fmod ( double_4 , double_3 ) ;
		short_1 = short_1;
	}
	if(1)
	{
		double_2 = double_3;
	}
}
void hmac_sha_end( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	double_1 = tan ( double_2 ) ;
	int_2 = int_1 + int_2;
	if(1)
	{
		double_2 = cos ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		float float_3 = 1;
		long_1 = long_1;
	}
	double_2 = tanh ( double_3 ) ;
	double_1 = cos ( double_2 ) ;
	double_2 = double_2 * double_2;
	double_2 = atan ( double_4 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		float float_3 = 1;
		hmac_sha_data(unsigned_int_1,float_1,float_2);

		float_2 = float_3;
	}
}
int fcrypt_end( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	hmac_sha_end(unsigned_int_1,int_1,float_1);

	short_3 = short_1 + short_2;
	return int_1;
}
long unzCloseCurrentFile( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_2;
	double_1 = atan2 ( double_1 , double_1 ) ;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "43-{+") < 0)
	{
		return long_1;
	}
	int_3 = int_1 + int_2;
	double_2 = log10 ( double_1 ) ;
	if(1)
	{
		return long_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		int int_3 = 1;
		double double_2 = 1;
		long long_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_1 = atan ( double_3 ) ;
		double_4 = sqrt ( double_3 ) ;
		if(1)
		{
			return long_3;
		}
		if(1)
		{
			double_3 = acos ( double_5 ) ;
		}
		if(1)
		{
			double_6 = log10 ( double_4 ) ;
		}
	}
	if(1)
	{
		char controller_8[2];
		fgets(controller_8 ,2 ,stdin);
		if( strcmp( controller_8, "q") < 0)
		{
			if(1)
			{
				double_6 = log10 ( double_5 ) ;
			}
		}
	}
	double_5 = acos ( double_3 ) ;
	double_1 = floor ( double_2 ) ;
	if(1)
	{
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		int int_3 = 1;
		double double_2 = 1;
		long long_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_3 = char_1 + char_2;
	}
	int_2 = fcrypt_end(char_3,double_2);

	double_7 = fabs ( double_6 ) ;
	double_2 = sqrt ( double_8 ) ;
	float_2 = float_1 * float_1;
	return long_1;
}
float unzOpenCurrentFile3( double parameter_1,int parameter_2,int parameter_3,int parameter_4,double parameter_5)
{
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = floor ( double_1 ) ;
	double_1 = unz64local_CheckCurrentFileCoherencyHeader(short_1,char_1,long_1,short_2);

	int_1 = fcrypt_init(int_1,double_2,long_1,double_3,int_1,float_1);

	double_3 = log10 ( double_3 ) ;
	float_1 = int(long_2);

	double_2 = ldexp ( double_4 , int_2 ) ;
	float_1 = voidpf();

	short_1 = init_keys(int_1,unsigned_int_1,float_2);

	double_5 = ldexp ( double_6 , int_1 ) ;
	long_1 = unzCloseCurrentFile(unsigned_int_2);

}
void unzOpenCurrentFilePassword( long parameter_1,char parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = unzOpenCurrentFile3(double_1,int_1,int_2,int_2,double_1);

}
int do_extract_currentfile( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_9 = 1;
	char char_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_4 = 1;
	float float_6 = 1;
	short short_5 = 1;
	double double_10 = 1;
	double_1 = exp ( double_2 ) ;
	double_1 = double_1 + double_1;
	int_1 = int_2;
	double_3 = exp ( double_4 ) ;
	double_4 = tan ( double_1 ) ;
	double_1 = log ( double_2 ) ;
	char_1 = char_1;
	double_1 = tanh ( double_1 ) ;
	double_1 = exp ( double_2 ) ;
	float_1 = float_1;
	double_5 = atan ( double_2 ) ;
	double_6 = exp ( double_6 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_9 = 1;
		char char_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		long long_3 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		short short_4 = 1;
		float float_6 = 1;
		short short_5 = 1;
		double double_10 = 1;
		long_1 = long_2;
		return int_2;
	}
	double_7 = sqrt ( double_8 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			short_1 = short_2;
		}
		double_3 = sinh ( double_4 ) ;
	}
	if(1)
	{
		if(1)
		{
			long_1 = unzGetCurrentFileInfo64(float_1,short_3,char_2,double_7,double_4,char_2,unsigned_int_1);

			double_6 = ldexp ( double_4 , int_1 ) ;
			int_3 = int_1 + int_2;
		}
		return int_1;
	}
	double_4 = exp ( double_6 ) ;
	if(1)
	{
		float_2 = float_1 + float_1;
		return int_3;
	}
	short_3 = short_2;
	if(1)
	{
		int_4 = makedir();

		double_3 = sinh ( double_7 ) ;
	}
	if(1)
	{
		double_1 = tanh ( double_5 ) ;
	}
	else
	{
		char_2 = char_1 * char_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		float float_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_9 = 1;
		char char_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		long long_3 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		short short_4 = 1;
		float float_6 = 1;
		short short_5 = 1;
		double double_10 = 1;
		double_8 = double_6 + double_3;
		do
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			float float_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_9 = 1;
			char char_4 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_3 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			short short_4 = 1;
			float float_6 = 1;
			short short_5 = 1;
			double double_10 = 1;
			float_1 = float_2;
			int_5 = unzReadCurrentFile(float_3,char_2,short_2);

			int_1 = int_1;
			if(1)
			{
				double_3 = tan ( double_8 ) ;
			}
			char_3 = char_2 + char_1;
			if(1)
			{
				double_8 = pow ( double_8 , double_4 ) ;
			}
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
		looper_2 += 1;
		if(1)
		{
			double_2 = atan ( double_2 ) ;
		}
		if(1)
		{
			float_3 = float_1;
		}
	}
	if(1)
	{
		double_9 = cos ( double_7 ) ;
		if(1)
		{
			double_6 = atan ( double_9 ) ;
			long_1 = unzCloseCurrentFile(unsigned_int_1);

			int_5 = int_1;
			int_4 = int_3;
			double_5 = double_7 * double_4;
			char_4 = char_1 * char_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			float float_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_9 = 1;
			char char_4 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_3 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			short short_4 = 1;
			float float_6 = 1;
			short short_5 = 1;
			double double_10 = 1;
			short_4 = short_2;
		}
	}
	if(1)
	{
		double_8 = double_6 + double_4;
		do
		{
			short_2 = short_3 * short_1;
			if(1)
			{
				char_4 = char_2 + char_4;
			}
			if(1)
			{
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				char char_1 = 1;
				float float_1 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				double double_7 = 1;
				double double_8 = 1;
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_3 = 1;
				float float_2 = 1;
				int int_4 = 1;
				int int_5 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_9 = 1;
				char char_4 = 1;
				float float_4 = 1;
				float float_5 = 1;
				long long_3 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				short short_4 = 1;
				float float_6 = 1;
				short short_5 = 1;
				double double_10 = 1;
				change_file_date(float_4,unsigned_int_2,float_5);

				double_5 = floor ( double_8 ) ;
				float_6 = float_1 + float_4;
			}
		}
		int looper_3 = 0;
		while(looper_3 < 1)
		double_4 = floor ( double_4 ) ;
		looper_3 += 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			float float_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_9 = 1;
			char char_4 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_3 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			short short_4 = 1;
			float float_6 = 1;
			short short_5 = 1;
			double double_10 = 1;
			int_5 = check_file_exists(long_1);

			short_1 = short_5 + short_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			float float_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_9 = 1;
			char char_4 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_3 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			short short_4 = 1;
			float float_6 = 1;
			short short_5 = 1;
			double double_10 = 1;
			double_10 = sinh ( double_6 ) ;
		}
	}
	unzOpenCurrentFilePassword(long_3,char_4);

	double_5 = double_8 + double_9;
	if(1)
	{
		long_1 = long_3 * long_3;
	}
	double_6 = double_4 + double_5;
	return int_4;
}
int do_extract_all( short parameter_1,int parameter_2,int parameter_3,short parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_1 = unzGoToFirstFile(int_1);

		double_1 = double_2 + double_1;
		return int_2;
	}
	do
	{
		double double_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long_2 = long_1 + long_2;
		if(1)
		{
		}
		double_3 = ceil ( double_1 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_3 = unzGoToNextFile();

	float_3 = float_2 * float_3;
	looper_1 += 1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_3 = do_extract_currentfile(double_3,int_1,int_1,int_4);

		short_2 = short_1 * short_1;
		return int_4;
	}
	return int_5;
}
char unzGoToNextFile2( float parameter_1,short parameter_2,char parameter_3,short parameter_4,short parameter_6,char parameter_7,int parameter_8)
{
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = unz64local_GetCurrentFileInfoInternal(double_1,double_1,short_1,char_1,short_1,float_1,char_2,short_1,636);

	int_1 = int_1;
	float_1 = float_1;
	if(1)
	{
		return char_3;
	}
	double_2 = fabs ( double_3 ) ;
	if(1)
	{
		return char_1;
	}
	if(1)
	{
		if(1)
		{
			return char_2;
		}
	}
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1;
	double_4 = sqrt ( double_5 ) ;
	if(1)
	{
		double_5 = tanh ( double_1 ) ;
	}
	return char_1;
}
double unzGoToNextFile()
{
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	return double_1;
	char_1 = unzGoToNextFile2(float_1,short_1,char_2,short_1,short_1,char_3,int_1);

}
void display_zpos64( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double_1 = log10 ( double_2 ) ;
	float_2 = float_1 + float_1;
	float_1 = float_2 * float_3;
	char_2 = char_1 + char_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		char char_3 = 1;
		long long_2 = 1;
		double double_5 = 1;
		looper_1 += 1;
		double_3 = log ( double_2 ) ;
		if(1)
		{
			long_1 = long_1 * long_1;
		}
		char_1 = char_1 * char_3;
		if(1)
		{
		}
		long_2 = long_1 + long_2;
	}
	double_4 = sinh ( double_1 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		char char_3 = 1;
		long long_2 = 1;
		double double_5 = 1;
		looper_2 += 1;
		double_2 = tanh ( double_5 ) ;
	}
	unsigned_int_1 = unsigned_int_2;
}
long unzGetCurrentFileInfo64( float parameter_1,short parameter_2,char parameter_3,double parameter_4,double parameter_6,char parameter_7,unsigned int parameter_8)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	return long_1;
	int_1 = unz64local_GetCurrentFileInfoInternal(double_1,double_1,short_1,char_1,short_1,float_1,char_1,short_1,714);

}
int do_list( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	float float_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double_1 = acos ( double_1 ) ;
	if(1)
	{
		double_2 = pow ( double_1 , double_2 ) ;
		return int_1;
	}
	double_1 = acos ( double_3 ) ;
	long_1 = long_2;
	do
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_3 = 1;
		short short_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		float float_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		int int_2 = 1;
		double_1 = log10 ( double_2 ) ;
		unsigned_int_1 = unsigned_int_1;
		double_1 = sinh ( double_4 ) ;
		double_5 = atan2 ( double_3 , double_1 ) ;
		double_1 = sqrt ( double_6 ) ;
		long_3 = long_1;
		if(1)
		{
			double_6 = tan ( double_2 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_3 = 1;
			short short_1 = 1;
			double double_8 = 1;
			double double_9 = 1;
			float float_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			int int_2 = 1;
			display_zpos64(double_5,int_1);

			short_1 = short_2;
		}
		if(1)
		{
			double_5 = atan2 ( double_2 , double_7 ) ;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			int_1 = uLong();

			double_8 = log ( double_2 ) ;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				double double_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				long long_3 = 1;
				short short_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				float float_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_6 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				float float_1 = 1;
				int int_2 = 1;
				char_1 = char_2;
			}
			if(1)
			{
				double_8 = double_1;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				double double_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				long long_3 = 1;
				short short_1 = 1;
				double double_8 = 1;
				double double_9 = 1;
				float float_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_6 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				float float_1 = 1;
				int int_2 = 1;
				float_1 = float_1 * float_1;
			}
		}
		if(1)
		{
			double_6 = double_5;
		}
		else
		{
			double_8 = floor ( double_5 ) ;
		}
		double_1 = tan ( double_4 ) ;
		double_6 = floor ( double_7 ) ;
		double_9 = unzGoToNextFile();

		float_2 = float_2;
		float_2 = unzGoToFirstFile(int_1);

		long_2 = unzGetCurrentFileInfo64(float_2,short_1,char_3,double_8,double_4,char_3,unsigned_int_2);

		unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
		double_7 = sqrt ( double_5 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	long_1 = long_3 + long_1;
	looper_1 += 1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_3 = 1;
		short short_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		float float_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_1;
		return int_3;
	}
	return int_4;
}
int unzOpen64( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return int_1;
	unzOpenInternal(unsigned_int_1,unsigned_int_1);

}
float unz64local_DosDateToTmuDate( short parameter_1,short parameter_2,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	char_1 = char_1;
	double_1 = pow ( double_1 , double_1 ) ;
	float_2 = float_1 * float_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	char_1 = char_2 * char_2;
	double_2 = cosh ( double_3 ) ;
	double_4 = double_4;
	char controller4vul_30[4];
	fgets(controller4vul_30 ,5 ,stdin);
	if( strcmp( controller4vul_30, "1(& ") == 0)
	{
		char char_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		if(uni_para == 299)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		double_5 = double_5;
	}
}
int unz64local_GetCurrentFileInfoInternal( double parameter_1,double parameter_2,short parameter_3,char parameter_4,short parameter_5,float parameter_7,char parameter_8,short parameter_9,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_6 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_9 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_3 = 1;
	int int_8 = 1;
	short short_6 = 1;
	long long_3 = 1;
	double double_11 = 1;
	double double_13 = 1;
	long long_2 = 1;
	int int_9 = 1;
	int int_7 = 1;
	short short_5 = 1;
	double double_10 = 1;
	short short_7 = 1;
	int int_10 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = cosh ( double_1 ) ;
	char_1 = char_2;
	int_1 = int_1 + int_1;
	short_1 = short_1;
	double_2 = log ( double_1 ) ;
	short_1 = short_1;
	double_3 = fmod ( double_2 , double_4 ) ;
	double_4 = cos ( double_5 ) ;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	double_1 = pow ( double_5 , double_3 ) ;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4 + unsigned_int_3;
	}
	double_4 = log ( double_6 ) ;
	if(1)
	{
		double_1 = exp ( double_2 ) ;
	}
	if(1)
	{
		if(1)
		{
			double_4 = log10 ( double_6 ) ;
		}
		if(1)
		{
			int_3 = int_2 + int_1;
		}
	}
	if(1)
	{
		short_2 = short_1 * short_1;
	}
	if(1)
	{
		double_3 = fmod ( double_1 , double_4 ) ;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		double_7 = cos ( double_8 ) ;
	}
	if(1)
	{
		char_1 = char_1;
	}
	int_2 = int_4;
	if(1)
	{
		double_5 = atan ( double_3 ) ;
	}
	if(1)
	{
		double_4 = atan ( double_2 ) ;
	}
	double_1 = double_7;
	if(1)
	{
		int_2 = int_5 + int_2;
	}
	double_6 = log10 ( double_6 ) ;
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
		double_9 = fabs ( double_4 ) ;
	}
	if(1)
	{
		float_1 = float_1 * float_2;
	}
	if(1)
	{
		double_2 = log10 ( double_8 ) ;
	}
	if(1)
	{
		int_6 = int_4;
	}
	if(1)
	{
		char_2 = char_2;
	}
	if(1)
	{
		short_3 = short_4;
	}
	float_3 = float_3 + float_1;
	int_2 = int_4;
	short_3 = short_3 * short_1;
	double_7 = log10 ( double_3 ) ;
	double_3 = double_9 + double_5;
	double_6 = exp ( double_7 ) ;
	double_6 = log ( double_9 ) ;
	if(1)
	{
		if(1)
		{
			double_9 = fmod ( double_9 , double_6 ) ;
			unsigned_int_4 = unsigned_int_3;
		}
		if(1)
		{
			int_4 = int_5 + int_5;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_6 = 1;
				int int_2 = 1;
				int int_3 = 1;
				short short_2 = 1;
				double double_7 = 1;
				double double_8 = 1;
				int int_4 = 1;
				int int_5 = 1;
				long long_1 = 1;
				double double_9 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_6 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float float_3 = 1;
				int int_8 = 1;
				short short_6 = 1;
				long long_3 = 1;
				double double_11 = 1;
				double double_13 = 1;
				long long_2 = 1;
				int int_9 = 1;
				int int_7 = 1;
				short short_5 = 1;
				double double_10 = 1;
				short short_7 = 1;
				int int_10 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_3 = 1;
				char char_4 = 1;
				float float_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				unsigned int unsigned_int_6 = 1;
				long_2 = long_2 * long_2;
			}
		}
		double_7 = sqrt ( double_6 ) ;
	}
	if(1)
	{
		if(1)
		{
			double_8 = double_7;
		}
		if(1)
		{
			short_4 = short_3 + short_2;
		}
		if(1)
		{
			if(1)
			{
				double_4 = double_5 * double_2;
			}
			if(1)
			{
				double_3 = tan ( double_3 ) ;
			}
		}
		if(1)
		{
			if(1)
			{
				float_3 = float_3 * float_1;
			}
		}
		double_6 = log10 ( double_4 ) ;
	}
	if(1)
	{
		double_6 = exp ( double_7 ) ;
	}
	char controller4vul_26[2];
	fgets(controller4vul_26 ,3 ,stdin);
	if( strcmp( controller4vul_26, "o$") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		double double_9 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_3 = 1;
		int int_8 = 1;
		short short_6 = 1;
		long long_3 = 1;
		double double_11 = 1;
		double double_13 = 1;
		long long_2 = 1;
		int int_9 = 1;
		int int_7 = 1;
		short short_5 = 1;
		double double_10 = 1;
		short short_7 = 1;
		int int_10 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_6 = 1;
				int int_2 = 1;
				int int_3 = 1;
				short short_2 = 1;
				double double_7 = 1;
				double double_8 = 1;
				int int_4 = 1;
				int int_5 = 1;
				long long_1 = 1;
				double double_9 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_6 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float float_3 = 1;
				int int_8 = 1;
				short short_6 = 1;
				long long_3 = 1;
				double double_11 = 1;
				double double_13 = 1;
				long long_2 = 1;
				int int_9 = 1;
				int int_7 = 1;
				short short_5 = 1;
				double double_10 = 1;
				short short_7 = 1;
				int int_10 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_3 = 1;
				char char_4 = 1;
				float float_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				unsigned int unsigned_int_6 = 1;
				int_3 = int_7 + int_1;
			}
			if(1)
			{
				double_4 = double_4;
			}
		}
		double_5 = exp ( double_2 ) ;
		if(1)
		{
			double_1 = sqrt ( double_6 ) ;
		}
		int_9 = int_1 * int_8;
		if(1)
		{
			double_1 = atan2 ( double_1 , double_7 ) ;
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_6 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short short_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_1 = 1;
			double double_9 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_6 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_3 = 1;
			int int_8 = 1;
			short short_6 = 1;
			long long_3 = 1;
			double double_11 = 1;
			double double_13 = 1;
			long long_2 = 1;
			int int_9 = 1;
			int int_7 = 1;
			short short_5 = 1;
			double double_10 = 1;
			short short_7 = 1;
			int int_10 = 1;
			double double_12 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_3 = 1;
			char char_4 = 1;
			float float_4 = 1;
			long long_4 = 1;
			long long_5 = 1;
			long long_6 = 1;
			unsigned int unsigned_int_6 = 1;
			looper_1 += 1;
			double_8 = log10 ( double_7 ) ;
			short_5 = short_3 * short_2;
			if(1)
			{
				unsigned_int_4 = unsigned_int_1;
			}
			if(1)
			{
				double_8 = exp ( double_4 ) ;
			}
			char controller4vul_27[1];
			fgets(controller4vul_27 ,2 ,stdin);
			if( strcmp( controller4vul_27, "4") > 0)
			{
				double_5 = double_8 * double_2;
				char controller4vul_28[4];
				fgets(controller4vul_28 ,5 ,stdin);
				if( strcmp( controller4vul_28, "znK)") > 0)
				{
					char controller4vul_29[2];
					fgets(controller4vul_29 ,3 ,stdin);
					if( strcmp( controller4vul_29, "Q2") < 0)
					{
						float_2 = unz64local_DosDateToTmuDate(short_6,short_6,uni_para);

						double_10 = log ( double_5 ) ;
					}
				}
				if(1)
				{
					if(1)
					{
						double_1 = asin ( double_6 ) ;
					}
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					int int_1 = 1;
					short short_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_6 = 1;
					int int_2 = 1;
					int int_3 = 1;
					short short_2 = 1;
					double double_7 = 1;
					double double_8 = 1;
					int int_4 = 1;
					int int_5 = 1;
					long long_1 = 1;
					double double_9 = 1;
					float float_1 = 1;
					float float_2 = 1;
					int int_6 = 1;
					short short_3 = 1;
					short short_4 = 1;
					float float_3 = 1;
					int int_8 = 1;
					short short_6 = 1;
					long long_3 = 1;
					double double_11 = 1;
					double double_13 = 1;
					long long_2 = 1;
					int int_9 = 1;
					int int_7 = 1;
					short short_5 = 1;
					double double_10 = 1;
					short short_7 = 1;
					int int_10 = 1;
					double double_12 = 1;
					unsigned int unsigned_int_5 = 1;
					char char_3 = 1;
					char char_4 = 1;
					float float_4 = 1;
					long long_4 = 1;
					long long_5 = 1;
					long long_6 = 1;
					unsigned int unsigned_int_6 = 1;
					if(1)
					{
						double_2 = log ( double_4 ) ;
					}
					short_7 = short_1;
					double_6 = atan2 ( double_5 , double_9 ) ;
				}
				if(1)
				{
					if(1)
					{
						double_4 = ceil ( double_2 ) ;
					}
				}
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_6 = 1;
				int int_2 = 1;
				int int_3 = 1;
				short short_2 = 1;
				double double_7 = 1;
				double double_8 = 1;
				int int_4 = 1;
				int int_5 = 1;
				long long_1 = 1;
				double double_9 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_6 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float float_3 = 1;
				int int_8 = 1;
				short short_6 = 1;
				long long_3 = 1;
				double double_11 = 1;
				double double_13 = 1;
				long long_2 = 1;
				int int_9 = 1;
				int int_7 = 1;
				short short_5 = 1;
				double double_10 = 1;
				short short_7 = 1;
				int int_10 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_3 = 1;
				char char_4 = 1;
				float float_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				unsigned int unsigned_int_6 = 1;
				double_5 = ceil ( double_1 ) ;
				if(1)
				{
					double_7 = double_7 + double_4;
				}
				if(1)
				{
					float_1 = float_3 + float_3;
				}
				double_3 = ldexp ( double_9 , int_10 ) ;
				if(1)
				{
					double_6 = fmod ( double_2 , double_6 ) ;
				}
				if(1)
				{
					float_2 = float_1 + float_1;
				}
				if(1)
				{
					double_5 = pow ( double_2 , double_1 ) ;
				}
				if(1)
				{
					long_3 = long_1 * long_3;
				}
				if(1)
				{
					double_9 = atan2 ( double_3 , double_11 ) ;
				}
				double_12 = log ( double_2 ) ;
				if(1)
				{
					double_13 = ldexp ( double_9 , int_3 ) ;
				}
				unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
			}
			else
			{
				if(1)
				{
					double_8 = cosh ( double_9 ) ;
				}
			}
			double_5 = atan2 ( double_10 , double_2 ) ;
		}
	}
	if(1)
	{
		double_11 = exp ( double_5 ) ;
	}
	else
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		double double_9 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_3 = 1;
		int int_8 = 1;
		short short_6 = 1;
		long long_3 = 1;
		double double_11 = 1;
		double double_13 = 1;
		long long_2 = 1;
		int int_9 = 1;
		int int_7 = 1;
		short short_5 = 1;
		double double_10 = 1;
		short short_7 = 1;
		int int_10 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_6 = 1;
		char_3 = char_2 * char_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		double double_9 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_3 = 1;
		int int_8 = 1;
		short short_6 = 1;
		long long_3 = 1;
		double double_11 = 1;
		double double_13 = 1;
		long long_2 = 1;
		int int_9 = 1;
		int int_7 = 1;
		short short_5 = 1;
		double double_10 = 1;
		short short_7 = 1;
		int int_10 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_6 = 1;
		if(1)
		{
			char_1 = char_4;
			double_3 = tan ( double_5 ) ;
		}
		else
		{
			char_1 = char_4;
		}
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_6 = 1;
				int int_2 = 1;
				int int_3 = 1;
				short short_2 = 1;
				double double_7 = 1;
				double double_8 = 1;
				int int_4 = 1;
				int int_5 = 1;
				long long_1 = 1;
				double double_9 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_6 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float float_3 = 1;
				int int_8 = 1;
				short short_6 = 1;
				long long_3 = 1;
				double double_11 = 1;
				double double_13 = 1;
				long long_2 = 1;
				int int_9 = 1;
				int int_7 = 1;
				short short_5 = 1;
				double double_10 = 1;
				short short_7 = 1;
				int int_10 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_3 = 1;
				char char_4 = 1;
				float float_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				unsigned int unsigned_int_6 = 1;
				long_3 = long_4;
			}
		}
		if(1)
		{
			if(1)
			{
				int_8 = int_2 * int_8;
			}
		}
		float_4 = float_1 + float_1;
	}
	else
	{
		double_9 = ldexp ( double_13 , int_1 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		double double_9 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_3 = 1;
		int int_8 = 1;
		short short_6 = 1;
		long long_3 = 1;
		double double_11 = 1;
		double double_13 = 1;
		long long_2 = 1;
		int int_9 = 1;
		int int_7 = 1;
		short short_5 = 1;
		double double_10 = 1;
		short short_7 = 1;
		int int_10 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_6 = 1;
		long_5 = long_6;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_6 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		double double_9 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_3 = 1;
		int int_8 = 1;
		short short_6 = 1;
		long long_3 = 1;
		double double_11 = 1;
		double double_13 = 1;
		long long_2 = 1;
		int int_9 = 1;
		int int_7 = 1;
		short short_5 = 1;
		double double_10 = 1;
		short short_7 = 1;
		int int_10 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_2;
	}
	return int_6;
}
int unzGoToFirstFile2( long parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_6,char parameter_7,float parameter_8,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int_2 = int_1 * int_1;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_25[5];
	fgets(controller4vul_25 ,6 ,stdin);
	if( strcmp( controller4vul_25, "{7CvU") > 0)
	{
		int_2 = unz64local_GetCurrentFileInfoInternal(double_1,double_1,short_1,char_1,short_2,float_1,char_1,short_2,uni_para);

		return int_1;
	}
	double_1 = log ( double_2 ) ;
	double_2 = fmod ( double_1 , double_3 ) ;
	char_2 = char_2 * char_1;
	double_2 = asin ( double_3 ) ;
	char_1 = char_1;
	if(1)
	{
		double_1 = acos ( double_1 ) ;
	}
	return int_1;
}
float unzGoToFirstFile( int parameter_1)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_2 = 1;
	return float_1;
	int_1 = unzGoToFirstFile2(long_1,char_1,char_2,int_1,int_1,char_2,float_2,318);

}
long unz64local_getLong64( double parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = cosh ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = ceil ( double_1 ) ;
	int_3 = int_1 * int_2;
	double_3 = double_1 + double_2;
	if(1)
	{
		double_4 = ldexp ( double_4 , int_1 ) ;
	}
	short_1 = unz64local_getByte(unsigned_int_2,unsigned_int_1,int_4);

	double_1 = acos ( double_5 ) ;
	if(1)
	{
		double_1 = ceil ( double_2 ) ;
	}
	unsigned_int_3 = unsigned_int_3;
	if(1)
	{
		double_5 = pow ( double_6 , double_6 ) ;
	}
	double_1 = fmod ( double_4 , double_6 ) ;
	if(1)
	{
		double_1 = sqrt ( double_6 ) ;
	}
	unsigned_int_4 = unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		int int_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_3 = unsigned_int_5;
	}
	double_2 = ldexp ( double_5 , int_2 ) ;
	if(1)
	{
		double_2 = log10 ( double_3 ) ;
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		int_2 = int_2;
	}
	double_5 = cosh ( double_6 ) ;
	if(1)
	{
		double_1 = double_3 + double_4;
	}
	else
	{
		double_1 = cos ( double_2 ) ;
	}
	return long_1;
}
float unz64local_SearchCentralDir64( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long_1 = unz64local_getLong64(double_1,unsigned_int_1,unsigned_int_1);

	double_1 = log10 ( double_2 ) ;
	int_1 = unz64local_getLong(short_1,long_2,long_3);

	double_3 = ldexp ( double_4 , int_1 ) ;
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_2;
	}
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_2;
	}
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_2;
	}
	if(1)
	{
		return float_3;
	}
	if(1)
	{
		return float_4;
	}
	if(1)
	{
		return float_2;
	}
	return float_4;
	int_1 = uLong();

}
short unz64local_getShort( char parameter_1,float parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int_1 = uLong();

	double_1 = tanh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_1 = ldexp ( double_3 , int_1 ) ;
	double_3 = pow ( double_3 , double_2 ) ;
	double_3 = sinh ( double_1 ) ;
	if(1)
	{
		double_2 = ceil ( double_4 ) ;
	}
	short_1 = unz64local_getByte(unsigned_int_1,unsigned_int_1,int_2);

	double_2 = tanh ( double_1 ) ;
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double_2 = cosh ( double_5 ) ;
	}
	else
	{
		double_3 = floor ( double_4 ) ;
	}
	return short_2;
}
short unz64local_getByte( unsigned int parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = asin ( double_2 ) ;
	float_1 = int(long_1);

	double_1 = fabs ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		return short_1;
	}
	double_4 = ldexp ( double_4 , int_1 ) ;
	if(1)
	{
		return short_2;
	}
	return short_2;
}
int unz64local_getLong( short parameter_1,long parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_3 = int_1 * int_2;
	int_3 = uLong();

	double_1 = asin ( double_1 ) ;
	float_1 = float_1;
	double_2 = asin ( double_2 ) ;
	double_2 = pow ( double_1 , double_2 ) ;
	if(1)
	{
		double_3 = floor ( double_4 ) ;
	}
	double_2 = tanh ( double_4 ) ;
	if(1)
	{
		int_1 = int_3 * int_3;
	}
	double_4 = double_1 + double_4;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double_5 = double_1 * double_3;
	}
	double_4 = ldexp ( double_1 , int_2 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 + char_1;
	}
	else
	{
		double_1 = double_3;
	}
	return int_2;
	short_1 = unz64local_getByte(unsigned_int_1,unsigned_int_2,int_2);

}
double unz64local_SearchCentralDir( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = tan ( double_2 ) ;
	double_3 = ceil ( double_4 ) ;
	float_1 = float_2;
	double_1 = double_4;
	double_3 = double_2;
	int_1 = uLong();

	unsigned_int_1 = unsigned_int_1;
	int_2 = int_2;
	double_2 = double_2 + double_2;
	double_5 = fmod ( double_4 , double_2 ) ;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		double_3 = fmod ( double_4 , double_5 ) ;
		return double_5;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	if(1)
	{
		double_6 = ldexp ( double_6 , int_3 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			double_4 = ldexp ( double_6 , int_2 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_6 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_4 * int_2;
		}
		double_2 = log10 ( double_5 ) ;
		double_6 = double_5 + double_1;
		if(1)
		{
		}
		if(1)
		{
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
				double_4 = double_2;
			}
			if(1)
			{
			}
		}
	}
	double_4 = double_3 + double_6;
	return double_3;
}
float ferror_file_func( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		return float_1;
	}
	int_1 = int_2;
	double_1 = log10 ( double_2 ) ;
	return float_1;
}
char fclose_file_func( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = cosh ( double_1 ) ;
	double_1 = log10 ( double_2 ) ;
	if(1)
	{
		return char_1;
	}
	double_2 = asin ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	int_2 = int_1 + int_2;
	double_3 = log ( double_4 ) ;
	return char_2;
}
long fseek64_file_func( unsigned int parameter_1,float parameter_2,double parameter_3,int parameter_4)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = tan ( double_1 ) ;
	float_2 = float_1 * float_1;
	double_1 = log10 ( double_1 ) ;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "cztn") > 0)
	{
		return long_1;
	}
	int_1 = int_1 + int_1;
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short_1 = short_2;
		short_3 = short_2;
		unsigned_int_1 = unsigned_int_1;
		return long_2;
	}
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = fmod ( double_2 , double_3 ) ;
	}
	return long_3;
}
float ftell64_file_func( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double_1 = ceil ( double_1 ) ;
	double_2 = acos ( double_3 ) ;
	if(1)
	{
		return float_1;
	}
	double_1 = log10 ( double_3 ) ;
	double_1 = ldexp ( double_2 , int_1 ) ;
	return float_2;
}
double fwrite_file_func( char parameter_1,short parameter_2,char parameter_3,char parameter_4)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int_1 = uLong();

	long_1 = long_2;
	double_1 = atan2 ( double_2 , double_2 ) ;
	if(1)
	{
		return double_2;
	}
	int_1 = int_2;
	double_2 = pow ( double_3 , double_3 ) ;
	return double_2;
}
unsigned int fread_file_func( char parameter_1,short parameter_2,char parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = tan ( double_1 ) ;
	double_2 = log10 ( double_2 ) ;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "/Ym") > 0)
	{
		return unsigned_int_1;
	}
	double_2 = fmod ( double_1 , double_2 ) ;
	int_1 = uLong();

	double_1 = pow ( double_1 , double_3 ) ;
	return unsigned_int_2;
}
short fopendisk64_file_func( float parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char_1 = fopen64_file_func(long_1,unsigned_int_1,int_1);

	char_1 = char_2;
	short_1 = short_1;
	short_1 = short_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		return short_1;
	}
	long_3 = long_2 + long_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		double_1 = log ( double_2 ) ;
	}
	if(1)
	{
		double_2 = pow ( double_1 , double_2 ) ;
	}
	double_3 = log ( double_3 ) ;
	return short_2;
	float_1 = voidpf();

}
char file_build_ioposix( float parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char_1 = char_1 * char_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "mn") < 0)
	{
		return char_2;
	}
	int_1 = int_1 + int_2;
	float_1 = voidpf();

	double_1 = log ( double_1 ) ;
	double_2 = tanh ( double_3 ) ;
	double_2 = atan2 ( double_3 , double_3 ) ;
	double_2 = ldexp ( double_3 , int_2 ) ;
	return char_3;
}
char fopen64_file_func( long parameter_1,unsigned int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
		double_1 = log ( double_1 ) ;
	}
	if(1)
	{
		char_1 = file_build_ioposix(float_1,float_1);

		double_1 = double_1;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	}
	if(1)
	{
		int_1 = int_1 + int_1;
		return char_1;
	}
	return char_1;
}
void fill_fopen64_filefunc( short parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	float float_3 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_4 = 1;
	short_1 = fopendisk64_file_func(float_1,float_1,int_1,int_1);

	char_1 = fclose_file_func(float_2,long_1);

	float_3 = ferror_file_func(long_2,float_3);

	int_1 = int_1;
	double_1 = pow ( double_1 , double_1 ) ;
	unsigned_int_1 = fread_file_func(char_1,short_2,char_2);

	double_1 = ceil ( double_1 ) ;
	double_2 = double_3;
	double_1 = fwrite_file_func(char_1,short_3,char_2,char_1);

	double_4 = cos ( double_2 ) ;
	int_1 = int_1;
	long_2 = fseek64_file_func(unsigned_int_2,float_2,double_1,int_1);

	double_4 = tan ( double_3 ) ;
	int_1 = int_1 + int_2;
	char_3 = fopen64_file_func(long_3,unsigned_int_1,int_2);

	float_2 = ftell64_file_func(float_1,float_4);

	double_2 = asin ( double_2 ) ;
}
void unzOpenInternal( unsigned int parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	short short_2 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_2 = 1;
	double double_9 = 1;
	short short_3 = 1;
	double double_10 = 1;
	float float_2 = 1;
	char char_4 = 1;
	double double_11 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_12 = 1;
	double double_13 = 1;
	double double_14 = 1;
	double double_16 = 1;
	long long_4 = 1;
	double double_18 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_15 = 1;
	char char_5 = 1;
	int int_4 = 1;
	double double_17 = 1;
	unsigned int unsigned_int_7 = 1;
	double_1 = acos ( double_2 ) ;
	double_2 = cos ( double_3 ) ;
	double_4 = ldexp ( double_4 , int_1 ) ;
	long_1 = unz64local_getLong64(double_2,unsigned_int_1,unsigned_int_2);

	double_1 = double_2;
	short_1 = unz64local_getShort(char_1,float_1,unsigned_int_3);

	double_5 = double_1;
	short_1 = short_2;
	double_1 = sinh ( double_2 ) ;
	double_1 = exp ( double_6 ) ;
	double_3 = pow ( double_5 , double_6 ) ;
	if(1)
	{
	}
	double_1 = tanh ( double_3 ) ;
	char_2 = char_3;
	double_3 = double_6 + double_7;
	float_1 = voidpf();

	double_7 = unz64local_SearchCentralDir(short_2,float_1);

	double_1 = atan2 ( double_8 , double_5 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		double double_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		double double_9 = 1;
		short short_3 = 1;
		double double_10 = 1;
		float float_2 = 1;
		char char_4 = 1;
		double double_11 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_12 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_16 = 1;
		long long_4 = 1;
		double double_18 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_15 = 1;
		char char_5 = 1;
		int int_4 = 1;
		double double_17 = 1;
		unsigned int unsigned_int_7 = 1;
		long_2 = long_3;
	}
	else
	{
		double_9 = double_9;
	}
	double_5 = sqrt ( double_9 ) ;
	if(1)
	{
	}
	fill_fopen64_filefunc(short_3);

	double_8 = asin ( double_10 ) ;
	double_3 = sqrt ( double_8 ) ;
	float_1 = unz64local_SearchCentralDir64(float_2,unsigned_int_2,char_4);

	double_10 = cos ( double_11 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		short short_2 = 1;
		double double_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		double double_9 = 1;
		short short_3 = 1;
		double double_10 = 1;
		float float_2 = 1;
		char char_4 = 1;
		double double_11 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_12 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_16 = 1;
		long long_4 = 1;
		double double_18 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_15 = 1;
		char char_5 = 1;
		int int_4 = 1;
		double double_17 = 1;
		unsigned int unsigned_int_7 = 1;
		if(1)
		{
			double_2 = log ( double_3 ) ;
		}
		if(1)
		{
			double_4 = log ( double_9 ) ;
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1 + unsigned_int_3;
		}
		float_3 = unzGoToFirstFile(int_2);

		int_1 = int_3;
		if(1)
		{
			double_7 = floor ( double_11 ) ;
		}
		unsigned_int_4 = unsigned_int_4;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			short short_2 = 1;
			double double_6 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			double double_9 = 1;
			short short_3 = 1;
			double double_10 = 1;
			float float_2 = 1;
			char char_4 = 1;
			double double_11 = 1;
			float float_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_12 = 1;
			double double_13 = 1;
			double double_14 = 1;
			double double_16 = 1;
			long long_4 = 1;
			double double_18 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			char char_5 = 1;
			int int_4 = 1;
			double double_17 = 1;
			unsigned int unsigned_int_7 = 1;
			float_4 = float_3;
		}
		double_12 = double_8 * double_5;
		if(1)
		{
			double_9 = sinh ( double_5 ) ;
		}
		double_4 = tan ( double_2 ) ;
		if(1)
		{
			double_4 = double_8;
		}
		if(1)
		{
			int_2 = uLong();

			double_2 = sqrt ( double_7 ) ;
		}
		double_8 = sqrt ( double_13 ) ;
		if(1)
		{
			unsigned_int_5 = unsigned_int_3 + unsigned_int_2;
		}
		double_13 = fmod ( double_10 , double_6 ) ;
		if(1)
		{
			double_4 = asin ( double_9 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			short short_2 = 1;
			double double_6 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			double double_9 = 1;
			short short_3 = 1;
			double double_10 = 1;
			float float_2 = 1;
			char char_4 = 1;
			double double_11 = 1;
			float float_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_12 = 1;
			double double_13 = 1;
			double double_14 = 1;
			double double_16 = 1;
			long long_4 = 1;
			double double_18 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			char char_5 = 1;
			int int_4 = 1;
			double double_17 = 1;
			unsigned int unsigned_int_7 = 1;
			char_1 = char_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_2;
				double_14 = floor ( double_13 ) ;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					int int_1 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					short short_1 = 1;
					char char_1 = 1;
					float float_1 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_5 = 1;
					short short_2 = 1;
					double double_6 = 1;
					char char_2 = 1;
					char char_3 = 1;
					double double_7 = 1;
					double double_8 = 1;
					long long_2 = 1;
					double double_9 = 1;
					short short_3 = 1;
					double double_10 = 1;
					float float_2 = 1;
					char char_4 = 1;
					double double_11 = 1;
					float float_3 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_12 = 1;
					double double_13 = 1;
					double double_14 = 1;
					double double_16 = 1;
					long long_4 = 1;
					double double_18 = 1;
					long long_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					float float_4 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_15 = 1;
					char char_5 = 1;
					int int_4 = 1;
					double double_17 = 1;
					unsigned int unsigned_int_7 = 1;
					double_9 = double_5 * double_15;
				}
				if(1)
				{
					double_14 = exp ( double_12 ) ;
				}
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					int int_1 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					short short_1 = 1;
					char char_1 = 1;
					float float_1 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_5 = 1;
					short short_2 = 1;
					double double_6 = 1;
					char char_2 = 1;
					char char_3 = 1;
					double double_7 = 1;
					double double_8 = 1;
					long long_2 = 1;
					double double_9 = 1;
					short short_3 = 1;
					double double_10 = 1;
					float float_2 = 1;
					char char_4 = 1;
					double double_11 = 1;
					float float_3 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_12 = 1;
					double double_13 = 1;
					double double_14 = 1;
					double double_16 = 1;
					long long_4 = 1;
					double double_18 = 1;
					long long_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					float float_4 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_15 = 1;
					char char_5 = 1;
					int int_4 = 1;
					double double_17 = 1;
					unsigned int unsigned_int_7 = 1;
					char_5 = char_3 * char_3;
				}
				if(1)
				{
					double_10 = asin ( double_6 ) ;
				}
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					int int_1 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					short short_1 = 1;
					char char_1 = 1;
					float float_1 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_5 = 1;
					short short_2 = 1;
					double double_6 = 1;
					char char_2 = 1;
					char char_3 = 1;
					double double_7 = 1;
					double double_8 = 1;
					long long_2 = 1;
					double double_9 = 1;
					short short_3 = 1;
					double double_10 = 1;
					float float_2 = 1;
					char char_4 = 1;
					double double_11 = 1;
					float float_3 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_12 = 1;
					double double_13 = 1;
					double double_14 = 1;
					double double_16 = 1;
					long long_4 = 1;
					double double_18 = 1;
					long long_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					float float_4 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_15 = 1;
					char char_5 = 1;
					int int_4 = 1;
					double double_17 = 1;
					unsigned int unsigned_int_7 = 1;
					double_6 = ldexp ( double_16 , int_4 ) ;
				}
				if(1)
				{
					unsigned_int_5 = unsigned_int_1;
				}
				if(1)
				{
					long_2 = long_4 + long_4;
				}
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					int int_1 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					short short_1 = 1;
					char char_1 = 1;
					float float_1 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_5 = 1;
					short short_2 = 1;
					double double_6 = 1;
					char char_2 = 1;
					char char_3 = 1;
					double double_7 = 1;
					double double_8 = 1;
					long long_2 = 1;
					double double_9 = 1;
					short short_3 = 1;
					double double_10 = 1;
					float float_2 = 1;
					char char_4 = 1;
					double double_11 = 1;
					float float_3 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_12 = 1;
					double double_13 = 1;
					double double_14 = 1;
					double double_16 = 1;
					long long_4 = 1;
					double double_18 = 1;
					long long_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					float float_4 = 1;
					unsigned int unsigned_int_6 = 1;
					double double_15 = 1;
					char char_5 = 1;
					int int_4 = 1;
					double double_17 = 1;
					unsigned int unsigned_int_7 = 1;
					int_1 = unz64local_getLong(short_2,long_1,long_1);

					double_17 = double_9 + double_9;
				}
				if(1)
				{
					double_3 = log10 ( double_10 ) ;
				}
				if(1)
				{
					unsigned_int_6 = unsigned_int_1 * unsigned_int_4;
				}
				if(1)
				{
					double_7 = sqrt ( double_9 ) ;
				}
				if(1)
				{
					double_8 = atan2 ( double_10 , double_12 ) ;
				}
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				char char_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_5 = 1;
				short short_2 = 1;
				double double_6 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_2 = 1;
				double double_9 = 1;
				short short_3 = 1;
				double double_10 = 1;
				float float_2 = 1;
				char char_4 = 1;
				double double_11 = 1;
				float float_3 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_12 = 1;
				double double_13 = 1;
				double double_14 = 1;
				double double_16 = 1;
				long long_4 = 1;
				double double_18 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				float float_4 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_15 = 1;
				char char_5 = 1;
				int int_4 = 1;
				double double_17 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned_int_6 = unsigned_int_7;
			}
		}
	}
	else
	{
		double_4 = ldexp ( double_5 , int_3 ) ;
	}
	if(1)
	{
		double_10 = floor ( double_18 ) ;
	}
	if(1)
	{
		double_4 = tanh ( double_3 ) ;
	}
	if(1)
	{
		double_6 = cosh ( double_1 ) ;
		if(1)
		{
			double_9 = sqrt ( double_12 ) ;
		}
	}
	double_13 = exp ( double_13 ) ;
	long_4 = long_1;
	double_4 = floor ( double_16 ) ;
	double_18 = cosh ( double_1 ) ;
	if(1)
	{
		double_14 = acos ( double_10 ) ;
		short_2 = short_3 * short_3;
	}
}
short unzOpen2_64( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double_2 = double_1 * double_1;
		unsigned_int_1 = unsigned_int_2;
		unzOpenInternal(unsigned_int_3,unsigned_int_1);

		double_1 = sinh ( double_2 ) ;
		long_1 = long_1;
		return short_1;
	}
	return short_2;
}
long win32_error_file_func( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double_1 = pow ( double_1 , double_1 ) ;
	if(1)
	{
		return long_1;
	}
	double_2 = atan ( double_1 ) ;
	return long_2;
}
void win32_close_file_func( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	char_1 = char_1 * char_1;
	if(1)
	{
	}
	double_1 = double_2;
	if(1)
	{
		double_1 = exp ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long_1 = long_1;
		double_2 = sqrt ( double_3 ) ;
	}
	double_1 = exp ( double_2 ) ;
}
char win32_seek64_file_func( long parameter_1,double parameter_2,unsigned int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_2;
	float_1 = int(long_1);

	double_2 = cos ( double_2 ) ;
	double_1 = ceil ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_3 = pow ( double_2 , double_2 ) ;
		double_1 = exp ( double_2 ) ;
		int_2 = int_1 + int_2;
		return char_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int_2 = int_3;
		double_4 = ceil ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			long long_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			char char_1 = 1;
			long long_2 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_2 = cosh ( double_2 ) ;
			char_1 = win32_setfilepointer_internal(float_1,long_2,char_2,double_2);

			double_5 = fabs ( double_2 ) ;
			double_4 = atan ( double_4 ) ;
		}
		else
		{
			double_4 = log10 ( double_3 ) ;
		}
	}
	return char_1;
}
char win32_setfilepointer_internal( float parameter_1,long parameter_2,char parameter_3,double parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char_1 = char_2;
	double_1 = tan ( double_1 ) ;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		long_1 = long_2;
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_1 = pow ( double_2 , double_3 ) ;
	}
	return char_1;
}
char win32_tell64_file_func( short parameter_1,float parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	char char_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	char_1 = win32_setfilepointer_internal(float_1,long_1,char_2,double_1);

	long_1 = long_1;
	float_2 = float_3;
	if(1)
	{
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float_3 = int(long_1);

		float_3 = float_4;
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "?") < 0)
	{
		char char_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double_2 = asin ( double_3 ) ;
		int_1 = int_1 + int_1;
		if(1)
		{
			char char_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double_4 = log ( double_1 ) ;
			char_3 = char_1 + char_3;
			char_2 = char_3 + char_4;
		}
		else
		{
			char char_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			char char_3 = 1;
			char char_4 = 1;
			char char_5 = 1;
			char_2 = char_5;
		}
	}
	return char_2;
}
long win32_write_file_func( short parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char_2 = char_1 * char_2;
	int_1 = uLong();

	double_1 = double_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_1 = 1;
		int int_2 = 1;
		double_1 = cosh ( double_2 ) ;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			double double_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			short short_1 = 1;
			int int_2 = 1;
			char_3 = char_4;
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				int int_1 = 1;
				double double_1 = 1;
				long long_1 = 1;
				float float_1 = 1;
				long long_2 = 1;
				double double_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				short short_1 = 1;
				int int_2 = 1;
				int_2 = int_1 * int_1;
			}
			short_1 = short_1;
		}
	}
	return long_1;
	float_1 = int(long_2);

}
float int( long parameter_1)
{
	float float_1 = 1;
	return float_1;
}
int uLong()
{
	int int_1 = 1;
	return int_1;
}
double win32_read_file_func( long parameter_1,short parameter_2,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double_2 = double_1 * double_2;
	double_2 = double_2;
	if(1)
	{
		double_1 = ceil ( double_1 ) ;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			long long_1 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			float_1 = int(long_1);

			double_2 = double_1;
			if(1)
			{
				double_2 = pow ( double_3 , double_1 ) ;
			}
			double_4 = exp ( double_3 ) ;
		}
	}
	return double_3;
	int_1 = uLong();

}
long win32_opendisk64_file_funcA( char parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double_1 = pow ( double_2 , double_1 ) ;
	int_1 = int_1;
	double_3 = exp ( double_2 ) ;
	double_3 = asin ( double_2 ) ;
	if(1)
	{
		return long_1;
	}
	short_1 = short_1;
	float_1 = float_1 * float_1;
	float_1 = voidpf();

	char_2 = char_1 * char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
		double_4 = atan ( double_5 ) ;
	}
	if(1)
	{
		double_3 = ldexp ( double_3 , int_1 ) ;
	}
	double_5 = double_1 * double_4;
	return long_2;
	unsigned_int_1 = win32_open64_file_funcA(double_1,double_3,int_2);

}
float voidpf()
{
	float float_1 = 1;
	return float_1;
}
float win32_build_iowin()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double_1 = double_1 + double_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double_1 = log ( double_2 ) ;
		if(1)
		{
			float_1 = voidpf();

			double_2 = cosh ( double_1 ) ;
			return float_2;
		}
		double_1 = floor ( double_1 ) ;
		double_1 = cosh ( double_3 ) ;
	}
	return float_1;
}
char win32_translate_open_mode( int parameter_1,float parameter_2,float parameter_3,short parameter_4,unsigned int parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	float_1 = float_2;
	if(1)
	{
		double_1 = sinh ( double_1 ) ;
		double_1 = cosh ( double_1 ) ;
		double_1 = acos ( double_1 ) ;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		double_2 = acos ( double_3 ) ;
		short_1 = short_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_3 = ldexp ( double_1 , int_1 ) ;
	}
}
unsigned int win32_open64_file_funcA( double parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double_1 = double_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_3 = 1;
		looper_1 += 1;
		if(1)
		{
			double_3 = ceil ( double_1 ) ;
			return unsigned_int_1;
		}
		double_4 = log ( double_3 ) ;
		if(1)
		{
		}
		if(1)
		{
		}
		short_1 = short_1 * short_1;
		if(1)
		{
			float_1 = win32_build_iowin();

			double_3 = log ( double_1 ) ;
		}
		double_5 = sinh ( double_6 ) ;
		int_1 = int_2;
		char controller_5[5];
		fgets(controller_5 ,5 ,stdin);
		if( strcmp( controller_5, "9xj(") > 0)
		{
			double_6 = tanh ( double_5 ) ;
			return unsigned_int_2;
		}
		char_1 = win32_translate_open_mode(int_2,float_2,float_1,short_2,unsigned_int_3);

		int_1 = int_3;
	}
	return unsigned_int_4;
}
void fill_win32_filefunc64A( float parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_4 = 1;
	float float_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_1 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_6 = 1;
	short_2 = short_1 + short_1;
	double_1 = log10 ( double_2 ) ;
	double_2 = log ( double_2 ) ;
	double_1 = win32_read_file_func(long_1,short_2,short_3);

	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1;
	long_2 = win32_write_file_func(short_3,unsigned_int_2,char_1,char_2);

	char_2 = win32_tell64_file_func(short_4,float_1);

	long_4 = long_2 + long_3;
	int_1 = int_1;
	unsigned_int_2 = win32_open64_file_funcA(double_1,double_1,int_1);

	long_1 = long_5 * long_1;
	win32_close_file_func(unsigned_int_3,double_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
	long_1 = win32_opendisk64_file_funcA(char_1,int_2,int_2,int_3);

	char_3 = win32_seek64_file_func(long_5,double_3,unsigned_int_1,int_4);

	long_6 = win32_error_file_func(short_1,char_3);

}
void do_help()
{
	char char_1 = 1;
	char char_2 = 1;
	char_2 = char_1 * char_1;
}
void do_banner()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	int_3 = int_1 + int_2;
}
int main(int argc, const char *argv[])
{
	int uni_para =299;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	double double_6 = 1;
	long long_2 = 1;
	double double_7 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_5 = 1;
	double double_8 = 1;
	short short_4 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_7 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_3 = log10 ( double_1 ) ;
	char_1 = char_2;
	char_2 = char_1;
	double_4 = double_1 + double_2;
	double_4 = double_2 * double_3;
	char_2 = char_3 + char_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = double_5;
	long_1 = long_1 + long_1;
	double_6 = atan ( double_6 ) ;
	double_3 = double_2 * double_1;
	long_2 = long_2 + long_2;
	if(1)
	{
		char_1 = char_3;
		double_4 = double_1 + double_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_21[1];
		fgets(controller4vul_21 ,2 ,stdin);
		if( strcmp( controller4vul_21, "Y") > 0)
		{
			double_5 = log10 ( double_3 ) ;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				double_1 = double_7;
				char controller4vul_22[4];
				fgets(controller4vul_22 ,5 ,stdin);
				if( strcmp( controller4vul_22, "BN=h") == 0)
				{
					int_1 = do_extract_onefile(unsigned_int_3,short_1,int_1,int_2,int_1,uni_para);

					double_2 = double_1;
				}
				if(1)
				{
					double_1 = fabs ( double_6 ) ;
				}
				if(1)
				{
					double_4 = tanh ( double_5 ) ;
				}
				if(1)
				{
					unsigned_int_4 = unsigned_int_2;
				}
				if(1)
				{
					double_3 = atan ( double_2 ) ;
				}
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_4 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_5 = 1;
					long long_1 = 1;
					double double_6 = 1;
					long long_2 = 1;
					double double_7 = 1;
					int int_1 = 1;
					unsigned int unsigned_int_3 = 1;
					short short_1 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_4 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					unsigned int unsigned_int_6 = 1;
					float float_1 = 1;
					short short_2 = 1;
					short short_3 = 1;
					int int_3 = 1;
					int int_5 = 1;
					double double_8 = 1;
					short short_4 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_7 = 1;
					double_2 = double_6 + double_5;
					float_1 = float_1 * float_1;
				}
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_4 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_5 = 1;
					long long_1 = 1;
					double double_6 = 1;
					long long_2 = 1;
					double double_7 = 1;
					int int_1 = 1;
					unsigned int unsigned_int_3 = 1;
					short short_1 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_4 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					unsigned int unsigned_int_6 = 1;
					float float_1 = 1;
					short short_2 = 1;
					short short_3 = 1;
					int int_3 = 1;
					int int_5 = 1;
					double double_8 = 1;
					short short_4 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_7 = 1;
					double_4 = tanh ( double_4 ) ;
					short_3 = short_2 + short_1;
				}
			}
		}
		else
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_4 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_5 = 1;
				long long_1 = 1;
				double double_6 = 1;
				long long_2 = 1;
				double double_7 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				float float_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				int int_3 = 1;
				int int_5 = 1;
				double double_8 = 1;
				short short_4 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_7 = 1;
				int_5 = int_3 + int_4;
			}
			if(1)
			{
				long_2 = long_2;
			}
		}
	}
	if(1)
	{
		char_1 = char_2;
		double_2 = tanh ( double_6 ) ;
		double_2 = log10 ( double_6 ) ;
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			double double_6 = 1;
			long long_2 = 1;
			double double_7 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			int int_5 = 1;
			double double_8 = 1;
			short short_4 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_7 = 1;
			double_8 = fabs ( double_1 ) ;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		double double_6 = 1;
		long long_2 = 1;
		double double_7 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_5 = 1;
		double double_8 = 1;
		short short_4 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_7 = 1;
		short_4 = short_1 + short_1;
		return int_1;
	}
	unsigned_int_5 = unsigned_int_6;
	if(1)
	{
		unsigned_int_3 = unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			double double_6 = 1;
			long long_2 = 1;
			double double_7 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			int int_5 = 1;
			double double_8 = 1;
			short short_4 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_7 = 1;
			double_5 = double_4 * double_4;
			double_9 = asin ( double_9 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			double double_6 = 1;
			long long_2 = 1;
			double double_7 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int int_3 = 1;
			int int_5 = 1;
			double double_8 = 1;
			short short_4 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_4 = unsigned_int_7;
		}
		else
		{
			long_1 = long_1;
		}
	}
	double_7 = exp ( double_6 ) ;
	return int_4;
}
