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

float ov_imul( float parameter_1,float parameter_2,int parameter_3);
long try_constant_loop( int parameter_1,int parameter_2,int parameter_3);
long process_loop();
void outtxn( int parameter_1,int parameter_2);
long do_bytewrap();
char putlabel( char parameter_1);
unsigned int putunum( float parameter_1);
char prttok( char parameter_1,char parameter_2);
int putsnum( long parameter_1);
void debugprog( int parameter_1,short parameter_2);
int runprog_int( char parameter_1,long parameter_2);
void runprog_byte( short parameter_1,float parameter_2);
void dumpprog( int parameter_1,int parameter_2);
unsigned int GCTM();
unsigned int luaC_callGCTM();
short callallgcTM( double parameter_1);
long luaC_separateudata( double parameter_1,int parameter_2);
unsigned int lua_close( int parameter_1);
void f_call( double parameter_1);
short luaD_pcall( float parameter_1,long parameter_2,short parameter_4,int parameter_5);
char index2adr( short parameter_1,int parameter_2);
long lua_pcall( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
double lua_call( int parameter_1,int parameter_2,int parameter_3);
char lua_pushlstring( float parameter_1,unsigned int parameter_2,int parameter_3);
char lua_pushnil( char parameter_1);
unsigned int lua_pushstring( double parameter_1,short parameter_2);
long luaL_openlibs( short parameter_1);
unsigned int lua_atpanic( float parameter_1,unsigned int parameter_2);
int l_alloc(double parameter_3,int parameter_4);
int freestack( unsigned int parameter_1,short parameter_2);
char luaC_freeall( short parameter_1);
float close_state( int parameter_1);
int luaX_init( short parameter_1);
unsigned int luaT_init();
unsigned int luaG_errormsg( float parameter_1);
short luaZ_openspace( unsigned int parameter_1,long parameter_2,short parameter_3);
void luaG_concaterror( float parameter_1,char parameter_2,int parameter_3);
char luaF_findupval( double parameter_1,short parameter_2);
int luaF_newLclosure( float parameter_1,int parameter_2,int parameter_3);
char luaH_resizearray( char parameter_1,float parameter_2,int parameter_3);
char lessequal( float parameter_1,int parameter_2,long parameter_3);
unsigned int call_orderTM( double parameter_1,int parameter_2,char parameter_3,long parameter_4);
int l_strcmp( int parameter_1,short parameter_2);
int luaG_ordererror( double parameter_1,short parameter_2,unsigned int parameter_3);
short luaV_lessthan( int parameter_1,char parameter_2,unsigned int parameter_3);
unsigned int unbound_search( long parameter_1,unsigned int parameter_2);
int luaH_getn( float parameter_1);
double luaG_aritherror( double parameter_1,char parameter_2,float parameter_3);
int luaO_str2d( char parameter_1,double parameter_2);
long luaV_tonumber( float parameter_1,char parameter_2);
float Arith( float parameter_1,float parameter_2,int parameter_3,double parameter_4,float parameter_5);
void luaO_fb2int( int parameter_1);
double callTM( int parameter_1,short parameter_2,float parameter_3,long parameter_4,unsigned int parameter_5);
char luaH_setnum( char parameter_1,double parameter_2,int parameter_3);
char resize( int parameter_1,float parameter_2,int parameter_3,int parameter_4);
long computesizes( int parameter_1,int parameter_2);
int arrayindex( char parameter_1);
int countint( char parameter_1,int parameter_2);
short numusehash( short parameter_1,int parameter_2,int parameter_3);
char numusearray( float parameter_1,int parameter_2);
double rehash( long parameter_1,int parameter_2,double parameter_3);
unsigned int getfreepos( long parameter_1);
short newkey( char parameter_1,int parameter_2,int parameter_3);
void luaH_set( float parameter_1,char parameter_2,short parameter_3);
unsigned int luaV_settable( int parameter_1,long parameter_2,char parameter_3,int parameter_4);
double luaO_rawequalObj( float parameter_1,short parameter_2);
int mainposition( long parameter_1,short parameter_2);
char hashnum( long parameter_1,long parameter_2);
long luaH_getnum( double parameter_1,int parameter_2);
float luaH_get( int parameter_1,float parameter_2);
unsigned int luaV_gettable( double parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4);
int luaV_execute( double parameter_1,int parameter_2);
int luaD_poscall( double parameter_1,long parameter_2);
double adjust_varargs( long parameter_1,long parameter_2,int parameter_3);
short isinstack( long parameter_1,long parameter_2);
double luaG_typeerror( short parameter_1,unsigned int parameter_2,unsigned int parameter_3);
float tryfuncTM( double parameter_1,float parameter_2);
short luaD_precall( long parameter_1,long parameter_2,int parameter_3);
void luaD_reallocCI( unsigned int parameter_1,int parameter_2);
unsigned int restore_stack_limit( short parameter_1);
void luaD_seterrorobj( int parameter_1,int parameter_2,float parameter_3);
float luaC_linkupval( char parameter_1,int parameter_2);
float unlinkupval( char parameter_1);
unsigned int luaF_freeupval( char parameter_1,long parameter_2);
short luaF_close( short parameter_1,float parameter_2);
void resetstack( char parameter_1,int parameter_2);
long panic( double parameter_1);
unsigned int luaD_throw( int parameter_1,int parameter_2);
double luaD_call( char parameter_1,long parameter_2,int parameter_3);
char callTMres( short parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4,char parameter_5);
char luaH_getstr( int parameter_1,float parameter_2);
unsigned int luaT_gettmbyobj( long parameter_1,long parameter_2,short parameter_3);
void call_binTM( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,int parameter_5);
void luaV_concat( float parameter_1,int parameter_2,int parameter_3);
char luaS_resize( unsigned int parameter_1,int parameter_2);
double luaM_toobig( double parameter_1);
int newlstr( float parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4);
short luaS_newlstr( float parameter_1,long parameter_2,float parameter_3);
void pushstr( unsigned int parameter_1,double parameter_2);
unsigned int luaO_pushvfstring( int parameter_1,double parameter_2,long parameter_3);
short luaO_pushfstring( double parameter_1,double parameter_2,double parameter_3);
float getluaproto( short parameter_1);
float luaO_chunkid( char parameter_1,double parameter_2,long parameter_3);
char currentpc( short parameter_1,unsigned int parameter_2);
int currentline( unsigned int parameter_1,int parameter_2);
double addinfo( char parameter_1,short parameter_2);
unsigned int luaG_runerror( short parameter_1,float parameter_2,unsigned int parameter_3);
float setnodevector( float parameter_1,float parameter_2,int parameter_3);
char setarrayvector( unsigned int parameter_1,short parameter_2,int parameter_3);
float luaC_link( unsigned int parameter_1,float parameter_2,long parameter_3);
short luaH_new( short parameter_1,int parameter_2,int parameter_3);
double stack_init( long parameter_1,char parameter_2);
long f_luaopen( float parameter_1);
void luaD_rawrunprotected( char parameter_1,int parameter_2);
float preinit_state( short parameter_1,short parameter_2);
void lua_newstate( short parameter_1);
void luaL_newstate();
void reload_tempfile( int parameter_1,char parameter_2,unsigned int parameter_3);
double open_tempfile();
unsigned int arith();
float shcode();
double reformat();
float node_calloc();
unsigned int add_cstring( char parameter_1);
char ddump( int parameter_1,int parameter_2,int uni_para);
void endprog( int parameter_1);
char print_dcstring();
float dc_ltoa( long parameter_1);
double print_dstring();
double print_string();
int loaddll( int parameter_1);
float compile_and_run();
unsigned int compile_and_run_libtcc();
int open_ofd();
void qqq( int parameter_1,int parameter_2);
char bfdowhile( int parameter_1,int parameter_2);
double hanoilove( int parameter_1,int parameter_2);
long malbrain( int parameter_1,int parameter_2);
void bfugly( int parameter_1,int parameter_2);
int bfxml( int parameter_1,int parameter_2);
char bfrle( int parameter_1,int parameter_2);
float bfpackprint();
unsigned int bfreprint();
int bftranslate( int parameter_1,int parameter_2);
float headsecks( int parameter_1,int parameter_2);
float tinybf( int parameter_1,int parameter_2);
char risbf( int parameter_1,int parameter_2);
int pmc( float parameter_1);
short pc( int parameter_1);
int ps( int parameter_1);
char new_print_cstring();
short cell( int parameter_1);
float move_opt( int parameter_1,int parameter_2,int parameter_3);
float print_cstring( char parameter_1);
char loutcmd( int parameter_1,int parameter_2,unsigned int parameter_3);
float printf( float parameter_1,unsigned int parameter_2,long parameter_3);
float get_string();
void outcmd( int parameter_1,int parameter_2,int uni_para);
char outopt( int parameter_1,int parameter_2,int uni_para);
long outrun( int parameter_1,int parameter_2,int uni_para);
short check_arg( long parameter_1);
short check_argv( unsigned int parameter_1);
float ov_imul( float parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	if(1)
	{
		return float_1;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_1 = double_2;
				return float_1;
			}
		}
		else
		{
			if(1)
			{
				double_2 = log ( double_1 ) ;
				return float_1;
			}
		}
	}
	else
	{
		if(1)
		{
			if(1)
			{
				float float_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				float float_2 = 1;
				double double_3 = 1;
				double_3 = double_2 + double_1;
				return float_2;
			}
		}
		else
		{
			if(1)
			{
				float_2 = float_1;
				return float_1;
			}
		}
	}
	return float_1;
}
long try_constant_loop( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	long long_3 = 1;
	long long_5 = 1;
	long long_2 = 1;
	double double_7 = 1;
	int int_2 = 1;
	int int_4 = 1;
	double double_9 = 1;
	double double_8 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_1 = 1;
	double double_10 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_11 = 1;
	int int_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = double_1 * double_2;
	if(1)
	{
		return long_1;
	}
	if(1)
	{
		double_3 = double_3;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			float_1 = ov_imul(float_2,float_3,int_1);

			unsigned_int_3 = unsigned_int_1;
			unsigned_int_2 = unsigned_int_4;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		long long_3 = 1;
		long long_5 = 1;
		long long_2 = 1;
		double double_7 = 1;
		int int_2 = 1;
		int int_4 = 1;
		double double_9 = 1;
		double double_8 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_1 = 1;
		double double_10 = 1;
		long long_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_11 = 1;
		int int_5 = 1;
		double_4 = fabs ( double_5 ) ;
		long_2 = long_1 + long_2;
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			looper_1 += 1;
			double_5 = fmod ( double_4 , double_5 ) ;
			double_3 = cosh ( double_4 ) ;
		}
		if(1)
		{
			double_3 = floor ( double_6 ) ;
			double_1 = ldexp ( double_4 , int_1 ) ;
		}
	}
	if(1)
	{
		double_2 = ceil ( double_6 ) ;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_3 = 1;
			long long_3 = 1;
			long long_5 = 1;
			long long_2 = 1;
			double double_7 = 1;
			int int_2 = 1;
			int int_4 = 1;
			double double_9 = 1;
			double double_8 = 1;
			float float_4 = 1;
			float float_5 = 1;
			char char_1 = 1;
			double double_10 = 1;
			long long_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_11 = 1;
			int int_5 = 1;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_6 = ceil ( double_7 ) ;
				if(1)
				{
				}
				unsigned_int_3 = unsigned_int_2;
				if(1)
				{
				}
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				int int_3 = 1;
				long long_3 = 1;
				long long_5 = 1;
				long long_2 = 1;
				double double_7 = 1;
				int int_2 = 1;
				int int_4 = 1;
				double double_9 = 1;
				double double_8 = 1;
				float float_4 = 1;
				float float_5 = 1;
				char char_1 = 1;
				double double_10 = 1;
				long long_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_11 = 1;
				int int_5 = 1;
				int_2 = int_3;
				double_4 = sqrt ( double_7 ) ;
				int_3 = int_4;
				double_1 = double_6;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					unsigned int unsigned_int_1 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					int int_1 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					long long_3 = 1;
					long long_5 = 1;
					long long_2 = 1;
					double double_7 = 1;
					int int_2 = 1;
					int int_4 = 1;
					double double_9 = 1;
					double double_8 = 1;
					float float_4 = 1;
					float float_5 = 1;
					char char_1 = 1;
					double double_10 = 1;
					long long_4 = 1;
					short short_1 = 1;
					short short_2 = 1;
					double double_11 = 1;
					int int_5 = 1;
					if(1)
					{
					}
					if(1)
					{
						unsigned int unsigned_int_1 = 1;
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						long long_1 = 1;
						unsigned int unsigned_int_2 = 1;
						float float_1 = 1;
						float float_2 = 1;
						float float_3 = 1;
						int int_1 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						double double_4 = 1;
						double double_5 = 1;
						double double_6 = 1;
						int int_3 = 1;
						long long_3 = 1;
						long long_5 = 1;
						long long_2 = 1;
						double double_7 = 1;
						int int_2 = 1;
						int int_4 = 1;
						double double_9 = 1;
						double double_8 = 1;
						float float_4 = 1;
						float float_5 = 1;
						char char_1 = 1;
						double double_10 = 1;
						long long_4 = 1;
						short short_1 = 1;
						short short_2 = 1;
						double double_11 = 1;
						int int_5 = 1;
						double_3 = log ( double_8 ) ;
						outtxn(int_3,int_3);

						int_4 = int_1;
						double_8 = fabs ( double_2 ) ;
						float_4 = float_5;
					}
					if(1)
					{
						unsigned_int_2 = unsigned_int_4 * unsigned_int_4;
						double_2 = fmod ( double_8 , double_9 ) ;
						double_6 = pow ( double_7 , double_9 ) ;
						if(1)
						{
							double_8 = sqrt ( double_8 ) ;
						}
					}
					else
					{
						unsigned int unsigned_int_1 = 1;
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						long long_1 = 1;
						unsigned int unsigned_int_2 = 1;
						float float_1 = 1;
						float float_2 = 1;
						float float_3 = 1;
						int int_1 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						double double_4 = 1;
						double double_5 = 1;
						double double_6 = 1;
						int int_3 = 1;
						long long_3 = 1;
						long long_5 = 1;
						long long_2 = 1;
						double double_7 = 1;
						int int_2 = 1;
						int int_4 = 1;
						double double_9 = 1;
						double double_8 = 1;
						float float_4 = 1;
						float float_5 = 1;
						char char_1 = 1;
						double double_10 = 1;
						long long_4 = 1;
						short short_1 = 1;
						short short_2 = 1;
						double double_11 = 1;
						int int_5 = 1;
						char_1 = char_1 + char_1;
						unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
						if(1)
						{
							unsigned int unsigned_int_1 = 1;
							double double_1 = 1;
							double double_2 = 1;
							double double_3 = 1;
							long long_1 = 1;
							unsigned int unsigned_int_2 = 1;
							float float_1 = 1;
							float float_2 = 1;
							float float_3 = 1;
							int int_1 = 1;
							unsigned int unsigned_int_3 = 1;
							unsigned int unsigned_int_4 = 1;
							double double_4 = 1;
							double double_5 = 1;
							double double_6 = 1;
							int int_3 = 1;
							long long_3 = 1;
							long long_5 = 1;
							long long_2 = 1;
							double double_7 = 1;
							int int_2 = 1;
							int int_4 = 1;
							double double_9 = 1;
							double double_8 = 1;
							float float_4 = 1;
							float float_5 = 1;
							char char_1 = 1;
							double double_10 = 1;
							long long_4 = 1;
							short short_1 = 1;
							short short_2 = 1;
							double double_11 = 1;
							int int_5 = 1;
							long_4 = long_3 * long_3;
						}
						if(1)
						{
							unsigned int unsigned_int_1 = 1;
							double double_1 = 1;
							double double_2 = 1;
							double double_3 = 1;
							long long_1 = 1;
							unsigned int unsigned_int_2 = 1;
							float float_1 = 1;
							float float_2 = 1;
							float float_3 = 1;
							int int_1 = 1;
							unsigned int unsigned_int_3 = 1;
							unsigned int unsigned_int_4 = 1;
							double double_4 = 1;
							double double_5 = 1;
							double double_6 = 1;
							int int_3 = 1;
							long long_3 = 1;
							long long_5 = 1;
							long long_2 = 1;
							double double_7 = 1;
							int int_2 = 1;
							int int_4 = 1;
							double double_9 = 1;
							double double_8 = 1;
							float float_4 = 1;
							float float_5 = 1;
							char char_1 = 1;
							double double_10 = 1;
							long long_4 = 1;
							short short_1 = 1;
							short short_2 = 1;
							double double_11 = 1;
							int int_5 = 1;
							short_1 = short_2;
							double_2 = fabs ( double_4 ) ;
						}
						double_10 = sinh ( double_5 ) ;
					}
				}
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					int int_1 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					int int_3 = 1;
					long long_3 = 1;
					long long_5 = 1;
					long long_2 = 1;
					double double_7 = 1;
					int int_2 = 1;
					int int_4 = 1;
					double double_9 = 1;
					double double_8 = 1;
					float float_4 = 1;
					float float_5 = 1;
					char char_1 = 1;
					double double_10 = 1;
					long long_4 = 1;
					short short_1 = 1;
					short short_2 = 1;
					double double_11 = 1;
					int int_5 = 1;
					double_11 = asin ( double_5 ) ;
					double_7 = double_9;
					double_2 = ldexp ( double_1 , int_5 ) ;
				}
				double_2 = cos ( double_7 ) ;
				return long_5;
			}
		}
		return long_3;
	}
}
long process_loop()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	double double_8 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	char char_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_10 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_4 = 1;
	double double_11 = 1;
	double double_12 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	double double_9 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	float float_5 = 1;
	double_1 = exp ( double_2 ) ;
	double_3 = atan2 ( double_4 , double_5 ) ;
	short_1 = short_1;
	double_3 = fabs ( double_4 ) ;
	double_4 = cos ( double_3 ) ;
	double_4 = log ( double_1 ) ;
	short_1 = short_1;
	long_1 = long_1 * long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = pow ( double_3 , double_1 ) ;
		if(1)
		{
			double_2 = double_5 * double_1;
		}
		if(1)
		{
			int_1 = int_2;
		}
		if(1)
		{
			double_1 = ceil ( double_6 ) ;
		}
		if(1)
		{
			double_5 = atan ( double_7 ) ;
		}
		if(1)
		{
			unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
			double_7 = sqrt ( double_1 ) ;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			if(1)
			{
				long_1 = long_1;
				return long_2;
			}
			double_7 = cosh ( double_6 ) ;
			int_1 = int_1 * int_2;
			double_2 = sqrt ( double_3 ) ;
			double_8 = atan2 ( double_5 , double_2 ) ;
		}
		if(1)
		{
			char_1 = char_1 + char_1;
			double_3 = sqrt ( double_1 ) ;
		}
		if(1)
		{
			char_1 = char_2 * char_3;
		}
		if(1)
		{
			double_8 = cos ( double_8 ) ;
		}
		double_7 = floor ( double_8 ) ;
		return long_1;
	}
	if(1)
	{
		double_8 = fabs ( double_7 ) ;
		return long_3;
	}
	if(1)
	{
		double_2 = cos ( double_8 ) ;
		char_4 = char_3;
		int_1 = int_1;
		long_1 = long_3 * long_2;
		double_1 = pow ( double_4 , double_8 ) ;
		return long_2;
	}
	if(1)
	{
		if(1)
		{
			return long_2;
		}
	}
	if(1)
	{
		double_5 = exp ( double_1 ) ;
		return long_2;
	}
	if(1)
	{
		double_8 = cosh ( double_4 ) ;
		return long_4;
	}
	unsigned_int_1 = unsigned_int_3;
	if(1)
	{
		float_2 = float_1 * float_2;
		if(1)
		{
			float_2 = float_3;
			float_1 = float_1 * float_1;
			double_5 = sinh ( double_6 ) ;
			int_3 = int_2;
			double_3 = pow ( double_7 , double_4 ) ;
			int_1 = int_2;
			double_4 = ceil ( double_2 ) ;
			double_3 = atan ( double_2 ) ;
			char_2 = char_4;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			double double_8 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_3 = 1;
			char char_4 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_3 = 1;
			double double_10 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_4 = 1;
			double double_11 = 1;
			double double_12 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_4 = 1;
			double double_9 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_5 = 1;
			double_9 = atan2 ( double_10 , double_8 ) ;
			double_3 = fmod ( double_4 , double_8 ) ;
			double_10 = ceil ( double_9 ) ;
			double_3 = tan ( double_6 ) ;
			short_1 = short_2 * short_3;
			short_3 = short_3;
			double_6 = double_9 * double_1;
			double_7 = pow ( double_9 , double_4 ) ;
		}
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		double double_8 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_3 = 1;
		char char_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		double double_10 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_4 = 1;
		double double_11 = 1;
		double double_12 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_4 = 1;
		double double_9 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_5 = 1;
		long_2 = long_1;
		unsigned_int_1 = unsigned_int_1;
		char_1 = char_5;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			short short_1 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			double double_8 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_3 = 1;
			char char_4 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_3 = 1;
			double double_10 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_4 = 1;
			double double_11 = 1;
			double double_12 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_4 = 1;
			double double_9 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			float float_5 = 1;
			if(1)
			{
			}
			if(1)
			{
				char controller_22[6];
				fgets(controller_22 ,6 ,stdin);
				if( strcmp( controller_22, "6|a*T") < 0)
				{
				}
				if(1)
				{
				}
			}
			if(1)
			{
				if(1)
				{
					double_7 = tanh ( double_4 ) ;
					float_4 = float_2;
					unsigned_int_1 = unsigned_int_4 + unsigned_int_4;
					double_5 = sinh ( double_8 ) ;
				}
				if(1)
				{
					double_2 = atan2 ( double_2 , double_3 ) ;
					double_6 = sinh ( double_8 ) ;
					char_1 = char_4 * char_3;
					double_7 = exp ( double_6 ) ;
				}
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_3;
				long_4 = long_4 * long_1;
				double_10 = cos ( double_10 ) ;
				double_8 = double_11;
			}
			if(1)
			{
				if(1)
				{
					double_12 = atan2 ( double_2 , double_7 ) ;
					double_2 = tan ( double_8 ) ;
					short_1 = short_2 * short_3;
				}
				else
				{
					double_5 = ceil ( double_1 ) ;
					double_5 = acos ( double_7 ) ;
					double_5 = ldexp ( double_4 , int_2 ) ;
				}
			}
			if(1)
			{
				double_3 = double_5 + double_3;
				double_10 = asin ( double_4 ) ;
				int_2 = int_4;
			}
			else
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				short short_1 = 1;
				long long_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				long long_2 = 1;
				double double_8 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				long long_3 = 1;
				char char_4 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_3 = 1;
				double double_10 = 1;
				short short_2 = 1;
				short short_3 = 1;
				float float_4 = 1;
				double double_11 = 1;
				double double_12 = 1;
				int int_4 = 1;
				int int_5 = 1;
				short short_4 = 1;
				double double_9 = 1;
				char char_5 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_5 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				float float_5 = 1;
				unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
				int_2 = int_4 * int_3;
				if(1)
				{
					long_4 = long_4;
				}
				if(1)
				{
					double_1 = pow ( double_5 , double_7 ) ;
					double_4 = acos ( double_1 ) ;
				}
				if(1)
				{
					int_3 = int_3 * int_4;
				}
				long_5 = long_1;
			}
			double_8 = ldexp ( double_7 , int_2 ) ;
		}
	}
	if(1)
	{
		double_11 = log10 ( double_7 ) ;
		float_3 = float_3 * float_1;
		short_3 = short_3 * short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		double double_8 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_3 = 1;
		char char_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		double double_10 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_4 = 1;
		double double_11 = 1;
		double double_12 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_4 = 1;
		double double_9 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_5 = 1;
		int_3 = int_4;
		int_1 = int_2 * int_1;
		outtxn(int_2,int_2);

		unsigned_int_6 = unsigned_int_3 + unsigned_int_5;
		long_3 = try_constant_loop(int_5,int_4,int_5);

		double_2 = double_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		short short_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		double double_8 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_3 = 1;
		char char_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		double double_10 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_4 = 1;
		double double_11 = 1;
		double double_12 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_4 = 1;
		double double_9 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		float float_5 = 1;
		double_1 = cos ( double_3 ) ;
		float_5 = float_4 + float_5;
		double_12 = cos ( double_10 ) ;
		double_8 = exp ( double_5 ) ;
	}
	short_4 = short_2;
}
void outtxn( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_9 = 1;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		double double_9 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			char char_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_4 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_3 = 1;
			double double_9 = 1;
			double_1 = fabs ( double_2 ) ;
			double_1 = acos ( double_3 ) ;
			char_1 = outopt(int_1,int_1,151);

			outtxn(int_2,int_1);

			long_1 = long_2;
			double_3 = double_4;
		}
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				char char_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_4 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_7 = 1;
				double double_8 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_3 = 1;
				double double_9 = 1;
				long_3 = process_loop();

				unsigned_int_1 = unsigned_int_2;
				double_2 = pow ( double_5 , double_4 ) ;
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					char char_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_4 = 1;
					long long_3 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_7 = 1;
					double double_8 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_4 = 1;
					long long_2 = 1;
					double double_5 = 1;
					double double_6 = 1;
					char char_2 = 1;
					unsigned int unsigned_int_3 = 1;
					short short_1 = 1;
					short short_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					int int_3 = 1;
					double double_9 = 1;
					{
						unsigned int unsigned_int_1 = 1;
						double double_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						char char_1 = 1;
						int int_1 = 1;
						int int_2 = 1;
						double double_4 = 1;
						long long_3 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_7 = 1;
						double double_8 = 1;
						long long_1 = 1;
						unsigned int unsigned_int_4 = 1;
						long long_2 = 1;
						double double_5 = 1;
						double double_6 = 1;
						char char_2 = 1;
						unsigned int unsigned_int_3 = 1;
						short short_1 = 1;
						short short_2 = 1;
						float float_1 = 1;
						float float_2 = 1;
						float float_3 = 1;
						int int_3 = 1;
						double double_9 = 1;
						char_2 = char_2 + char_1;
						unsigned_int_3 = unsigned_int_2;
						short_1 = short_1 * short_2;
						double_6 = pow ( double_5 , double_2 ) ;
						int_2 = int_2;
						float_3 = float_1 + float_2;
						short_2 = short_2 * short_2;
						long_1 = long_1;
					}
					double_6 = atan ( double_6 ) ;
				}
			}
		}
		unsigned_int_4 = unsigned_int_2;
		if(1)
		{
		}
	}
	if(1)
	{
		double_7 = atan2 ( double_2 , double_1 ) ;
	}
	double_4 = exp ( double_4 ) ;
	double_2 = exp ( double_8 ) ;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					char char_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_4 = 1;
					long long_3 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_7 = 1;
					double double_8 = 1;
					long long_1 = 1;
					unsigned int unsigned_int_4 = 1;
					long long_2 = 1;
					double double_5 = 1;
					double double_6 = 1;
					char char_2 = 1;
					unsigned int unsigned_int_3 = 1;
					short short_1 = 1;
					short short_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					int int_3 = 1;
					double double_9 = 1;
					int_3 = int_3;
				}
				if(1)
				{
				}
			}
			double_2 = floor ( double_3 ) ;
		}
		if(1)
		{
			double_7 = fmod ( double_2 , double_4 ) ;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_4 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		double double_9 = 1;
		double_1 = log ( double_9 ) ;
	}
}
long do_bytewrap()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		return long_1;
	}
	double_1 = tanh ( double_2 ) ;
	else
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 + int_1;
	}
	char_1 = putlabel(char_2);

	double_1 = tan ( double_3 ) ;
}
char putlabel( char parameter_1)
{
	int int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	if(1)
	{
		int int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double_1 = ceil ( double_2 ) ;
	}
	else
	{
		int int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short_1 = short_1 + short_1;
	}
	int_1 = putsnum(long_1);

	unsigned_int_1 = putunum(float_1);

}
unsigned int putunum( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_5 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		double_1 = log10 ( double_2 ) ;
	}
	float_1 = printf(float_1,unsigned_int_2,long_1);

	double_3 = cosh ( double_1 ) ;
	long_2 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		int int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		int_1 = int_1;
		if(1)
		{
		}
		double_3 = tanh ( double_3 ) ;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		int int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		double_2 = log ( double_1 ) ;
		double_4 = exp ( double_1 ) ;
		if(1)
		{
			double_2 = double_2;
		}
		else
		{
			long_3 = long_1;
		}
		if(1)
		{
		}
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_5 = 1;
		int int_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_4 = 1;
		long_4 = long_3;
	}
	double_1 = pow ( double_5 , double_3 ) ;
}
char prttok( char parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_1 = printf(float_2,unsigned_int_1,long_1);

		int_1 = int_2;
	}
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
}
int putsnum( long parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_1 = prttok(char_1,char_2);

		unsigned_int_1 = putunum(float_1);

		double_3 = double_1 * double_2;
		double_4 = atan ( double_1 ) ;
	}
	else
	{
		double_4 = log ( double_3 ) ;
		double_3 = log10 ( double_3 ) ;
	}
}
void debugprog( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double_1 = cos ( double_1 ) ;
}
int runprog_int( char parameter_1,long parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void runprog_byte( short parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = floor ( double_2 ) ;
}
void dumpprog( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double_1 = atan2 ( double_2 , double_2 ) ;
		if(1)
		{
			double_2 = ceil ( double_2 ) ;
		}
		int_1 = int_2;
		double_2 = log ( double_1 ) ;
		{
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			float_1 = printf(float_2,unsigned_int_1,long_1);

			float_2 = float_3;
			unsigned_int_2 = unsigned_int_2;
			double_1 = floor ( double_2 ) ;
			double_3 = pow ( double_2 , double_2 ) ;
		}
		long_1 = long_1 * long_1;
	}
}
unsigned int GCTM()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	double double_6 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_7 = 1;
	char char_1 = 1;
	double_1 = sinh ( double_2 ) ;
	double_3 = double_4;
	double_4 = sqrt ( double_2 ) ;
	double_1 = double_5;
	double_2 = double_3;
	int_1 = int_1;
	double_6 = fabs ( double_3 ) ;
	short_1 = short_1 + short_1;
	double_1 = log ( double_5 ) ;
	double_3 = atan ( double_4 ) ;
	double_6 = log ( double_3 ) ;
	double_1 = log10 ( double_3 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_5 = atan ( double_1 ) ;
	long_1 = long_1 + long_1;
	float_1 = float_1 + float_2;
	float_1 = float_1;
	double_6 = ldexp ( double_2 , int_2 ) ;
	double_7 = luaD_call(char_1,long_1,int_2);

	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	double_4 = sqrt ( double_3 ) ;
}
unsigned int luaC_callGCTM()
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	unsigned_int_1 = GCTM();

	double_1 = exp ( double_1 ) ;
}
short callallgcTM( double parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = luaC_callGCTM();

}
long luaC_separateudata( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	char char_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = tan ( double_1 ) ;
	long_1 = long_1;
	double_2 = atan2 ( double_1 , double_1 ) ;
	double_3 = ceil ( double_3 ) ;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "b(") < 0)
	{
		double double_1 = 1;
		long long_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		char char_1 = 1;
		int int_2 = 1;
		double double_6 = 1;
		unsigned int unsigned_int_2 = 1;
		double_3 = cos ( double_1 ) ;
		unsigned_int_2 = unsigned_int_1;
	}
	double_4 = ldexp ( double_2 , int_1 ) ;
	double_3 = log10 ( double_5 ) ;
	long_1 = long_1 + long_1;
	char_1 = char_1;
	double_4 = acos ( double_1 ) ;
	double_3 = cos ( double_3 ) ;
	int_2 = int_1;
	double_4 = double_3 * double_6;
}
unsigned int lua_close( int parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	float float_2 = 1;
	short_1 = luaF_close(short_2,float_1);

	double_1 = tan ( double_1 ) ;
	double_1 = double_1;
	double_2 = ceil ( double_3 ) ;
	short_3 = callallgcTM(double_4);

	int_3 = int_1 + int_2;
	double_3 = ceil ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = fabs ( double_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		long_1 = luaC_separateudata(double_1,int_3);

		float_1 = close_state(int_3);

		double_4 = ldexp ( double_1 , int_2 ) ;
	}
	luaD_rawrunprotected(char_1,int_2);

	float_1 = float_2 * float_2;
}
void f_call( double parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = pow ( double_2 , double_3 ) ;
	double_1 = luaD_call(char_1,long_1,int_1);

	unsigned_int_1 = unsigned_int_1;
}
short luaD_pcall( float parameter_1,long parameter_2,short parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	char char_2 = 1;
	float float_3 = 1;
	char char_3 = 1;
	unsigned_int_1 = restore_stack_limit(short_1);

	unsigned_int_1 = unsigned_int_1;
	double_1 = log10 ( double_2 ) ;
	double_1 = floor ( double_2 ) ;
	double_1 = ldexp ( double_3 , int_1 ) ;
	short_1 = luaF_close(short_1,float_1);

	float_2 = float_1;
	double_2 = double_3;
	double_4 = atan ( double_2 ) ;
	int_2 = int_3;
	float_2 = float_2;
	double_4 = asin ( double_1 ) ;
	double_2 = cos ( double_3 ) ;
	double_1 = fabs ( double_3 ) ;
	luaD_rawrunprotected(char_1,int_4);

	int_5 = int_6;
	char_1 = char_2 * char_2;
	int_4 = int_6;
	double_4 = double_4;
	luaD_seterrorobj(int_6,int_6,float_3);

	char_2 = char_3;
	double_1 = floor ( double_1 ) ;
}
char index2adr( short parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double_1 = sinh ( double_1 ) ;
	double_1 = fabs ( double_2 ) ;
	return char_1;
	return char_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		int_1 = int_1;
	}
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_4 = 1;
		return char_1;
		unsigned_int_2 = unsigned_int_3;
		double_3 = double_2;
		return char_3;
		long_2 = long_1 + long_1;
		double_4 = exp ( double_4 ) ;
	}
}
long lua_pcall( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double_1 = ceil ( double_1 ) ;
	double_2 = cos ( double_1 ) ;
	double_1 = fmod ( double_2 , double_1 ) ;
	double_1 = ldexp ( double_2 , int_1 ) ;
	float_1 = float_1;
	f_call(double_3);

	double_4 = fabs ( double_5 ) ;
	double_5 = atan ( double_5 ) ;
	double_3 = asin ( double_3 ) ;
	char_1 = index2adr(short_1,int_1);

	double_1 = log ( double_2 ) ;
	double_3 = exp ( double_1 ) ;
	short_1 = luaD_pcall(float_1,long_1,short_1,int_2);

	double_6 = tan ( double_4 ) ;
	short_3 = short_2 + short_2;
	short_2 = short_2;
	int_3 = int_2;
}
double lua_call( int parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int_1 = int_1;
	double_1 = luaD_call(char_1,long_1,int_2);

	double_1 = ldexp ( double_2 , int_3 ) ;
	double_2 = asin ( double_2 ) ;
	double_1 = tan ( double_2 ) ;
	int_2 = int_3 * int_1;
	int_2 = int_1 * int_2;
}
char lua_pushlstring( float parameter_1,unsigned int parameter_2,int parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1 * int_1;
	double_1 = asin ( double_2 ) ;
	short_1 = luaS_newlstr(float_1,long_1,float_2);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
}
char lua_pushnil( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = acos ( double_2 ) ;
}
unsigned int lua_pushstring( double parameter_1,short parameter_2)
{
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	char_1 = lua_pushlstring(float_1,unsigned_int_1,int_1);

	double_1 = fmod ( double_2 , double_1 ) ;
	char_2 = lua_pushnil(char_3);

	double_1 = asin ( double_3 ) ;
}
long luaL_openlibs( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	unsigned_int_1 = lua_pushstring(double_1,short_1);

	double_1 = lua_call(int_1,int_1,int_1);

	double_2 = double_3;
	double_2 = double_2 + double_1;
	int_2 = int_2;
	double_3 = cos ( double_1 ) ;
	int_3 = int_3 * int_2;
	double_4 = cos ( double_4 ) ;
}
unsigned int lua_atpanic( float parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	double_1 = cos ( double_1 ) ;
	long_1 = long_1;
	double_2 = cosh ( double_1 ) ;
	long_1 = long_1 + long_2;
}
int l_alloc(double parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = ldexp ( double_2 , int_1 ) ;
	double_1 = fmod ( double_3 , double_1 ) ;
	double_1 = sinh ( double_1 ) ;
	double_3 = ceil ( double_3 ) ;
	short_1 = short_2;
}
int freestack( unsigned int parameter_1,short parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int_1 = int_2;
	double_1 = exp ( double_1 ) ;
}
char luaC_freeall( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = tanh ( double_1 ) ;
	double_1 = asin ( double_1 ) ;
	double_1 = double_1;
	double_2 = tan ( double_2 ) ;
	double_1 = fabs ( double_1 ) ;
	double_2 = ceil ( double_3 ) ;
}
float close_state( int parameter_1)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	int_1 = freestack(unsigned_int_1,short_1);

	double_1 = ceil ( double_1 ) ;
	double_1 = exp ( double_1 ) ;
	short_2 = luaF_close(short_3,float_1);

	double_2 = asin ( double_3 ) ;
	char_1 = luaC_freeall(short_2);

	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	double_1 = log ( double_4 ) ;
}
int luaX_init( short parameter_1)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int_1 = int_1;
	double_1 = acos ( double_1 ) ;
	double_2 = fmod ( double_3 , double_1 ) ;
	double_3 = fmod ( double_1 , double_1 ) ;
	int_2 = int_2 + int_2;
	double_2 = sinh ( double_3 ) ;
}
unsigned int luaT_init()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_1 = int_2;
	double_1 = cosh ( double_1 ) ;
	double_2 = atan2 ( double_2 , double_2 ) ;
	long_2 = long_1 * long_1;
	int_1 = int_3;
	float_1 = float_1 + float_1;
}
unsigned int luaG_errormsg( float parameter_1)
{
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	char char_2 = 1;
	double double_3 = 1;
	long long_2 = 1;
	double_1 = luaD_call(char_1,long_1,int_1);

	double_2 = sqrt ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = luaD_throw(int_2,int_2);

	char_2 = char_1 + char_1;
	double_3 = fabs ( double_2 ) ;
	long_1 = long_2;
	double_2 = sinh ( double_2 ) ;
	double_2 = ldexp ( double_2 , int_1 ) ;
}
short luaZ_openspace( unsigned int parameter_1,long parameter_2,short parameter_3)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	long_1 = long_1 + long_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = log10 ( double_1 ) ;
}
void luaG_concaterror( float parameter_1,char parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double_1 = asin ( double_2 ) ;
	double_2 = luaG_typeerror(short_1,unsigned_int_1,unsigned_int_2);

	double_3 = log10 ( double_1 ) ;
}
char luaF_findupval( double parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_6 = 1;
	short short_3 = 1;
	double_1 = fabs ( double_2 ) ;
	double_1 = cosh ( double_2 ) ;
	double_1 = tan ( double_1 ) ;
	int_1 = int_1;
	char_3 = char_1 * char_2;
	double_1 = pow ( double_2 , double_3 ) ;
	double_1 = fabs ( double_3 ) ;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = sinh ( double_4 ) ;
	double_4 = exp ( double_3 ) ;
	double_1 = acos ( double_2 ) ;
	float_3 = float_1 + float_2;
	double_2 = tanh ( double_5 ) ;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_1;
	short_1 = short_2;
	double_5 = log10 ( double_5 ) ;
	double_5 = double_1 + double_6;
	short_2 = short_3;
}
int luaF_newLclosure( float parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long_1 = long_1 * long_2;
	long_1 = long_2 + long_2;
	float_1 = luaC_link(unsigned_int_1,float_1,long_3);

	short_1 = short_2;
	double_1 = cosh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_2 = pow ( double_3 , double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
}
char luaH_resizearray( char parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double_1 = sqrt ( double_1 ) ;
	char_1 = resize(int_1,float_1,int_2,int_1);

	int_3 = int_3 * int_3;
}
char lessequal( float parameter_1,int parameter_2,long parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double_1 = log ( double_1 ) ;
	double_1 = pow ( double_1 , double_1 ) ;
	if(1)
	{
		int_1 = luaG_ordererror(double_1,short_1,unsigned_int_1);

		double_1 = fabs ( double_1 ) ;
	}
	if(1)
	{
		int_2 = l_strcmp(int_2,short_2);

		double_1 = double_1 * double_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		unsigned_int_2 = call_orderTM(double_1,int_1,char_1,long_1);

		long_2 = long_3;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		double_2 = tan ( double_3 ) ;
	}
	double_2 = atan ( double_1 ) ;
}
unsigned int call_orderTM( double parameter_1,int parameter_2,char parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	unsigned_int_1 = luaT_gettmbyobj(long_1,long_1,short_1);

	char_1 = char_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return unsigned_int_2;
	unsigned_int_3 = unsigned_int_3;
	double_1 = fmod ( double_1 , double_2 ) ;
	long_1 = long_1;
	double_3 = luaO_rawequalObj(float_1,short_2);

	char_1 = callTMres(short_1,unsigned_int_1,char_3,long_1,char_1);

}
int l_strcmp( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = double_1;
	double_2 = fmod ( double_3 , double_2 ) ;
	double_3 = cosh ( double_2 ) ;
	double_1 = atan ( double_2 ) ;
	char_1 = char_1;
	double_3 = tan ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	return int_1;
	double_4 = atan2 ( double_3 , double_1 ) ;
	if(1)
	{
		double_3 = asin ( double_3 ) ;
	}
	double_4 = log ( double_2 ) ;
	double_2 = sqrt ( double_4 ) ;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	double_1 = double_4 + double_2;
	double_2 = double_3 + double_3;
}
int luaG_ordererror( double parameter_1,short parameter_2,unsigned int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	double double_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_1 = luaG_runerror(short_1,float_1,unsigned_int_2);

	double_1 = tanh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
	char_1 = char_1;
	double_3 = tanh ( double_3 ) ;
	float_3 = float_2 * float_2;
}
short luaV_lessthan( int parameter_1,char parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int_1 = int_1;
	long_1 = long_1 + long_2;
	if(1)
	{
		double_1 = tanh ( double_1 ) ;
	}
	if(1)
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		int int_3 = 1;
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int_2 = l_strcmp(int_1,short_1);

		double_1 = double_2;
	}
	if(1)
	{
		int int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		int int_3 = 1;
		char char_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned_int_1 = call_orderTM(double_3,int_3,char_1,long_1);

		int_1 = int_4 * int_2;
	}
	double_4 = log ( double_5 ) ;
	int_3 = luaG_ordererror(double_6,short_1,unsigned_int_1);

}
unsigned int unbound_search( long parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_2 = 1;
	double_1 = sinh ( double_2 ) ;
	double_3 = exp ( double_3 ) ;
	char_3 = char_1 + char_2;
	long_1 = luaH_getnum(double_3,int_1);

	double_2 = cos ( double_4 ) ;
	double_3 = double_2 + double_5;
	double_3 = double_1 * double_3;
	double_6 = cos ( double_6 ) ;
	float_3 = float_1 * float_2;
	double_7 = atan2 ( double_3 , double_1 ) ;
	double_8 = ldexp ( double_7 , int_2 ) ;
	float_2 = float_1 + float_1;
}
int luaH_getn( float parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double_2 = double_1 + double_2;
	short_2 = short_1 * short_1;
	unsigned_int_1 = unbound_search(long_1,unsigned_int_2);

	long_3 = long_2 * long_3;
	double_1 = tanh ( double_3 ) ;
	double_1 = pow ( double_3 , double_2 ) ;
	double_4 = pow ( double_1 , double_3 ) ;
	if(1)
	{
		long_3 = long_1;
	}
	return int_1;
}
double luaG_aritherror( double parameter_1,char parameter_2,float parameter_3)
{
	long long_1 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	long_1 = luaV_tonumber(float_1,char_1);

	double_1 = tanh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = luaG_typeerror(short_1,unsigned_int_2,unsigned_int_3);

	double_2 = pow ( double_3 , double_2 ) ;
}
int luaO_str2d( char parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = ceil ( double_1 ) ;
	double_2 = acos ( double_2 ) ;
	return int_1;
	return int_2;
	return int_1;
}
long luaV_tonumber( float parameter_1,char parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_1 = exp ( double_2 ) ;
	return long_1;
	short_2 = short_1 * short_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = luaO_str2d(char_1,double_1);

}
float Arith( float parameter_1,float parameter_2,int parameter_3,double parameter_4,float parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	double double_6 = 1;
	double_1 = luaG_aritherror(double_2,char_1,float_1);

	int_1 = int_2;
	double_2 = log10 ( double_1 ) ;
	double_2 = double_2 * double_2;
	long_1 = luaV_tonumber(float_2,char_1);

	short_1 = short_1 + short_2;
	double_3 = cosh ( double_3 ) ;
	double_3 = double_3;
	double_3 = atan ( double_4 ) ;
	double_1 = ldexp ( double_5 , int_2 ) ;
	double_3 = fabs ( double_1 ) ;
	unsigned_int_1 = unsigned_int_1;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "AT8") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		double double_6 = 1;
		double_4 = ldexp ( double_6 , int_2 ) ;
	}
	call_binTM(unsigned_int_1,double_1,unsigned_int_2,short_3,int_3);

}
void luaO_fb2int( int parameter_1)
{
	int int_1 = 1;
	int_1 = int_1 * int_1;
}
double callTM( int parameter_1,short parameter_2,float parameter_3,long parameter_4,unsigned int parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	short_2 = short_1 * short_2;
	double_1 = luaD_call(char_1,long_1,int_1);

	char_1 = char_1 * char_1;
	int_3 = int_1 + int_2;
	long_2 = long_2;
	double_1 = acos ( double_2 ) ;
	double_2 = double_3;
	float_1 = float_1;
}
char luaH_setnum( char parameter_1,double parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = exp ( double_1 ) ;
	double_2 = acos ( double_2 ) ;
	double_2 = sqrt ( double_3 ) ;
	long_1 = luaH_getnum(double_3,int_1);

	short_1 = newkey(char_1,int_1,int_1);

	char_2 = char_1 * char_2;
	char_1 = char_1;
}
char resize( int parameter_1,float parameter_2,int parameter_3,int parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = tan ( double_1 ) ;
	int_1 = int_1;
	double_2 = tan ( double_3 ) ;
	char_1 = setarrayvector(unsigned_int_1,short_1,int_1);

	double_3 = cos ( double_1 ) ;
	int_2 = int_3;
	int_2 = int_1 * int_2;
	double_2 = tanh ( double_1 ) ;
	long_1 = long_1;
	double_3 = double_3;
	char_2 = char_3;
	char_4 = char_2 + char_2;
	int_3 = int_2;
	int_3 = int_3 * int_3;
	float_1 = float_2;
	char_3 = luaH_setnum(char_3,double_3,int_3);

	char_4 = char_4;
	float_3 = setnodevector(float_2,float_4,int_1);

	luaH_set(float_3,char_2,short_2);

}
long computesizes( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_1 = float_1 * float_2;
	short_1 = short_1 * short_1;
	int_1 = int_1 + int_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_1 = log ( double_1 ) ;
	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	double_1 = log ( double_1 ) ;
	double_1 = pow ( double_2 , double_2 ) ;
	double_3 = tanh ( double_3 ) ;
	double_4 = pow ( double_2 , double_2 ) ;
}
int arrayindex( char parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	float_1 = float_2;
	double_1 = double_1;
	double_1 = atan ( double_1 ) ;
	double_1 = ceil ( double_1 ) ;
	int_1 = int_1 + int_1;
}
int countint( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	double_1 = double_1 + double_1;
	double_1 = pow ( double_2 , double_1 ) ;
	double_2 = tanh ( double_1 ) ;
	double_1 = fabs ( double_3 ) ;
	int_1 = arrayindex(char_1);

}
short numusehash( short parameter_1,int parameter_2,int parameter_3)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char_1 = char_1;
	double_1 = floor ( double_1 ) ;
	double_1 = tanh ( double_2 ) ;
	unsigned_int_1 = unsigned_int_2;
	int_1 = countint(char_2,int_1);

	char_1 = char_1;
	short_1 = short_1;
	double_1 = fabs ( double_2 ) ;
	long_1 = long_1 + long_2;
}
char numusearray( float parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_4 = 1;
	double_1 = sinh ( double_1 ) ;
	double_1 = atan2 ( double_2 , double_1 ) ;
	double_2 = asin ( double_3 ) ;
	long_1 = long_1 * long_2;
	int_1 = int_1;
	float_3 = float_1 + float_2;
	double_3 = double_3 * double_4;
	double_3 = double_1;
	double_5 = log10 ( double_5 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_6 = double_7;
	double_7 = double_8 + double_1;
	double_2 = pow ( double_1 , double_3 ) ;
	long_2 = long_2;
	short_1 = short_2;
	float_2 = float_4;
}
double rehash( long parameter_1,int parameter_2,double parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_2 = 1;
	int int_5 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_6 = 1;
	char char_3 = 1;
	double double_7 = 1;
	double_1 = fmod ( double_1 , double_2 ) ;
	float_2 = float_1 * float_2;
	double_3 = sinh ( double_3 ) ;
	long_1 = computesizes(int_1,int_2);

	double_2 = log ( double_2 ) ;
	int_2 = int_2;
	double_2 = sinh ( double_4 ) ;
	double_1 = tanh ( double_1 ) ;
	char_1 = resize(int_3,float_1,int_4,int_1);

	double_2 = fmod ( double_5 , double_6 ) ;
	float_4 = float_2 + float_3;
	char_2 = numusearray(float_3,int_5);

	double_1 = cosh ( double_6 ) ;
	double_2 = sinh ( double_2 ) ;
	short_1 = numusehash(short_1,int_5,int_4);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_4 = int_6 + int_4;
	int_1 = countint(char_3,int_6);

	double_7 = ceil ( double_6 ) ;
}
unsigned int getfreepos( long parameter_1)
{
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short_1 = short_1;
	long_1 = long_2;
}
short newkey( char parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	char char_2 = 1;
	unsigned_int_1 = getfreepos(long_1);

	double_1 = asin ( double_1 ) ;
	double_1 = floor ( double_2 ) ;
	double_1 = sqrt ( double_3 ) ;
	double_3 = log ( double_3 ) ;
	char_1 = char_1;
	double_1 = atan ( double_2 ) ;
	long_3 = long_2 * long_2;
	double_4 = acos ( double_4 ) ;
	double_5 = log10 ( double_5 ) ;
	double_3 = double_6;
	int_2 = int_1 * int_2;
	short_2 = short_1 * short_1;
	double_3 = ceil ( double_6 ) ;
	luaH_set(float_1,char_1,short_2);

	double_1 = cosh ( double_5 ) ;
	unsigned_int_1 = unsigned_int_2;
	int_1 = mainposition(long_3,short_3);

	double_3 = acos ( double_2 ) ;
	double_4 = atan ( double_5 ) ;
	double_2 = rehash(long_1,int_3,double_3);

	char_1 = char_2 + char_1;
}
void luaH_set( float parameter_1,char parameter_2,short parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	double double_5 = 1;
	double_1 = log ( double_1 ) ;
	float_1 = luaH_get(int_1,float_2);

	double_2 = atan2 ( double_3 , double_3 ) ;
	double_4 = cos ( double_4 ) ;
	int_2 = int_3;
	if(1)
	{
		unsigned_int_1 = luaG_runerror(short_1,float_3,unsigned_int_2);

		double_4 = double_3;
	}
	short_1 = newkey(char_1,int_1,int_3);

	double_5 = double_4;
}
unsigned int luaV_settable( int parameter_1,long parameter_2,char parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	short short_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = asin ( double_2 ) ;
	double_2 = ldexp ( double_1 , int_1 ) ;
	double_3 = double_3;
	int_1 = int_1 + int_1;
	unsigned_int_1 = luaT_gettmbyobj(long_1,long_1,short_1);

	short_2 = short_2;
	double_1 = double_2 * double_1;
	luaH_set(float_1,char_1,short_3);

	double_3 = tanh ( double_3 ) ;
	float_1 = float_2;
	unsigned_int_2 = luaG_runerror(short_2,float_2,unsigned_int_2);

	double_4 = fabs ( double_1 ) ;
	double_2 = double_3 * double_5;
	double_6 = double_6 + double_1;
	if(1)
	{
		double_6 = pow ( double_1 , double_3 ) ;
	}
	double_7 = cosh ( double_5 ) ;
	double_6 = luaG_typeerror(short_4,unsigned_int_1,unsigned_int_3);

	int_1 = int_1;
	double_8 = pow ( double_5 , double_6 ) ;
	float_2 = float_2;
	unsigned_int_1 = unsigned_int_4;
	double_1 = callTM(int_1,short_2,float_1,long_2,unsigned_int_5);

}
double luaO_rawequalObj( float parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	return double_1;
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int_2 = int_1 * int_2;
		double_1 = pow ( double_1 , double_1 ) ;
		double_1 = double_1;
		unsigned_int_1 = unsigned_int_2;
		unsigned_int_1 = unsigned_int_1;
	}
}
int mainposition( long parameter_1,short parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	short_1 = short_1;
	double_1 = cos ( double_1 ) ;
	char_1 = hashnum(long_1,long_2);

	char_1 = char_2;
	int_2 = int_1 + int_1;
	double_2 = sqrt ( double_2 ) ;
}
char hashnum( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double_1 = atan2 ( double_1 , double_1 ) ;
	double_2 = atan2 ( double_1 , double_3 ) ;
	double_2 = log10 ( double_3 ) ;
	double_1 = ceil ( double_2 ) ;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1;
	long_2 = long_1 * long_2;
	double_2 = ceil ( double_4 ) ;
}
long luaH_getnum( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = floor ( double_2 ) ;
	char_1 = hashnum(long_1,long_2);

	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1;
	float_1 = float_2;
	double_2 = double_3;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		unsigned_int_2 = unsigned_int_3;
	}
	unsigned_int_3 = unsigned_int_4 + unsigned_int_4;
}
float luaH_get( int parameter_1,float parameter_2)
{
	float float_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	return float_1;
	return float_1;
	int_1 = int_1 + int_1;
	long_1 = long_2;
	double_1 = sqrt ( double_1 ) ;
	int_2 = mainposition(long_3,short_1);

	double_2 = log ( double_2 ) ;
	double_2 = cos ( double_2 ) ;
	char_1 = luaH_getstr(int_3,float_2);

	long_3 = luaH_getnum(double_2,int_2);

	double_2 = atan ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		double_1 = luaO_rawequalObj(float_3,short_1);

		double_2 = cos ( double_1 ) ;
	}
	double_3 = pow ( double_1 , double_3 ) ;
}
unsigned int luaV_gettable( double parameter_1,unsigned int parameter_2,double parameter_3,double parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_5 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = cosh ( double_2 ) ;
	float_1 = luaH_get(int_1,float_2);

	unsigned_int_1 = unsigned_int_1;
	short_1 = short_1;
	unsigned_int_1 = luaT_gettmbyobj(long_1,long_2,short_2);

	double_3 = tan ( double_2 ) ;
	double_3 = cos ( double_4 ) ;
	char_1 = callTMres(short_2,unsigned_int_2,char_1,long_2,char_2);

	double_3 = asin ( double_3 ) ;
	double_4 = sqrt ( double_2 ) ;
	unsigned_int_1 = luaG_runerror(short_2,float_1,unsigned_int_2);

	float_4 = float_3 * float_3;
	if(1)
	{
		char_2 = char_1;
	}
	double_2 = atan2 ( double_5 , double_2 ) ;
	double_3 = atan ( double_1 ) ;
	double_5 = pow ( double_5 , double_4 ) ;
	float_4 = float_5;
	double_4 = luaG_typeerror(short_2,unsigned_int_3,unsigned_int_2);

}
int luaV_execute( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	float float_3 = 1;
	double double_9 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_10 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_11 = 1;
	int int_4 = 1;
	long long_3 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double double_12 = 1;
	float float_4 = 1;
	double double_13 = 1;
	double double_14 = 1;
	long long_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	float float_5 = 1;
	int int_8 = 1;
	double double_15 = 1;
	float float_6 = 1;
	double double_16 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_5 = 1;
	double double_17 = 1;
	double double_18 = 1;
	char char_3 = 1;
	short short_4 = 1;
	float float_7 = 1;
	short short_5 = 1;
	char char_4 = 1;
	double double_19 = 1;
	double double_20 = 1;
	long long_6 = 1;
	long long_7 = 1;
	long long_8 = 1;
	float float_8 = 1;
	char char_5 = 1;
	float float_9 = 1;
	float float_10 = 1;
	float float_11 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_9 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_8 = 1;
	char char_8 = 1;
	short short_7 = 1;
	long long_10 = 1;
	double double_21 = 1;
	double double_22 = 1;
	float float_12 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_11 = 1;
	double double_23 = 1;
	int int_10 = 1;
	short short_8 = 1;
	unsigned int unsigned_int_10 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_24 = 1;
	int int_11 = 1;
	double double_25 = 1;
	double double_26 = 1;
	double double_27 = 1;
	double_1 = sqrt ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_3 = double_1 + double_2;
	double_2 = fabs ( double_2 ) ;
	double_4 = floor ( double_2 ) ;
	double_2 = acos ( double_4 ) ;
	double_4 = fabs ( double_5 ) ;
	double_6 = sinh ( double_5 ) ;
	double_7 = log ( double_2 ) ;
	double_6 = cos ( double_1 ) ;
	double_7 = double_6 * double_8;
	int_1 = luaF_newLclosure(float_1,int_1,int_2);

	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	long_1 = long_1;
	float_1 = float_2;
	double_6 = tanh ( double_3 ) ;
	int_1 = int_1;
	long_2 = long_2;
	float_3 = float_2;
	double_4 = sqrt ( double_9 ) ;
	short_1 = short_1;
	int_2 = int_3;
	double_2 = pow ( double_4 , double_7 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		short_1 = short_1 + short_2;
	}
	double_1 = cos ( double_2 ) ;
	double_8 = atan2 ( double_1 , double_10 ) ;
	char_1 = char_2;
	double_1 = ldexp ( double_11 , int_4 ) ;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	long_2 = long_3 * long_2;
	char_2 = lessequal(float_3,int_5,long_2);

	short_3 = short_2 * short_1;
	double_6 = ceil ( double_3 ) ;
	double_6 = cosh ( double_12 ) ;
	float_2 = float_1 + float_4;
	double_6 = cosh ( double_12 ) ;
	double_10 = log10 ( double_13 ) ;
	char_1 = char_2;
	double_14 = acos ( double_5 ) ;
	short_1 = luaD_precall(long_2,long_4,int_6);

	int_7 = int_2;
	double_8 = double_10;
	float_5 = float_4 * float_2;
	double_7 = fabs ( double_13 ) ;
	unsigned_int_1 = luaG_runerror(short_3,float_1,unsigned_int_4);

	double_1 = fmod ( double_8 , double_3 ) ;
	double_10 = tanh ( double_2 ) ;
	double_3 = ldexp ( double_1 , int_8 ) ;
	double_12 = atan2 ( double_4 , double_12 ) ;
	long_1 = long_1;
	char_1 = luaH_setnum(char_2,double_14,int_3);

	double_11 = exp ( double_10 ) ;
	unsigned_int_3 = unsigned_int_2;
	double_12 = ldexp ( double_10 , int_5 ) ;
	double_1 = sqrt ( double_2 ) ;
	double_2 = atan2 ( double_14 , double_7 ) ;
	double_10 = acos ( double_8 ) ;
	double_6 = sqrt ( double_6 ) ;
	char_1 = luaH_resizearray(char_1,float_4,int_8);

	double_2 = fabs ( double_8 ) ;
	long_2 = long_1;
	long_4 = long_1;
	double_15 = atan ( double_7 ) ;
	double_14 = log ( double_3 ) ;
	double_12 = acos ( double_9 ) ;
	float_6 = float_5;
	double_3 = sqrt ( double_16 ) ;
	long_2 = long_4 + long_4;
	double_8 = exp ( double_9 ) ;
	double_1 = exp ( double_4 ) ;
	call_binTM(unsigned_int_4,double_15,unsigned_int_5,short_1,int_1);

	long_2 = long_5 * long_2;
	double_17 = fmod ( double_2 , double_18 ) ;
	char_3 = luaF_findupval(double_15,short_4);

	double_11 = ceil ( double_6 ) ;
	double_1 = double_17 + double_4;
	int_5 = int_6;
	double_4 = ceil ( double_3 ) ;
	double_16 = fmod ( double_17 , double_5 ) ;
	double_16 = double_17;
	float_7 = float_2 * float_3;
	double_7 = double_5 + double_18;
	short_1 = luaH_new(short_2,int_6,int_7);

	double_9 = tanh ( double_7 ) ;
	double_18 = floor ( double_15 ) ;
	short_1 = short_5 + short_3;
	double_17 = ceil ( double_11 ) ;
	double_5 = double_11 + double_1;
	double_16 = double_1;
	double_8 = atan2 ( double_9 , double_1 ) ;
	double_8 = fmod ( double_3 , double_13 ) ;
	long_1 = long_3;
	long_1 = long_1;
	char_4 = char_4 + char_1;
	double_7 = luaD_call(char_1,long_4,int_6);

	double_6 = sinh ( double_10 ) ;
	short_5 = pc(int_4);

	short_3 = short_2 + short_1;
	int_1 = int_2;
	unsigned_int_2 = luaV_gettable(double_10,unsigned_int_1,double_14,double_19);

	double_8 = double_1 * double_4;
	double_10 = atan2 ( double_5 , double_20 ) ;
	double_5 = tan ( double_14 ) ;
	double_14 = sqrt ( double_14 ) ;
	long_6 = long_1;
	double_12 = atan2 ( double_17 , double_9 ) ;
	int_2 = int_1;
	double_17 = sinh ( double_19 ) ;
	double_17 = exp ( double_2 ) ;
	double_9 = tan ( double_1 ) ;
	long_7 = long_2 * long_2;
	long_8 = long_8;
	double_4 = fabs ( double_6 ) ;
	char_3 = char_1;
	short_2 = short_4 + short_2;
	double_16 = ceil ( double_9 ) ;
	short_5 = luaF_close(short_1,float_8);

	unsigned_int_3 = unsigned_int_2 + unsigned_int_5;
	float_3 = float_5 + float_8;
	double_9 = fabs ( double_3 ) ;
	int_4 = int_8;
	char_5 = char_1;
	double_16 = log10 ( double_20 ) ;
	double_8 = exp ( double_18 ) ;
	double_13 = atan ( double_19 ) ;
	double_7 = asin ( double_6 ) ;
	double_15 = double_11;
	double_1 = acos ( double_3 ) ;
	double_5 = exp ( double_19 ) ;
	double_18 = ceil ( double_5 ) ;
	double_4 = ldexp ( double_7 , int_2 ) ;
	double_12 = ceil ( double_15 ) ;
	float_7 = float_7;
	float_9 = float_10;
	float_11 = Arith(float_9,float_5,int_9,double_5,float_4);

	int_9 = int_7;
	double_6 = double_19;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	double_12 = exp ( double_20 ) ;
	double_8 = asin ( double_9 ) ;
	double_10 = atan ( double_14 ) ;
	short_6 = short_3 * short_4;
	unsigned_int_1 = unsigned_int_7;
	double_19 = cos ( double_5 ) ;
	double_17 = ldexp ( double_5 , int_6 ) ;
	long_2 = long_8;
	long_8 = long_9;
	double_19 = pow ( double_18 , double_13 ) ;
	short_4 = luaV_lessthan(int_7,char_1,unsigned_int_2);

	double_4 = cos ( double_8 ) ;
	double_20 = exp ( double_7 ) ;
	int_1 = int_6;
	unsigned_int_5 = unsigned_int_2 * unsigned_int_7;
	double_8 = sqrt ( double_18 ) ;
	char_3 = char_4 * char_4;
	int_8 = luaH_getn(float_11);

	double_20 = asin ( double_18 ) ;
	char_6 = char_5 + char_6;
	double_15 = asin ( double_16 ) ;
	double_4 = double_17;
	double_20 = fabs ( double_18 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_6 = acos ( double_14 ) ;
	double_16 = atan ( double_2 ) ;
	long_9 = long_4 + long_6;
	double_7 = double_15;
	double_2 = double_4 + double_13;
	double_12 = log ( double_9 ) ;
	double_1 = luaG_typeerror(short_3,unsigned_int_3,unsigned_int_7);

	float_9 = float_9 * float_6;
	double_16 = atan ( double_16 ) ;
	char_7 = char_1 * char_1;
	unsigned_int_8 = unsigned_int_1;
	int_3 = int_7;
	if(1)
	{
		long_8 = long_1;
	}
	if(1)
	{
		double_11 = pow ( double_7 , double_13 ) ;
	}
	double_1 = tanh ( double_11 ) ;
	char_3 = char_8 * char_2;
	short_3 = short_1 * short_7;
	double_16 = cosh ( double_17 ) ;
	long_1 = long_10 + long_4;
	double_11 = cos ( double_13 ) ;
	int_9 = int_6;
	double_3 = cosh ( double_1 ) ;
	luaV_concat(float_4,int_1,int_6);

	char_1 = char_1 + char_8;
	double_16 = ldexp ( double_5 , int_7 ) ;
	float_3 = float_2;
	double_18 = asin ( double_12 ) ;
	double_18 = atan ( double_11 ) ;
	double_7 = tanh ( double_6 ) ;
	double_9 = exp ( double_20 ) ;
	long_8 = long_4;
	double_15 = fabs ( double_11 ) ;
	double_12 = double_2;
	double_21 = log10 ( double_10 ) ;
	double_16 = double_22 + double_20;
	double_2 = double_1 * double_13;
	double_7 = tanh ( double_2 ) ;
	float_12 = float_12 + float_2;
	unsigned_int_9 = unsigned_int_2 * unsigned_int_6;
	float_10 = float_8;
	long_8 = long_3 + long_11;
	float_3 = float_9;
	double_5 = pow ( double_23 , double_20 ) ;
	double_17 = asin ( double_9 ) ;
	double_8 = asin ( double_17 ) ;
	double_9 = sinh ( double_1 ) ;
	double_17 = double_5;
	int_4 = int_2 + int_10;
	int_5 = int_5;
	double_11 = exp ( double_3 ) ;
	short_8 = short_7;
	unsigned_int_11 = unsigned_int_10 + unsigned_int_3;
	unsigned_int_5 = unsigned_int_9 + unsigned_int_6;
	double_24 = ldexp ( double_16 , int_4 ) ;
	double_16 = ldexp ( double_21 , int_8 ) ;
	int_1 = int_8 * int_1;
	int_1 = int_5 * int_11;
	double_6 = floor ( double_25 ) ;
	double_25 = double_19 + double_2;
	double_4 = sqrt ( double_6 ) ;
	double_6 = ceil ( double_26 ) ;
	int_9 = luaD_poscall(double_23,long_8);

	double_17 = ldexp ( double_6 , int_11 ) ;
	short_1 = short_6 + short_2;
	char_1 = char_1;
	double_13 = double_3;
	double_2 = atan2 ( double_16 , double_5 ) ;
	double_4 = pow ( double_17 , double_27 ) ;
	double_21 = atan2 ( double_16 , double_1 ) ;
	double_11 = asin ( double_15 ) ;
	double_13 = atan ( double_10 ) ;
	unsigned_int_1 = luaV_settable(int_2,long_5,char_6,int_5);

	char_8 = char_8 + char_4;
	double_1 = fmod ( double_4 , double_27 ) ;
	unsigned_int_9 = unsigned_int_9;
	double_24 = cos ( double_27 ) ;
	double_12 = sinh ( double_9 ) ;
	luaO_fb2int(int_10);

	char_5 = char_3 + char_2;
}
int luaD_poscall( double parameter_1,long parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_1 = short_1 * short_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = sqrt ( double_2 ) ;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	double_1 = floor ( double_1 ) ;
	double_1 = sinh ( double_3 ) ;
	double_1 = floor ( double_4 ) ;
	long_1 = long_1 + long_2;
	unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
	double_4 = ldexp ( double_5 , int_1 ) ;
	unsigned_int_5 = unsigned_int_2;
	double_3 = sinh ( double_1 ) ;
	double_4 = exp ( double_1 ) ;
	float_1 = float_2;
}
double adjust_varargs( long parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_2 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double_1 = tanh ( double_2 ) ;
	double_2 = log10 ( double_1 ) ;
	char_1 = char_1 + char_1;
	double_3 = ceil ( double_4 ) ;
	double_3 = sqrt ( double_1 ) ;
	double_3 = ldexp ( double_1 , int_1 ) ;
	long_1 = long_1 * long_2;
	double_5 = atan ( double_6 ) ;
	char_1 = char_2 + char_2;
	double_6 = ceil ( double_7 ) ;
	double_6 = exp ( double_5 ) ;
	double_3 = tan ( double_7 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = sqrt ( double_1 ) ;
	float_1 = float_2;
}
short isinstack( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double_1 = atan ( double_1 ) ;
	double_1 = double_2;
	short_2 = short_1 * short_1;
	return short_2;
}
double luaG_typeerror( short parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = float_1 * float_2;
	char_2 = char_1 + char_1;
	double_2 = double_1 + double_1;
	short_1 = isinstack(long_1,long_2);

	unsigned_int_1 = unsigned_int_1;
	int_1 = int_2;
	unsigned_int_2 = luaG_runerror(short_1,float_1,unsigned_int_3);

}
float tryfuncTM( double parameter_1,float parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double_1 = pow ( double_2 , double_1 ) ;
	unsigned_int_1 = luaT_gettmbyobj(long_1,long_1,short_1);

	float_1 = float_1 + float_1;
	double_2 = ldexp ( double_2 , int_1 ) ;
	double_3 = double_2 * double_3;
	double_4 = fmod ( double_2 , double_1 ) ;
	double_3 = sqrt ( double_1 ) ;
	double_4 = double_1;
	double_2 = fmod ( double_3 , double_2 ) ;
	double_2 = cosh ( double_1 ) ;
	double_2 = luaG_typeerror(short_2,unsigned_int_1,unsigned_int_2);

	double_4 = double_5;
	int_1 = int_1 * int_1;
}
short luaD_precall( long parameter_1,long parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	double double_6 = 1;
	char char_2 = 1;
	long long_5 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_9 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_2;
	double_1 = double_1;
	double_2 = log10 ( double_3 ) ;
	double_2 = atan ( double_1 ) ;
	int_1 = int_1 * int_1;
	long_4 = long_3 + long_3;
	long_3 = long_1;
	double_1 = adjust_varargs(long_4,long_3,int_1);

	double_2 = double_2;
	double_2 = double_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = cos ( double_4 ) ;
	unsigned_int_1 = unsigned_int_2;
	double_2 = tan ( double_1 ) ;
	double_4 = double_5;
	int_3 = int_2 + int_1;
	double_3 = double_5;
	double_1 = log ( double_2 ) ;
	int_2 = luaD_poscall(double_2,long_4);

	char_1 = char_1;
	double_2 = ceil ( double_5 ) ;
	double_6 = tanh ( double_4 ) ;
	char_2 = char_1 + char_2;
	char_2 = char_1 + char_2;
	long_1 = long_2 * long_5;
	double_5 = double_4 + double_4;
	double_7 = atan2 ( double_6 , double_8 ) ;
	double_2 = double_6 * double_4;
	double_1 = floor ( double_1 ) ;
	double_8 = sqrt ( double_6 ) ;
	short_2 = short_1 * short_2;
	unsigned_int_3 = unsigned_int_1;
	char_1 = char_3;
	double_8 = sinh ( double_7 ) ;
	double_6 = exp ( double_2 ) ;
	double_7 = tanh ( double_5 ) ;
	long_2 = long_4 + long_2;
	double_4 = floor ( double_3 ) ;
	int_2 = int_2 + int_4;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
	double_1 = fabs ( double_4 ) ;
	float_1 = tryfuncTM(double_9,float_2);

}
void luaD_reallocCI( unsigned int parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short_1 = short_1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_2 = double_1 * double_2;
	double_3 = atan ( double_2 ) ;
}
unsigned int restore_stack_limit( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_1 = short_2;
	double_1 = sqrt ( double_2 ) ;
	luaD_reallocCI(unsigned_int_1,int_1);

}
void luaD_seterrorobj( int parameter_1,int parameter_2,float parameter_3)
{
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	double_1 = fabs ( double_1 ) ;
	short_1 = short_1;
	short_1 = short_2 * short_3;
	double_2 = asin ( double_3 ) ;
	double_3 = exp ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_4 = double_4;
}
float luaC_linkupval( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	float float_1 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = fabs ( double_2 ) ;
	double_1 = double_1 + double_2;
	double_2 = ldexp ( double_1 , int_1 ) ;
	double_3 = double_1 + double_1;
	float_1 = float_1 + float_1;
	double_4 = sqrt ( double_2 ) ;
	char_1 = char_2;
}
float unlinkupval( char parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char_3 = char_1 + char_2;
	float_1 = float_2;
}
unsigned int luaF_freeupval( char parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double_1 = log10 ( double_2 ) ;
	float_1 = unlinkupval(char_1);

	unsigned_int_1 = unsigned_int_1;
}
short luaF_close( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_3 = 1;
	unsigned_int_1 = luaF_freeupval(char_1,long_1);

	double_1 = log ( double_2 ) ;
	float_1 = float_1 + float_1;
	float_2 = luaC_linkupval(char_1,int_1);

	double_2 = log10 ( double_1 ) ;
	double_3 = fmod ( double_1 , double_1 ) ;
	double_3 = sqrt ( double_4 ) ;
	int_1 = int_1;
	float_1 = unlinkupval(char_2);

	short_1 = short_2;
	double_5 = exp ( double_6 ) ;
	float_3 = float_2;
}
void resetstack( char parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = luaF_close(short_2,float_1);

	double_1 = ldexp ( double_2 , int_1 ) ;
	double_3 = double_4;
	double_1 = ldexp ( double_1 , int_2 ) ;
	int_2 = int_1;
	luaD_seterrorobj(int_3,int_2,float_2);

	double_5 = cos ( double_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_5 = sinh ( double_4 ) ;
	int_4 = int_4 * int_2;
	unsigned_int_3 = restore_stack_limit(short_2);

	int_3 = int_2 * int_2;
}
long panic( double parameter_1)
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double_1 = floor ( double_1 ) ;
	int_1 = int_1 + int_1;
	double_2 = pow ( double_1 , double_2 ) ;
}
unsigned int luaD_throw( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double_1 = acos ( double_1 ) ;
	int_1 = int_1 * int_2;
	int_3 = int_2 + int_2;
	char_1 = char_1 * char_2;
	double_2 = sqrt ( double_3 ) ;
	long_1 = panic(double_2);

	resetstack(char_2,int_2);

	double_2 = sinh ( double_2 ) ;
}
double luaD_call( char parameter_1,long parameter_2,int parameter_3)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_4 = 1;
	int int_4 = 1;
	double double_2 = 1;
	double_1 = exp ( double_1 ) ;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_2 = 1;
		long long_1 = 1;
		char char_4 = 1;
		int int_4 = 1;
		double double_2 = 1;
		unsigned_int_1 = luaG_runerror(short_1,float_1,unsigned_int_2);

		unsigned_int_1 = luaD_throw(int_1,int_1);

		double_1 = exp ( double_2 ) ;
	}
	char_3 = char_1 * char_2;
	int_3 = int_1 * int_2;
	short_2 = luaD_precall(long_1,long_1,int_3);

	char_2 = char_4;
	int_4 = luaV_execute(double_1,int_1);

}
char callTMres( short parameter_1,unsigned int parameter_2,char parameter_3,long parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_8 = 1;
	double_1 = floor ( double_1 ) ;
	double_1 = tanh ( double_1 ) ;
	double_2 = sinh ( double_3 ) ;
	double_4 = double_4;
	double_5 = luaD_call(char_1,long_1,int_1);

	double_2 = ceil ( double_3 ) ;
	double_6 = atan2 ( double_2 , double_2 ) ;
	double_1 = log ( double_7 ) ;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 * long_2;
	double_8 = asin ( double_2 ) ;
}
char luaH_getstr( int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_2;
	char_2 = char_1 + char_1;
	double_1 = asin ( double_2 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		double double_4 = 1;
		looper_1 += 1;
		double_1 = pow ( double_3 , double_4 ) ;
	}
	double_3 = double_1 * double_5;
}
unsigned int luaT_gettmbyobj( long parameter_1,long parameter_2,short parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_1;
	double_1 = atan ( double_1 ) ;
	int_1 = int_1;
	double_2 = cosh ( double_1 ) ;
	double_3 = log ( double_4 ) ;
	double_4 = floor ( double_4 ) ;
	double_3 = acos ( double_1 ) ;
	char_1 = luaH_getstr(int_3,float_1);

}
void call_binTM( unsigned int parameter_1,double parameter_2,unsigned int parameter_3,short parameter_4,int parameter_5)
{
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char_1 = callTMres(short_1,unsigned_int_1,char_1,long_1,char_1);

	double_2 = double_1 * double_1;
	unsigned_int_2 = luaT_gettmbyobj(long_1,long_2,short_2);

	char_3 = char_1 * char_2;
	double_1 = cosh ( double_1 ) ;
}
void luaV_concat( float parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_4 = 1;
	short_1 = luaZ_openspace(unsigned_int_1,long_1,short_1);

	double_1 = double_1;
	do
	{
		double_2 = asin ( double_3 ) ;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	unsigned_int_1 = luaG_runerror(short_2,float_1,unsigned_int_2);

	char_1 = char_2;
	looper_1 += 1;
	char controller_1[5];
	fgets(controller_1 ,5 ,stdin);
	if( strcmp( controller_1, "`O;6") < 0)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_4 = 1;
		call_binTM(unsigned_int_1,double_1,unsigned_int_1,short_2,int_1);

		luaG_concaterror(float_2,char_2,int_1);

		double_4 = tan ( double_3 ) ;
		double_4 = acos ( double_2 ) ;
	}
	short_1 = luaS_newlstr(float_2,long_1,float_3);

}
char luaS_resize( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_2;
	double_2 = cosh ( double_2 ) ;
	int_2 = int_1 + int_2;
	double_3 = sinh ( double_3 ) ;
	double_1 = exp ( double_1 ) ;
	int_2 = int_1;
	float_2 = float_1 + float_1;
	double_3 = cosh ( double_3 ) ;
	double_2 = double_1 * double_2;
	double_2 = cos ( double_2 ) ;
	float_4 = float_1 + float_3;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_1;
	double_2 = tan ( double_3 ) ;
	double_2 = atan ( double_3 ) ;
	int_1 = int_2 * int_1;
	double_4 = double_3 + double_3;
	int_4 = int_3 + int_3;
	double_2 = sinh ( double_4 ) ;
	double_3 = atan2 ( double_2 , double_4 ) ;
	double_5 = log ( double_5 ) ;
}
double luaM_toobig( double parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned_int_1 = luaG_runerror(short_1,float_1,unsigned_int_2);

	double_1 = atan ( double_2 ) ;
	int_2 = int_1 + int_1;
}
int newlstr( float parameter_1,float parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	double_1 = pow ( double_1 , double_1 ) ;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_2 = atan ( double_1 ) ;
	double_1 = ldexp ( double_3 , int_1 ) ;
	double_4 = fabs ( double_4 ) ;
	double_3 = ceil ( double_3 ) ;
	float_1 = float_1;
	char_3 = char_1 + char_2;
	double_4 = double_1 + double_1;
	double_3 = fmod ( double_2 , double_1 ) ;
	int_2 = int_1 + int_1;
	double_2 = luaM_toobig(double_4);

	long_1 = long_1 + long_2;
	int_2 = int_3 + int_4;
	double_5 = tan ( double_4 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	double_1 = fmod ( double_6 , double_5 ) ;
	double_5 = tanh ( double_5 ) ;
	double_6 = pow ( double_1 , double_1 ) ;
	char_2 = luaS_resize(unsigned_int_3,int_1);

}
short luaS_newlstr( float parameter_1,long parameter_2,float parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	double_1 = double_2;
	double_1 = double_1;
	char_1 = char_1 + char_2;
	double_1 = double_3;
	int_1 = newlstr(float_1,float_2,unsigned_int_1,unsigned_int_2);

	double_1 = fmod ( double_1 , double_2 ) ;
	double_2 = cos ( double_1 ) ;
	double_1 = fabs ( double_3 ) ;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
	double_1 = cos ( double_1 ) ;
	double_3 = log ( double_3 ) ;
	float_1 = float_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	double_4 = log ( double_4 ) ;
}
void pushstr( unsigned int parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = fmod ( double_2 , double_3 ) ;
	double_4 = sinh ( double_1 ) ;
}
unsigned int luaO_pushvfstring( int parameter_1,double parameter_2,long parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_6 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_8 = 1;
	double double_9 = 1;
	double double_10 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_3 = 1;
	int int_3 = 1;
	double double_11 = 1;
	double double_12 = 1;
	double double_13 = 1;
	int int_4 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_1 = atan2 ( double_2 , double_2 ) ;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_3;
	double_3 = double_1;
	double_4 = cos ( double_2 ) ;
	float_2 = float_1 + float_1;
	double_1 = sinh ( double_5 ) ;
	int_1 = int_2;
	double_6 = tan ( double_4 ) ;
	double_5 = log10 ( double_1 ) ;
	unsigned_int_6 = unsigned_int_5 * unsigned_int_4;
	double_4 = ldexp ( double_1 , int_1 ) ;
	double_7 = atan ( double_5 ) ;
	pushstr(unsigned_int_7,double_6);

	short_1 = luaS_newlstr(float_1,long_1,float_1);

	int_2 = int_2 + int_2;
	unsigned_int_6 = unsigned_int_1;
	double_6 = double_2 * double_3;
	double_4 = ceil ( double_1 ) ;
	double_6 = double_3 * double_4;
	double_8 = fabs ( double_1 ) ;
	double_2 = ldexp ( double_3 , int_2 ) ;
	double_9 = sinh ( double_10 ) ;
	char_3 = char_1 + char_2;
	double_4 = double_3 * double_9;
	double_10 = ceil ( double_10 ) ;
	double_4 = double_9 + double_7;
	short_3 = short_2 + short_3;
	double_9 = tan ( double_5 ) ;
	unsigned_int_2 = unsigned_int_8;
	float_3 = float_2 * float_3;
	int_2 = int_3 * int_1;
	luaV_concat(float_2,int_2,int_3);

	double_11 = pow ( double_9 , double_9 ) ;
	double_9 = cosh ( double_2 ) ;
	double_4 = atan2 ( double_12 , double_13 ) ;
	unsigned_int_7 = unsigned_int_7 * unsigned_int_7;
	int_4 = int_2;
	char_2 = char_3;
	double_6 = acos ( double_3 ) ;
	double_7 = fabs ( double_11 ) ;
	unsigned_int_7 = unsigned_int_7 + unsigned_int_3;
}
short luaO_pushfstring( double parameter_1,double parameter_2,double parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	int_2 = int_2;
	char_1 = char_1 * char_2;
	unsigned_int_1 = luaO_pushvfstring(int_2,double_2,long_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	long_2 = long_3;
	double_2 = log10 ( double_3 ) ;
}
float getluaproto( short parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
}
float luaO_chunkid( char parameter_1,double parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	long long_4 = 1;
	double double_4 = 1;
	int int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int_1 = int_1 * int_1;
	double_1 = floor ( double_1 ) ;
	double_1 = double_2 * double_2;
	double_3 = tan ( double_1 ) ;
	double_3 = atan2 ( double_3 , double_2 ) ;
	double_3 = acos ( double_1 ) ;
	long_3 = long_1 * long_2;
	double_3 = tanh ( double_1 ) ;
	short_1 = short_1;
	long_4 = long_2 + long_4;
	double_3 = double_4;
	double_4 = exp ( double_3 ) ;
	long_1 = long_1;
	double_1 = sinh ( double_3 ) ;
	int_2 = int_1 * int_2;
	short_1 = short_1 * short_1;
	double_5 = pow ( double_3 , double_3 ) ;
	int_2 = int_2 * int_3;
}
char currentpc( short parameter_1,unsigned int parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	return char_1;
	double_1 = fmod ( double_1 , double_2 ) ;
}
int currentline( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int_2 = int_1 * int_1;
	char_1 = currentpc(short_1,unsigned_int_1);

	double_1 = ceil ( double_2 ) ;
	short_1 = pc(int_2);

	double_2 = atan2 ( double_3 , double_3 ) ;
}
double addinfo( char parameter_1,short parameter_2)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	char char_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short_1 = luaO_pushfstring(double_1,double_1,double_2);

	unsigned_int_1 = unsigned_int_2;
	int_1 = int_2;
	int_3 = int_3 + int_2;
	float_1 = getluaproto(short_2);

	long_1 = long_1;
	float_1 = luaO_chunkid(char_1,double_3,long_1);

	double_2 = atan2 ( double_3 , double_4 ) ;
	int_2 = currentline(unsigned_int_3,int_1);

}
unsigned int luaG_runerror( short parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = addinfo(char_1,short_1);

	unsigned_int_1 = luaO_pushvfstring(int_1,double_2,long_1);

	unsigned_int_2 = luaG_errormsg(float_1);

	double_2 = floor ( double_1 ) ;
	char_2 = char_2 * char_1;
	double_3 = ldexp ( double_4 , int_1 ) ;
	double_2 = fabs ( double_1 ) ;
	double_2 = tanh ( double_3 ) ;
}
float setnodevector( float parameter_1,float parameter_2,int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double_1 = fmod ( double_1 , double_1 ) ;
	double_1 = atan2 ( double_2 , double_1 ) ;
	long_2 = long_1 * long_1;
	double_1 = atan2 ( double_1 , double_2 ) ;
	double_2 = double_1;
	double_1 = asin ( double_3 ) ;
	double_4 = exp ( double_2 ) ;
	unsigned_int_1 = luaG_runerror(short_1,float_1,unsigned_int_2);

	double_1 = fabs ( double_3 ) ;
	double_2 = ceil ( double_3 ) ;
	double_1 = cos ( double_1 ) ;
	double_2 = asin ( double_4 ) ;
	char_1 = char_1;
	int_1 = int_2;
	int_3 = int_3;
	long_3 = long_3 * long_1;
	unsigned_int_3 = unsigned_int_3;
}
char setarrayvector( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	int_2 = int_2 * int_2;
	double_2 = double_1;
	double_1 = cos ( double_1 ) ;
	double_2 = ldexp ( double_2 , int_1 ) ;
	double_1 = ldexp ( double_2 , int_3 ) ;
}
float luaC_link( unsigned int parameter_1,float parameter_2,long parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double_1 = atan2 ( double_2 , double_1 ) ;
	double_1 = pow ( double_1 , double_3 ) ;
	double_3 = log ( double_4 ) ;
	unsigned_int_1 = unsigned_int_1;
	double_5 = acos ( double_1 ) ;
}
short luaH_new( short parameter_1,int parameter_2,int parameter_3)
{
	double double_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_2 = 1;
	double_1 = double_1;
	float_1 = luaC_link(unsigned_int_1,float_2,long_1);

	double_2 = acos ( double_2 ) ;
	double_2 = double_1;
	double_3 = sinh ( double_2 ) ;
	char_1 = setarrayvector(unsigned_int_2,short_1,int_1);

	double_1 = sinh ( double_1 ) ;
	double_3 = ceil ( double_3 ) ;
	float_3 = setnodevector(float_1,float_4,int_1);

	double_2 = cosh ( double_3 ) ;
	double_3 = atan2 ( double_2 , double_3 ) ;
	float_3 = float_2;
	double_2 = ldexp ( double_3 , int_1 ) ;
	long_2 = long_1;
}
double stack_init( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	double double_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	double_1 = ceil ( double_1 ) ;
	double_1 = ceil ( double_1 ) ;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	double_1 = tan ( double_2 ) ;
	double_2 = floor ( double_1 ) ;
	double_1 = sqrt ( double_2 ) ;
	double_1 = ldexp ( double_3 , int_1 ) ;
	double_1 = cosh ( double_3 ) ;
	double_3 = fabs ( double_2 ) ;
	double_4 = sqrt ( double_3 ) ;
	double_1 = pow ( double_2 , double_2 ) ;
}
long f_luaopen( float parameter_1)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_3 = 1;
	char char_2 = 1;
	short short_4 = 1;
	short_1 = short_1 + short_1;
	float_1 = float_2;
	short_2 = luaH_new(short_2,int_1,int_2);

	int_3 = luaX_init(short_1);

	double_1 = cosh ( double_2 ) ;
	double_3 = double_1 + double_2;
	double_4 = double_1 * double_1;
	double_2 = stack_init(long_1,char_1);

	double_2 = double_1 + double_4;
	unsigned_int_1 = luaT_init();

	short_1 = short_3 * short_2;
	int_1 = int_3 + int_3;
	double_2 = log ( double_4 ) ;
	char_2 = luaS_resize(unsigned_int_1,int_2);

	short_4 = short_1 + short_4;
}
void luaD_rawrunprotected( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double_1 = exp ( double_2 ) ;
	double_1 = atan ( double_2 ) ;
	double_2 = floor ( double_1 ) ;
	long_1 = long_1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	double_2 = double_1 * double_1;
	double_3 = ldexp ( double_4 , int_1 ) ;
	long_1 = long_1 * long_2;
}
float preinit_state( short parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double_1 = ceil ( double_2 ) ;
	double_1 = atan ( double_1 ) ;
	double_1 = double_2 + double_1;
	unsigned_int_1 = unsigned_int_1;
	double_3 = atan ( double_3 ) ;
	double_2 = double_1 * double_2;
	double_1 = atan2 ( double_3 , double_1 ) ;
	double_4 = fmod ( double_4 , double_3 ) ;
	int_2 = int_1 + int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_2;
	double_3 = atan ( double_5 ) ;
	int_4 = int_3 * int_1;
	int_4 = int_4 * int_5;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_4;
}
void lua_newstate( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	double double_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_7 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	double double_8 = 1;
	int int_3 = 1;
	double double_9 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	double double_10 = 1;
	int int_4 = 1;
	double_2 = double_1 * double_2;
	double_2 = double_1;
	double_1 = sqrt ( double_1 ) ;
	double_2 = tanh ( double_2 ) ;
	double_3 = tan ( double_4 ) ;
	double_5 = double_5 + double_5;
	double_2 = ldexp ( double_4 , int_1 ) ;
	double_4 = acos ( double_6 ) ;
	char_1 = char_2;
	float_2 = float_1 * float_1;
	float_3 = float_2 * float_3;
	double_3 = atan ( double_2 ) ;
	double_1 = sinh ( double_3 ) ;
	double_4 = cos ( double_2 ) ;
	int_1 = int_1;
	int_1 = int_2;
	float_2 = float_3 * float_2;
	luaD_rawrunprotected(char_1,int_1);

	double_4 = log ( double_1 ) ;
	double_3 = double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_7 = ldexp ( double_5 , int_2 ) ;
	float_2 = preinit_state(short_1,short_1);

	double_7 = double_4 + double_7;
	double_5 = double_4;
	long_1 = f_luaopen(float_2);

	double_7 = double_5 + double_7;
	double_2 = atan2 ( double_3 , double_6 ) ;
	double_7 = tanh ( double_7 ) ;
	short_2 = short_2 + short_2;
	double_8 = log10 ( double_7 ) ;
	int_1 = int_1;
	int_3 = int_3 + int_2;
	double_9 = log ( double_9 ) ;
	char_4 = char_3 + char_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = atan ( double_5 ) ;
	char_3 = char_2;
	short_3 = short_3;
	double_6 = sinh ( double_6 ) ;
	double_6 = log ( double_10 ) ;
	float_3 = close_state(int_4);

	double_2 = double_4;
	double_7 = tan ( double_8 ) ;
	double_8 = asin ( double_9 ) ;
}
void luaL_newstate()
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	int int_1 = 1;
	lua_newstate(short_1);

	double_2 = double_1 * double_1;
	unsigned_int_1 = lua_atpanic(float_1,unsigned_int_1);

	float_2 = float_2;
	long_1 = panic(double_1);

	double_3 = asin ( double_3 ) ;
	int_1 = l_alloc(double_2,int_1);

}
void reload_tempfile( int parameter_1,char parameter_2,unsigned int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long_2 = long_1 * long_2;
	double_1 = log10 ( double_2 ) ;
	double_2 = sinh ( double_3 ) ;
	double_4 = ldexp ( double_3 , int_1 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		looper_1 += 1;
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			looper_2 += 1;
			short_2 = short_1 + short_2;
			if(1)
			{
				double_1 = asin ( double_2 ) ;
				short_1 = short_1;
			}
		}
		unsigned_int_1 = unsigned_int_2;
	}
	double_5 = acos ( double_3 ) ;
	double_4 = double_2;
	double_2 = fabs ( double_6 ) ;
	double_7 = atan ( double_5 ) ;
}
double open_tempfile()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double_1 = atan ( double_2 ) ;
	double_3 = tanh ( double_3 ) ;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		return double_1;
	}
	double_3 = double_2 + double_4;
	return double_4;
}
unsigned int arith()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	if(1)
	{
		return unsigned_int_1;
	}
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
}
float shcode()
{
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	if(1)
	{
		return float_1;
	}
	double_1 = tanh ( double_1 ) ;
	unsigned_int_1 = unsigned_int_2;
}
double reformat()
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_12 = 1;
	double double_13 = 1;
	float float_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_6 = 1;
	double double_14 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_15 = 1;
	short short_4 = 1;
	short short_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_8 = 1;
	short short_6 = 1;
	int_3 = int_1 * int_2;
	double_1 = ceil ( double_1 ) ;
	double_1 = asin ( double_2 ) ;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_2 = tan ( double_1 ) ;
		short_3 = short_1 * short_2;
	}
	unsigned_int_3 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_1 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_5 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_12 = 1;
			double double_13 = 1;
			float float_7 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_6 = 1;
			double double_14 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_7 = 1;
			int int_8 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double double_15 = 1;
			short short_4 = 1;
			short short_5 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_8 = 1;
			short short_6 = 1;
			if(1)
			{
				double_1 = log ( double_3 ) ;
				if(1)
				{
					double_4 = tan ( double_4 ) ;
					double_5 = tanh ( double_2 ) ;
				}
			}
			double_6 = acos ( double_2 ) ;
			double_2 = fmod ( double_6 , double_4 ) ;
			double_3 = ceil ( double_6 ) ;
			double_2 = tanh ( double_3 ) ;
			double_7 = cos ( double_4 ) ;
			char_1 = char_2;
			char_2 = char_1 + char_1;
			int_1 = int_4 + int_1;
			unsigned_int_4 = unsigned_int_1;
			double_4 = double_3;
			char_3 = char_2 + char_1;
			double_1 = pow ( double_4 , double_8 ) ;
			unsigned_int_5 = unsigned_int_2;
			int_3 = int_5 + int_3;
			double_2 = floor ( double_7 ) ;
			double_8 = sinh ( double_6 ) ;
			float_1 = float_2;
			double_1 = cosh ( double_1 ) ;
			double_4 = log ( double_7 ) ;
			double_2 = exp ( double_8 ) ;
		}
	}
	float_5 = float_3 + float_4;
	double_4 = exp ( double_4 ) ;
	double_2 = sinh ( double_9 ) ;
	double_10 = fabs ( double_5 ) ;
	double_2 = cosh ( double_4 ) ;
	double_5 = exp ( double_2 ) ;
	double_5 = ldexp ( double_2 , int_4 ) ;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_3;
	double_1 = cos ( double_4 ) ;
	double_11 = asin ( double_8 ) ;
	double_3 = pow ( double_11 , double_11 ) ;
	double_7 = double_6 + double_5;
	double_7 = atan ( double_7 ) ;
	long_2 = long_1 * long_1;
	double_6 = fmod ( double_7 , double_8 ) ;
	double_8 = atan2 ( double_1 , double_5 ) ;
	double_5 = cosh ( double_10 ) ;
	double_7 = tanh ( double_9 ) ;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_2;
	int_2 = int_2 * int_5;
	double_5 = log ( double_8 ) ;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = sinh ( double_9 ) ;
		double_10 = double_1;
		int looper_3 = 0;
		while(looper_3 < 1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_1 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_5 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_12 = 1;
			double double_13 = 1;
			float float_7 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_6 = 1;
			double double_14 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_7 = 1;
			int int_8 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double double_15 = 1;
			short short_4 = 1;
			short short_5 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_8 = 1;
			short short_6 = 1;
			looper_3 += 1;
			short_3 = short_3 * short_2;
			long_3 = long_2 * long_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_1 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_5 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_12 = 1;
			double double_13 = 1;
			float float_7 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_6 = 1;
			double double_14 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_7 = 1;
			int int_8 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double double_15 = 1;
			short short_4 = 1;
			short short_5 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_8 = 1;
			short short_6 = 1;
			unsigned_int_5 = unsigned_int_2 + unsigned_int_1;
			double_4 = double_7;
			int looper_4 = 0;
			while(looper_4 < 1)
			{
				looper_4 += 1;
				if(1)
				{
					double_10 = fmod ( double_4 , double_11 ) ;
				}
				double_5 = log10 ( double_1 ) ;
				if(1)
				{
					double_11 = cosh ( double_12 ) ;
				}
				if(1)
				{
					double_6 = double_9;
				}
			}
			if(1)
			{
			}
			if(1)
			{
				double_3 = floor ( double_9 ) ;
				if(1)
				{
					double_11 = tan ( double_8 ) ;
					unsigned_int_2 = unsigned_int_4 + unsigned_int_6;
				}
			}
			int_6 = int_5;
			double_11 = tanh ( double_13 ) ;
			double_11 = atan2 ( double_6 , double_1 ) ;
			double_4 = tanh ( double_1 ) ;
			double_11 = tan ( double_1 ) ;
			double_10 = tan ( double_5 ) ;
			double_4 = tanh ( double_14 ) ;
			double_2 = sinh ( double_9 ) ;
			double_9 = double_2 * double_14;
			unsigned_int_7 = unsigned_int_4 + unsigned_int_6;
			int_8 = int_7 * int_7;
			char_4 = char_5;
			double_8 = pow ( double_15 , double_15 ) ;
			unsigned_int_5 = unsigned_int_4 + unsigned_int_4;
			double_3 = tan ( double_2 ) ;
			unsigned_int_6 = unsigned_int_5;
			float_3 = float_4;
			short_2 = short_3 + short_4;
			double_5 = fmod ( double_5 , double_13 ) ;
			short_3 = short_5;
			char_1 = char_5;
			float_5 = float_4 + float_6;
			float_7 = node_calloc();

			unsigned_int_1 = unsigned_int_7 * unsigned_int_4;
			unsigned_int_8 = unsigned_int_6 + unsigned_int_2;
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_12 = 1;
		double double_13 = 1;
		float float_7 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_6 = 1;
		double double_14 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_7 = 1;
		int int_8 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double double_15 = 1;
		short short_4 = 1;
		short short_5 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_8 = 1;
		short short_6 = 1;
		float_8 = float_5 + float_3;
		double_4 = atan ( double_13 ) ;
		short_1 = short_6 + short_3;
	}
	double_12 = atan ( double_4 ) ;
}
float node_calloc()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_3;
		double_1 = double_1;
	}
	return float_1;
}
unsigned int add_cstring( char parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_7 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_4 = 1;
	char char_5 = 1;
	double double_8 = 1;
	float_1 = node_calloc();

	unsigned_int_1 = unsigned_int_1;
	double_1 = ceil ( double_2 ) ;
	char_3 = char_1 * char_2;
	double_1 = cos ( double_2 ) ;
	if(1)
	{
		return unsigned_int_2;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_7 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_4 = 1;
		char char_5 = 1;
		double double_8 = 1;
		if(1)
		{
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_7 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double double_8 = 1;
			int_1 = int_1 * int_2;
			double_1 = ldexp ( double_3 , int_2 ) ;
			double_4 = log10 ( double_5 ) ;
			double_6 = atan ( double_6 ) ;
			double_2 = exp ( double_7 ) ;
			short_1 = short_1 * short_2;
			if(1)
			{
				double_6 = tan ( double_7 ) ;
			}
			else
			{
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				int int_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_1 = 1;
				double double_3 = 1;
				double double_7 = 1;
				short short_1 = 1;
				short short_2 = 1;
				char char_4 = 1;
				char char_5 = 1;
				double double_8 = 1;
				char_2 = char_4 * char_5;
			}
			double_4 = pow ( double_7 , double_5 ) ;
			double_2 = acos ( double_7 ) ;
			char_3 = char_3;
			char_3 = char_4;
			double_6 = ldexp ( double_3 , int_1 ) ;
			double_2 = ldexp ( double_7 , int_1 ) ;
		}
		if(1)
		{
		}
		if(1)
		{
			double_6 = log ( double_5 ) ;
		}
		int_3 = int_2;
		if(1)
		{
			float_2 = float_3;
		}
		if(1)
		{
			float_3 = float_3 * float_2;
		}
		else
		{
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_1 = 1;
			double double_3 = 1;
			double double_7 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_4 = 1;
			char char_5 = 1;
			double double_8 = 1;
			double_8 = floor ( double_4 ) ;
		}
	}
}
char ddump( int parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_13 = 1;
	long long_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_6 = 1;
	double double_8 = 1;
	float float_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_7 = 1;
	double double_11 = 1;
	double double_12 = 1;
	char * vul_var;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_1 = exp ( double_1 ) ;
	if(1)
	{
		double_1 = tanh ( double_2 ) ;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	char controller4vul_59[1];
	fgets(controller4vul_59 ,2 ,stdin);
	if( strcmp( controller4vul_59, "@") == 0)
	{
		vul_var=(char*)malloc(20*sizeof(char));
		strcpy(vul_var, "CWE-761");
		char controller4vul_60[4];
		fgets(controller4vul_60 ,5 ,stdin);
		if( strcmp( controller4vul_60, "*fL*") == 0)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_13 = 1;
			long long_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_5 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_6 = 1;
			double double_8 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_7 = 1;
			double double_11 = 1;
			double double_12 = 1;
			if(uni_para == 299)
			{
				vul_var = vul_var + 1;
			}
			free(vul_var);
			short_2 = short_1 + short_1;
		}
		double_3 = tan ( double_2 ) ;
		unsigned_int_4 = unsigned_int_3 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_13 = 1;
		long long_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_6 = 1;
		double double_8 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double_4 = acos ( double_5 ) ;
		if(1)
		{
			unsigned_int_3 = unsigned_int_1;
		}
		if(1)
		{
			double_1 = sqrt ( double_1 ) ;
			double_3 = asin ( double_2 ) ;
		}
		long_3 = long_1 * long_2;
		double_2 = atan ( double_1 ) ;
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_13 = 1;
			long long_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_5 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_6 = 1;
			double double_8 = 1;
			float float_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_7 = 1;
			double double_11 = 1;
			double double_12 = 1;
			looper_1 += 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_4 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_13 = 1;
				long long_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_5 = 1;
				long long_2 = 1;
				long long_3 = 1;
				double double_6 = 1;
				double double_8 = 1;
				float float_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_7 = 1;
				double double_11 = 1;
				double double_12 = 1;
				char_2 = char_1 * char_1;
				double_2 = fmod ( double_5 , double_1 ) ;
			}
			if(1)
			{
				double_5 = acos ( double_6 ) ;
				double_2 = ceil ( double_3 ) ;
				double_3 = asin ( double_6 ) ;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_4 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_13 = 1;
				long long_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_5 = 1;
				long long_2 = 1;
				long long_3 = 1;
				double double_6 = 1;
				double double_8 = 1;
				float float_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_7 = 1;
				double double_11 = 1;
				double double_12 = 1;
				double_7 = cos ( double_4 ) ;
				double_5 = double_1 + double_7;
			}
			else
			{
				double_3 = tanh ( double_6 ) ;
				unsigned_int_5 = unsigned_int_5;
			}
			float_1 = float_1 * float_1;
		}
		double_8 = cosh ( double_6 ) ;
		double_9 = double_6 + double_3;
		double_1 = floor ( double_6 ) ;
	}
	if(1)
	{
		double_4 = double_3 * double_10;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_13 = 1;
		long long_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_6 = 1;
		double double_8 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		double_9 = floor ( double_11 ) ;
	}
	char controller_9[4];
	fgets(controller_9 ,4 ,stdin);
	if( strcmp( controller_9, "u2/") < 0)
	{
		double_3 = exp ( double_10 ) ;
	}
	else
	{
		unsigned_int_2 = unsigned_int_5 + unsigned_int_2;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_13 = 1;
		long long_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_6 = 1;
		double double_8 = 1;
		float float_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_7 = 1;
		double double_11 = 1;
		double double_12 = 1;
		unsigned_int_4 = unsigned_int_4;
		double_3 = sqrt ( double_12 ) ;
	}
	double_13 = sqrt ( double_2 ) ;
	long_1 = long_4 * long_1;
}
void endprog( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_1 * double_2;
}
char print_dcstring()
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	double double_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_7 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float_1 = get_string();

	double_1 = tanh ( double_2 ) ;
	int_2 = int_1 * int_2;
	double_4 = double_3 * double_3;
	float_2 = float_1 * float_1;
	if(1)
	{
		return char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_2 = 1;
		char char_1 = 1;
		double double_6 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_2 = 1;
			char char_1 = 1;
			double double_6 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			double double_7 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_5 = double_2;
			double_6 = atan ( double_2 ) ;
			double_7 = tanh ( double_8 ) ;
		}
		if(1)
		{
			if(1)
			{
				double_1 = fabs ( double_2 ) ;
			}
			else
			{
				unsigned_int_1 = unsigned_int_1;
			}
			double_2 = ceil ( double_8 ) ;
			int_1 = int_2;
		}
		if(1)
		{
		}
		if(1)
		{
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_2 = 1;
			char char_1 = 1;
			double double_6 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			double double_7 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double_6 = tanh ( double_9 ) ;
		}
		else
		{
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			float float_2 = 1;
			char char_1 = 1;
			double double_6 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_5 = 1;
			double double_7 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		}
	}
}
float dc_ltoa( long parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	short short_1 = 1;
	short short_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_5 = 1;
	float float_2 = 1;
	short short_2 = 1;
	short short_4 = 1;
	int int_3 = 1;
	float float_3 = 1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1;
	int_1 = int_2 * int_1;
	double_3 = double_3 + double_2;
	double_3 = cosh ( double_3 ) ;
	double_3 = exp ( double_4 ) ;
	long_1 = long_2;
	double_5 = fmod ( double_2 , double_1 ) ;
	long_2 = long_2;
	double_5 = log ( double_3 ) ;
	double_6 = asin ( double_4 ) ;
	double_4 = tan ( double_7 ) ;
	if(1)
	{
		double_4 = cos ( double_8 ) ;
		int_1 = int_1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_5 = 1;
			float float_2 = 1;
			short short_2 = 1;
			short short_4 = 1;
			int int_3 = 1;
			float float_3 = 1;
			short_1 = short_2;
			double_4 = fabs ( double_8 ) ;
			short_4 = short_3 + short_2;
			double_1 = atan ( double_4 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_5 = 1;
			float float_2 = 1;
			short short_2 = 1;
			short short_4 = 1;
			int int_3 = 1;
			float float_3 = 1;
			int_4 = int_1 * int_3;
		}
	}
	if(1)
	{
		double_7 = tan ( double_8 ) ;
	}
	if(1)
	{
		double_5 = exp ( double_2 ) ;
		return float_1;
	}
	if(1)
	{
		double_5 = atan2 ( double_5 , double_8 ) ;
	}
	if(1)
	{
		double_7 = sqrt ( double_6 ) ;
	}
	else
	{
		double_7 = atan2 ( double_1 , double_3 ) ;
	}
	double_4 = tanh ( double_5 ) ;
	if(1)
	{
		short_3 = short_1;
	}
	double_1 = fabs ( double_8 ) ;
	if(1)
	{
		double_3 = sqrt ( double_6 ) ;
	}
	unsigned_int_1 = unsigned_int_2;
	int_5 = int_4 * int_4;
	if(1)
	{
		if(1)
		{
			double_1 = fmod ( double_3 , double_1 ) ;
			double_8 = log10 ( double_3 ) ;
			return float_1;
		}
		if(1)
		{
			double_5 = asin ( double_4 ) ;
			unsigned_int_1 = unsigned_int_1;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				if(1)
				{
					double double_1 = 1;
					double double_2 = 1;
					unsigned int unsigned_int_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					long long_1 = 1;
					long long_2 = 1;
					double double_5 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_8 = 1;
					short short_1 = 1;
					short short_3 = 1;
					int int_4 = 1;
					float float_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_5 = 1;
					float float_2 = 1;
					short short_2 = 1;
					short short_4 = 1;
					int int_3 = 1;
					float float_3 = 1;
					short_3 = short_3;
					float_2 = float_2 * float_3;
					return float_2;
				}
			}
		}
	}
}
double print_dstring()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_8 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double_2 = double_1 + double_1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_2 = ceil ( double_3 ) ;
	double_1 = double_4 + double_3;
	if(1)
	{
		return double_5;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_8 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		if(1)
		{
			double_3 = cosh ( double_6 ) ;
			if(1)
			{
				double_2 = cos ( double_6 ) ;
				double_2 = atan ( double_7 ) ;
			}
			else
			{
				double_5 = ldexp ( double_7 , int_1 ) ;
			}
			double_2 = pow ( double_5 , double_6 ) ;
			double_6 = sqrt ( double_4 ) ;
		}
		if(1)
		{
		}
		if(1)
		{
			double_2 = tan ( double_4 ) ;
		}
		if(1)
		{
			double_7 = floor ( double_3 ) ;
		}
		if(1)
		{
			double_5 = sqrt ( double_1 ) ;
			int_1 = int_2 * int_1;
		}
		if(1)
		{
			int_2 = int_1;
			double_2 = log ( double_1 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_1 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_8 = 1;
			int int_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int_1 = int_2 * int_3;
			double_8 = cos ( double_6 ) ;
		}
		else
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_1 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_8 = 1;
			int int_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_1;
			double_7 = tan ( double_8 ) ;
			double_6 = sqrt ( double_5 ) ;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_8 = fmod ( double_7 , double_4 ) ;
			}
		}
	}
	float_1 = get_string();

}
double print_string()
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	float float_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double_1 = fmod ( double_1 , double_2 ) ;
	float_1 = float_2;
	double_3 = sqrt ( double_4 ) ;
	char_1 = char_1;
	if(1)
	{
		return double_4;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		float float_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		double double_7 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_3 = 1;
		double double_6 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		if(1)
		{
			short_1 = short_1;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				char char_1 = 1;
				float float_4 = 1;
				short short_1 = 1;
				double double_5 = 1;
				double double_7 = 1;
				char char_2 = 1;
				char char_3 = 1;
				float float_3 = 1;
				double double_6 = 1;
				double double_8 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				char_3 = char_1 + char_2;
				float_1 = float_3;
			}
			else
			{
				double_4 = exp ( double_1 ) ;
			}
			double_3 = atan ( double_4 ) ;
		}
		if(1)
		{
			if(1)
			{
				double_4 = atan ( double_5 ) ;
			}
			else
			{
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				char char_1 = 1;
				float float_4 = 1;
				short short_1 = 1;
				double double_5 = 1;
				double double_7 = 1;
				char char_2 = 1;
				char char_3 = 1;
				float float_3 = 1;
				double double_6 = 1;
				double double_8 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				double_6 = atan ( double_7 ) ;
			}
			double_2 = tanh ( double_1 ) ;
		}
		if(1)
		{
		}
		if(1)
		{
			double_4 = sinh ( double_2 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			float float_4 = 1;
			short short_1 = 1;
			double double_5 = 1;
			double double_7 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_3 = 1;
			double double_6 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			double_7 = acos ( double_8 ) ;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			float float_4 = 1;
			short short_1 = 1;
			double double_5 = 1;
			double double_7 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_3 = 1;
			double double_6 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
			double_5 = asin ( double_5 ) ;
			float_1 = float_4 + float_1;
			float_4 = get_string();

			short_2 = short_1 * short_2;
		}
		else
		{
			double_1 = asin ( double_5 ) ;
		}
	}
}
int loaddll( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double_1 = log ( double_1 ) ;
	double_2 = ldexp ( double_3 , int_1 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		short_2 = short_1 + short_2;
		short_4 = short_1 + short_3;
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_3 * double_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		char_2 = char_1 * char_2;
		float_1 = float_1 * float_1;
	}
	return int_1;
}
float compile_and_run()
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	double double_5 = 1;
	long long_1 = 1;
	double_1 = exp ( double_2 ) ;
	double_2 = double_3 * double_2;
	short_1 = short_1;
	if(1)
	{
		double_3 = floor ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		if(1)
		{
			double_3 = floor ( double_1 ) ;
		}
		double_3 = acos ( double_4 ) ;
		float_2 = float_1 + float_1;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_2 = 1;
		double double_5 = 1;
		long long_1 = 1;
		if(1)
		{
			float_3 = float_1 * float_1;
		}
		double_5 = pow ( double_6 , double_7 ) ;
		int_1 = loaddll(int_2);

		double_5 = tan ( double_4 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			float float_1 = 1;
			float float_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_8 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_2 = 1;
			double double_5 = 1;
			long long_1 = 1;
			long_1 = long_1;
			long_1 = long_1;
		}
	}
	if(1)
	{
		int_1 = int_1 + int_3;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		if(1)
		{
			float_1 = float_3 + float_3;
			double_1 = atan2 ( double_4 , double_8 ) ;
		}
	}
	else
	{
		if(1)
		{
			if(1)
			{
				unsigned_int_2 = unsigned_int_2;
			}
			short_1 = short_1;
		}
		double_1 = double_2;
		double_6 = ceil ( double_7 ) ;
	}
	unsigned_int_1 = unsigned_int_3;
	int_2 = int_2;
	double_8 = log10 ( double_6 ) ;
	short_3 = short_1 + short_2;
	double_1 = sqrt ( double_8 ) ;
	double_7 = ldexp ( double_1 , int_2 ) ;
	int_1 = int_3;
}
unsigned int compile_and_run_libtcc()
{
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int_1 = int_1;
	short_1 = short_1;
	if(1)
	{
		double_1 = cosh ( double_1 ) ;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_2;
		double_1 = cosh ( double_2 ) ;
	}
	char_1 = char_1;
	short_2 = short_3;
	double_1 = asin ( double_3 ) ;
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		int int_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
		double_4 = cosh ( double_5 ) ;
	}
	int_3 = int_3;
	long_3 = long_1 + long_2;
}
int open_ofd()
{
	double double_1 = 1;
	int int_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	double double_9 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_10 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_11 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_2 = 1;
	double_1 = ldexp ( double_1 , int_1 ) ;
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		double double_9 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_10 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_11 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_2 = 1;
		double_2 = ldexp ( double_1 , int_2 ) ;
		return int_3;
	}
	double_1 = sinh ( double_2 ) ;
	double_3 = atan2 ( double_4 , double_4 ) ;
	double_5 = atan2 ( double_6 , double_7 ) ;
	double_8 = fabs ( double_4 ) ;
	double_5 = ldexp ( double_5 , int_3 ) ;
	double_4 = atan2 ( double_3 , double_6 ) ;
	double_5 = fmod ( double_8 , double_8 ) ;
	double_9 = double_7 + double_8;
	double_8 = cos ( double_9 ) ;
	int_4 = int_5;
	unsigned_int_1 = unsigned_int_2;
	double_8 = tanh ( double_5 ) ;
	double_10 = log ( double_10 ) ;
	char_1 = char_1 + char_2;
	double_11 = pow ( double_1 , double_11 ) ;
	double_3 = acos ( double_4 ) ;
	double_10 = double_9;
	double_7 = ldexp ( double_7 , int_6 ) ;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_5 = unsigned_int_3 + unsigned_int_3;
	return int_3;
}
void qqq( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	double double_6 = 1;
	int_1 = int_1;
	if(1)
	{
	}
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double double_6 = 1;
		double_1 = pow ( double_2 , double_3 ) ;
		double_3 = atan2 ( double_4 , double_2 ) ;
		double_4 = cosh ( double_5 ) ;
		double_5 = double_1 * double_1;
		float_1 = float_2;
		int_2 = int_2 + int_1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			double double_6 = 1;
			long_1 = long_1 * long_1;
			double_2 = fabs ( double_3 ) ;
		}
		double_4 = double_1 * double_1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			double double_6 = 1;
			double_4 = cosh ( double_2 ) ;
			double_4 = exp ( double_6 ) ;
		}
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		looper_1 += 1;
		int_2 = int_2;
	}
}
char bfdowhile( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_3 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_4 = 1;
	double double_6 = 1;
	short short_4 = 1;
	short short_3 = 1;
	double double_7 = 1;
	int int_5 = 1;
	double double_9 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_7 = 1;
	long long_2 = 1;
	int int_8 = 1;
	double double_8 = 1;
	long long_3 = 1;
	double double_10 = 1;
	long long_4 = 1;
	long long_5 = 1;
	long long_1 = 1;
	short short_5 = 1;
	short short_6 = 1;
	int_1 = int_1 + int_2;
	if(1)
	{
		double_1 = sinh ( double_2 ) ;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "{e") > 0)
		{
			float_1 = float_1 * float_2;
			double_2 = ldexp ( double_1 , int_1 ) ;
		}
		double_2 = asin ( double_1 ) ;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			double_1 = double_1;
		}
		else
		{
			double_3 = pow ( double_2 , double_4 ) ;
		}
		double_3 = acos ( double_1 ) ;
		return char_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_1 = 1;
		short short_1 = 1;
		int int_3 = 1;
		float float_3 = 1;
		short short_2 = 1;
		double double_5 = 1;
		int int_4 = 1;
		double double_6 = 1;
		short short_4 = 1;
		short short_3 = 1;
		double double_7 = 1;
		int int_5 = 1;
		double double_9 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_7 = 1;
		long long_2 = 1;
		int int_8 = 1;
		double double_8 = 1;
		long long_3 = 1;
		double double_10 = 1;
		long long_4 = 1;
		long long_5 = 1;
		long long_1 = 1;
		short short_5 = 1;
		short short_6 = 1;
		short_1 = pc(int_3);

		short_1 = short_2;
		double_4 = ldexp ( double_5 , int_2 ) ;
		int_4 = int_2 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				double_3 = exp ( double_5 ) ;
				if(1)
				{
					double_5 = pow ( double_2 , double_2 ) ;
				}
			}
			if(1)
			{
				double_5 = log10 ( double_6 ) ;
			}
		}
		if(1)
		{
			double_3 = log ( double_1 ) ;
		}
		int looper_2 = 0;
		while(looper_2 < 1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_1 = 1;
			short short_1 = 1;
			int int_3 = 1;
			float float_3 = 1;
			short short_2 = 1;
			double double_5 = 1;
			int int_4 = 1;
			double double_6 = 1;
			short short_4 = 1;
			short short_3 = 1;
			double double_7 = 1;
			int int_5 = 1;
			double double_9 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_7 = 1;
			long long_2 = 1;
			int int_8 = 1;
			double double_8 = 1;
			long long_3 = 1;
			double double_10 = 1;
			long long_4 = 1;
			long long_5 = 1;
			long long_1 = 1;
			short short_5 = 1;
			short short_6 = 1;
			looper_2 += 1;
			short_3 = short_4;
		}
		int_2 = int_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_3 = int_3;
			int looper_4 = 0;
			while(looper_4 < 1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				char char_1 = 1;
				short short_1 = 1;
				int int_3 = 1;
				float float_3 = 1;
				short short_2 = 1;
				double double_5 = 1;
				int int_4 = 1;
				double double_6 = 1;
				short short_4 = 1;
				short short_3 = 1;
				double double_7 = 1;
				int int_5 = 1;
				double double_9 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_7 = 1;
				long long_2 = 1;
				int int_8 = 1;
				double double_8 = 1;
				long long_3 = 1;
				double double_10 = 1;
				long long_4 = 1;
				long long_5 = 1;
				long long_1 = 1;
				short short_5 = 1;
				short short_6 = 1;
				looper_4 += 1;
				double_3 = atan2 ( double_6 , double_7 ) ;
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					char char_1 = 1;
					short short_1 = 1;
					int int_3 = 1;
					float float_3 = 1;
					short short_2 = 1;
					double double_5 = 1;
					int int_4 = 1;
					double double_6 = 1;
					short short_4 = 1;
					short short_3 = 1;
					double double_7 = 1;
					int int_5 = 1;
					double double_9 = 1;
					int int_6 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					int int_7 = 1;
					long long_2 = 1;
					int int_8 = 1;
					double double_8 = 1;
					long long_3 = 1;
					double double_10 = 1;
					long long_4 = 1;
					long long_5 = 1;
					long long_1 = 1;
					short short_5 = 1;
					short short_6 = 1;
					unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
					double_4 = atan ( double_7 ) ;
					for(int looper_5=0; looper_5<1;looper_5++)
					{
						int_2 = int_5;
					}
					short_4 = short_2;
					int_2 = int_6;
				}
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					char char_1 = 1;
					short short_1 = 1;
					int int_3 = 1;
					float float_3 = 1;
					short short_2 = 1;
					double double_5 = 1;
					int int_4 = 1;
					double double_6 = 1;
					short short_4 = 1;
					short short_3 = 1;
					double double_7 = 1;
					int int_5 = 1;
					double double_9 = 1;
					int int_6 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					int int_7 = 1;
					long long_2 = 1;
					int int_8 = 1;
					double double_8 = 1;
					long long_3 = 1;
					double double_10 = 1;
					long long_4 = 1;
					long long_5 = 1;
					long long_1 = 1;
					short short_5 = 1;
					short short_6 = 1;
					unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
					double_1 = asin ( double_5 ) ;
					int_2 = pmc(float_3);

					int_7 = int_7 * int_4;
					int_1 = int_5;
					double_2 = double_1 * double_3;
					double_4 = tanh ( double_1 ) ;
					for(int looper_6=0; looper_6<1;looper_6++)
					{
						int int_1 = 1;
						int int_2 = 1;
						double double_1 = 1;
						double double_2 = 1;
						float float_1 = 1;
						float float_2 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_3 = 1;
						double double_4 = 1;
						char char_1 = 1;
						short short_1 = 1;
						int int_3 = 1;
						float float_3 = 1;
						short short_2 = 1;
						double double_5 = 1;
						int int_4 = 1;
						double double_6 = 1;
						short short_4 = 1;
						short short_3 = 1;
						double double_7 = 1;
						int int_5 = 1;
						double double_9 = 1;
						int int_6 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						int int_7 = 1;
						long long_2 = 1;
						int int_8 = 1;
						double double_8 = 1;
						long long_3 = 1;
						double double_10 = 1;
						long long_4 = 1;
						long long_5 = 1;
						long long_1 = 1;
						short short_5 = 1;
						short short_6 = 1;
						long_2 = long_1 + long_2;
					}
					int_3 = int_2 + int_8;
					for(int looper_7=0; looper_7<1;looper_7++)
					{
						double_6 = fabs ( double_8 ) ;
					}
					double_5 = pow ( double_2 , double_6 ) ;
					double_4 = cosh ( double_9 ) ;
					float_3 = float_1;
					int_7 = int_7 * int_5;
					long_2 = long_3 * long_3;
					double_4 = sqrt ( double_10 ) ;
					double_10 = ceil ( double_3 ) ;
					for(int looper_8=0; looper_8<1;looper_8++)
					{
						int int_1 = 1;
						int int_2 = 1;
						double double_1 = 1;
						double double_2 = 1;
						float float_1 = 1;
						float float_2 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						double double_3 = 1;
						double double_4 = 1;
						char char_1 = 1;
						short short_1 = 1;
						int int_3 = 1;
						float float_3 = 1;
						short short_2 = 1;
						double double_5 = 1;
						int int_4 = 1;
						double double_6 = 1;
						short short_4 = 1;
						short short_3 = 1;
						double double_7 = 1;
						int int_5 = 1;
						double double_9 = 1;
						int int_6 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						int int_7 = 1;
						long long_2 = 1;
						int int_8 = 1;
						double double_8 = 1;
						long long_3 = 1;
						double double_10 = 1;
						long long_4 = 1;
						long long_5 = 1;
						long long_1 = 1;
						short short_5 = 1;
						short short_6 = 1;
						short_6 = short_5 + short_2;
					}
					float_2 = float_1 * float_3;
					for(int looper_9=0; looper_9<1;looper_9++)
					{
						double_5 = double_8 + double_8;
					}
					long_5 = long_4 * long_3;
					for(int looper_10=0; looper_10<1;looper_10++)
					{
						unsigned_int_3 = unsigned_int_4;
					}
					double_8 = sqrt ( double_6 ) ;
					for(int looper_11=0; looper_11<1;looper_11++)
					{
						double_10 = asin ( double_2 ) ;
					}
					unsigned_int_4 = unsigned_int_2;
					double_7 = atan2 ( double_5 , double_7 ) ;
					double_9 = floor ( double_10 ) ;
					double_3 = acos ( double_2 ) ;
					unsigned_int_4 = unsigned_int_1;
				}
				if(1)
				{
					double_9 = atan ( double_2 ) ;
				}
			}
		}
	}
}
double hanoilove( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	if(1)
	{
		return double_1;
	}
	if(1)
	{
		return double_1;
	}
	else
	{
		return double_1;
	}
	short_1 = pc(int_1);

	int_1 = ps(int_2);

}
long malbrain( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = atan2 ( double_2 , double_3 ) ;
	if(1)
	{
		return long_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		looper_1 += 1;
		double_4 = sqrt ( double_3 ) ;
		short_1 = pc(int_1);

		double_5 = log ( double_5 ) ;
	}
	int looper_2 = 0;
	while(looper_2 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		looper_2 += 1;
		double_6 = sqrt ( double_2 ) ;
	}
}
void bfugly( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_7 = 1;
	int int_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long_1 = long_1 + long_1;
	double_1 = fmod ( double_1 , double_2 ) ;
	long_1 = long_2 * long_2;
	int_2 = int_1 + int_1;
	if(1)
	{
	}
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		int int_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_1 = cos ( double_2 ) ;
		char_1 = char_1 * char_2;
		double_1 = atan ( double_3 ) ;
		double_1 = ceil ( double_4 ) ;
		double_3 = sinh ( double_1 ) ;
		double_2 = tanh ( double_4 ) ;
		unsigned_int_1 = unsigned_int_1;
		char_3 = char_2 * char_2;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_7 = 1;
		int int_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		looper_1 += 1;
		if(1)
		{
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_7 = 1;
			int int_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long_2 = long_2 + long_1;
			if(1)
			{
				double_2 = acos ( double_2 ) ;
			}
			if(1)
			{
				long long_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				long long_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				short short_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_7 = 1;
				int int_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double_5 = sqrt ( double_6 ) ;
			}
			else
			{
				for(int looper_2=0; looper_2<1;looper_2++)
				{
					unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
				}
			}
			int_1 = int_3;
		}
		unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		short_1 = pc(int_2);

		double_7 = double_1 * double_2;
	}
}
int bfxml( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	double_1 = exp ( double_2 ) ;
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			int_1 = int_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
			}
			else
			{
				double_3 = double_1;
			}
		}
		if(1)
		{
			double_1 = ceil ( double_2 ) ;
		}
		return int_2;
	}
	if(1)
	{
		double_2 = ldexp ( double_3 , int_2 ) ;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	}
	else
	{
		double_3 = pow ( double_1 , double_1 ) ;
	}
	float_1 = printf(float_2,unsigned_int_2,long_1);

}
char bfrle( int parameter_1,int parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_2;
	int_1 = ps(int_2);

	char_1 = char_1 + char_1;
	if(1)
	{
		double_1 = fabs ( double_2 ) ;
		if(1)
		{
			return char_1;
		}
		if(1)
		{
			double_2 = exp ( double_1 ) ;
		}
		else
		{
			double_2 = cosh ( double_2 ) ;
			double_2 = sinh ( double_1 ) ;
		}
	}
	if(1)
	{
		return char_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short_1 = short_1;
		else
		{
			short_2 = pc(int_3);

			double_2 = ldexp ( double_3 , int_3 ) ;
		}
		double_1 = atan2 ( double_4 , double_4 ) ;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	else
	{
		int looper_1 = 0;
		while(looper_1 < 1)
		{
			looper_1 += 1;
			double_1 = tanh ( double_3 ) ;
		}
	}
}
float bfpackprint()
{
	double double_1 = 1;
	int int_1 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_8 = 1;
	double double_5 = 1;
	int int_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_9 = 1;
	double double_10 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	short short_5 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = cosh ( double_1 ) ;
	double_1 = cos ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_8 = 1;
		double double_5 = 1;
		int int_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_9 = 1;
		double double_10 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short short_5 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = acos ( double_2 ) ;
		double_3 = fabs ( double_4 ) ;
		double_2 = cosh ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_3 = 1;
			float float_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_8 = 1;
			double double_5 = 1;
			int int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_9 = 1;
			double double_10 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
				int looper_2 = 0;
				while(looper_2 < 1)
				{
					double double_1 = 1;
					int int_1 = 1;
					int int_3 = 1;
					float float_1 = 1;
					short short_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					double double_8 = 1;
					double double_5 = 1;
					int int_2 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_9 = 1;
					double double_10 = 1;
					short short_2 = 1;
					short short_3 = 1;
					short short_4 = 1;
					short short_5 = 1;
					long long_1 = 1;
					long long_2 = 1;
					long long_3 = 1;
					float float_2 = 1;
					float float_3 = 1;
					char char_1 = 1;
					unsigned int unsigned_int_2 = 1;
					looper_2 += 1;
					unsigned_int_1 = unsigned_int_1;
					if(1)
					{
						double_5 = exp ( double_4 ) ;
					}
					int_1 = int_2;
					double_4 = double_5 * double_4;
					if(1)
					{
						int looper_3 = 0;
						while(looper_3 < 1)
						{
							looper_3 += 1;
							int_3 = pmc(float_1);

							double_6 = cosh ( double_7 ) ;
						}
					}
					else
					{
						double double_1 = 1;
						int int_1 = 1;
						int int_3 = 1;
						float float_1 = 1;
						short short_1 = 1;
						double double_2 = 1;
						double double_3 = 1;
						double double_4 = 1;
						unsigned int unsigned_int_1 = 1;
						double double_8 = 1;
						double double_5 = 1;
						int int_2 = 1;
						double double_6 = 1;
						double double_7 = 1;
						double double_9 = 1;
						double double_10 = 1;
						short short_2 = 1;
						short short_3 = 1;
						short short_4 = 1;
						short short_5 = 1;
						long long_1 = 1;
						long long_2 = 1;
						long long_3 = 1;
						float float_2 = 1;
						float float_3 = 1;
						char char_1 = 1;
						unsigned int unsigned_int_2 = 1;
						short_1 = short_2;
						short_1 = pc(int_1);

						double_5 = double_5;
						double_5 = double_7;
						short_3 = short_3;
						int_2 = int_2;
						double_5 = exp ( double_6 ) ;
						for(int looper_4=0; looper_4<1;looper_4++)
						{
							double_4 = log ( double_8 ) ;
						}
						short_4 = short_5;
						for(int looper_5=0; looper_5<1;looper_5++)
						{
							double_6 = acos ( double_2 ) ;
						}
						double_6 = atan2 ( double_7 , double_2 ) ;
						long_3 = long_1 * long_2;
						for(int looper_6=0; looper_6<1;looper_6++)
						{
							double_3 = floor ( double_8 ) ;
						}
						for(int looper_7=0; looper_7<1;looper_7++)
						{
							double_8 = sqrt ( double_3 ) ;
						}
					}
					double_9 = atan2 ( double_1 , double_7 ) ;
					double_10 = floor ( double_8 ) ;
					double_1 = ceil ( double_2 ) ;
				}
			}
			else
			{
				int looper_8 = 0;
				while(looper_8 < 1)
				{
					looper_8 += 1;
					double_3 = tan ( double_8 ) ;
				}
			}
		}
		else
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_3 = 1;
			float float_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_8 = 1;
			double double_5 = 1;
			int int_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_9 = 1;
			double double_10 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short short_5 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_2 = 1;
			float float_3 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				int int_3 = 1;
				float float_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_8 = 1;
				double double_5 = 1;
				int int_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_9 = 1;
				double double_10 = 1;
				short short_2 = 1;
				short short_3 = 1;
				short short_4 = 1;
				short short_5 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char_1 = char_1 + char_1;
			}
			float_3 = float_2 + float_1;
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				int int_3 = 1;
				float float_1 = 1;
				short short_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_8 = 1;
				double double_5 = 1;
				int int_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_9 = 1;
				double double_10 = 1;
				short short_2 = 1;
				short short_3 = 1;
				short short_4 = 1;
				short short_5 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				float float_2 = 1;
				float float_3 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			}
		}
	}
}
unsigned int bfreprint()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 * short_1;
	double_1 = fabs ( double_2 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short_1 = short_1;
		double_2 = ceil ( double_2 ) ;
		double_3 = log10 ( double_1 ) ;
		if(1)
		{
			if(1)
			{
				int_1 = pmc(float_1);

				double_2 = atan ( double_3 ) ;
			}
			if(1)
			{
				double_1 = double_1 * double_3;
			}
			if(1)
			{
				double_2 = asin ( double_3 ) ;
				double_4 = log ( double_2 ) ;
			}
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				double_1 = cosh ( double_3 ) ;
			}
		}
		else
		{
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			if(1)
			{
				int_1 = int_1;
			}
			int_2 = int_3;
			if(1)
			{
				short_1 = pc(int_1);

				double_4 = log10 ( double_4 ) ;
			}
		}
	}
}
int bftranslate( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	char char_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_4 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_4 = 1;
	double double_8 = 1;
	int int_6 = 1;
	double double_9 = 1;
	double double_10 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_11 = 1;
	double double_13 = 1;
	int int_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_14 = 1;
	char char_5 = 1;
	double double_15 = 1;
	int_1 = int_1;
	if(1)
	{
		if(1)
		{
			double_1 = atan2 ( double_1 , double_1 ) ;
			if(1)
			{
				int int_1 = 1;
				double double_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_2 = 1;
				long long_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_3 = 1;
				char char_3 = 1;
				double double_4 = 1;
				int int_3 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_4 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_6 = 1;
				double double_7 = 1;
				float float_4 = 1;
				double double_8 = 1;
				int int_6 = 1;
				double double_9 = 1;
				double double_10 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double double_11 = 1;
				double double_13 = 1;
				int int_5 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_4 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_14 = 1;
				char char_5 = 1;
				double double_15 = 1;
				unsigned_int_1 = unsigned_int_2;
				int_1 = int_2;
			}
			char_1 = char_2;
			double_1 = log10 ( double_2 ) ;
			if(1)
			{
				float_1 = float_2;
			}
			else
			{
				int int_1 = 1;
				double double_1 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_2 = 1;
				long long_3 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_3 = 1;
				char char_3 = 1;
				double double_4 = 1;
				int int_3 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_4 = 1;
				float float_3 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_6 = 1;
				double double_7 = 1;
				float float_4 = 1;
				double double_8 = 1;
				int int_6 = 1;
				double double_9 = 1;
				double double_10 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double double_11 = 1;
				double double_13 = 1;
				int int_5 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_4 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_14 = 1;
				char char_5 = 1;
				double double_15 = 1;
				long_1 = long_1 + long_1;
			}
			long_3 = long_2 * long_2;
		}
		else
		{
			if(1)
			{
				short_1 = short_2;
			}
			if(1)
			{
				double_2 = tan ( double_2 ) ;
			}
			if(1)
			{
				double_3 = ceil ( double_2 ) ;
				char_1 = char_3;
			}
			if(1)
			{
				double_4 = ceil ( double_3 ) ;
			}
			if(1)
			{
				int looper_1 = 0;
				while(looper_1 < 1)
				{
					looper_1 += 1;
					double_2 = ceil ( double_4 ) ;
				}
			}
			else
			{
				int_1 = int_3 + int_3;
			}
			if(1)
			{
				double_3 = tanh ( double_1 ) ;
			}
		}
		return int_3;
	}
	char controller_11[5];
	fgets(controller_11 ,5 ,stdin);
	if( strcmp( controller_11, "`RdB") < 0)
	{
		if(1)
		{
			double_1 = double_4 * double_1;
		}
		if(1)
		{
			double_5 = ceil ( double_5 ) ;
		}
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		char char_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_4 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_4 = 1;
		double double_8 = 1;
		int int_6 = 1;
		double double_9 = 1;
		double double_10 = 1;
		long long_5 = 1;
		long long_6 = 1;
		double double_11 = 1;
		double double_13 = 1;
		int int_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_4 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_14 = 1;
		char char_5 = 1;
		double double_15 = 1;
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			char char_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_4 = 1;
			double double_8 = 1;
			int int_6 = 1;
			double double_9 = 1;
			double double_10 = 1;
			long long_5 = 1;
			long long_6 = 1;
			double double_11 = 1;
			double double_13 = 1;
			int int_5 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_4 = 1;
			double double_12 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double double_15 = 1;
			int_1 = int_1 + int_3;
			double_5 = fabs ( double_5 ) ;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
			double_2 = ldexp ( double_1 , int_1 ) ;
			double_1 = sqrt ( double_6 ) ;
			double_6 = cosh ( double_6 ) ;
			double_4 = tanh ( double_1 ) ;
			int_4 = pmc(float_3);

			int_4 = int_4;
			double_1 = fmod ( double_5 , double_5 ) ;
			double_3 = floor ( double_6 ) ;
			double_1 = tanh ( double_5 ) ;
			short_2 = short_1 * short_1;
			double_3 = asin ( double_3 ) ;
			double_6 = log ( double_7 ) ;
			double_5 = ldexp ( double_1 , int_5 ) ;
			double_2 = tanh ( double_6 ) ;
			float_4 = float_2;
			double_1 = sqrt ( double_3 ) ;
			if(1)
			{
				double_7 = floor ( double_3 ) ;
			}
			else
			{
				double_1 = sqrt ( double_4 ) ;
			}
			double_5 = double_7;
			double_4 = log10 ( double_3 ) ;
			double_2 = double_8;
			double_7 = exp ( double_6 ) ;
			double_2 = double_5 + double_8;
			double_5 = asin ( double_7 ) ;
			double_5 = log10 ( double_6 ) ;
			long_2 = long_4;
			unsigned_int_4 = unsigned_int_4 * unsigned_int_5;
			char_4 = char_1;
			unsigned_int_4 = bfreprint();

			double_7 = atan ( double_1 ) ;
		}
		if(1)
		{
			double_1 = double_4 + double_3;
		}
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			char char_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_4 = 1;
			double double_8 = 1;
			int int_6 = 1;
			double double_9 = 1;
			double double_10 = 1;
			long long_5 = 1;
			long long_6 = 1;
			double double_11 = 1;
			double double_13 = 1;
			int int_5 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_4 = 1;
			double double_12 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double double_15 = 1;
			double_4 = cos ( double_1 ) ;
			double_3 = tanh ( double_1 ) ;
			short_1 = short_1 * short_2;
			double_4 = double_1 * double_1;
			float_1 = float_4 + float_2;
			int_6 = int_4;
			double_9 = sinh ( double_4 ) ;
			short_2 = short_1;
			float_3 = float_4 * float_1;
			double_6 = log10 ( double_4 ) ;
			double_2 = sinh ( double_4 ) ;
			double_9 = atan ( double_2 ) ;
			double_6 = double_10;
			double_6 = ldexp ( double_1 , int_1 ) ;
			float_1 = bfpackprint();

			double_10 = double_8 * double_5;
			long_5 = long_6;
			if(1)
			{
				long_6 = long_3;
			}
			else
			{
				if(1)
				{
					long_3 = long_3;
				}
				if(1)
				{
					double_2 = tanh ( double_11 ) ;
				}
				double_9 = atan ( double_3 ) ;
			}
			double_12 = atan ( double_2 ) ;
			double_4 = atan2 ( double_10 , double_13 ) ;
		}
		else
		{
			int int_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			char char_3 = 1;
			double double_4 = 1;
			int int_3 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_4 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_4 = 1;
			double double_8 = 1;
			int int_6 = 1;
			double double_9 = 1;
			double double_10 = 1;
			long long_5 = 1;
			long long_6 = 1;
			double double_11 = 1;
			double double_13 = 1;
			int int_5 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_4 = 1;
			double double_12 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_14 = 1;
			char char_5 = 1;
			double double_15 = 1;
			double_10 = double_4;
			float_3 = float_1 + float_1;
			double_2 = exp ( double_11 ) ;
			short_1 = pc(int_4);

			double_13 = cosh ( double_1 ) ;
			int_6 = int_4 + int_3;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
			double_3 = log ( double_5 ) ;
			double_11 = pow ( double_7 , double_9 ) ;
			double_14 = log ( double_4 ) ;
			long_5 = long_3 * long_6;
			double_6 = asin ( double_9 ) ;
			char_5 = char_2 + char_3;
			double_9 = sinh ( double_6 ) ;
			double_15 = floor ( double_9 ) ;
			double_10 = sqrt ( double_5 ) ;
			double_9 = cosh ( double_7 ) ;
		}
	}
}
float headsecks( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_6 = 1;
	char char_1 = 1;
	double_1 = pow ( double_1 , double_2 ) ;
	double_1 = floor ( double_1 ) ;
	double_5 = double_3 * double_4;
	if(1)
	{
		double_4 = ldexp ( double_2 , int_1 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			float float_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float float_2 = 1;
			int int_2 = 1;
			double double_6 = 1;
			char char_1 = 1;
			long_1 = long_2;
		}
	}
	if(1)
	{
		return float_1;
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		int int_2 = 1;
		double double_6 = 1;
		char char_1 = 1;
		looper_1 += 1;
		double_1 = cosh ( double_1 ) ;
		float_1 = float_1 + float_2;
		short_1 = pc(int_1);

		double_2 = fmod ( double_4 , double_2 ) ;
		double_5 = tan ( double_1 ) ;
		double_2 = floor ( double_3 ) ;
		if(1)
		{
			double_3 = ceil ( double_2 ) ;
		}
		int_2 = int_1 * int_1;
		double_6 = fabs ( double_4 ) ;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_1 = 1;
			float float_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float float_2 = 1;
			int int_2 = 1;
			double double_6 = 1;
			char char_1 = 1;
			char_1 = char_1;
		}
		int_1 = int_2 + int_1;
	}
}
float tinybf( int parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	short short_3 = 1;
	double double_9 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_11 = 1;
	char char_1 = 1;
	double double_12 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	double double_13 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_3 = 1;
	double double_14 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_2 = 1;
	short short_4 = 1;
	int int_4 = 1;
	char char_2 = 1;
	double_1 = pow ( double_1 , double_1 ) ;
	double_1 = tanh ( double_2 ) ;
	double_3 = ceil ( double_2 ) ;
	float_1 = float_1 * float_2;
	double_4 = acos ( double_4 ) ;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	double_2 = double_4;
	double_2 = tanh ( double_5 ) ;
	double_3 = exp ( double_6 ) ;
	double_3 = asin ( double_6 ) ;
	double_5 = ceil ( double_2 ) ;
	double_7 = fmod ( double_6 , double_1 ) ;
	double_8 = ldexp ( double_3 , int_1 ) ;
	int_1 = int_2 + int_2;
	double_7 = tanh ( double_1 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			if(1)
			{
				short_1 = pc(int_1);

				double_1 = exp ( double_4 ) ;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				int int_3 = 1;
				short short_3 = 1;
				double double_9 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_11 = 1;
				char char_1 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				double double_13 = 1;
				char char_4 = 1;
				char char_5 = 1;
				float float_3 = 1;
				double double_14 = 1;
				unsigned int unsigned_int_4 = 1;
				short short_2 = 1;
				short short_4 = 1;
				int int_4 = 1;
				char char_2 = 1;
				short_2 = short_2 + short_2;
			}
			if(1)
			{
				int_1 = int_3 + int_3;
			}
			if(1)
			{
				double_8 = asin ( double_2 ) ;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				int int_3 = 1;
				short short_3 = 1;
				double double_9 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_11 = 1;
				char char_1 = 1;
				double double_12 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_3 = 1;
				double double_13 = 1;
				char char_4 = 1;
				char char_5 = 1;
				float float_3 = 1;
				double double_14 = 1;
				unsigned int unsigned_int_4 = 1;
				short short_2 = 1;
				short short_4 = 1;
				int int_4 = 1;
				char char_2 = 1;
				short_4 = short_3 + short_1;
			}
			if(1)
			{
				double_4 = exp ( double_2 ) ;
				double_8 = ceil ( double_1 ) ;
			}
		}
		else
		{
			float_1 = float_2;
		}
	}
	double_4 = pow ( double_9 , double_9 ) ;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		int int_3 = 1;
		short short_3 = 1;
		double double_9 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_11 = 1;
		char char_1 = 1;
		double double_12 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		double double_13 = 1;
		char char_4 = 1;
		char char_5 = 1;
		float float_3 = 1;
		double double_14 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_2 = 1;
		short short_4 = 1;
		int int_4 = 1;
		char char_2 = 1;
		int_2 = int_2;
		double_9 = fmod ( double_4 , double_6 ) ;
		double_10 = atan2 ( double_2 , double_10 ) ;
		double_1 = double_9;
		int_4 = int_3 * int_4;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
		double_7 = exp ( double_11 ) ;
		double_5 = log10 ( double_1 ) ;
		char_1 = char_1 * char_1;
		double_4 = tan ( double_10 ) ;
		char_2 = char_1 * char_1;
	}
	double_2 = fmod ( double_6 , double_7 ) ;
	unsigned_int_2 = unsigned_int_2;
	float_1 = float_2 + float_1;
	if(1)
	{
		double_12 = sinh ( double_11 ) ;
	}
	else
	{
		double_11 = log10 ( double_6 ) ;
	}
	double_12 = pow ( double_9 , double_4 ) ;
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		double_1 = ldexp ( double_2 , int_1 ) ;
		short_1 = short_3;
	}
	char_3 = char_3;
	if(1)
	{
		double_10 = atan2 ( double_2 , double_7 ) ;
		double_3 = exp ( double_10 ) ;
	}
	double_7 = floor ( double_2 ) ;
	double_3 = atan ( double_4 ) ;
	double_10 = pow ( double_13 , double_10 ) ;
	char_4 = char_1;
	unsigned_int_2 = unsigned_int_3;
	char_5 = char_5;
	double_4 = cosh ( double_13 ) ;
	double_2 = double_13 * double_1;
	double_6 = floor ( double_3 ) ;
	double_8 = sqrt ( double_7 ) ;
	double_4 = floor ( double_1 ) ;
	int_1 = int_3;
	double_10 = double_9 * double_10;
	float_3 = float_1 * float_1;
	double_14 = log ( double_5 ) ;
	unsigned_int_4 = unsigned_int_2 + unsigned_int_4;
	double_13 = cosh ( double_9 ) ;
	double_11 = double_3 + double_6;
	return float_1;
}
char risbf( int parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short_1 = pc(int_1);

	float_1 = float_2;
	double_1 = log ( double_2 ) ;
}
int pmc( float parameter_1)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		short short_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		looper_1 += 1;
		short_1 = pc(int_1);

		double_1 = ldexp ( double_1 , int_2 ) ;
	}
}
short pc( int parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	if(1)
	{
		if(1)
		{
			double_1 = double_1 * double_1;
		}
		if(1)
		{
			float_1 = float_1;
		}
		else
		{
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double_1 = sqrt ( double_2 ) ;
			int looper_1 = 0;
			while(looper_1 < 1)
			{
				double double_1 = 1;
				float float_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				looper_1 += 1;
				double_1 = atan ( double_2 ) ;
				int_1 = int_1 + int_1;
			}
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				double double_1 = 1;
				float float_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_2 = 1;
				double double_5 = 1;
				double double_6 = 1;
				looper_2 += 1;
				double_3 = tan ( double_4 ) ;
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
			unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
			double_4 = double_2;
		}
		return short_1;
	}
	if(1)
	{
		if(1)
		{
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			float_1 = float_2;
		}
		double_1 = fabs ( double_2 ) ;
		double_4 = fmod ( double_1 , double_2 ) ;
		if(1)
		{
			double_4 = pow ( double_4 , double_3 ) ;
		}
	}
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double_5 = sqrt ( double_1 ) ;
		if(1)
		{
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double_6 = fmod ( double_3 , double_5 ) ;
		}
	}
}
int ps( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	short short_3 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_2 = 1;
	long long_2 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double_1 = tan ( double_1 ) ;
	double_2 = sinh ( double_3 ) ;
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		int int_3 = 1;
		short short_3 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_2 = 1;
		long long_2 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		looper_1 += 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			int int_3 = 1;
			short short_3 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_2 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			float_1 = printf(float_2,unsigned_int_1,long_1);

			double_3 = double_1;
			int_1 = int_2;
		}
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			int int_3 = 1;
			short short_3 = 1;
			int int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_2 = 1;
			long long_2 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double_2 = floor ( double_2 ) ;
			if(1)
			{
				short_1 = short_2;
				double_1 = cos ( double_1 ) ;
			}
			if(1)
			{
				double_1 = exp ( double_3 ) ;
			}
			int_1 = int_1 * int_3;
			if(1)
			{
				float_1 = float_2 * float_2;
			}
			double_3 = ceil ( double_2 ) ;
			long_2 = long_1;
			double_3 = double_4;
		}
		if(1)
		{
			double_2 = pow ( double_1 , double_1 ) ;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				int int_3 = 1;
				short short_3 = 1;
				int int_1 = 1;
				short short_1 = 1;
				short short_2 = 1;
				int int_2 = 1;
				long long_2 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double_5 = fmod ( double_3 , double_6 ) ;
			}
			double_3 = sqrt ( double_2 ) ;
		}
		else
		{
			short_1 = short_2 * short_2;
		}
	}
	short_3 = pc(int_3);

}
char new_print_cstring()
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	double double_6 = 1;
	double double_7 = 1;
	float float_2 = 1;
	double double_8 = 1;
	long long_1 = 1;
	double double_5 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	double double_9 = 1;
	double double_10 = 1;
	double double_11 = 1;
	int_2 = int_1 + int_2;
	double_1 = sinh ( double_2 ) ;
	double_1 = ceil ( double_2 ) ;
	double_1 = exp ( double_1 ) ;
	if(1)
	{
		return char_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_4 = 1;
		float float_5 = 1;
		long long_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		double double_6 = 1;
		double double_7 = 1;
		float float_2 = 1;
		double double_8 = 1;
		long long_1 = 1;
		double double_5 = 1;
		long long_3 = 1;
		short short_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		double double_9 = 1;
		double double_10 = 1;
		double double_11 = 1;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_2 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_3 = 1;
			short short_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double_1 = double_1 + double_2;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_4 = 1;
				float float_5 = 1;
				long long_4 = 1;
				double double_3 = 1;
				double double_4 = 1;
				long long_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				float float_2 = 1;
				double double_8 = 1;
				long long_1 = 1;
				double double_5 = 1;
				long long_3 = 1;
				short short_1 = 1;
				char char_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_3 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double_3 = tanh ( double_4 ) ;
				short_1 = short_1;
				double_1 = double_3;
			}
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				char char_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_4 = 1;
				float float_5 = 1;
				long long_4 = 1;
				double double_3 = 1;
				double double_4 = 1;
				long long_2 = 1;
				double double_6 = 1;
				double double_7 = 1;
				float float_2 = 1;
				double double_8 = 1;
				long long_1 = 1;
				double double_5 = 1;
				long long_3 = 1;
				short short_1 = 1;
				char char_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_1 = 1;
				float float_3 = 1;
				double double_9 = 1;
				double double_10 = 1;
				double double_11 = 1;
				char_2 = char_1;
				long_1 = long_2;
			}
			else
			{
				double_5 = acos ( double_5 ) ;
				double_6 = atan ( double_2 ) ;
			}
			double_7 = double_7 + double_5;
			long_1 = long_3 * long_1;
		}
		if(1)
		{
		}
		if(1)
		{
			float_1 = float_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_2 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_3 = 1;
			short short_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			int_1 = int_3 * int_4;
		}
		if(1)
		{
			long_2 = long_2 + long_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_2 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_3 = 1;
			short short_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double_3 = sinh ( double_4 ) ;
			unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_2 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_3 = 1;
			short short_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			float_1 = get_string();

			float_3 = float_2 * float_2;
			double_8 = cos ( double_7 ) ;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_2 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_3 = 1;
			short short_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double_8 = asin ( double_8 ) ;
			float_4 = printf(float_5,unsigned_int_2,long_4);

			double_9 = double_4 * double_3;
		}
		else
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_2 = 1;
			double double_6 = 1;
			double double_7 = 1;
			float float_2 = 1;
			double double_8 = 1;
			long long_1 = 1;
			double double_5 = 1;
			long long_3 = 1;
			short short_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_3 = 1;
			double double_9 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double_1 = sqrt ( double_1 ) ;
			double_2 = floor ( double_10 ) ;
			double_10 = ceil ( double_11 ) ;
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				double_3 = cosh ( double_6 ) ;
			}
		}
	}
}
short cell( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double_1 = cos ( double_2 ) ;
	if(1)
	{
		return short_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		long_1 = long_1;
	}
	else
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double_3 = fmod ( double_2 , double_3 ) ;
	}
	return short_1;
}
float move_opt( int parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_4 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	int int_1 = 1;
	char char_1 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_4 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float_2 = float_1 + float_1;
		double_1 = double_2;
		short_1 = short_2;
		double_1 = ceil ( double_3 ) ;
		float_1 = float_2;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_4 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			int int_1 = 1;
			char char_1 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			double_1 = exp ( double_3 ) ;
			return float_2;
		}
		if(1)
		{
			double_1 = fmod ( double_4 , double_3 ) ;
			double_2 = double_2;
			return float_1;
		}
		double_3 = fabs ( double_1 ) ;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_4 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			int int_1 = 1;
			char char_1 = 1;
			double_5 = floor ( double_5 ) ;
			double_3 = ceil ( double_3 ) ;
			double_5 = sqrt ( double_4 ) ;
			double_2 = double_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_4 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			int int_1 = 1;
			char char_1 = 1;
			double_6 = sinh ( double_3 ) ;
			double_6 = fmod ( double_1 , double_4 ) ;
			double_7 = log10 ( double_1 ) ;
			unsigned_int_4 = unsigned_int_3 + unsigned_int_3;
			short_2 = short_3;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_4 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			int int_1 = 1;
			char char_1 = 1;
			int_1 = int_1;
			char_1 = char_1;
		}
	}
	else
	{
		if(1)
		{
			double_4 = tanh ( double_1 ) ;
		}
		float_2 = float_1 + float_1;
	}
}
float print_cstring( char parameter_1)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller_1[4];
	fgets(controller_1 ,4 ,stdin);
	if( strcmp( controller_1, "I0E") < 0)
	{
		return float_1;
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float_1 = printf(float_1,unsigned_int_1,long_1);

		double_1 = double_1 + double_1;
		double_2 = pow ( double_1 , double_2 ) ;
	}
}
char loutcmd( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_5 = 1;
	float float_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_7 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	double double_8 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_9 = 1;
	long long_3 = 1;
	char char_4 = 1;
	double double_10 = 1;
	double double_11 = 1;
	long long_4 = 1;
	int int_2 = 1;
	double double_12 = 1;
	int int_3 = 1;
	double double_13 = 1;
	double double_14 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_5 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_15 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_7 = 1;
	long long_8 = 1;
	double double_16 = 1;
	int int_7 = 1;
	double double_18 = 1;
	double double_19 = 1;
	float float_8 = 1;
	int int_6 = 1;
	double double_17 = 1;
	int int_8 = 1;
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_5 = 1;
		float float_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_7 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		double double_8 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_9 = 1;
		long long_3 = 1;
		char char_4 = 1;
		double double_10 = 1;
		double double_11 = 1;
		long long_4 = 1;
		int int_2 = 1;
		double double_12 = 1;
		int int_3 = 1;
		double double_13 = 1;
		double double_14 = 1;
		long long_5 = 1;
		long long_6 = 1;
		char char_5 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_15 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_7 = 1;
		long long_8 = 1;
		double double_16 = 1;
		int int_7 = 1;
		double double_18 = 1;
		double double_19 = 1;
		float float_8 = 1;
		int int_6 = 1;
		double double_17 = 1;
		int int_8 = 1;
		float_1 = float_2;
		double_1 = sinh ( double_2 ) ;
		float_4 = float_3 + float_1;
		double_3 = exp ( double_3 ) ;
		double_4 = double_4;
		long_1 = long_1 + long_2;
		char_3 = char_1 + char_2;
		double_3 = double_1;
		unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
		double_2 = sinh ( double_5 ) ;
		double_2 = tan ( double_6 ) ;
		float_5 = float_6;
		double_3 = floor ( double_2 ) ;
		double_1 = exp ( double_2 ) ;
		double_3 = tan ( double_7 ) ;
		double_1 = acos ( double_2 ) ;
		unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
		double_1 = double_2 + double_1;
		long_2 = long_1;
		double_2 = asin ( double_1 ) ;
		char_3 = char_3 + char_2;
		float_7 = printf(float_2,unsigned_int_4,long_1);

		double_6 = ldexp ( double_5 , int_1 ) ;
		double_4 = sinh ( double_4 ) ;
		double_1 = double_5 * double_6;
		double_3 = atan ( double_2 ) ;
		double_8 = double_1 * double_1;
		short_2 = short_1 * short_2;
		double_5 = log10 ( double_4 ) ;
		double_8 = double_9 + double_2;
	}
	if(1)
	{
		{
			double_4 = cos ( double_4 ) ;
			long_2 = long_3;
			unsigned_int_1 = unsigned_int_4;
			double_8 = fabs ( double_2 ) ;
			char_2 = char_2 + char_4;
			double_8 = fmod ( double_1 , double_3 ) ;
		}
	}
	else
	{
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			float float_5 = 1;
			float float_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_7 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_9 = 1;
			long long_3 = 1;
			char char_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			long long_4 = 1;
			int int_2 = 1;
			double double_12 = 1;
			int int_3 = 1;
			double double_13 = 1;
			double double_14 = 1;
			long long_5 = 1;
			long long_6 = 1;
			char char_5 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_7 = 1;
			long long_8 = 1;
			double double_16 = 1;
			int int_7 = 1;
			double double_18 = 1;
			double double_19 = 1;
			float float_8 = 1;
			int int_6 = 1;
			double double_17 = 1;
			int int_8 = 1;
			double_10 = log10 ( double_11 ) ;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			double_1 = cos ( double_4 ) ;
			long_1 = long_4 * long_3;
			double_1 = pow ( double_5 , double_5 ) ;
			double_1 = ldexp ( double_1 , int_1 ) ;
			double_2 = double_9;
			unsigned_int_2 = unsigned_int_1;
			unsigned_int_2 = unsigned_int_5 * unsigned_int_4;
			int_2 = int_1;
			double_2 = cos ( double_5 ) ;
			int_1 = int_2;
			double_6 = cosh ( double_12 ) ;
			double_8 = asin ( double_2 ) ;
			double_3 = pow ( double_10 , double_3 ) ;
			int_2 = int_3 * int_1;
			double_4 = asin ( double_5 ) ;
			int_1 = int_1 * int_2;
			double_9 = exp ( double_3 ) ;
			double_11 = fabs ( double_13 ) ;
			double_3 = atan ( double_1 ) ;
			double_13 = fabs ( double_11 ) ;
			short_1 = short_1;
			short_2 = short_1;
			double_3 = log ( double_7 ) ;
			unsigned_int_5 = unsigned_int_3 + unsigned_int_6;
			double_5 = double_3;
			double_11 = ceil ( double_11 ) ;
			double_11 = pow ( double_3 , double_4 ) ;
			double_8 = double_7;
			double_3 = log ( double_7 ) ;
			double_7 = fabs ( double_13 ) ;
			short_1 = short_2 + short_2;
			double_1 = double_5;
			char_3 = char_1 + char_4;
			double_10 = fabs ( double_2 ) ;
			double_12 = sinh ( double_1 ) ;
			double_14 = cos ( double_12 ) ;
			double_4 = sinh ( double_6 ) ;
			long_6 = long_1 + long_5;
		}
	}
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_5 = 1;
		float float_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_7 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		double double_8 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_9 = 1;
		long long_3 = 1;
		char char_4 = 1;
		double double_10 = 1;
		double double_11 = 1;
		long long_4 = 1;
		int int_2 = 1;
		double double_12 = 1;
		int int_3 = 1;
		double double_13 = 1;
		double double_14 = 1;
		long long_5 = 1;
		long long_6 = 1;
		char char_5 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_15 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_7 = 1;
		long long_8 = 1;
		double double_16 = 1;
		int int_7 = 1;
		double double_18 = 1;
		double double_19 = 1;
		float float_8 = 1;
		int int_6 = 1;
		double double_17 = 1;
		int int_8 = 1;
		double_9 = ceil ( double_9 ) ;
		if(1)
		{
			double_4 = ceil ( double_3 ) ;
		}
		else
		{
			double_2 = exp ( double_12 ) ;
		}
		char_2 = char_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			float float_5 = 1;
			float float_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_7 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_9 = 1;
			long long_3 = 1;
			char char_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			long long_4 = 1;
			int int_2 = 1;
			double double_12 = 1;
			int int_3 = 1;
			double double_13 = 1;
			double double_14 = 1;
			long long_5 = 1;
			long long_6 = 1;
			char char_5 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_7 = 1;
			long long_8 = 1;
			double double_16 = 1;
			int int_7 = 1;
			double double_18 = 1;
			double double_19 = 1;
			float float_8 = 1;
			int int_6 = 1;
			double double_17 = 1;
			int int_8 = 1;
			float_3 = float_8;
		}
		else
		{
			double_2 = fabs ( double_6 ) ;
		}
		double_15 = ldexp ( double_10 , int_4 ) ;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			float float_5 = 1;
			float float_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_7 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_9 = 1;
			long long_3 = 1;
			char char_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			long long_4 = 1;
			int int_2 = 1;
			double double_12 = 1;
			int int_3 = 1;
			double double_13 = 1;
			double double_14 = 1;
			long long_5 = 1;
			long long_6 = 1;
			char char_5 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_7 = 1;
			long long_8 = 1;
			double double_16 = 1;
			int int_7 = 1;
			double double_18 = 1;
			double double_19 = 1;
			float float_8 = 1;
			int int_6 = 1;
			double double_17 = 1;
			int int_8 = 1;
			int_5 = int_6;
			double_5 = exp ( double_4 ) ;
			unsigned_int_2 = unsigned_int_4;
			char_3 = char_4;
			long_7 = long_8;
			double_12 = ldexp ( double_5 , int_3 ) ;
			int_3 = int_4;
			int_1 = int_6;
			double_9 = double_3 * double_10;
			unsigned_int_1 = unsigned_int_3 + unsigned_int_1;
			float_5 = float_1;
			double_5 = double_10 + double_11;
			double_14 = floor ( double_16 ) ;
			double_14 = pow ( double_3 , double_6 ) ;
			char_4 = char_4 + char_1;
			int_2 = int_1;
			int_7 = int_1;
			double_7 = double_1;
			float_5 = float_6 + float_7;
			int_2 = int_2;
			double_6 = fmod ( double_5 , double_9 ) ;
			double_13 = sinh ( double_7 ) ;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			double double_6 = 1;
			float float_5 = 1;
			float float_6 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_7 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			double double_8 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_9 = 1;
			long long_3 = 1;
			char char_4 = 1;
			double double_10 = 1;
			double double_11 = 1;
			long long_4 = 1;
			int int_2 = 1;
			double double_12 = 1;
			int int_3 = 1;
			double double_13 = 1;
			double double_14 = 1;
			long long_5 = 1;
			long long_6 = 1;
			char char_5 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_15 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_7 = 1;
			long long_8 = 1;
			double double_16 = 1;
			int int_7 = 1;
			double double_18 = 1;
			double double_19 = 1;
			float float_8 = 1;
			int int_6 = 1;
			double double_17 = 1;
			int int_8 = 1;
			double_1 = double_2 * double_17;
			char_1 = char_1 + char_2;
			double_12 = pow ( double_5 , double_10 ) ;
			char_2 = char_1;
			double_16 = sinh ( double_16 ) ;
			float_3 = print_cstring(char_5);

			double_4 = ldexp ( double_17 , int_5 ) ;
			int_7 = int_4 + int_8;
			int_3 = int_4;
			double_12 = double_14;
			long_7 = long_8 + long_5;
		}
		else
		{
			double_15 = double_2 + double_4;
			double_5 = ldexp ( double_2 , int_1 ) ;
		}
		double_18 = tan ( double_6 ) ;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2;
		}
		else
		{
			long_3 = long_6 + long_4;
		}
		double_14 = asin ( double_12 ) ;
		double_7 = double_19;
	}
}
float printf( float parameter_1,unsigned int parameter_2,long parameter_3)
{
	float float_1 = 1;
	return float_1;
}
float get_string()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_2;
		return float_1;
	}
	else
	{
		return float_2;
	}
}
void outcmd( int parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	char controller4vul_57[5];
	fgets(controller4vul_57 ,6 ,stdin);
	if( strcmp( controller4vul_57, "CrBO>") == 0)
	{
		double double_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double_1 = log10 ( double_1 ) ;
		double_1 = exp ( double_1 ) ;
		float_1 = float_1 + float_1;
		char controller4vul_58[1];
		fgets(controller4vul_58 ,2 ,stdin);
		if( strcmp( controller4vul_58, "F") == 0)
		{
			char_1 = ddump(int_1,int_1,uni_para);

			double_1 = atan ( double_1 ) ;
		}
		else
		{
			double double_1 = 1;
			char char_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			double_1 = sinh ( double_2 ) ;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
	}
	if(1)
	{
		double_1 = sinh ( double_1 ) ;
	}
	if(1)
	{
	}
	int looper_1 = 0;
	while(looper_1 < 1)
	{
		double double_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		looper_1 += 1;
		double_3 = double_1 + double_1;
	}
}
char outopt( int parameter_1,int parameter_2,int uni_para)
{
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char controller4vul_56[1];
	fgets(controller4vul_56 ,2 ,stdin);
	if( strcmp( controller4vul_56, "x") > 0)
	{
		int int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		outcmd(int_1,int_1,uni_para);

		float_1 = float_1;
	}
	else
	{
		int int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double_1 = log ( double_2 ) ;
	}
}
long outrun( int parameter_1,int parameter_2,int uni_para)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double_1 = asin ( double_2 ) ;
	int_1 = int_1 + int_1;
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		char controller4vul_54[5];
		fgets(controller4vul_54 ,6 ,stdin);
		if( strcmp( controller4vul_54, "T`.x[") < 0)
		{
			char controller4vul_55[4];
			fgets(controller4vul_55 ,5 ,stdin);
			if( strcmp( controller4vul_55, "^z/;") == 0)
			{
				char_1 = outopt(int_2,int_2,uni_para);

				double_1 = asin ( double_1 ) ;
				int_1 = int_3;
				return long_1;
			}
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				char char_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				long long_1 = 1;
				double double_4 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_1 = 1;
				long long_3 = 1;
				double double_3 = 1;
				int int_4 = 1;
				short short_1 = 1;
				short short_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				float_1 = float_2;
				float_3 = float_1;
				return long_1;
			}
		}
		if(1)
		{
			double_2 = sqrt ( double_3 ) ;
			double_4 = asin ( double_2 ) ;
			return long_1;
		}
		double_3 = log10 ( double_4 ) ;
		if(1)
		{
			double_4 = exp ( double_1 ) ;
			return long_1;
		}
		double_2 = double_3 * double_4;
		int_2 = int_4;
		if(1)
		{
			double_4 = double_1;
			return long_1;
		}
		short_2 = short_1 + short_2;
		double_3 = floor ( double_1 ) ;
		if(1)
		{
			double_2 = asin ( double_1 ) ;
			double_3 = sqrt ( double_2 ) ;
			return long_1;
		}
		if(1)
		{
			double_1 = ceil ( double_1 ) ;
			double_1 = tanh ( double_4 ) ;
			return long_2;
		}
		int_1 = int_4 * int_1;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		int_3 = int_1 * int_1;
		return long_3;
	}
	double_2 = double_4;
}
short check_arg( long parameter_1)
{
	short short_1 = 1;
	if(1)
	{
		return short_1;
	}
	return short_1;
}
short check_argv( unsigned int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	long long_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	int int_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	if(1)
	{
		double_1 = acos ( double_2 ) ;
	}
	if(1)
	{
		double_2 = log ( double_2 ) ;
		short_1 = check_arg(long_1);

		double_2 = asin ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_2 = atan ( double_3 ) ;
		double_2 = log10 ( double_2 ) ;
	}
	if(1)
	{
		short_3 = short_2 * short_3;
	}
	char controller_5[2];
	fgets(controller_5 ,2 ,stdin);
	if( strcmp( controller_5, "{") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		double_2 = sqrt ( double_2 ) ;
	}
	if(1)
	{
		return short_4;
	}
	if(1)
	{
		double_1 = fmod ( double_1 , double_2 ) ;
		char controller_9[2];
		fgets(controller_9 ,2 ,stdin);
		if( strcmp( controller_9, "|") > 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			long long_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			int int_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int_1 = int_2;
		}
		return short_4;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_4 = exp ( double_2 ) ;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		long long_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		int int_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_4 = 1;
		double double_5 = 1;
		if(1)
		{
			return short_3;
		}
		double_5 = fmod ( double_1 , double_1 ) ;
		int_2 = int_2;
		double_2 = sqrt ( double_5 ) ;
	}
	else
	{
		return short_3;
	}
	return short_2;
}
int main(int argc, char **argv)
{
	int uni_para =299;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	short short_1 = 1;
	double double_10 = 1;
	double double_11 = 1;
	double double_12 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	double double_13 = 1;
	double double_14 = 1;
	long_1 = long_1;
	double_1 = floor ( double_2 ) ;
	float_1 = float_1 * float_2;
	double_2 = double_3 + double_4;
	double_2 = log10 ( double_5 ) ;
	double_1 = sinh ( double_6 ) ;
	double_5 = double_1;
	double_7 = ceil ( double_8 ) ;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			double_4 = acos ( double_8 ) ;
		}
		if(1)
		{
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			short short_1 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_12 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			double double_13 = 1;
			double double_14 = 1;
			int_1 = int_2;
			char_1 = char_2;
			double_7 = sqrt ( double_2 ) ;
		}
		if(1)
		{
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			short short_1 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_12 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			double double_13 = 1;
			double double_14 = 1;
			short_1 = short_1;
		}
		if(1)
		{
			double_4 = double_5 + double_8;
		}
		if(1)
		{
			double_4 = acos ( double_3 ) ;
			int_2 = int_3;
			int looper_2 = 0;
			while(looper_2 < 1)
			{
				looper_2 += 1;
				double_5 = double_5 * double_4;
				if(1)
				{
				}
				double_6 = floor ( double_1 ) ;
			}
			if(1)
			{
				int_3 = int_2 + int_2;
				double_2 = cosh ( double_9 ) ;
			}
		}
		if(1)
		{
			double_4 = double_4 + double_7;
		}
	}
	if(1)
	{
		double_2 = tanh ( double_3 ) ;
	}
	long_1 = long_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_12 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		double double_13 = 1;
		double double_14 = 1;
		if(1)
		{
			double_10 = ceil ( double_5 ) ;
			double_11 = log ( double_12 ) ;
		}
		if(1)
		{
			int_1 = int_2 + int_4;
			double_8 = tanh ( double_1 ) ;
		}
		if(1)
		{
			char_1 = char_1 * char_1;
		}
		int looper_4 = 0;
		while(looper_4 < 1)
		{
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			double double_7 = 1;
			double double_8 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			short short_1 = 1;
			double double_10 = 1;
			double double_11 = 1;
			double double_12 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			double double_13 = 1;
			double double_14 = 1;
			looper_4 += 1;
			char controller4vul_51[1];
			fgets(controller4vul_51 ,2 ,stdin);
			if( strcmp( controller4vul_51, "y") < 0)
			{
				char controller4vul_52[4];
				fgets(controller4vul_52 ,5 ,stdin);
				if( strcmp( controller4vul_52, ",->t") > 0)
				{
					double_6 = tan ( double_10 ) ;
					char controller4vul_53[3];
					fgets(controller4vul_53 ,4 ,stdin);
					if( strcmp( controller4vul_53, "^SL") == 0)
					{
						long_1 = outrun(int_2,int_1,uni_para);

					}
					if(1)
					{
						unsigned_int_1 = unsigned_int_2;
					}
				}
				if(1)
				{
					int_2 = int_4 * int_4;
				}
				else
				{
					double_4 = cosh ( double_2 ) ;
					double_10 = asin ( double_9 ) ;
					double_11 = log ( double_9 ) ;
					float_2 = float_1;
				}
			}
			if(1)
			{
				double_7 = ceil ( double_5 ) ;
				double_8 = ldexp ( double_12 , int_1 ) ;
			}
			if(1)
			{
			}
			if(1)
			{
				double_2 = asin ( double_6 ) ;
			}
			double_7 = fabs ( double_5 ) ;
			double_7 = pow ( double_7 , double_1 ) ;
			double_11 = acos ( double_12 ) ;
			double_10 = sinh ( double_9 ) ;
			if(1)
			{
			}
			if(1)
			{
				int_3 = int_3;
			}
			if(1)
			{
			}
			if(1)
			{
				int_3 = int_3 * int_1;
			}
			if(1)
			{
				unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
				unsigned_int_3 = unsigned_int_3;
			}
			if(1)
			{
				long long_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				double double_7 = 1;
				double double_8 = 1;
				int int_1 = 1;
				int int_2 = 1;
				char char_1 = 1;
				int int_3 = 1;
				double double_9 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_2 = 1;
				short short_1 = 1;
				double double_10 = 1;
				double double_11 = 1;
				double double_12 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				short short_2 = 1;
				double double_13 = 1;
				double double_14 = 1;
				if(1)
				{
					double_5 = cos ( double_9 ) ;
				}
				if(1)
				{
					double_6 = double_5;
				}
				if(1)
				{
					long long_1 = 1;
					double double_1 = 1;
					double double_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					double double_7 = 1;
					double double_8 = 1;
					int int_1 = 1;
					int int_2 = 1;
					char char_1 = 1;
					int int_3 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_3 = 1;
					char char_2 = 1;
					short short_1 = 1;
					double double_10 = 1;
					double double_11 = 1;
					double double_12 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_2 = 1;
					char char_3 = 1;
					char char_4 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					short short_2 = 1;
					double double_13 = 1;
					double double_14 = 1;
					float_1 = float_2 * float_2;
					unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
					unsigned_int_5 = unsigned_int_2 * unsigned_int_2;
					short_2 = short_2;
				}
				if(1)
				{
					double_8 = fabs ( double_1 ) ;
				}
				char_3 = char_4;
				if(1)
				{
					double_5 = fmod ( double_10 , double_5 ) ;
				}
				double_11 = atan2 ( double_6 , double_2 ) ;
			}
			else
			{
				double_4 = fmod ( double_11 , double_10 ) ;
			}
			int_1 = int_1;
		}
		if(1)
		{
			double_6 = double_7 + double_11;
		}
	}
	if(1)
	{
		double_6 = tan ( double_5 ) ;
	}
	if(1)
	{
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		double double_8 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		short short_1 = 1;
		double double_10 = 1;
		double double_11 = 1;
		double double_12 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		double double_13 = 1;
		double double_14 = 1;
		double_13 = tan ( double_14 ) ;
		double_9 = double_1;
		int looper_5 = 0;
		while(looper_5 < 1)
		{
			looper_5 += 1;
			double_14 = fabs ( double_14 ) ;
			double_5 = double_4;
		}
	}
	unsigned_int_3 = unsigned_int_1;
	return int_3;
}
