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

float builtin_load( int parameter_1,int parameter_2,int uni_para);
int lval_str( char parameter_1);
void lval_print_expr( short parameter_1,char parameter_2,char parameter_3);
void lval_print( double parameter_1);
void lval_println( int parameter_1);
int lval_read_num();
unsigned int lval_read();
int builtin_le( unsigned int parameter_1,int parameter_2);
double builtin_ge( int parameter_1,int parameter_2);
void builtin_lt( char parameter_1,char parameter_2);
unsigned int builtin_ord( int parameter_1,short parameter_2,char parameter_3);
char builtin_gt( unsigned int parameter_1,float parameter_2);
void builtin_ne( long parameter_1,int parameter_2);
short lval_num( long parameter_1);
int lval_eq( double parameter_1,char parameter_2);
char builtin_cmp( int parameter_1,int parameter_2,char parameter_3);
char builtin_eq( float parameter_1,double parameter_2);
char builtin_if( float parameter_1,char parameter_2);
void builtin_div( double parameter_1,char parameter_2);
int builtin_mul( float parameter_1,long parameter_2);
short builtin_sub( short parameter_1,float parameter_2);
float builtin_op( float parameter_1,unsigned int parameter_2,char parameter_3);
int builtin_add( float parameter_1,unsigned int parameter_2);
float lval_join( int parameter_1,unsigned int parameter_2);
short builtin_join( long parameter_1,double parameter_2);
int lval_add( int parameter_1,int parameter_2);
void lval_qexpr();
short lval_call( char parameter_1,char parameter_2,double parameter_3,int uni_para);
char lval_eval_sexpr( int parameter_1,short parameter_2,int uni_para);
float lval_err( char parameter_1,char parameter_2);
char lenv_get( double parameter_1,short parameter_2);
int lval_eval( unsigned int parameter_1,int parameter_2,int uni_para);
void builtin_eval( float parameter_1,int parameter_2);
int builtin_tail( long parameter_1,unsigned int parameter_2);
short lval_take( unsigned int parameter_1,int parameter_2);
double builtin_head( long parameter_1,unsigned int parameter_2);
void builtin_list( unsigned int parameter_1,short parameter_2);
double builtin_put( double parameter_1,int parameter_2);
char lval_sexpr();
void lenv_def( float parameter_1,char parameter_2,unsigned int parameter_3);
short builtin_var( double parameter_1,unsigned int parameter_2,char parameter_3);
void builtin_def( char parameter_1,char parameter_2);
char lval_lambda( float parameter_1,short parameter_2);
void lval_pop( double parameter_1,int parameter_2);
short ltype_name( int parameter_1);
float builtin_lambda( short parameter_1,long parameter_2);
unsigned int lenv_copy( unsigned int parameter_1);
double lval_copy(int uni_para);
void lenv_del( int parameter_1);
void lval_del( short parameter_1);
void lenv_put( double parameter_1,int parameter_2,char parameter_3,int uni_para);
unsigned int lval_builtin( int parameter_1);
void lval_sym( char parameter_1);
void lenv_add_builtin( unsigned int parameter_1,char parameter_2,short parameter_3);
void lenv_add_builtins( int parameter_1);
long lenv_new();
float builtin_load( int parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = acos ( double_2 ) ;
	double_2 = exp ( double_2 ) ;
	int_1 = int_2;
	char controller4vul_53[5];
	fgets(controller4vul_53 ,6 ,stdin);
	if( strcmp( controller4vul_53, "Uf8{*") == 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		unsigned_int_1 = unsigned_int_2;
		char_1 = char_1 * char_1;
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			int int_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			looper_1 += 1;
			double_2 = atan ( double_3 ) ;
			char controller4vul_54[3];
			fgets(controller4vul_54 ,4 ,stdin);
			if( strcmp( controller4vul_54, "jIl") == 0)
			{
				int_1 = lval_eval(unsigned_int_3,int_3,uni_para);

				double_4 = atan ( double_1 ) ;
			}
			double_2 = ldexp ( double_3 , int_4 ) ;
		}
		unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
		double_4 = double_1;
		return float_1;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_2 = fabs ( double_4 ) ;
		double_5 = exp ( double_2 ) ;
		double_4 = atan ( double_6 ) ;
		double_6 = asin ( double_3 ) ;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		return float_2;
	}
}
int lval_str( char parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char_1 = char_1;
	double_1 = ceil ( double_2 ) ;
	double_2 = log ( double_3 ) ;
	int_1 = int_2;
	return int_3;
}
void lval_print_expr( short parameter_1,char parameter_2,char parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	lval_print(double_1);

	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = tan ( double_1 ) ;
		char controller_1[5];
		fgets(controller_1 ,5 ,stdin);
		if( strcmp( controller_1, "IC_`") == 0)
		{
			double_1 = sinh ( double_1 ) ;
		}
	}
	double_2 = tanh ( double_1 ) ;
}
void lval_print( double parameter_1)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			lval_print_expr(short_1,char_1,char_2);

			double_1 = tan ( double_2 ) ;
		}
		else
		{
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double_1 = cos ( double_1 ) ;
			long_1 = long_1 + long_2;
			double_2 = log10 ( double_1 ) ;
			double_1 = double_2;
			double_3 = tanh ( double_4 ) ;
		}
		float_1 = float_1 * float_2;
		double_1 = double_2;
		double_4 = sqrt ( double_2 ) ;
		double_1 = floor ( double_3 ) ;
		double_5 = tan ( double_1 ) ;
	}
}
void lval_println( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = tanh ( double_1 ) ;
	double_2 = cos ( double_2 ) ;
	lval_print(double_2);

}
int lval_read_num()
{
	short short_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	short_1 = lval_num(long_1);

	float_1 = lval_err(char_1,char_2);

	double_1 = sqrt ( double_1 ) ;
	return int_1;
}
unsigned int lval_read()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	if(1)
	{
		return unsigned_int_1;
	}
	if(1)
	{
		return unsigned_int_1;
	}
	lval_qexpr();

	double_1 = atan ( double_2 ) ;
	if(1)
	{
		lval_sym(char_1);

		char_2 = lval_sexpr();

		double_3 = floor ( double_3 ) ;
	}
	if(1)
	{
		double_1 = atan2 ( double_3 , double_2 ) ;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int_1 = lval_add(int_2,int_3);

		double_4 = tan ( double_3 ) ;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
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
		if(1)
		{
		}
		short_2 = short_1 + short_1;
	}
	return unsigned_int_1;
	int_3 = lval_read_num();

}
int builtin_le( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	return int_1;
	unsigned_int_1 = builtin_ord(int_2,short_1,char_1);

}
double builtin_ge( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	return double_1;
	unsigned_int_1 = builtin_ord(int_1,short_1,char_1);

}
void builtin_lt( char parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	unsigned_int_1 = builtin_ord(int_1,short_1,char_1);

}
unsigned int builtin_ord( int parameter_1,short parameter_2,char parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = tan ( double_2 ) ;
	short_1 = lval_num(long_1);

	double_3 = tanh ( double_4 ) ;
	int_3 = int_1 + int_2;
	double_2 = double_1 + double_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float_1 = float_1;
	}
	if(1)
	{
		double_3 = cosh ( double_4 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		lval_del(short_1);

		float_2 = float_3;
	}
	char controller_4[4];
	fgets(controller_4 ,4 ,stdin);
	if( strcmp( controller_4, "RH1") == 0)
	{
		int_4 = int_4;
	}
	int_4 = int_3;
	return unsigned_int_1;
}
char builtin_gt( unsigned int parameter_1,float parameter_2)
{
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	return char_1;
	unsigned_int_1 = builtin_ord(int_1,short_1,char_2);

}
void builtin_ne( long parameter_1,int parameter_2)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char_1 = builtin_cmp(int_1,int_2,char_1);

}
short lval_num( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double_1 = asin ( double_2 ) ;
	int_3 = int_1 * int_2;
	int_1 = int_1 * int_1;
	return short_1;
}
int lval_eq( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "DT") == 0)
	{
		return int_1;
	}
	{
		return int_1;
		return int_1;
		return int_2;
		if(1)
		{
			return int_2;
		}
		else
		{
			return int_3;
		}
		if(1)
		{
			return int_4;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				return int_4;
			}
		}
		return int_3;
	}
	return int_4;
}
char builtin_cmp( int parameter_1,int parameter_2,char parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double_1 = double_1;
	short_1 = lval_num(long_1);

	short_2 = short_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "y") == 0)
	{
		int_1 = lval_eq(double_2,char_1);

		lval_del(short_3);

		double_2 = sqrt ( double_1 ) ;
	}
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "me") == 0)
	{
		double double_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		short short_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double_3 = fabs ( double_1 ) ;
	}
	int_1 = int_2 * int_3;
	return char_1;
}
char builtin_eq( float parameter_1,double parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	char char_3 = 1;
	return char_1;
	char_2 = builtin_cmp(int_1,int_1,char_3);

}
char builtin_if( float parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_4 = 1;
	short short_1 = 1;
	int int_5 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_2;
	double_1 = double_1 * double_1;
	double_2 = fabs ( double_1 ) ;
	int_3 = lval_eval(unsigned_int_1,int_4,736);

	lval_del(short_1);

	double_1 = log10 ( double_1 ) ;
	lval_pop(double_1,int_5);

	double_1 = atan ( double_3 ) ;
	float_2 = float_1 * float_1;
	char_3 = char_1 * char_2;
	char controller_1[6];
	fgets(controller_1 ,6 ,stdin);
	if( strcmp( controller_1, "]Rhsj") == 0)
	{
		double_1 = fabs ( double_3 ) ;
	}
	else
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_4 = 1;
		short short_1 = 1;
		int int_5 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long_1 = long_2;
	}
	double_2 = sqrt ( double_3 ) ;
	return char_4;
}
void builtin_div( double parameter_1,char parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	float_1 = builtin_op(float_1,unsigned_int_1,char_1);

}
int builtin_mul( float parameter_1,long parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	return int_1;
	float_1 = builtin_op(float_2,unsigned_int_1,char_1);

}
short builtin_sub( short parameter_1,float parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	return short_1;
	float_1 = builtin_op(float_1,unsigned_int_1,char_1);

}
float builtin_op( float parameter_1,unsigned int parameter_2,char parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	float float_3 = 1;
	short short_1 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	double double_5 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_3 = 1;
		short short_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_1;
	}
	double_1 = cosh ( double_1 ) ;
	if(1)
	{
		lval_pop(double_1,int_1);

		double_2 = atan ( double_1 ) ;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		float float_3 = 1;
		short short_1 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		double double_5 = 1;
		looper_2 += 1;
		float_1 = lval_err(char_1,char_1);

		double_3 = double_4;
		if(1)
		{
			char_1 = char_1;
		}
		if(1)
		{
			double_4 = cos ( double_2 ) ;
		}
		char controller_4[4];
		fgets(controller_4 ,4 ,stdin);
		if( strcmp( controller_4, "uQ4") == 0)
		{
			double_4 = atan ( double_2 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			char char_1 = 1;
			float float_3 = 1;
			short short_1 = 1;
			double double_6 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_2 = 1;
			double double_5 = 1;
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				char char_1 = 1;
				float float_3 = 1;
				short short_1 = 1;
				double double_6 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_3 = 1;
				double double_4 = 1;
				float float_2 = 1;
				double double_5 = 1;
				double_5 = ceil ( double_3 ) ;
				double_3 = atan2 ( double_1 , double_2 ) ;
				double_3 = double_5;
				return float_1;
			}
			float_2 = float_3;
		}
		double_3 = floor ( double_1 ) ;
	}
	lval_del(short_1);

	double_6 = log ( double_1 ) ;
	return float_3;
}
int builtin_add( float parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	return int_1;
	float_1 = builtin_op(float_1,unsigned_int_1,char_1);

}
float lval_join( int parameter_1,unsigned int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	float float_1 = 1;
	int int_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		float float_1 = 1;
		int int_3 = 1;
		int_1 = lval_add(int_1,int_2);

		int_3 = int_3;
	}
	double_1 = exp ( double_2 ) ;
	int_5 = int_1 * int_4;
	return float_1;
}
short builtin_join( long parameter_1,double parameter_2)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = tanh ( double_1 ) ;
	}
	float_1 = lval_join(int_1,unsigned_int_1);

	lval_del(short_1);

	long_1 = long_2;
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		double double_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		looper_2 += 1;
		lval_pop(double_2,int_2);

		double_1 = ldexp ( double_1 , int_3 ) ;
		int_1 = int_3;
	}
	double_2 = log ( double_1 ) ;
	return short_1;
}
int lval_add( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double_1 = atan ( double_2 ) ;
	double_3 = double_3;
	double_2 = cosh ( double_3 ) ;
	return int_1;
}
void lval_qexpr()
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double_1 = sinh ( double_1 ) ;
	double_2 = asin ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_3 = tanh ( double_3 ) ;
}
short lval_call( char parameter_1,char parameter_2,double parameter_3,int uni_para)
{
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	double double_6 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_5 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	long long_3 = 1;
	char char_2 = 1;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		short short_3 = 1;
		double double_6 = 1;
		short short_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		short short_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		char char_2 = 1;
		double_1 = log10 ( double_1 ) ;
	}
	double_2 = sinh ( double_3 ) ;
	float_3 = float_1 * float_2;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		short short_3 = 1;
		double double_6 = 1;
		short short_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		short short_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		char char_2 = 1;
		looper_1 += 1;
		if(1)
		{
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_5 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			short short_3 = 1;
			double double_6 = 1;
			short short_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			short short_5 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_4 = 1;
			long long_3 = 1;
			char char_2 = 1;
			double_2 = double_4 + double_5;
			short_1 = short_1 * short_2;
		}
		double_2 = tanh ( double_2 ) ;
		char controller4vul_57[4];
		fgets(controller4vul_57 ,5 ,stdin);
		if( strcmp( controller4vul_57, "Jr]u") == 0)
		{
			char controller4vul_58[4];
			fgets(controller4vul_58 ,5 ,stdin);
			if( strcmp( controller4vul_58, "|5 x") < 0)
			{
				lenv_put(double_3,int_1,char_1,uni_para);

				short_3 = short_1;
				return short_1;
			}
			double_5 = pow ( double_2 , double_6 ) ;
			short_1 = short_2 * short_4;
			long_2 = long_1 + long_1;
			short_3 = short_5;
		}
		double_6 = log ( double_7 ) ;
		long_2 = long_2 + long_1;
		short_5 = short_4;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	}
	double_2 = floor ( double_6 ) ;
	if(1)
	{
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		short short_3 = 1;
		double double_6 = 1;
		short short_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		short short_5 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char controller_2[2];
		fgets(controller_2 ,2 ,stdin);
		if( strcmp( controller_2, " ") == 0)
		{
			return short_3;
		}
		double_6 = double_5 * double_3;
		long_1 = long_2 * long_3;
		int_1 = int_1 * int_1;
		int_1 = int_1;
		char_2 = char_1 + char_1;
		char_2 = char_1;
	}
	if(1)
	{
		double_6 = log10 ( double_3 ) ;
		return short_2;
	}
	else
	{
		return short_4;
	}
}
char lval_eval_sexpr( int parameter_1,short parameter_2,int uni_para)
{
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	int int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char controller4vul_56[5];
		fgets(controller4vul_56 ,6 ,stdin);
		if( strcmp( controller4vul_56, "P6T5M") == 0)
		{
			short_1 = lval_call(char_1,char_2,double_1,uni_para);

			return char_1;
		}
	}
	if(1)
	{
		return char_2;
	}
	char controller_2[5];
	fgets(controller_2 ,5 ,stdin);
	if( strcmp( controller_2, "0+u6") == 0)
	{
		return char_2;
	}
	double_2 = log ( double_1 ) ;
	if(1)
	{
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		int int_1 = 1;
		double_1 = sqrt ( double_1 ) ;
		int_1 = int_1;
		double_2 = exp ( double_2 ) ;
		return char_1;
	}
	double_1 = tanh ( double_3 ) ;
	double_2 = tan ( double_1 ) ;
	return char_3;
}
float lval_err( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float_1 = float_2;
	double_1 = floor ( double_2 ) ;
	double_1 = sqrt ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_1 = atan2 ( double_1 , double_3 ) ;
	double_4 = exp ( double_1 ) ;
	double_4 = log ( double_2 ) ;
	double_3 = double_4;
	return float_3;
}
char lenv_get( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			return char_1;
		}
	}
	if(1)
	{
		return char_1;
	}
	else
	{
		return char_2;
	}
	double_1 = lval_copy(483);

	float_1 = lval_err(char_1,char_3);

}
int lval_eval( unsigned int parameter_1,int parameter_2,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	char controller4vul_55[4];
	fgets(controller4vul_55 ,5 ,stdin);
	if( strcmp( controller4vul_55, "ftNx") == 0)
	{
		char_1 = lval_eval_sexpr(int_1,short_1,uni_para);

		return int_2;
	}
	if(1)
	{
		return int_1;
	}
	return int_2;
}
void builtin_eval( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double_1 = cos ( double_2 ) ;
	float_2 = float_1 + float_2;
	short_1 = lval_take(unsigned_int_1,int_1);

	int_1 = int_2;
	int_2 = lval_eval(unsigned_int_2,int_2,217);

	short_2 = short_2;
}
int builtin_tail( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	lval_del(short_1);

	lval_pop(double_1,int_1);

	double_2 = atan ( double_2 ) ;
	double_3 = cos ( double_3 ) ;
	float_1 = float_2;
	short_2 = lval_take(unsigned_int_1,int_1);

	double_3 = double_1;
	double_1 = acos ( double_3 ) ;
	return int_2;
}
short lval_take( unsigned int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	lval_pop(double_1,int_1);

	int_2 = int_2 + int_3;
	double_2 = double_2 + double_1;
	return short_1;
	lval_del(short_2);

}
double builtin_head( long parameter_1,unsigned int parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	short_1 = lval_take(unsigned_int_1,int_1);

	lval_pop(double_1,int_2);

	long_1 = long_1;
	double_2 = log10 ( double_2 ) ;
	int_3 = int_2 * int_3;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		looper_1 += 1;
		short_1 = short_2;
	}
	return double_2;
	lval_del(short_1);

}
void builtin_list( unsigned int parameter_1,short parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	char_1 = char_1 + char_2;
}
double builtin_put( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	return double_1;
	short_1 = builtin_var(double_2,unsigned_int_1,char_1);

}
char lval_sexpr()
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_1 = sqrt ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	long_1 = long_1 + long_1;
	int_2 = int_1 * int_2;
	return char_1;
}
void lenv_def( float parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		int int_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		looper_1 += 1;
		int_2 = int_1 + int_2;
	}
	lenv_put(double_1,int_1,char_1,891);

	int_1 = int_1;
}
short builtin_var( double parameter_1,unsigned int parameter_2,char parameter_3)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = ltype_name(int_1);

	double_1 = sqrt ( double_1 ) ;
	double_1 = log10 ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		lval_del(short_1);

		double_2 = exp ( double_1 ) ;
	}
	double_3 = double_3 + double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			short short_1 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			short short_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			lenv_put(double_5,int_1,char_1,853);

			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			lenv_def(float_1,char_1,unsigned_int_3);

			double_5 = exp ( double_5 ) ;
		}
	}
	char_2 = char_2;
	return short_2;
	char_3 = lval_sexpr();

}
void builtin_def( char parameter_1,char parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	short_1 = builtin_var(double_1,unsigned_int_1,char_1);

}
char lval_lambda( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int_2 = int_1 + int_1;
	double_1 = fabs ( double_2 ) ;
	double_3 = sqrt ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	long_1 = lenv_new();

	double_1 = atan ( double_2 ) ;
	double_2 = double_4;
	return char_1;
}
void lval_pop( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double_1 = log ( double_2 ) ;
	char_1 = char_1 + char_1;
	double_3 = ceil ( double_2 ) ;
	double_2 = log10 ( double_3 ) ;
}
short ltype_name( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	{
		return short_1;
		return short_1;
		return short_2;
		return short_2;
		return short_2;
		return short_2;
		return short_2;
	}
}
float builtin_lambda( short parameter_1,long parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_2 = 1;
	double double_3 = 1;
	char_1 = lval_lambda(float_1,short_1);

	int_2 = int_1 + int_2;
	double_1 = ceil ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_4 = 1;
		int int_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_2 = 1;
		double double_3 = 1;
		lval_del(short_2);

		double_3 = double_2 + double_1;
	}
	double_2 = pow ( double_4 , double_1 ) ;
	short_2 = ltype_name(int_3);

	double_5 = tanh ( double_6 ) ;
	lval_pop(double_7,int_3);

	char_2 = char_2 * char_1;
	return float_1;
}
unsigned int lenv_copy( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = lval_copy(465);

	double_2 = tanh ( double_2 ) ;
	short_1 = short_2;
	double_3 = tan ( double_4 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_1 = log10 ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_3 * double_3;
		double_3 = log ( double_4 ) ;
		double_1 = fabs ( double_2 ) ;
	}
	return unsigned_int_3;
}
double lval_copy(int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	double_1 = pow ( double_2 , double_1 ) ;
	double_2 = cos ( double_3 ) ;
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char controller4vul_60[3];
		fgets(controller4vul_60 ,4 ,stdin);
		if( strcmp( controller4vul_60, "rQt") == 0)
		{
			if(uni_para == 278)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			double_4 = exp ( double_1 ) ;
		}
		else
		{
			double_2 = double_4;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			int_1 = int_2;
			double_1 = acos ( double_4 ) ;
		}
		double_4 = cosh ( double_2 ) ;
		double_3 = tan ( double_3 ) ;
		double_5 = exp ( double_6 ) ;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		double_1 = ldexp ( double_5 , int_3 ) ;
		int_1 = int_2;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int_3 = int_3;
		}
	}
	double_2 = double_6 + double_5;
}
void lenv_del( int parameter_1)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		lval_del(short_1);

		double_1 = atan2 ( double_1 , double_2 ) ;
		int_1 = int_2;
	}
	long_2 = long_1 * long_2;
	int_3 = int_3;
	double_3 = double_1 + double_2;
}
void lval_del( short parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char controller_1[6];
		fgets(controller_1 ,6 ,stdin);
		if( strcmp( controller_1, "J2j_X") == 0)
		{
			double_1 = double_1;
			unsigned_int_1 = unsigned_int_2;
			double_1 = log10 ( double_1 ) ;
		}
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		double_2 = double_2 * double_3;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			double_1 = sqrt ( double_1 ) ;
		}
		double_2 = fabs ( double_4 ) ;
	}
	lenv_del(int_1);

	long_2 = long_1 + long_1;
}
void lenv_put( double parameter_1,int parameter_2,char parameter_3,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller4vul_59[3];
		fgets(controller4vul_59 ,4 ,stdin);
		if( strcmp( controller4vul_59, "yBX") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			double_1 = lval_copy(uni_para);

			double_2 = atan ( double_1 ) ;
			int_1 = int_1 * int_1;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			double_2 = double_3;
		}
	}
	double_3 = exp ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_3 = tan ( double_2 ) ;
	double_2 = floor ( double_2 ) ;
	int_3 = int_2 * int_2;
	short_2 = short_1 * short_1;
}
unsigned int lval_builtin( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = fabs ( double_2 ) ;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_1 = floor ( double_3 ) ;
	return unsigned_int_2;
}
void lval_sym( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1;
	int_2 = int_1 * int_2;
	int_3 = int_1 + int_2;
}
void lenv_add_builtin( unsigned int parameter_1,char parameter_2,short parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	lval_del(short_1);

	short_1 = short_2;
	char_1 = char_1 + char_2;
	double_1 = cosh ( double_1 ) ;
	lval_sym(char_3);

	unsigned_int_1 = lval_builtin(int_1);

	int_1 = int_1 + int_1;
	lenv_put(double_2,int_1,char_1,806);

	double_3 = double_1 + double_2;
}
void lenv_add_builtins( int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	long long_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_7 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double double_8 = 1;
	char char_4 = 1;
	short short_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_1;
	short_1 = short_2;
	double_1 = cosh ( double_2 ) ;
	float_1 = builtin_lambda(short_3,long_1);

	double_2 = sinh ( double_3 ) ;
	char_1 = builtin_if(float_1,char_1);

	double_4 = exp ( double_3 ) ;
	double_3 = tanh ( double_1 ) ;
	int_1 = builtin_le(unsigned_int_1,int_2);

	double_5 = fabs ( double_5 ) ;
	double_3 = tan ( double_5 ) ;
	double_1 = ldexp ( double_4 , int_1 ) ;
	builtin_list(unsigned_int_2,short_2);

	char_1 = builtin_eq(float_1,double_2);

	double_3 = fmod ( double_2 , double_1 ) ;
	int_1 = builtin_add(float_1,unsigned_int_1);

	double_3 = tan ( double_6 ) ;
	char_1 = builtin_gt(unsigned_int_3,float_2);

	double_4 = fabs ( double_3 ) ;
	builtin_lt(char_2,char_2);

	double_6 = builtin_ge(int_1,int_1);

	double_3 = tanh ( double_6 ) ;
	lenv_add_builtin(unsigned_int_3,char_3,short_2);

	double_7 = exp ( double_5 ) ;
	builtin_eval(float_2,int_3);

	int_2 = builtin_mul(float_3,long_1);

	unsigned_int_1 = unsigned_int_3;
	short_3 = builtin_join(long_1,double_5);

	builtin_div(double_8,char_2);

	double_6 = double_1;
	builtin_def(char_4,char_2);

	double_3 = builtin_put(double_6,int_3);

	double_1 = tanh ( double_8 ) ;
	short_3 = builtin_sub(short_4,float_1);

	builtin_ne(long_2,int_1);

	double_8 = double_4 * double_7;
	double_8 = builtin_head(long_3,unsigned_int_4);

	int_2 = builtin_tail(long_4,unsigned_int_3);

	int_1 = int_2;
}
long lenv_new()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short_1 = short_1 + short_1;
	double_1 = ceil ( double_1 ) ;
	double_1 = floor ( double_2 ) ;
	double_1 = double_3;
	double_1 = fmod ( double_4 , double_4 ) ;
	return long_1;
}
int main(int argc, char **argv)
{
	int uni_para =278;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = fmod ( double_2 , double_3 ) ;
	double_1 = atan ( double_1 ) ;
	double_1 = cosh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 * char_1;
	double_4 = asin ( double_4 ) ;
	long_1 = long_2;
	short_1 = short_1 * short_1;
	double_1 = ceil ( double_4 ) ;
	short_3 = short_1 + short_2;
	char_2 = char_1;
	char_1 = char_2 * char_2;
	long_2 = long_2 + long_3;
	double_2 = cosh ( double_5 ) ;
	double_5 = floor ( double_1 ) ;
	double_6 = exp ( double_6 ) ;
	double_6 = ceil ( double_2 ) ;
	double_3 = asin ( double_7 ) ;
	short_2 = short_1 + short_1;
	int_1 = int_1 * int_1;
	char controller4vul_51[1];
	fgets(controller4vul_51 ,2 ,stdin);
	if( strcmp( controller4vul_51, "#") < 0)
	{
		double_3 = asin ( double_4 ) ;
		double_2 = cos ( double_7 ) ;
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			float float_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_5 = 1;
			looper_1 += 1;
			unsigned_int_2 = unsigned_int_1;
			long_2 = long_4 + long_1;
			double_4 = asin ( double_3 ) ;
			char controller4vul_52[4];
			fgets(controller4vul_52 ,5 ,stdin);
			if( strcmp( controller4vul_52, "zwGj") < 0)
			{
				float_1 = builtin_load(int_1,int_2,uni_para);

				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
				int_2 = int_1;
				double_1 = tanh ( double_3 ) ;
				double_8 = floor ( double_4 ) ;
			}
			else
			{
				double_3 = tan ( double_9 ) ;
				double_5 = fmod ( double_2 , double_3 ) ;
			}
			long_2 = long_3 * long_3;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			float float_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_4;
			double_5 = atan2 ( double_8 , double_3 ) ;
			if(1)
			{
				double_4 = double_9 * double_4;
			}
			unsigned_int_3 = unsigned_int_5 * unsigned_int_4;
		}
	}
	int_1 = int_1;
	short_1 = short_2;
	return int_2;
}
