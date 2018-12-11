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

void bone_repl();
unsigned int reg_free( char parameter_1);
long end_in_reg();
int to_bool( float parameter_1);
void get_mac( long parameter_1);
void mac_expand_1( unsigned int parameter_1,int uni_para);
long mac_expand(int uni_para);
short assoc( unsigned int parameter_1,float parameter_2);
long arglist_contains( long parameter_1,int parameter_2);
float refers_to( int parameter_1,long parameter_2);
unsigned int extra_pos( char parameter_1);
float compile_with( char parameter_1,char parameter_2,long parameter_3,int parameter_4,unsigned int parameter_5,long parameter_6);
char add_local( char parameter_1,float parameter_2,int parameter_3,int parameter_4);
unsigned int locals_for_lambda( short parameter_1,unsigned int parameter_2);
char lambda_ignore_list( double parameter_1,short parameter_2);
unsigned int cdr( long parameter_1);
double found_local( int parameter_1,int parameter_2,int parameter_3);
double is_member( float parameter_1,char parameter_2);
double assoc_entry( unsigned int parameter_1,float parameter_2);
float collect_locals_rec( float parameter_1,int parameter_2,long parameter_3,int parameter_4,int parameter_5);
void collect_locals( long parameter_1,float parameter_2,long parameter_3,int parameter_4);
int flatten_rest_x( char parameter_1,int parameter_2,int parameter_3);
short compile_lambda( float parameter_1,char parameter_2,short parameter_3,char parameter_4);
void set_far( double parameter_1,int parameter_2);
long compile_if( double parameter_1,short parameter_2,long parameter_3,int parameter_4);
double compile_do( double parameter_1,char parameter_2,float parameter_3,short parameter_4);
void compile_expr( long parameter_1,long parameter_2,double parameter_3,float parameter_4);
float compile2list( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4);
double compile2sub_code( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5);
double compile_toplevel_expr( char parameter_1,int uni_para);
unsigned int eval_toplevel_expr( int parameter_1,int uni_para);
int bone_read();
short is_symchar( int parameter_1);
unsigned int read_sym_chars( int parameter_1);
char list2charp( int parameter_1);
short intern_from_chars( double parameter_1);
char float2any( float parameter_1);
void digit2int( unsigned int parameter_1);
char is_num();
long chars2num( short parameter_1);
void chars_to_num_or_sym( double parameter_1);
unsigned int get_binding( float parameter_1,int uni_para);
char add_another_rest_arg();
int add_first_rest_arg();
float add_rest_arg();
long add_nonrest_arg();
int drop_locals( int parameter_1);
void args_error_unspecific( long parameter_1);
void verify_argc( long parameter_1);
void next_call();
double add_upcoming_call();
double call( int parameter_1,short parameter_2,int parameter_3,int uni_para);
float args_error( short parameter_1,short parameter_2);
short alloc_locals( int parameter_1);
char count_locals();
double apply( long parameter_1,int parameter_2,int uni_para);
void call0( long parameter_1);
void get_reader( int parameter_1);
void set_fdr( int parameter_1,double parameter_2);
void listgen_add( float parameter_1,char parameter_2);
long listgen_new();
int read_str();
float read_unquote();
long short_lambda_parser( short parameter_1);
short read_lambda_short_form();
int parse_error( float parameter_1);
unsigned int read_list();
unsigned int find_token();
unsigned int reader();
short utf8_read();
int utf8getc( float parameter_1);
long nextc();
double skip_until( char parameter_1);
long look();
unsigned int in_reg();
float fail( char parameter_1);
char mod2file( float parameter_1);
void bone_load( short parameter_1,int uni_para);
void bone_posix_init();
char set_dyn_val( long parameter_1,float parameter_2);
void bone_info_entry( unsigned int parameter_1,int parameter_2);
unsigned int charp2list();
unsigned int charp2str( unsigned int parameter_1);
long fp2src( long parameter_1,int parameter_2);
double is_dyn_bound( int parameter_1);
char create_dyn( int parameter_1,short parameter_2);
float reader_bind( float parameter_1,unsigned int parameter_2,char parameter_3);
float register_creader( long parameter_1,float parameter_2);
char mac_bind( double parameter_1,short parameter_2,short parameter_3);
float register_cmac( float parameter_1,char parameter_2,int parameter_3,int parameter_4);
char sub2any();
long ensure_sub_alloc( int parameter_1);
float sub_alloc( long parameter_1);
void make_sub_code( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
unsigned int make_csub( float parameter_1,int parameter_2,int parameter_3);
double fp2any( char parameter_1,float parameter_2,unsigned int parameter_3);
double fp2dst( char parameter_1,float parameter_2);
short copy_dst();
short src2fp();
long copy_src( short parameter_1);
double copy_sub( short parameter_1);
char str();
short copy( long parameter_1);
unsigned int pcopy( double parameter_1);
int pcons( double parameter_1,float parameter_2);
long name_sub( double parameter_1,float parameter_2);
int is_sub( float parameter_1);
int check_overwrite( float parameter_1,double parameter_2);
float add_name( short parameter_1,double parameter_2,short parameter_3,int parameter_4);
short bind( short parameter_1,unsigned int parameter_2,float parameter_3);
void bone_register_csub( long parameter_1,double parameter_2,int parameter_3,int parameter_4);
short init_csubs();
float list2( char parameter_1,long parameter_2);
void qq_list( char parameter_1);
void single();
unsigned int list3( double parameter_1,long parameter_2,int parameter_3);
void car( float parameter_1);
unsigned int input_line( char parameter_1);
double get_filename( char parameter_1);
double get_other_type( int parameter_1);
long any2sub( long parameter_1);
unsigned int unstr( char parameter_1);
float any2float( float parameter_1);
double symtext( float parameter_1);
double print_sub_args();
double is_single( short parameter_1);
float is_arglist( float parameter_1);
short is_nil( long parameter_1);
double bprintf( double parameter_1,float parameter_2);
unsigned int untag( short parameter_1);
long untag_check( long parameter_1,long parameter_2);
float any2fp( char parameter_1,char parameter_2);
int dst2fp( short parameter_1);
short invalid_utf8( int parameter_1);
void utf8_write();
char utf8putc( int parameter_1,short parameter_2);
int bputc( int parameter_1);
short print();
double as_sym( char parameter_1);
int slot_used( int parameter_1);
unsigned int enlarge_table( char parameter_1);
unsigned int hash_set( long parameter_1,char parameter_2,unsigned int parameter_3);
int reg_pop();
char bytes2words( char parameter_1);
long inc_regs();
char store_reg( double parameter_1);
long reg_push( int parameter_1);
void reg_permanent();
long add_sym( long parameter_1,unsigned int parameter_2,long parameter_3);
void tag( double parameter_1,long parameter_2);
void basic_error( int parameter_1,unsigned int parameter_2);
char int2any();
double string_hash( long parameter_1,char parameter_2);
void len();
long intern( int parameter_1);
char check_dyn_bound( char parameter_1,double parameter_2);
double find_slot( int parameter_1,short parameter_2,double parameter_3,int uni_para);
double hash_get( int parameter_1,float parameter_2,int uni_para);
void get_dyn( int parameter_1);
short get_existing_dyn( char parameter_1);
void is_self_evaluating( long parameter_1);
double eprint_arg( short parameter_1);
double is( unsigned int parameter_1);
void backtrace();
long type_name( double parameter_1);
short type_error( int parameter_1,double parameter_2);
void check( unsigned int parameter_1,char parameter_2);
int get_num_type( unsigned int parameter_1);
long any2int( float parameter_1);
unsigned int get_dyn_val( int parameter_1);
double eprint();
void eprintf( char parameter_1,double parameter_2);
double generic_error( unsigned int parameter_1,float parameter_2);
char fdr();
void far( unsigned int parameter_1);
void block();
int reg_alloc( int parameter_1);
unsigned int cons( short parameter_1,int parameter_2);
float is_sym( double parameter_1);
double qq_id( double parameter_1);
unsigned int tag_of( char parameter_1);
unsigned int is_tagged( char parameter_1,long parameter_2);
void is_cons( short parameter_1);
unsigned int quasiquote();
double init_syms();
int hash_new( double parameter_1,unsigned int parameter_2);
short load_reg( long parameter_1);
int reg_init( unsigned int parameter_1,double parameter_2);
short ensure_free_block();
unsigned int block_new( double parameter_1);
int reg_new();
long bone_init_thread();
void block_point_to_next( float parameter_1,int parameter_2);
int blocks_init( short parameter_1,int parameter_2);
short blocks_alloc( int parameter_1);
double fresh_blocks();
void bone_init( int parameter_1,char parameter_2);
void bone_repl()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_1 = 1;
	long long_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = cosh ( double_1 ) ;
	double_2 = sinh ( double_2 ) ;
	int_1 = bone_read();

	int_1 = int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		long long_3 = 1;
		float float_1 = 1;
		long long_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		looper_1 += 1;
		char_1 = create_dyn(int_3,short_1);

		short_1 = print();

		unsigned_int_1 = get_dyn_val(int_1);

		long_2 = long_1 + long_1;
		char_1 = char_2 * char_1;
		if(1)
		{
		}
		char_3 = set_dyn_val(long_3,float_1);

		double_2 = cos ( double_1 ) ;
		double_3 = fabs ( double_4 ) ;
		double_2 = double_1 * double_3;
		long_4 = intern(int_3);

		unsigned_int_1 = eval_toplevel_expr(int_4);

		double_6 = double_1 * double_5;
		double_3 = atan ( double_1 ) ;
	}
	int_5 = int_3 + int_3;
}
unsigned int reg_free( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	block();

	float_1 = float_2;
	double_1 = tanh ( double_1 ) ;
}
long end_in_reg()
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = reg_free(char_1);

	int_1 = reg_pop();

	int_2 = int_3;
}
int to_bool( float parameter_1)
{
	int int_1 = 1;
	return int_1;
}
void get_mac( long parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = hash_get(int_1,float_1,949);

}
void mac_expand_1( unsigned int parameter_1,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	if(1)
	{
		double_1 = tan ( double_2 ) ;
	}
	char controller4vul_39[2];
	fgets(controller4vul_39 ,3 ,stdin);
	if( strcmp( controller4vul_39, "@E") > 0)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		char controller4vul_40[3];
		fgets(controller4vul_40 ,4 ,stdin);
		if( strcmp( controller4vul_40, ".M!") > 0)
		{
			double_2 = apply(long_1,int_1,uni_para);

			char_1 = char_1;
		}
	}
	int_1 = int_1 + int_2;
	int_1 = int_1 * int_1;
	double_1 = double_1 + double_3;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char_2 = char_1 + char_2;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		int_1 = int_1 * int_2;
	}
	int_2 = int_2 * int_2;
	if(1)
	{
		int_3 = int_2 * int_2;
	}
	int_3 = int_4;
}
long mac_expand(int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		looper_1 += 1;
		double_1 = ldexp ( double_1 , int_1 ) ;
		char controller4vul_38[4];
		fgets(controller4vul_38 ,5 ,stdin);
		if( strcmp( controller4vul_38, "$2.a") < 0)
		{
			mac_expand_1(unsigned_int_2,uni_para);

			return long_1;
		}
		double_1 = ceil ( double_1 ) ;
	}
}
short assoc( unsigned int parameter_1,float parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	if(1)
	{
		return short_1;
	}
	return short_1;
	car(float_1);

	char_1 = fdr();

}
long arglist_contains( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		return long_2;
	}
	if(1)
	{
		return long_2;
	}
	return long_2;
	short_1 = is_nil(long_1);

	float_1 = is_sym(double_1);

	car(float_2);

	char_1 = fdr();

}
float refers_to( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		if(1)
		{
			return float_2;
		}
		return float_1;
	}
	char controller_6[2];
	fgets(controller_6 ,2 ,stdin);
	if( strcmp( controller_6, "L") > 0)
	{
		if(1)
		{
			return float_3;
		}
		return float_4;
	}
	if(1)
	{
		return float_1;
	}
	return float_3;
	float_3 = is_sym(double_1);

	is_cons(short_1);

	far(unsigned_int_1);

	car(float_3);

	char_1 = fdr();

	long_1 = arglist_contains(long_2,int_1);

}
unsigned int extra_pos( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
float compile_with( char parameter_1,char parameter_2,long parameter_3,int parameter_4,unsigned int parameter_5,long parameter_6)
{
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char_1 = add_local(char_1,float_1,int_1,int_1);

	compile_expr(long_1,long_2,double_1,float_2);

	double_2 = log10 ( double_2 ) ;
	if(1)
	{
		long_1 = long_2 * long_1;
	}
	int_2 = int_2 * int_3;
	int_1 = int_3;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_2 = compile_do(double_1,char_1,float_1,short_1);

	double_1 = log10 ( double_1 ) ;
	if(1)
	{
		float_3 = refers_to(int_2,long_3);

		long_2 = long_1;
	}
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = extra_pos(char_2);

}
char add_local( char parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	return char_1;
	unsigned_int_1 = cons(short_1,int_1);

}
unsigned int locals_for_lambda( short parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_1 = cosh ( double_2 ) ;
	int_3 = int_1 + int_2;
	far(unsigned_int_1);

	double_3 = atan ( double_2 ) ;
	double_2 = log ( double_1 ) ;
	char_1 = add_local(char_2,float_1,int_1,int_2);

	double_1 = double_2;
	return unsigned_int_1;
}
char lambda_ignore_list( double parameter_1,short parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	float float_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	int int_2 = 1;
	float_1 = is_sym(double_1);

	is_cons(short_1);

	short_1 = is_nil(long_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		char_1 = fdr();

		double_1 = exp ( double_2 ) ;
	}
	else
	{
		int_1 = int_1 + int_1;
		if(1)
		{
			float float_1 = 1;
			double double_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			long long_2 = 1;
			char char_2 = 1;
			float float_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			int int_2 = 1;
			long_2 = listgen_new();

			int_2 = int_1 * int_2;
		}
	}
	if(1)
	{
		return char_2;
	}
	listgen_add(float_2,char_3);

	far(unsigned_int_2);

	set_fdr(int_1,double_3);

	double_1 = ceil ( double_2 ) ;
	return char_2;
}
unsigned int cdr( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double_1 = fabs ( double_1 ) ;
	return unsigned_int_1;
	check(unsigned_int_2,char_1);

	char_1 = fdr();

}
double found_local( int parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = is_member(float_1,char_1);

		short_1 = short_2;
		listgen_add(float_2,char_1);

		unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	}
}
double is_member( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	if(1)
	{
		return double_1;
	}
	return double_1;
}
double assoc_entry( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	if(1)
	{
		return double_1;
	}
	return double_2;
	car(float_1);

}
float collect_locals_rec( float parameter_1,int parameter_2,long parameter_3,int parameter_4,int parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		char char_2 = 1;
		short short_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_1 = is(unsigned_int_1);

		unsigned_int_1 = cdr(long_1);

		unsigned_int_1 = cons(short_1,int_1);

		short_2 = short_2;
		if(1)
		{
			far(unsigned_int_1);

			char_1 = fdr();

			double_2 = fmod ( double_2 , double_2 ) ;
		}
		if(1)
		{
		}
		char controller_3[4];
		fgets(controller_3 ,4 ,stdin);
		if( strcmp( controller_3, "!L/") < 0)
		{
			unsigned_int_1 = tag_of(char_1);

			double_3 = cosh ( double_3 ) ;
		}
		if(1)
		{
			double_3 = acos ( double_1 ) ;
		}
		double_2 = assoc_entry(unsigned_int_1,float_1);

		double_3 = found_local(int_2,int_1,int_2);

		char_1 = lambda_ignore_list(double_3,short_3);

		unsigned_int_1 = unsigned_int_1;
		double_3 = is_member(float_2,char_2);

		long_3 = long_2 + long_2;
	}
	car(float_1);

}
void collect_locals( long parameter_1,float parameter_2,long parameter_3,int parameter_4)
{
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	listgen_add(float_1,char_1);

	double_1 = tan ( double_1 ) ;
	double_2 = is_member(float_2,char_2);

	double_1 = sinh ( double_3 ) ;
	far(unsigned_int_1);

	double_2 = pow ( double_1 , double_3 ) ;
	if(1)
	{
		float float_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		char char_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		int int_2 = 1;
		long_1 = listgen_new();

		float_1 = collect_locals_rec(float_2,int_1,long_2,int_1,int_1);

		double_4 = ldexp ( double_2 , int_2 ) ;
	}
}
int flatten_rest_x( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		return int_1;
	}
	char_1 = fdr();

	double_1 = tanh ( double_1 ) ;
	single();

	char_3 = char_1 + char_2;
	if(1)
	{
		set_fdr(int_1,double_2);

		unsigned_int_1 = unsigned_int_2;
		float_1 = is_sym(double_1);

		char_2 = char_3;
		return int_2;
	}
	long_2 = long_1 * long_1;
	return int_3;
}
short compile_lambda( float parameter_1,char parameter_2,short parameter_3,char parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_7 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	double_1 = tanh ( double_1 ) ;
	int_2 = int_1 + int_1;
	char_1 = fdr();

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	short_1 = is_nil(long_1);

	double_2 = compile2sub_code(unsigned_int_1,float_1,int_3,int_4,int_5);

	double_2 = cos ( double_3 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_7 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_6 = 1;
		int_6 = int_5;
	}
	double_2 = ceil ( double_4 ) ;
	unsigned_int_2 = cons(short_2,int_3);

	double_4 = cosh ( double_1 ) ;
	basic_error(int_3,unsigned_int_3);

	double_4 = exp ( double_2 ) ;
	collect_locals(long_2,float_1,long_3,int_7);

	unsigned_int_1 = locals_for_lambda(short_3,unsigned_int_4);

	double_5 = exp ( double_1 ) ;
	double_6 = tan ( double_1 ) ;
	double_3 = ceil ( double_3 ) ;
	int_1 = flatten_rest_x(char_2,int_1,int_5);

	far(unsigned_int_5);

	short_1 = short_2;
	double_6 = fmod ( double_2 , double_3 ) ;
	double_1 = sqrt ( double_2 ) ;
}
void set_far( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = asin ( double_2 ) ;
}
long compile_if( double parameter_1,short parameter_2,long parameter_3,int parameter_4)
{
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_2 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char_1 = fdr();

	double_1 = double_1;
	unsigned_int_1 = cons(short_1,int_1);

	double_2 = sqrt ( double_1 ) ;
	double_3 = double_4;
	int_1 = int_1 + int_1;
	unsigned_int_2 = unsigned_int_2;
	int_2 = int_2;
	double_1 = cosh ( double_5 ) ;
	long_1 = long_1;
	double_2 = floor ( double_2 ) ;
	car(float_1);

	int_2 = int_1 * int_3;
	set_far(double_2,int_4);

	double_1 = asin ( double_1 ) ;
	compile_expr(long_2,long_2,double_1,float_2);

	short_1 = short_2 + short_2;
	double_1 = atan ( double_2 ) ;
}
double compile_do( double parameter_1,char parameter_2,float parameter_3,short parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	far(unsigned_int_1);

	char_1 = fdr();

	double_1 = tanh ( double_1 ) ;
	compile_expr(long_1,long_1,double_2,float_1);

	short_1 = is_nil(long_1);

}
void compile_expr( long parameter_1,long parameter_2,double parameter_3,float parameter_4)
{
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_5 = 1;
	short short_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	double double_7 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	char char_6 = 1;
	double double_9 = 1;
	long long_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_4 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_4 = 1;
	float float_4 = 1;
	double double_8 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_11 = 1;
	double double_12 = 1;
	float float_6 = 1;
	int int_4 = 1;
	double double_13 = 1;
	double double_14 = 1;
	{
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_5 = 1;
		short short_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		double double_7 = 1;
		char char_5 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		char char_6 = 1;
		double double_9 = 1;
		long long_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_4 = 1;
		long long_3 = 1;
		double double_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_4 = 1;
		float float_4 = 1;
		double double_8 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_11 = 1;
		double double_12 = 1;
		float float_6 = 1;
		int int_4 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double_1 = acos ( double_2 ) ;
		double_3 = acos ( double_4 ) ;
		char_2 = char_1 + char_2;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
		if(1)
		{
			float_1 = compile_with(char_1,char_2,long_1,int_1,unsigned_int_2,long_1);

			double_2 = log ( double_5 ) ;
			short_1 = compile_lambda(float_2,char_1,short_2,char_3);

			int_2 = int_2;
		}
		if(1)
		{
			double_2 = log10 ( double_6 ) ;
		}
		if(1)
		{
			args_error_unspecific(long_1);

			double_2 = sinh ( double_5 ) ;
		}
		if(1)
		{
			unsigned_int_1 = pcopy(double_2);

			double_7 = generic_error(unsigned_int_1,float_2);

			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			far(unsigned_int_1);

			long_1 = long_1 + long_1;
		}
		long_1 = any2int(float_2);

		long_1 = long_1;
		if(1)
		{
			char_4 = char_3;
			char_1 = char_5 * char_3;
			double_2 = tanh ( double_6 ) ;
		}
		else
		{
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			double double_5 = 1;
			short short_1 = 1;
			float float_2 = 1;
			short short_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			double double_7 = 1;
			char char_5 = 1;
			float float_3 = 1;
			int int_3 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_5 = 1;
			char char_6 = 1;
			double double_9 = 1;
			long long_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_4 = 1;
			long long_3 = 1;
			double double_1 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_4 = 1;
			float float_4 = 1;
			double double_8 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_11 = 1;
			double double_12 = 1;
			float float_6 = 1;
			int int_4 = 1;
			double double_13 = 1;
			double double_14 = 1;
			unsigned_int_2 = cdr(long_1);

			short_2 = short_2;
			car(float_3);

			float_1 = float_4 + float_3;
			double_5 = tanh ( double_6 ) ;
			double_5 = is(unsigned_int_1);

			short_2 = short_1 * short_1;
			int_2 = int_2;
			if(1)
			{
				int_4 = int_1 + int_3;
			}
			int_5 = int_4 * int_1;
			double_7 = log ( double_1 ) ;
			unsigned_int_4 = get_binding(float_5);

			double_7 = cosh ( double_7 ) ;
		}
		double_6 = atan2 ( double_2 , double_2 ) ;
		char_6 = char_5 + char_4;
		if(1)
		{
			double_8 = fmod ( double_9 , double_5 ) ;
			double_8 = atan ( double_10 ) ;
		}
		char_6 = fdr();

		set_far(double_9,int_2);

		unsigned_int_3 = unsigned_int_5;
		if(1)
		{
			if(1)
			{
				long_2 = compile_if(double_4,short_1,long_2,int_5);

				double_11 = cosh ( double_4 ) ;
				short_3 = assoc(unsigned_int_6,float_1);

				double_7 = fabs ( double_12 ) ;
			}
			else
			{
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				long long_1 = 1;
				int int_1 = 1;
				double double_5 = 1;
				short short_1 = 1;
				float float_2 = 1;
				short short_2 = 1;
				char char_3 = 1;
				int int_2 = 1;
				double double_7 = 1;
				char char_5 = 1;
				float float_3 = 1;
				int int_3 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_5 = 1;
				char char_6 = 1;
				double double_9 = 1;
				long long_2 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_4 = 1;
				long long_3 = 1;
				double double_1 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_4 = 1;
				float float_4 = 1;
				double double_8 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_11 = 1;
				double double_12 = 1;
				float float_6 = 1;
				int int_4 = 1;
				double double_13 = 1;
				double double_14 = 1;
				double_10 = tan ( double_6 ) ;
				unsigned_int_6 = tag_of(char_3);

				double_4 = compile_do(double_3,char_5,float_1,short_2);

				double_8 = double_13 * double_3;
			}
		}
		is_cons(short_4);

		unsigned_int_6 = unsigned_int_6 * unsigned_int_6;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			double double_5 = 1;
			short short_1 = 1;
			float float_2 = 1;
			short short_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			double double_7 = 1;
			char char_5 = 1;
			float float_3 = 1;
			int int_3 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_5 = 1;
			char char_6 = 1;
			double double_9 = 1;
			long long_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_4 = 1;
			long long_3 = 1;
			double double_1 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_4 = 1;
			float float_4 = 1;
			double double_8 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_11 = 1;
			double double_12 = 1;
			float float_6 = 1;
			int int_4 = 1;
			double double_13 = 1;
			double double_14 = 1;
			long_2 = any2sub(long_3);

			double_9 = asin ( double_14 ) ;
			double_11 = log10 ( double_12 ) ;
		}
		get_dyn(int_3);

		float_4 = float_6;
	}
}
float compile2list( short parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
	compile_expr(long_1,long_1,double_1,float_1);

	double_2 = log10 ( double_1 ) ;
	double_2 = tan ( double_3 ) ;
	char_1 = fdr();

	double_2 = atan2 ( double_2 , double_2 ) ;
	double_3 = log10 ( double_3 ) ;
	single();

	float_1 = float_2;
	return float_1;
}
double compile2sub_code( unsigned int parameter_1,float parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	float_1 = compile2list(short_1,unsigned_int_1,int_3,int_2);

	double_2 = log ( double_3 ) ;
	len();

	double_4 = asin ( double_1 ) ;
	return double_4;
	make_sub_code(int_4,int_5,int_1,int_4,int_2);

}
double compile_toplevel_expr( char parameter_1,int uni_para)
{
	long long_1 = 1;
	double double_1 = 1;
	long_1 = mac_expand(uni_para);

	double_1 = double_1;
	return double_1;
}
unsigned int eval_toplevel_expr( int parameter_1,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double_1 = compile_toplevel_expr(char_1,uni_para);

	long_1 = long_1;
	double_1 = ceil ( double_1 ) ;
}
int bone_read()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		unsigned_int_1 = reader();

		double_1 = fabs ( double_1 ) ;
	}
	return int_1;
	int_1 = parse_error(float_1);

}
short is_symchar( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
unsigned int read_sym_chars( int parameter_1)
{
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	listgen_add(float_1,char_1);

	long_1 = nextc();

	double_1 = exp ( double_1 ) ;
	long_1 = listgen_new();

	long_1 = look();

	double_2 = tan ( double_2 ) ;
	short_1 = is_symchar(int_1);

	double_3 = sqrt ( double_4 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		char_2 = int2any();

		double_4 = floor ( double_4 ) ;
	}
	return unsigned_int_1;
}
char list2charp( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = cosh ( double_2 ) ;
	len();

	double_3 = exp ( double_3 ) ;
	long_1 = any2int(float_1);

	double_2 = sqrt ( double_1 ) ;
	double_1 = fmod ( double_4 , double_2 ) ;
	char_1 = char_1 + char_2;
	int_1 = int_2;
	double_3 = sinh ( double_4 ) ;
	return char_2;
}
short intern_from_chars( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	double_1 = acos ( double_2 ) ;
	long_1 = intern(int_1);

	double_2 = fmod ( double_2 , double_1 ) ;
	char_1 = list2charp(int_1);

	double_1 = fabs ( double_1 ) ;
	return short_1;
}
char float2any( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	float_1 = float_2;
	short_1 = short_2;
	short_4 = short_3 * short_2;
	return char_1;
}
void digit2int( unsigned int parameter_1)
{
	long long_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = any2int(float_1);

	int_3 = int_1 * int_2;
}
char is_num()
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	return char_1;
	unsigned_int_1 = is_tagged(char_2,long_1);

}
long chars2num( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_2 = 1;
	float float_2 = 1;
	long long_5 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double_1 = sinh ( double_2 ) ;
	int_2 = int_1 + int_2;
	char_1 = int2any();

	double_2 = atan ( double_1 ) ;
	digit2int(unsigned_int_1);

	long_1 = any2int(float_1);

	short_1 = short_1;
	char_1 = is_num();

	double_3 = tan ( double_4 ) ;
	if(1)
	{
		if(1)
		{
			long_1 = long_1 * long_2;
		}
		if(1)
		{
		}
		if(1)
		{
			double_3 = double_3 * double_3;
		}
		return long_3;
	}
	double_3 = asin ( double_3 ) ;
	long_4 = long_2;
	double_4 = atan ( double_1 ) ;
	if(1)
	{
		if(1)
		{
			return long_2;
		}
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		long long_3 = 1;
		long long_4 = 1;
		char char_2 = 1;
		float float_2 = 1;
		long long_5 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char_2 = float2any(float_2);

		double_5 = tanh ( double_1 ) ;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			short short_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			long long_3 = 1;
			long long_4 = 1;
			char char_2 = 1;
			float float_2 = 1;
			long long_5 = 1;
			double double_5 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int_3 = int_4;
		}
		return long_5;
	}
	else
	{
		return long_5;
	}
}
void chars_to_num_or_sym( double parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	int_1 = int_1;
	long_1 = chars2num(short_1);

	double_1 = is(unsigned_int_1);

	short_2 = intern_from_chars(double_1);

}
unsigned int get_binding( float parameter_1,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = hash_get(int_1,float_1,uni_para);

	return unsigned_int_1;
}
char add_another_rest_arg()
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	single();

	next_call();

	long_2 = long_1 + long_2;
	double_1 = atan2 ( double_1 , double_2 ) ;
	set_fdr(int_1,double_2);

	double_3 = cosh ( double_3 ) ;
}
int add_first_rest_arg()
{
	double double_1 = 1;
	double double_2 = 1;
	single();

	double_1 = double_1;
	next_call();

	double_2 = atan2 ( double_2 , double_2 ) ;
}
float add_rest_arg()
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		next_call();

		char_1 = add_another_rest_arg();

		double_1 = cos ( double_1 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		args_error_unspecific(long_1);

		char_2 = char_3;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	}
	int_2 = add_first_rest_arg();

}
long add_nonrest_arg()
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = sqrt ( double_2 ) ;
	next_call();

}
int drop_locals( int parameter_1)
{
	double double_1 = 1;
	double_1 = sinh ( double_1 ) ;
}
void args_error_unspecific( long parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	float_1 = args_error(short_1,short_2);

	single();

	long_1 = intern(int_1);

	double_1 = asin ( double_1 ) ;
}
void verify_argc( long parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "~j?aA") == 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		args_error_unspecific(long_1);

		long_1 = long_2;
	}
}
void next_call()
{
}
double add_upcoming_call()
{
	float float_1 = 1;
	double double_1 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double_1 = sqrt ( double_1 ) ;
		float_1 = float_1 + float_1;
	}
}
double call( int parameter_1,short parameter_2,int parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_13 = 1;
	long long_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_11 = 1;
	float float_6 = 1;
	char char_4 = 1;
	char char_5 = 1;
	short short_4 = 1;
	double double_12 = 1;
	short short_6 = 1;
	int int_3 = 1;
	double double_10 = 1;
	short short_5 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_2 = tan ( double_1 ) ;
	long_1 = long_1;
	char controller4vul_43[4];
	fgets(controller4vul_43 ,5 ,stdin);
	if( strcmp( controller4vul_43, "L@kB") == 0)
	{
		unsigned_int_1 = get_binding(float_1,uni_para);

		double_3 = double_2;
		double_3 = pow ( double_1 , double_1 ) ;
	}
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_1;
	double_2 = double_2;
	double_2 = cosh ( double_3 ) ;
	double_3 = tan ( double_3 ) ;
	double_3 = double_4;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_13 = 1;
		long long_5 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		short short_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_11 = 1;
		float float_6 = 1;
		char char_4 = 1;
		char char_5 = 1;
		short short_4 = 1;
		double double_12 = 1;
		short short_6 = 1;
		int int_3 = 1;
		double double_10 = 1;
		short short_5 = 1;
		looper_1 += 1;
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_7 = 1;
			double double_8 = 1;
			double double_13 = 1;
			long long_5 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_4 = 1;
			short short_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_11 = 1;
			float float_6 = 1;
			char char_4 = 1;
			char char_5 = 1;
			short short_4 = 1;
			double double_12 = 1;
			short short_6 = 1;
			int int_3 = 1;
			double double_10 = 1;
			short short_5 = 1;
			double_5 = tanh ( double_2 ) ;
			double_4 = atan2 ( double_5 , double_6 ) ;
			double_3 = log10 ( double_3 ) ;
			short_1 = short_1 + short_2;
			double_7 = double_2;
			long_2 = long_3;
			float_1 = float_1 + float_1;
			double_5 = acos ( double_6 ) ;
			double_5 = log10 ( double_4 ) ;
			char_1 = char_2;
			double_2 = log ( double_1 ) ;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			long_4 = long_1;
			unsigned_int_2 = unsigned_int_3;
			if(1)
			{
				double_1 = tanh ( double_1 ) ;
			}
			short_3 = short_3 + short_3;
			float_2 = float_1 * float_2;
			unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
			unsigned_int_3 = unsigned_int_3;
			double_7 = double_8;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				float_2 = float_3;
			}
			double_9 = floor ( double_3 ) ;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			char_2 = char_1 * char_1;
			char_3 = char_1 * char_1;
			char_1 = char_3 + char_2;
			unsigned_int_4 = unsigned_int_5;
			double_3 = cosh ( double_8 ) ;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				double double_3 = 1;
				long long_2 = 1;
				double double_4 = 1;
				double double_7 = 1;
				double double_8 = 1;
				double double_13 = 1;
				long long_5 = 1;
				double double_5 = 1;
				double double_6 = 1;
				short short_1 = 1;
				short short_2 = 1;
				long long_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_4 = 1;
				short short_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_1 = 1;
				int int_2 = 1;
				float float_4 = 1;
				float float_5 = 1;
				double double_11 = 1;
				float float_6 = 1;
				char char_4 = 1;
				char char_5 = 1;
				short short_4 = 1;
				double double_12 = 1;
				short short_6 = 1;
				int int_3 = 1;
				double double_10 = 1;
				short short_5 = 1;
				double_1 = fmod ( double_7 , double_8 ) ;
				double_10 = cosh ( double_10 ) ;
			}
			else
			{
				int_2 = int_1 * int_2;
			}
			double_2 = atan ( double_2 ) ;
			int_1 = int_1;
			double_7 = atan ( double_5 ) ;
			float_1 = float_3 + float_4;
			if(1)
			{
				int_1 = int_2 + int_1;
			}
			float_3 = float_2 + float_5;
			double_7 = double_11;
			double_8 = tan ( double_11 ) ;
			float_5 = float_2;
			float_6 = float_6 * float_4;
			short_3 = short_2 * short_2;
			char_5 = char_4 * char_4;
			char_4 = char_1 * char_4;
			char controller_4[2];
			fgets(controller_4 ,2 ,stdin);
			if( strcmp( controller_4, "[") == 0)
			{
				double double_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				double double_3 = 1;
				long long_2 = 1;
				double double_4 = 1;
				double double_7 = 1;
				double double_8 = 1;
				double double_13 = 1;
				long long_5 = 1;
				double double_5 = 1;
				double double_6 = 1;
				short short_1 = 1;
				short short_2 = 1;
				long long_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_4 = 1;
				short short_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_4 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_1 = 1;
				int int_2 = 1;
				float float_4 = 1;
				float float_5 = 1;
				double double_11 = 1;
				float float_6 = 1;
				char char_4 = 1;
				char char_5 = 1;
				short short_4 = 1;
				double double_12 = 1;
				short short_6 = 1;
				int int_3 = 1;
				double double_10 = 1;
				short short_5 = 1;
				short_1 = short_1 * short_4;
				double_2 = acos ( double_6 ) ;
				double_6 = pow ( double_5 , double_12 ) ;
				double_6 = atan ( double_7 ) ;
				short_5 = short_4;
				long_1 = long_4 + long_1;
			}
			double_2 = fabs ( double_6 ) ;
			int_1 = int_2 + int_2;
			short_4 = short_6;
			double_5 = ceil ( double_9 ) ;
			double_12 = cosh ( double_3 ) ;
			if(1)
			{
				int_2 = int_2 * int_2;
			}
			double_11 = asin ( double_2 ) ;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			double_12 = fabs ( double_2 ) ;
			double_5 = sqrt ( double_1 ) ;
			double_3 = ldexp ( double_11 , int_3 ) ;
		}
		long_1 = long_5 + long_2;
	}
	double_8 = pow ( double_7 , double_13 ) ;
}
float args_error( short parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned_int_1 = cons(short_1,int_1);

	double_1 = sinh ( double_1 ) ;
	double_2 = generic_error(unsigned_int_2,float_1);

}
short alloc_locals( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = asin ( double_1 ) ;
	double_1 = sqrt ( double_2 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_1 = int_1 + int_1;
		float_2 = float_1 * float_1;
	}
	return short_1;
}
char count_locals()
{
	char char_1 = 1;
	return char_1;
}
double apply( long parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_1 = 1;
	double double_7 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double_1 = fabs ( double_2 ) ;
	double_3 = double_3 + double_3;
	double_1 = cos ( double_4 ) ;
	double_1 = exp ( double_4 ) ;
	double_5 = fabs ( double_2 ) ;
	double_6 = ceil ( double_2 ) ;
	long_1 = long_1 + long_1;
	if(1)
	{
		double_5 = double_5;
		double_2 = double_2 + double_7;
	}
	char controller4vul_41[1];
	fgets(controller4vul_41 ,2 ,stdin);
	if( strcmp( controller4vul_41, "<") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_1 = 1;
		double double_7 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double double_8 = 1;
		double double_9 = 1;
		char controller4vul_42[3];
		fgets(controller4vul_42 ,4 ,stdin);
		if( strcmp( controller4vul_42, "3:E") < 0)
		{
			double_2 = call(int_1,short_1,int_1,uni_para);

			double_7 = atan2 ( double_5 , double_1 ) ;
		}
		double_2 = cos ( double_3 ) ;
		double_4 = acos ( double_8 ) ;
		double_9 = log10 ( double_2 ) ;
		long_1 = long_1;
	}
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_5 = double_7;
	if(1)
	{
		double_3 = asin ( double_1 ) ;
	}
	if(1)
	{
		double_2 = atan2 ( double_5 , double_2 ) ;
	}
	int_1 = int_2 + int_1;
}
void call0( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	double_2 = apply(long_1,int_1,876);

}
void get_reader( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = hash_get(int_1,float_1,446);

}
void set_fdr( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float_1 = float_2;
}
void listgen_add( float parameter_1,char parameter_2)
{
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short_1 = is_nil(long_1);

		unsigned_int_1 = unsigned_int_2;
	}
	else
	{
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		single();

		double_1 = atan2 ( double_2 , double_1 ) ;
		set_fdr(int_1,double_3);

		double_3 = double_1;
		double_1 = floor ( double_3 ) ;
	}
}
long listgen_new()
{
	double double_1 = 1;
	long long_1 = 1;
	double_1 = asin ( double_1 ) ;
	return long_1;
}
int read_str()
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		looper_1 += 1;
		long_1 = listgen_new();

		double_3 = floor ( double_3 ) ;
		if(1)
		{
			return int_1;
		}
		char controller_2[4];
		fgets(controller_2 ,4 ,stdin);
		if( strcmp( controller_2, "@mL") == 0)
		{
			char_1 = int2any();

			double_2 = tan ( double_3 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			{
				double double_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				int int_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				int int_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_3 = 1;
				char_1 = char_1;
				char_2 = str();

				int_2 = int_3;
				int_2 = parse_error(float_1);

				double_2 = atan ( double_2 ) ;
				listgen_add(float_2,char_2);

				double_3 = ldexp ( double_3 , int_3 ) ;
			}
			long_1 = nextc();

			unsigned_int_1 = unsigned_int_2;
		}
	}
}
float read_unquote()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned_int_1 = reader();

	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	double_1 = double_2;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "mdI@!") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double_1 = ldexp ( double_3 , int_1 ) ;
		long_1 = look();

		long_2 = nextc();

		double_4 = fabs ( double_1 ) ;
	}
	return float_1;
	unsigned_int_1 = cons(short_1,int_2);

}
long short_lambda_parser( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	unsigned_int_1 = reader();

	is_cons(short_1);

	unsigned_int_1 = cons(short_1,int_1);

	long_1 = long_2;
	if(1)
	{
		double_1 = cos ( double_1 ) ;
		return long_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		float_1 = is_sym(double_1);

		unsigned_int_1 = unsigned_int_2;
		int_1 = parse_error(float_2);

		double_2 = sinh ( double_1 ) ;
		return long_3;
	}
	return long_1;
}
short read_lambda_short_form()
{
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long_1 = short_lambda_parser(short_1);

	unsigned_int_1 = list3(double_1,long_1,int_1);

	double_2 = pow ( double_1 , double_2 ) ;
	return short_2;
}
int parse_error( float parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double_1 = sinh ( double_1 ) ;
	eprintf(char_1,double_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	float_1 = float_1 + float_1;
	double_2 = eprint();

}
unsigned int read_list()
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = int_1;
	if(1)
	{
		return unsigned_int_1;
	}
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_1 = cons(short_1,int_2);

		double_2 = double_1 * double_1;
	}
	if(1)
	{
		unsigned_int_2 = reader();

		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			int_3 = parse_error(float_1);

			int_1 = int_2 * int_2;
		}
		return unsigned_int_2;
	}
	return unsigned_int_1;
}
unsigned int find_token()
{
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		long long_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		char char_2 = 1;
		double double_1 = 1;
		looper_1 += 1;
		long_1 = nextc();

		char_1 = char_1 + char_2;
		{
			long long_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_2 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double_1 = tanh ( double_1 ) ;
			return unsigned_int_1;
		}
	}
	double_2 = skip_until(char_1);

}
unsigned int reader()
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int_1 = read_str();

	long_1 = long_2;
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		return unsigned_int_1;
		return unsigned_int_2;
		return unsigned_int_3;
		return unsigned_int_1;
		return unsigned_int_4;
		return unsigned_int_3;
		return unsigned_int_2;
		if(1)
		{
			unsigned_int_1 = read_list();

			short_1 = read_lambda_short_form();

			unsigned_int_1 = cons(short_1,int_1);

			float_1 = is_sym(double_1);

			call0(long_1);

			char_1 = fdr();

			unsigned_int_1 = read_sym_chars(int_2);

			double_2 = exp ( double_3 ) ;
		}
		unsigned_int_2 = find_token();

		int_2 = parse_error(float_2);

		get_reader(int_2);

		double_3 = ceil ( double_4 ) ;
		if(1)
		{
			double_1 = tanh ( double_5 ) ;
		}
		chars_to_num_or_sym(double_1);

		double_5 = atan2 ( double_2 , double_3 ) ;
		return unsigned_int_5;
		return unsigned_int_5;
		return unsigned_int_3;
	}
	single();

	float_2 = read_unquote();

	double_5 = is(unsigned_int_3);

}
short utf8_read()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_3 = 1;
	unsigned_int_1 = reader();

	double_1 = pow ( double_1 , double_1 ) ;
	if(1)
	{
		return short_1;
	}
	if(1)
	{
		return short_2;
	}
	short_2 = short_2 * short_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_3 = 1;
		char_1 = char_1 + char_1;
		float_2 = float_1 + float_2;
	}
	if(1)
	{
		short_1 = invalid_utf8(int_1);

		double_2 = atan2 ( double_2 , double_1 ) ;
		double_2 = fmod ( double_1 , double_2 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_3 = 1;
		double_2 = double_3;
		double_1 = tan ( double_2 ) ;
	}
	else
	{
		int_1 = int_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_3 = 1;
		double_2 = log10 ( double_1 ) ;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			double_2 = sqrt ( double_2 ) ;
		}
		float_3 = float_3 + float_3;
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			long long_1 = 1;
			short short_3 = 1;
			double_4 = atan ( double_1 ) ;
			long_1 = long_1;
			short_3 = short_3 * short_2;
			if(1)
			{
				long_1 = long_1 * long_1;
			}
		}
		return short_1;
	}
}
int utf8getc( float parameter_1)
{
	int int_1 = 1;
	short short_1 = 1;
	return int_1;
	short_1 = utf8_read();

}
long nextc()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = untag(short_1);

	int_1 = utf8getc(float_1);

	double_1 = tanh ( double_1 ) ;
	if(1)
	{
		short_1 = src2fp();

		double_1 = sqrt ( double_1 ) ;
	}
	return long_1;
}
double skip_until( char parameter_1)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_2 = 1;
	long_1 = long_1;
	do
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double double_2 = 1;
		double_1 = exp ( double_2 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	double_1 = cosh ( double_3 ) ;
	looper_1 += 1;
	long_1 = nextc();

}
long look()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short_1 = src2fp();

	int_1 = int_2;
	float_1 = float_2;
	double_1 = acos ( double_2 ) ;
	return long_1;
}
unsigned int in_reg()
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long_1 = reg_push(int_1);

	int_1 = reg_new();

	int_3 = int_2 + int_2;
}
float fail( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = fmod ( double_1 , double_2 ) ;
	double_2 = floor ( double_1 ) ;
	eprintf(char_1,double_2);

}
char mod2file( float parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1;
	if(1)
	{
		return char_1;
	}
	int_2 = int_1 * int_1;
	double_2 = log ( double_3 ) ;
	return char_1;
	len();

}
void bone_load( short parameter_1,int uni_para)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_3 = 1;
	double double_8 = 1;
	long long_4 = 1;
	double double_9 = 1;
	double_1 = tan ( double_1 ) ;
	long_2 = long_1 * long_1;
	char controller4vul_37[1];
	fgets(controller4vul_37 ,2 ,stdin);
	if( strcmp( controller4vul_37, ".") == 0)
	{
		unsigned_int_1 = eval_toplevel_expr(int_1,uni_para);

		double_2 = log10 ( double_3 ) ;
		double_2 = asin ( double_2 ) ;
	}
	double_2 = ceil ( double_1 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_2 = ldexp ( double_2 , int_2 ) ;
	double_1 = log ( double_4 ) ;
	long_3 = long_1 + long_2;
	if(1)
	{
		double_3 = double_2;
	}
	float_1 = float_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_5 = exp ( double_5 ) ;
	}
	double_7 = double_6 * double_3;
	double_3 = log10 ( double_5 ) ;
	int_1 = int_3;
	double_6 = acos ( double_8 ) ;
	long_2 = long_4;
	double_1 = floor ( double_5 ) ;
	double_8 = atan2 ( double_5 , double_6 ) ;
	double_9 = log10 ( double_7 ) ;
	if(1)
	{
		long_2 = long_1 * long_3;
	}
}
void bone_posix_init()
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_3 = 1;
	long long_4 = 1;
	char char_4 = 1;
	short short_3 = 1;
	double double_11 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_12 = 1;
	float float_3 = 1;
	float float_4 = 1;
	int int_7 = 1;
	short short_4 = 1;
	long_1 = long_1 + long_1;
	short_1 = short_1 * short_2;
	float_1 = float_1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	bone_info_entry(unsigned_int_1,int_2);

	double_2 = tan ( double_3 ) ;
	double_4 = atan ( double_1 ) ;
	int_2 = int_3 * int_2;
	int_2 = int_3 + int_4;
	char_3 = char_1 + char_2;
	double_3 = log10 ( double_5 ) ;
	double_6 = pow ( double_6 , double_3 ) ;
	double_5 = tan ( double_7 ) ;
	long_2 = long_1 * long_2;
	float_2 = float_2 * float_2;
	double_4 = sinh ( double_3 ) ;
	double_8 = double_5;
	double_9 = log ( double_4 ) ;
	int_3 = int_3;
	int_4 = int_4 + int_2;
	double_3 = double_5 + double_3;
	double_8 = tanh ( double_10 ) ;
	double_9 = tan ( double_2 ) ;
	long_3 = long_4;
	char_4 = char_4;
	double_5 = fmod ( double_2 , double_1 ) ;
	short_3 = short_2 * short_1;
	double_9 = atan2 ( double_3 , double_10 ) ;
	double_11 = pow ( double_7 , double_5 ) ;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
	double_2 = log10 ( double_2 ) ;
	int_4 = int_5 * int_1;
	int_5 = int_1 * int_6;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	long_3 = long_3 * long_4;
	double_3 = double_12;
	float_1 = float_3 + float_4;
	bone_register_csub(long_1,double_4,int_7,int_7);

	double_6 = log ( double_10 ) ;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
	double_3 = floor ( double_11 ) ;
	short_1 = short_4 * short_3;
}
char set_dyn_val( long parameter_1,float parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char_1 = check_dyn_bound(char_1,double_1);

	char_1 = char_2;
	long_1 = any2int(float_1);

	double_1 = double_2;
	get_dyn(int_1);

	double_2 = sqrt ( double_1 ) ;
}
void bone_info_entry( unsigned int parameter_1,int parameter_2)
{
	char char_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char_1 = set_dyn_val(long_1,float_1);

	double_1 = double_1 * double_1;
	long_1 = intern(int_1);

	unsigned_int_1 = cons(short_1,int_1);

	float_1 = list2(char_2,long_2);

	char_1 = int2any();

	unsigned_int_2 = get_dyn_val(int_2);

}
unsigned int charp2list()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	return unsigned_int_1;
	unsigned_int_1 = cons(short_1,int_1);

	char_1 = int2any();

}
unsigned int charp2str( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	return unsigned_int_1;
	char_1 = str();

	unsigned_int_1 = charp2list();

}
long fp2src( long parameter_1,int parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return long_1;
	double_1 = fp2any(char_1,float_1,unsigned_int_1);

}
double is_dyn_bound( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	return double_1;
	double_2 = is(unsigned_int_1);

	get_dyn(int_1);

}
char create_dyn( int parameter_1,short parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		long long_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		double double_5 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		long_1 = intern(int_1);

		unsigned_int_1 = hash_set(long_1,char_1,unsigned_int_1);

		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	}
	double_1 = is(unsigned_int_3);

	double_2 = atan2 ( double_3 , double_2 ) ;
	double_3 = is_dyn_bound(int_1);

	double_2 = generic_error(unsigned_int_1,float_1);

	double_1 = cosh ( double_4 ) ;
	unsigned_int_4 = get_dyn_val(int_2);

	double_4 = double_5;
	char_2 = int2any();

}
float reader_bind( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	float_1 = add_name(short_1,double_1,short_1,int_1);

	double_1 = cos ( double_2 ) ;
}
float register_creader( long parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = double_2;
	float_1 = reader_bind(float_2,unsigned_int_1,char_1);

	long_1 = intern(int_1);

	unsigned_int_1 = make_csub(float_2,int_2,int_3);

}
char mac_bind( double parameter_1,short parameter_2,short parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = add_name(short_1,double_1,short_1,int_1);

	double_1 = double_1;
}
float register_cmac( float parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	char_1 = mac_bind(double_2,short_1,short_1);

	long_1 = intern(int_1);

	unsigned_int_1 = make_csub(float_1,int_1,int_2);

}
char sub2any()
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	return char_1;
	tag(double_1,long_1);

}
long ensure_sub_alloc( int parameter_1)
{
	short short_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "u#") < 0)
	{
		short short_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		int_2 = int_1 * int_2;
		unsigned_int_1 = unsigned_int_1;
		double_2 = double_1 + double_1;
	}
	short_1 = blocks_alloc(int_3);

}
float sub_alloc( long parameter_1)
{
	long long_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long_1 = ensure_sub_alloc(int_1);

	long_2 = long_1 + long_1;
	short_1 = short_1;
	long_1 = long_3 * long_3;
	double_1 = floor ( double_2 ) ;
	int_1 = int_1;
	return float_1;
}
void make_sub_code( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	float_1 = sub_alloc(long_1);

	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_2;
	double_2 = double_1;
	short_1 = short_1;
	double_3 = tanh ( double_2 ) ;
	long_2 = long_1;
}
unsigned int make_csub( float parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	long_2 = long_1 + long_1;
	float_1 = float_1;
	double_1 = double_1;
	char_1 = sub2any();

	int_1 = int_2;
	return unsigned_int_1;
	make_sub_code(int_1,int_1,int_2,int_1,int_2);

	int_3 = reg_alloc(int_1);

}
double fp2any( char parameter_1,float parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short_1 = short_1 * short_2;
	double_1 = tan ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_2 = int_1 + int_1;
	char_1 = bytes2words(char_2);

	double_1 = pow ( double_2 , double_2 ) ;
	return double_1;
	int_1 = reg_alloc(int_1);

	tag(double_1,long_1);

}
double fp2dst( char parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	return double_1;
	double_2 = fp2any(char_1,float_1,unsigned_int_1);

}
short copy_dst()
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	return short_1;
	double_1 = fp2dst(char_1,float_1);

	int_1 = dst2fp(short_1);

	short_1 = copy(long_1);

	double_1 = get_filename(char_1);

}
short src2fp()
{
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	return short_1;
	float_1 = any2fp(char_1,char_2);

}
long copy_src( short parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_3 = 1;
	double_1 = tanh ( double_1 ) ;
	unsigned_int_1 = input_line(char_1);

	double_3 = double_1 * double_2;
	char_2 = bytes2words(char_1);

	double_4 = log10 ( double_3 ) ;
	short_3 = short_1 + short_2;
	int_1 = reg_alloc(int_2);

	short_2 = src2fp();

	tag(double_5,long_1);

	float_1 = float_1 * float_1;
	return long_2;
	double_5 = get_filename(char_3);

}
double copy_sub( short parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_5 = 1;
	tag(double_1,long_1);

	double_2 = fabs ( double_3 ) ;
	short_1 = copy(long_1);

	double_4 = log10 ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	long_1 = any2sub(long_2);

	int_1 = reg_alloc(int_1);

	double_1 = exp ( double_2 ) ;
	double_4 = cosh ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double_5 = double_5 * double_2;
	}
	return double_1;
}
char str()
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	float_1 = float_1 * float_2;
	int_1 = reg_alloc(int_2);

	double_1 = pow ( double_1 , double_1 ) ;
	return char_1;
	tag(double_1,long_1);

}
short copy( long parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	{
		return short_1;
		return short_2;
		return short_2;
		return short_1;
		{
			return short_3;
			return short_4;
		}
		unsigned_int_1 = tag_of(char_1);

		unsigned_int_2 = cons(short_1,int_1);

		char_2 = str();

		unsigned_int_1 = unstr(char_1);

		double_1 = copy_sub(short_2);

		double_1 = get_other_type(int_1);

		short_4 = copy_dst();

		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	far(unsigned_int_2);

	char_1 = fdr();

	long_1 = copy_src(short_2);

}
unsigned int pcopy( double parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = copy(long_1);

	double_1 = ceil ( double_2 ) ;
	reg_permanent();

	double_3 = double_2;
	int_1 = int_1;
	return unsigned_int_1;
	int_1 = reg_pop();

}
int pcons( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double_1 = pow ( double_2 , double_2 ) ;
	double_3 = acos ( double_2 ) ;
	unsigned_int_1 = cons(short_1,int_1);

	double_2 = sqrt ( double_4 ) ;
	return int_1;
	reg_permanent();

	int_1 = reg_pop();

}
long name_sub( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short_1 = short_1;
	}
	double_1 = is(unsigned_int_1);

}
int is_sub( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	return int_1;
	unsigned_int_1 = is_tagged(char_1,long_1);

}
int check_overwrite( float parameter_1,double parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	far(unsigned_int_1);

	unsigned_int_2 = get_dyn_val(int_1);

	double_1 = generic_error(unsigned_int_3,float_1);

	double_1 = pow ( double_1 , double_1 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double_1 = is(unsigned_int_3);

		short_1 = short_1;
	}
	double_1 = hash_get(int_1,float_2,244);

	long_1 = intern(int_1);

}
float add_name( short parameter_1,double parameter_2,short parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_2 = 1;
		double double_2 = 1;
		long long_3 = 1;
		long_1 = name_sub(double_1,float_1);

		unsigned_int_1 = hash_set(long_2,char_1,unsigned_int_1);

		unsigned_int_1 = pcopy(double_1);

		long_1 = long_3;
	}
	int_1 = check_overwrite(float_1,double_1);

	int_2 = is_sub(float_2);

	long_1 = any2sub(long_2);

	int_2 = pcons(double_1,float_1);

	double_1 = pow ( double_1 , double_2 ) ;
}
short bind( short parameter_1,unsigned int parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double_1 = tan ( double_2 ) ;
	float_1 = add_name(short_1,double_2,short_1,int_1);

}
void bone_register_csub( long parameter_1,double parameter_2,int parameter_3,int parameter_4)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = intern(int_1);

	unsigned_int_1 = make_csub(float_1,int_1,int_1);

	double_1 = atan ( double_1 ) ;
	short_1 = bind(short_2,unsigned_int_2,float_1);

}
short init_csubs()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_8 = 1;
	float float_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_9 = 1;
	double double_10 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	double double_11 = 1;
	double double_12 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	double double_13 = 1;
	int int_5 = 1;
	double double_14 = 1;
	double double_15 = 1;
	double double_16 = 1;
	long long_5 = 1;
	long long_6 = 1;
	int int_6 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	double double_17 = 1;
	double double_18 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_5 = 1;
	double_1 = log ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_1 = ceil ( double_2 ) ;
	double_3 = acos ( double_1 ) ;
	double_1 = fabs ( double_1 ) ;
	unsigned_int_2 = unsigned_int_2;
	long_1 = long_2;
	double_4 = log ( double_4 ) ;
	double_2 = fabs ( double_5 ) ;
	double_5 = fabs ( double_6 ) ;
	double_5 = fmod ( double_7 , double_1 ) ;
	double_6 = floor ( double_1 ) ;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	bone_register_csub(long_2,double_3,int_1,int_1);

	double_3 = tanh ( double_8 ) ;
	float_1 = float_1;
	float_1 = register_cmac(float_1,char_1,int_2,int_2);

	double_9 = atan2 ( double_6 , double_9 ) ;
	double_4 = exp ( double_9 ) ;
	double_9 = floor ( double_4 ) ;
	double_3 = double_5 * double_2;
	double_10 = log ( double_2 ) ;
	short_2 = short_1 + short_1;
	double_3 = atan2 ( double_2 , double_6 ) ;
	double_7 = asin ( double_7 ) ;
	double_1 = atan2 ( double_5 , double_4 ) ;
	double_8 = cosh ( double_2 ) ;
	double_7 = ldexp ( double_5 , int_2 ) ;
	char_1 = char_2;
	double_5 = cosh ( double_11 ) ;
	double_12 = fmod ( double_8 , double_9 ) ;
	long_1 = long_3 + long_4;
	int_2 = int_3;
	double_6 = log10 ( double_1 ) ;
	double_3 = sqrt ( double_4 ) ;
	double_4 = ceil ( double_5 ) ;
	unsigned_int_2 = unsigned_int_2;
	double_11 = pow ( double_10 , double_8 ) ;
	double_3 = floor ( double_3 ) ;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_1;
	double_8 = sinh ( double_8 ) ;
	int_3 = int_4;
	double_1 = atan2 ( double_1 , double_5 ) ;
	double_2 = ldexp ( double_13 , int_5 ) ;
	double_4 = pow ( double_11 , double_11 ) ;
	char_1 = char_1 + char_1;
	double_1 = exp ( double_12 ) ;
	double_5 = pow ( double_13 , double_9 ) ;
	double_11 = cosh ( double_14 ) ;
	double_4 = log ( double_5 ) ;
	double_1 = double_14 * double_3;
	double_14 = ceil ( double_14 ) ;
	double_14 = double_8;
	unsigned_int_4 = unsigned_int_5 + unsigned_int_4;
	double_10 = cos ( double_9 ) ;
	double_2 = pow ( double_8 , double_6 ) ;
	double_4 = tan ( double_13 ) ;
	double_1 = atan ( double_2 ) ;
	double_8 = log10 ( double_10 ) ;
	double_9 = floor ( double_12 ) ;
	double_7 = cos ( double_4 ) ;
	double_5 = fmod ( double_15 , double_8 ) ;
	double_3 = ceil ( double_16 ) ;
	long_6 = long_5 + long_1;
	int_1 = int_4;
	int_6 = int_1;
	double_11 = fmod ( double_12 , double_8 ) ;
	double_2 = fmod ( double_16 , double_1 ) ;
	double_1 = tanh ( double_10 ) ;
	double_10 = sinh ( double_11 ) ;
	double_11 = tan ( double_2 ) ;
	double_2 = floor ( double_14 ) ;
	double_1 = cosh ( double_11 ) ;
	double_2 = double_7 + double_3;
	float_2 = float_2;
	double_8 = tanh ( double_4 ) ;
	unsigned_int_1 = unsigned_int_3;
	double_7 = asin ( double_3 ) ;
	double_7 = tanh ( double_13 ) ;
	float_4 = float_2 + float_3;
	short_1 = short_1 * short_3;
	double_5 = floor ( double_14 ) ;
	int_2 = int_1;
	unsigned_int_1 = unsigned_int_3;
	double_12 = sqrt ( double_17 ) ;
	int_6 = int_3;
	int_1 = int_6;
	double_11 = atan2 ( double_12 , double_18 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_6 = sinh ( double_17 ) ;
	short_1 = short_1;
	double_2 = cosh ( double_9 ) ;
	long_5 = long_3;
	int_1 = int_4;
	double_7 = fabs ( double_9 ) ;
	double_13 = cosh ( double_13 ) ;
	char_3 = char_4;
	double_2 = floor ( double_4 ) ;
	double_10 = log ( double_4 ) ;
	double_10 = log10 ( double_5 ) ;
	double_1 = atan2 ( double_7 , double_10 ) ;
	float_5 = register_creader(long_5,float_3);

	double_12 = double_5;
}
float list2( char parameter_1,long parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	return float_1;
	unsigned_int_1 = cons(short_1,int_1);

	single();

}
void qq_list( char parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
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
	is_cons(short_1);

	float_1 = list2(char_1,long_1);

	far(unsigned_int_1);

	char_1 = fdr();

	unsigned_int_1 = quasiquote();

	car(float_2);

	unsigned_int_1 = list3(double_1,long_2,int_1);

}
void single()
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned_int_1 = cons(short_1,int_1);

}
unsigned int list3( double parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	return unsigned_int_1;
	unsigned_int_2 = cons(short_1,int_1);

	single();

}
void car( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	check(unsigned_int_1,char_1);

	far(unsigned_int_2);

	double_1 = pow ( double_2 , double_2 ) ;
}
unsigned int input_line( char parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double_1 = generic_error(unsigned_int_1,float_1);

	double_2 = floor ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double_3 = double_2 + double_3;
	}
	return unsigned_int_1;
	long_1 = untag_check(long_1,long_1);

}
double get_filename( char parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		long_1 = untag_check(long_2,long_1);

		double_4 = double_2 * double_3;
	}
	return double_2;
	double_4 = generic_error(unsigned_int_1,float_1);

}
double get_other_type( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_1 = double_2;
	return double_3;
	long_1 = untag_check(long_1,long_1);

}
long any2sub( long parameter_1)
{
	long long_1 = 1;
	return long_1;
	long_1 = untag_check(long_1,long_1);

}
unsigned int unstr( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	return unsigned_int_1;
	long_1 = untag_check(long_1,long_2);

}
float any2float( float parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	long long_1 = 1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		long long_1 = 1;
		double_1 = generic_error(unsigned_int_1,float_1);

		long_1 = long_1 + long_1;
	}
	double_1 = fmod ( double_1 , double_1 ) ;
	int_1 = get_num_type(unsigned_int_1);

	long_2 = long_2 + long_2;
	return float_2;
}
double symtext( float parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	return double_1;
	long_1 = untag_check(long_2,long_1);

}
double print_sub_args()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	short short_3 = 1;
	if(1)
	{
		if(1)
		{
			is_cons(short_1);

			double_1 = tan ( double_2 ) ;
			double_2 = exp ( double_1 ) ;
			double_3 = fmod ( double_2 , double_2 ) ;
		}
		return double_3;
	}
	unsigned_int_1 = unsigned_int_2;
	int_1 = bputc(int_1);

	double_2 = ldexp ( double_2 , int_1 ) ;
	double_2 = bprintf(double_1,float_1);

	far(unsigned_int_1);

	char_1 = fdr();

	double_1 = double_1 * double_2;
	short_2 = is_nil(long_1);

	short_3 = print();

}
double is_single( short parameter_1)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	return double_1;
	is_cons(short_1);

	short_1 = is_nil(long_1);

	char_1 = fdr();

}
float is_arglist( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	float float_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		return float_1;
	}
	return float_2;
	short_1 = is_nil(long_1);

	float_3 = is_sym(double_1);

	is_cons(short_2);

	far(unsigned_int_1);

	char_1 = fdr();

}
short is_nil( long parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double bprintf( double parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = cos ( double_1 ) ;
	double_2 = atan2 ( double_2 , double_1 ) ;
	int_1 = dst2fp(short_1);

	double_2 = fmod ( double_1 , double_1 ) ;
}
unsigned int untag( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
long untag_check( long parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned_int_1 = untag(short_1);

	int_3 = int_1 * int_2;
	return long_1;
	check(unsigned_int_2,char_1);

}
float any2fp( char parameter_1,char parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double_1 = generic_error(unsigned_int_1,float_1);

	double_2 = ceil ( double_2 ) ;
	if(1)
	{
		double_1 = double_2;
	}
	return float_1;
	long_1 = untag_check(long_2,long_3);

}
int dst2fp( short parameter_1)
{
	int int_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	return int_1;
	float_1 = any2fp(char_1,char_2);

}
short invalid_utf8( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	basic_error(int_1,unsigned_int_1);

	double_1 = atan2 ( double_1 , double_2 ) ;
}
void utf8_write()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		int_2 = int_1 + int_1;
	}
	char controller_2[6];
	fgets(controller_2 ,6 ,stdin);
	if( strcmp( controller_2, "^A:6/") == 0)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_4 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_4 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float_1 = float_1 * float_1;
		short_1 = short_2;
		short_1 = short_1 * short_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_4 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short_2 = invalid_utf8(int_3);

		double_1 = ldexp ( double_1 , int_4 ) ;
		double_1 = sqrt ( double_1 ) ;
		int_1 = int_2 + int_2;
		double_2 = exp ( double_2 ) ;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_4 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
}
char utf8putc( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double_1 = pow ( double_1 , double_1 ) ;
	utf8_write();

}
int bputc( int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char_1 = utf8putc(int_1,short_1);

	int_1 = int_1;
	int_2 = dst2fp(short_1);

}
short print()
{
	long long_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_6 = 1;
	short short_2 = 1;
	float float_4 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_5 = 1;
	long long_5 = 1;
	double double_9 = 1;
	int int_5 = 1;
	short short_6 = 1;
	int int_6 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	double double_8 = 1;
	double double_10 = 1;
	double double_11 = 1;
	float float_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	short short_4 = 1;
	double double_12 = 1;
	long long_6 = 1;
	{
		long long_2 = 1;
		double double_1 = 1;
		char char_1 = 1;
		long long_3 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_4 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		float float_3 = 1;
		double double_6 = 1;
		short short_2 = 1;
		float float_4 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_5 = 1;
		long long_5 = 1;
		double double_9 = 1;
		int int_5 = 1;
		short short_6 = 1;
		int int_6 = 1;
		long long_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_3 = 1;
		double double_4 = 1;
		short short_3 = 1;
		double double_8 = 1;
		double double_10 = 1;
		double double_11 = 1;
		float float_5 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_4 = 1;
		short short_4 = 1;
		double double_12 = 1;
		long long_6 = 1;
		long_2 = long_1 * long_1;
		if(1)
		{
			if(1)
			{
				double_1 = double_1;
				char_1 = fdr();

				double_2 = double_2 + double_1;
			}
			if(1)
			{
				long_3 = long_1;
				float_1 = is_arglist(float_1);

				unsigned_int_1 = input_line(char_1);

				char_1 = char_2;
			}
			if(1)
			{
				int_1 = int_2;
				double_1 = double_1 * double_2;
			}
			if(1)
			{
				double_1 = tanh ( double_3 ) ;
				int_4 = int_1 + int_3;
			}
			if(1)
			{
				long long_2 = 1;
				double double_1 = 1;
				char char_1 = 1;
				long long_3 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_2 = 1;
				int int_2 = 1;
				double double_3 = 1;
				int int_4 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				float float_3 = 1;
				double double_6 = 1;
				short short_2 = 1;
				float float_4 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_5 = 1;
				short short_5 = 1;
				long long_5 = 1;
				double double_9 = 1;
				int int_5 = 1;
				short short_6 = 1;
				int int_6 = 1;
				long long_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_3 = 1;
				double double_4 = 1;
				short short_3 = 1;
				double double_8 = 1;
				double double_10 = 1;
				double double_11 = 1;
				float float_5 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_4 = 1;
				short short_4 = 1;
				double double_12 = 1;
				long long_6 = 1;
				long_2 = any2int(float_2);

				double_4 = log ( double_2 ) ;
				unsigned_int_1 = is_tagged(char_2,long_2);

				int_1 = int_3 + int_2;
				short_1 = short_1;
			}
		}
		far(unsigned_int_2);

		float_2 = float_1 * float_2;
		double_5 = pow ( double_2 , double_1 ) ;
		do
		{
			if(1)
			{
				int_1 = int_2;
			}
			else
			{
				long long_2 = 1;
				double double_1 = 1;
				char char_1 = 1;
				long long_3 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_2 = 1;
				int int_2 = 1;
				double double_3 = 1;
				int int_4 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				float float_3 = 1;
				double double_6 = 1;
				short short_2 = 1;
				float float_4 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_5 = 1;
				short short_5 = 1;
				long long_5 = 1;
				double double_9 = 1;
				int int_5 = 1;
				short short_6 = 1;
				int int_6 = 1;
				long long_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_3 = 1;
				double double_4 = 1;
				short short_3 = 1;
				double double_8 = 1;
				double double_10 = 1;
				double double_11 = 1;
				float float_5 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_4 = 1;
				short short_4 = 1;
				double double_12 = 1;
				long long_6 = 1;
				unsigned_int_3 = unsigned_int_4;
			}
			unsigned_int_2 = tag_of(char_3);

			double_4 = ceil ( double_2 ) ;
			int_4 = get_num_type(unsigned_int_3);

			float_2 = float_3;
		}
		int looper_1 = 0;
		while(looper_1 < 1)
		double_1 = double_1;
		looper_1 += 1;
		if(1)
		{
			double_3 = sinh ( double_5 ) ;
			double_4 = cosh ( double_5 ) ;
		}
		double_3 = print_sub_args();

		double_1 = symtext(float_3);

		double_4 = tan ( double_5 ) ;
		double_6 = asin ( double_5 ) ;
		{
			double_4 = fabs ( double_4 ) ;
			double_6 = is_single(short_2);

			float_4 = any2float(float_4);

			double_7 = get_filename(char_2);

			unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
			double_6 = double_2;
		}
		{
			long long_2 = 1;
			double double_1 = 1;
			char char_1 = 1;
			long long_3 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			double double_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			float float_3 = 1;
			double double_6 = 1;
			short short_2 = 1;
			float float_4 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_5 = 1;
			long long_5 = 1;
			double double_9 = 1;
			int int_5 = 1;
			short short_6 = 1;
			int int_6 = 1;
			long long_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_3 = 1;
			double double_4 = 1;
			short short_3 = 1;
			double double_8 = 1;
			double double_10 = 1;
			double double_11 = 1;
			float float_5 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_4 = 1;
			short short_4 = 1;
			double double_12 = 1;
			long long_6 = 1;
			long_2 = any2sub(long_3);

			short_2 = short_3;
			float_2 = is_sym(double_6);

			unsigned_int_5 = unstr(char_1);

			double_4 = cosh ( double_7 ) ;
			long_1 = long_4;
			double_6 = atan2 ( double_3 , double_1 ) ;
			double_3 = ldexp ( double_1 , int_3 ) ;
		}
		double_4 = fmod ( double_3 , double_6 ) ;
		{
			long long_2 = 1;
			double double_1 = 1;
			char char_1 = 1;
			long long_3 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			double double_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			float float_3 = 1;
			double double_6 = 1;
			short short_2 = 1;
			float float_4 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_5 = 1;
			long long_5 = 1;
			double double_9 = 1;
			int int_5 = 1;
			short short_6 = 1;
			int int_6 = 1;
			long long_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_3 = 1;
			double double_4 = 1;
			short short_3 = 1;
			double double_8 = 1;
			double double_10 = 1;
			double double_11 = 1;
			float float_5 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_4 = 1;
			short short_4 = 1;
			double double_12 = 1;
			long long_6 = 1;
			short_3 = short_4;
			short_5 = is_nil(long_5);

			double_1 = double_8 * double_9;
			double_7 = asin ( double_2 ) ;
			double_10 = fmod ( double_6 , double_7 ) ;
			double_5 = atan2 ( double_7 , double_5 ) ;
		}
		double_10 = double_8;
		double_5 = exp ( double_4 ) ;
		double_6 = atan2 ( double_5 , double_11 ) ;
		double_5 = bprintf(double_9,float_4);

		double_5 = log10 ( double_1 ) ;
		double_6 = acos ( double_4 ) ;
		double_8 = ceil ( double_4 ) ;
		double_5 = double_8;
		{
			long long_2 = 1;
			double double_1 = 1;
			char char_1 = 1;
			long long_3 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			int int_2 = 1;
			double double_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			float float_3 = 1;
			double double_6 = 1;
			short short_2 = 1;
			float float_4 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_5 = 1;
			long long_5 = 1;
			double double_9 = 1;
			int int_5 = 1;
			short short_6 = 1;
			int int_6 = 1;
			long long_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_3 = 1;
			double double_4 = 1;
			short short_3 = 1;
			double double_8 = 1;
			double double_10 = 1;
			double double_11 = 1;
			float float_5 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_4 = 1;
			short short_4 = 1;
			double double_12 = 1;
			long long_6 = 1;
			int_5 = bputc(int_2);

			is_cons(short_6);

			double_12 = tan ( double_10 ) ;
			float_3 = float_1 + float_2;
			double_11 = floor ( double_12 ) ;
			double_7 = tan ( double_11 ) ;
			double_1 = get_other_type(int_6);

			double_10 = cos ( double_8 ) ;
			double_9 = acos ( double_8 ) ;
			long_2 = long_6;
		}
		float_3 = float_5 + float_2;
	}
}
double as_sym( char parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	return double_1;
	tag(double_2,long_1);

}
int slot_used( int parameter_1)
{
	int int_1 = 1;
	return int_1;
}
unsigned int enlarge_table( char parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	double double_6 = 1;
	double double_3 = 1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[4];
		fgets(controller_1 ,4 ,stdin);
		if( strcmp( controller_1, ".&_") == 0)
		{
			double double_1 = 1;
			int int_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			double double_6 = 1;
			double double_3 = 1;
			int_1 = hash_new(double_2,unsigned_int_1);

			double_1 = double_3 * double_3;
		}
	}
	double_2 = acos ( double_4 ) ;
	double_5 = tan ( double_2 ) ;
	int_1 = slot_used(int_2);

	double_1 = floor ( double_5 ) ;
	unsigned_int_2 = hash_set(long_1,char_1,unsigned_int_3);

	unsigned_int_4 = unsigned_int_4;
	float_1 = float_1 + float_1;
	double_6 = log ( double_4 ) ;
}
unsigned int hash_set( long parameter_1,char parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = enlarge_table(char_1);

	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double_1 = fabs ( double_2 ) ;
		if(1)
		{
			double_1 = exp ( double_1 ) ;
			double_3 = cos ( double_1 ) ;
		}
	}
	int_1 = int_2;
	int_3 = int_3;
	double_1 = find_slot(int_2,short_1,double_3,768);

}
int reg_pop()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double_1 = cosh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
	char_1 = store_reg(double_2);

	int_1 = int_1;
	double_1 = sinh ( double_3 ) ;
	return int_2;
	short_1 = load_reg(long_1);

}
char bytes2words( char parameter_1)
{
	char char_1 = 1;
	return char_1;
}
long inc_regs()
{
	double double_3 = 1;
	double double_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		double double_3 = 1;
		double double_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double_1 = log10 ( double_2 ) ;
		double_1 = ceil ( double_3 ) ;
	}
	double_3 = asin ( double_4 ) ;
}
char store_reg( double parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1;
}
long reg_push( int parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	char_1 = store_reg(double_1);

	double_3 = double_1 * double_2;
	long_1 = inc_regs();

	unsigned_int_1 = unsigned_int_2;
	double_2 = log ( double_2 ) ;
	char_1 = char_2;
	short_1 = load_reg(long_2);

}
void reg_permanent()
{
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long_1 = reg_push(int_1);

	float_1 = float_1;
}
long add_sym( long parameter_1,unsigned int parameter_2,long parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	reg_permanent();

	int_1 = reg_pop();

	long_2 = long_1 + long_1;
	short_1 = short_1 + short_2;
	unsigned_int_1 = hash_set(long_3,char_1,unsigned_int_1);

	long_2 = long_1;
	int_1 = reg_alloc(int_1);

	double_1 = as_sym(char_2);

	double_1 = ldexp ( double_1 , int_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	return long_1;
	char_2 = bytes2words(char_1);

}
void tag( double parameter_1,long parameter_2)
{
}
void basic_error( int parameter_1,unsigned int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "y<|j") < 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		long long_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		backtrace();

		long_1 = long_1;
		eprintf(char_1,double_1);

		short_1 = short_2;
		double_2 = ldexp ( double_3 , int_1 ) ;
		double_4 = log10 ( double_1 ) ;
		long_2 = long_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
char int2any()
{
	double double_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		tag(double_1,long_1);

		double_1 = asin ( double_2 ) ;
	}
	return char_1;
	basic_error(int_1,unsigned_int_1);

}
double string_hash( long parameter_1,char parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double_1 = double_1;
	short_2 = short_1 + short_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		looper_1 += 1;
		char_1 = int2any();

		double_2 = log10 ( double_1 ) ;
		double_1 = double_3;
	}
	return double_1;
}
void len()
{
	int int_1 = 1;
	double double_1 = 1;
	int_1 = int_1;
	double_1 = sinh ( double_1 ) ;
}
long intern( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	char char_1 = 1;
	double double_5 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double_2 = double_1 + double_2;
	double_1 = tanh ( double_3 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		char char_1 = 1;
		double double_5 = 1;
		char char_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		looper_1 += 1;
		len();

		double_4 = hash_get(int_1,float_1,604);

		long_1 = add_sym(long_1,unsigned_int_1,long_2);

		double_2 = sqrt ( double_2 ) ;
		if(1)
		{
			return long_1;
		}
		if(1)
		{
			return long_3;
		}
		double_4 = string_hash(long_3,char_1);

		short_3 = short_1 + short_2;
	}
	double_5 = as_sym(char_2);

}
char check_dyn_bound( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short_1 = short_1;
	}
	double_1 = is(unsigned_int_1);

	double_2 = generic_error(unsigned_int_1,float_1);

}
double find_slot( int parameter_1,short parameter_2,double parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char * vul_var;
	double_1 = pow ( double_2 , double_2 ) ;
	double_2 = exp ( double_2 ) ;
	int_2 = int_1 + int_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		if(1)
		{
			double_2 = sqrt ( double_1 ) ;
		}
		char controller4vul_44[2];
		fgets(controller4vul_44 ,3 ,stdin);
		if( strcmp( controller4vul_44, "Z+") < 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			vul_var=(char*)malloc(20*sizeof(char));
			char controller4vul_45[4];
			fgets(controller4vul_45 ,5 ,stdin);
			if( strcmp( controller4vul_45, "gKf;") == 0)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				strcpy(vul_var, "CWE-761");
				if(uni_para == 233)
				{
					vul_var = vul_var + 1;
				}
				free(vul_var);
				unsigned_int_1 = unsigned_int_2;
			}
			int_3 = int_4;
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				short short_3 = 1;
				double_2 = fabs ( double_2 ) ;
				short_2 = short_1 + short_1;
			}
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short_3 = short_3;
		}
	}
}
double hash_get( int parameter_1,float parameter_2,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	double_1 = find_slot(int_1,short_1,double_1,uni_para);

	int_2 = int_1;
	return double_1;
}
void get_dyn( int parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double_1 = hash_get(int_1,float_1,349);

}
short get_existing_dyn( char parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char_1 = check_dyn_bound(char_1,double_1);

	double_2 = log10 ( double_2 ) ;
	double_2 = atan ( double_2 ) ;
	return short_1;
	get_dyn(int_1);

}
void is_self_evaluating( long parameter_1)
{
	float float_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	float_1 = is_sym(double_1);

	is_cons(short_1);

}
double eprint_arg( short parameter_1)
{
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		double double_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double_1 = eprint();

		short_2 = short_1 + short_1;
	}
	is_self_evaluating(long_1);

	unsigned_int_1 = unsigned_int_1;
	eprintf(char_1,double_1);

}
double is( unsigned int parameter_1)
{
	double double_1 = 1;
	return double_1;
}
void backtrace()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double double_4 = 1;
	long long_1 = 1;
	double double_6 = 1;
	double_1 = sqrt ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_3 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		int int_1 = 1;
		char char_1 = 1;
		double double_4 = 1;
		long long_1 = 1;
		double double_6 = 1;
		double_1 = is(unsigned_int_1);

		double_1 = eprint();

		short_1 = short_1 * short_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			double double_3 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			int int_1 = 1;
			char char_1 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_6 = 1;
			double_2 = ldexp ( double_1 , int_1 ) ;
		}
		float_1 = float_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			double double_3 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			int int_1 = 1;
			char char_1 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_6 = 1;
			char_1 = char_1;
			double_2 = sinh ( double_3 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			double double_3 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			int int_1 = 1;
			char char_1 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_6 = 1;
			double_1 = atan2 ( double_1 , double_4 ) ;
			long_1 = long_1;
		}
		eprintf(char_2,double_3);

		double_5 = atan2 ( double_2 , double_3 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			double double_3 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			int int_1 = 1;
			char char_1 = 1;
			double double_4 = 1;
			long long_1 = 1;
			double double_6 = 1;
			double_3 = eprint_arg(short_1);

			double_6 = pow ( double_1 , double_2 ) ;
		}
	}
}
long type_name( double parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	{
		return long_1;
		return long_2;
		return long_2;
		return long_2;
		return long_1;
	}
}
short type_error( int parameter_1,double parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_4 = 1;
	float_3 = float_1 * float_2;
	eprintf(char_1,double_1);

	int_1 = int_2;
	double_2 = ldexp ( double_3 , int_3 ) ;
	short_1 = short_1 + short_2;
	long_1 = type_name(double_4);

	double_1 = acos ( double_3 ) ;
	double_3 = eprint();

	backtrace();

}
void check( unsigned int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_1 = 1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_1 = 1;
		unsigned_int_1 = is_tagged(char_1,long_1);

		double_1 = floor ( double_1 ) ;
	}
	short_1 = type_error(int_1,double_2);

}
int get_num_type( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	return int_1;
	check(unsigned_int_2,char_1);

}
long any2int( float parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	if(1)
	{
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		int_1 = get_num_type(unsigned_int_1);

		double_1 = generic_error(unsigned_int_2,float_1);

		double_2 = log ( double_1 ) ;
	}
	if(1)
	{
		return long_1;
	}
	else
	{
		return long_1;
	}
}
unsigned int get_dyn_val( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	return unsigned_int_1;
	long_1 = any2int(float_1);

	short_1 = get_existing_dyn(char_1);

}
double eprint()
{
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double_1 = double_2;
		short_1 = print();

		unsigned_int_1 = unsigned_int_1;
		double_1 = log ( double_3 ) ;
		unsigned_int_2 = get_dyn_val(int_1);

		int_2 = int_1;
	}
	long_1 = intern(int_2);

}
void eprintf( char parameter_1,double parameter_2)
{
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double_1 = cos ( double_1 ) ;
		double_2 = acos ( double_2 ) ;
		char_1 = char_1;
		double_1 = ceil ( double_1 ) ;
	}
}
double generic_error( unsigned int parameter_1,float parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double_1 = eprint();

	int_2 = int_1 * int_1;
	double_1 = sinh ( double_1 ) ;
	double_1 = double_1;
	double_1 = exp ( double_1 ) ;
	backtrace();

	double_2 = exp ( double_2 ) ;
	eprintf(char_1,double_2);

}
char fdr()
{
	char char_1 = 1;
	return char_1;
}
void far( unsigned int parameter_1)
{
}
void block()
{
}
int reg_alloc( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	block();

	unsigned_int_2 = block_new(double_1);

	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		return int_1;
	}
	double_1 = atan ( double_1 ) ;
	double_2 = pow ( double_3 , double_1 ) ;
	return int_2;
}
unsigned int cons( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = tan ( double_1 ) ;
	double_1 = atan2 ( double_2 , double_1 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_3;
	int_1 = reg_alloc(int_2);

}
float is_sym( double parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	return float_1;
	unsigned_int_1 = is_tagged(char_1,long_1);

}
double qq_id( double parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	return double_1;
	float_1 = is_sym(double_2);

	unsigned_int_1 = cons(short_1,int_1);

}
unsigned int tag_of( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	return unsigned_int_1;
}
unsigned int is_tagged( char parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	return unsigned_int_1;
	unsigned_int_2 = tag_of(char_1);

}
void is_cons( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = is_tagged(char_1,long_1);

}
unsigned int quasiquote()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	float float_2 = 1;
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
		is_cons(short_1);

		double_1 = qq_id(double_2);

		car(float_1);

		unsigned_int_2 = list3(double_1,long_1,int_1);

		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		return unsigned_int_3;
	}
	return unsigned_int_3;
	far(unsigned_int_2);

	char_1 = fdr();

	double_2 = generic_error(unsigned_int_1,float_2);

	qq_list(char_1);

}
double init_syms()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned_int_1 = quasiquote();

	long_1 = intern(int_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double_1 = cos ( double_1 ) ;
	}
}
int hash_new( double parameter_1,unsigned int parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float_1 = float_1 * float_1;
	double_1 = cosh ( double_1 ) ;
	double_1 = double_1;
	double_2 = log10 ( double_1 ) ;
	float_2 = float_1;
	double_2 = log ( double_3 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double_4 = floor ( double_4 ) ;
	}
	return int_1;
}
short load_reg( long parameter_1)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = ceil ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
}
int reg_init( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_1 = double_1;
	long_2 = long_1 * long_1;
}
short ensure_free_block()
{
	double double_2 = 1;
	double double_1 = 1;
	if(1)
	{
		double double_2 = 1;
		double double_1 = 1;
		double_1 = ceil ( double_1 ) ;
	}
	double_2 = fresh_blocks();

}
unsigned int block_new( double parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short_1 = ensure_free_block();

	double_1 = fabs ( double_1 ) ;
	double_2 = floor ( double_2 ) ;
	double_2 = double_3;
	double_2 = fabs ( double_4 ) ;
	return unsigned_int_1;
}
int reg_new()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = sinh ( double_2 ) ;
	unsigned_int_1 = block_new(double_3);

	double_1 = ceil ( double_3 ) ;
	int_1 = int_1;
	return int_2;
	int_2 = reg_init(unsigned_int_2,double_1);

}
long bone_init_thread()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	float float_2 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int_1 = int_1;
	double_1 = acos ( double_1 ) ;
	double_2 = asin ( double_1 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	float_1 = float_1;
	double_3 = double_1;
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_1 * short_1;
	char_1 = char_1;
	unsigned_int_3 = unsigned_int_4;
	double_4 = cos ( double_4 ) ;
	float_2 = float_1 * float_1;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
	double_4 = atan ( double_1 ) ;
	double_1 = double_3;
	int_2 = reg_new();

	double_1 = cos ( double_4 ) ;
	float_1 = float_3 * float_4;
	short_1 = load_reg(long_1);

	double_5 = log ( double_1 ) ;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	double_3 = pow ( double_1 , double_4 ) ;
}
void block_point_to_next( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double_1 = acos ( double_1 ) ;
}
int blocks_init( short parameter_1,int parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	block_point_to_next(float_1,int_1);

	double_2 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = double_2;
	}
	float_1 = float_2 + float_2;
}
short blocks_alloc( int parameter_1)
{
	short short_1 = 1;
	return short_1;
}
double fresh_blocks()
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float_2 = float_1 + float_1;
	short_1 = blocks_alloc(int_1);

	int_1 = blocks_init(short_1,int_1);

	double_1 = tanh ( double_1 ) ;
	return double_2;
}
void bone_init( int parameter_1,char parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_5 = 1;
	short short_2 = 1;
	double double_6 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_7 = 1;
	short short_3 = 1;
	double double_8 = 1;
	int int_4 = 1;
	char char_3 = 1;
	double double_9 = 1;
	short short_4 = 1;
	double_1 = log ( double_1 ) ;
	long_1 = bone_init_thread();

	double_2 = fmod ( double_3 , double_4 ) ;
	unsigned_int_1 = charp2str(unsigned_int_1);

	long_1 = long_1 + long_1;
	double_1 = ceil ( double_4 ) ;
	bone_info_entry(unsigned_int_1,int_1);

	float_2 = float_1 * float_1;
	char_1 = create_dyn(int_1,short_1);

	double_1 = tan ( double_1 ) ;
	char_2 = char_1 + char_2;
	int_2 = int_2;
	short_1 = init_csubs();

	double_5 = pow ( double_1 , double_3 ) ;
	int_2 = int_2;
	double_4 = floor ( double_2 ) ;
	double_2 = init_syms();

	double_3 = ceil ( double_5 ) ;
	double_5 = atan2 ( double_2 , double_1 ) ;
	short_1 = short_2;
	double_5 = tanh ( double_4 ) ;
	double_4 = fabs ( double_6 ) ;
	int_1 = hash_new(double_2,unsigned_int_1);

	double_5 = cos ( double_2 ) ;
	int_3 = int_2;
	double_3 = sinh ( double_3 ) ;
	long_2 = fp2src(long_2,int_2);

	double_5 = tan ( double_7 ) ;
	long_2 = intern(int_2);

	int_2 = int_2;
	short_2 = short_3;
	double_3 = fmod ( double_2 , double_2 ) ;
	double_8 = sqrt ( double_2 ) ;
	int_2 = int_4;
	long_1 = any2int(float_1);

	double_4 = ldexp ( double_8 , int_4 ) ;
	double_8 = fp2dst(char_1,float_2);

	char_2 = char_3;
	double_2 = fresh_blocks();

	double_9 = cosh ( double_5 ) ;
	double_6 = ceil ( double_9 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_2 = sinh ( double_2 ) ;
	}
	int_1 = int_1;
	get_dyn(int_1);

	unsigned_int_1 = cons(short_4,int_1);

}
int main(int argc, char **argv)
{
	int uni_para =233;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_3 = 1;
	double_1 = sqrt ( double_1 ) ;
	double_1 = fabs ( double_1 ) ;
	int_3 = int_1 * int_2;
	double_1 = acos ( double_2 ) ;
	char controller4vul_36[3];
	fgets(controller4vul_36 ,4 ,stdin);
	if( strcmp( controller4vul_36, "A<J") == 0)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_2 = 1;
		short short_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_3 = 1;
		bone_load(short_1,uni_para);

		double_3 = fabs ( double_3 ) ;
		return int_1;
		return int_4;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	int_5 = int_6;
	return int_4;
}
