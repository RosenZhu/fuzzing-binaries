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

unsigned int sym_is_optional( long parameter_1);
int sym_get_string_default( unsigned int parameter_1);
int conf_write_defconfig( char parameter_1);
char conf_split_config();
void sym_get_env_prop();
unsigned int conf_get_autoconfig_name();
int file_write_dep( double parameter_1);
int conf_write_autoconf();
unsigned int conf_write_string( float parameter_1,int parameter_2,char parameter_3,short parameter_4);
short conf_write_symbol( unsigned int parameter_1,char parameter_2,double parameter_3);
int conf_write( double parameter_1);
short sym_set_string_value( float parameter_1,int parameter_2);
char conf_string( short parameter_1);
double sym_set_choice_value( short parameter_1,short parameter_2);
void sym_get_choice_value( int parameter_1);
void str_free( int parameter_1);
short str_get( float parameter_1);
double get_prompt_str( short parameter_1,int parameter_2);
unsigned int expr_print_gstr_helper(long parameter_2,short parameter_3);
void expr_gstr_print( double parameter_1,long parameter_2);
float sym_type_name( int parameter_1);
void get_symbol_str( long parameter_1,int parameter_2);
int menu_get_help( int parameter_1);
void str_append( unsigned int parameter_1,short parameter_2);
void str_printf( char parameter_1,long parameter_2,long parameter_3);
void menu_get_ext_help( float parameter_1,double parameter_2);
int str_new();
double print_help( long parameter_1);
double sym_set_tristate_value( int parameter_1,float parameter_2);
long strip( char parameter_1);
void xfgets( char parameter_1,int parameter_2,char parameter_3);
long check_stdin();
char conf_askvalue( short parameter_1,short parameter_2);
unsigned int menu_has_help( unsigned int parameter_1);
char conf_sym( char parameter_1);
long conf_choice( char parameter_1);
unsigned int menu_get_prompt( unsigned int parameter_1);
short menu_get_parent_menu( unsigned int parameter_1);
short sym_is_changable( unsigned int parameter_1);
void check_conf( int parameter_1);
int menu_is_visible( int parameter_1);
long conf( double parameter_1);
void set_all_choice_values();
unsigned int randomize_choice_values( int parameter_1);
void sym_clear_all_valid();
void conf_set_all_new_symbols();
char conf_get_changed();
char sym_tristate_within_range( char parameter_1,short parameter_2);
double sym_string_within_range( double parameter_1,float parameter_2);
char sym_string_valid( float parameter_1,char parameter_2);
float conf_set_sym_val( double parameter_1,int parameter_2,int parameter_3,char parameter_4);
double conf_warning( short parameter_1,char parameter_2);
long sym_find( double parameter_1);
int conf_message( double parameter_1,int parameter_2);
void sym_add_change_count( int parameter_1);
float zconf_fopen( unsigned int parameter_1);
int conf_read_simple( short parameter_1,int parameter_2,int uni_para);
void sym_set_change_count( int parameter_1);
int conf_read( long parameter_1);
void sym_set_all_changed();
int sym_get_range_val( short parameter_1,int parameter_2);
void sym_get_range_prop( char parameter_1);
double sym_validate_range( float parameter_1);
short sym_choice_default( char parameter_1);
long sym_calc_choice( int parameter_1);
double expr_get_leftmost_symbol( int parameter_1);
float expr_is_no( char parameter_1);
double expr_extract_eq_or( long parameter_1,unsigned int parameter_2);
unsigned int expr_is_yes( int parameter_1);
void expr_extract_eq( int parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int uni_para);
short expr_extract_eq_and( char parameter_1,unsigned int parameter_2,int uni_para);
int expr_alloc_one( short parameter_1,short parameter_2);
short expr_transform( unsigned int parameter_1);
short expr_eliminate_dups2( char parameter_1,long parameter_2,char parameter_3,int uni_para);
unsigned int expr_join_and( short parameter_1,long parameter_2);
unsigned int expr_alloc_comp( double parameter_1,double parameter_2,long parameter_3);
void xfwrite( char parameter_1,long parameter_2,short parameter_3,short parameter_4);
unsigned int expr_print_file_helper(long parameter_2,int parameter_3);
int expr_compare_type( long parameter_1,short parameter_2);
void expr_print( int parameter_1,long parameter_2,int parameter_3,long parameter_4,int parameter_6);
void expr_fprint( double parameter_1,long parameter_2);
double expr_eliminate_yn( char parameter_1,int uni_para);
int expr_alloc_symbol( short parameter_1);
void expr_free( float parameter_1);
unsigned int __expr_eliminate_eq( long parameter_1,short parameter_2,float parameter_3);
void expr_eliminate_eq( long parameter_1,int parameter_2,int uni_para);
int expr_eq( double parameter_1,int parameter_2,int uni_para);
double expr_join_or( float parameter_1,int parameter_2);
void expr_eliminate_dups1( double parameter_1,int parameter_2,short parameter_3);
int expr_eliminate_dups( int parameter_1,int uni_para);
long expr_copy( short parameter_1);
double expr_alloc_two( unsigned int parameter_1,double parameter_2,float parameter_3);
double expr_alloc_and( float parameter_1,float parameter_2);
int expr_simplify_unmet_dep( char parameter_1,unsigned int parameter_2,int uni_para);
unsigned int sym_get_default_prop( long parameter_1);
unsigned int sym_is_choice( char parameter_1);
double sym_has_value();
float prop_get_symbol( double parameter_1);
float sym_get_choice_prop( double parameter_1);
double sym_get_type( int parameter_1);
void sym_set_changed( unsigned int parameter_1);
short sym_get_tristate_value();
float sym_get_string_value( unsigned int parameter_1);
unsigned int expr_calc_value( float parameter_1);
double sym_calc_visibility( unsigned int parameter_1);
float sym_is_choice_value( short parameter_1);
void sym_calc_value( short parameter_1,int uni_para);
double strhash( int parameter_1);
char sym_lookup( short parameter_1,int parameter_2);
long conf_expand_value( char parameter_1);
int conf_get_default_confname();
char conf_get_configname();
unsigned int sym_is_optional( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int sym_get_string_default( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = cos ( double_2 ) ;
	char_1 = char_2;
	float_1 = prop_get_symbol(double_3);

	double_4 = cosh ( double_3 ) ;
	double_2 = fmod ( double_1 , double_4 ) ;
	float_1 = sym_is_choice_value(short_1);

	double_1 = asin ( double_2 ) ;
	double_4 = sqrt ( double_2 ) ;
	double_1 = sym_calc_visibility(unsigned_int_1);

	double_1 = double_3;
	unsigned_int_2 = sym_get_default_prop(long_1);

	double_4 = exp ( double_4 ) ;
	sym_calc_value(short_1,693);

	double_2 = cosh ( double_1 ) ;
	if(1)
	{
		{
			double_3 = log ( double_3 ) ;
			double_2 = ldexp ( double_3 , int_1 ) ;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				float float_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				long long_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				char char_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char_1 = char_3;
				double_5 = double_3;
			}
		}
	}
	unsigned_int_2 = expr_calc_value(float_1);

	int_1 = int_2 * int_1;
	if(1)
	{
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, ">U") > 0)
		{
			double_3 = double_3;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_4 = tan ( double_6 ) ;
	}
	{
		{
			return int_1;
			return int_2;
			return int_3;
		}
		return int_3;
		return int_2;
	}
	return int_1;
}
int conf_write_defconfig( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_4 = 1;
	int int_4 = 1;
	short short_3 = 1;
	double double_7 = 1;
	int int_3 = 1;
	int int_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_8 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = fmod ( double_2 , double_1 ) ;
	float_1 = sym_get_string_value(unsigned_int_1);

	int_1 = int_2;
	int_2 = sym_get_string_default(unsigned_int_1);

	float_2 = sym_get_choice_prop(double_1);

	short_1 = sym_get_tristate_value();

	double_1 = tan ( double_1 ) ;
	short_1 = conf_write_symbol(unsigned_int_1,char_1,double_3);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		return int_1;
	}
	sym_calc_value(short_1,782);

	unsigned_int_2 = sym_is_optional(long_1);

	double_1 = pow ( double_2 , double_4 ) ;
	double_3 = double_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_4 = 1;
		int int_4 = 1;
		short short_3 = 1;
		double double_7 = 1;
		int int_3 = 1;
		int int_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_8 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		looper_1 += 1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			if(1)
			{
				double_4 = ldexp ( double_5 , int_1 ) ;
			}
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_4 = 1;
			int int_4 = 1;
			short short_3 = 1;
			double double_7 = 1;
			int int_3 = 1;
			int int_5 = 1;
			double double_6 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_8 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = double_6;
			if(1)
			{
				double_2 = cosh ( double_1 ) ;
			}
			char_3 = char_2 + char_2;
			if(1)
			{
				sym_clear_all_valid();

				char_1 = char_4;
			}
			char controller_7[5];
			fgets(controller_7 ,5 ,stdin);
			if( strcmp( controller_7, "Vbe3") > 0)
			{
				char_1 = char_1 + char_3;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				float float_2 = 1;
				short short_1 = 1;
				char char_1 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_2 = 1;
				long long_1 = 1;
				double double_4 = 1;
				double double_5 = 1;
				char char_4 = 1;
				int int_4 = 1;
				short short_3 = 1;
				double double_7 = 1;
				int int_3 = 1;
				int int_5 = 1;
				double double_6 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_8 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double_3 = atan2 ( double_7 , double_2 ) ;
				short_2 = short_2;
				unsigned_int_2 = unsigned_int_3;
				double_1 = tan ( double_5 ) ;
				if(1)
				{
					if(1)
					{
						short_1 = sym_is_changable(unsigned_int_2);

						int_2 = int_1 * int_3;
					}
				}
			}
			int_4 = menu_is_visible(int_4);

			float_1 = sym_is_choice_value(short_1);

			double_8 = sqrt ( double_8 ) ;
		}
		if(1)
		{
			int_5 = int_1 + int_3;
		}
		if(1)
		{
			short_3 = sym_choice_default(char_4);

			double_7 = fabs ( double_1 ) ;
		}
		else
		{
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				if(1)
				{
					int_5 = int_4 + int_3;
				}
			}
		}
	}
	double_1 = log ( double_3 ) ;
	return int_2;
	unsigned_int_1 = sym_is_choice(char_1);

	float_2 = prop_get_symbol(double_5);

}
char conf_split_config()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	short short_3 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_10 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned_int_1 = conf_get_autoconfig_name();

	double_1 = fabs ( double_2 ) ;
	double_3 = log10 ( double_1 ) ;
	short_1 = sym_get_tristate_value();

	double_4 = log10 ( double_4 ) ;
	unsigned_int_2 = unsigned_int_3;
	int_1 = conf_read_simple(short_2,int_1,546);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = tanh ( double_3 ) ;
	char_1 = char_2;
	double_4 = exp ( double_5 ) ;
	double_4 = acos ( double_6 ) ;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	if(1)
	{
		return char_2;
	}
	double_6 = exp ( double_5 ) ;
	double_4 = pow ( double_3 , double_6 ) ;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	}
	if(1)
	{
		char_3 = char_1 + char_3;
		long_1 = long_1 + long_1;
	}
	char_3 = char_3 * char_3;
	double_6 = log10 ( double_1 ) ;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			{
				if(1)
				{
				}
				if(1)
				{
				}
			}
		}
		else
		{
			{
				if(1)
				{
				}
			}
		}
	}
	if(1)
	{
	}
	double_4 = cosh ( double_7 ) ;
	double_3 = fabs ( double_8 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_6 = log10 ( double_1 ) ;
		double_5 = double_1;
	}
	double_8 = acos ( double_2 ) ;
	float_3 = float_1 + float_2;
	if(1)
	{
		if(1)
		{
			float_1 = float_2 + float_2;
		}
		int_2 = int_2;
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			short short_3 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_10 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_4 = 1;
			looper_2 += 1;
			int_3 = int_3 * int_2;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				short short_1 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_1 = 1;
				short short_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_3 = 1;
				double double_7 = 1;
				double double_8 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_2 = 1;
				short short_3 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_10 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_4 = 1;
				double_5 = log10 ( double_3 ) ;
				unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
			}
			short_3 = short_3;
		}
		double_6 = sqrt ( double_6 ) ;
		if(1)
		{
			long_1 = long_1;
		}
	}
	int_2 = int_1 * int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		short short_3 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_10 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		int_4 = int_1;
	}
	double_1 = atan2 ( double_1 , double_9 ) ;
	sym_calc_value(short_3,448);

	float_3 = sym_get_string_value(unsigned_int_6);

	double_10 = floor ( double_7 ) ;
	return char_1;
}
void sym_get_env_prop()
{
	double double_1 = 1;
	double_1 = acos ( double_1 ) ;
}
unsigned int conf_get_autoconfig_name()
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
int file_write_dep( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	long long_1 = 1;
	char char_4 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = cos ( double_2 ) ;
	double_3 = double_1 + double_2;
	unsigned_int_1 = conf_get_autoconfig_name();

	double_1 = ceil ( double_2 ) ;
	double_4 = log10 ( double_4 ) ;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_3 = fmod ( double_2 , double_4 ) ;
	}
	double_3 = log10 ( double_3 ) ;
	double_2 = cosh ( double_2 ) ;
	if(1)
	{
		double_1 = tanh ( double_2 ) ;
	}
	else
	{
		double_3 = sinh ( double_5 ) ;
	}
	double_3 = tanh ( double_4 ) ;
	int_1 = int_2 + int_3;
	if(1)
	{
		return int_2;
	}
	unsigned_int_2 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_5 = log10 ( double_4 ) ;
		}
		else
		{
			double_3 = atan2 ( double_3 , double_4 ) ;
		}
	}
	char_3 = char_1 + char_2;
	float_1 = float_1 + float_1;
	char_3 = char_1;
	long_1 = long_1 * long_1;
	char_3 = conf_get_configname();

	double_3 = double_3;
	if(1)
	{
	}
	char_2 = char_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		long long_1 = 1;
		char char_4 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_5 = 1;
		float float_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	}
	float_1 = prop_get_symbol(double_6);

	double_4 = log10 ( double_5 ) ;
	unsigned_int_3 = unsigned_int_5;
	double_2 = tan ( double_5 ) ;
	float_1 = float_2;
	double_5 = floor ( double_6 ) ;
	double_4 = pow ( double_5 , double_2 ) ;
	long_2 = long_2 + long_1;
	return int_3;
	sym_get_env_prop();

}
int conf_write_autoconf()
{
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	double_1 = cosh ( double_1 ) ;
	short_1 = conf_write_symbol(unsigned_int_1,char_1,double_2);

	int_1 = int_2;
	int_3 = int_2;
	unsigned_int_2 = unsigned_int_3;
	double_3 = ldexp ( double_2 , int_1 ) ;
	char_1 = conf_split_config();

	double_4 = atan ( double_2 ) ;
	char_3 = char_2 * char_1;
	double_4 = ceil ( double_5 ) ;
	double_2 = fmod ( double_6 , double_7 ) ;
	if(1)
	{
		double_2 = ldexp ( double_5 , int_2 ) ;
	}
	else
	{
		int_4 = int_5;
	}
	unsigned_int_4 = conf_write_string(float_1,int_4,char_1,short_2);

	double_2 = exp ( double_1 ) ;
	float_2 = sym_get_string_value(unsigned_int_4);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_5;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_4;
	if(1)
	{
		return int_6;
	}
	double_7 = tanh ( double_3 ) ;
	double_2 = double_3;
	if(1)
	{
		return int_3;
	}
	long_1 = long_1 * long_2;
	double_4 = double_5 * double_5;
	if(1)
	{
		double_3 = fmod ( double_8 , double_8 ) ;
		return int_5;
	}
	double_3 = asin ( double_9 ) ;
	double_9 = log10 ( double_6 ) ;
	if(1)
	{
		sym_calc_value(short_2,109);

		double_1 = sqrt ( double_9 ) ;
		int_3 = int_7;
		return int_4;
	}
	unsigned_int_6 = unsigned_int_4;
	long_3 = long_2 + long_2;
	short_1 = short_3 + short_3;
	double_8 = atan2 ( double_8 , double_7 ) ;
	if(1)
	{
	}
	int_1 = int_1;
	{
		double double_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_5 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_3 = 1;
		{
			double_7 = double_2 * double_7;
			sym_clear_all_valid();

			int_3 = file_write_dep(double_9);

			unsigned_int_5 = unsigned_int_1;
			if(1)
			{
				double_1 = exp ( double_5 ) ;
			}
			double_4 = double_8;
		}
		double_6 = fabs ( double_2 ) ;
		char_2 = char_3 * char_3;
		if(1)
		{
			int_2 = int_1 + int_5;
		}
		char_2 = char_4 * char_5;
		short_2 = short_1;
	}
	double_5 = log10 ( double_9 ) ;
	short_2 = short_4;
	double_9 = ceil ( double_4 ) ;
	double_9 = tan ( double_8 ) ;
	if(1)
	{
		long_3 = long_2;
	}
	double_2 = sinh ( double_5 ) ;
	if(1)
	{
		return int_2;
	}
	unsigned_int_7 = unsigned_int_6;
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_6 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_6 = 1;
		long long_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_5 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_3 = 1;
		short_5 = sym_get_tristate_value();

		float_1 = float_3;
	}
	double_6 = cos ( double_4 ) ;
	if(1)
	{
		return int_5;
	}
	double_3 = log ( double_3 ) ;
	unsigned_int_2 = conf_get_autoconfig_name();

	int_7 = int_7;
	if(1)
	{
		return int_4;
	}
	return int_5;
	char_2 = conf_get_configname();

}
unsigned int conf_write_string( float parameter_1,int parameter_2,char parameter_3,short parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double_1 = tanh ( double_2 ) ;
	if(1)
	{
		double_3 = sinh ( double_4 ) ;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		long long_3 = 1;
		short short_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		short short_1 = 1;
		long_1 = long_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_3 = log10 ( double_4 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			long long_3 = 1;
			short short_2 = 1;
			int int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_2 = 1;
			short short_1 = 1;
			char_2 = char_1 + char_2;
			short_1 = short_1;
		}
		if(1)
		{
		}
		xfwrite(char_1,long_3,short_2,short_2);

		double_1 = log ( double_1 ) ;
	}
	int_1 = int_1;
}
short conf_write_symbol( unsigned int parameter_1,char parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	unsigned_int_1 = conf_write_string(float_1,int_1,char_1,short_1);

	double_1 = log ( double_2 ) ;
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		{
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			short short_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_5 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_2 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				int int_1 = 1;
				char char_1 = 1;
				short short_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				float float_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_5 = 1;
				double double_3 = 1;
				double double_4 = 1;
				float float_2 = 1;
				float_3 = float_1 + float_2;
			}
			double_3 = atan ( double_2 ) ;
			double_1 = double_4 + double_3;
		}
		int_1 = int_1;
		float_3 = sym_get_string_value(unsigned_int_1);

		char_2 = char_3;
		short_1 = sym_get_tristate_value();

		double_5 = log10 ( double_5 ) ;
	}
}
int conf_write( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_2 = 1;
	double double_9 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	double double_10 = 1;
	int int_7 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	double double_11 = 1;
	short short_2 = 1;
	long long_4 = 1;
	double_1 = fabs ( double_1 ) ;
	double_2 = double_1 + double_1;
	double_3 = fmod ( double_4 , double_3 ) ;
	double_1 = acos ( double_4 ) ;
	double_2 = atan2 ( double_3 , double_2 ) ;
	double_1 = cos ( double_3 ) ;
	double_2 = sqrt ( double_2 ) ;
	if(1)
	{
		double_3 = double_2 * double_5;
	}
	double_1 = pow ( double_4 , double_5 ) ;
	if(1)
	{
		double_5 = ldexp ( double_3 , int_1 ) ;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			double_5 = sqrt ( double_4 ) ;
			sym_calc_value(short_1,482);

			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			double_6 = sinh ( double_6 ) ;
		}
		if(1)
		{
			double_1 = double_3 * double_7;
			int_1 = int_1 * int_1;
			double_3 = atan ( double_1 ) ;
			if(1)
			{
				sym_clear_all_valid();

				double_8 = log10 ( double_3 ) ;
			}
			else
			{
				float_1 = float_1;
			}
		}
		else
		{
			char_1 = conf_get_changed();

			double_2 = fabs ( double_2 ) ;
		}
	}
	else
	{
		double_7 = pow ( double_5 , double_3 ) ;
	}
	int_4 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		double double_9 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		double double_10 = 1;
		int int_7 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_3 = 1;
		double double_11 = 1;
		short short_2 = 1;
		long long_4 = 1;
		unsigned_int_4 = unsigned_int_3;
		unsigned_int_1 = unsigned_int_5 + unsigned_int_2;
	}
	else
	{
		char_2 = conf_get_configname();

		double_9 = sqrt ( double_3 ) ;
		double_8 = tanh ( double_9 ) ;
	}
	if(1)
	{
		return int_5;
	}
	double_3 = cos ( double_2 ) ;
	if(1)
	{
		int_1 = conf_message(double_2,int_5);

		double_5 = atan2 ( double_7 , double_3 ) ;
	}
	unsigned_int_4 = unsigned_int_6;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		double double_9 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		double double_10 = 1;
		int int_7 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_3 = 1;
		double double_11 = 1;
		short short_2 = 1;
		long long_4 = 1;
		looper_1 += 1;
		double_6 = tanh ( double_3 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_1 = 1;
			char char_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_2 = 1;
			double double_9 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_6 = 1;
			double double_10 = 1;
			int int_7 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_2 = 1;
			long long_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_3 = 1;
			double double_11 = 1;
			short short_2 = 1;
			long long_4 = 1;
			if(1)
			{
				double_9 = double_6;
			}
			int_3 = menu_is_visible(int_6);

			double_3 = sqrt ( double_6 ) ;
			long_1 = long_1;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_1 = 1;
			char char_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_2 = 1;
			double double_9 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_6 = 1;
			double double_10 = 1;
			int int_7 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_2 = 1;
			long long_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_3 = 1;
			double double_11 = 1;
			short short_2 = 1;
			long long_4 = 1;
			float_1 = float_2 * float_3;
			if(1)
			{
				double_4 = atan ( double_6 ) ;
			}
			short_1 = conf_write_symbol(unsigned_int_6,char_2,double_7);

			double_1 = atan2 ( double_2 , double_6 ) ;
			char_1 = char_3;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_1 = 1;
			char char_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_2 = 1;
			double double_9 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_6 = 1;
			double double_10 = 1;
			int int_7 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_2 = 1;
			long long_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_3 = 1;
			double double_11 = 1;
			short short_2 = 1;
			long long_4 = 1;
			double_10 = floor ( double_11 ) ;
		}
		if(1)
		{
			sym_set_change_count(int_7);

			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
		}
		else
		{
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_1 = 1;
					unsigned int unsigned_int_1 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_8 = 1;
					float float_1 = 1;
					char char_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					char char_2 = 1;
					double double_9 = 1;
					int int_5 = 1;
					unsigned int unsigned_int_6 = 1;
					int int_6 = 1;
					double double_10 = 1;
					int int_7 = 1;
					long long_3 = 1;
					unsigned int unsigned_int_7 = 1;
					unsigned int unsigned_int_5 = 1;
					long long_2 = 1;
					long long_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					char char_3 = 1;
					double double_11 = 1;
					short short_2 = 1;
					long long_4 = 1;
					short_2 = short_2 * short_1;
				}
			}
		}
		unsigned_int_1 = menu_get_prompt(unsigned_int_2);

		long_2 = long_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_2 = 1;
		double double_9 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		double double_10 = 1;
		int int_7 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_3 = 1;
		double double_11 = 1;
		short short_2 = 1;
		long long_4 = 1;
		double_8 = double_3;
		long_4 = long_3 * long_3;
		double_8 = exp ( double_10 ) ;
		if(1)
		{
			return int_2;
		}
	}
	unsigned_int_1 = unsigned_int_7;
	double_8 = ldexp ( double_1 , int_6 ) ;
	return int_1;
}
short sym_set_string_value( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	float float_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = tanh ( double_2 ) ;
	int_1 = int_1;
	double_2 = ldexp ( double_2 , int_2 ) ;
	{
		{
			return short_1;
			return short_2;
			return short_2;
		}
		return short_3;
	}
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "U)") < 0)
	{
		return short_4;
	}
	if(1)
	{
		double_3 = pow ( double_1 , double_1 ) ;
		double_2 = sym_set_tristate_value(int_2,float_1);

		double_2 = sym_string_within_range(double_2,float_1);

		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = sqrt ( double_4 ) ;
	float_1 = float_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		float float_2 = 1;
		double double_5 = 1;
		float float_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int_3 = int_2 + int_2;
		double_2 = log ( double_4 ) ;
		sym_clear_all_valid();

		unsigned_int_1 = unsigned_int_2;
		double_3 = cosh ( double_1 ) ;
	}
	if(1)
	{
		double_5 = double_2;
	}
	else
	{
		return short_2;
	}
	double_2 = ldexp ( double_3 , int_1 ) ;
	double_3 = double_5;
	float_3 = float_3 * float_1;
	return short_3;
	sym_set_changed(unsigned_int_1);

}
char conf_string( short parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float_1 = float_1 + float_1;
	short_1 = sym_set_string_value(float_1,int_1);

	int_2 = int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		float float_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		char char_2 = 1;
		short short_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		looper_1 += 1;
		double_1 = pow ( double_1 , double_1 ) ;
		int_3 = int_4;
		int_4 = int_3;
		if(1)
		{
			float_1 = sym_get_string_value(unsigned_int_1);

			int_3 = int_1 + int_4;
		}
		if(1)
		{
			return char_1;
		}
		{
			float float_1 = 1;
			short short_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			char char_2 = 1;
			short short_2 = 1;
			double double_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			long long_3 = 1;
			if(1)
			{
				float float_1 = 1;
				short short_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				char char_2 = 1;
				short short_2 = 1;
				double double_1 = 1;
				int int_3 = 1;
				int int_4 = 1;
				double double_3 = 1;
				double double_4 = 1;
				long long_2 = 1;
				long long_3 = 1;
				double_1 = fabs ( double_1 ) ;
				double_2 = print_help(long_1);

				long_2 = long_3;
			}
			double_3 = atan ( double_3 ) ;
			char_2 = conf_askvalue(short_2,short_1);

			double_3 = fmod ( double_4 , double_2 ) ;
		}
		if(1)
		{
			return char_2;
		}
	}
}
double sym_set_choice_value( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	return double_1;
	double_1 = sym_set_tristate_value(int_1,float_1);

}
void sym_get_choice_value( int parameter_1)
{
}
void str_free( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		double_1 = exp ( double_1 ) ;
	}
	double_1 = asin ( double_1 ) ;
	int_1 = int_1 + int_2;
}
short str_get( float parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double get_prompt_str( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_4 = 1;
	float_1 = sym_get_string_value(unsigned_int_1);

	short_1 = short_2;
	double_1 = sinh ( double_1 ) ;
	str_append(unsigned_int_2,short_1);

	double_3 = double_1 + double_2;
	double_4 = atan2 ( double_2 , double_3 ) ;
	if(1)
	{
		unsigned_int_3 = expr_is_yes(int_1);

		double_1 = log10 ( double_2 ) ;
		unsigned_int_1 = unsigned_int_2;
		double_1 = fmod ( double_5 , double_2 ) ;
	}
	int_2 = int_2 * int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		expr_gstr_print(double_4,long_1);

		double_4 = log10 ( double_2 ) ;
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		char char_1 = 1;
		long long_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_4 = 1;
		double_6 = tanh ( double_7 ) ;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_1 = 1;
			double double_5 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			char char_1 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_4 = 1;
			double_5 = tan ( double_8 ) ;
			unsigned_int_2 = menu_get_prompt(unsigned_int_1);

			int_1 = int_1 * int_2;
			if(1)
			{
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_1 = 1;
				double double_5 = 1;
				int int_2 = 1;
				int int_3 = 1;
				long long_1 = 1;
				char char_1 = 1;
				long long_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_4 = 1;
				str_printf(char_1,long_2,long_2);

				int_3 = int_4;
			}
			float_2 = float_3;
		}
	}
}
unsigned int expr_print_gstr_helper(long parameter_2,short parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	str_append(unsigned_int_1,short_1);

	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	str_printf(char_1,long_1,long_1);

	short_1 = short_1 + short_2;
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double_1 = fabs ( double_2 ) ;
		float_1 = sym_get_string_value(unsigned_int_2);

		unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
		double_1 = cos ( double_1 ) ;
		if(1)
		{
			double_2 = double_3;
		}
		if(1)
		{
			double_3 = sqrt ( double_1 ) ;
		}
		int_1 = int_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			long long_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			long long_2 = 1;
			double double_4 = 1;
			long_2 = long_2 * long_1;
		}
	}
	float_3 = float_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double_4 = floor ( double_3 ) ;
	}
}
void expr_gstr_print( double parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = expr_print_gstr_helper(long_1,short_1);

	double_1 = cos ( double_2 ) ;
	expr_print(int_1,long_2,int_2,long_3,int_1);

}
float sym_type_name( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	{
		return float_1;
		return float_1;
		return float_1;
		return float_1;
		return float_2;
		return float_2;
	}
	return float_1;
}
void get_symbol_str( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_6 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	str_append(unsigned_int_1,short_1);

	double_3 = acos ( double_1 ) ;
	if(1)
	{
		float_1 = sym_get_string_value(unsigned_int_1);

		int_1 = int_1;
		int_1 = int_1 + int_1;
		if(1)
		{
			double_4 = get_prompt_str(short_2,int_1);

			double_5 = atan ( double_2 ) ;
			if(1)
			{
				str_printf(char_1,long_1,long_2);

				float_1 = sym_type_name(int_2);

				short_1 = short_1 + short_1;
				expr_gstr_print(double_3,long_3);

				double_5 = double_2;
				double_1 = double_2;
			}
		}
	}
	long_1 = long_1 + long_1;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		double_1 = acos ( double_4 ) ;
		sym_get_range_prop(char_1);

		short_2 = short_1;
	}
	else
	{
		float_1 = float_2;
	}
	double_6 = log ( double_5 ) ;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		long_3 = long_3 * long_1;
		double_1 = double_5;
		float_1 = float_2;
	}
	char_3 = char_2 * char_3;
}
int menu_get_help( int parameter_1)
{
	int int_1 = 1;
	if(1)
	{
		return int_1;
	}
	else
	{
		return int_1;
	}
}
void str_append( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1;
	if(1)
	{
		double_1 = fabs ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned_int_1 = unsigned_int_1;
			char_1 = char_1 * char_2;
		}
		double_1 = log10 ( double_1 ) ;
	}
}
void str_printf( char parameter_1,long parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	str_append(unsigned_int_1,short_1);

	long_1 = long_2;
	double_2 = double_1 * double_1;
	int_1 = int_1;
	int_3 = int_2 * int_3;
	double_1 = cosh ( double_2 ) ;
	short_2 = short_2;
}
void menu_get_ext_help( float parameter_1,double parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	int int_3 = 1;
	str_printf(char_1,long_1,long_2);

	short_2 = short_1 * short_1;
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long long_3 = 1;
			int int_3 = 1;
			double_1 = double_2;
			unsigned_int_1 = menu_has_help(unsigned_int_2);

			int_1 = menu_get_help(int_2);

			double_3 = double_3;
			get_symbol_str(long_1,int_2);

			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	else
	{
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		int int_3 = 1;
		long_3 = long_2 * long_2;
	}
	if(1)
	{
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		int int_3 = 1;
		str_append(unsigned_int_1,short_2);

		double_1 = ldexp ( double_1 , int_3 ) ;
	}
}
int str_new()
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double_1 = cos ( double_1 ) ;
	short_2 = short_1 + short_1;
	double_1 = sinh ( double_2 ) ;
	double_2 = cos ( double_3 ) ;
	unsigned_int_1 = unsigned_int_2;
	return int_1;
}
double print_help( long parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = str_new();

	short_1 = str_get(float_1);

	double_1 = pow ( double_2 , double_1 ) ;
	float_1 = float_2 * float_2;
	menu_get_ext_help(float_2,double_2);

	double_3 = sqrt ( double_2 ) ;
	str_free(int_1);

	unsigned_int_1 = unsigned_int_2;
}
double sym_set_tristate_value( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_5 = 1;
	long long_2 = 1;
	double double_6 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_3 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		double_1 = asin ( double_2 ) ;
		char_1 = sym_tristate_within_range(char_2,short_1);

		float_1 = sym_is_choice_value(short_1);

		double_1 = log10 ( double_1 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_3 = 1;
		double_3 = cosh ( double_4 ) ;
		float_2 = sym_get_choice_prop(double_3);

		double_1 = pow ( double_1 , double_2 ) ;
		double_3 = ldexp ( double_1 , int_1 ) ;
		float_3 = prop_get_symbol(double_4);

		long_1 = long_1 * long_1;
		short_2 = sym_get_tristate_value();

		double_2 = pow ( double_3 , double_5 ) ;
		long_2 = long_1 * long_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double_3 = acos ( double_4 ) ;
			}
		}
	}
	sym_set_changed(unsigned_int_2);

	sym_clear_all_valid();

	double_2 = fmod ( double_3 , double_5 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		double double_6 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_3 = 1;
		long_2 = long_3;
	}
	return double_6;
}
long strip( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_1 = tan ( double_2 ) ;
	short_1 = short_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_1 = log10 ( double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		return long_1;
	}
	float_1 = float_1;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		looper_2 += 1;
		double_1 = floor ( double_3 ) ;
	}
}
void xfgets( char parameter_1,int parameter_2,char parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	short short_1 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double double_7 = 1;
	int int_6 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_8 = 1;
	char char_2 = 1;
	double double_9 = 1;
	float float_3 = 1;
	long long_1 = 1;
	double double_10 = 1;
	int int_7 = 1;
	int int_8 = 1;
	short short_2 = 1;
	double double_11 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_12 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = fmod ( double_2 , double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_2 = tan ( double_1 ) ;
	double_1 = double_2;
	double_2 = fabs ( double_3 ) ;
	int_3 = int_1 * int_2;
	if(1)
	{
		double_3 = floor ( double_3 ) ;
	}
	if(1)
	{
		double_2 = ceil ( double_4 ) ;
		double_4 = double_3;
		if(1)
		{
			double_5 = fabs ( double_4 ) ;
		}
		if(1)
		{
			int_3 = int_2 * int_2;
		}
		if(1)
		{
			double_4 = pow ( double_5 , double_1 ) ;
		}
		if(1)
		{
			int_1 = int_4 * int_4;
		}
		else
		{
			double_1 = atan2 ( double_5 , double_1 ) ;
		}
		if(1)
		{
			double_1 = tanh ( double_6 ) ;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			double double_6 = 1;
			short short_1 = 1;
			int int_5 = 1;
			float float_2 = 1;
			double double_7 = 1;
			int int_6 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_8 = 1;
			char char_2 = 1;
			double double_9 = 1;
			float float_3 = 1;
			long long_1 = 1;
			double double_10 = 1;
			int int_7 = 1;
			int int_8 = 1;
			short short_2 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_12 = 1;
			if(1)
			{
				short_1 = short_1;
				int_5 = int_3 * int_3;
			}
			float_1 = float_2;
			if(1)
			{
				double_5 = atan2 ( double_4 , double_5 ) ;
			}
			double_2 = double_2 + double_7;
			if(1)
			{
				int_6 = int_5 + int_6;
			}
		}
	}
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_4 = 1;
		double double_6 = 1;
		short short_1 = 1;
		int int_5 = 1;
		float float_2 = 1;
		double double_7 = 1;
		int int_6 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_8 = 1;
		char char_2 = 1;
		double double_9 = 1;
		float float_3 = 1;
		long long_1 = 1;
		double double_10 = 1;
		int int_7 = 1;
		int int_8 = 1;
		short short_2 = 1;
		double double_11 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_12 = 1;
		int_6 = int_1;
		double_7 = ceil ( double_4 ) ;
		short_1 = short_1;
		if(1)
		{
			char_1 = char_1;
		}
		double_6 = double_3 * double_8;
		unsigned_int_2 = unsigned_int_2;
		double_6 = atan ( double_4 ) ;
		char_2 = char_1;
		double_5 = double_1 * double_9;
		if(1)
		{
			if(1)
			{
				double_1 = pow ( double_3 , double_1 ) ;
			}
			else
			{
				int_3 = int_1;
			}
		}
		if(1)
		{
			double_7 = atan ( double_4 ) ;
		}
		if(1)
		{
			float_2 = float_2 * float_3;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			double double_6 = 1;
			short short_1 = 1;
			int int_5 = 1;
			float float_2 = 1;
			double double_7 = 1;
			int int_6 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_8 = 1;
			char char_2 = 1;
			double double_9 = 1;
			float float_3 = 1;
			long long_1 = 1;
			double double_10 = 1;
			int int_7 = 1;
			int int_8 = 1;
			short short_2 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_12 = 1;
			short_2 = short_1;
		}
		if(1)
		{
			if(1)
			{
				double_3 = asin ( double_3 ) ;
			}
			else
			{
				long_1 = long_1;
			}
		}
		if(1)
		{
			double_9 = exp ( double_10 ) ;
		}
		if(1)
		{
			double_10 = log10 ( double_7 ) ;
		}
		if(1)
		{
			int_2 = int_5 * int_7;
		}
		else
		{
			int_4 = int_7 + int_7;
			if(1)
			{
			}
		}
		if(1)
		{
			double_6 = exp ( double_4 ) ;
			if(1)
			{
			}
		}
		double_4 = ldexp ( double_9 , int_7 ) ;
		if(1)
		{
			int_8 = int_5 * int_2;
			if(1)
			{
			}
			else
			{
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			double double_6 = 1;
			short short_1 = 1;
			int int_5 = 1;
			float float_2 = 1;
			double double_7 = 1;
			int int_6 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_8 = 1;
			char char_2 = 1;
			double double_9 = 1;
			float float_3 = 1;
			long long_1 = 1;
			double double_10 = 1;
			int int_7 = 1;
			int int_8 = 1;
			short short_2 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_12 = 1;
			long_1 = long_1;
			double_11 = tanh ( double_2 ) ;
		}
		double_6 = acos ( double_9 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			double double_6 = 1;
			short short_1 = 1;
			int int_5 = 1;
			float float_2 = 1;
			double double_7 = 1;
			int int_6 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_8 = 1;
			char char_2 = 1;
			double double_9 = 1;
			float float_3 = 1;
			long long_1 = 1;
			double double_10 = 1;
			int int_7 = 1;
			int int_8 = 1;
			short short_2 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_12 = 1;
			float_3 = float_4 + float_5;
			if(1)
			{
			}
			else
			{
			}
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_4 = 1;
			double double_6 = 1;
			short short_1 = 1;
			int int_5 = 1;
			float float_2 = 1;
			double double_7 = 1;
			int int_6 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_8 = 1;
			char char_2 = 1;
			double double_9 = 1;
			float float_3 = 1;
			long long_1 = 1;
			double double_10 = 1;
			int int_7 = 1;
			int int_8 = 1;
			short short_2 = 1;
			double double_11 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_12 = 1;
			double_5 = double_8 + double_7;
			double_4 = log10 ( double_12 ) ;
		}
		double_2 = ldexp ( double_2 , int_8 ) ;
	}
}
long check_stdin()
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double_1 = atan2 ( double_1 , double_2 ) ;
		double_2 = atan ( double_2 ) ;
		float_1 = float_2;
		double_2 = fmod ( double_3 , double_3 ) ;
	}
}
char conf_askvalue( short parameter_1,short parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	double double_5 = 1;
	char char_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_1 = char_1;
	if(1)
	{
		double_1 = ldexp ( double_2 , int_1 ) ;
	}
	double_2 = cosh ( double_3 ) ;
	int_1 = int_2 * int_3;
	if(1)
	{
		long_1 = long_1;
		int_3 = int_3;
		short_1 = sym_is_changable(unsigned_int_1);

		double_1 = atan ( double_2 ) ;
		return char_1;
	}
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		long long_2 = 1;
		double double_5 = 1;
		char char_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			double_2 = sym_get_type(int_1);

			double_4 = ceil ( double_1 ) ;
			return char_2;
		}
		long_2 = long_3;
		double_4 = cos ( double_3 ) ;
		double_5 = sym_has_value();

		unsigned_int_2 = unsigned_int_3;
		return char_2;
	}
	{
		long_1 = check_stdin();

		int_1 = int_2 * int_3;
		return char_2;
	}
	xfgets(char_2,int_3,char_2);

	long_2 = long_2 * long_1;
	return char_3;
}
unsigned int menu_has_help( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
char conf_sym( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = double_2;
	int_1 = int_1 * int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		looper_1 += 1;
		int_2 = int_2;
		if(1)
		{
			short_1 = sym_get_tristate_value();

			char_1 = conf_askvalue(short_2,short_2);

			double_3 = atan2 ( double_3 , double_2 ) ;
		}
		double_2 = cos ( double_2 ) ;
		double_2 = sqrt ( double_3 ) ;
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			unsigned_int_1 = menu_has_help(unsigned_int_2);

			double_3 = double_1;
			short_1 = short_2;
			float_2 = float_1 + float_1;
		}
		if(1)
		{
			float_3 = sym_get_string_value(unsigned_int_3);

			double_1 = double_2;
		}
		if(1)
		{
			double_2 = cos ( double_2 ) ;
		}
		if(1)
		{
			char_1 = sym_tristate_within_range(char_1,short_1);

			long_1 = strip(char_2);

			int_3 = int_1 * int_2;
		}
		if(1)
		{
			double_4 = sym_set_tristate_value(int_3,float_3);

			double_2 = print_help(long_2);

			double_2 = fmod ( double_3 , double_4 ) ;
		}
		double_2 = floor ( double_2 ) ;
		if(1)
		{
			return char_3;
		}
		double_5 = log10 ( double_4 ) ;
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int_2 = int_3;
			if(1)
			{
			}
			int_2 = int_2 + int_2;
			if(1)
			{
			}
			double_1 = ldexp ( double_6 , int_3 ) ;
			if(1)
			{
			}
			int_4 = int_3;
			int_5 = int_4;
		}
		if(1)
		{
			return char_2;
		}
		double_2 = fmod ( double_3 , double_5 ) ;
	}
}
long conf_choice( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	short short_6 = 1;
	double double_6 = 1;
	int int_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_5 = 1;
	char char_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_3 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_1 + short_1;
	double_1 = log10 ( double_1 ) ;
	if(1)
	{
		double_1 = log ( double_3 ) ;
		short_1 = short_1 + short_2;
		{
			return long_1;
			return long_2;
		}
	}
	else
	{
		{
			return long_3;
			return long_3;
		}
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		short short_6 = 1;
		double double_6 = 1;
		int int_3 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_5 = 1;
		char char_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_3 = 1;
		looper_1 += 1;
		sym_get_choice_value(int_1);

		double_1 = atan ( double_3 ) ;
		double_2 = sym_set_choice_value(short_3,short_4);

		double_4 = double_2 * double_2;
		double_2 = asin ( double_3 ) ;
		double_4 = print_help(long_4);

		unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
		double_1 = acos ( double_4 ) ;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
			}
			if(1)
			{
				short_2 = sym_is_changable(unsigned_int_3);

				long_5 = check_stdin();

				double_5 = double_4 * double_3;
			}
			double_2 = fabs ( double_3 ) ;
			if(1)
			{
				double_1 = sqrt ( double_4 ) ;
				long_4 = strip(char_1);

				long_5 = conf(double_4);

				double_2 = fabs ( double_5 ) ;
			}
			else
			{
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				double double_3 = 1;
				short short_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				int int_1 = 1;
				short short_3 = 1;
				short short_4 = 1;
				double double_4 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_2 = 1;
				char char_4 = 1;
				char char_5 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_5 = 1;
				short short_6 = 1;
				double double_6 = 1;
				int int_3 = 1;
				double double_7 = 1;
				double double_8 = 1;
				short short_5 = 1;
				char char_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_6 = 1;
				float float_3 = 1;
				short_2 = short_5 * short_6;
			}
			xfgets(char_2,int_2,char_1);

			double_5 = fabs ( double_4 ) ;
			if(1)
			{
				short_1 = sym_get_tristate_value();

				double_3 = atan2 ( double_1 , double_5 ) ;
			}
			if(1)
			{
				double_4 = double_3 * double_5;
			}
			double_2 = sqrt ( double_3 ) ;
		}
		double_2 = cosh ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_4 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			short short_6 = 1;
			double double_6 = 1;
			int int_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			char char_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_3 = 1;
			sym_calc_value(short_2,347);

			char_3 = char_4;
			double_6 = double_1;
		}
		int_3 = int_3;
		if(1)
		{
			double_4 = sinh ( double_6 ) ;
		}
		double_4 = fabs ( double_2 ) ;
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_4 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			short short_6 = 1;
			double double_6 = 1;
			int int_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			char char_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_3 = 1;
			if(1)
			{
				unsigned_int_2 = menu_get_prompt(unsigned_int_4);

				double_5 = sinh ( double_2 ) ;
				double_4 = floor ( double_2 ) ;
			}
			double_2 = acos ( double_1 ) ;
			double_5 = double_4 + double_4;
			int_4 = int_4 * int_2;
			double_5 = cos ( double_2 ) ;
			if(1)
			{
				double_4 = sym_has_value();

				double_4 = atan ( double_7 ) ;
			}
			if(1)
			{
				double_1 = cos ( double_5 ) ;
			}
			if(1)
			{
				char_4 = conf_sym(char_5);

				int_5 = menu_is_visible(int_2);

				unsigned_int_5 = menu_has_help(unsigned_int_1);

				short_2 = short_6;
			}
			else
			{
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
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
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_4 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			short short_6 = 1;
			double double_6 = 1;
			int int_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			char char_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_3 = 1;
			unsigned_int_6 = unsigned_int_3 * unsigned_int_5;
		}
		double_5 = double_8;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_1 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_4 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			char char_4 = 1;
			char char_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			short short_6 = 1;
			double double_6 = 1;
			int int_3 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_5 = 1;
			char char_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_3 = 1;
			float_2 = float_2 * float_3;
			double_5 = fabs ( double_7 ) ;
			double_8 = ceil ( double_7 ) ;
		}
		return long_2;
	}
}
unsigned int menu_get_prompt( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
		return unsigned_int_1;
	}
	if(1)
	{
		return unsigned_int_1;
	}
	return unsigned_int_1;
}
short menu_get_parent_menu( unsigned int parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = sqrt ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_2 = atan2 ( double_3 , double_3 ) ;
		char controller_1[6];
		fgets(controller_1 ,6 ,stdin);
		if( strcmp( controller_1, "#RaE<") > 0)
		{
		}
	}
	return short_1;
}
short sym_is_changable( unsigned int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
void check_conf( int parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long_1 = conf(double_1);

	long_1 = long_1;
	unsigned_int_1 = sym_is_choice(char_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	double_2 = double_1 * double_1;
	if(1)
	{
		if(1)
		{
			char controller_4[2];
			fgets(controller_4 ,2 ,stdin);
			if( strcmp( controller_4, "^") > 0)
			{
				if(1)
				{
					long long_1 = 1;
					double double_1 = 1;
					unsigned int unsigned_int_1 = 1;
					char char_1 = 1;
					double double_2 = 1;
					int int_1 = 1;
					double double_4 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_2 = 1;
					float float_1 = 1;
					short short_2 = 1;
					double double_3 = 1;
					int int_2 = 1;
					double double_5 = 1;
					int_1 = menu_is_visible(int_1);

					double_1 = double_3 + double_4;
				}
			}
			if(1)
			{
				if(1)
				{
					long long_1 = 1;
					double double_1 = 1;
					unsigned int unsigned_int_1 = 1;
					char char_1 = 1;
					double double_2 = 1;
					int int_1 = 1;
					double double_4 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_2 = 1;
					float float_1 = 1;
					short short_2 = 1;
					double double_3 = 1;
					int int_2 = 1;
					double double_5 = 1;
					short_1 = sym_is_changable(unsigned_int_2);

					float_1 = sym_is_choice_value(short_1);

					short_2 = menu_get_parent_menu(unsigned_int_2);

					int_1 = int_2 * int_2;
				}
				double_1 = sinh ( double_2 ) ;
				double_4 = tan ( double_2 ) ;
			}
		}
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_5 = 1;
		double_1 = sym_has_value();

		double_2 = fmod ( double_5 , double_4 ) ;
	}
	short_2 = sym_get_tristate_value();

}
int menu_is_visible( int parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short_1 = sym_get_tristate_value();

	long_2 = long_1 + long_1;
	double_1 = double_2;
	sym_calc_value(short_1,512);

	double_1 = sqrt ( double_3 ) ;
	if(1)
	{
		return int_1;
	}
	if(1)
	{
		if(1)
		{
			return int_2;
		}
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_3 = expr_calc_value(float_1);

		double_3 = double_3;
	}
	else
	{
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		char_1 = char_2;
	}
	if(1)
	{
		return int_2;
	}
	if(1)
	{
		return int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				short short_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				float float_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_4 = 1;
				double_4 = tan ( double_3 ) ;
			}
			return int_2;
		}
	}
	return int_1;
}
long conf( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_4 = 1;
	int int_2 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_6 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_3 = 1;
	long_3 = long_1 * long_2;
	char_2 = char_1 * char_1;
	char_4 = char_1 + char_3;
	if(1)
	{
		return long_1;
	}
	double_1 = cos ( double_1 ) ;
	long_1 = conf_choice(char_1);

	float_1 = float_1;
	if(1)
	{
		unsigned_int_1 = menu_get_prompt(unsigned_int_2);

		float_2 = float_1;
		{
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			double double_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			double double_4 = 1;
			int int_2 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_6 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_3 = 1;
			if(1)
			{
				double_1 = atan2 ( double_1 , double_2 ) ;
				return long_2;
			}
			double_1 = log ( double_2 ) ;
			if(1)
			{
				check_conf(int_1);

				double_3 = sqrt ( double_2 ) ;
			}
			char_4 = conf_string(short_1);

			double_2 = double_3 + double_4;
		}
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_6 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int_2 = menu_is_visible(int_1);

		float_2 = float_3;
	}
	if(1)
	{
		unsigned_int_2 = sym_is_choice(char_5);

		double_4 = sinh ( double_1 ) ;
		if(1)
		{
			return long_1;
		}
		double_2 = double_1 + double_1;
	}
	{
		double_4 = acos ( double_4 ) ;
		unsigned_int_2 = unsigned_int_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		double double_4 = 1;
		int int_2 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_6 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int_3 = int_3;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		char_6 = conf_sym(char_1);

		double_2 = fmod ( double_4 , double_1 ) ;
	}
}
void set_all_choice_values()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = sym_get_choice_prop(double_1);

	double_1 = asin ( double_1 ) ;
	double_2 = acos ( double_1 ) ;
	short_1 = short_1;
	double_2 = sym_has_value();

	double_3 = atan ( double_3 ) ;
	if(1)
	{
		float_1 = float_1 + float_1;
	}
	char_1 = char_1 + char_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
}
unsigned int randomize_choice_values( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	char char_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = cosh ( double_2 ) ;
	float_1 = sym_get_choice_prop(double_3);

	char_1 = char_1;
	float_1 = float_1;
	double_3 = atan2 ( double_2 , double_1 ) ;
	if(1)
	{
		return unsigned_int_1;
	}
	double_1 = ceil ( double_2 ) ;
	double_2 = atan ( double_1 ) ;
	double_2 = atan2 ( double_2 , double_4 ) ;
	char_1 = char_1 * char_2;
	double_1 = pow ( double_5 , double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = cos ( double_3 ) ;
		unsigned_int_2 = unsigned_int_3;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		char char_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_4 = unsigned_int_2 * unsigned_int_2;
	}
	int_1 = int_1 + int_2;
	double_5 = fabs ( double_5 ) ;
}
void sym_clear_all_valid()
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long_1 = long_1 + long_2;
	sym_calc_value(short_1,922);

	double_1 = cos ( double_1 ) ;
	sym_add_change_count(int_1);

	double_1 = asin ( double_1 ) ;
	int_1 = int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "$5") > 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double_2 = double_3;
	}
}
void conf_set_all_new_symbols()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double_1 = sinh ( double_2 ) ;
	unsigned_int_1 = randomize_choice_values(int_1);

	int_2 = int_2 * int_2;
	if(1)
	{
		float_1 = float_1 + float_1;
		if(1)
		{
			double_2 = ceil ( double_1 ) ;
			if(1)
			{
				double_2 = ldexp ( double_2 , int_1 ) ;
			}
		}
	}
	if(1)
	{
	}
	{
		{
			double_3 = cosh ( double_1 ) ;
			sym_calc_value(short_1,675);

			double_2 = asin ( double_2 ) ;
			double_2 = floor ( double_3 ) ;
			float_1 = float_1;
			if(1)
			{
				double_3 = log ( double_2 ) ;
			}
			else
			{
				if(1)
				{
					double_3 = fmod ( double_1 , double_3 ) ;
				}
			}
			else
			{
				double_4 = sym_get_type(int_1);

				double_2 = double_2 * double_2;
			}
		}
		if(1)
		{
			unsigned_int_2 = sym_is_choice(char_1);

			double_1 = asin ( double_1 ) ;
		}
	}
	double_5 = double_2 * double_1;
	if(1)
	{
	}
	sym_clear_all_valid();

	double_3 = pow ( double_3 , double_4 ) ;
	if(1)
	{
		double_6 = sym_has_value();

		char_1 = char_1;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		long_1 = long_1;
	}
	set_all_choice_values();

}
char conf_get_changed()
{
	char char_1 = 1;
	return char_1;
}
char sym_tristate_within_range( char parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = sym_get_type(int_1);

	float_1 = sym_is_choice_value(short_1);

	double_2 = floor ( double_1 ) ;
	if(1)
	{
		return char_1;
	}
	if(1)
	{
		return char_1;
	}
	if(1)
	{
		return char_1;
	}
	if(1)
	{
		return char_2;
	}
	if(1)
	{
		return char_2;
	}
	return char_2;
}
double sym_string_within_range( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_4 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_2;
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		char char_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		char char_4 = 1;
		short short_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		return double_1;
		if(1)
		{
			return double_2;
		}
		sym_get_range_prop(char_1);

		int_1 = sym_get_range_val(short_1,int_1);

		double_2 = floor ( double_2 ) ;
		if(1)
		{
			return double_1;
		}
		char_3 = char_1 * char_2;
		return double_2;
		if(1)
		{
			return double_1;
		}
		double_3 = atan ( double_1 ) ;
		if(1)
		{
			return double_4;
		}
		char_1 = sym_string_valid(float_1,char_4);

		char_3 = sym_tristate_within_range(char_4,short_2);

		double_2 = pow ( double_4 , double_1 ) ;
		return double_5;
		{
			return double_6;
			return double_3;
			return double_4;
		}
		return double_1;
		return double_2;
	}
}
char sym_string_valid( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_3 = 1;
	double double_6 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_2 = double_1 + double_1;
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_3 = 1;
		double double_6 = 1;
		double double_4 = 1;
		double double_5 = 1;
		return char_1;
		if(1)
		{
			double_3 = sinh ( double_3 ) ;
		}
		if(1)
		{
			return char_2;
		}
		if(1)
		{
			return char_3;
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			looper_1 += 1;
			if(1)
			{
				return char_2;
			}
		}
		return char_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_3 = 1;
			double double_6 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_4 = atan2 ( double_5 , double_6 ) ;
		}
		double_2 = atan ( double_6 ) ;
		do
		{
			if(1)
			{
				return char_3;
			}
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		double_3 = sinh ( double_3 ) ;
		looper_2 += 1;
		return char_3;
		{
			return char_2;
		}
		return char_3;
		return char_4;
	}
}
float conf_set_sym_val( double parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_2;
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			double_1 = sinh ( double_1 ) ;
			float_1 = float_2;
		}
		if(1)
		{
			float_1 = float_2;
			double_2 = tan ( double_1 ) ;
		}
		if(1)
		{
			double_2 = floor ( double_2 ) ;
			int_1 = int_1;
		}
		int_2 = int_1 + int_2;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double_3 = tanh ( double_1 ) ;
			}
			double_1 = fmod ( double_2 , double_1 ) ;
			unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
		}
		if(1)
		{
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_5 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				char char_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned_int_5 = unsigned_int_3;
			}
			char_1 = char_2;
		}
		if(1)
		{
			double_1 = atan2 ( double_3 , double_3 ) ;
			return float_2;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
			double_3 = double_3;
		}
		else
		{
			unsigned_int_4 = unsigned_int_4 + unsigned_int_2;
			return float_1;
		}
		long_1 = long_2;
	}
	return float_1;
	double_1 = conf_warning(short_1,char_1);

	char_1 = sym_string_valid(float_1,char_1);

}
double conf_warning( short parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	short short_1 = 1;
	double_1 = double_2;
	double_1 = acos ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = tan ( double_4 ) ;
	int_1 = int_2;
	double_5 = floor ( double_1 ) ;
	short_1 = short_1;
}
long sym_find( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double_1 = cosh ( double_2 ) ;
	float_1 = float_2;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		{
			return long_1;
			return long_1;
			return long_2;
		}
	}
	double_3 = strhash(int_1);

	short_1 = short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
		}
	}
	return long_1;
}
int conf_message( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = atan2 ( double_2 , double_2 ) ;
	char_1 = char_2;
	if(1)
	{
		double_2 = pow ( double_2 , double_2 ) ;
	}
}
void sym_add_change_count( int parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	sym_set_change_count(int_1);

	double_1 = double_1 + double_1;
}
float zconf_fopen( unsigned int parameter_1)
{
	float float_1 = 1;
	return float_1;
}
int conf_read_simple( short parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_9 = 1;
	double double_10 = 1;
	char char_5 = 1;
	double double_12 = 1;
	float float_1 = 1;
	double double_11 = 1;
	char char_4 = 1;
	char char_6 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	short_2 = short_1 + short_1;
	short_1 = short_2 + short_2;
	long_1 = long_1;
	double_2 = exp ( double_3 ) ;
	char controller4vul_91[4];
	fgets(controller4vul_91 ,5 ,stdin);
	if( strcmp( controller4vul_91, "L[~T") == 0)
	{
		sym_calc_value(short_1,uni_para);

		char_2 = char_1 + char_1;
	}
	else
	{
		double_3 = ldexp ( double_3 , int_1 ) ;
		double_2 = log ( double_1 ) ;
		double_5 = double_4 + double_5;
		if(1)
		{
			double_4 = double_5;
		}
		int_2 = int_1 * int_2;
		if(1)
		{
			if(1)
			{
				double_1 = cosh ( double_3 ) ;
			}
			return int_3;
		}
		if(1)
		{
		}
		int_1 = int_1;
		double_1 = asin ( double_3 ) ;
		if(1)
		{
			double_6 = log10 ( double_1 ) ;
			int_2 = int_3 * int_2;
		}
	}
	if(1)
	{
		return int_3;
	}
	short_1 = short_2;
	double_6 = atan ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_2 = long_1 * long_2;
	double_7 = tanh ( double_5 ) ;
	double_7 = atan2 ( double_1 , double_2 ) ;
	short_1 = short_2;
	if(1)
	{
		double_8 = cosh ( double_2 ) ;
	}
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		int_1 = int_1 * int_1;
		double_3 = double_5 * double_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_9 = 1;
		double double_10 = 1;
		char char_5 = 1;
		double double_12 = 1;
		float float_1 = 1;
		double double_11 = 1;
		char char_4 = 1;
		char char_6 = 1;
		looper_1 += 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		char_2 = char_3 + char_1;
		if(1)
		{
			if(1)
			{
			}
			unsigned_int_4 = unsigned_int_4;
			if(1)
			{
			}
			double_8 = pow ( double_7 , double_2 ) ;
			if(1)
			{
			}
			if(1)
			{
				double_4 = acos ( double_5 ) ;
				if(1)
				{
					double_6 = pow ( double_7 , double_8 ) ;
					int_1 = int_2 * int_1;
				}
			}
			else
			{
				double_6 = double_2;
				if(1)
				{
					double double_1 = 1;
					int int_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					long long_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_6 = 1;
					unsigned int unsigned_int_1 = 1;
					long long_2 = 1;
					double double_7 = 1;
					double double_8 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_3 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_9 = 1;
					double double_10 = 1;
					char char_5 = 1;
					double double_12 = 1;
					float float_1 = 1;
					double double_11 = 1;
					char char_4 = 1;
					char char_6 = 1;
					float_1 = float_1 + float_1;
				}
			}
			if(1)
			{
				double_4 = sqrt ( double_2 ) ;
			}
			{
				double_9 = fabs ( double_8 ) ;
				int_1 = int_3;
				double_10 = cosh ( double_4 ) ;
			}
		}
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_9 = 1;
			double double_10 = 1;
			char char_5 = 1;
			double double_12 = 1;
			float float_1 = 1;
			double double_11 = 1;
			char char_4 = 1;
			char char_6 = 1;
			double_2 = cosh ( double_11 ) ;
			if(1)
			{
			}
			double_7 = log10 ( double_4 ) ;
			double_9 = tan ( double_11 ) ;
			if(1)
			{
				double_7 = ldexp ( double_10 , int_4 ) ;
				if(1)
				{
					double double_1 = 1;
					int int_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					long long_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_6 = 1;
					unsigned int unsigned_int_1 = 1;
					long long_2 = 1;
					double double_7 = 1;
					double double_8 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_3 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_9 = 1;
					double double_10 = 1;
					char char_5 = 1;
					double double_12 = 1;
					float float_1 = 1;
					double double_11 = 1;
					char char_4 = 1;
					char char_6 = 1;
					char_5 = char_4 + char_3;
				}
			}
			if(1)
			{
				double_5 = pow ( double_6 , double_7 ) ;
				if(1)
				{
					int_2 = int_4;
					int_3 = int_4;
				}
			}
			else
			{
				double_9 = acos ( double_10 ) ;
				if(1)
				{
					int_3 = int_1;
				}
			}
			if(1)
			{
				unsigned_int_4 = unsigned_int_1 + unsigned_int_1;
			}
			if(1)
			{
			}
		}
		else
		{
			if(1)
			{
				double_4 = double_10 * double_12;
			}
		}
		if(1)
		{
			int_3 = int_1 * int_4;
			{
				if(1)
				{
					double double_1 = 1;
					int int_1 = 1;
					short short_1 = 1;
					short short_2 = 1;
					long long_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					char char_1 = 1;
					char char_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_2 = 1;
					int int_3 = 1;
					double double_6 = 1;
					unsigned int unsigned_int_1 = 1;
					long long_2 = 1;
					double double_7 = 1;
					double double_8 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_3 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_9 = 1;
					double double_10 = 1;
					char char_5 = 1;
					double double_12 = 1;
					float float_1 = 1;
					double double_11 = 1;
					char char_4 = 1;
					char char_6 = 1;
					char_5 = char_6;
					double_3 = log ( double_12 ) ;
				}
				if(1)
				{
					double_9 = double_4;
				}
				double_1 = log ( double_8 ) ;
			}
			double_2 = exp ( double_6 ) ;
		}
	}
	double_2 = sinh ( double_8 ) ;
	if(1)
	{
		double_1 = asin ( double_5 ) ;
	}
	return int_4;
}
void sym_set_change_count( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = double_2;
	double_2 = tan ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
}
int conf_read( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	double double_6 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_7 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_1 = char_2;
	float_1 = sym_is_choice_value(short_1);

	double_1 = fabs ( double_1 ) ;
	long_1 = long_1 * long_1;
	short_2 = short_2;
	if(1)
	{
		return int_1;
	}
	unsigned_int_3 = sym_is_choice(char_1);

	char_2 = char_1 * char_2;
	if(1)
	{
		sym_calc_value(short_2,944);

		double_2 = log ( double_1 ) ;
	}
	if(1)
	{
		{
			if(1)
			{
			}
			if(1)
			{
				short_2 = sym_get_tristate_value();

				int_2 = int_3;
			}
			if(1)
			{
				sym_set_change_count(int_4);

				float_2 = sym_get_choice_prop(double_2);

				double_3 = pow ( double_1 , double_3 ) ;
			}
		}
	}
	if(1)
	{
		char_4 = char_3 + char_1;
	}
	int_4 = int_2;
	if(1)
	{
	}
	double_4 = asin ( double_2 ) ;
	double_5 = sym_string_within_range(double_1,float_3);

	double_5 = floor ( double_5 ) ;
	if(1)
	{
		double_3 = floor ( double_5 ) ;
	}
	double_6 = sym_has_value();

	int_4 = int_2;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			short short_1 = 1;
			double double_1 = 1;
			long long_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			double double_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_3 = 1;
			double double_6 = 1;
			int int_5 = 1;
			short short_3 = 1;
			double double_7 = 1;
			long long_2 = 1;
			double_5 = floor ( double_7 ) ;
		}
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			short short_1 = 1;
			double double_1 = 1;
			long long_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			double double_3 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_3 = 1;
			double double_6 = 1;
			int int_5 = 1;
			short short_3 = 1;
			double double_7 = 1;
			long long_2 = 1;
			if(1)
			{
			}
			char_4 = char_3;
			sym_add_change_count(int_1);

			long_1 = long_2;
		}
	}
	int_3 = int_2 + int_5;
	return int_4;
	int_3 = conf_read_simple(short_3,int_1,53);

}
void sym_set_all_changed()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	sym_set_changed(unsigned_int_1);

	double_2 = double_2;
	double_3 = atan2 ( double_4 , double_1 ) ;
}
int sym_get_range_val( short parameter_1,int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	sym_calc_value(short_1,433);

	unsigned_int_1 = unsigned_int_2;
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_1;
		long_1 = long_1 + long_2;
	}
	return int_1;
}
void sym_get_range_prop( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_3 = float_1 * float_2;
	unsigned_int_1 = expr_calc_value(float_3);

	double_1 = acos ( double_2 ) ;
	if(1)
	{
	}
}
double sym_validate_range( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 + char_2;
	double_1 = sqrt ( double_1 ) ;
	double_1 = double_1 * double_1;
	{
		double_2 = floor ( double_3 ) ;
		double_4 = acos ( double_2 ) ;
		return double_5;
	}
	double_6 = double_7;
	if(1)
	{
		return double_1;
	}
	double_3 = cosh ( double_8 ) ;
	sym_get_range_prop(char_2);

	short_1 = short_2;
	if(1)
	{
		double_2 = atan2 ( double_7 , double_2 ) ;
		if(1)
		{
			return double_3;
		}
	}
	if(1)
	{
		int_1 = sym_get_range_val(short_1,int_2);

		int_2 = int_2;
	}
	else
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	double_4 = cosh ( double_8 ) ;
}
short sym_choice_default( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double_1 = acos ( double_2 ) ;
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_3 = log ( double_1 ) ;
	if(1)
	{
	}
	unsigned_int_2 = expr_calc_value(float_1);

	float_1 = prop_get_symbol(double_2);

	int_2 = int_1 * int_1;
	if(1)
	{
		return short_1;
	}
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
		return short_2;
	}
	return short_1;
	float_2 = sym_get_choice_prop(double_1);

}
long sym_calc_choice( int parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = sym_choice_default(char_1);

	double_1 = log ( double_2 ) ;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_3 = double_3 + double_3;
	double_2 = fmod ( double_2 , double_1 ) ;
	if(1)
	{
		return long_2;
	}
	long_1 = long_1 * long_2;
	if(1)
	{
		double_2 = fabs ( double_3 ) ;
	}
	return long_3;
	float_1 = sym_get_choice_prop(double_2);

	double_4 = sym_calc_visibility(unsigned_int_2);

}
double expr_get_leftmost_symbol( int parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_2 = 1;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "QNo e") < 0)
	{
		return double_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_2 = 1;
		looper_1 += 1;
		long_1 = expr_copy(short_1);

		double_2 = acos ( double_1 ) ;
	}
	return double_3;
}
float expr_is_no( char parameter_1)
{
	float float_1 = 1;
	return float_1;
}
double expr_extract_eq_or( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = log ( double_2 ) ;
	double_2 = exp ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_1 = expr_eliminate_yn(char_1,906);

		double_2 = sqrt ( double_2 ) ;
		float_2 = float_1 + float_1;
	}
	return double_3;
	expr_extract_eq(int_1,unsigned_int_1,short_1,double_1,234);

}
unsigned int expr_is_yes( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
void expr_extract_eq( int parameter_1,unsigned int parameter_2,short parameter_3,double parameter_4,int uni_para)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_3 = 1;
	char controller4vul_97[4];
	fgets(controller4vul_97 ,5 ,stdin);
	if( strcmp( controller4vul_97, ",lFu") == 0)
	{
		int_1 = expr_eq(double_1,int_2,uni_para);

		double_1 = double_2;
		double_2 = cos ( double_1 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_3 = 1;
		double_2 = fmod ( double_1 , double_2 ) ;
		float_1 = float_1;
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_3 = 1;
			float_3 = float_1 + float_2;
			double_3 = pow ( double_1 , double_2 ) ;
		}
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_3 = 1;
			short_1 = short_2;
			int_3 = int_3;
		}
	}
}
short expr_extract_eq_and( char parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	expr_extract_eq(int_1,unsigned_int_1,short_1,double_1,uni_para);

	double_1 = sinh ( double_2 ) ;
	double_3 = tanh ( double_4 ) ;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_5 = floor ( double_2 ) ;
		double_6 = log ( double_2 ) ;
	}
	return short_1;
}
int expr_alloc_one( short parameter_1,short parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float_1 = float_1;
	double_1 = floor ( double_2 ) ;
	double_1 = tanh ( double_3 ) ;
	double_3 = atan ( double_4 ) ;
	return int_1;
}
short expr_transform( unsigned int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_4 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_7 = 1;
	int int_5 = 1;
	float float_5 = 1;
	double double_8 = 1;
	long long_5 = 1;
	short_3 = short_1 * short_2;
	if(1)
	{
		return short_3;
	}
	{
		float_1 = float_1 * float_1;
		short_4 = expr_transform(unsigned_int_1);

		double_1 = tan ( double_2 ) ;
	}
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_4 = 1;
		short short_5 = 1;
		short short_6 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		double double_6 = 1;
		double double_7 = 1;
		short short_7 = 1;
		int int_5 = 1;
		float float_5 = 1;
		double double_8 = 1;
		long long_5 = 1;
		if(1)
		{
		}
		if(1)
		{
			double_2 = sinh ( double_1 ) ;
			double_1 = fabs ( double_3 ) ;
			double_2 = acos ( double_3 ) ;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_4 = 1;
			short short_5 = 1;
			short short_6 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			int int_2 = 1;
			long long_3 = 1;
			double double_5 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			short short_7 = 1;
			int int_5 = 1;
			float float_5 = 1;
			double double_8 = 1;
			long long_5 = 1;
			long_2 = long_1 + long_1;
			float_3 = float_2 * float_1;
			double_3 = log ( double_2 ) ;
			char_2 = char_1 * char_1;
		}
		if(1)
		{
			long_1 = long_1;
			int_1 = expr_alloc_symbol(short_1);

			double_2 = fabs ( double_3 ) ;
		}
		if(1)
		{
		}
		if(1)
		{
			double_1 = tan ( double_4 ) ;
			double_3 = atan ( double_1 ) ;
		}
		if(1)
		{
			int_2 = int_2 + int_2;
			long_2 = long_3;
			double_1 = cos ( double_1 ) ;
			double_1 = cos ( double_5 ) ;
		}
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_4 = 1;
			short short_5 = 1;
			short short_6 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			int int_2 = 1;
			long long_3 = 1;
			double double_5 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			short short_7 = 1;
			int int_5 = 1;
			float float_5 = 1;
			double double_8 = 1;
			long long_5 = 1;
			long_2 = long_3 + long_4;
			int_3 = int_3 + int_3;
			double_4 = tanh ( double_4 ) ;
		}
		{
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_4 = 1;
			short short_5 = 1;
			short short_6 = 1;
			double double_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			int int_2 = 1;
			long long_3 = 1;
			double double_5 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			double double_6 = 1;
			double double_7 = 1;
			short short_7 = 1;
			int int_5 = 1;
			float float_5 = 1;
			double double_8 = 1;
			long long_5 = 1;
			double_5 = fabs ( double_4 ) ;
			double_2 = ceil ( double_3 ) ;
			double_4 = double_4;
			double_1 = fmod ( double_2 , double_5 ) ;
			int_4 = int_2 * int_4;
			int_1 = int_3;
			double_5 = fabs ( double_2 ) ;
			double_5 = log10 ( double_5 ) ;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			double_4 = tan ( double_5 ) ;
			double_3 = sqrt ( double_1 ) ;
			double_4 = acos ( double_4 ) ;
			int_4 = int_3;
			double_3 = exp ( double_2 ) ;
			double_3 = log ( double_2 ) ;
			double_3 = atan ( double_3 ) ;
			double_1 = double_5 * double_1;
			int_2 = int_2 + int_1;
			double_5 = atan2 ( double_4 , double_4 ) ;
			float_4 = float_1;
			double_2 = fabs ( double_3 ) ;
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				float float_1 = 1;
				short short_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_4 = 1;
				short short_5 = 1;
				short short_6 = 1;
				double double_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_4 = 1;
				int int_2 = 1;
				long long_3 = 1;
				double double_5 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_4 = 1;
				double double_6 = 1;
				double double_7 = 1;
				short short_7 = 1;
				int int_5 = 1;
				float float_5 = 1;
				double double_8 = 1;
				long long_5 = 1;
				int_4 = expr_alloc_one(short_5,short_2);

				unsigned_int_1 = unsigned_int_2;
				double_6 = double_2;
				int_5 = int_1;
				double_1 = floor ( double_2 ) ;
				double_7 = tan ( double_6 ) ;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				float float_1 = 1;
				short short_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_4 = 1;
				short short_5 = 1;
				short short_6 = 1;
				double double_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_4 = 1;
				int int_2 = 1;
				long long_3 = 1;
				double double_5 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_4 = 1;
				double double_6 = 1;
				double double_7 = 1;
				short short_7 = 1;
				int int_5 = 1;
				float float_5 = 1;
				double double_8 = 1;
				long long_5 = 1;
				long_2 = long_2;
				double_7 = double_4 + double_3;
				double_5 = sqrt ( double_3 ) ;
				short_6 = short_6 + short_6;
				float_5 = float_5;
			}
			if(1)
			{
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				float float_1 = 1;
				short short_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_4 = 1;
				short short_5 = 1;
				short short_6 = 1;
				double double_3 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_4 = 1;
				int int_2 = 1;
				long long_3 = 1;
				double double_5 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_4 = 1;
				double double_6 = 1;
				double double_7 = 1;
				short short_7 = 1;
				int int_5 = 1;
				float float_5 = 1;
				double double_8 = 1;
				long long_5 = 1;
				char_1 = char_1 + char_2;
				double_5 = log10 ( double_2 ) ;
				unsigned_int_1 = unsigned_int_1;
				double_8 = log ( double_6 ) ;
				long_5 = long_5;
			}
			short_4 = short_7 * short_5;
		}
		double_5 = atan2 ( double_5 , double_1 ) ;
	}
	return short_6;
}
short expr_eliminate_dups2( char parameter_1,long parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_4 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	char controller4vul_96[4];
	fgets(controller4vul_96 ,5 ,stdin);
	if( strcmp( controller4vul_96, "Pg4,") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		long long_4 = 1;
		short_1 = expr_extract_eq_and(char_1,unsigned_int_1,uni_para);

		long_3 = long_1 * long_2;
		double_1 = log ( double_3 ) ;
		return short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		long long_4 = 1;
		int_2 = int_1 * int_2;
		double_2 = floor ( double_2 ) ;
	}
	if(1)
	{
		return short_2;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		double double_3 = 1;
		int int_2 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_5 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_2 = 1;
		long long_4 = 1;
		double_4 = tan ( double_1 ) ;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		double_1 = log ( double_3 ) ;
		double_5 = log ( double_3 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_3 = 1;
			double double_3 = 1;
			int int_2 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_2 = 1;
			long long_4 = 1;
			double_2 = cosh ( double_4 ) ;
			double_1 = ceil ( double_1 ) ;
			char_1 = char_2 + char_2;
		}
		double_2 = acos ( double_5 ) ;
		int_3 = int_2;
		int_3 = int_2 * int_3;
		double_5 = sinh ( double_2 ) ;
		double_2 = fmod ( double_1 , double_1 ) ;
		unsigned_int_4 = unsigned_int_2;
		double_1 = cos ( double_2 ) ;
		char controller_4[5];
		fgets(controller_4 ,5 ,stdin);
		if( strcmp( controller_4, "?>N}") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_3 = 1;
			double double_3 = 1;
			int int_2 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_2 = 1;
			long long_4 = 1;
			double_4 = double_4;
			double_3 = tanh ( double_2 ) ;
			long_4 = long_3 + long_4;
		}
		double_5 = tan ( double_2 ) ;
		float_2 = float_1 + float_1;
		float_2 = float_1 + float_1;
		float_1 = float_3;
	}
}
unsigned int expr_join_and( short parameter_1,long parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	int int_1 = 1;
	short short_1 = 1;
	long long_4 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_2 = 1;
	expr_fprint(double_1,long_1);

	double_1 = sinh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		return unsigned_int_2;
	}
	if(1)
	{
		return unsigned_int_3;
	}
	if(1)
	{
		return unsigned_int_4;
	}
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		int int_1 = 1;
		short short_1 = 1;
		long long_4 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_2 = 1;
		long_3 = long_2 * long_2;
		if(1)
		{
			return unsigned_int_5;
		}
		double_2 = fmod ( double_2 , double_3 ) ;
	}
	else
	{
		double_2 = log10 ( double_3 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		int int_1 = 1;
		short short_1 = 1;
		long long_4 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_2 = 1;
		if(1)
		{
			return unsigned_int_3;
		}
		float_2 = float_1 + float_1;
	}
	else
	{
		double_3 = sqrt ( double_4 ) ;
	}
	if(1)
	{
		return unsigned_int_2;
	}
	if(1)
	{
		return unsigned_int_3;
	}
	if(1)
	{
		return unsigned_int_6;
	}
	if(1)
	{
		return unsigned_int_6;
	}
	if(1)
	{
		return unsigned_int_4;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_6 = 1;
			int int_1 = 1;
			short short_1 = 1;
			long long_4 = 1;
			long long_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_2 = 1;
			double_5 = log10 ( double_4 ) ;
			if(1)
			{
				return unsigned_int_1;
			}
		}
		if(1)
		{
			double_6 = asin ( double_4 ) ;
			if(1)
			{
				return unsigned_int_2;
			}
		}
		if(1)
		{
			return unsigned_int_2;
		}
		if(1)
		{
			return unsigned_int_4;
		}
		if(1)
		{
			return unsigned_int_1;
		}
		if(1)
		{
			return unsigned_int_6;
		}
	}
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		int int_1 = 1;
		short short_1 = 1;
		long long_4 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		double double_8 = 1;
		short short_2 = 1;
		unsigned_int_1 = unsigned_int_3;
		unsigned_int_7 = unsigned_int_2;
		int_1 = expr_eq(double_6,int_1,679);

		double_4 = cos ( double_6 ) ;
		unsigned_int_5 = expr_alloc_comp(double_6,double_3,long_3);

		double_3 = atan2 ( double_7 , double_8 ) ;
		int_1 = expr_alloc_symbol(short_1);

		short_1 = short_2;
	}
	return unsigned_int_2;
	long_4 = expr_copy(short_1);

}
unsigned int expr_alloc_comp( double parameter_1,double parameter_2,long parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	char_2 = char_1 * char_1;
	long_1 = long_1;
	double_1 = fmod ( double_2 , double_3 ) ;
	double_4 = exp ( double_3 ) ;
	double_4 = double_5 * double_5;
	return unsigned_int_1;
}
void xfwrite( char parameter_1,long parameter_2,short parameter_3,short parameter_4)
{
	if(1)
	{
		double double_1 = 1;
		double_1 = double_1 * double_1;
	}
}
unsigned int expr_print_file_helper(long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	xfwrite(char_1,long_1,short_1,short_2);

}
int expr_compare_type( long parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		return int_1;
	}
	else
	{
		if(1)
		{
			return int_2;
		}
	}
	{
		if(1)
		{
			return int_3;
		}
		if(1)
		{
			return int_4;
		}
		if(1)
		{
			return int_1;
		}
		if(1)
		{
			return int_5;
		}
		if(1)
		{
			return int_3;
		}
		return int_2;
	}
	double_1 = acos ( double_2 ) ;
	return int_4;
}
void expr_print( int parameter_1,long parameter_2,int parameter_3,long parameter_4,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_4 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_10 = 1;
	double double_11 = 1;
	short short_1 = 1;
	double double_9 = 1;
	if(1)
	{
		double_1 = log ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		long long_4 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double double_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_3 = 1;
		int int_4 = 1;
		double double_10 = 1;
		double double_11 = 1;
		short short_1 = 1;
		double double_9 = 1;
		long_3 = long_1 + long_2;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		long long_4 = 1;
		short short_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double double_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_3 = 1;
		int int_4 = 1;
		double double_10 = 1;
		double double_11 = 1;
		short short_1 = 1;
		double double_9 = 1;
		if(1)
		{
			double_2 = sqrt ( double_2 ) ;
		}
		else
		{
			unsigned_int_1 = unsigned_int_1;
		}
		double_1 = fmod ( double_2 , double_3 ) ;
		double_2 = atan2 ( double_4 , double_5 ) ;
		if(1)
		{
			char_1 = char_2;
		}
		else
		{
			char_3 = char_3 + char_1;
		}
		char_2 = char_4 * char_3;
		double_5 = double_5 + double_5;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			long long_4 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			double double_6 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_3 = 1;
			int int_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			short short_1 = 1;
			double double_9 = 1;
			short_1 = short_1 + short_1;
		}
		else
		{
			int_1 = int_1;
		}
		double_1 = double_3 * double_2;
		unsigned_int_2 = unsigned_int_1;
		int_1 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_1;
		double_3 = asin ( double_6 ) ;
		float_1 = float_2;
		double_7 = acos ( double_7 ) ;
		double_8 = double_4 * double_2;
		float_3 = float_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			long long_4 = 1;
			short short_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			double double_6 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_3 = 1;
			int int_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			short short_1 = 1;
			double double_9 = 1;
			int_3 = expr_compare_type(long_4,short_2);

			double_6 = double_5;
			double_9 = sqrt ( double_7 ) ;
		}
		float_2 = float_1;
		double_4 = fmod ( double_6 , double_3 ) ;
		char_2 = char_4 + char_2;
		double_5 = atan ( double_6 ) ;
		double_5 = fabs ( double_6 ) ;
		double_3 = ldexp ( double_8 , int_4 ) ;
		double_8 = acos ( double_10 ) ;
		double_11 = sinh ( double_4 ) ;
	}
	if(1)
	{
		double_3 = cos ( double_2 ) ;
	}
}
void expr_fprint( double parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short_2 = short_1 + short_1;
	expr_print(int_1,long_1,int_2,long_2,int_1);

	unsigned_int_1 = expr_print_file_helper(long_3,int_2);

}
double expr_eliminate_yn( char parameter_1,int uni_para)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_11 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	short short_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_10 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_7 = 1;
	char * vul_var;
	char_1 = char_2;
	char controller4vul_100[1];
	fgets(controller4vul_100 ,2 ,stdin);
	if( strcmp( controller4vul_100, "o") == 0)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_11 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		short short_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_10 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_7 = 1;
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		if(uni_para == 299)
		{
			vul_var = vul_var + 1;
		}
		{
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_11 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_3 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_8 = 1;
			short short_2 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_10 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_7 = 1;
			double_1 = ldexp ( double_1 , int_1 ) ;
			double_2 = fabs ( double_2 ) ;
			if(1)
			{
				if(1)
				{
					double_3 = exp ( double_1 ) ;
					int_1 = int_2;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
					double_3 = ceil ( double_4 ) ;
					double_1 = pow ( double_2 , double_2 ) ;
					double_4 = ceil ( double_4 ) ;
				}
				if(1)
				{
					double_1 = cosh ( double_1 ) ;
					double_5 = double_5;
					double_6 = tan ( double_6 ) ;
					double_6 = atan ( double_2 ) ;
					double_3 = sinh ( double_5 ) ;
				}
			}
			if(1)
			{
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					double double_1 = 1;
					double double_11 = 1;
					int int_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_8 = 1;
					short short_2 = 1;
					int int_5 = 1;
					int int_6 = 1;
					double double_10 = 1;
					short short_3 = 1;
					short short_4 = 1;
					int int_4 = 1;
					long long_1 = 1;
					long long_2 = 1;
					short short_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					int int_7 = 1;
					int_4 = int_3 + int_3;
					double_5 = log10 ( double_4 ) ;
					double_7 = fabs ( double_7 ) ;
					unsigned_int_2 = unsigned_int_2;
					double_3 = tan ( double_5 ) ;
					long_1 = long_2;
				}
				if(1)
				{
					double_7 = ldexp ( double_2 , int_3 ) ;
					double_7 = sinh ( double_2 ) ;
					double_7 = ceil ( double_3 ) ;
					double_1 = double_1;
					double_4 = tan ( double_7 ) ;
				}
			}
			unsigned_int_1 = unsigned_int_3;
			double_3 = cos ( double_8 ) ;
			if(1)
			{
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					double double_1 = 1;
					double double_11 = 1;
					int int_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_8 = 1;
					short short_2 = 1;
					int int_5 = 1;
					int int_6 = 1;
					double double_10 = 1;
					short short_3 = 1;
					short short_4 = 1;
					int int_4 = 1;
					long long_1 = 1;
					long long_2 = 1;
					short short_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					int int_7 = 1;
					free(vul_var);
					short_2 = short_1 * short_2;
					double_4 = tanh ( double_5 ) ;
					double_7 = sqrt ( double_3 ) ;
					double_1 = asin ( double_7 ) ;
					double_8 = fmod ( double_7 , double_2 ) ;
				}
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					double double_1 = 1;
					double double_11 = 1;
					int int_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_8 = 1;
					short short_2 = 1;
					int int_5 = 1;
					int int_6 = 1;
					double double_10 = 1;
					short short_3 = 1;
					short short_4 = 1;
					int int_4 = 1;
					long long_1 = 1;
					long long_2 = 1;
					short short_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					int int_7 = 1;
					float_1 = float_1 + float_2;
					double_8 = asin ( double_4 ) ;
					int_5 = int_3 * int_2;
					double_3 = ldexp ( double_9 , int_6 ) ;
					double_5 = ceil ( double_10 ) ;
					double_6 = double_6 * double_9;
				}
			}
			if(1)
			{
				char char_1 = 1;
				char char_2 = 1;
				double double_1 = 1;
				double double_11 = 1;
				int int_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				int int_3 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_8 = 1;
				short short_2 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_10 = 1;
				short short_3 = 1;
				short short_4 = 1;
				int int_4 = 1;
				long long_1 = 1;
				long long_2 = 1;
				short short_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_7 = 1;
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					double double_1 = 1;
					double double_11 = 1;
					int int_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_8 = 1;
					short short_2 = 1;
					int int_5 = 1;
					int int_6 = 1;
					double double_10 = 1;
					short short_3 = 1;
					short short_4 = 1;
					int int_4 = 1;
					long long_1 = 1;
					long long_2 = 1;
					short short_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					int int_7 = 1;
					double_1 = fabs ( double_2 ) ;
					unsigned_int_2 = unsigned_int_4;
					double_4 = ldexp ( double_2 , int_6 ) ;
					double_11 = double_3 * double_8;
					unsigned_int_5 = unsigned_int_1 + unsigned_int_2;
				}
				if(1)
				{
					char char_1 = 1;
					char char_2 = 1;
					double double_1 = 1;
					double double_11 = 1;
					int int_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					double double_7 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_8 = 1;
					short short_2 = 1;
					int int_5 = 1;
					int int_6 = 1;
					double double_10 = 1;
					short short_3 = 1;
					short short_4 = 1;
					int int_4 = 1;
					long long_1 = 1;
					long long_2 = 1;
					short short_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					int int_7 = 1;
					unsigned_int_4 = unsigned_int_1;
					short_2 = short_2 * short_2;
					double_7 = double_5;
					int_5 = int_5 + int_7;
					double_3 = double_1 + double_4;
					double_10 = fmod ( double_10 , double_11 ) ;
				}
			}
			short_4 = short_3 * short_2;
		}
		double_11 = atan ( double_1 ) ;
	}
}
int expr_alloc_symbol( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = sqrt ( double_2 ) ;
	short_1 = short_2;
	double_2 = log ( double_1 ) ;
	int_1 = int_1 + int_2;
	return int_1;
}
void expr_free( float parameter_1)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	{
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		expr_free(float_1);

		double_3 = double_1 * double_2;
		double_4 = tan ( double_3 ) ;
		int_2 = int_1 + int_2;
	}
	long_1 = long_2;
}
unsigned int __expr_eliminate_eq( long parameter_1,short parameter_2,float parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		double_1 = asin ( double_2 ) ;
		return unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int_1 = expr_alloc_symbol(short_1);

		float_1 = float_1 * float_2;
		float_3 = float_2;
		return unsigned_int_1;
	}
	if(1)
	{
		return unsigned_int_3;
	}
	if(1)
	{
		return unsigned_int_1;
	}
	double_3 = atan ( double_1 ) ;
	int_1 = int_1;
	double_3 = cos ( double_4 ) ;
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		expr_free(float_2);

		int_2 = int_2;
		unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
		float_2 = float_1 * float_1;
		double_4 = atan ( double_3 ) ;
		double_5 = ldexp ( double_6 , int_1 ) ;
	}
	int_2 = expr_eq(double_1,int_1,947);

}
void expr_eliminate_eq( long parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char controller4vul_99[2];
	fgets(controller4vul_99 ,3 ,stdin);
	if( strcmp( controller4vul_99, "zr") == 0)
	{
		double_1 = expr_eliminate_yn(char_1,uni_para);

	}
	{
		double double_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		int int_2 = 1;
		double double_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 * int_2;
		double_2 = sinh ( double_3 ) ;
	}
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "_pJxS") > 0)
	{
		double double_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		int int_2 = 1;
		double double_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		{
			double double_1 = 1;
			char char_1 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_4 = 1;
			int int_2 = 1;
			double double_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_1 = unsigned_int_2;
			double_1 = fabs ( double_4 ) ;
		}
		int_4 = int_3 + int_1;
	}
	double_4 = ldexp ( double_3 , int_4 ) ;
}
int expr_eq( double parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double_1 = tan ( double_2 ) ;
	char controller4vul_98[1];
	fgets(controller4vul_98 ,2 ,stdin);
	if( strcmp( controller4vul_98, "&") == 0)
	{
		expr_eliminate_eq(long_1,int_1,uni_para);

		return int_2;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		return int_2;
		return int_1;
		return int_1;
		double_2 = atan2 ( double_2 , double_2 ) ;
		double_1 = atan ( double_2 ) ;
		double_1 = sinh ( double_1 ) ;
		unsigned_int_1 = unsigned_int_1;
		double_1 = ldexp ( double_3 , int_1 ) ;
		double_3 = asin ( double_4 ) ;
		double_2 = fabs ( double_5 ) ;
		return int_3;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double_4 = fabs ( double_4 ) ;
		float_1 = float_1 * float_1;
		int_4 = int_5;
		double_2 = cos ( double_1 ) ;
	}
	return int_2;
}
double expr_join_or( float parameter_1,int parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	short short_2 = 1;
	int int_2 = 1;
	double double_8 = 1;
	long long_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		return double_2;
	}
	if(1)
	{
		return double_3;
	}
	if(1)
	{
		long long_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_8 = 1;
		long long_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		long_1 = long_1 * long_2;
		if(1)
		{
			return double_4;
		}
		long_3 = long_1;
	}
	else
	{
		long long_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_8 = 1;
		long long_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		double_3 = double_5 + double_5;
	}
	if(1)
	{
		if(1)
		{
			return double_4;
		}
		long_2 = expr_copy(short_1);

		int_1 = int_1 * int_1;
	}
	else
	{
		expr_fprint(double_6,long_1);

		int_1 = int_1 * int_1;
	}
	if(1)
	{
		return double_3;
	}
	if(1)
	{
		return double_4;
	}
	if(1)
	{
		if(1)
		{
			return double_2;
		}
		if(1)
		{
			return double_6;
		}
		if(1)
		{
			return double_2;
		}
	}
	if(1)
	{
		if(1)
		{
			return double_7;
		}
	}
	if(1)
	{
		long long_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		short short_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		int int_2 = 1;
		double double_8 = 1;
		long long_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1;
		double_6 = fabs ( double_3 ) ;
		long_1 = long_1;
		unsigned_int_2 = expr_alloc_comp(double_2,double_7,long_4);

		int_1 = expr_alloc_symbol(short_2);

		double_1 = pow ( double_3 , double_7 ) ;
		int_2 = expr_eq(double_7,int_1,598);

		double_6 = fabs ( double_2 ) ;
	}
	return double_8;
}
void expr_eliminate_dups1( double parameter_1,int parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_6 = 1;
	float float_3 = 1;
	int int_5 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
		double_1 = sinh ( double_1 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_6 = 1;
		float float_3 = 1;
		int int_5 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		double_2 = ceil ( double_3 ) ;
		double_2 = cos ( double_3 ) ;
	}
	if(1)
	{
	}
	{
		expr_free(float_1);

		unsigned_int_2 = unsigned_int_2;
		double_3 = asin ( double_1 ) ;
	}
	{
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_6 = 1;
		float float_3 = 1;
		int int_5 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		int_3 = int_3 + int_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			double double_6 = 1;
			float float_3 = 1;
			int int_5 = 1;
			double double_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			double_1 = atan ( double_4 ) ;
			unsigned_int_1 = expr_join_and(short_1,long_1);

			float_2 = float_2 * float_1;
			double_3 = fabs ( double_1 ) ;
			int_2 = int_2 + int_3;
			double_1 = floor ( double_3 ) ;
		}
		int_2 = int_4 * int_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_3 = 1;
			float float_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			double double_6 = 1;
			float float_3 = 1;
			int int_5 = 1;
			double double_2 = 1;
			int int_3 = 1;
			double double_4 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			int_2 = expr_alloc_symbol(short_1);

			double_5 = cosh ( double_3 ) ;
			double_5 = acos ( double_6 ) ;
			unsigned_int_2 = unsigned_int_3;
			double_6 = expr_join_or(float_3,int_5);

			double_4 = cosh ( double_1 ) ;
			unsigned_int_1 = unsigned_int_4;
		}
		unsigned_int_4 = unsigned_int_4 + unsigned_int_1;
	}
}
int expr_eliminate_dups( int parameter_1,int uni_para)
{
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	long_1 = long_1;
	char controller4vul_95[3];
	fgets(controller4vul_95 ,4 ,stdin);
	if( strcmp( controller4vul_95, "1G_") == 0)
	{
		short_1 = expr_eliminate_dups2(char_1,long_1,char_1,uni_para);

		return int_1;
	}
	double_1 = sinh ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		long long_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		looper_1 += 1;
		double_2 = floor ( double_1 ) ;
		{
			long long_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			double_2 = fmod ( double_2 , double_2 ) ;
			double_2 = sqrt ( double_2 ) ;
			double_2 = double_3;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_1;
	}
	short_1 = short_2;
	return int_1;
}
long expr_copy( short parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	if(1)
	{
		return long_1;
	}
	double_2 = double_1 * double_1;
	double_2 = double_2 + double_1;
	{
		int int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = fmod ( double_3 , double_3 ) ;
		double_4 = acos ( double_4 ) ;
		double_1 = double_4;
		char_2 = char_1 * char_1;
		double_2 = fmod ( double_4 , double_4 ) ;
		double_5 = double_1 + double_5;
		int_2 = int_3;
		unsigned_int_1 = unsigned_int_2;
		long_1 = expr_copy(short_1);

		double_4 = double_5 + double_1;
	}
	return long_2;
}
double expr_alloc_two( unsigned int parameter_1,double parameter_2,float parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double_1 = tan ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = tan ( double_1 ) ;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	return double_2;
}
double expr_alloc_and( float parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	if(1)
	{
		return double_1;
	}
	return double_1;
	double_2 = expr_alloc_two(unsigned_int_1,double_2,float_1);

}
int expr_simplify_unmet_dep( char parameter_1,unsigned int parameter_2,int uni_para)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int_1 = expr_eliminate_dups(int_2,uni_para);

	float_1 = float_2;
	{
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		return int_3;
		double_1 = log10 ( double_2 ) ;
		double_2 = tan ( double_2 ) ;
		long_1 = long_1;
		int_1 = int_1 + int_3;
		double_2 = double_3;
	}
	return int_2;
}
unsigned int sym_get_default_prop( long parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "nCR") < 0)
	{
		return unsigned_int_2;
	}
	return unsigned_int_1;
	unsigned_int_2 = expr_calc_value(float_1);

}
unsigned int sym_is_choice( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
double sym_has_value()
{
	double double_1 = 1;
	return double_1;
}
float prop_get_symbol( double parameter_1)
{
	float float_1 = 1;
	if(1)
	{
		return float_1;
	}
	return float_1;
}
float sym_get_choice_prop( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double_1 = fabs ( double_1 ) ;
	return float_1;
	return float_1;
}
double sym_get_type( int parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = sym_is_choice_value(short_1);

	double_1 = cos ( double_2 ) ;
	if(1)
	{
		if(1)
		{
			float float_1 = 1;
			short short_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float_2 = float_2 * float_3;
		}
		if(1)
		{
			float float_1 = 1;
			short short_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		}
	}
	return double_1;
}
void sym_set_changed( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = cosh ( double_2 ) ;
	short_1 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			int int_1 = 1;
			double_2 = ldexp ( double_3 , int_1 ) ;
		}
	}
}
short sym_get_tristate_value()
{
	short short_1 = 1;
	return short_1;
}
float sym_get_string_value( unsigned int parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	short_1 = sym_get_tristate_value();

	long_1 = long_2;
	{
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		double_1 = atan2 ( double_1 , double_2 ) ;
		{
			return float_1;
			return float_1;
			return float_1;
		}
		short_1 = short_1 + short_2;
	}
	return float_2;
}
unsigned int expr_calc_value( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_6 = 1;
	double_1 = tan ( double_1 ) ;
	double_1 = double_1 * double_2;
	if(1)
	{
		return unsigned_int_1;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_6 = 1;
		double_3 = fabs ( double_1 ) ;
		return unsigned_int_1;
		double_1 = atan ( double_4 ) ;
		return unsigned_int_1;
		short_1 = short_1;
		return unsigned_int_1;
		return unsigned_int_1;
		int_1 = int_2;
		int_2 = int_2;
		double_1 = log10 ( double_5 ) ;
		return unsigned_int_2;
		unsigned_int_2 = expr_calc_value(float_1);

		double_3 = cosh ( double_4 ) ;
		float_2 = sym_get_string_value(unsigned_int_1);

		int_1 = int_2;
		char_1 = char_2;
		double_5 = sqrt ( double_6 ) ;
		return unsigned_int_3;
		sym_calc_value(short_1,403);

		double_1 = atan ( double_2 ) ;
		return unsigned_int_2;
	}
}
double sym_calc_visibility( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	sym_set_changed(unsigned_int_1);

	short_1 = short_1;
	float_1 = sym_is_choice_value(short_2);

	double_2 = atan ( double_3 ) ;
	double_3 = sym_get_type(int_1);

	int_1 = int_1;
	if(1)
	{
		double_4 = cosh ( double_5 ) ;
	}
	if(1)
	{
		double_5 = exp ( double_2 ) ;
		unsigned_int_2 = expr_calc_value(float_1);

		double_1 = pow ( double_2 , double_5 ) ;
	}
	if(1)
	{
		return double_1;
	}
	double_5 = double_4 * double_6;
	if(1)
	{
		double_1 = tanh ( double_2 ) ;
	}
	if(1)
	{
		double_6 = double_4 + double_3;
	}
	if(1)
	{
		double_5 = log ( double_6 ) ;
		double_1 = double_2 + double_3;
	}
	short_3 = short_1;
	if(1)
	{
		double_1 = floor ( double_7 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		short short_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		short short_3 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		double_4 = acos ( double_7 ) ;
		double_5 = ldexp ( double_8 , int_1 ) ;
	}
}
float sym_is_choice_value( short parameter_1)
{
	float float_1 = 1;
	return float_1;
}
void sym_calc_value( short parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_1 = 1;
	double double_9 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	double double_14 = 1;
	double double_15 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_16 = 1;
	double_1 = double_1 * double_2;
	double_3 = ldexp ( double_4 , int_1 ) ;
	double_4 = fmod ( double_2 , double_5 ) ;
	if(1)
	{
		double_6 = log ( double_6 ) ;
	}
	if(1)
	{
		double_7 = log10 ( double_8 ) ;
	}
	long_1 = long_1 * long_1;
	double_8 = exp ( double_8 ) ;
	{
		double_2 = double_5;
		double_1 = double_9 + double_6;
		double_4 = fmod ( double_5 , double_2 ) ;
		double_2 = atan2 ( double_4 , double_1 ) ;
		int_2 = int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_1 = 1;
		double double_9 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_15 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_16 = 1;
		int_4 = int_3 + int_2;
	}
	short_1 = short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	{
		if(1)
		{
			char_1 = char_1;
			double_1 = ceil ( double_10 ) ;
		}
		char controller4vul_92[4];
		fgets(controller4vul_92 ,5 ,stdin);
		if( strcmp( controller4vul_92, "n)^h") == 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_9 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			double double_14 = 1;
			double double_15 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_16 = 1;
			char controller4vul_93[4];
			fgets(controller4vul_93 ,5 ,stdin);
			if( strcmp( controller4vul_93, "dQJo") == 0)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_1 = 1;
				double double_9 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				double double_13 = 1;
				double double_14 = 1;
				double double_15 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_2 = 1;
				short short_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_16 = 1;
				long_2 = long_1 + long_1;
				char controller4vul_94[2];
				fgets(controller4vul_94 ,3 ,stdin);
				if( strcmp( controller4vul_94, "(v") == 0)
				{
					int_2 = expr_simplify_unmet_dep(char_1,unsigned_int_2,uni_para);

					double_1 = double_5;
					double_2 = tan ( double_8 ) ;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_1 = 1;
				double double_9 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				double double_13 = 1;
				double double_14 = 1;
				double double_15 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_2 = 1;
				short short_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_16 = 1;
				short_3 = short_2 + short_1;
				if(1)
				{
					double_6 = fmod ( double_3 , double_10 ) ;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
				}
			}
			if(1)
			{
				double_1 = log10 ( double_10 ) ;
				double_11 = cos ( double_2 ) ;
				double_5 = double_9;
				double_8 = tan ( double_8 ) ;
				double_12 = double_6;
				double_4 = exp ( double_1 ) ;
				double_11 = double_2 + double_3;
				double_11 = double_5 + double_12;
			}
			double_3 = double_11;
		}
		if(1)
		{
			double_6 = log10 ( double_11 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_9 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			double double_14 = 1;
			double double_15 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_16 = 1;
			float_1 = float_1 + float_2;
			if(1)
			{
				int_1 = int_2 + int_1;
			}
		}
		double_13 = fmod ( double_7 , double_12 ) ;
		if(1)
		{
			int_1 = int_2;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				int int_1 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_1 = 1;
				double double_9 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				double double_13 = 1;
				double double_14 = 1;
				double double_15 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_2 = 1;
				short short_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_16 = 1;
				double_4 = double_14;
				double_1 = ldexp ( double_1 , int_5 ) ;
				int_6 = int_1;
			}
		}
		double_14 = floor ( double_13 ) ;
	}
	double_6 = double_3 + double_15;
	if(1)
	{
		double_15 = cos ( double_9 ) ;
	}
	double_12 = log ( double_13 ) ;
	if(1)
	{
		double_3 = cos ( double_13 ) ;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			double_10 = tanh ( double_14 ) ;
		}
	}
	if(1)
	{
		double_14 = fmod ( double_13 , double_14 ) ;
		double_11 = double_9 * double_8;
		if(1)
		{
			double_5 = pow ( double_2 , double_10 ) ;
		}
		if(1)
		{
			double_10 = fabs ( double_8 ) ;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_1 = 1;
		double double_9 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double double_15 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_16 = 1;
		double_16 = pow ( double_16 , double_4 ) ;
	}
}
double strhash( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = atan2 ( double_2 , double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_2 = char_1 * char_2;
	}
	return double_2;
}
char sym_lookup( short parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_1 = long_2;
	double_1 = exp ( double_1 ) ;
	double_1 = cos ( double_2 ) ;
	if(1)
	{
		if(1)
		{
			{
				return char_1;
				return char_1;
				return char_2;
			}
		}
		double_1 = pow ( double_1 , double_2 ) ;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				return char_2;
			}
		}
		double_3 = cosh ( double_2 ) ;
	}
	else
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
		double_2 = atan ( double_3 ) ;
	}
	double_4 = exp ( double_4 ) ;
	double_3 = fmod ( double_1 , double_1 ) ;
	double_5 = strhash(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = atan2 ( double_6 , double_2 ) ;
	double_4 = fmod ( double_7 , double_1 ) ;
	double_1 = sqrt ( double_5 ) ;
	int_2 = int_2 + int_1;
	return char_2;
}
long conf_expand_value( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_7 = 1;
	char char_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_6 = 1;
	int int_4 = 1;
	double_1 = acos ( double_1 ) ;
	double_2 = cos ( double_1 ) ;
	sym_calc_value(short_1,651);

	double_1 = ceil ( double_1 ) ;
	int_3 = int_1 + int_2;
	float_1 = sym_get_string_value(unsigned_int_1);

	char_2 = char_1 * char_1;
	double_3 = fmod ( double_3 , double_4 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_7 = 1;
		char char_3 = 1;
		short short_2 = 1;
		long long_1 = 1;
		double double_6 = 1;
		int int_4 = 1;
		looper_1 += 1;
		double_2 = double_1 + double_3;
		char_2 = char_1;
		double_2 = sinh ( double_5 ) ;
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_7 = 1;
			char char_3 = 1;
			short short_2 = 1;
			long long_1 = 1;
			double double_6 = 1;
			int int_4 = 1;
			looper_2 += 1;
			int_1 = int_4;
		}
		double_5 = floor ( double_1 ) ;
		double_6 = exp ( double_2 ) ;
		double_1 = tanh ( double_7 ) ;
		double_4 = log ( double_5 ) ;
		char_3 = sym_lookup(short_2,int_2);

		double_4 = atan ( double_5 ) ;
	}
	double_5 = pow ( double_7 , double_5 ) ;
	return long_1;
}
int conf_get_default_confname()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double_1 = fmod ( double_2 , double_2 ) ;
	float_1 = float_2;
	float_2 = float_1 * float_2;
	double_2 = cos ( double_1 ) ;
	char_1 = char_1 * char_1;
	if(1)
	{
		double_2 = acos ( double_2 ) ;
		if(1)
		{
			return int_1;
		}
	}
	return int_2;
	long_1 = conf_expand_value(char_1);

}
char conf_get_configname()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return char_1;
}
int main(int ac, char **av)
{
	int uni_para =299;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	int int_6 = 1;
	short short_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_4 = 1;
	double double_9 = 1;
	char char_4 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	double double_10 = 1;
	double double_14 = 1;
	int int_5 = 1;
	double double_15 = 1;
	int_1 = conf_read_simple(short_1,int_2,uni_para);

	double_1 = atan2 ( double_2 , double_3 ) ;
	double_3 = double_2;
	double_1 = fabs ( double_1 ) ;
	double_3 = log ( double_1 ) ;
	double_1 = asin ( double_4 ) ;
	double_4 = double_4 + double_4;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		float_1 = float_1;
		{
			double_3 = log ( double_1 ) ;
			double_1 = tan ( double_3 ) ;
			int_2 = int_1;
			char_2 = char_1 + char_2;
			double_5 = ldexp ( double_2 , int_1 ) ;
			float_1 = float_1 + float_1;
			int_1 = int_3;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		}
	}
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double double_13 = 1;
		int int_6 = 1;
		short short_2 = 1;
		float float_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int int_4 = 1;
		double double_9 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		double double_10 = 1;
		double double_14 = 1;
		int int_5 = 1;
		double double_15 = 1;
		short_2 = short_2;
		double_1 = ceil ( double_5 ) ;
	}
	int_3 = int_3;
	double_4 = atan ( double_6 ) ;
	if(1)
	{
		double_5 = tan ( double_6 ) ;
		if(1)
		{
			double_5 = double_3 * double_7;
			unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		}
	}
	{
		int int_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double double_13 = 1;
		int int_6 = 1;
		short short_2 = 1;
		float float_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int int_4 = 1;
		double double_9 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		double double_10 = 1;
		double double_14 = 1;
		int int_5 = 1;
		double double_15 = 1;
		if(1)
		{
			double_5 = cosh ( double_3 ) ;
		}
		if(1)
		{
			double_5 = double_4 + double_2;
			unsigned_int_1 = unsigned_int_2;
		}
		float_2 = float_1;
		double_3 = double_6;
		if(1)
		{
			int int_1 = 1;
			short short_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			int int_6 = 1;
			short short_2 = 1;
			float float_2 = 1;
			char char_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			double double_9 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			double double_10 = 1;
			double double_14 = 1;
			int int_5 = 1;
			double double_15 = 1;
			char_3 = char_3 + char_1;
		}
		{
			int int_1 = 1;
			short short_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			int int_6 = 1;
			short short_2 = 1;
			float float_2 = 1;
			char char_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			double double_9 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			double double_10 = 1;
			double double_14 = 1;
			int int_5 = 1;
			double double_15 = 1;
			double_3 = log ( double_5 ) ;
			double_2 = tan ( double_7 ) ;
			float_3 = float_4;
			long_1 = long_1;
			float_5 = float_2 * float_5;
		}
		if(1)
		{
			char_2 = char_2;
		}
		if(1)
		{
			int int_1 = 1;
			short short_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			int int_6 = 1;
			short short_2 = 1;
			float float_2 = 1;
			char char_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			double double_9 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			double double_10 = 1;
			double double_14 = 1;
			int int_5 = 1;
			double double_15 = 1;
			int_1 = int_4 + int_3;
		}
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			if(1)
			{
				double_4 = fmod ( double_3 , double_4 ) ;
				return int_1;
			}
		}
		double_2 = floor ( double_8 ) ;
	}
	{
		int int_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_5 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_8 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double double_13 = 1;
		int int_6 = 1;
		short short_2 = 1;
		float float_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int int_4 = 1;
		double double_9 = 1;
		char char_4 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		double double_10 = 1;
		double double_14 = 1;
		int int_5 = 1;
		double double_15 = 1;
		double_5 = ceil ( double_9 ) ;
		double_3 = acos ( double_2 ) ;
		char_4 = char_5;
		double_1 = sqrt ( double_5 ) ;
		int_2 = int_2;
		unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
		long_1 = long_2 * long_2;
		double_8 = cos ( double_10 ) ;
		double_11 = cos ( double_10 ) ;
		do
		{
			int int_1 = 1;
			short short_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			int int_6 = 1;
			short short_2 = 1;
			float float_2 = 1;
			char char_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			double double_9 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			double double_10 = 1;
			double double_14 = 1;
			int int_5 = 1;
			double double_15 = 1;
			double_12 = ldexp ( double_10 , int_5 ) ;
			double_11 = fmod ( double_13 , double_8 ) ;
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		double_14 = atan ( double_2 ) ;
		looper_2 += 1;
	}
	if(1)
	{
		if(1)
		{
			double_11 = sqrt ( double_12 ) ;
			double_6 = double_8;
		}
		if(1)
		{
			double_12 = fabs ( double_12 ) ;
			return int_2;
		}
	}
	if(1)
	{
		if(1)
		{
			double_2 = asin ( double_13 ) ;
			return int_6;
		}
	}
	if(1)
	{
		if(1)
		{
			int int_1 = 1;
			short short_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_5 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_8 = 1;
			double double_11 = 1;
			double double_12 = 1;
			double double_13 = 1;
			int int_6 = 1;
			short short_2 = 1;
			float float_2 = 1;
			char char_3 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_4 = 1;
			double double_9 = 1;
			char char_4 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			double double_10 = 1;
			double double_14 = 1;
			int int_5 = 1;
			double double_15 = 1;
			double_1 = floor ( double_15 ) ;
			double_7 = pow ( double_6 , double_15 ) ;
		}
	}
	return int_2;
}
