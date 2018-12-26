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

void parr_free( float parameter_1);
void arr_free( long parameter_1);
float parse_table_cell( float parameter_1,float parameter_2,char parameter_3,long parameter_4,int parameter_5);
int parse_table_row( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5,long parameter_6,int parameter_7);
int parse_table( float parameter_1,double parameter_2,char parameter_3,float parameter_4,int uni_para);
unsigned int is_table_sep( char parameter_1,double parameter_2);
double is_tableline( char parameter_1,unsigned int parameter_2);
unsigned int prefix_oli( char parameter_1,unsigned int parameter_2);
int parse_listitem( char parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5);
void parse_list( unsigned int parameter_1,float parameter_2,char parameter_3,char parameter_4,int parameter_5);
void prefix_uli( char parameter_1,double parameter_2);
void parse_blockcode( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4);
char prefix_code( char parameter_1,unsigned int parameter_2);
float parse_blockquote( float parameter_1,short parameter_2,char parameter_3,short parameter_4);
short prefix_quote( char parameter_1,long parameter_2);
int htmlblock_end( long parameter_1,char parameter_2,short parameter_3);
char cmp_html_tag( int parameter_1,double parameter_2);
short find_block_tag( char parameter_1,unsigned int parameter_2);
long parse_htmlblock( long parameter_1,float parameter_2,char parameter_3,int parameter_4);
void is_hrule( char parameter_1,short parameter_2);
unsigned int is_headerline( char parameter_1,unsigned int parameter_2);
short is_empty( char parameter_1,float parameter_2);
char parse_paragraph( int parameter_1,short parameter_2,char parameter_3,char parameter_4);
double parse_atxheader( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4);
short parse_block( int parameter_1,double parameter_2,char parameter_3,long parameter_4,int uni_para);
char cmp_link_ref_sort( char parameter_1,double parameter_2);
unsigned int arr_realloc( long parameter_1,int parameter_2);
int arr_grow( float parameter_1,int parameter_2);
int arr_newitem( char parameter_1);
short arr_item( long parameter_1,int parameter_2);
void bufrelease( int parameter_1);
short is_ref( char parameter_1,char parameter_2,char parameter_3,unsigned int parameter_4,double parameter_5);
long char_entity( unsigned int parameter_1,short parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5);
short char_escape( char parameter_1,char parameter_2,char parameter_3,short parameter_4,unsigned int parameter_5);
char is_mail_autolink( char parameter_1,float parameter_2);
double tag_length( char parameter_1,char parameter_2,unsigned int parameter_3);
short char_langle_tag( int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4,unsigned int parameter_5);
double lower( char parameter_1);
int bufcasecmp( char parameter_1,int parameter_2);
short cmp_link_ref();
unsigned int arr_sorted_find( short parameter_1,char parameter_3);
void bufputc( unsigned int parameter_1,char parameter_2);
char build_ref_id( double parameter_1,short parameter_2,float parameter_3);
float get_link_ref( short parameter_1,short parameter_2,char parameter_3,char parameter_4,char parameter_5);
int get_link_inline( short parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4);
char char_link( short parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,char parameter_5);
unsigned int char_linebreak( short parameter_1,long parameter_2,char parameter_3,short parameter_4,char parameter_5);
double char_codespan( long parameter_1,int parameter_2,char parameter_3,long parameter_4,unsigned int parameter_5);
int parse_emph3( long parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5);
float parse_emph2( int parameter_1,double parameter_2,char parameter_3,float parameter_4,char parameter_5);
double release_work_buffer( int parameter_1,int parameter_2);
void bufput( double parameter_1,char parameter_2,double parameter_3);
long parse_inline( short parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4);
char parr_realloc( short parameter_1,int parameter_2,int uni_para);
int parr_grow( float parameter_1,int parameter_2,int uni_para);
int parr_push( char parameter_1,int uni_para);
char new_work_buffer( long parameter_1,int uni_para);
unsigned int find_emph_char( char parameter_1,double parameter_2,char parameter_3);
void parse_emph1( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,char parameter_5);
char char_emphasis( short parameter_1,char parameter_2,char parameter_3,int parameter_4,short parameter_5);
void parr_init( double parameter_1);
void arr_init( float parameter_1,long parameter_2);
void markdown( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,int uni_para);
int bufgrow( float parameter_1,long parameter_2);
void bufnew();
void usage( double parameter_1,double parameter_2);
void parr_free( float parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	float_1 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = tanh ( double_2 ) ;
}
void arr_free( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	double_1 = acos ( double_2 ) ;
	double_3 = exp ( double_2 ) ;
	double_4 = cosh ( double_4 ) ;
}
float parse_table_cell( float parameter_1,float parameter_2,char parameter_3,long parameter_4,int parameter_5)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	long_1 = parse_inline(short_1,short_2,char_1,unsigned_int_1);

	double_1 = acos ( double_2 ) ;
	double_2 = release_work_buffer(int_1,int_2);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_1 * double_3;
	double_1 = asin ( double_3 ) ;
	char_2 = new_work_buffer(long_1,762);

}
int parse_table_row( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,unsigned int parameter_4,int parameter_5,long parameter_6,int parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_1;
	int_2 = int_1 + int_1;
	double_1 = ldexp ( double_2 , int_3 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_1 = log ( double_2 ) ;
	}
	if(1)
	{
		int_3 = int_1;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		float float_3 = 1;
		int int_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		looper_2 += 1;
		unsigned_int_3 = unsigned_int_2;
		if(1)
		{
			char_1 = char_2;
			char_1 = new_work_buffer(long_1,181);

			double_2 = release_work_buffer(int_4,int_1);

			double_3 = double_4;
		}
		int looper_3 = 0;
		while(looper_3 < 1)
		{
			looper_3 += 1;
			float_1 = float_2;
		}
		double_2 = double_1 * double_3;
		int looper_4 = 0;
		while(looper_4 < 1)
		{
			looper_4 += 1;
			double_1 = asin ( double_5 ) ;
		}
		unsigned_int_4 = is_table_sep(char_1,double_5);

		float_1 = float_2;
		if(1)
		{
			char_4 = char_2 + char_3;
			if(1)
			{
				float_1 = float_2 * float_3;
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_2;
			int_4 = int_4 * int_5;
		}
		int looper_5 = 0;
		while(looper_5 < 1)
		{
			looper_5 += 1;
			double_1 = tan ( double_4 ) ;
		}
		if(1)
		{
		}
		if(1)
		{
			float_3 = float_2;
		}
		double_2 = log10 ( double_3 ) ;
		float_3 = parse_table_cell(float_3,float_3,char_3,long_1,int_5);

		char_5 = char_2 * char_4;
	}
	double_6 = fabs ( double_3 ) ;
	double_1 = tan ( double_1 ) ;
	return int_5;
}
int parse_table( float parameter_1,double parameter_2,char parameter_3,float parameter_4,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_10 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double double_11 = 1;
	int int_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_8 = 1;
	int int_5 = 1;
	long long_1 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	int_2 = int_1 + int_1;
	double_1 = exp ( double_1 ) ;
	double_1 = tanh ( double_2 ) ;
	double_2 = log ( double_2 ) ;
	int_2 = int_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_2 = fabs ( double_3 ) ;
	}
	double_1 = log ( double_1 ) ;
	if(1)
	{
		double_3 = tan ( double_1 ) ;
		double_4 = ldexp ( double_1 , int_2 ) ;
		double_4 = sinh ( double_5 ) ;
		int_1 = int_4 + int_2;
	}
	char_1 = char_2;
	double_5 = double_4 + double_3;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		if(1)
		{
			double_3 = double_6 * double_7;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_10 = 1;
			long long_2 = 1;
			char char_3 = 1;
			double double_11 = 1;
			int int_6 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_8 = 1;
			int int_5 = 1;
			long long_1 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_3 = 1;
			float_1 = float_1 + float_2;
		}
		double_1 = floor ( double_2 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_10 = 1;
		long long_2 = 1;
		char char_3 = 1;
		double double_11 = 1;
		int int_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_8 = 1;
		int int_5 = 1;
		long long_1 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		double_8 = ceil ( double_4 ) ;
		int_5 = int_3;
		double_3 = asin ( double_8 ) ;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_10 = 1;
			long long_2 = 1;
			char char_3 = 1;
			double double_11 = 1;
			int int_6 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_8 = 1;
			int int_5 = 1;
			long long_1 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_3 = 1;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_3 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				int int_4 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_10 = 1;
				long long_2 = 1;
				char char_3 = 1;
				double double_11 = 1;
				int int_6 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_8 = 1;
				int int_5 = 1;
				long long_1 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_3 = 1;
				double_9 = tan ( double_7 ) ;
			}
			long_1 = long_1;
			double_10 = asin ( double_1 ) ;
			int looper_4 = 0;
			while(looper_4 < 1)
			{
				looper_4 += 1;
				double_1 = log10 ( double_10 ) ;
			}
			if(1)
			{
				double_5 = acos ( double_3 ) ;
			}
			int looper_5 = 0;
			while(looper_5 < 1)
			{
				looper_5 += 1;
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int int_3 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_4 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_10 = 1;
					long long_2 = 1;
					char char_3 = 1;
					double double_11 = 1;
					int int_6 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_8 = 1;
					int int_5 = 1;
					long long_1 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					long long_3 = 1;
					unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
				}
				int looper_6 = 0;
				while(looper_6 < 1)
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int int_3 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_4 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_10 = 1;
					long long_2 = 1;
					char char_3 = 1;
					double double_11 = 1;
					int int_6 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_8 = 1;
					int int_5 = 1;
					long long_1 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					long long_3 = 1;
					looper_6 += 1;
					unsigned_int_4 = unsigned_int_4;
				}
				if(1)
				{
					long_2 = long_2 + long_1;
				}
				if(1)
				{
					double_7 = floor ( double_3 ) ;
				}
				char_1 = char_2 * char_2;
			}
		}
		double_10 = ldexp ( double_3 , int_1 ) ;
	}
	if(1)
	{
		int_2 = int_3 + int_4;
	}
	int looper_7 = 0;
	while(looper_7 < 1)
	{
		looper_7 += 1;
		double_6 = fabs ( double_4 ) ;
	}
	char_2 = char_3;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_10 = 1;
		long long_2 = 1;
		char char_3 = 1;
		double double_11 = 1;
		int int_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_8 = 1;
		int int_5 = 1;
		long long_1 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		long_2 = long_3;
	}
	double_3 = ceil ( double_6 ) ;
	double_10 = double_11;
	int_3 = int_4 * int_6;
}
unsigned int is_table_sep( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double is_tableline( char parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	float_1 = float_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		looper_1 += 1;
		int_1 = int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 + short_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			double_1 = exp ( double_1 ) ;
		}
	}
	int looper_3 = 0;
	while(looper_3 < 1)
	{
		looper_3 += 1;
		double_2 = tanh ( double_2 ) ;
	}
	if(1)
	{
		double_2 = fmod ( double_1 , double_2 ) ;
	}
	return double_3;
	unsigned_int_2 = is_table_sep(char_1,double_3);

}
unsigned int prefix_oli( char parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int_1 = int_1;
	if(1)
	{
		double_1 = fabs ( double_1 ) ;
	}
	if(1)
	{
		double_1 = cos ( double_1 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double_2 = cos ( double_2 ) ;
	}
	if(1)
	{
		return unsigned_int_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		looper_1 += 1;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		return unsigned_int_4;
	}
	double_1 = tanh ( double_1 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		looper_2 += 1;
		double_3 = cosh ( double_1 ) ;
	}
	return unsigned_int_5;
}
int parse_listitem( char parameter_1,char parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_5 = 1;
	short short_2 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_6 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	long long_4 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_7 = 1;
	char char_8 = 1;
	char_2 = char_1 * char_1;
	double_1 = exp ( double_1 ) ;
	double_1 = tan ( double_1 ) ;
	if(1)
	{
		short_1 = is_empty(char_2,float_1);

		double_2 = fmod ( double_1 , double_2 ) ;
		if(1)
		{
			double_2 = sinh ( double_2 ) ;
			if(1)
			{
				double_1 = asin ( double_1 ) ;
			}
		}
	}
	long_3 = long_1 * long_2;
	if(1)
	{
		double_3 = sqrt ( double_4 ) ;
	}
	if(1)
	{
		return int_1;
	}
	int_1 = int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		prefix_uli(char_3,double_2);

		short_1 = parse_block(int_1,double_3,char_4,long_2,771);

		int_3 = int_2 + int_2;
	}
	double_5 = fabs ( double_2 ) ;
	double_3 = log ( double_3 ) ;
	char_4 = new_work_buffer(long_1,15);

	unsigned_int_1 = unsigned_int_1;
	double_2 = exp ( double_2 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_5 = 1;
		short short_2 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		char char_6 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double double_13 = 1;
		long long_4 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_7 = 1;
		char char_8 = 1;
		looper_2 += 1;
		char_5 = char_6;
		int looper_3 = 0;
		while(looper_3 < 1)
		{
			looper_3 += 1;
			double_1 = tan ( double_3 ) ;
		}
		if(1)
		{
			double_1 = acos ( double_4 ) ;
			double_4 = asin ( double_6 ) ;
		}
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_5 = 1;
			short short_2 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			char char_6 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_4 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_7 = 1;
			char char_8 = 1;
			is_hrule(char_5,short_1);

			long_3 = long_4 * long_1;
			if(1)
			{
				long_2 = parse_inline(short_2,short_2,char_3,unsigned_int_1);

				int_2 = int_3 + int_2;
				if(1)
				{
					long_1 = long_2;
					if(1)
					{
						double_6 = double_7;
					}
				}
			}
		}
		double_7 = atan2 ( double_8 , double_9 ) ;
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_5 = 1;
			short short_2 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			char char_6 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_4 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_7 = 1;
			char char_8 = 1;
			double_10 = sinh ( double_5 ) ;
			unsigned_int_3 = unsigned_int_2;
		}
		if(1)
		{
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				double double_1 = 1;
				short short_1 = 1;
				float float_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				char char_3 = 1;
				char char_4 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_5 = 1;
				short short_2 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				int int_4 = 1;
				int int_5 = 1;
				int int_6 = 1;
				char char_6 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				double double_8 = 1;
				double double_11 = 1;
				double double_12 = 1;
				double double_13 = 1;
				long long_4 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_2 = 1;
				float float_3 = 1;
				char char_7 = 1;
				char char_8 = 1;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
			}
			if(1)
			{
			}
			if(1)
			{
				double_3 = fmod ( double_1 , double_7 ) ;
			}
		}
		if(1)
		{
			bufput(double_1,char_4,double_9);

			unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
		}
		if(1)
		{
			double_8 = double_2 * double_2;
			double_2 = double_3;
		}
		double_7 = pow ( double_2 , double_11 ) ;
		unsigned_int_6 = prefix_oli(char_1,unsigned_int_5);

		double_8 = acos ( double_12 ) ;
		double_13 = sinh ( double_4 ) ;
	}
	if(1)
	{
		int_3 = int_4 * int_4;
	}
	if(1)
	{
		if(1)
		{
			double_5 = log ( double_2 ) ;
			float_1 = float_1;
		}
		else
		{
			double_5 = tan ( double_2 ) ;
		}
	}
	else
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_5 = 1;
			short short_2 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			char char_6 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_4 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_7 = 1;
			char char_8 = 1;
			float_3 = float_2 * float_3;
			bufputc(unsigned_int_6,char_5);

			unsigned_int_1 = unsigned_int_3;
		}
		else
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_5 = 1;
			short short_2 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			char char_6 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			long long_4 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_7 = 1;
			char char_8 = 1;
			char_8 = char_7 * char_4;
		}
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
	}
	double_4 = release_work_buffer(int_1,int_4);

	int_3 = int_2 * int_5;
	int_1 = int_3;
	return int_6;
}
void parse_list( unsigned int parameter_1,float parameter_2,char parameter_3,char parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	long long_3 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	int_1 = int_2;
	long_2 = long_1 * long_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		long long_3 = 1;
		char char_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		looper_1 += 1;
		char_1 = new_work_buffer(long_3,673);

		int_2 = parse_listitem(char_1,char_2,char_2,int_2,int_3);

		double_1 = double_2;
		int_3 = int_2;
		char controller_1[6];
		fgets(controller_1 ,6 ,stdin);
		if( strcmp( controller_1, "l!svL") < 0)
		{
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		long long_3 = 1;
		char char_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		double_1 = release_work_buffer(int_1,int_4);

		double_3 = log10 ( double_4 ) ;
	}
	double_1 = cosh ( double_3 ) ;
}
void prefix_uli( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	if(1)
	{
		double_1 = tan ( double_3 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double_3 = ldexp ( double_4 , int_1 ) ;
	}
	if(1)
	{
	}
	double_1 = fmod ( double_2 , double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_2 = acos ( double_2 ) ;
	}
}
void parse_blockcode( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	bufput(double_1,char_1,double_2);

	double_1 = floor ( double_2 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	char_2 = prefix_code(char_3,unsigned_int_1);

	double_2 = atan ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_2;
		}
		bufputc(unsigned_int_4,char_3);

		double_3 = double_1 + double_2;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1 + unsigned_int_4;
		}
		if(1)
		{
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				char char_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				int int_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_3 = 1;
				int int_3 = 1;
				short short_2 = 1;
				float float_1 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_5 = 1;
				double_1 = release_work_buffer(int_2,int_3);

				short_1 = short_1 * short_2;
			}
			else
			{
				double double_1 = 1;
				char char_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				int int_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_3 = 1;
				int int_3 = 1;
				short short_2 = 1;
				float float_1 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_5 = 1;
				short_2 = is_empty(char_2,float_1);

				unsigned_int_5 = unsigned_int_5 + unsigned_int_3;
			}
		}
		double_1 = log10 ( double_1 ) ;
	}
	int looper_3 = 0;
	while(looper_3 < 1)
	{
		looper_3 += 1;
		double_1 = double_3;
	}
	int_3 = int_2 * int_1;
	if(1)
	{
		char_1 = char_2;
	}
	char_3 = new_work_buffer(long_1,620);

	unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
}
char prefix_code( char parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		return char_1;
	}
	if(1)
	{
		return char_2;
	}
	return char_1;
}
float parse_blockquote( float parameter_1,short parameter_2,char parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_7 = 1;
	long long_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	double_1 = exp ( double_1 ) ;
	double_1 = atan2 ( double_1 , double_2 ) ;
	double_2 = release_work_buffer(int_1,int_2);

	double_3 = tanh ( double_4 ) ;
	double_4 = double_1 + double_4;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		looper_1 += 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short_1 = prefix_quote(char_1,long_1);

			float_2 = float_1 + float_1;
		}
		double_3 = floor ( double_1 ) ;
		if(1)
		{
			double_3 = log10 ( double_5 ) ;
		}
		if(1)
		{
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				short short_1 = 1;
				char char_1 = 1;
				long long_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_2 = 1;
				float float_3 = 1;
				short short_2 = 1;
				double double_7 = 1;
				long long_3 = 1;
				float float_4 = 1;
				float float_5 = 1;
				char char_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_3 = 1;
				unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				double_1 = atan2 ( double_1 , double_3 ) ;
			}
			char_1 = new_work_buffer(long_2,613);

			float_3 = float_2;
		}
		double_6 = pow ( double_5 , double_6 ) ;
	}
	short_2 = parse_block(int_2,double_7,char_1,long_3,61);

	float_3 = float_1 + float_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_7 = 1;
		long long_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		short_1 = is_empty(char_1,float_5);

		short_3 = short_1 + short_2;
	}
	char_2 = char_1 + char_2;
	return float_2;
}
short prefix_quote( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = asin ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double_2 = double_2 + double_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_1 = float_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		if(1)
		{
			return short_1;
		}
		else
		{
			return short_2;
		}
	}
	else
	{
		return short_2;
	}
}
int htmlblock_end( long parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double_1 = fmod ( double_1 , double_2 ) ;
	if(1)
	{
		return int_1;
	}
	short_1 = is_empty(char_1,float_1);

	double_3 = asin ( double_4 ) ;
	double_3 = cosh ( double_2 ) ;
	if(1)
	{
		return int_2;
	}
	double_2 = log10 ( double_1 ) ;
	double_5 = log ( double_1 ) ;
	char controller_3[4];
	fgets(controller_3 ,4 ,stdin);
	if( strcmp( controller_3, "IY5") == 0)
	{
		return int_1;
	}
	return int_3;
}
char cmp_html_tag( int parameter_1,double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double_1 = asin ( double_1 ) ;
	long_1 = long_1;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "{Kn3L") > 0)
	{
		return char_1;
	}
	return char_1;
}
short find_block_tag( char parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float_1 = float_2;
	char_1 = char_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		looper_1 += 1;
		long_2 = long_1 * long_1;
	}
	if(1)
	{
		return short_1;
	}
	char_2 = cmp_html_tag(int_1,double_1);

	double_1 = double_1;
	short_3 = short_1 * short_2;
	return short_3;
}
long parse_htmlblock( long parameter_1,float parameter_2,char parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_4 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	float float_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_8 = 1;
	float float_2 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int_1 = int_2;
	double_1 = sqrt ( double_2 ) ;
	int_3 = int_1 * int_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		return long_1;
	}
	double_2 = asin ( double_2 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_4 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		float float_3 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_8 = 1;
		float float_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		if(1)
		{
			double_2 = log ( double_2 ) ;
			int looper_1 = 0;
			while(looper_1 < 1)
			{
				looper_1 += 1;
				int_4 = int_2;
			}
			double_3 = atan2 ( double_3 , double_2 ) ;
			if(1)
			{
				long_2 = long_2;
			}
			if(1)
			{
				double_3 = double_4;
				if(1)
				{
					double_3 = fmod ( double_5 , double_3 ) ;
				}
				return long_1;
			}
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				double_3 = double_2;
			}
			if(1)
			{
				double_1 = double_1;
				double_2 = acos ( double_4 ) ;
				if(1)
				{
					short_1 = find_block_tag(char_1,unsigned_int_3);

					double_2 = atan2 ( double_4 , double_5 ) ;
					if(1)
					{
						double_3 = exp ( double_3 ) ;
					}
					return long_1;
				}
			}
		}
		return long_1;
	}
	int_3 = htmlblock_end(long_2,char_1,short_1);

	double_1 = cosh ( double_2 ) ;
	double_4 = double_2;
	if(1)
	{
		int looper_3 = 0;
		while(looper_3 < 1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			char char_1 = 1;
			long long_1 = 1;
			int int_4 = 1;
			double double_3 = 1;
			long long_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			float float_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_8 = 1;
			float float_2 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_4 = 1;
			looper_3 += 1;
			double_1 = tanh ( double_6 ) ;
			int looper_4 = 0;
			while(looper_4 < 1)
			{
				looper_4 += 1;
				double_2 = exp ( double_3 ) ;
			}
			if(1)
			{
			}
			double_4 = acos ( double_1 ) ;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_3 = 1;
				char char_1 = 1;
				long long_1 = 1;
				int int_4 = 1;
				double double_3 = 1;
				long long_2 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				float float_3 = 1;
				long long_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				char char_2 = 1;
				float float_1 = 1;
				double double_8 = 1;
				float float_2 = 1;
				float float_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
				double_7 = double_4 * double_1;
			}
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			char char_1 = 1;
			long long_1 = 1;
			int int_4 = 1;
			double double_3 = 1;
			long long_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			float float_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_8 = 1;
			float float_2 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_4 = 1;
			char_1 = char_2 + char_1;
			int looper_5 = 0;
			while(looper_5 < 1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_3 = 1;
				char char_1 = 1;
				long long_1 = 1;
				int int_4 = 1;
				double double_3 = 1;
				long long_2 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				float float_3 = 1;
				long long_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				char char_2 = 1;
				float float_1 = 1;
				double double_8 = 1;
				float float_2 = 1;
				float float_4 = 1;
				unsigned int unsigned_int_4 = 1;
				looper_5 += 1;
				short_1 = short_2;
				int looper_6 = 0;
				while(looper_6 < 1)
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int int_3 = 1;
					char char_1 = 1;
					long long_1 = 1;
					int int_4 = 1;
					double double_3 = 1;
					long long_2 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_3 = 1;
					short short_2 = 1;
					float float_3 = 1;
					long long_3 = 1;
					double double_5 = 1;
					double double_6 = 1;
					double double_7 = 1;
					char char_2 = 1;
					float float_1 = 1;
					double double_8 = 1;
					float float_2 = 1;
					float float_4 = 1;
					unsigned int unsigned_int_4 = 1;
					looper_6 += 1;
					float_1 = float_2;
				}
				if(1)
				{
				}
				double_8 = cosh ( double_3 ) ;
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int int_3 = 1;
					char char_1 = 1;
					long long_1 = 1;
					int int_4 = 1;
					double double_3 = 1;
					long long_2 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_3 = 1;
					short short_2 = 1;
					float float_3 = 1;
					long long_3 = 1;
					double double_5 = 1;
					double double_6 = 1;
					double double_7 = 1;
					char char_2 = 1;
					float float_1 = 1;
					double double_8 = 1;
					float float_2 = 1;
					float float_4 = 1;
					unsigned int unsigned_int_4 = 1;
					short_2 = is_empty(char_1,float_3);

					float_4 = float_1;
					int_3 = int_4;
				}
			}
		}
		if(1)
		{
			return long_3;
		}
	}
	double_2 = acos ( double_4 ) ;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_4 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		float float_3 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_8 = 1;
		float float_2 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
	}
	return long_3;
}
void is_hrule( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = cosh ( double_1 ) ;
	float_3 = float_1 + float_2;
	if(1)
	{
	}
	if(1)
	{
		double_2 = acos ( double_3 ) ;
		if(1)
		{
			double_2 = double_2 * double_3;
			if(1)
			{
				double_2 = atan2 ( double_3 , double_2 ) ;
			}
		}
	}
	if(1)
	{
	}
	float_4 = float_1 * float_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		looper_1 += 1;
		if(1)
		{
			double_2 = exp ( double_3 ) ;
		}
		if(1)
		{
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
}
unsigned int is_headerline( char parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long_1 = long_1 * long_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short_1 = short_2;
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			looper_2 += 1;
			char_1 = char_1;
		}
		return unsigned_int_1;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double_3 = double_1 + double_2;
		}
		int looper_4 = 0;
		while(looper_4 < 1)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			looper_4 += 1;
			int_1 = int_2;
		}
		return unsigned_int_2;
	}
	return unsigned_int_1;
}
short is_empty( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = cosh ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			return short_1;
		}
	}
	return short_2;
}
char parse_paragraph( int parameter_1,short parameter_2,char parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	short short_3 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_6 = 1;
	double double_5 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_2 = 1;
	int int_5 = 1;
	double double_9 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = new_work_buffer(long_1,0);

	float_2 = float_1 + float_1;
	double_1 = log ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_1 = int_1;
		}
		if(1)
		{
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	int_2 = int_3;
	int looper_3 = 0;
	while(looper_3 < 1)
	{
		looper_3 += 1;
		double_3 = tanh ( double_1 ) ;
	}
	if(1)
	{
		is_hrule(char_1,short_1);

		double_2 = release_work_buffer(int_1,int_3);

		double_3 = pow ( double_4 , double_2 ) ;
		short_2 = is_empty(char_2,float_3);

		double_2 = cos ( double_3 ) ;
		if(1)
		{
			double_2 = ldexp ( double_4 , int_2 ) ;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	else
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		short short_2 = 1;
		char char_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		short short_3 = 1;
		char char_5 = 1;
		char char_6 = 1;
		double double_6 = 1;
		double double_5 = 1;
		char char_4 = 1;
		int int_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_2 = 1;
		int int_5 = 1;
		double double_9 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			short short_2 = 1;
			char char_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			short short_3 = 1;
			char char_5 = 1;
			char char_6 = 1;
			double double_6 = 1;
			double double_5 = 1;
			char char_4 = 1;
			int int_4 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			int int_5 = 1;
			double double_9 = 1;
			double_4 = pow ( double_2 , double_3 ) ;
			double_5 = acos ( double_1 ) ;
			float_3 = float_1;
			int looper_4 = 0;
			while(looper_4 < 1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				long long_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_3 = 1;
				short short_1 = 1;
				double double_4 = 1;
				short short_2 = 1;
				char char_2 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				short short_3 = 1;
				char char_5 = 1;
				char char_6 = 1;
				double double_6 = 1;
				double double_5 = 1;
				char char_4 = 1;
				int int_4 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_2 = 1;
				int int_5 = 1;
				double double_9 = 1;
				looper_4 += 1;
				int_4 = int_3;
			}
			unsigned_int_3 = is_headerline(char_3,unsigned_int_1);

			long_1 = long_1;
			int looper_5 = 0;
			while(looper_5 < 1)
			{
				looper_5 += 1;
				char_4 = char_1 + char_2;
			}
			char controller_6[2];
			fgets(controller_6 ,2 ,stdin);
			if( strcmp( controller_6, "v") == 0)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				long long_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_3 = 1;
				short short_1 = 1;
				double double_4 = 1;
				short short_2 = 1;
				char char_2 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				short short_3 = 1;
				char char_5 = 1;
				char char_6 = 1;
				double double_6 = 1;
				double double_5 = 1;
				char char_4 = 1;
				int int_4 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_2 = 1;
				int int_5 = 1;
				double double_9 = 1;
				double_6 = log ( double_7 ) ;
				double_6 = atan2 ( double_7 , double_6 ) ;
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					char char_1 = 1;
					long long_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_3 = 1;
					short short_1 = 1;
					double double_4 = 1;
					short short_2 = 1;
					char char_2 = 1;
					float float_3 = 1;
					unsigned int unsigned_int_3 = 1;
					char char_3 = 1;
					short short_3 = 1;
					char char_5 = 1;
					char char_6 = 1;
					double double_6 = 1;
					double double_5 = 1;
					char char_4 = 1;
					int int_4 = 1;
					double double_7 = 1;
					double double_8 = 1;
					long long_2 = 1;
					int int_5 = 1;
					double double_9 = 1;
					double_8 = atan2 ( double_2 , double_5 ) ;
				}
				long_1 = parse_inline(short_3,short_3,char_5,unsigned_int_1);

				char_4 = char_3 + char_4;
				float_2 = float_3;
				char_1 = char_4;
			}
			else
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				long long_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				double double_3 = 1;
				short short_1 = 1;
				double double_4 = 1;
				short short_2 = 1;
				char char_2 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				short short_3 = 1;
				char char_5 = 1;
				char char_6 = 1;
				double double_6 = 1;
				double double_5 = 1;
				char char_4 = 1;
				int int_4 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_2 = 1;
				int int_5 = 1;
				double double_9 = 1;
				long_2 = long_1 * long_1;
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			short short_2 = 1;
			char char_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			short short_3 = 1;
			char char_5 = 1;
			char char_6 = 1;
			double double_6 = 1;
			double double_5 = 1;
			char char_4 = 1;
			int int_4 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_2 = 1;
			int int_5 = 1;
			double double_9 = 1;
			int_5 = int_1;
			double_6 = double_1 + double_3;
			double_9 = fabs ( double_3 ) ;
			double_4 = tanh ( double_6 ) ;
		}
	}
	return char_6;
}
double parse_atxheader( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	short short_3 = 1;
	double double_6 = 1;
	double double_5 = 1;
	int int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = log ( double_2 ) ;
	char_1 = new_work_buffer(long_1,360);

	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		return double_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_2 = double_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = parse_inline(short_1,short_2,char_1,unsigned_int_2);

		double_3 = tan ( double_2 ) ;
	}
	char_2 = parse_paragraph(int_1,short_2,char_2,char_2);

	int_1 = int_1 * int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_2 = release_work_buffer(int_2,int_2);

		double_4 = pow ( double_3 , double_3 ) ;
	}
	short_3 = short_1;
	if(1)
	{
		return double_1;
	}
	int looper_4 = 0;
	while(looper_4 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		short short_3 = 1;
		double double_6 = 1;
		double double_5 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		looper_4 += 1;
		double_3 = atan2 ( double_2 , double_5 ) ;
	}
	int looper_5 = 0;
	while(looper_5 < 1)
	{
		looper_5 += 1;
		double_4 = cos ( double_3 ) ;
	}
	if(1)
	{
		return double_6;
	}
	double_6 = cosh ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		char char_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		short short_3 = 1;
		double double_6 = 1;
		double double_5 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double_6 = tanh ( double_1 ) ;
		int_3 = int_2;
		double_1 = double_7;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	return double_3;
}
short parse_block( int parameter_1,double parameter_2,char parameter_3,long parameter_4,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_6 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = sqrt ( double_2 ) ;
	double_1 = asin ( double_3 ) ;
	int_1 = int_2;
	char controller4vul_2[1];
	fgets(controller4vul_2 ,2 ,stdin);
	if( strcmp( controller4vul_2, "3") == 0)
	{
		char controller4vul_3[1];
		fgets(controller4vul_3 ,2 ,stdin);
		if( strcmp( controller4vul_3, "K") < 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_4 = 1;
			short short_1 = 1;
			double double_6 = 1;
			double double_5 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_1 = 1;
			int_3 = parse_table(float_1,double_2,char_1,float_1,uni_para);

			double_4 = log10 ( double_5 ) ;
		}
		return short_1;
	}
	double_6 = double_4 + double_4;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_1 = 1;
		looper_1 += 1;
		double_6 = double_3;
		double_4 = log ( double_1 ) ;
		if(1)
		{
			double_6 = double_1 * double_7;
		}
		if(1)
		{
			double_8 = double_8;
		}
		if(1)
		{
			double_1 = fmod ( double_7 , double_2 ) ;
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				float float_1 = 1;
				char char_1 = 1;
				double double_4 = 1;
				short short_1 = 1;
				double double_6 = 1;
				double double_5 = 1;
				double double_7 = 1;
				double double_8 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned_int_1 = unsigned_int_1;
			}
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				int_1 = int_1;
			}
			int_1 = int_2;
		}
		if(1)
		{
			double_1 = double_4;
		}
		if(1)
		{
			double_2 = double_7;
		}
		if(1)
		{
			double_4 = double_4 + double_1;
		}
		if(1)
		{
			double_9 = fmod ( double_8 , double_1 ) ;
		}
		if(1)
		{
			double_9 = fabs ( double_6 ) ;
		}
		else
		{
			int_1 = int_3 + int_1;
		}
	}
}
char cmp_link_ref_sort( char parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	return char_1;
	int_1 = bufcasecmp(char_2,int_2);

}
unsigned int arr_realloc( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float_1 = float_1 * float_1;
	double_1 = sqrt ( double_2 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	int_1 = int_1 * int_1;
	double_2 = log10 ( double_2 ) ;
	if(1)
	{
		double_2 = sinh ( double_2 ) ;
	}
	return unsigned_int_1;
}
int arr_grow( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	if(1)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
	unsigned_int_1 = arr_realloc(long_1,int_1);

}
int arr_newitem( char parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	if(1)
	{
		return int_1;
	}
	double_1 = tan ( double_2 ) ;
	return int_1;
	int_2 = arr_grow(float_1,int_3);

}
short arr_item( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	short_3 = short_1 + short_2;
	if(1)
	{
		return short_2;
	}
	char_1 = char_1 * char_1;
	double_1 = fabs ( double_1 ) ;
	return short_1;
}
void bufrelease( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	if(1)
	{
	}
	double_1 = atan2 ( double_1 , double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		double double_4 = 1;
		double_1 = fmod ( double_3 , double_3 ) ;
		float_1 = float_1;
		double_4 = double_3 * double_3;
		double_1 = asin ( double_4 ) ;
	}
}
short is_ref( char parameter_1,char parameter_2,char parameter_3,unsigned int parameter_4,double parameter_5)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	short short_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_8 = 1;
	short short_5 = 1;
	char char_5 = 1;
	double double_9 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_6 = 1;
	double double_10 = 1;
	float float_4 = 1;
	float_1 = float_2;
	double_1 = double_2;
	double_3 = floor ( double_2 ) ;
	double_2 = sqrt ( double_3 ) ;
	char_1 = char_1 + char_2;
	double_4 = pow ( double_3 , double_3 ) ;
	double_2 = double_4 * double_4;
	if(1)
	{
		return short_1;
	}
	if(1)
	{
		char_3 = char_4;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			short short_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			float float_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_1 = 1;
			short short_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_2 = 1;
			double double_8 = 1;
			short short_5 = 1;
			char char_5 = 1;
			double double_9 = 1;
			short short_6 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_6 = 1;
			double double_10 = 1;
			float float_4 = 1;
			float_4 = float_2 + float_3;
			if(1)
			{
				double_2 = cos ( double_1 ) ;
				if(1)
				{
					return short_1;
				}
			}
		}
	}
	double_4 = double_1;
	if(1)
	{
		return short_1;
	}
	short_2 = short_3;
	long_1 = long_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_2 = log ( double_4 ) ;
	}
	if(1)
	{
		return short_4;
	}
	double_1 = ceil ( double_5 ) ;
	double_2 = pow ( double_1 , double_4 ) ;
	if(1)
	{
		return short_3;
	}
	double_1 = double_1 + double_4;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		double_3 = sqrt ( double_4 ) ;
	}
	if(1)
	{
		int_1 = int_1 * int_1;
		if(1)
		{
			double_2 = atan ( double_5 ) ;
		}
	}
	int looper_3 = 0;
	while(looper_3 < 1)
	{
		looper_3 += 1;
		double_3 = atan2 ( double_5 , double_2 ) ;
	}
	if(1)
	{
		return short_4;
	}
	if(1)
	{
		double_5 = double_4;
	}
	double_1 = sqrt ( double_2 ) ;
	int looper_4 = 0;
	while(looper_4 < 1)
	{
		looper_4 += 1;
		int_2 = arr_newitem(char_1);

		short_2 = short_4;
	}
	if(1)
	{
		bufput(double_4,char_3,double_4);

		int_1 = int_2;
	}
	else
	{
		bufrelease(int_2);

		char_1 = char_1 + char_2;
	}
	int looper_5 = 0;
	while(looper_5 < 1)
	{
		looper_5 += 1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		return short_4;
	}
	double_5 = double_5 * double_4;
	if(1)
	{
		double_6 = double_6;
	}
	if(1)
	{
		double_2 = double_7 * double_4;
	}
	if(1)
	{
		bufnew();

		double_3 = fabs ( double_4 ) ;
		int looper_6 = 0;
		while(looper_6 < 1)
		{
			looper_6 += 1;
			double_2 = tanh ( double_1 ) ;
		}
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		double_4 = tan ( double_4 ) ;
		long_2 = long_1 + long_2;
		int looper_7 = 0;
		while(looper_7 < 1)
		{
			looper_7 += 1;
			double_1 = fabs ( double_6 ) ;
		}
		if(1)
		{
			double_5 = atan ( double_2 ) ;
		}
		else
		{
			double_8 = cosh ( double_2 ) ;
		}
		double_8 = atan2 ( double_7 , double_6 ) ;
		int looper_8 = 0;
		while(looper_8 < 1)
		{
			looper_8 += 1;
			double_7 = double_5;
		}
		if(1)
		{
			double_3 = atan ( double_2 ) ;
			double_1 = log ( double_8 ) ;
		}
	}
	if(1)
	{
		return short_5;
	}
	if(1)
	{
		char_3 = char_5;
	}
	if(1)
	{
		return short_5;
	}
	char_5 = char_4;
	if(1)
	{
		double_2 = atan2 ( double_4 , double_9 ) ;
		return short_6;
	}
	double_3 = double_5 + double_9;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	char_6 = build_ref_id(double_3,short_5,float_3);

	char_4 = char_2 + char_3;
	double_5 = double_8 * double_10;
	if(1)
	{
		double_4 = fmod ( double_5 , double_3 ) ;
		double_10 = ldexp ( double_1 , int_1 ) ;
	}
	else
	{
		short_4 = arr_item(long_2,int_2);

		int_2 = int_2;
	}
	return short_2;
}
long char_entity( unsigned int parameter_1,short parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1;
	double_1 = atan2 ( double_2 , double_3 ) ;
	if(1)
	{
		bufput(double_4,char_1,double_2);

		double_4 = double_5 * double_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_4 = double_6 * double_7;
	}
	if(1)
	{
		double_6 = ceil ( double_5 ) ;
	}
	else
	{
		return long_1;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double_7 = tan ( double_7 ) ;
		int_3 = int_1 + int_2;
		long_1 = long_1 + long_1;
	}
	else
	{
		double_7 = floor ( double_3 ) ;
	}
	return long_1;
}
short char_escape( char parameter_1,char parameter_2,char parameter_3,short parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double_1 = log10 ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			unsigned_int_1 = unsigned_int_1;
			double_1 = double_1 + double_2;
			double_2 = sinh ( double_3 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double_3 = log10 ( double_4 ) ;
		}
	}
	return short_1;
	bufputc(unsigned_int_2,char_1);

}
char is_mail_autolink( char parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		looper_1 += 1;
		if(1)
		{
			double_1 = asin ( double_1 ) ;
		}
		double_1 = exp ( double_1 ) ;
	}
	if(1)
	{
		return char_1;
	}
	return char_1;
}
double tag_length( char parameter_1,char parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	if(1)
	{
		return double_3;
	}
	if(1)
	{
		return double_1;
	}
	char_1 = char_2;
	if(1)
	{
		return double_3;
	}
	char_2 = is_mail_autolink(char_3,float_1);

	float_1 = float_1 * float_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_1 = floor ( double_2 ) ;
	}
	if(1)
	{
		double_2 = double_2 * double_2;
		double_1 = cos ( double_1 ) ;
	}
	if(1)
	{
		double_2 = atan ( double_3 ) ;
	}
	if(1)
	{
		double_1 = exp ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_2;
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			looper_1 += 1;
			double_3 = ldexp ( double_4 , int_1 ) ;
		}
		if(1)
		{
			return double_3;
		}
		if(1)
		{
			return double_1;
		}
		unsigned_int_3 = unsigned_int_1;
	}
	if(1)
	{
		double_6 = double_4 * double_5;
		return double_6;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		double_5 = asin ( double_4 ) ;
	}
	if(1)
	{
		return double_3;
	}
	return double_7;
}
short char_langle_tag( int parameter_1,unsigned int parameter_2,char parameter_3,short parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	short_3 = short_1 + short_2;
	long_1 = long_2;
	double_2 = log ( double_3 ) ;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double_1 = tan ( double_4 ) ;
			char_1 = char_2;
			double_2 = fmod ( double_4 , double_4 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double_3 = tag_length(char_3,char_1,unsigned_int_1);

			unsigned_int_2 = unsigned_int_1;
		}
	}
	if(1)
	{
		return short_2;
	}
	else
	{
		return short_3;
	}
}
double lower( char parameter_1)
{
	double double_1 = 1;
	return double_1;
}
int bufcasecmp( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double_1 = asin ( double_2 ) ;
	double_2 = double_2;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_1;
	}
	double_3 = fmod ( double_4 , double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		int int_3 = 1;
		double double_5 = 1;
		looper_1 += 1;
		double_1 = lower(char_1);

		double_5 = double_4;
	}
	if(1)
	{
		if(1)
		{
			return int_2;
		}
		else
		{
			return int_1;
		}
	}
	else
	{
		if(1)
		{
			return int_3;
		}
		else
		{
			return int_2;
		}
	}
}
short cmp_link_ref()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	return short_1;
	int_1 = bufcasecmp(char_1,int_2);

}
unsigned int arr_sorted_find( short parameter_1,char parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_2 = short_1 * short_1;
	double_1 = ceil ( double_1 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	long_1 = long_1 * long_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		looper_1 += 1;
		double_1 = floor ( double_2 ) ;
		double_2 = ceil ( double_2 ) ;
		if(1)
		{
			return unsigned_int_2;
		}
		if(1)
		{
			double_3 = tanh ( double_2 ) ;
		}
		else
		{
			double_3 = pow ( double_1 , double_3 ) ;
		}
	}
	return unsigned_int_2;
}
void bufputc( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = acos ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = bufgrow(float_1,long_1);

}
char build_ref_id( double parameter_1,short parameter_2,float parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int_1 = int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		looper_1 += 1;
		double_2 = double_1 * double_1;
		long_1 = long_1;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		char_1 = char_2;
	}
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "IQZ") == 0)
	{
		return char_3;
	}
	bufput(double_1,char_1,double_1);

	double_1 = cosh ( double_3 ) ;
	double_2 = cosh ( double_4 ) ;
	int looper_3 = 0;
	while(looper_3 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		looper_3 += 1;
		double_5 = acos ( double_4 ) ;
		int looper_4 = 0;
		while(looper_4 < 1)
		{
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_5 = 1;
			int int_2 = 1;
			int int_3 = 1;
			looper_4 += 1;
			int_3 = int_1 * int_2;
		}
		char_3 = char_2;
		if(1)
		{
			bufputc(unsigned_int_1,char_3);

			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		}
		int looper_5 = 0;
		while(looper_5 < 1)
		{
			looper_5 += 1;
			char_1 = char_3;
		}
	}
	return char_1;
}
float get_link_ref( short parameter_1,short parameter_2,char parameter_3,char parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = log10 ( double_2 ) ;
	double_2 = asin ( double_1 ) ;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "]K-on") > 0)
	{
		return float_1;
	}
	short_1 = cmp_link_ref();

	float_4 = float_2 + float_3;
	if(1)
	{
		return float_4;
	}
	int_3 = int_1 * int_2;
	if(1)
	{
		bufput(double_3,char_1,double_3);

		float_2 = float_2;
	}
	char_1 = build_ref_id(double_4,short_1,float_1);

	double_4 = fabs ( double_1 ) ;
	if(1)
	{
		unsigned_int_1 = arr_sorted_find(short_1,char_1);

		double_4 = atan ( double_4 ) ;
	}
	return float_2;
}
int get_link_inline( short parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_10 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_7 = 1;
	double_1 = fmod ( double_2 , double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_2 = asin ( double_3 ) ;
	double_2 = exp ( double_4 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_3 = double_1 * double_1;
	}
	unsigned_int_1 = unsigned_int_2;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		double_4 = double_4 * double_2;
	}
	double_4 = acos ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		int int_1 = 1;
		char char_1 = 1;
		double double_10 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_7 = 1;
		double_1 = double_2;
		double_1 = floor ( double_4 ) ;
		short_1 = short_2;
		int looper_3 = 0;
		while(looper_3 < 1)
		{
			looper_3 += 1;
			double_5 = tan ( double_5 ) ;
		}
		if(1)
		{
			double_5 = tanh ( double_4 ) ;
			double_4 = double_5;
		}
	}
	int looper_4 = 0;
	while(looper_4 < 1)
	{
		looper_4 += 1;
		double_5 = fmod ( double_2 , double_4 ) ;
	}
	if(1)
	{
		double_4 = floor ( double_6 ) ;
	}
	if(1)
	{
		double_6 = floor ( double_3 ) ;
	}
	long_1 = long_1;
	double_5 = sqrt ( double_6 ) ;
	int looper_5 = 0;
	while(looper_5 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_8 = 1;
		double double_9 = 1;
		int int_1 = 1;
		char char_1 = 1;
		double double_10 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_7 = 1;
		looper_5 += 1;
		double_6 = double_7;
		int looper_6 = 0;
		while(looper_6 < 1)
		{
			looper_6 += 1;
			double_6 = fmod ( double_1 , double_7 ) ;
		}
		double_5 = fabs ( double_5 ) ;
		int looper_7 = 0;
		while(looper_7 < 1)
		{
			looper_7 += 1;
			double_2 = double_2 + double_5;
		}
	}
	double_6 = sqrt ( double_8 ) ;
	char controller_5[6];
	fgets(controller_5 ,6 ,stdin);
	if( strcmp( controller_5, "2guHl") < 0)
	{
		double_5 = sqrt ( double_9 ) ;
	}
	return int_1;
	bufput(double_9,char_1,double_10);

}
char char_link( short parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,char parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_9 = 1;
	double double_10 = 1;
	float float_1 = 1;
	short short_4 = 1;
	char char_7 = 1;
	double double_11 = 1;
	long long_3 = 1;
	char char_5 = 1;
	double double_8 = 1;
	char char_6 = 1;
	float float_2 = 1;
	int_1 = int_2;
	short_1 = short_2;
	double_1 = tanh ( double_2 ) ;
	double_1 = double_2 * double_1;
	char_2 = char_1 + char_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		return char_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		int_1 = get_link_inline(short_1,unsigned_int_1,char_1,long_1);

		long_1 = long_1 * long_1;
	}
	if(1)
	{
		int_2 = int_2 + int_1;
		if(1)
		{
		}
	}
	if(1)
	{
		return char_2;
	}
	double_2 = exp ( double_1 ) ;
	double_2 = cosh ( double_2 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		long_2 = long_1;
	}
	int_2 = int_1;
	int_3 = int_2;
	double_1 = double_3 + double_3;
	double_4 = sinh ( double_5 ) ;
	if(1)
	{
		double_1 = acos ( double_6 ) ;
		int looper_3 = 0;
		while(looper_3 < 1)
		{
			looper_3 += 1;
			double_3 = cosh ( double_1 ) ;
		}
		if(1)
		{
			double_3 = log10 ( double_2 ) ;
		}
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_9 = 1;
		double double_10 = 1;
		float float_1 = 1;
		short short_4 = 1;
		char char_7 = 1;
		double double_11 = 1;
		long long_3 = 1;
		char char_5 = 1;
		double double_8 = 1;
		char char_6 = 1;
		float float_2 = 1;
		long_2 = parse_inline(short_2,short_3,char_4,unsigned_int_2);

		char_5 = char_3 + char_1;
		double_5 = ldexp ( double_2 , int_2 ) ;
		int looper_4 = 0;
		while(looper_4 < 1)
		{
			looper_4 += 1;
			double_7 = sqrt ( double_2 ) ;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
		if(1)
		{
			double_5 = log10 ( double_2 ) ;
			double_3 = tan ( double_8 ) ;
		}
		else
		{
			double_3 = double_7 + double_9;
			double_5 = floor ( double_4 ) ;
		}
		if(1)
		{
			double_10 = release_work_buffer(int_1,int_1);

			double_7 = ceil ( double_7 ) ;
		}
		double_8 = fmod ( double_2 , double_6 ) ;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_9 = 1;
		double double_10 = 1;
		float float_1 = 1;
		short short_4 = 1;
		char char_7 = 1;
		double double_11 = 1;
		long long_3 = 1;
		char char_5 = 1;
		double double_8 = 1;
		char char_6 = 1;
		float float_2 = 1;
		if(1)
		{
			double_10 = tanh ( double_3 ) ;
		}
		char_2 = char_6;
	}
	if(1)
	{
		if(1)
		{
			double_9 = cosh ( double_7 ) ;
		}
		else
		{
			float_1 = get_link_ref(short_3,short_4,char_7,char_7,char_4);

			double_3 = log ( double_1 ) ;
		}
	}
	if(1)
	{
		char controller_17[2];
		fgets(controller_17 ,2 ,stdin);
		if( strcmp( controller_17, "L") < 0)
		{
			double_3 = atan ( double_10 ) ;
		}
		bufput(double_4,char_7,double_11);

		double_4 = sqrt ( double_3 ) ;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_9 = 1;
		double double_10 = 1;
		float float_1 = 1;
		short short_4 = 1;
		char char_7 = 1;
		double double_11 = 1;
		long long_3 = 1;
		char char_5 = 1;
		double double_8 = 1;
		char char_6 = 1;
		float float_2 = 1;
		float_2 = float_2;
	}
	int_2 = int_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
	char_2 = new_work_buffer(long_3,768);

	double_3 = tan ( double_7 ) ;
	return char_2;
}
unsigned int char_linebreak( short parameter_1,long parameter_2,char parameter_3,short parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		return unsigned_int_1;
	}
	char controller_2[4];
	fgets(controller_2 ,4 ,stdin);
	if( strcmp( controller_2, "={l") == 0)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	return unsigned_int_1;
}
double char_codespan( long parameter_1,int parameter_2,char parameter_3,long parameter_4,unsigned int parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_2;
	return double_3;
}
int parse_emph3( long parameter_1,short parameter_2,char parameter_3,double parameter_4,char parameter_5)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	char char_4 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_5 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	long_1 = parse_inline(short_1,short_1,char_1,unsigned_int_1);

	long_2 = long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		long long_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		char char_4 = 1;
		int int_1 = 1;
		double double_2 = 1;
		char char_5 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		looper_1 += 1;
		unsigned_int_1 = find_emph_char(char_1,double_1,char_2);

		parse_emph1(unsigned_int_2,unsigned_int_2,char_3,float_1,char_4);

		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		if(1)
		{
			return int_1;
		}
		float_1 = parse_emph2(int_1,double_2,char_5,float_1,char_4);

		double_1 = atan2 ( double_3 , double_3 ) ;
		if(1)
		{
		}
		if(1)
		{
			long long_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_3 = 1;
			float float_1 = 1;
			char char_4 = 1;
			int int_1 = 1;
			double double_2 = 1;
			char char_5 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			char_4 = char_2 * char_5;
			double_4 = double_3;
			unsigned_int_2 = unsigned_int_1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
			return int_1;
		}
		if(1)
		{
			double_1 = double_4 * double_4;
			if(1)
			{
				return int_1;
			}
			else
			{
				return int_2;
			}
		}
		else
		{
			long long_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_3 = 1;
			float float_1 = 1;
			char char_4 = 1;
			int int_1 = 1;
			double double_2 = 1;
			char char_5 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			double_3 = release_work_buffer(int_3,int_2);

			double_1 = ldexp ( double_3 , int_4 ) ;
			if(1)
			{
				return int_1;
			}
			else
			{
				return int_3;
			}
		}
	}
	return int_3;
	char_5 = new_work_buffer(long_2,73);

}
float parse_emph2( int parameter_1,double parameter_2,char parameter_3,float parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	char char_2 = 1;
	double double_6 = 1;
	int int_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = cos ( double_1 ) ;
	double_2 = sinh ( double_3 ) ;
	double_3 = exp ( double_4 ) ;
	if(1)
	{
		return float_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_1 = log10 ( double_1 ) ;
		if(1)
		{
			return float_2;
		}
		char_1 = new_work_buffer(long_1,828);

		double_4 = tan ( double_2 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			char char_2 = 1;
			double double_6 = 1;
			int int_1 = 1;
			float float_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = find_emph_char(char_1,double_5,char_2);

			double_6 = release_work_buffer(int_1,int_1);

			double_1 = atan2 ( double_3 , double_3 ) ;
			double_4 = ldexp ( double_3 , int_1 ) ;
			unsigned_int_1 = unsigned_int_2;
			double_6 = double_4;
			return float_3;
		}
		int_1 = int_1;
	}
	return float_2;
	long_1 = parse_inline(short_1,short_2,char_2,unsigned_int_3);

}
double release_work_buffer( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1 + short_2;
	long_2 = long_1 * long_2;
}
void bufput( double parameter_1,char parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = fmod ( double_2 , double_1 ) ;
	int_1 = bufgrow(float_1,long_1);

	double_3 = pow ( double_2 , double_2 ) ;
}
long parse_inline( short parameter_1,short parameter_2,char parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = tanh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	long_1 = long_2;
	if(1)
	{
		if(1)
		{
			double_1 = fmod ( double_1 , double_2 ) ;
		}
		return long_3;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		looper_1 += 1;
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			bufput(double_1,char_1,double_3);

			int_1 = int_1;
		}
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			long long_3 = 1;
			char char_1 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_4 = sqrt ( double_2 ) ;
			double_4 = cos ( double_3 ) ;
			double_1 = log10 ( double_1 ) ;
		}
		else
		{
			double_2 = acos ( double_1 ) ;
		}
		if(1)
		{
		}
		int_1 = int_1 * int_1;
		double_1 = fabs ( double_3 ) ;
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			long long_3 = 1;
			char char_1 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double_3 = atan2 ( double_3 , double_5 ) ;
		}
		else
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_2 = 1;
			long long_3 = 1;
			char char_1 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned_int_2 = unsigned_int_3;
			float_1 = float_2;
		}
	}
}
char parr_realloc( short parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	unsigned_int_1 = unsigned_int_2;
	double_1 = tan ( double_1 ) ;
	char controller4vul_5[4];
	fgets(controller4vul_5 ,5 ,stdin);
	if( strcmp( controller4vul_5, "JR-;") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		if(uni_para == 233)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	}
	double_2 = ldexp ( double_1 , int_1 ) ;
	int_2 = int_2;
	if(1)
	{
		double_2 = sinh ( double_1 ) ;
	}
	int_2 = int_3 * int_3;
}
int parr_grow( float parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = parr_realloc(short_1,int_1,uni_para);

	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_3;
	}
}
int parr_push( char parameter_1,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	int_1 = parr_grow(float_1,int_2,uni_para);

	if(1)
	{
		return int_1;
	}
	int_2 = int_2 * int_3;
	double_1 = atan2 ( double_1 , double_1 ) ;
	return int_2;
}
char new_work_buffer( long parameter_1,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = tanh ( double_1 ) ;
	char controller4vul_4[3];
	fgets(controller4vul_4 ,4 ,stdin);
	if( strcmp( controller4vul_4, "GHx") > 0)
	{
		double double_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		int_1 = parr_push(char_1,uni_para);

		double_2 = cosh ( double_1 ) ;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	else
	{
		double double_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double_1 = tan ( double_3 ) ;
		double_3 = exp ( double_3 ) ;
	}
	return char_1;
}
unsigned int find_emph_char( char parameter_1,double parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = ceil ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_2 = 1;
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		looper_1 += 1;
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			looper_2 += 1;
			float_1 = float_1 + float_1;
		}
		if(1)
		{
			return unsigned_int_1;
		}
		if(1)
		{
			return unsigned_int_2;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_1 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_2 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			int int_2 = 1;
			char char_1 = 1;
			long long_1 = 1;
			int_1 = int_1;
			float_2 = float_1 * float_2;
			int looper_3 = 0;
			while(looper_3 < 1)
			{
				looper_3 += 1;
				double_2 = pow ( double_3 , double_1 ) ;
				double_1 = sqrt ( double_2 ) ;
			}
			if(1)
			{
				return unsigned_int_3;
			}
			unsigned_int_2 = unsigned_int_4;
			int looper_4 = 0;
			while(looper_4 < 1)
			{
				looper_4 += 1;
				if(1)
				{
					double_3 = fmod ( double_1 , double_2 ) ;
				}
				if(1)
				{
					double_4 = tanh ( double_5 ) ;
				}
				else
				{
					double_5 = exp ( double_3 ) ;
				}
				double_1 = atan ( double_1 ) ;
			}
			if(1)
			{
				return unsigned_int_5;
			}
			unsigned_int_2 = unsigned_int_4;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_1 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_2 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			int int_2 = 1;
			char char_1 = 1;
			long long_1 = 1;
			double_4 = sinh ( double_2 ) ;
			unsigned_int_4 = unsigned_int_4;
			double_3 = fmod ( double_3 , double_5 ) ;
			int looper_5 = 0;
			while(looper_5 < 1)
			{
				looper_5 += 1;
				if(1)
				{
					double_1 = double_2;
				}
				double_2 = cosh ( double_4 ) ;
			}
			double_2 = ceil ( double_3 ) ;
			int looper_6 = 0;
			while(looper_6 < 1)
			{
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				float float_1 = 1;
				int int_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				float float_2 = 1;
				short short_1 = 1;
				float float_3 = 1;
				float float_4 = 1;
				int int_2 = 1;
				char char_1 = 1;
				long long_1 = 1;
				looper_6 += 1;
				char_1 = char_1;
			}
			if(1)
			{
				return unsigned_int_4;
			}
			if(1)
			{
				if(1)
				{
					return unsigned_int_5;
				}
				else
				{
				}
			}
			short_1 = short_1;
			float_3 = float_4;
			int looper_7 = 0;
			while(looper_7 < 1)
			{
				looper_7 += 1;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					float float_1 = 1;
					int int_1 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					float float_2 = 1;
					short short_1 = 1;
					float float_3 = 1;
					float float_4 = 1;
					int int_2 = 1;
					char char_1 = 1;
					long long_1 = 1;
					long_1 = long_1 + long_1;
				}
				double_4 = double_3 + double_4;
			}
			if(1)
			{
				return unsigned_int_5;
			}
			int_2 = int_1;
		}
	}
	return unsigned_int_2;
}
void parse_emph1( unsigned int parameter_1,unsigned int parameter_2,char parameter_3,float parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double_1 = floor ( double_2 ) ;
	double_2 = tan ( double_3 ) ;
	double_1 = atan ( double_3 ) ;
	if(1)
	{
	}
	if(1)
	{
		double_1 = log10 ( double_2 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		char_1 = new_work_buffer(long_1,563);

		double_3 = ceil ( double_2 ) ;
		if(1)
		{
		}
		double_2 = floor ( double_1 ) ;
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_3 = 1;
			long long_4 = 1;
			unsigned_int_1 = find_emph_char(char_1,double_2,char_2);

			double_3 = ldexp ( double_1 , int_3 ) ;
			long_2 = parse_inline(short_1,short_2,char_3,unsigned_int_2);

			double_4 = atan ( double_5 ) ;
			double_3 = double_2 * double_4;
			long_1 = long_3 + long_4;
		}
	}
	double_1 = release_work_buffer(int_1,int_1);

}
char char_emphasis( short parameter_1,char parameter_2,char parameter_3,int parameter_4,short parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	char char_4 = 1;
	char char_5 = 1;
	parse_emph1(unsigned_int_1,unsigned_int_2,char_1,float_1,char_2);

	float_1 = parse_emph2(int_1,double_1,char_1,float_1,char_3);

	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	int_2 = parse_emph3(long_1,short_1,char_1,double_1,char_2);

	int_3 = int_1 + int_2;
	if(1)
	{
		if(1)
		{
			return char_1;
		}
		return char_3;
	}
	if(1)
	{
		if(1)
		{
			return char_4;
		}
		return char_2;
	}
	if(1)
	{
		if(1)
		{
			return char_4;
		}
		return char_5;
	}
	return char_1;
}
void parr_init( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = atan2 ( double_2 , double_2 ) ;
	double_2 = tanh ( double_3 ) ;
	double_2 = double_1 * double_2;
}
void arr_init( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = tanh ( double_2 ) ;
	double_2 = exp ( double_1 ) ;
	double_2 = pow ( double_3 , double_2 ) ;
}
void markdown( unsigned int parameter_1,short parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_3 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_7 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = log10 ( double_1 ) ;
	double_1 = fabs ( double_2 ) ;
	double_1 = log ( double_3 ) ;
	double_1 = asin ( double_1 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	double_3 = cosh ( double_3 ) ;
	if(1)
	{
		double_1 = acos ( double_3 ) ;
	}
	double_3 = atan2 ( double_1 , double_3 ) ;
	double_4 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_7 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long_1 = long_2;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			long long_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_3 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_7 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			short_1 = short_1;
		}
	}
	if(1)
	{
		double_4 = ldexp ( double_1 , int_1 ) ;
	}
	if(1)
	{
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		double_5 = fmod ( double_6 , double_6 ) ;
	}
	double_5 = tan ( double_3 ) ;
	double_3 = floor ( double_4 ) ;
	long_3 = long_1;
	unsigned_int_1 = unsigned_int_1;
	int looper_3 = 0;
	while(looper_3 < 1)
	{
		looper_3 += 1;
		if(1)
		{
			char_1 = char_1 * char_2;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_7 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = log ( double_1 ) ;
		int looper_4 = 0;
		while(looper_4 < 1)
		{
			looper_4 += 1;
			double_6 = double_7;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			long long_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_3 = 1;
			double double_8 = 1;
			double double_9 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_7 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			float_3 = float_1 + float_2;
		}
		int looper_5 = 0;
		while(looper_5 < 1)
		{
			looper_5 += 1;
			if(1)
			{
				double_8 = double_1;
			}
			double_5 = sqrt ( double_8 ) ;
		}
		double_7 = pow ( double_5 , double_9 ) ;
	}
	if(1)
	{
		double_2 = log ( double_10 ) ;
	}
	if(1)
	{
		double_9 = log10 ( double_1 ) ;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	double_8 = exp ( double_5 ) ;
	if(1)
	{
		double_10 = double_10;
	}
	int_2 = int_2;
	double_9 = exp ( double_1 ) ;
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_3 = 1;
		double double_8 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_7 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double_3 = double_1;
		double_8 = fabs ( double_4 ) ;
		unsigned_int_2 = unsigned_int_3;
	}
	int_1 = int_1 * int_2;
	double_2 = fabs ( double_6 ) ;
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		double_6 = cos ( double_10 ) ;
	}
	double_1 = cos ( double_4 ) ;
}
int bufgrow( float parameter_1,long parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double_1 = sinh ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		return int_2;
	}
	double_2 = sqrt ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_2 = cos ( double_2 ) ;
	}
	char_2 = char_1 + char_1;
	if(1)
	{
		return int_1;
	}
	double_1 = asin ( double_3 ) ;
	double_4 = fabs ( double_4 ) ;
	int_3 = int_3 + int_3;
	return int_2;
}
void bufnew()
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double_1 = atan ( double_1 ) ;
	long_1 = long_1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		int int_1 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_1 = double_1;
		double_1 = double_2 * double_1;
		double_1 = tanh ( double_1 ) ;
		int_1 = int_1;
	}
}
void usage( double parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = acos ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
int main(int argc, char **argv)
{
	int uni_para =233;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_6 = 1;
	int int_3 = 1;
	short short_7 = 1;
	short short_8 = 1;
	double double_8 = 1;
	float float_3 = 1;
	double double_9 = 1;
	int int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_3 = unsigned_int_3;
	double_1 = double_2;
	double_2 = sqrt ( double_1 ) ;
	double_1 = sinh ( double_3 ) ;
	double_3 = cosh ( double_3 ) ;
	short_2 = short_1 * short_2;
	double_3 = floor ( double_1 ) ;
	double_1 = fabs ( double_2 ) ;
	double_2 = fmod ( double_2 , double_2 ) ;
	short_4 = short_3 + short_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_6 = 1;
			int int_3 = 1;
			short short_7 = 1;
			short short_8 = 1;
			double double_8 = 1;
			float float_3 = 1;
			double double_9 = 1;
			int int_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double_3 = floor ( double_2 ) ;
			int_2 = int_1 + int_2;
			float_2 = float_1 + float_2;
			float_1 = float_2;
			double_4 = sinh ( double_3 ) ;
			float_2 = float_1;
			int_2 = int_1 * int_1;
			double_5 = fmod ( double_2 , double_6 ) ;
			short_2 = short_5;
			double_4 = asin ( double_5 ) ;
		}
		char controller4vul_1[2];
		fgets(controller4vul_1 ,3 ,stdin);
		if( strcmp( controller4vul_1, "-S") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_6 = 1;
			int int_3 = 1;
			short short_7 = 1;
			short short_8 = 1;
			double double_8 = 1;
			float float_3 = 1;
			double double_9 = 1;
			int int_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			markdown(unsigned_int_4,short_6,unsigned_int_4,uni_para);

			double_7 = sqrt ( double_7 ) ;
			return int_3;
		}
		double_6 = atan ( double_6 ) ;
	}
	short_8 = short_7 * short_3;
	if(1)
	{
		short_1 = short_6;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_6 = 1;
			int int_3 = 1;
			short short_7 = 1;
			short short_8 = 1;
			double double_8 = 1;
			float float_3 = 1;
			double double_9 = 1;
			int int_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
			return int_1;
		}
	}
	double_1 = asin ( double_6 ) ;
	double_1 = tan ( double_8 ) ;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		looper_2 += 1;
		float_2 = float_3;
		int_2 = int_2;
	}
	char controller_3[3];
	fgets(controller_3 ,3 ,stdin);
	if( strcmp( controller_3, "j^") == 0)
	{
		int_1 = int_2;
	}
	double_8 = asin ( double_6 ) ;
	double_1 = log ( double_8 ) ;
	double_6 = cos ( double_1 ) ;
	if(1)
	{
		float_1 = float_3 + float_2;
	}
	double_2 = cosh ( double_9 ) ;
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_6 = 1;
		int int_3 = 1;
		short short_7 = 1;
		short short_8 = 1;
		double double_8 = 1;
		float float_3 = 1;
		double double_9 = 1;
		int int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_1;
	}
	if(1)
	{
		double_1 = acos ( double_2 ) ;
	}
	return int_4;
}
