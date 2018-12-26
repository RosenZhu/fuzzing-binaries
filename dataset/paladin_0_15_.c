#include<stdio.h>
#include<stdlib.h>
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

int v_renderVersion();
int v_bwa_shm_destroy();
int v_bwa_shm_list();
int v_bwa_idx2mem( float parameter_1);
int v_bwa_shm_stage( short parameter_1,float parameter_2,long parameter_3);
int v_bwa_shm_test();
int v_main_shm( int parameter_1,char parameter_2);
int v_command_bwt2sa( int parameter_1,char parameter_2);
int v_command_bwtupdate( int parameter_1,char parameter_2);
int v_command_pac2bwt( int parameter_1,char parameter_2);
int v_bwa_fa2pac( int parameter_1,char parameter_2);
int v_kclose();
void v_index_destroy( long parameter_1);
void v_cleanUniprotLists( double parameter_1,int parameter_2);
void v_renderUniprotEntries( double parameter_1,int parameter_2,int parameter_3);
int v_uniprotEntryCompareOnline( short parameter_1,char parameter_2);
void v_joinOnlineLists( unsigned int parameter_1,char parameter_2);
void v_freeCURLBuffer();
void v_resetCURLBuffer( short parameter_1);
short v_receiveUniprotOutput(int parameter_2,short parameter_3);
void v_initCURLBuffer( long parameter_1,int parameter_2);
void v_retrieveUniprotOnline( char parameter_1,float parameter_2,short parameter_3);
int v_uniprotEntryCompareOrganism( int parameter_1,short parameter_2);
int v_uniprotEntryCompareGene( unsigned int parameter_1,char parameter_2);
int v_uniprotEntryCompareID( double parameter_1,int parameter_2);
void v_aggregateUniprotList( short parameter_1,int parameter_2,int parameter_3);
void v_prepareUniprotLists( long parameter_1,int parameter_2);
void v_prepareUniprotReport( int parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5);
void v_renderUniprotReport( int parameter_1,int parameter_2,int parameter_3,float parameter_4);
void v_renderNumberAligned( int parameter_1);
int v_err_fputs( long parameter_1,long parameter_2);
char v_getGlobalCount( int parameter_1);
float v_getGlobalLists( int parameter_1);
int v_getAlignmentType( long parameter_1,int parameter_2,int parameter_3);
int v_addUniprotList( long parameter_1,int parameter_2,int parameter_3);
void v_mem_reg2ovlp( float parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5);
void v_ks_introsort_128( int parameter_1,float parameter_2);
int v_mem_pair( char parameter_1,char parameter_2,int parameter_3,long parameter_4,float parameter_5,short parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11);
int v_mem_matesw( long parameter_1,char parameter_2,long parameter_3,char parameter_4,short parameter_5,int parameter_6,int parameter_7,float parameter_8);
int v_get_rlen( int parameter_1,unsigned int parameter_2);
float v_ks_resize( int parameter_1,long parameter_2);
void v_mem_aln2sam( short parameter_1,int parameter_2,short parameter_3,float parameter_4,int parameter_5,short parameter_6,int parameter_7,int parameter_8,int uni_para);
void v_kputl( long parameter_1,float parameter_2);
double v_kputsn( char parameter_1,int parameter_2,float parameter_3);
double v_kputs( short parameter_1,double parameter_2);
int v_infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6);
double v_mem_reg2aln( long parameter_1,float parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,int parameter_6);
unsigned int v_get_pri_idx( double parameter_1,float parameter_2,int parameter_3);
void v_mem_gen_alt( float parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,char parameter_6);
void v_mem_reg2sam( char parameter_1,int parameter_2,char parameter_3,float parameter_4,long parameter_5,int parameter_6,double parameter_7,int uni_para);
int v_mem_approx_mapq_se( char parameter_1,unsigned int parameter_2);
long v_hash_64();
int v_mem_mark_primary_se( unsigned int parameter_1,int parameter_2,float parameter_3,int parameter_4);
int v_mem_sam_pe( int parameter_1,short parameter_2,float parameter_3,int parameter_4,float parameter_5,unsigned int parameter_6,int parameter_7,int uni_para);
unsigned int v_worker2(int parameter_2,int parameter_3,int uni_para);
void v_filterCompetingAln( double parameter_1,int parameter_2,int parameter_3);
int v_mem_infer_dir( long parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4);
int v_cal_sub( char parameter_1,short parameter_2);
void v_mem_pestat( float parameter_1,double parameter_2,int parameter_3,char parameter_4);
int v_mem_test_and_remove_exact( double parameter_1,int parameter_2,int parameter_3,int parameter_4);
float v_kputc( int parameter_1,float parameter_2);
int v_kputw( int parameter_1,int parameter_2,int uni_para);
int v_push_cigar( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
int v_ksw_global2( int parameter_1,double parameter_2,int parameter_3,long parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,short parameter_13);
void v_bwa_gen_cigar2( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7,float parameter_8,int parameter_9,float parameter_10,unsigned int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15);
int v_mem_patch_reg( char parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4,char parameter_5,float parameter_6,int parameter_7);
int v_mem_sort_dedup_patch( unsigned int parameter_1,short parameter_2,double parameter_3,unsigned int parameter_4,int parameter_5,double parameter_6);
int v_ksw_extend2( int parameter_1,float parameter_2,int parameter_3,double parameter_4,int parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19);
void v_ks_introsort_64( char parameter_1,long parameter_2);
unsigned int v_cal_max_gap( char parameter_1,int parameter_2);
void v_mem_chain2aln( float parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_5,short parameter_6,short parameter_7);
int v_err_printf( int parameter_1,long parameter_2);
void v_mem_print_chain( double parameter_1,char parameter_2);
short v_revseq( int parameter_1,char parameter_2);
unsigned int v_ksw_u8( char parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
double v_ksw_i16( unsigned int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
void v_ksw_qinit( int parameter_1,int parameter_2,char parameter_3,int parameter_4,char parameter_5);
float v_ksw_align2( int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,int parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,short parameter_12);
void v_bns_get_seq( short parameter_1,long parameter_2,int parameter_3,int parameter_4,char parameter_5);
short v_bns_fetch_seq( int parameter_1,float parameter_2,int parameter_3,float parameter_4,short parameter_5,int parameter_6);
int v_mem_seed_sw( unsigned int parameter_1,double parameter_2,short parameter_3,int parameter_4,unsigned int parameter_5,long parameter_6);
void v_mem_flt_chained_seeds( double parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_5,int parameter_6,int parameter_7);
int v_mem_chain_weight( char parameter_1);
int v_mem_chain_flt( double parameter_1,int parameter_2,long parameter_3);
long v_smem_aux_destroy( short parameter_1);
unsigned int v_test_and_merge( float parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,int parameter_5);
void v_bns_depos( long parameter_1,float parameter_2,int parameter_3);
int v_bns_pos2rid( long parameter_1,long parameter_2);
int v_bns_intv2rid( float parameter_1,double parameter_2,short parameter_3);
short v_bwt_sa( float parameter_1,long parameter_2);
int v_bwt_seed_strategy1( float parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7);
short v_bwt_reverse_intvs();
void v_bwt_2occ4( double parameter_1,long parameter_2,char parameter_3,long parameter_4,double parameter_5);
void v_bwt_extend( double parameter_1,char parameter_2,float parameter_3,int parameter_4);
int v_bwt_smem1a( short parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,float parameter_6,unsigned int parameter_7,float parameter_8);
int v_bwt_smem1( short parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,char parameter_6,float parameter_7);
long v_mem_collect_intv( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,long parameter_5);
char v_mem_chain( char parameter_1);
void v_mem_align1_core( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,int parameter_5,char parameter_6);
long v_worker1(int parameter_2,int parameter_3);
short v_smem_aux_init();
double v_cputime();
void v_steal_work( char parameter_1);
void v_ktf_worker();
void v_kt_for( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,long parameter_6);
void v_mem_process_seqs( char parameter_1,char parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6,long parameter_7,long parameter_8,int uni_para);
double v_kvec_t( int parameter_1);
void v_bseq_classify( int parameter_1,float parameter_2,int parameter_3,float parameter_4);
int v_kseq2bseq1( float parameter_1,short parameter_2);
void v_trim_readno( float parameter_1);
double v_bseq_read( int parameter_1,int parameter_2);
double v_process(int parameter_2,int uni_para);
long v_ktp_worker();
void v_kt_pipeline( int parameter_1,int parameter_3,int parameter_6);
void v_bwa_print_sam_hdr( unsigned int parameter_1,double parameter_2,double parameter_3);
char v_cmd2argv( float parameter_1);
void v_kftp_send_cmd( char parameter_1,float parameter_2,int parameter_3);
float v_socket_wait( int parameter_1,int parameter_2);
float v_kftp_get_response( float parameter_1);
char v_ftp_open( short parameter_1);
unsigned int v_write_bytes( int parameter_1,unsigned int parameter_2,short parameter_3);
long v_socket_connect( short parameter_1,int parameter_2);
short v_http_open( double parameter_1);
void v_kopen( long parameter_1,int parameter_2);
void v_compileORFHistory( long parameter_1,long parameter_2,int parameter_3,float parameter_4);
void v_addORFHistory( long parameter_1,long parameter_2,double parameter_3);
long v_getLastAlignedOrfPos( long parameter_1,int parameter_2,double parameter_3);
int v_getSequenceORF( char parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5,float parameter_6);
int v_writeReadsProtein( char parameter_1,unsigned int parameter_2,float parameter_3);
char v_bns_restore_core( unsigned int parameter_1,int parameter_2,char parameter_3);
void v_bns_restore( char parameter_1);
void v_bwt_restore_sa( unsigned int parameter_1,short parameter_2);
void v_index_load_bwt( unsigned int parameter_1);
long v_index_infer_prefix( float parameter_1);
long v_index_load_from_disk( int parameter_1,int parameter_2);
unsigned int v_index_load( unsigned int parameter_1,int parameter_2);
int v_bwa_mem2idx( double parameter_1,double parameter_2,double parameter_3);
void v_index_load_from_shm( unsigned int parameter_1);
int v_getIndexCompatible( short parameter_1);
short v_getIndexHeader( char parameter_1);
double v_update_a( unsigned int parameter_1,char parameter_2);
int v_renderAlignUsage( float parameter_1);
char v_bwa_insert_header( short parameter_1,char parameter_2);
unsigned int v_bwa_escape( char parameter_1);
short v_bwa_set_rg( short parameter_1);
void v_renderTranslations();
unsigned int v_convertTransArgs( float parameter_1);
void v_bwa_fill_scmat( int parameter_1,int parameter_2,double parameter_3);
short v_mem_opt_init();
int v_command_align( int parameter_1,char parameter_2,int uni_para);
void v_cleanUniprotReferenceUniref( unsigned int parameter_1,int parameter_2);
int v_cleanUniprotReference( int parameter_1,double parameter_2);
double v_downloadUniprotReference( int parameter_1,float parameter_2);
int v_command_prepare( int parameter_1,char parameter_2);
void v_bwt_dump_sa( int parameter_1,short parameter_2);
long v___occ_aux( float parameter_1,int parameter_2);
void v_bwt_occ4( short parameter_1,short parameter_2,double parameter_3);
unsigned int v_bwt_occ( unsigned int parameter_1,int parameter_2,unsigned int parameter_3);
short v_getOccInterval( unsigned int parameter_1,float parameter_2);
unsigned int v_unpackBWTValue( char parameter_1,long parameter_2);
unsigned int v_bwt_invPsi( long parameter_1,long parameter_2);
void v_bwt_cal_sa( char parameter_1,int parameter_2);
void v_bwt_bwtupdate_core( int parameter_1);
long v_fread_fix( int parameter_1,float parameter_2);
char v_bwt_restore_bwt( long parameter_1);
void v_bwt_destroy( short parameter_1);
void v_bwt_dump_bwt( float parameter_1,char parameter_2);
void v_packValue( float parameter_1,double parameter_2,char parameter_3);
char v_induceSA( char parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,float parameter_5,char parameter_6,float parameter_7);
unsigned int v_getBuckets( unsigned int parameter_1,long parameter_2,double parameter_3,short parameter_4);
char v_getCounts( unsigned int parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5);
short v_sais_main( int parameter_1,short parameter_2,short parameter_3,int parameter_4,double parameter_5,long parameter_6);
unsigned int v_is_sa( unsigned int parameter_1,long parameter_2,unsigned int parameter_3);
double v_is_bwt( int parameter_1,short parameter_2);
unsigned int v_err_fread_noeof(short parameter_2,long parameter_3,int parameter_4);
long v_err_ftell();
int v_err_fseek( double parameter_1,long parameter_2,int parameter_3);
float v_bwa_seq_len( float parameter_1);
float v_bwt_pac2bwt( unsigned int parameter_1);
void v_bns_destroy();
int v_err_fprintf( char parameter_1,unsigned int parameter_2,unsigned int parameter_3);
void v_bns_dump( char parameter_1,char parameter_2);
int v_err_fflush( unsigned int parameter_1);
float v_err_fwrite( float parameter_1,float parameter_2,float parameter_3,float parameter_4);
long v_add1( int parameter_1,long parameter_2,double parameter_3,short parameter_4,int parameter_5,int parameter_6,long parameter_7);
int v_bns_fasta2bntseq( char parameter_1,unsigned int parameter_2,int parameter_3);
void v_logMessageRaw( int parameter_1,char parameter_2,int parameter_3);
int v_writeIndexTestProtein( short parameter_1,float parameter_2);
int v_writeIndexDirectProtein( unsigned int parameter_1,float parameter_2,char parameter_3);
long v_getLastAlignedPos( long parameter_1,int parameter_2);
int v_writeIndexCodingProtein( unsigned int parameter_1,float parameter_2,short parameter_3);
int v_err_fclose( long parameter_1);
void v__err_fatal_simple( float parameter_1,short parameter_2);
int v_err_gzclose( short parameter_1);
void v_encodeCodon( char parameter_1,int parameter_2);
int v_convertToAA( char parameter_1,char parameter_2,int parameter_3,char parameter_4,int parameter_5);
int v_getNextCDS( short parameter_1,char parameter_2,int parameter_3);
void v_writeIndexHeader( double parameter_1,int parameter_2);
void v_err_fatal( short parameter_1,unsigned int parameter_2,char parameter_3);
long v_err_xopen_core( int parameter_1,double parameter_2,char parameter_3);
int v_writeIndexProtein( unsigned int parameter_1,double parameter_2,long parameter_3,char parameter_4);
void v_logMessage( float parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4);
int v_command_index( int parameter_1,char parameter_2);
int v_renderMainUsage();
int v_ksprintf( int parameter_1,float parameter_2,char parameter_3);
double v_realtime();
int v_renderVersion()
{
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long_1 = long_1;
	double_2 = double_1 * double_1;
	float_1 = float_2;
	char_1 = char_1 * char_2;
	short_1 = short_1 * short_1;
	return int_1;
}
int v_bwa_shm_destroy()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short_3 = short_1 + short_2;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	double_1 = double_1;
	if(1)
	{
	}
	double_2 = double_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_3 = 1;
		char char_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_3 = float_1 + float_2;
		short_1 = short_2 + short_2;
		short_3 = short_1;
		double_2 = double_2 * double_1;
		float_3 = float_3 * float_3;
		int_3 = int_1 * int_2;
	}
	char_1 = char_1 * char_1;
	float_2 = float_3;
	return int_3;
}
int v_bwa_shm_list()
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char_1 = char_1;
	int_1 = int_2;
	double_1 = double_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_2 + double_2;
		long_1 = long_2;
		int_2 = int_2;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
		long_1 = long_2;
	}
	return int_2;
}
int v_bwa_idx2mem( float parameter_1)
{
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	long long_4 = 1;
	float float_1 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_5 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_4 = 1;
	float float_2 = 1;
	char_1 = char_2;
	double_1 = double_1;
	double_2 = double_2 + double_2;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 * char_3;
	double_3 = double_4 * double_3;
	unsigned_int_2 = unsigned_int_1;
	long_2 = long_1 + long_2;
	char_1 = char_2 * char_3;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	char_2 = char_3 + char_1;
	unsigned_int_5 = unsigned_int_5 * unsigned_int_5;
	long_2 = long_1 + long_3;
	unsigned_int_2 = unsigned_int_3;
	short_1 = short_2;
	unsigned_int_3 = unsigned_int_5 * unsigned_int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_5 = double_5 * double_5;
	}
	double_6 = double_5 * double_6;
	unsigned_int_2 = unsigned_int_2;
	int_1 = int_1;
	double_6 = double_2;
	int_3 = int_2 + int_1;
	int_1 = int_2 + int_3;
	unsigned_int_4 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_7;
	int_1 = v_bwa_mem2idx(double_5,double_6,double_7);

	unsigned_int_8 = unsigned_int_9;
	unsigned_int_3 = unsigned_int_7;
	long_2 = long_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		long long_4 = 1;
		float float_1 = 1;
		char char_4 = 1;
		short short_3 = 1;
		int int_5 = 1;
		char char_5 = 1;
		float float_3 = 1;
		int int_6 = 1;
		int int_4 = 1;
		float float_2 = 1;
		long_4 = long_2 * long_2;
		int_2 = int_4;
		unsigned_int_1 = unsigned_int_4;
		double_7 = double_6 + double_7;
		float_1 = float_1 + float_2;
		short_2 = short_2 * short_1;
		double_2 = double_4;
		char_4 = char_1;
	}
	unsigned_int_3 = unsigned_int_4;
	short_1 = short_3 * short_3;
	unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
	long_2 = long_2;
	int_5 = int_2;
	char_4 = char_2 * char_5;
	int_3 = int_3 + int_3;
	long_1 = long_2;
	float_1 = float_3;
	return int_6;
}
int v_bwa_shm_stage( short parameter_1,float parameter_2,long parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_3 = 1;
	long long_4 = 1;
	int_2 = int_1 + int_2;
	char_2 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		long long_4 = 1;
		long_2 = long_1 + long_1;
	}
	unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	double_2 = double_1 + double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		long long_4 = 1;
		long_1 = long_3;
	}
	int_3 = v_bwa_idx2mem(float_1);

	double_3 = double_1;
	short_1 = short_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_3 = 1;
		long long_4 = 1;
		short_1 = short_3;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			double double_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_3 = 1;
			long long_4 = 1;
			long_4 = long_4 + long_1;
		}
		int_2 = v_bwa_mem2idx(double_1,double_4,double_4);

		short_4 = short_3;
	}
	if(1)
	{
		short_4 = short_2;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	return int_3;
}
int v_bwa_shm_test()
{
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short_3 = short_1 + short_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 + double_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		float_2 = float_1 + float_1;
	}
	long_2 = long_1 + long_1;
	if(1)
	{
	}
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		if(1)
		{
		}
		int_1 = int_1 * int_1;
	}
	return int_2;
}
int v_main_shm( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_1 = 1;
	long long_2 = 1;
	int_1 = v_bwa_shm_test();

	long_1 = v_index_load_from_disk(int_1,int_1);

	long_1 = long_1 + long_1;
	int_1 = v_bwa_shm_list();

	int_2 = v_bwa_shm_destroy();

	char_1 = char_1 * char_1;
	return int_3;
	int_3 = v_bwa_shm_stage(short_1,float_1,long_2);

	v_index_destroy(long_2);

}
int v_command_bwt2sa( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int_1 = int_1 * int_2;
	double_1 = double_1;
	double_2 = double_1 + double_2;
	float_2 = float_1 + float_1;
	v_bwt_cal_sa(char_1,int_1);

	v_bwt_destroy(short_1);

	char_2 = char_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		int_3 = int_3;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	char_3 = v_bwt_restore_bwt(long_1);

	short_2 = short_1;
	if(1)
	{
		int_4 = int_1;
	}
	v_bwt_dump_sa(int_4,short_2);

	double_1 = double_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned_int_1 = unsigned_int_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		short_1 = short_3;
	}
	return int_1;
}
int v_command_bwtupdate( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_2 = 1;
	short short_2 = 1;
	v_bwt_bwtupdate_core(int_1);

	double_1 = double_1 + double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, ".n") > 0)
	{
		int int_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_2 = 1;
		short short_2 = 1;
		char_1 = v_bwt_restore_bwt(long_1);

		short_1 = short_2;
	}
	double_1 = double_2 * double_1;
	double_2 = double_3;
	v_bwt_destroy(short_1);

	double_2 = double_1;
	v_bwt_dump_bwt(float_1,char_1);

	float_1 = float_2 + float_2;
	return int_2;
}
int v_command_pac2bwt( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_3 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char char_4 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	int int_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	short short_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	v_bwt_destroy(short_1);

	float_2 = float_1 * float_1;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char_2 = char_1 + char_1;
		if(1)
		{
		}
	}
	float_1 = float_1 + float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_3;
	}
	double_1 = double_1;
	double_2 = double_2;
	char_3 = char_3;
	long_1 = long_2;
	float_3 = float_1 + float_2;
	if(1)
	{
		int_2 = int_3 * int_1;
	}
	if(1)
	{
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_5 = 1;
		long long_6 = 1;
		char char_4 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_4 = 1;
		int int_5 = 1;
		float float_6 = 1;
		float float_7 = 1;
		short short_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		char_2 = char_4;
		int_3 = int_1;
	}
	float_2 = float_4 * float_5;
	unsigned_int_4 = unsigned_int_5;
	short_2 = short_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
		double_3 = double_1;
		int_3 = int_4;
		double_3 = double_1;
	}
	if(1)
	{
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		int int_4 = 1;
		long long_3 = 1;
		long long_5 = 1;
		long long_6 = 1;
		char char_4 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_5 = 1;
		double double_6 = 1;
		long long_4 = 1;
		int int_5 = 1;
		float float_6 = 1;
		float float_7 = 1;
		short short_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float_1 = float_2 * float_3;
		long_1 = long_3 + long_2;
		int_4 = int_3 * int_2;
		float_4 = v_bwt_pac2bwt(unsigned_int_5);

		v_bwt_dump_bwt(float_4,char_1);

		double_4 = double_4;
		unsigned_int_3 = unsigned_int_6;
		float_2 = float_3;
		double_6 = double_5 * double_4;
		double_3 = double_1;
		unsigned_int_3 = unsigned_int_5;
		double_1 = double_2;
		long_1 = long_4;
		float_1 = float_5 * float_3;
		int_5 = int_3;
		if(1)
		{
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_3 = 1;
			int int_4 = 1;
			long long_3 = 1;
			long long_5 = 1;
			long long_6 = 1;
			char char_4 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_4 = 1;
			int int_5 = 1;
			float float_6 = 1;
			float float_7 = 1;
			short short_4 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			int_5 = int_3 + int_3;
			unsigned_int_3 = unsigned_int_5;
			float_1 = float_5;
			short_4 = short_4 + short_4;
			long_3 = long_4;
			int_6 = int_5 * int_2;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_3;
		}
		int_2 = int_2;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			if(1)
			{
				int_5 = int_2;
			}
		}
		unsigned_int_1 = unsigned_int_4;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_3 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			short short_2 = 1;
			short short_3 = 1;
			double double_3 = 1;
			int int_4 = 1;
			long long_3 = 1;
			long long_5 = 1;
			long long_6 = 1;
			char char_4 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_5 = 1;
			double double_6 = 1;
			long long_4 = 1;
			int int_5 = 1;
			float float_6 = 1;
			float float_7 = 1;
			short short_4 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned_int_7 = unsigned_int_2 * unsigned_int_7;
		}
		char_1 = char_3;
		float_7 = float_6 * float_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	long_6 = long_3 * long_5;
	return int_3;
}
int v_bwa_fa2pac( int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float_1 = float_2;
	int_1 = v_bns_fasta2bntseq(char_1,unsigned_int_1,int_1);

	char_2 = char_2;
	int_1 = v_err_gzclose(short_1);

	int_1 = int_2;
	short_2 = short_1 * short_1;
	char_1 = char_3;
	int_2 = int_2 + int_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "vl") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double_1 = double_1;
	}
	return int_1;
}
int v_kclose()
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char_3 = char_1 * char_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_3;
		short_1 = short_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short_4 = short_1 + short_3;
		}
	}
	long_1 = long_1 + long_2;
	return int_1;
}
void v_index_destroy( long parameter_1)
{
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
			char_1 = char_1 + char_1;
		}
		if(1)
		{
			char char_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			long_1 = long_1;
		}
		if(1)
		{
			char char_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			v_bwt_destroy(short_1);

			double_1 = double_1 + double_1;
		}
	}
	if(1)
	{
		char char_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short_1 = short_1;
		short_3 = short_1 * short_2;
		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		if(1)
		{
			char char_1 = 1;
			short short_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int_1 = int_1;
		}
	}
	char_1 = char_1;
	v_bns_destroy();

}
void v_cleanUniprotLists( double parameter_1,int parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_getGlobalLists(int_1);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double_1 = double_1 * double_1;
		unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		long_3 = long_1 + long_2;
	}
	double_2 = double_1 * double_1;
	double_2 = double_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_3 + unsigned_int_3;
	}
}
void v_renderUniprotEntries( double parameter_1,int parameter_2,int parameter_3)
{
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_3 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	short_1 = short_2;
	int_2 = int_1 * int_1;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double_3 = double_1 + double_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_3 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		double_4 = double_4 + double_3;
		char_1 = char_1 * char_2;
		int_2 = int_2;
		unsigned_int_1 = unsigned_int_2;
		int_2 = int_2;
		double_1 = double_1;
		long_1 = long_1 * long_1;
		float_1 = float_1 * float_1;
	}
}
int v_uniprotEntryCompareOnline( short parameter_1,char parameter_2)
{
	int int_1 = 1;
	return int_1;
}
void v_joinOnlineLists( unsigned int parameter_1,char parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	short short_2 = 1;
	int int_4 = 1;
	float_3 = float_1 + float_2;
	int_2 = int_1 + int_2;
	char_1 = char_1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_2 = char_2;
		}
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	int_3 = v_uniprotEntryCompareOnline(short_1,char_1);

	char_3 = char_2 * char_2;
	char_2 = char_3 * char_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			char char_3 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			short short_2 = 1;
			int int_4 = 1;
			short_2 = short_2 * short_2;
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				int int_1 = 1;
				int int_2 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_2 = 1;
				int int_3 = 1;
				short short_1 = 1;
				char char_3 = 1;
				char char_4 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				short short_2 = 1;
				int int_4 = 1;
				int_2 = int_4 + int_3;
			}
		}
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_2 = float_2 + float_2;
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if( strcmp( controller_5, "2") > 0)
		{
			char_2 = char_1;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		if(1)
		{
			int_2 = int_1;
		}
	}
	double_1 = double_1;
}
void v_freeCURLBuffer()
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
}
void v_resetCURLBuffer( short parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	short_1 = short_2;
	short_1 = short_2 * short_2;
}
short v_receiveUniprotOutput(int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	float float_1 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_2 = double_1 * double_1;
	short_1 = short_2;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_4 = 1;
		float float_1 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float_3 = float_1 * float_2;
		int_2 = int_1 + int_1;
	}
	double_1 = double_3 * double_1;
	double_4 = double_3 * double_2;
	float_2 = float_4;
	return short_1;
}
void v_initCURLBuffer( long parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	double_2 = double_1 + double_1;
	int_3 = int_1 * int_2;
	long_2 = long_1 * long_1;
	int_2 = int_4;
}
void v_retrieveUniprotOnline( char parameter_1,float parameter_2,short parameter_3)
{
	long long_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_3 = 1;
	v_initCURLBuffer(long_1,int_1);

	char_1 = char_1 + char_2;
	v_resetCURLBuffer(short_1);

	v_freeCURLBuffer();

	long_1 = long_2;
	short_2 = v_receiveUniprotOutput(int_1,short_3);

	unsigned_int_1 = unsigned_int_2;
	v_logMessage(float_1,int_1,char_1,unsigned_int_3);

}
int v_uniprotEntryCompareOrganism( int parameter_1,short parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1 + double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_uniprotEntryCompareGene( unsigned int parameter_1,char parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
int v_uniprotEntryCompareID( double parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	long_1 = long_2;
	if(1)
	{
	}
	if(1)
	{
	}
	return int_1;
}
void v_aggregateUniprotList( short parameter_1,int parameter_2,int parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_4 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	long long_3 = 1;
	double double_5 = 1;
	char char_1 = 1;
	float float_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	long_2 = long_1 + long_1;
	int_1 = int_2;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	double_4 = double_4 * double_2;
	long_1 = long_2 + long_1;
	int_2 = v_uniprotEntryCompareOrganism(int_2,short_1);

	double_4 = double_1 * double_1;
	float_1 = float_1;
	float_2 = float_3;
	unsigned_int_3 = unsigned_int_3;
	float_1 = float_4;
	double_3 = double_2;
	int_1 = int_2 * int_3;
	unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
	int_4 = int_3 * int_4;
	int_2 = int_2;
	long_3 = long_1;
	unsigned_int_5 = unsigned_int_6 * unsigned_int_1;
	int_2 = int_1 + int_4;
	unsigned_int_4 = unsigned_int_5 * unsigned_int_5;
	double_5 = double_5 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_4 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_4 = 1;
		long long_3 = 1;
		double double_5 = 1;
		char char_1 = 1;
		float float_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_6 = 1;
		int_3 = v_uniprotEntryCompareGene(unsigned_int_1,char_1);

		unsigned_int_7 = unsigned_int_5 * unsigned_int_4;
		int_3 = int_1;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "hN") < 0)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_4 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_4 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_4 = 1;
			long long_3 = 1;
			double double_5 = 1;
			char char_1 = 1;
			float float_5 = 1;
			int int_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_6 = 1;
			int_1 = int_2 + int_2;
			float_5 = v_getGlobalLists(int_5);

			double_5 = double_2 + double_6;
		}
		short_1 = short_1;
		unsigned_int_4 = unsigned_int_4;
		if(1)
		{
			int_5 = v_uniprotEntryCompareID(double_4,int_4);

			unsigned_int_7 = unsigned_int_3 + unsigned_int_3;
		}
	}
	int_3 = int_6;
}
void v_prepareUniprotLists( long parameter_1,int parameter_2)
{
	short short_1 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	char char_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	float float_4 = 1;
	short short_2 = 1;
	short_1 = short_1;
	int_1 = int_1 + int_1;
	double_1 = double_1 * double_2;
	int_1 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = int_1 * int_1;
	}
	int_1 = int_3 + int_4;
	if(1)
	{
		if(1)
		{
			short short_1 = 1;
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_3 = 1;
			char char_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			float float_4 = 1;
			short short_2 = 1;
			if(1)
			{
				double_2 = double_3;
			}
			if(1)
			{
				char_1 = v_getGlobalCount(int_4);

				float_3 = float_1 * float_2;
			}
			unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
			v_logMessage(float_1,int_3,char_1,unsigned_int_1);

			unsigned_int_1 = unsigned_int_2;
			long_1 = long_1;
			unsigned_int_1 = unsigned_int_1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_3;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float_3 = float_1 * float_2;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		short short_1 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_3 = 1;
		char char_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		float float_4 = 1;
		short short_2 = 1;
		double_3 = double_2 * double_1;
		v_aggregateUniprotList(short_1,int_5,int_5);

		double_3 = double_1;
		float_1 = float_4;
		short_1 = short_2 + short_2;
	}
	unsigned_int_1 = unsigned_int_4 * unsigned_int_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int_2 = int_3;
	}
	float_2 = v_getGlobalLists(int_1);

}
void v_prepareUniprotReport( int parameter_1,int parameter_2,unsigned int parameter_3,long parameter_4,float parameter_5)
{
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	int int_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_2 = 1;
	double double_3 = 1;
	v_prepareUniprotLists(long_1,int_1);

	int_2 = v_uniprotEntryCompareGene(unsigned_int_1,char_1);

	char_1 = char_1;
	unsigned_int_1 = unsigned_int_2;
	v_retrieveUniprotOnline(char_1,float_1,short_1);

	int_2 = v_uniprotEntryCompareID(double_1,int_2);

	int_2 = v_uniprotEntryCompareOrganism(int_3,short_2);

	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		double_1 = double_2;
		short_3 = short_1 * short_3;
	}
	v_joinOnlineLists(unsigned_int_1,char_1);

	short_2 = short_3 + short_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_2 = v_getGlobalLists(int_3);

	double_2 = double_3;
}
void v_renderUniprotReport( int parameter_1,int parameter_2,int parameter_3,float parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_5 = 1;
	float_2 = float_1 + float_1;
	v_cleanUniprotLists(double_1,int_1);

	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	char_1 = char_2;
	char_1 = char_2 + char_1;
	double_3 = double_1 + double_2;
	v_prepareUniprotReport(int_1,int_1,unsigned_int_1,long_1,float_1);

	double_3 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "?v") > 0)
	{
		double_3 = double_4;
	}
	char_2 = char_3;
	float_1 = v_getGlobalLists(int_1);

	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	float_4 = float_1 * float_3;
	short_2 = short_1 * short_1;
	double_4 = double_1 * double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	double_5 = double_5;
	v_freeCURLBuffer();

	double_4 = double_5;
	double_3 = double_1 * double_3;
	v_renderUniprotEntries(double_2,int_2,int_2);

	char_2 = char_3 * char_1;
	int_2 = int_2 + int_3;
	float_5 = float_5;
}
void v_renderNumberAligned( int parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_3 = 1;
	int int_2 = 1;
	float_1 = float_1 * float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		short short_3 = 1;
		int int_2 = 1;
		int_1 = int_1;
		short_1 = short_2;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			short short_3 = 1;
			int int_2 = 1;
			unsigned_int_1 = unsigned_int_1;
			v_logMessage(float_1,int_1,char_1,unsigned_int_2);

			double_1 = double_1;
		}
	}
	char controller_2[2];
	fgets(controller_2 ,2 ,stdin);
	if( strcmp( controller_2, "^") > 0)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		short short_3 = 1;
		int int_2 = 1;
		short_3 = short_2 * short_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		short short_3 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
}
int v_err_fputs( long parameter_1,long parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "M") > 0)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		v__err_fatal_simple(float_1,short_1);

		int_1 = int_2;
	}
	return int_3;
}
char v_getGlobalCount( int parameter_1)
{
	char char_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return char_1;
}
float v_getGlobalLists( int parameter_1)
{
	float float_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	return float_1;
}
int v_getAlignmentType( long parameter_1,int parameter_2,int parameter_3)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return int_2;
}
int v_addUniprotList( long parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	int int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_6 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_11 = 1;
	long long_3 = 1;
	double double_5 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_6 = 1;
	char char_5 = 1;
	float float_2 = 1;
	int int_8 = 1;
	float float_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	float float_4 = 1;
	char char_4 = 1;
	int int_7 = 1;
	float float_5 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_10 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	double_1 = double_1;
	int_1 = int_2;
	long_2 = long_1 * long_2;
	char_1 = v_getGlobalCount(int_1);

	int_3 = int_4;
	float_1 = float_1;
	unsigned_int_3 = unsigned_int_3;
	double_1 = double_2;
	unsigned_int_4 = unsigned_int_1 + unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			long long_4 = 1;
			double double_4 = 1;
			int int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_6 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_11 = 1;
			long long_3 = 1;
			double double_5 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_6 = 1;
			char char_5 = 1;
			float float_2 = 1;
			int int_8 = 1;
			float float_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_4 = 1;
			char char_4 = 1;
			int int_7 = 1;
			float float_5 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_10 = 1;
			long_3 = long_3;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			long long_4 = 1;
			double double_4 = 1;
			int int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_6 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_11 = 1;
			long long_3 = 1;
			double double_5 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_6 = 1;
			char char_5 = 1;
			float float_2 = 1;
			int int_8 = 1;
			float float_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_4 = 1;
			char char_4 = 1;
			int int_7 = 1;
			float float_5 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_10 = 1;
			double_1 = double_1 + double_3;
			if(1)
			{
				int_4 = v_getAlignmentType(long_4,int_1,int_3);

				double_3 = double_4;
			}
			double_5 = double_4 * double_4;
			unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
			int_5 = int_4;
		}
		unsigned_int_3 = unsigned_int_1;
	}
	char_1 = char_2 * char_3;
	float_1 = v_getGlobalLists(int_4);

	unsigned_int_5 = unsigned_int_4;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	int_1 = int_3 + int_6;
	long_5 = long_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		char char_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		long long_4 = 1;
		double double_4 = 1;
		int int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_6 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_11 = 1;
		long long_3 = 1;
		double double_5 = 1;
		short short_1 = 1;
		short short_2 = 1;
		long long_6 = 1;
		char char_5 = 1;
		float float_2 = 1;
		int int_8 = 1;
		float float_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		float float_4 = 1;
		char char_4 = 1;
		int int_7 = 1;
		float float_5 = 1;
		int int_9 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_10 = 1;
		if(1)
		{
			short_2 = short_1 + short_2;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			char char_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			long long_4 = 1;
			double double_4 = 1;
			int int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_6 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_11 = 1;
			long long_3 = 1;
			double double_5 = 1;
			short short_1 = 1;
			short short_2 = 1;
			long long_6 = 1;
			char char_5 = 1;
			float float_2 = 1;
			int int_8 = 1;
			float float_3 = 1;
			short short_3 = 1;
			short short_4 = 1;
			float float_4 = 1;
			char char_4 = 1;
			int int_7 = 1;
			float float_5 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_10 = 1;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				int int_3 = 1;
				int int_4 = 1;
				float float_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_3 = 1;
				long long_4 = 1;
				double double_4 = 1;
				int int_5 = 1;
				char char_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_6 = 1;
				long long_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_8 = 1;
				int int_11 = 1;
				long long_3 = 1;
				double double_5 = 1;
				short short_1 = 1;
				short short_2 = 1;
				long long_6 = 1;
				char char_5 = 1;
				float float_2 = 1;
				int int_8 = 1;
				float float_3 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float float_4 = 1;
				char char_4 = 1;
				int int_7 = 1;
				float float_5 = 1;
				int int_9 = 1;
				unsigned int unsigned_int_7 = 1;
				int int_10 = 1;
				char_4 = char_4 + char_4;
			}
			int_1 = int_1;
			int_1 = int_4;
			long_6 = long_6 * long_1;
			char_5 = char_3 + char_2;
			long_2 = long_1;
			if(1)
			{
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					if(1)
					{
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						unsigned int unsigned_int_3 = 1;
						double double_1 = 1;
						int int_1 = 1;
						int int_2 = 1;
						long long_1 = 1;
						long long_2 = 1;
						char char_1 = 1;
						int int_3 = 1;
						int int_4 = 1;
						float float_1 = 1;
						double double_2 = 1;
						unsigned int unsigned_int_4 = 1;
						double double_3 = 1;
						long long_4 = 1;
						double double_4 = 1;
						int int_5 = 1;
						char char_2 = 1;
						char char_3 = 1;
						unsigned int unsigned_int_5 = 1;
						int int_6 = 1;
						long long_5 = 1;
						unsigned int unsigned_int_6 = 1;
						unsigned int unsigned_int_8 = 1;
						int int_11 = 1;
						long long_3 = 1;
						double double_5 = 1;
						short short_1 = 1;
						short short_2 = 1;
						long long_6 = 1;
						char char_5 = 1;
						float float_2 = 1;
						int int_8 = 1;
						float float_3 = 1;
						short short_3 = 1;
						short short_4 = 1;
						float float_4 = 1;
						char char_4 = 1;
						int int_7 = 1;
						float float_5 = 1;
						int int_9 = 1;
						unsigned int unsigned_int_7 = 1;
						int int_10 = 1;
						int_7 = int_6;
					}
				}
			}
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					float_2 = float_2 + float_1;
					long_2 = long_6 + long_2;
				}
			}
			int_8 = int_2;
			float_3 = float_2 * float_1;
			short_1 = short_3;
			short_1 = short_4;
			int_2 = int_8;
			float_4 = float_3 * float_1;
			if(1)
			{
				long_1 = long_6;
			}
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					double double_1 = 1;
					int int_1 = 1;
					int int_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					char char_1 = 1;
					int int_3 = 1;
					int int_4 = 1;
					float float_1 = 1;
					double double_2 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_3 = 1;
					long long_4 = 1;
					double double_4 = 1;
					int int_5 = 1;
					char char_2 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_5 = 1;
					int int_6 = 1;
					long long_5 = 1;
					unsigned int unsigned_int_6 = 1;
					unsigned int unsigned_int_8 = 1;
					int int_11 = 1;
					long long_3 = 1;
					double double_5 = 1;
					short short_1 = 1;
					short short_2 = 1;
					long long_6 = 1;
					char char_5 = 1;
					float float_2 = 1;
					int int_8 = 1;
					float float_3 = 1;
					short short_3 = 1;
					short short_4 = 1;
					float float_4 = 1;
					char char_4 = 1;
					int int_7 = 1;
					float float_5 = 1;
					int int_9 = 1;
					unsigned int unsigned_int_7 = 1;
					int int_10 = 1;
					float_2 = float_5 + float_1;
					double_1 = double_3 + double_4;
					int_3 = int_9 + int_2;
					unsigned_int_6 = unsigned_int_5;
					int_4 = int_5;
					unsigned_int_3 = unsigned_int_5 + unsigned_int_7;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				char char_1 = 1;
				int int_3 = 1;
				int int_4 = 1;
				float float_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_3 = 1;
				long long_4 = 1;
				double double_4 = 1;
				int int_5 = 1;
				char char_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_6 = 1;
				long long_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_8 = 1;
				int int_11 = 1;
				long long_3 = 1;
				double double_5 = 1;
				short short_1 = 1;
				short short_2 = 1;
				long long_6 = 1;
				char char_5 = 1;
				float float_2 = 1;
				int int_8 = 1;
				float float_3 = 1;
				short short_3 = 1;
				short short_4 = 1;
				float float_4 = 1;
				char char_4 = 1;
				int int_7 = 1;
				float float_5 = 1;
				int int_9 = 1;
				unsigned int unsigned_int_7 = 1;
				int int_10 = 1;
				unsigned_int_5 = unsigned_int_5;
				int_3 = int_10;
				short_4 = short_2 + short_1;
				char_3 = char_2;
			}
			float_3 = float_3;
		}
	}
	unsigned_int_6 = unsigned_int_3;
	unsigned_int_8 = unsigned_int_2;
	return int_11;
}
void v_mem_reg2ovlp( float parameter_1,short parameter_2,unsigned int parameter_3,unsigned int parameter_4,float parameter_5)
{
	int int_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	int int_3 = 1;
	float float_2 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_4 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	short short_4 = 1;
	double double_8 = 1;
	long long_5 = 1;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		int int_3 = 1;
		float float_2 = 1;
		char char_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		long long_4 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		short short_4 = 1;
		double double_8 = 1;
		long long_5 = 1;
		v_bns_depos(long_1,float_1,int_2);

		short_1 = short_2;
		int_2 = v_ksprintf(int_3,float_2,char_1);

		double_2 = double_3;
		int_4 = int_3;
		double_4 = double_1 + double_4;
		long_1 = long_1;
		double_1 = v_kputs(short_1,double_1);

		short_3 = short_2 + short_2;
		double_7 = double_5 + double_6;
		float_2 = float_1;
		char_3 = char_2 + char_1;
		int_1 = v_kputw(int_2,int_3,-1 );

		unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		}
		double_6 = double_5;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_4 * unsigned_int_2;
		short_2 = short_1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
		float_1 = v_kputc(int_4,float_1);

		int_4 = int_4 * int_4;
		int_5 = v_bns_pos2rid(long_1,long_2);

		short_1 = short_1 + short_3;
		long_3 = long_1 + long_1;
		long_3 = long_4;
		short_1 = short_4 * short_2;
		long_3 = long_2 + long_2;
		short_4 = short_4;
		double_2 = double_4 + double_8;
		long_4 = long_5;
	}
	long_4 = long_2;
}
void v_ks_introsort_128( int parameter_1,float parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_3 = int_1 + int_2;
	short_1 = short_2;
}
int v_mem_pair( char parameter_1,char parameter_2,int parameter_3,long parameter_4,float parameter_5,short parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_5 = 1;
	float float_2 = 1;
	double double_5 = 1;
	short short_4 = 1;
	short short_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	double double_6 = 1;
	int int_6 = 1;
	double double_7 = 1;
	float float_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = v_hash_64();

	long_2 = long_3;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_3;
	char_1 = char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long_3 = long_3;
			short_1 = short_1;
			v_ks_introsort_128(int_1,float_1);

			long_4 = long_3;
			int_4 = int_2 + int_3;
			unsigned_int_3 = unsigned_int_1;
			int_2 = int_1 * int_3;
		}
	}
	char_2 = char_3;
	char_1 = char_1 + char_3;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			short short_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			long long_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_5 = 1;
			float float_2 = 1;
			double double_5 = 1;
			short short_4 = 1;
			short short_5 = 1;
			short short_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_4 = 1;
			long long_5 = 1;
			long long_6 = 1;
			double double_6 = 1;
			int int_6 = 1;
			double double_7 = 1;
			float float_3 = 1;
			long_4 = long_4 * long_3;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_1 = 1;
				short short_1 = 1;
				int int_1 = 1;
				float float_1 = 1;
				long long_4 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_1 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_5 = 1;
				float float_2 = 1;
				double double_5 = 1;
				short short_4 = 1;
				short short_5 = 1;
				short short_2 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double double_6 = 1;
				int int_6 = 1;
				double double_7 = 1;
				float float_3 = 1;
				short_3 = short_2 * short_2;
			}
			double_1 = double_1 * double_1;
			if(1)
			{
				char_3 = char_1;
			}
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				char char_1 = 1;
				short short_1 = 1;
				int int_1 = 1;
				float float_1 = 1;
				long long_4 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				char char_2 = 1;
				char char_3 = 1;
				double double_1 = 1;
				unsigned int unsigned_int_4 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_5 = 1;
				float float_2 = 1;
				double double_5 = 1;
				short short_4 = 1;
				short short_5 = 1;
				short short_2 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_4 = 1;
				long long_5 = 1;
				long long_6 = 1;
				double double_6 = 1;
				int int_6 = 1;
				double double_7 = 1;
				float float_3 = 1;
				unsigned_int_3 = unsigned_int_4 + unsigned_int_1;
				double_2 = double_2;
				unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
				short_2 = short_1;
				if(1)
				{
					double_2 = double_1 * double_1;
				}
				unsigned_int_1 = unsigned_int_6;
				if(1)
				{
					double_1 = double_1;
				}
				if(1)
				{
					double_1 = double_3 + double_2;
				}
				unsigned_int_7 = unsigned_int_1 * unsigned_int_3;
				int_3 = int_5;
				if(1)
				{
					int_1 = int_4 * int_1;
				}
				double_4 = double_2 * double_3;
				float_2 = float_2;
				long_2 = long_3;
			}
		}
		double_5 = double_5;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_5 = 1;
		float float_2 = 1;
		double double_5 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		double double_6 = 1;
		int int_6 = 1;
		double double_7 = 1;
		float float_3 = 1;
		long_1 = long_5 * long_6;
		double_2 = double_2 + double_5;
		double_6 = double_1 * double_3;
		long_6 = long_6;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		double_2 = double_2;
		int_6 = int_2 * int_5;
		double_5 = double_7;
		double_7 = double_1 + double_1;
		int_5 = int_4 * int_6;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				long_3 = long_5 + long_2;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_5 = 1;
		float float_2 = 1;
		double double_5 = 1;
		short short_4 = 1;
		short short_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		double double_6 = 1;
		int int_6 = 1;
		double double_7 = 1;
		float float_3 = 1;
		float_2 = float_3;
	}
	int_3 = int_5 * int_5;
	short_4 = short_5;
	return int_1;
}
int v_mem_matesw( long parameter_1,char parameter_2,long parameter_3,char parameter_4,short parameter_5,int parameter_6,int parameter_7,float parameter_8)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_2 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	char char_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	int int_5 = 1;
	int int_6 = 1;
	double double_4 = 1;
	long long_4 = 1;
	int int_7 = 1;
	short short_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	int int_8 = 1;
	double double_3 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_5 = 1;
	short short_4 = 1;
	char char_4 = 1;
	float float_6 = 1;
	char char_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_6 = 1;
	short short_6 = 1;
	int_2 = int_1 * int_1;
	int_2 = int_2 * int_1;
	int_3 = int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_2 = unsigned_int_1;
		double_1 = double_1;
		if(1)
		{
			double_1 = double_1;
		}
	}
	if(1)
	{
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_2 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		char char_3 = 1;
		long long_3 = 1;
		float float_3 = 1;
		int int_5 = 1;
		int int_6 = 1;
		double double_4 = 1;
		long long_4 = 1;
		int int_7 = 1;
		short short_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		int int_8 = 1;
		double double_3 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_1 = 1;
		long long_5 = 1;
		short short_4 = 1;
		char char_4 = 1;
		float float_6 = 1;
		char char_5 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_6 = 1;
		short short_6 = 1;
		int_2 = int_2;
		double_2 = double_2 + double_3;
		short_2 = short_1 + short_2;
		if(1)
		{
			double_2 = double_3;
		}
		char_2 = char_1 + char_1;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		if(1)
		{
			double_2 = double_2 + double_2;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				float_1 = float_1 * float_2;
			}
			long_2 = long_1 + long_1;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		}
		if(1)
		{
			int_4 = v_mem_infer_dir(long_2,char_3,unsigned_int_3,long_3);

			float_3 = v_ksw_align2(int_5,unsigned_int_3,int_6,double_4,int_4,long_4,int_1,int_5,int_3,int_6,int_7,short_3);

			long_1 = long_5 * long_1;
			short_1 = short_2 + short_3;
		}
		if(1)
		{
			char_2 = char_3;
			double_4 = double_2;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_4 = 1;
			char char_3 = 1;
			long long_3 = 1;
			float float_3 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_4 = 1;
			long long_4 = 1;
			int int_7 = 1;
			short short_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_8 = 1;
			double double_3 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_5 = 1;
			short short_4 = 1;
			char char_4 = 1;
			float float_6 = 1;
			char char_5 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_6 = 1;
			short short_6 = 1;
			char_1 = char_4;
		}
		if(1)
		{
			float_4 = float_1;
		}
		if(1)
		{
			short_2 = v_bns_fetch_seq(int_3,float_4,int_5,float_5,short_2,int_6);

			int_7 = int_6;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_4 = 1;
			char char_3 = 1;
			long long_3 = 1;
			float float_3 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_4 = 1;
			long long_4 = 1;
			int int_7 = 1;
			short short_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_8 = 1;
			double double_3 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_5 = 1;
			short short_4 = 1;
			char char_4 = 1;
			float float_6 = 1;
			char char_5 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_6 = 1;
			short short_6 = 1;
			short_3 = short_2;
			double_4 = double_2;
			int_4 = v_mem_sort_dedup_patch(unsigned_int_2,short_3,double_2,unsigned_int_1,int_1,double_2);

			int_6 = int_1 * int_1;
			long_3 = long_4 * long_2;
			float_3 = float_5 + float_6;
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				short short_2 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_4 = 1;
				char char_3 = 1;
				long long_3 = 1;
				float float_3 = 1;
				int int_5 = 1;
				int int_6 = 1;
				double double_4 = 1;
				long long_4 = 1;
				int int_7 = 1;
				short short_3 = 1;
				float float_4 = 1;
				float float_5 = 1;
				int int_8 = 1;
				double double_3 = 1;
				short short_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_1 = 1;
				long long_5 = 1;
				short short_4 = 1;
				char char_4 = 1;
				float float_6 = 1;
				char char_5 = 1;
				double double_5 = 1;
				double double_6 = 1;
				short short_5 = 1;
				unsigned int unsigned_int_4 = 1;
				long long_6 = 1;
				short short_6 = 1;
				double_1 = double_5;
				double_6 = double_1 * double_5;
				short_4 = short_1 * short_1;
				float_6 = float_1;
				int_1 = int_3;
				char_3 = char_1;
				int_1 = int_1;
				double_1 = double_3;
				short_5 = short_4 + short_3;
				int_5 = int_5 + int_8;
				double_1 = double_4;
				for(int looper_5=0; looper_5<1;looper_5++)
				{
					if(1)
					{
						unsigned_int_1 = unsigned_int_2;
					}
				}
				short_1 = short_4 * short_5;
				for(int looper_6=0; looper_6<1;looper_6++)
				{
					int int_1 = 1;
					int int_2 = 1;
					int int_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					short short_2 = 1;
					long long_2 = 1;
					unsigned int unsigned_int_3 = 1;
					int int_4 = 1;
					char char_3 = 1;
					long long_3 = 1;
					float float_3 = 1;
					int int_5 = 1;
					int int_6 = 1;
					double double_4 = 1;
					long long_4 = 1;
					int int_7 = 1;
					short short_3 = 1;
					float float_4 = 1;
					float float_5 = 1;
					int int_8 = 1;
					double double_3 = 1;
					short short_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					long long_1 = 1;
					long long_5 = 1;
					short short_4 = 1;
					char char_4 = 1;
					float float_6 = 1;
					char char_5 = 1;
					double double_5 = 1;
					double double_6 = 1;
					short short_5 = 1;
					unsigned int unsigned_int_4 = 1;
					long long_6 = 1;
					short short_6 = 1;
					unsigned_int_2 = unsigned_int_1 * unsigned_int_4;
				}
				float_2 = float_3;
			}
			char_1 = char_1 * char_5;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_4 = 1;
			char char_3 = 1;
			long long_3 = 1;
			float float_3 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_4 = 1;
			long long_4 = 1;
			int int_7 = 1;
			short short_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_8 = 1;
			double double_3 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_5 = 1;
			short short_4 = 1;
			char char_4 = 1;
			float float_6 = 1;
			char char_5 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_6 = 1;
			short short_6 = 1;
			long_6 = long_1 * long_5;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_2 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_4 = 1;
			char char_3 = 1;
			long long_3 = 1;
			float float_3 = 1;
			int int_5 = 1;
			int int_6 = 1;
			double double_4 = 1;
			long long_4 = 1;
			int int_7 = 1;
			short short_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			int int_8 = 1;
			double double_3 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_5 = 1;
			short short_4 = 1;
			char char_4 = 1;
			float float_6 = 1;
			char char_5 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_5 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_6 = 1;
			short short_6 = 1;
			short_4 = short_4 * short_6;
		}
		int_7 = int_5;
	}
	return int_8;
}
int v_get_rlen( int parameter_1,unsigned int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		float_1 = float_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			int_1 = int_1;
		}
	}
	return int_2;
}
float v_ks_resize( int parameter_1,long parameter_2)
{
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	if(1)
	{
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double_1 = double_2;
		long_2 = long_1 + long_2;
		short_1 = short_1;
	}
	return float_1;
}
void v_mem_aln2sam( short parameter_1,int parameter_2,short parameter_3,float parameter_4,int parameter_5,short parameter_6,int parameter_7,int parameter_8,int uni_para)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_4 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_2 = 1;
	char char_5 = 1;
	char char_6 = 1;
	short short_3 = 1;
	short short_4 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_6 = 1;
	long long_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_3 = 1;
	double double_8 = 1;
	float float_4 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_11 = 1;
	char char_7 = 1;
	char char_8 = 1;
	char char_9 = 1;
	long long_6 = 1;
	double double_9 = 1;
	float float_5 = 1;
	int int_7 = 1;
	short short_5 = 1;
	short short_6 = 1;
	unsigned int unsigned_int_10 = 1;
	double_1 = double_1;
	int_1 = int_1 + int_1;
	char controller4vul_22[1];
	fgets(controller4vul_22 ,2 ,stdin);
	if( strcmp( controller4vul_22, "}") < 0)
	{
		int_1 = v_kputw(int_1,int_1,uni_para);

		double_1 = double_1;
	}
	int_1 = int_2 * int_3;
	char_1 = char_1;
	short_1 = short_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		int_2 = int_1 * int_1;
	}
	float_2 = float_1 + float_1;
	int_4 = int_2 * int_2;
	long_1 = long_1 * long_1;
	int_2 = int_2 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_3;
	double_1 = double_2 * double_2;
	double_3 = double_3;
	if(1)
	{
		int_3 = int_1;
		double_3 = double_2 + double_4;
		double_4 = double_5 + double_4;
		long_1 = long_2;
		double_5 = double_1;
		double_4 = double_3 + double_1;
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				unsigned_int_1 = unsigned_int_3;
				if(1)
				{
					long_2 = long_3 * long_3;
				}
				char_1 = char_1 * char_1;
				char_2 = char_1;
			}
		}
		if(1)
		{
			char_2 = char_1 * char_3;
		}
	}
	if(1)
	{
		double_5 = double_3;
	}
	char_1 = char_4;
	if(1)
	{
		if(1)
		{
			short_1 = short_2 * short_2;
		}
		if(1)
		{
			char_5 = char_4 * char_4;
		}
		char_5 = char_6;
		short_4 = short_3 * short_2;
		long_2 = long_2 * long_4;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_4;
			double_2 = double_4 * double_4;
			if(1)
			{
				int_4 = int_3;
			}
			if(1)
			{
				short_4 = short_2;
			}
		}
		if(1)
		{
			char_3 = char_3 * char_5;
		}
	}
	if(1)
	{
		long_1 = long_2;
	}
	unsigned_int_5 = unsigned_int_4 * unsigned_int_1;
	if(1)
	{
		int_1 = int_5 * int_4;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_2 = 1;
		char char_5 = 1;
		char char_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		long long_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float float_3 = 1;
		double double_8 = 1;
		float float_4 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_11 = 1;
		char char_7 = 1;
		char char_8 = 1;
		char char_9 = 1;
		long long_6 = 1;
		double double_9 = 1;
		float float_5 = 1;
		int int_7 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_10 = 1;
		int_5 = int_5;
		if(1)
		{
			if(1)
			{
				char_5 = char_6 * char_2;
			}
			if(1)
			{
				char_7 = char_7 * char_5;
			}
		}
		unsigned_int_5 = unsigned_int_3;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_3 = unsigned_int_6 + unsigned_int_6;
		}
		short_4 = short_1 * short_4;
		if(1)
		{
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			char char_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_4 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_3 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			short short_2 = 1;
			char char_5 = 1;
			char char_6 = 1;
			short short_3 = 1;
			short short_4 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_6 = 1;
			long long_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_7 = 1;
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			float float_3 = 1;
			double double_8 = 1;
			float float_4 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_11 = 1;
			char char_7 = 1;
			char char_8 = 1;
			char char_9 = 1;
			long long_6 = 1;
			double double_9 = 1;
			float float_5 = 1;
			int int_7 = 1;
			short short_5 = 1;
			short short_6 = 1;
			unsigned int unsigned_int_10 = 1;
			int_4 = int_5 + int_5;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				double_4 = double_6 + double_4;
			}
			char_6 = char_8 * char_7;
		}
		if(1)
		{
			long_3 = long_1 + long_5;
		}
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_2 = 1;
		char char_5 = 1;
		char char_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		long long_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float float_3 = 1;
		double double_8 = 1;
		float float_4 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_11 = 1;
		char char_7 = 1;
		char char_8 = 1;
		char char_9 = 1;
		long long_6 = 1;
		double double_9 = 1;
		float float_5 = 1;
		int int_7 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_10 = 1;
		unsigned_int_6 = unsigned_int_3;
		if(1)
		{
			if(1)
			{
				int_6 = int_2;
			}
			if(1)
			{
				double_3 = double_4;
			}
		}
		double_1 = double_5;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			double_4 = double_3 * double_3;
		}
		char_5 = char_1 * char_9;
		if(1)
		{
			unsigned_int_6 = unsigned_int_7;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned_int_3 = unsigned_int_4;
			}
			double_1 = double_7 * double_7;
		}
		if(1)
		{
			int_2 = int_3 * int_1;
		}
	}
	if(1)
	{
		double_4 = double_7;
		unsigned_int_8 = unsigned_int_5;
		unsigned_int_6 = unsigned_int_9 + unsigned_int_3;
		float_2 = float_2 + float_3;
	}
	if(1)
	{
		double_8 = double_1 * double_3;
		unsigned_int_9 = unsigned_int_6 * unsigned_int_9;
	}
	if(1)
	{
		double_8 = double_3 * double_4;
		short_1 = short_3;
	}
	if(1)
	{
		int_1 = int_4;
		int_2 = int_5;
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				char char_1 = 1;
				short short_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_4 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				short short_2 = 1;
				char char_5 = 1;
				char char_6 = 1;
				short short_3 = 1;
				short short_4 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_6 = 1;
				long long_5 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned int unsigned_int_9 = 1;
				float float_3 = 1;
				double double_8 = 1;
				float float_4 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_11 = 1;
				char char_7 = 1;
				char char_8 = 1;
				char char_9 = 1;
				long long_6 = 1;
				double double_9 = 1;
				float float_5 = 1;
				int int_7 = 1;
				short short_5 = 1;
				short short_6 = 1;
				unsigned int unsigned_int_10 = 1;
				long_3 = long_5 + long_6;
			}
		}
		if(1)
		{
			unsigned_int_4 = unsigned_int_1;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				double double_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				char char_1 = 1;
				short short_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_4 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				short short_2 = 1;
				char char_5 = 1;
				char char_6 = 1;
				short short_3 = 1;
				short short_4 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_6 = 1;
				long long_5 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned int unsigned_int_9 = 1;
				float float_3 = 1;
				double double_8 = 1;
				float float_4 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_11 = 1;
				char char_7 = 1;
				char char_8 = 1;
				char char_9 = 1;
				long long_6 = 1;
				double double_9 = 1;
				float float_5 = 1;
				int int_7 = 1;
				short short_5 = 1;
				short short_6 = 1;
				unsigned int unsigned_int_10 = 1;
				char_1 = char_5 * char_2;
				char_5 = char_5 + char_1;
				if(1)
				{
					double_2 = double_3 + double_5;
				}
				unsigned_int_2 = unsigned_int_7;
				unsigned_int_5 = unsigned_int_8;
				int_2 = int_3 * int_6;
				float_3 = float_4;
				int_5 = int_2;
				double_5 = double_1 * double_3;
				for(int looper_8=0; looper_8<1;looper_8++)
				{
					long_4 = long_5;
					double_8 = double_2;
				}
				double_3 = double_4 + double_3;
				double_10 = double_2 + double_9;
				unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
				float_2 = float_4;
				float_3 = float_5 + float_1;
			}
		}
		if(1)
		{
			int_5 = int_5;
		}
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_2 = 1;
		char char_5 = 1;
		char char_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		long long_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float float_3 = 1;
		double double_8 = 1;
		float float_4 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_11 = 1;
		char char_7 = 1;
		char char_8 = 1;
		char char_9 = 1;
		long long_6 = 1;
		double double_9 = 1;
		float float_5 = 1;
		int int_7 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_10 = 1;
		short_2 = short_1;
		int_1 = int_6 * int_7;
	}
	if(1)
	{
		double_8 = double_6 * double_10;
		int_2 = int_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_4 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_2 = 1;
		char char_5 = 1;
		char char_6 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_6 = 1;
		long long_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float float_3 = 1;
		double double_8 = 1;
		float float_4 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_11 = 1;
		char char_7 = 1;
		char char_8 = 1;
		char char_9 = 1;
		long long_6 = 1;
		double double_9 = 1;
		float float_5 = 1;
		int int_7 = 1;
		short short_5 = 1;
		short short_6 = 1;
		unsigned int unsigned_int_10 = 1;
		float_1 = float_4;
		short_6 = short_5 * short_5;
		long_2 = long_3;
		short_3 = short_2;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				double double_1 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				char char_1 = 1;
				short short_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				int int_4 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_3 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				short short_2 = 1;
				char char_5 = 1;
				char char_6 = 1;
				short short_3 = 1;
				short short_4 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				double double_6 = 1;
				long long_5 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_7 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned int unsigned_int_9 = 1;
				float float_3 = 1;
				double double_8 = 1;
				float float_4 = 1;
				double double_10 = 1;
				unsigned int unsigned_int_11 = 1;
				char char_7 = 1;
				char char_8 = 1;
				char char_9 = 1;
				long long_6 = 1;
				double double_9 = 1;
				float float_5 = 1;
				int int_7 = 1;
				short short_5 = 1;
				short short_6 = 1;
				unsigned int unsigned_int_10 = 1;
				unsigned_int_10 = unsigned_int_5 * unsigned_int_6;
			}
		}
	}
	unsigned_int_3 = unsigned_int_11 + unsigned_int_1;
}
void v_kputl( long parameter_1,float parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_1 = 1;
	short short_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short_1 = short_1 * short_1;
	short_2 = short_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_1 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double_1 = double_1;
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		float_1 = float_2;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_1 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short_3 = short_2;
		float_2 = v_kputc(int_1,float_1);

		double_3 = double_2 * double_3;
		double_5 = double_3 * double_4;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_5 = 1;
		double double_6 = 1;
		double double_1 = 1;
		short short_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	}
	double_5 = double_6 * double_2;
}
double v_kputsn( char parameter_1,int parameter_2,float parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		long long_1 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 + double_1;
		long_1 = long_1 + long_1;
	}
	int_2 = int_1 * int_1;
	int_3 = int_4;
	float_2 = float_1 * float_1;
	return double_2;
}
double v_kputs( short parameter_1,double parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	return double_1;
	double_2 = v_kputsn(char_1,int_1,float_1);

}
int v_infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return int_1;
}
double v_mem_reg2aln( long parameter_1,float parameter_2,double parameter_3,int parameter_4,unsigned int parameter_5,int parameter_6)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_5 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_6 = 1;
	long long_3 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_5 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int_1 = v_mem_approx_mapq_se(char_1,unsigned_int_1);

	unsigned_int_3 = unsigned_int_2 * unsigned_int_3;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_5 = 1;
		long long_2 = 1;
		float float_2 = 1;
		int int_6 = 1;
		long long_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_1 = int_1 + int_2;
		double_3 = double_1 + double_2;
	}
	int_3 = int_3 + int_1;
	char_1 = char_1;
	if(1)
	{
		int_1 = int_3;
		double_3 = double_2 * double_4;
	}
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_5 = 1;
		long long_2 = 1;
		float float_2 = 1;
		int int_6 = 1;
		long long_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_4 = v_infer_bw(int_2,int_3,int_4,int_2,int_4,int_3);

		v_bns_depos(long_1,float_1,int_4);

		unsigned_int_2 = unsigned_int_3 + unsigned_int_4;
		v_bwa_gen_cigar2(short_1,int_5,int_4,int_4,int_2,int_1,long_2,float_2,int_3,float_2,unsigned_int_1,int_1,int_3,int_3,int_6);

		int_2 = v_bns_pos2rid(long_1,long_1);

		double_5 = double_5 * double_4;
	}
	char controller_4[3];
	fgets(controller_4 ,3 ,stdin);
	if( strcmp( controller_4, "r4") > 0)
	{
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_5 = 1;
		long long_2 = 1;
		float float_2 = 1;
		int int_6 = 1;
		long long_3 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_5 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_1 = int_5 + int_5;
		short_2 = short_3;
	}
	long_2 = long_3;
	return double_2;
}
unsigned int v_get_pri_idx( double parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int_2 = int_1 + int_2;
	if(1)
	{
	}
	return unsigned_int_1;
}
void v_mem_gen_alt( float parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,char parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	long long_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	float float_4 = 1;
	int int_5 = 1;
	float float_5 = 1;
	double double_5 = 1;
	double double_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_6 = 1;
	char char_2 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_6 = 1;
	unsigned_int_1 = unsigned_int_2;
	int_1 = v_kputw(int_1,int_2,-1 );

	int_1 = int_3;
	unsigned_int_3 = v_get_pri_idx(double_1,float_1,int_4);

	long_2 = long_1 * long_1;
	float_2 = float_1 * float_1;
	int_2 = int_3 + int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_2 = v_kputsn(char_1,int_4,float_2);

		float_2 = float_3;
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "||") > 0)
		{
			double_3 = v_kputs(short_1,double_4);

			long_3 = long_1 * long_3;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_1 = 1;
				float float_1 = 1;
				int int_4 = 1;
				long long_1 = 1;
				long long_2 = 1;
				float float_2 = 1;
				double double_2 = 1;
				char char_1 = 1;
				float float_3 = 1;
				double double_3 = 1;
				short short_1 = 1;
				double double_4 = 1;
				long long_3 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_5 = 1;
				long long_4 = 1;
				float float_4 = 1;
				int int_5 = 1;
				float float_5 = 1;
				double double_5 = 1;
				double double_6 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_6 = 1;
				char char_2 = 1;
				double double_7 = 1;
				double double_8 = 1;
				float float_6 = 1;
				short_2 = short_2;
			}
		}
	}
	if(1)
	{
		double_2 = double_2;
	}
	short_3 = short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		float float_1 = 1;
		int int_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_2 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		long long_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_4 = 1;
		float float_4 = 1;
		int int_5 = 1;
		float float_5 = 1;
		double double_5 = 1;
		double double_6 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_6 = 1;
		char char_2 = 1;
		double double_7 = 1;
		double double_8 = 1;
		float float_6 = 1;
		double_3 = double_1 * double_3;
		if(1)
		{
			unsigned_int_1 = unsigned_int_4 + unsigned_int_5;
		}
		if(1)
		{
			double_3 = double_4;
		}
		double_3 = v_mem_reg2aln(long_4,float_4,double_1,int_5,unsigned_int_5,int_4);

		int_6 = int_5 + int_4;
		long_1 = long_2;
		unsigned_int_2 = unsigned_int_6;
		double_2 = double_4 * double_4;
		long_3 = long_2;
		float_3 = float_5;
		float_2 = v_kputc(int_5,float_5);

		char_2 = char_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			float float_1 = 1;
			int int_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float float_2 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_3 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			long long_3 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_4 = 1;
			float float_4 = 1;
			int int_5 = 1;
			float float_5 = 1;
			double double_5 = 1;
			double double_6 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_6 = 1;
			char char_2 = 1;
			double double_7 = 1;
			double double_8 = 1;
			float float_6 = 1;
			double_3 = double_5;
			float_1 = float_6;
		}
		double_6 = double_6;
		double_8 = double_2 + double_7;
		unsigned_int_6 = unsigned_int_2 * unsigned_int_4;
		int_2 = int_6;
		int_6 = int_2 * int_6;
	}
	int_4 = int_5;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		float_1 = float_1 + float_3;
	}
	double_5 = double_5;
	double_3 = double_3 * double_3;
	double_4 = double_6 + double_1;
	unsigned_int_1 = unsigned_int_1;
	v_kputl(long_3,float_3);

}
void v_mem_reg2sam( char parameter_1,int parameter_2,char parameter_3,float parameter_4,long parameter_5,int parameter_6,double parameter_7,int uni_para)
{
	double double_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_4 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_1 = double_1 * double_1;
	short_1 = short_1 * short_1;
	float_1 = float_1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	long_3 = long_1 + long_2;
	long_3 = long_3 + long_3;
	float_2 = float_1 + float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float_1 = float_3;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
		if(1)
		{
			int_2 = int_1 * int_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_2 + unsigned_int_4;
		}
		float_2 = float_3 * float_2;
		double_3 = double_4;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		unsigned_int_3 = unsigned_int_4 * unsigned_int_4;
		int_1 = int_2 * int_3;
		if(1)
		{
			int_2 = int_3 + int_4;
		}
		if(1)
		{
			float_3 = float_1;
		}
		if(1)
		{
			double_3 = double_4 + double_2;
		}
		int_3 = int_1;
		short_1 = short_1;
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double_3 = double_1;
		}
		if(1)
		{
			int_1 = int_4;
		}
	}
	if(1)
	{
		double double_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_4 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_4;
		float_4 = float_4 * float_4;
		float_6 = float_5 + float_2;
		char_2 = char_1 + char_1;
	}
	if(1)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			unsigned_int_1 = unsigned_int_4;
		}
		int_1 = int_4 * int_2;
	}
	short_2 = short_1;
	if(1)
	{
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			int_3 = int_1;
		}
		int_4 = int_4;
	}
}
int v_mem_approx_mapq_se( char parameter_1,unsigned int parameter_2)
{
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	float float_2 = 1;
	short short_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double_1 = double_1;
	int_1 = int_2;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	short_2 = short_1 + short_1;
	char_1 = char_1 + char_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_2;
	}
	if(1)
	{
		int_3 = int_2 + int_1;
		unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
		float_1 = float_1;
		short_2 = short_1 + short_3;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		float float_2 = 1;
		short short_4 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_1 = double_1 * double_1;
		short_4 = short_4;
	}
	if(1)
	{
		short_3 = short_1;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		float float_2 = 1;
		short short_4 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double_1 = double_2;
	}
	if(1)
	{
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		float float_2 = 1;
		short short_4 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned_int_5 = unsigned_int_3 + unsigned_int_4;
	}
	float_1 = float_2 * float_2;
	return int_3;
}
long v_hash_64()
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	char char_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_2 = short_1 + short_1;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = int_1 + int_1;
	long_1 = long_2;
	char_1 = char_1;
	double_1 = double_3;
	unsigned_int_2 = unsigned_int_2;
	return long_2;
}
int v_mem_mark_primary_se( unsigned int parameter_1,int parameter_2,float parameter_3,int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_2 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int_1 = int_2;
	char_2 = char_1 + char_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_1 = long_1;
		if(1)
		{
			float_1 = float_1;
		}
	}
	double_1 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_1 = unsigned_int_1;
		unsigned_int_2 = unsigned_int_3;
		if(1)
		{
			long_1 = long_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_2 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float_1 = float_2;
		if(1)
		{
			double_2 = double_2 + double_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int_1 = int_3;
		}
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			double double_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			short short_1 = 1;
			short short_2 = 1;
			if(1)
			{
				double_2 = double_2;
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					char char_1 = 1;
					char char_2 = 1;
					long long_1 = 1;
					float float_1 = 1;
					double double_1 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					int int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					float float_2 = 1;
					double double_2 = 1;
					int int_4 = 1;
					int int_5 = 1;
					int int_6 = 1;
					short short_1 = 1;
					short short_2 = 1;
					int_4 = int_5;
				}
			}
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				long long_1 = 1;
				float float_1 = 1;
				double double_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_2 = 1;
				double double_2 = 1;
				int int_4 = 1;
				int int_5 = 1;
				int int_6 = 1;
				short short_1 = 1;
				short short_2 = 1;
				int_6 = int_4;
			}
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_2 = 1;
			double double_2 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			short short_1 = 1;
			short short_2 = 1;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				long_1 = v_hash_64();

				short_2 = short_1 * short_2;
			}
			short_1 = short_2;
		}
	}
	if(1)
	{
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			unsigned_int_2 = unsigned_int_3;
		}
	}
	unsigned_int_4 = unsigned_int_4 * unsigned_int_4;
	return int_3;
}
int v_mem_sam_pe( int parameter_1,short parameter_2,float parameter_3,int parameter_4,float parameter_5,unsigned int parameter_6,int parameter_7,int uni_para)
{
	char char_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	char char_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_8 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_11 = 1;
	double double_8 = 1;
	double double_9 = 1;
	unsigned int unsigned_int_13 = 1;
	unsigned int unsigned_int_14 = 1;
	double double_10 = 1;
	unsigned int unsigned_int_15 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_5 = 1;
	short short_6 = 1;
	double double_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_9 = 1;
	int int_9 = 1;
	double double_6 = 1;
	double double_7 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_12 = 1;
	float float_4 = 1;
	float float_5 = 1;
	char char_5 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_10 = 1;
	v_mem_reg2sam(char_1,int_1,char_1,float_1,long_1,int_2,double_1,uni_para);

	float_1 = float_2;
	double_2 = double_1;
	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	long_2 = long_3;
	double_1 = double_3;
	float_3 = float_2 + float_2;
	int_4 = int_3 * int_2;
	int_6 = int_5 + int_5;
	short_2 = short_2;
	double_3 = double_2;
	unsigned_int_3 = unsigned_int_4;
	if(1)
	{
		char char_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		char char_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_8 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_11 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_13 = 1;
		unsigned int unsigned_int_14 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_15 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_5 = 1;
		short short_6 = 1;
		double double_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_9 = 1;
		int int_9 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_12 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_10 = 1;
		int int_10 = 1;
		short_2 = short_2 + short_2;
		int_7 = int_1 + int_6;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_4;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				if(1)
				{
					double_3 = double_4 * double_1;
				}
			}
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				unsigned_int_1 = unsigned_int_3;
			}
		}
		int_4 = int_5;
		char_1 = char_2;
	}
	short_2 = short_1;
	short_3 = short_3;
	if(1)
	{
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		int int_1 = 1;
		float float_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		char char_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_8 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_11 = 1;
		double double_8 = 1;
		double double_9 = 1;
		unsigned int unsigned_int_13 = 1;
		unsigned int unsigned_int_14 = 1;
		double double_10 = 1;
		unsigned int unsigned_int_15 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_5 = 1;
		short short_6 = 1;
		double double_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_9 = 1;
		int int_9 = 1;
		double double_6 = 1;
		double double_7 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_12 = 1;
		float float_4 = 1;
		float float_5 = 1;
		char char_5 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_10 = 1;
		int int_10 = 1;
		unsigned_int_6 = unsigned_int_5 + unsigned_int_5;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_3;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				if(1)
				{
					char char_1 = 1;
					int int_1 = 1;
					float float_1 = 1;
					long long_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					float float_2 = 1;
					double double_2 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					long long_2 = 1;
					long long_3 = 1;
					double double_3 = 1;
					float float_3 = 1;
					int int_3 = 1;
					int int_4 = 1;
					int int_5 = 1;
					int int_6 = 1;
					short short_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					double double_4 = 1;
					char char_2 = 1;
					short short_3 = 1;
					unsigned int unsigned_int_8 = 1;
					int int_8 = 1;
					char char_4 = 1;
					unsigned int unsigned_int_11 = 1;
					double double_8 = 1;
					double double_9 = 1;
					unsigned int unsigned_int_13 = 1;
					unsigned int unsigned_int_14 = 1;
					double double_10 = 1;
					unsigned int unsigned_int_15 = 1;
					int int_7 = 1;
					unsigned int unsigned_int_5 = 1;
					unsigned int unsigned_int_6 = 1;
					short short_5 = 1;
					short short_6 = 1;
					double double_5 = 1;
					long long_4 = 1;
					unsigned int unsigned_int_7 = 1;
					unsigned int unsigned_int_9 = 1;
					int int_9 = 1;
					double double_6 = 1;
					double double_7 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_12 = 1;
					float float_4 = 1;
					float float_5 = 1;
					char char_5 = 1;
					short short_4 = 1;
					unsigned int unsigned_int_10 = 1;
					int int_10 = 1;
					short_4 = short_3 + short_2;
				}
			}
			short_5 = short_6;
		}
		if(1)
		{
			double_5 = double_2;
		}
		char_1 = char_2 * char_1;
		long_4 = long_1 + long_1;
		unsigned_int_8 = unsigned_int_3 * unsigned_int_7;
		if(1)
		{
			char char_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			char char_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_8 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_11 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_13 = 1;
			unsigned int unsigned_int_14 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_15 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_5 = 1;
			short short_6 = 1;
			double double_5 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_9 = 1;
			int int_9 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_12 = 1;
			float float_4 = 1;
			float float_5 = 1;
			char char_5 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_10 = 1;
			int int_10 = 1;
			unsigned_int_10 = unsigned_int_6 + unsigned_int_9;
		}
		if(1)
		{
			short_5 = short_6 + short_5;
		}
		if(1)
		{
			int_9 = int_8 + int_4;
		}
		double_1 = double_5 + double_2;
		if(1)
		{
			double_7 = double_1 * double_6;
			char_1 = char_2;
			double_1 = double_5 + double_6;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				if(1)
				{
					unsigned_int_1 = unsigned_int_5;
				}
				char_3 = char_4;
			}
			unsigned_int_11 = unsigned_int_8 + unsigned_int_5;
			char_1 = char_4 * char_2;
			double_6 = double_2;
			double_4 = double_5 + double_7;
			unsigned_int_7 = unsigned_int_1;
		}
		if(1)
		{
			long_4 = long_1;
			double_6 = double_8;
			long_3 = long_3 + long_3;
		}
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_7 = unsigned_int_12;
			if(1)
			{
				int_9 = int_6;
				for(int looper_9=0; looper_9<1;looper_9++)
				{
					if(1)
					{
						unsigned_int_3 = unsigned_int_4 + unsigned_int_5;
					}
				}
				char_1 = char_1;
			}
		}
		if(1)
		{
			for(int looper_10=0; looper_10<1;looper_10++)
			{
				float_2 = float_1 + float_2;
			}
		}
		if(1)
		{
			unsigned_int_9 = unsigned_int_6;
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			unsigned_int_12 = unsigned_int_7;
			float_3 = float_4;
			long_1 = long_2;
			double_3 = double_1;
			double_1 = double_8;
			if(1)
			{
				int_4 = int_6;
				if(1)
				{
					double_2 = double_8;
				}
				char_1 = char_4 + char_2;
				float_5 = float_4 + float_2;
				char_1 = char_3 * char_2;
				char_4 = char_5;
			}
		}
		for(int looper_12=0; looper_12<1;looper_12++)
		{
			int_3 = int_4;
		}
		double_9 = double_2;
		float_5 = float_1;
		for(int looper_13=0; looper_13<1;looper_13++)
		{
			unsigned_int_13 = unsigned_int_5;
		}
		float_3 = float_4;
		if(1)
		{
			short_1 = short_5;
		}
		for(int looper_14=0; looper_14<1;looper_14++)
		{
			unsigned_int_11 = unsigned_int_14;
			double_3 = double_7 + double_10;
			if(1)
			{
				char_4 = char_5 * char_5;
			}
			for(int looper_15=0; looper_15<1;looper_15++)
			{
				long_4 = long_1 + long_4;
			}
			double_10 = double_10;
		}
	}
	if(1)
	{
		int_3 = int_2;
	}
	for(int looper_16=0; looper_16<1;looper_16++)
	{
		int_4 = int_8 + int_2;
		if(1)
		{
			if(1)
			{
				double_9 = double_10 * double_8;
			}
			if(1)
			{
				double_10 = double_10 * double_2;
			}
		}
		if(1)
		{
			long_3 = long_2;
		}
		if(1)
		{
			char char_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_4 = 1;
			char char_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_8 = 1;
			int int_8 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_11 = 1;
			double double_8 = 1;
			double double_9 = 1;
			unsigned int unsigned_int_13 = 1;
			unsigned int unsigned_int_14 = 1;
			double double_10 = 1;
			unsigned int unsigned_int_15 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_5 = 1;
			short short_6 = 1;
			double double_5 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_9 = 1;
			int int_9 = 1;
			double double_6 = 1;
			double double_7 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_12 = 1;
			float float_4 = 1;
			float float_5 = 1;
			char char_5 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_10 = 1;
			int int_10 = 1;
			int_8 = int_10;
		}
	}
	if(1)
	{
		int_2 = int_6 * int_6;
		int_2 = int_6;
		int_3 = int_1;
		if(1)
		{
			int_3 = int_8;
		}
	}
	short_1 = short_3;
	unsigned_int_15 = unsigned_int_13 + unsigned_int_13;
	if(1)
	{
		unsigned_int_8 = unsigned_int_14 + unsigned_int_11;
	}
	char_4 = char_2;
	short_1 = short_3;
	return int_4;
}
unsigned int v_worker2(int parameter_2,int parameter_3,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	double_2 = double_2;
	char controller4vul_20[1];
	fgets(controller4vul_20 ,2 ,stdin);
	if( strcmp( controller4vul_20, "M") < 0)
	{
		char controller4vul_21[2];
		fgets(controller4vul_21 ,3 ,stdin);
		if( strcmp( controller4vul_21, "SK") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int_1 = v_mem_sam_pe(int_1,short_1,float_1,int_1,float_2,unsigned_int_2,int_1,uni_para);

			unsigned_int_3 = unsigned_int_4;
		}
		if(1)
		{
			int_1 = int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			double_3 = double_3 + double_1;
			float_3 = float_1 + float_2;
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			short short_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_5 = unsigned_int_1 * unsigned_int_1;
		}
		int_2 = int_2;
		long_1 = long_1 * long_2;
		int_1 = int_3 * int_1;
	}
	return unsigned_int_6;
}
void v_filterCompetingAln( double parameter_1,int parameter_2,int parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float_1 = float_1;
	float_2 = float_1;
	double_3 = double_1 + double_2;
	float_2 = float_2 + float_3;
	double_1 = double_3 * double_3;
	float_1 = float_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double_1 = double_3 + double_4;
			int_3 = int_1 + int_2;
		}
		long_1 = long_1 * long_1;
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			long_1 = long_1 * long_2;
			int_2 = int_3;
			int_1 = int_3 * int_3;
		}
		char_2 = char_1 * char_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		}
		if(1)
		{
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_3 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int_4 = int_4 + int_1;
			unsigned_int_3 = unsigned_int_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_1;
	}
}
int v_mem_infer_dir( long parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_2 = char_1 * char_1;
	int_1 = int_1;
	short_1 = short_1 + short_1;
	double_2 = double_1 * double_1;
	return int_1;
}
int v_cal_sub( char parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long_1 = long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char_1 = char_2;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				float float_1 = 1;
				int int_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double_1 = double_2;
			}
		}
	}
	float_1 = float_1;
	return int_1;
}
void v_mem_pestat( float parameter_1,double parameter_2,int parameter_3,char parameter_4)
{
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double_1 = v_kvec_t(int_1);

	int_1 = v_cal_sub(char_1,short_1);

	v_ks_introsort_64(char_1,long_1);

	unsigned_int_1 = unsigned_int_2;
	int_1 = v_mem_infer_dir(long_1,char_1,unsigned_int_1,long_1);

}
int v_mem_test_and_remove_exact( double parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	int int_1 = 1;
	if(1)
	{
	}
	int_1 = int_1 * int_1;
	return int_1;
}
float v_kputc( int parameter_1,float parameter_2)
{
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	if(1)
	{
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double_2 = double_1 * double_2;
		double_1 = double_1;
		double_1 = double_2;
	}
	double_3 = double_3;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	return float_1;
}
int v_kputw( int parameter_1,int parameter_2,int uni_para)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	char char_3 = 1;
	long long_3 = 1;
	char * vul_var;
	vul_var=(char*)malloc(20*sizeof(char));
	strcpy(vul_var, "CWE-761");
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1;
	char controller4vul_23[2];
	fgets(controller4vul_23 ,3 ,stdin);
	if( strcmp( controller4vul_23, "&>") > 0)
	{
		if(uni_para == 436)
		{
			vul_var = vul_var + 1;
		}
		free(vul_var);
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	double_1 = double_1 * double_1;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double_3 = double_2 * double_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		long long_3 = 1;
		char_2 = char_1 + char_2;
		short_1 = short_1;
		char_3 = char_2 * char_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_1 = 1;
		char char_3 = 1;
		long long_3 = 1;
		long_1 = long_3;
	}
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
}
int v_push_cigar( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	int int_1 = 1;
	int int_4 = 1;
	int int_2 = 1;
	double double_1 = 1;
	int int_3 = 1;
	if(1)
	{
		int int_1 = 1;
		int int_4 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "#C") == 0)
		{
			int int_1 = 1;
			int int_4 = 1;
			int int_2 = 1;
			double double_1 = 1;
			int int_3 = 1;
			double_1 = double_1;
			int_2 = int_1 + int_1;
		}
		int_1 = int_2 * int_1;
	}
	if(1)
	{
		int int_1 = 1;
		int int_4 = 1;
		int int_2 = 1;
		double double_1 = 1;
		int int_3 = 1;
		int_1 = int_3;
	}
	return int_4;
}
int v_ksw_global2( int parameter_1,double parameter_2,int parameter_3,long parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,short parameter_13)
{
	int int_1 = 1;
	int int_2 = 1;
	return int_1;
	int_2 = v_push_cigar(int_2,int_1,int_1,int_1,int_1);

}
void v_bwa_gen_cigar2( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7,float parameter_8,int parameter_9,float parameter_10,unsigned int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	char char_4 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	char char_5 = 1;
	short short_4 = 1;
	double double_5 = 1;
	int int_6 = 1;
	long long_3 = 1;
	float float_4 = 1;
	int int_7 = 1;
	float float_5 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_6 = 1;
	unsigned int unsigned_int_6 = 1;
	double_1 = double_1 * double_2;
	char_3 = char_1 * char_2;
	double_1 = double_1;
	double_1 = double_3;
	float_1 = float_2;
	int_1 = int_1 * int_1;
	if(1)
	{
		int_1 = int_2;
	}
	if(1)
	{
		long_1 = long_1;
	}
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		double_1 = double_1 * double_3;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			unsigned_int_1 = unsigned_int_1;
		}
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			float_3 = float_2;
		}
	}
	if(1)
	{
		if(1)
		{
			char_3 = char_3;
			double_3 = double_1;
			double_3 = double_3;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_5 = 1;
		short short_4 = 1;
		double double_5 = 1;
		int int_6 = 1;
		long long_3 = 1;
		float float_4 = 1;
		int int_7 = 1;
		float float_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_6 = 1;
		int_2 = int_2;
		char_3 = char_2 * char_1;
		int_1 = int_1 + int_1;
		int_3 = int_2 + int_2;
		char_1 = char_4 + char_1;
		int_3 = v_kputw(int_1,int_4,-1 );

		double_1 = double_1;
		short_2 = short_1 * short_1;
		int_1 = int_4;
		long_2 = long_2;
		if(1)
		{
			long_2 = long_2 * long_1;
			short_3 = short_3;
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				char_5 = char_1;
			}
			double_1 = double_1;
			double_1 = double_2;
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				short_3 = short_1 * short_3;
			}
			float_1 = float_1 + float_3;
		}
		char_1 = char_2 + char_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		char char_4 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		char char_5 = 1;
		short short_4 = 1;
		double double_5 = 1;
		int int_6 = 1;
		long long_3 = 1;
		float float_4 = 1;
		int int_7 = 1;
		float float_5 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_5 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		char char_6 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_1;
		int_4 = int_3;
		short_4 = short_3;
		double_2 = double_1;
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			char char_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char char_5 = 1;
			short short_4 = 1;
			double double_5 = 1;
			int int_6 = 1;
			long long_3 = 1;
			float float_4 = 1;
			int int_7 = 1;
			float float_5 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_4 = 1;
			char char_6 = 1;
			unsigned int unsigned_int_6 = 1;
			double_2 = double_1 * double_3;
			short_2 = short_5 * short_2;
			double_4 = double_4;
			if(1)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					if(1)
					{
						char_4 = char_3 * char_5;
						char_1 = char_1;
						short_5 = short_5 * short_1;
						int_3 = int_5 * int_1;
					}
					if(1)
					{
						int_1 = v_ksw_global2(int_2,double_5,int_6,long_3,int_1,float_4,int_3,int_6,int_1,int_4,int_6,int_2,short_4);

						unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
					}
				}
				unsigned_int_2 = unsigned_int_5 + unsigned_int_1;
				double_4 = double_2;
			}
			if(1)
			{
				if(1)
				{
					unsigned_int_5 = unsigned_int_3 * unsigned_int_5;
					double_3 = double_2 * double_3;
					for(int looper_8=0; looper_8<1;looper_8++)
					{
						double double_1 = 1;
						double double_2 = 1;
						char char_1 = 1;
						char char_2 = 1;
						char char_3 = 1;
						double double_3 = 1;
						float float_1 = 1;
						float float_2 = 1;
						int int_1 = 1;
						int int_2 = 1;
						long long_1 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						float float_3 = 1;
						unsigned int unsigned_int_3 = 1;
						int int_3 = 1;
						char char_4 = 1;
						int int_4 = 1;
						short short_1 = 1;
						short short_2 = 1;
						short short_3 = 1;
						char char_5 = 1;
						short short_4 = 1;
						double double_5 = 1;
						int int_6 = 1;
						long long_3 = 1;
						float float_4 = 1;
						int int_7 = 1;
						float float_5 = 1;
						long long_2 = 1;
						unsigned int unsigned_int_4 = 1;
						short short_5 = 1;
						int int_5 = 1;
						unsigned int unsigned_int_5 = 1;
						double double_4 = 1;
						char char_6 = 1;
						unsigned int unsigned_int_6 = 1;
						char_6 = char_5;
					}
					double_2 = double_4;
					v_bns_get_seq(short_1,long_3,int_4,int_3,char_2);

					int_7 = int_1 * int_2;
				}
				short_2 = short_4 * short_5;
			}
			if(1)
			{
				int_6 = int_5;
			}
		}
		short_3 = short_5;
		int_7 = int_4;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_5;
		int_5 = int_7;
	}
	if(1)
	{
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			char char_4 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			char char_5 = 1;
			short short_4 = 1;
			double double_5 = 1;
			int int_6 = 1;
			long long_3 = 1;
			float float_4 = 1;
			int int_7 = 1;
			float float_5 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_4 = 1;
			char char_6 = 1;
			unsigned int unsigned_int_6 = 1;
			float_2 = v_kputc(int_7,float_5);

			unsigned_int_6 = unsigned_int_3;
		}
	}
	float_4 = float_1 + float_2;
}
int v_mem_patch_reg( char parameter_1,unsigned int parameter_2,int parameter_3,char parameter_4,char parameter_5,float parameter_6,int parameter_7)
{
	char char_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_1 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_6 = 1;
	char_1 = char_1 + char_1;
	short_2 = short_1 + short_1;
	if(1)
	{
	}
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	short_1 = short_2;
	if(1)
	{
		char_3 = char_2 + char_3;
	}
	if(1)
	{
		if(1)
		{
		}
	}
	char controller_7[3];
	fgets(controller_7 ,3 ,stdin);
	if( strcmp( controller_7, "BT") > 0)
	{
	}
	float_2 = float_1 * float_1;
	unsigned_int_3 = unsigned_int_1;
	if(1)
	{
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_4 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_6 = 1;
		unsigned_int_4 = unsigned_int_4;
	}
	char_2 = char_3 * char_4;
	float_2 = float_2 * float_2;
	v_bwa_gen_cigar2(short_3,int_3,int_4,int_5,int_1,int_1,long_1,float_3,int_2,float_4,unsigned_int_3,int_3,int_5,int_3,int_4);

	int_3 = int_5;
	if(1)
	{
		char char_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_4 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_1 = 1;
		int int_7 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_6 = 1;
		int_1 = int_3 * int_6;
	}
	if(1)
	{
	}
	double_1 = double_1;
	return int_7;
}
int v_mem_sort_dedup_patch( unsigned int parameter_1,short parameter_2,double parameter_3,unsigned int parameter_4,int parameter_5,double parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_3 = 1;
	int int_4 = 1;
	double double_5 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	long long_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_4 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1 + int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_4 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			double_2 = double_1 * double_2;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_3 = 1;
			int int_4 = 1;
			double double_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_1 = 1;
			int int_6 = 1;
			int int_7 = 1;
			long long_2 = 1;
			short short_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			short short_3 = 1;
			long long_4 = 1;
			int_1 = int_3;
			long_1 = long_1;
			char_1 = char_2;
			if(1)
			{
				unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
			}
			int_1 = int_3;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			int_2 = int_2;
			int_1 = int_1;
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int int_3 = 1;
					long long_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					long long_3 = 1;
					int int_4 = 1;
					double double_5 = 1;
					int int_5 = 1;
					unsigned int unsigned_int_5 = 1;
					float float_1 = 1;
					int int_6 = 1;
					int int_7 = 1;
					long long_2 = 1;
					short short_2 = 1;
					double double_3 = 1;
					short short_1 = 1;
					double double_4 = 1;
					short short_3 = 1;
					long long_4 = 1;
					long_3 = long_1 * long_2;
					short_1 = short_2;
				}
				if(1)
				{
					double_2 = double_1 + double_3;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_1 = 1;
				int int_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_3 = 1;
				long long_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				long long_3 = 1;
				int int_4 = 1;
				double double_5 = 1;
				int int_5 = 1;
				unsigned int unsigned_int_5 = 1;
				float float_1 = 1;
				int int_6 = 1;
				int int_7 = 1;
				long long_2 = 1;
				short short_2 = 1;
				double double_3 = 1;
				short short_1 = 1;
				double double_4 = 1;
				short short_3 = 1;
				long long_4 = 1;
				long_3 = long_3 * long_2;
				double_3 = double_4;
				double_3 = double_2;
				double_3 = double_2;
				int_4 = int_2 * int_4;
				double_2 = double_4;
				short_2 = short_3;
				int_4 = int_3;
			}
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		if(1)
		{
			if(1)
			{
				char_2 = char_2;
			}
			if(1)
			{
				double_5 = double_2 + double_1;
			}
		}
		int_5 = v_mem_patch_reg(char_1,unsigned_int_5,int_5,char_2,char_2,float_1,int_6);

		int_6 = int_7 + int_4;
	}
	int_6 = int_7 * int_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_3 = 1;
			int int_4 = 1;
			double double_5 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_5 = 1;
			float float_1 = 1;
			int int_6 = 1;
			int int_7 = 1;
			long long_2 = 1;
			short short_2 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			short short_3 = 1;
			long long_4 = 1;
			long_3 = long_1 + long_4;
		}
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			char controller_13[2];
			fgets(controller_13 ,2 ,stdin);
			if( strcmp( controller_13, "A") > 0)
			{
				double_2 = double_5;
			}
			if(1)
			{
				double_5 = double_2;
			}
		}
	}
	return int_2;
}
int v_ksw_extend2( int parameter_1,float parameter_2,int parameter_3,double parameter_4,int parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_3 = 1;
	double double_6 = 1;
	char char_5 = 1;
	double double_7 = 1;
	char char_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_4 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_5 = 1;
	long long_7 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	float float_5 = 1;
	float float_6 = 1;
	short short_6 = 1;
	short short_7 = 1;
	int_2 = int_1 * int_2;
	double_1 = double_2;
	long_1 = long_1 + long_2;
	float_2 = float_1 * float_1;
	short_1 = short_1;
	short_3 = short_2 * short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_4 = long_3 + long_4;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int_3 = int_3 + int_3;
		}
	}
	char_3 = char_1 * char_2;
	int_2 = int_3 * int_2;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double_2 = double_1;
	}
	int_2 = int_2 * int_1;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		long_4 = long_2;
	}
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_4;
	long_5 = long_1;
	short_2 = short_2;
	long_6 = long_2 + long_1;
	unsigned_int_3 = unsigned_int_5;
	double_2 = double_3;
	double_1 = double_3 * double_3;
	float_1 = float_1 * float_2;
	long_3 = long_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_3 = 1;
		double double_6 = 1;
		char char_5 = 1;
		double double_7 = 1;
		char char_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_5 = 1;
		long long_7 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float float_5 = 1;
		float float_6 = 1;
		short short_6 = 1;
		short short_7 = 1;
		char_2 = char_3;
		int_4 = int_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
		if(1)
		{
			int_4 = int_5;
		}
		if(1)
		{
			short_1 = short_2 * short_3;
		}
		if(1)
		{
			int_1 = int_4;
			if(1)
			{
				short_3 = short_2 + short_4;
			}
		}
		if(1)
		{
			short_4 = short_3;
		}
		for(int looper_6=0; looper_6<1;looper_6++)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			long long_3 = 1;
			long long_4 = 1;
			int int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_5 = 1;
			long long_6 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_3 = 1;
			double double_6 = 1;
			char char_5 = 1;
			double double_7 = 1;
			char char_6 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_4 = 1;
			int int_6 = 1;
			int int_7 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_7 = 1;
			short short_5 = 1;
			long long_7 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			float float_5 = 1;
			float float_6 = 1;
			short short_6 = 1;
			short short_7 = 1;
			short_1 = short_3 * short_2;
			unsigned_int_1 = unsigned_int_5;
			double_4 = double_3 + double_2;
			short_2 = short_1 + short_4;
			int_2 = int_6 * int_5;
			double_2 = double_4 * double_5;
			int_5 = int_6 + int_7;
			short_5 = short_4 + short_3;
			long_3 = long_7 + long_5;
			float_3 = float_4;
			char_4 = char_1;
			unsigned_int_6 = unsigned_int_4 + unsigned_int_1;
			short_1 = short_1;
			unsigned_int_3 = unsigned_int_6 * unsigned_int_7;
			float_2 = float_1 * float_1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_8;
			float_4 = float_2;
			unsigned_int_9 = unsigned_int_4;
		}
		double_1 = double_1 + double_6;
		unsigned_int_7 = unsigned_int_4;
		if(1)
		{
			short_1 = short_2 * short_1;
			char_5 = char_4;
		}
		if(1)
		{
			char_4 = char_5 + char_2;
		}
		if(1)
		{
			long_1 = long_2;
			unsigned_int_3 = unsigned_int_5;
		}
		if(1)
		{
			if(1)
			{
				if(1)
				{
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					float float_1 = 1;
					float float_2 = 1;
					short short_1 = 1;
					short short_2 = 1;
					short short_3 = 1;
					long long_3 = 1;
					long long_4 = 1;
					int int_3 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					long long_5 = 1;
					long long_6 = 1;
					unsigned int unsigned_int_5 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					float float_3 = 1;
					double double_6 = 1;
					char char_5 = 1;
					double double_7 = 1;
					char char_6 = 1;
					int int_4 = 1;
					int int_5 = 1;
					short short_4 = 1;
					int int_6 = 1;
					int int_7 = 1;
					char char_4 = 1;
					unsigned int unsigned_int_7 = 1;
					short short_5 = 1;
					long long_7 = 1;
					float float_4 = 1;
					unsigned int unsigned_int_6 = 1;
					unsigned int unsigned_int_8 = 1;
					unsigned int unsigned_int_9 = 1;
					float float_5 = 1;
					float float_6 = 1;
					short short_6 = 1;
					short short_7 = 1;
					float_5 = float_6;
				}
			}
			if(1)
			{
				if(1)
				{
					int_7 = int_6 * int_5;
				}
			}
		}
		for(int looper_7=0; looper_7<1;looper_7++)
		{
			int_7 = int_5;
		}
		char_4 = char_4;
		for(int looper_8=0; looper_8<1;looper_8++)
		{
			unsigned_int_1 = unsigned_int_5;
		}
		double_6 = double_7;
	}
	char_6 = char_5;
	long_6 = long_2;
	if(1)
	{
		float_3 = float_3;
	}
	if(1)
	{
		double_4 = double_6 * double_6;
	}
	if(1)
	{
		double_7 = double_5 + double_2;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long long_3 = 1;
		long long_4 = 1;
		int int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_5 = 1;
		long long_6 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_3 = 1;
		double double_6 = 1;
		char char_5 = 1;
		double double_7 = 1;
		char char_6 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_4 = 1;
		int int_6 = 1;
		int int_7 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_5 = 1;
		long long_7 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		float float_5 = 1;
		float float_6 = 1;
		short short_6 = 1;
		short short_7 = 1;
		short_3 = short_6 * short_7;
	}
	if(1)
	{
		double_4 = double_7;
	}
	return int_2;
}
void v_ks_introsort_64( char parameter_1,long parameter_2)
{
}
unsigned int v_cal_max_gap( char parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double_2 = double_1 + double_1;
	char_1 = char_2;
	long_1 = long_2;
	int_1 = int_1 + int_2;
	short_3 = short_1 * short_2;
	return unsigned_int_1;
}
void v_mem_chain2aln( float parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_5,short parameter_6,short parameter_7)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_9 = 1;
	char char_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_10 = 1;
	int int_7 = 1;
	float float_3 = 1;
	char char_4 = 1;
	short short_3 = 1;
	int int_8 = 1;
	int int_9 = 1;
	unsigned int unsigned_int_13 = 1;
	long long_3 = 1;
	float float_2 = 1;
	short short_1 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_11 = 1;
	float float_4 = 1;
	double double_6 = 1;
	float float_5 = 1;
	char char_5 = 1;
	char char_6 = 1;
	double double_7 = 1;
	int int_10 = 1;
	float float_7 = 1;
	float float_8 = 1;
	double double_8 = 1;
	double double_10 = 1;
	short short_2 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_12 = 1;
	unsigned int unsigned_int_14 = 1;
	double double_9 = 1;
	char_2 = char_1 + char_1;
	unsigned_int_1 = unsigned_int_1;
	long_1 = long_1 * long_1;
	double_1 = double_1;
	v_ks_introsort_64(char_1,long_1);

	long_2 = long_1 * long_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1 * int_1;
		double_2 = double_3;
		unsigned_int_4 = unsigned_int_1 * unsigned_int_3;
		double_3 = double_2 * double_1;
		int_1 = int_1;
		unsigned_int_5 = unsigned_int_1 * unsigned_int_5;
		if(1)
		{
			unsigned_int_5 = unsigned_int_5;
		}
	}
	unsigned_int_6 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_5 = unsigned_int_7 + unsigned_int_4;
	if(1)
	{
		if(1)
		{
			unsigned_int_8 = unsigned_int_1 * unsigned_int_6;
		}
		if(1)
		{
			int_1 = v_ksw_extend2(int_1,float_1,int_1,double_2,int_2,long_1,int_2,int_3,int_4,int_2,int_1,int_1,int_3,int_1,int_1,int_1,int_5,int_2,int_6);

			unsigned_int_4 = unsigned_int_9;
		}
	}
	char_3 = char_1;
	double_3 = double_1 + double_4;
	double_3 = double_4 * double_5;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned_int_10 = unsigned_int_8;
	}
	int_3 = int_7;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_9 = 1;
		char char_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_10 = 1;
		int int_7 = 1;
		float float_3 = 1;
		char char_4 = 1;
		short short_3 = 1;
		int int_8 = 1;
		int int_9 = 1;
		unsigned int unsigned_int_13 = 1;
		long long_3 = 1;
		float float_2 = 1;
		short short_1 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_11 = 1;
		float float_4 = 1;
		double double_6 = 1;
		float float_5 = 1;
		char char_5 = 1;
		char char_6 = 1;
		double double_7 = 1;
		int int_10 = 1;
		float float_7 = 1;
		float float_8 = 1;
		double double_8 = 1;
		double double_10 = 1;
		short short_2 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_12 = 1;
		unsigned int unsigned_int_14 = 1;
		double double_9 = 1;
		long_3 = long_2;
		float_3 = float_2 * float_2;
		for(int looper_4=0; looper_4<1;looper_4++)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_9 = 1;
			char char_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_10 = 1;
			int int_7 = 1;
			float float_3 = 1;
			char char_4 = 1;
			short short_3 = 1;
			int int_8 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_13 = 1;
			long long_3 = 1;
			float float_2 = 1;
			short short_1 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_11 = 1;
			float float_4 = 1;
			double double_6 = 1;
			float float_5 = 1;
			char char_5 = 1;
			char char_6 = 1;
			double double_7 = 1;
			int int_10 = 1;
			float float_7 = 1;
			float float_8 = 1;
			double double_8 = 1;
			double double_10 = 1;
			short short_2 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_12 = 1;
			unsigned int unsigned_int_14 = 1;
			double double_9 = 1;
			char_1 = char_2;
			short_1 = short_2;
			unsigned_int_9 = v_cal_max_gap(char_4,int_2);

			double_4 = double_2 + double_2;
			if(1)
			{
				int_3 = int_5;
			}
			if(1)
			{
				unsigned_int_2 = unsigned_int_7 * unsigned_int_3;
			}
			double_1 = double_2 + double_2;
			unsigned_int_3 = unsigned_int_8;
			short_1 = short_2;
			long_2 = long_1 * long_3;
			if(1)
			{
				unsigned_int_9 = unsigned_int_5 * unsigned_int_10;
			}
			unsigned_int_10 = unsigned_int_10;
			char_1 = char_2;
			double_5 = double_4 * double_3;
			unsigned_int_7 = unsigned_int_9;
			if(1)
			{
				int_7 = int_6;
			}
		}
		if(1)
		{
			if(1)
			{
				long_4 = long_4;
			}
			for(int looper_5=0; looper_5<1;looper_5++)
			{
				unsigned_int_11 = unsigned_int_2 + unsigned_int_2;
				if(1)
				{
					short_3 = v_bns_fetch_seq(int_5,float_3,int_6,float_3,short_3,int_8);

					unsigned_int_8 = unsigned_int_4 + unsigned_int_1;
				}
				float_4 = float_1 + float_3;
				if(1)
				{
					unsigned_int_11 = unsigned_int_3 + unsigned_int_8;
				}
				if(1)
				{
					double_6 = double_3;
				}
				if(1)
				{
					double_4 = double_5 * double_3;
				}
			}
			if(1)
			{
				float_3 = float_4 * float_4;
				float_1 = float_2 * float_5;
			}
			if(1)
			{
				char_3 = char_5;
			}
		}
		double_2 = double_4;
		double_4 = double_3 * double_4;
		int_9 = int_1 * int_8;
		char_6 = char_6;
		double_6 = double_3 + double_5;
		if(1)
		{
			int_1 = int_8 + int_7;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_9 = 1;
			char char_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_10 = 1;
			int int_7 = 1;
			float float_3 = 1;
			char char_4 = 1;
			short short_3 = 1;
			int int_8 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_13 = 1;
			long long_3 = 1;
			float float_2 = 1;
			short short_1 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_11 = 1;
			float float_4 = 1;
			double double_6 = 1;
			float float_5 = 1;
			char char_5 = 1;
			char char_6 = 1;
			double double_7 = 1;
			int int_10 = 1;
			float float_7 = 1;
			float float_8 = 1;
			double double_8 = 1;
			double double_10 = 1;
			short short_2 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_12 = 1;
			unsigned int unsigned_int_14 = 1;
			double double_9 = 1;
			float_5 = float_3;
			int_5 = int_3;
			int_3 = int_7 + int_7;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				int_5 = int_3;
			}
			double_4 = double_2 * double_5;
			float_6 = float_4;
			for(int looper_7=0; looper_7<1;looper_7++)
			{
				char_4 = char_2;
			}
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				double double_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				float float_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int int_5 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_9 = 1;
				char char_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_10 = 1;
				int int_7 = 1;
				float float_3 = 1;
				char char_4 = 1;
				short short_3 = 1;
				int int_8 = 1;
				int int_9 = 1;
				unsigned int unsigned_int_13 = 1;
				long long_3 = 1;
				float float_2 = 1;
				short short_1 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_11 = 1;
				float float_4 = 1;
				double double_6 = 1;
				float float_5 = 1;
				char char_5 = 1;
				char char_6 = 1;
				double double_7 = 1;
				int int_10 = 1;
				float float_7 = 1;
				float float_8 = 1;
				double double_8 = 1;
				double double_10 = 1;
				short short_2 = 1;
				float float_6 = 1;
				unsigned int unsigned_int_12 = 1;
				unsigned int unsigned_int_14 = 1;
				double double_9 = 1;
				int_8 = int_5 * int_4;
				float_3 = float_2;
				if(1)
				{
					unsigned_int_1 = unsigned_int_9 * unsigned_int_8;
					unsigned_int_3 = unsigned_int_12 + unsigned_int_11;
					for(int looper_9=0; looper_9<1;looper_9++)
					{
						int_6 = v_err_printf(int_9,long_1);

						double_2 = double_6;
					}
					double_1 = double_7;
					unsigned_int_3 = unsigned_int_7 * unsigned_int_9;
					for(int looper_10=0; looper_10<1;looper_10++)
					{
						int_7 = int_5;
					}
					double_3 = double_5 + double_7;
				}
				int_2 = int_10 + int_5;
				if(1)
				{
					unsigned_int_9 = unsigned_int_2;
					unsigned_int_10 = unsigned_int_12 * unsigned_int_8;
				}
				if(1)
				{
					float_1 = float_2 + float_7;
				}
			}
			if(1)
			{
				int_7 = int_5;
				long_2 = long_2;
			}
			if(1)
			{
				double_1 = double_5 + double_3;
				unsigned_int_6 = unsigned_int_1 * unsigned_int_5;
			}
			double_6 = double_3;
			int_9 = int_4 + int_6;
		}
		if(1)
		{
			float_5 = float_7;
		}
		if(1)
		{
			short_3 = short_1 + short_3;
			short_1 = short_3;
			double_3 = double_6 * double_4;
			unsigned_int_9 = unsigned_int_6;
			for(int looper_11=0; looper_11<1;looper_11++)
			{
				double_5 = double_6 + double_5;
				char_3 = char_5;
				if(1)
				{
					char_6 = char_4 + char_6;
					float_3 = float_5;
					for(int looper_12=0; looper_12<1;looper_12++)
					{
						double_1 = double_7;
					}
					int_2 = int_6 * int_5;
					float_8 = float_1 * float_1;
					for(int looper_13=0; looper_13<1;looper_13++)
					{
						double_6 = double_4 * double_8;
					}
					long_3 = long_3 + long_4;
				}
				double_1 = double_6;
				if(1)
				{
					unsigned_int_4 = unsigned_int_9;
					char_1 = char_4;
				}
				if(1)
				{
					unsigned_int_9 = unsigned_int_13;
				}
			}
			if(1)
			{
				double_1 = double_6;
				double_5 = double_8;
			}
			if(1)
			{
				double_6 = double_2;
				int_10 = int_3;
			}
		}
		if(1)
		{
			float_5 = float_8;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_9 = 1;
			char char_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_10 = 1;
			int int_7 = 1;
			float float_3 = 1;
			char char_4 = 1;
			short short_3 = 1;
			int int_8 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_13 = 1;
			long long_3 = 1;
			float float_2 = 1;
			short short_1 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_11 = 1;
			float float_4 = 1;
			double double_6 = 1;
			float float_5 = 1;
			char char_5 = 1;
			char char_6 = 1;
			double double_7 = 1;
			int int_10 = 1;
			float float_7 = 1;
			float float_8 = 1;
			double double_8 = 1;
			double double_10 = 1;
			short short_2 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_12 = 1;
			unsigned int unsigned_int_14 = 1;
			double double_9 = 1;
			unsigned_int_9 = unsigned_int_14 * unsigned_int_14;
		}
		for(int looper_14=0; looper_14<1;looper_14++)
		{
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_9 = 1;
			char char_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_10 = 1;
			int int_7 = 1;
			float float_3 = 1;
			char char_4 = 1;
			short short_3 = 1;
			int int_8 = 1;
			int int_9 = 1;
			unsigned int unsigned_int_13 = 1;
			long long_3 = 1;
			float float_2 = 1;
			short short_1 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_11 = 1;
			float float_4 = 1;
			double double_6 = 1;
			float float_5 = 1;
			char char_5 = 1;
			char char_6 = 1;
			double double_7 = 1;
			int int_10 = 1;
			float float_7 = 1;
			float float_8 = 1;
			double double_8 = 1;
			double double_10 = 1;
			short short_2 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_12 = 1;
			unsigned int unsigned_int_14 = 1;
			double double_9 = 1;
			double_5 = double_9;
			if(1)
			{
				char_2 = char_6 + char_5;
			}
		}
		int_4 = int_2 * int_3;
		double_8 = double_8;
		double_5 = double_2 * double_10;
	}
	unsigned_int_8 = unsigned_int_13;
	double_1 = double_1;
}
int v_err_printf( int parameter_1,long parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	int int_2 = 1;
	long_1 = long_1 + long_1;
	short_2 = short_1 * short_2;
	char_1 = char_2;
	short_3 = short_1;
	long_1 = long_1;
	int_1 = int_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "{") > 0)
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		short short_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		int int_3 = 1;
		int int_2 = 1;
		v__err_fatal_simple(float_1,short_2);

		int_1 = int_2;
	}
	return int_3;
}
void v_mem_print_chain( double parameter_1,char parameter_2)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_3 = 1;
	int_1 = v_mem_chain_weight(char_1);

	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double_1 = double_2;
		long_1 = long_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_2 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_3 = 1;
			short_1 = short_2;
			double_1 = double_3;
			int_1 = int_1;
			if(1)
			{
				int_1 = int_1;
			}
			int_1 = v_err_printf(int_1,long_1);

			long_2 = long_1 * long_1;
		}
		int_1 = int_2;
	}
	v_bns_depos(long_2,float_1,int_2);

}
short v_revseq( int parameter_1,char parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long_1 = long_1 + long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		int int_1 = 1;
		int_1 = int_1 + int_1;
	}
	return short_1;
}
unsigned int v_ksw_u8( char parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	unsigned int unsigned_int_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
		}
	}
	return unsigned_int_1;
}
double v_ksw_i16( unsigned int parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double_1 = double_1;
	float_2 = float_1 * float_1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
			double double_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			short short_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_3 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			short_1 = short_1 + short_2;
			double_2 = double_2;
			unsigned_int_1 = unsigned_int_1;
		}
	}
	double_3 = double_1;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		long_2 = long_1 + long_2;
		if(1)
		{
		}
		if(1)
		{
		}
		if(1)
		{
		}
	}
	double_3 = double_4;
	if(1)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_4 = short_3 + short_2;
		if(1)
		{
		}
		if(1)
		{
		}
	}
	int_3 = int_1 * int_2;
	float_3 = float_2;
	return double_1;
}
void v_ksw_qinit( int parameter_1,int parameter_2,char parameter_3,int parameter_4,char parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_2 = 1;
	int int_1 = 1;
	float float_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	long long_4 = 1;
	short short_5 = 1;
	float float_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	long_3 = long_1 + long_2;
	float_1 = float_2;
	double_1 = double_1;
	char_1 = char_2;
	char_3 = char_4;
	double_2 = double_1;
	long_1 = long_1 * long_2;
	char_4 = char_4;
	long_1 = long_3;
	int_1 = int_1;
	float_1 = float_3;
	double_4 = double_3 * double_2;
	double_5 = double_3 * double_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_1 = char_3;
		}
		if(1)
		{
			long_3 = long_3;
		}
	}
	int_2 = int_2 * int_3;
	float_3 = float_4;
	double_3 = double_5 + double_3;
	if(1)
	{
		double_5 = double_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_2 = 1;
			int int_1 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_6 = 1;
			long long_4 = 1;
			short short_5 = 1;
			float float_5 = 1;
			short_1 = short_1 * short_2;
			short_3 = short_4;
			for(int looper_3=0; looper_3<1;looper_3++)
			{
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					double_4 = double_1;
				}
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_2 = 1;
		int int_1 = 1;
		float float_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		double double_6 = 1;
		long long_4 = 1;
		short short_5 = 1;
		float float_5 = 1;
		double_6 = double_3 + double_5;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			double double_2 = 1;
			int int_1 = 1;
			float float_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			short short_3 = 1;
			short short_4 = 1;
			double double_6 = 1;
			long long_4 = 1;
			short short_5 = 1;
			float float_5 = 1;
			long_4 = long_3;
			short_5 = short_5;
			for(int looper_6=0; looper_6<1;looper_6++)
			{
				for(int looper_7=0; looper_7<1;looper_7++)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					long long_1 = 1;
					long long_2 = 1;
					long long_3 = 1;
					float float_1 = 1;
					float float_2 = 1;
					double double_1 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					char char_4 = 1;
					double double_2 = 1;
					int int_1 = 1;
					float float_3 = 1;
					double double_3 = 1;
					double double_4 = 1;
					double double_5 = 1;
					int int_2 = 1;
					int int_3 = 1;
					float float_4 = 1;
					short short_1 = 1;
					short short_2 = 1;
					short short_3 = 1;
					short short_4 = 1;
					double double_6 = 1;
					long long_4 = 1;
					short short_5 = 1;
					float float_5 = 1;
					float_2 = float_5 * float_5;
				}
			}
		}
	}
}
float v_ksw_align2( int parameter_1,unsigned int parameter_2,int parameter_3,double parameter_4,int parameter_5,long parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,short parameter_12)
{
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_6 = 1;
	int int_7 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_3 = 1;
	int int_8 = 1;
	short short_4 = 1;
	char_1 = char_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
	int_3 = int_1 + int_2;
	short_1 = v_revseq(int_3,char_2);

	char_2 = char_1;
	if(1)
	{
		int_2 = int_4;
	}
	v_ksw_qinit(int_4,int_5,char_3,int_4,char_2);

	char_4 = char_3 * char_1;
	double_1 = double_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_3;
	if(1)
	{
		double_2 = double_2;
	}
	if(1)
	{
	}
	unsigned_int_3 = v_ksw_u8(char_4,int_2,float_1,int_3,int_6,int_2,int_7,int_2);

	short_2 = short_2 * short_1;
	char_3 = char_4 * char_4;
	double_1 = double_2;
	short_2 = short_3 * short_1;
	short_3 = short_2 + short_1;
	double_2 = double_1 * double_2;
	short_2 = short_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		int int_6 = 1;
		int int_7 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_3 = 1;
		int int_8 = 1;
		short short_4 = 1;
		double_3 = v_ksw_i16(unsigned_int_1,int_7,double_2,int_8,int_3,int_1,int_7,int_3);

		short_4 = short_3 * short_2;
	}
	return float_1;
}
void v_bns_get_seq( short parameter_1,long parameter_2,int parameter_3,int parameter_4,char parameter_5)
{
	double double_1 = 1;
	double double_4 = 1;
	int int_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_5 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_3 = 1;
	double_1 = double_1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "4z") > 0)
	{
		double double_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		double_1 = double_1 * double_2;
	}
	if(1)
	{
		double double_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		double_5 = double_3 * double_4;
	}
	if(1)
	{
		int_1 = int_1;
	}
	if(1)
	{
		double double_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		double_4 = double_1 * double_1;
		float_1 = float_1;
		char_1 = char_2;
		char controller_5[2];
		fgets(controller_5 ,2 ,stdin);
		if(remainder_check(controller_5,100,1))
		{
			double double_1 = 1;
			double double_4 = 1;
			int int_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			double double_5 = 1;
			float float_1 = 1;
			char char_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			char char_3 = 1;
			int_1 = int_1;
			long_1 = long_2;
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				double double_1 = 1;
				double double_4 = 1;
				int int_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				double double_5 = 1;
				float float_1 = 1;
				char char_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				char char_3 = 1;
				short_2 = short_1 * short_2;
			}
		}
		if(1)
		{
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				int_1 = int_1;
			}
		}
	}
	if(1)
	{
		double double_1 = 1;
		double double_4 = 1;
		int int_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_5 = 1;
		float float_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_3 = 1;
		char_3 = char_2;
	}
}
short v_bns_fetch_seq( int parameter_1,float parameter_2,int parameter_3,float parameter_4,short parameter_5,int parameter_6)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	short short_3 = 1;
	int int_5 = 1;
	char char_2 = 1;
	double double_4 = 1;
	float float_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	short short_4 = 1;
	char char_1 = 1;
	int int_4 = 1;
	int_2 = int_1 * int_2;
	int_1 = int_2 * int_2;
	double_1 = double_1;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		int int_5 = 1;
		char char_2 = 1;
		double double_4 = 1;
		float float_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_4 = 1;
		char char_1 = 1;
		int int_4 = 1;
		char_1 = char_1;
	}
	v_bns_depos(long_1,float_1,int_3);

	short_1 = short_2;
	double_2 = double_2 + double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_bns_pos2rid(long_1,long_2);

	double_3 = double_3;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_2 = 1;
		double double_3 = 1;
		short short_3 = 1;
		int int_5 = 1;
		char char_2 = 1;
		double double_4 = 1;
		float float_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		short short_4 = 1;
		char char_1 = 1;
		int int_4 = 1;
		int_3 = int_3 * int_4;
		double_3 = double_3 + double_1;
		int_4 = int_2 * int_2;
	}
	long_2 = long_1;
	v_bns_get_seq(short_3,long_1,int_5,int_5,char_2);

	double_1 = double_1 * double_4;
	float_1 = float_2 * float_1;
	if(1)
	{
		long_1 = long_1;
	}
	char_4 = char_3 * char_4;
	return short_4;
}
int v_mem_seed_sw( unsigned int parameter_1,double parameter_2,short parameter_3,int parameter_4,unsigned int parameter_5,long parameter_6)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	float float_2 = 1;
	short short_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	char char_3 = 1;
	float float_3 = 1;
	int int_6 = 1;
	int int_7 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	short_1 = v_bns_fetch_seq(int_1,float_1,int_2,float_1,short_2,int_1);

	float_2 = float_1 * float_1;
	short_2 = short_1 + short_3;
	char_1 = char_2;
	if(1)
	{
	}
	int_3 = int_4;
	float_1 = v_ksw_align2(int_5,unsigned_int_3,int_2,double_1,int_5,long_1,int_1,int_1,int_1,int_1,int_4,short_3);

	unsigned_int_2 = unsigned_int_4;
	short_5 = short_4 + short_3;
	unsigned_int_2 = unsigned_int_1;
	char_3 = char_3;
	float_3 = float_1 + float_1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_6;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_2;
	int_6 = int_6;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			int int_2 = 1;
			short short_2 = 1;
			float float_2 = 1;
			short short_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_4 = 1;
			short short_5 = 1;
			char char_3 = 1;
			float float_3 = 1;
			int int_6 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_2 = 1;
			unsigned_int_5 = unsigned_int_4;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			int int_1 = 1;
			float float_1 = 1;
			int int_2 = 1;
			short short_2 = 1;
			float float_2 = 1;
			short short_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_4 = 1;
			short short_5 = 1;
			char char_3 = 1;
			float float_3 = 1;
			int int_6 = 1;
			int int_7 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_2 = 1;
			long_1 = long_2;
		}
	}
	if(1)
	{
	}
	int_5 = int_6;
	int_2 = int_2 * int_7;
	float_3 = float_1 * float_1;
	return int_3;
}
void v_mem_flt_chained_seeds( double parameter_1,long parameter_2,int parameter_3,int parameter_4,float parameter_5,int parameter_6,int parameter_7)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double_2 = double_1 + double_2;
	double_3 = double_3 + double_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		int_2 = int_1 * int_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
			int_3 = int_2;
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_2 = 1;
				int int_1 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				double_2 = double_3 + double_3;
				long_1 = long_1 + long_1;
			}
		}
		float_1 = float_1;
	}
	int_2 = v_mem_seed_sw(unsigned_int_2,double_1,short_1,int_3,unsigned_int_3,long_2);

}
int v_mem_chain_weight( char parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	int int_3 = 1;
	short short_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	int_1 = int_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		short_1 = short_1;
		if(1)
		{
			double_1 = double_1;
		}
		if(1)
		{
			double_1 = double_2;
		}
		unsigned_int_1 = unsigned_int_2;
	}
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		int int_3 = 1;
		short short_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_3 = 1;
		float_2 = float_1 * float_1;
		if(1)
		{
			unsigned_int_2 = unsigned_int_3;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			int int_3 = 1;
			short short_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_3 = 1;
			double_2 = double_3 + double_3;
		}
		long_1 = long_1 * long_1;
	}
	char_1 = char_1;
	char_1 = char_1 + char_1;
	return int_3;
}
int v_mem_chain_flt( double parameter_1,int parameter_2,long parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	float float_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_4 = 1;
	float float_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_3 = 1;
	long long_3 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_5 = 1;
	long long_4 = 1;
	short short_4 = 1;
	int_1 = int_1 * int_1;
	double_1 = v_kvec_t(int_1);

	int_1 = int_1 + int_1;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_1;
		float_1 = float_1 + float_1;
		double_2 = double_1 * double_2;
		long_1 = long_1 + long_2;
		if(1)
		{
			short_1 = short_1 * short_1;
		}
		if(1)
		{
			float_1 = float_1;
		}
	}
	double_3 = double_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_4;
	long_1 = long_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		float float_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		long long_4 = 1;
		short short_4 = 1;
		long_2 = long_3;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			int int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			float float_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			short short_4 = 1;
			double_6 = double_5 + double_4;
			int_1 = int_2 + int_2;
			double_4 = double_6;
			if(1)
			{
				int int_1 = 1;
				double double_1 = 1;
				float float_1 = 1;
				double double_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				short short_1 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				double double_4 = 1;
				float float_2 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_3 = 1;
				long long_3 = 1;
				double double_5 = 1;
				double double_6 = 1;
				int int_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_4 = 1;
				float float_5 = 1;
				long long_4 = 1;
				short short_4 = 1;
				float_2 = float_2;
				float_3 = float_3 * float_1;
				int_1 = int_2;
				if(1)
				{
					char_1 = char_1;
					if(1)
					{
						int int_1 = 1;
						double double_1 = 1;
						float float_1 = 1;
						double double_2 = 1;
						long long_1 = 1;
						long long_2 = 1;
						short short_1 = 1;
						double double_3 = 1;
						unsigned int unsigned_int_1 = 1;
						double double_4 = 1;
						float float_2 = 1;
						char char_1 = 1;
						unsigned int unsigned_int_2 = 1;
						short short_3 = 1;
						unsigned int unsigned_int_3 = 1;
						int int_3 = 1;
						long long_3 = 1;
						double double_5 = 1;
						double double_6 = 1;
						int int_2 = 1;
						float float_3 = 1;
						float float_4 = 1;
						short short_2 = 1;
						unsigned int unsigned_int_4 = 1;
						float float_5 = 1;
						long long_4 = 1;
						short short_4 = 1;
						float_2 = float_4 * float_1;
					}
					if(1)
					{
						unsigned_int_2 = unsigned_int_1;
					}
				}
			}
		}
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			float float_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			short short_4 = 1;
			short_3 = short_2 + short_1;
			unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		int int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		float float_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		long long_4 = 1;
		short short_4 = 1;
		unsigned_int_4 = unsigned_int_4;
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			float float_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			short short_4 = 1;
			float_2 = float_5;
		}
	}
	int_3 = int_3 + int_3;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		if(1)
		{
			double_2 = double_4;
		}
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			float float_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			double double_4 = 1;
			float float_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_3 = 1;
			long long_3 = 1;
			double double_5 = 1;
			double double_6 = 1;
			int int_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_5 = 1;
			long long_4 = 1;
			short short_4 = 1;
			int_3 = v_mem_chain_weight(char_1);

			long_4 = long_1;
		}
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			double_1 = double_1;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		int int_1 = 1;
		double double_1 = 1;
		float float_1 = 1;
		double double_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_4 = 1;
		float float_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_3 = 1;
		long long_3 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_5 = 1;
		long long_4 = 1;
		short short_4 = 1;
		short_4 = short_3;
		if(1)
		{
			unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3 * unsigned_int_2;
		}
	}
	return int_3;
}
long v_smem_aux_destroy( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float_1 = float_2;
	double_2 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	float_1 = float_2 + float_1;
	double_1 = double_3 * double_2;
	short_1 = short_2;
	return long_1;
}
unsigned int v_test_and_merge( float parameter_1,unsigned int parameter_2,double parameter_3,float parameter_4,int parameter_5)
{
	double double_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_1 = double_1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_2;
	short_1 = short_1 * short_1;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_3 = double_3;
	char_2 = char_1 + char_1;
	if(1)
	{
		double double_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_2 = 1;
		short short_1 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		if(1)
		{
			double double_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			double double_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			unsigned_int_2 = unsigned_int_2;
			int_2 = int_1 + int_1;
		}
		long_2 = long_1 * long_1;
	}
	return unsigned_int_2;
}
void v_bns_depos( long parameter_1,float parameter_2,int parameter_3)
{
	int int_1 = 1;
	int_1 = int_1 + int_1;
}
int v_bns_pos2rid( long parameter_1,long parameter_2)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float_1 = float_2;
	if(1)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		double_2 = double_1 + double_1;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short_3 = short_1 + short_2;
	}
	if(1)
	{
		unsigned_int_2 = unsigned_int_1;
	}
	double_2 = double_1 + double_3;
	char_1 = char_1 + char_1;
	return int_2;
}
int v_bns_intv2rid( float parameter_1,double parameter_2,short parameter_3)
{
	float float_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float_1 = float_1 * float_1;
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	int_1 = v_bns_pos2rid(long_1,long_2);

	float_2 = float_2 + float_2;
	int_2 = int_1 + int_2;
	v_bns_depos(long_2,float_2,int_1);

	double_1 = double_2;
	return int_2;
}
short v_bwt_sa( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	unsigned_int_1 = v_bwt_invPsi(long_1,long_2);

	int_1 = int_1 + int_1;
	double_1 = double_1;
	return short_1;
}
int v_bwt_seed_strategy1( float parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	int_1 = int_1;
	double_2 = double_1 + double_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_2 = 1;
			char char_1 = 1;
			float float_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_3 = 1;
			int_2 = int_1;
			long_2 = long_1 * long_2;
			if(1)
			{
				int int_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				int int_2 = 1;
				char char_1 = 1;
				float float_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				int int_3 = 1;
				v_bwt_extend(double_2,char_1,float_1,int_1);

				long_3 = long_1;
				int_3 = int_2;
			}
			char_1 = char_1;
		}
		if(1)
		{
		}
	}
	return int_2;
}
short v_bwt_reverse_intvs()
{
	short short_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	if(1)
	{
		short short_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		int_2 = int_1 + int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			short short_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			char_1 = char_1 * char_2;
			long_2 = long_1 * long_1;
			double_1 = double_1;
		}
	}
	return short_1;
}
void v_bwt_2occ4( double parameter_1,long parameter_2,char parameter_3,long parameter_4,double parameter_5)
{
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	double double_2 = 1;
	v_bwt_occ4(short_1,short_2,double_1);

	char_1 = char_1 * char_1;
	double_2 = double_1;
}
void v_bwt_extend( double parameter_1,char parameter_2,float parameter_3,int parameter_4)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double_3 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	v_bwt_2occ4(double_1,long_1,char_1,long_2,double_2);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short_2 = short_1 * short_1;
		float_1 = float_2;
	}
	unsigned_int_1 = unsigned_int_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		char char_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_2 = int_1 * int_2;
	}
}
int v_bwt_smem1a( short parameter_1,int parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,float parameter_6,unsigned int parameter_7,float parameter_8)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	float float_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_5 = 1;
	float float_6 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_3 = 1;
	short short_1 = 1;
	double double_4 = 1;
	float float_7 = 1;
	long long_6 = 1;
	int int_6 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_8 = 1;
	float float_8 = 1;
	long long_5 = 1;
	float float_9 = 1;
	int_3 = int_1 + int_2;
	float_2 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
	}
	if(1)
	{
		float_3 = float_2 + float_1;
	}
	double_1 = double_1;
	float_4 = float_2;
	int_2 = int_3 + int_3;
	char_1 = char_2;
	float_6 = float_3 + float_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_3 = unsigned_int_5;
			double_2 = double_1 * double_1;
		}
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			double double_1 = 1;
			float float_4 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_5 = 1;
			float float_6 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			int int_5 = 1;
			long long_2 = 1;
			long long_3 = 1;
			double double_3 = 1;
			short short_1 = 1;
			double double_4 = 1;
			float float_7 = 1;
			long long_6 = 1;
			int int_6 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_7 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_8 = 1;
			float float_8 = 1;
			long long_5 = 1;
			float float_9 = 1;
			int_4 = int_1;
			unsigned_int_6 = unsigned_int_5 + unsigned_int_2;
			if(1)
			{
				int_5 = int_5;
				if(1)
				{
					long_1 = long_2;
				}
			}
			long_1 = long_3 * long_1;
			double_3 = double_3;
		}
		if(1)
		{
			unsigned_int_3 = unsigned_int_5 + unsigned_int_2;
			short_1 = short_1;
		}
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		float float_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_5 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		float float_7 = 1;
		long long_6 = 1;
		int int_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_8 = 1;
		long long_5 = 1;
		float float_9 = 1;
		unsigned_int_3 = unsigned_int_7;
	}
	double_4 = double_2 + double_4;
	int_2 = int_4;
	double_4 = double_3;
	double_2 = double_3 + double_4;
	v_bwt_extend(double_2,char_2,float_7,int_5);

	char_1 = char_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		float float_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_5 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		float float_7 = 1;
		long long_6 = 1;
		int int_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_8 = 1;
		long long_5 = 1;
		float float_9 = 1;
		short_1 = short_1;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			long_4 = long_4;
			if(1)
			{
				float_4 = float_2;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						int int_1 = 1;
						int int_2 = 1;
						int int_3 = 1;
						float float_1 = 1;
						float float_2 = 1;
						unsigned int unsigned_int_1 = 1;
						unsigned int unsigned_int_2 = 1;
						float float_3 = 1;
						double double_1 = 1;
						float float_4 = 1;
						char char_1 = 1;
						char char_2 = 1;
						float float_5 = 1;
						float float_6 = 1;
						unsigned int unsigned_int_3 = 1;
						unsigned int unsigned_int_4 = 1;
						unsigned int unsigned_int_5 = 1;
						double double_2 = 1;
						int int_4 = 1;
						unsigned int unsigned_int_6 = 1;
						int int_5 = 1;
						long long_2 = 1;
						long long_3 = 1;
						double double_3 = 1;
						short short_1 = 1;
						double double_4 = 1;
						float float_7 = 1;
						long long_6 = 1;
						int int_6 = 1;
						long long_1 = 1;
						unsigned int unsigned_int_7 = 1;
						long long_4 = 1;
						unsigned int unsigned_int_8 = 1;
						float float_8 = 1;
						long long_5 = 1;
						float float_9 = 1;
						double_1 = double_1 * double_2;
						unsigned_int_1 = unsigned_int_1;
						unsigned_int_5 = unsigned_int_6 + unsigned_int_8;
					}
				}
			}
			if(1)
			{
				int int_1 = 1;
				int int_2 = 1;
				int int_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_3 = 1;
				double double_1 = 1;
				float float_4 = 1;
				char char_1 = 1;
				char char_2 = 1;
				float float_5 = 1;
				float float_6 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_2 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_6 = 1;
				int int_5 = 1;
				long long_2 = 1;
				long long_3 = 1;
				double double_3 = 1;
				short short_1 = 1;
				double double_4 = 1;
				float float_7 = 1;
				long long_6 = 1;
				int int_6 = 1;
				long long_1 = 1;
				unsigned int unsigned_int_7 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_8 = 1;
				float float_8 = 1;
				long long_5 = 1;
				float float_9 = 1;
				short_1 = v_bwt_reverse_intvs();

				float_7 = float_4 * float_8;
				long_5 = long_2 * long_4;
			}
		}
		if(1)
		{
			double_2 = double_3;
		}
		char_2 = char_2 * char_2;
		long_3 = long_4 * long_3;
		double_2 = double_1;
	}
	long_3 = long_6;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		float float_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_5 = 1;
		float float_6 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		int int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		double double_3 = 1;
		short short_1 = 1;
		double double_4 = 1;
		float float_7 = 1;
		long long_6 = 1;
		int int_6 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_8 = 1;
		float float_8 = 1;
		long long_5 = 1;
		float float_9 = 1;
		float_9 = float_1;
	}
	if(1)
	{
		float_6 = float_4;
	}
	return int_6;
}
int v_bwt_smem1( short parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,char parameter_6,float parameter_7)
{
	int int_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_2 = 1;
	return int_1;
	int_1 = v_bwt_smem1a(short_1,int_1,unsigned_int_1,int_2,int_3,float_1,unsigned_int_2,float_2);

}
long v_mem_collect_intv( unsigned int parameter_1,unsigned int parameter_2,int parameter_3,float parameter_4,long parameter_5)
{
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	int_1 = v_bwt_smem1a(short_1,int_2,unsigned_int_1,int_3,int_4,float_1,unsigned_int_1,float_2);

	char_1 = char_2;
	int_3 = v_bwt_smem1(short_1,int_2,short_2,int_3,int_3,char_2,float_1);

	long_1 = long_1;
	double_1 = double_1;
	return long_2;
	int_4 = v_bwt_seed_strategy1(float_2,int_1,float_2,int_3,int_3,int_4,int_4);

}
char v_mem_chain( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	int int_5 = 1;
	float float_3 = 1;
	double double_4 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_3 = 1;
	char char_5 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	float float_7 = 1;
	int int_6 = 1;
	long long_5 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	v_logMessage(float_1,int_1,char_1,unsigned_int_2);

	long_2 = long_1 * long_2;
	double_1 = double_2;
	long_3 = v_mem_collect_intv(unsigned_int_1,unsigned_int_1,int_2,float_1,long_3);

	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
	}
	int_3 = int_2;
	short_1 = v_bwt_sa(float_1,long_1);

	unsigned_int_3 = unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = v_bns_intv2rid(float_1,double_3,short_1);

		double_3 = double_3;
		double_2 = double_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_5 = 1;
			float float_3 = 1;
			double double_4 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			short short_3 = 1;
			char char_5 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_4 = 1;
			char char_4 = 1;
			float float_5 = 1;
			float float_6 = 1;
			float float_7 = 1;
			int int_6 = 1;
			long long_5 = 1;
			long_1 = long_4 * long_4;
		}
		if(1)
		{
			long_1 = long_2 * long_1;
		}
		if(1)
		{
			float_2 = float_1;
		}
	}
	int_1 = int_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_5 = 1;
		float float_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		short short_3 = 1;
		char char_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_4 = 1;
		char char_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		float float_7 = 1;
		int int_6 = 1;
		long long_5 = 1;
		float_1 = float_2;
		double_3 = double_2 + double_3;
		unsigned_int_3 = unsigned_int_3 + unsigned_int_2;
		unsigned_int_5 = unsigned_int_2 + unsigned_int_4;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			int int_5 = 1;
			float float_3 = 1;
			double double_4 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_8 = 1;
			unsigned int unsigned_int_9 = 1;
			short short_3 = 1;
			char char_5 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_4 = 1;
			char char_4 = 1;
			float float_5 = 1;
			float float_6 = 1;
			float float_7 = 1;
			int int_6 = 1;
			long long_5 = 1;
			unsigned_int_6 = unsigned_int_5 * unsigned_int_3;
			int_2 = int_3 * int_3;
			int_4 = int_3 * int_2;
			char_3 = char_2 * char_2;
			double_2 = double_2 * double_3;
			unsigned_int_7 = unsigned_int_6;
			int_1 = int_1;
			if(1)
			{
				int_5 = int_3;
			}
			if(1)
			{
				float_2 = float_3 * float_3;
				if(1)
				{
					unsigned_int_4 = v_test_and_merge(float_1,unsigned_int_6,double_4,float_3,int_5);

					float_1 = float_4;
				}
			}
			if(1)
			{
				long_2 = long_2 * long_1;
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				float float_1 = 1;
				int int_1 = 1;
				char char_1 = 1;
				unsigned int unsigned_int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				double double_1 = 1;
				double double_2 = 1;
				long long_3 = 1;
				int int_2 = 1;
				int int_3 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_3 = 1;
				float float_2 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				int int_5 = 1;
				float float_3 = 1;
				double double_4 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_8 = 1;
				unsigned int unsigned_int_9 = 1;
				short short_3 = 1;
				char char_5 = 1;
				long long_4 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_2 = 1;
				char char_3 = 1;
				float float_4 = 1;
				char char_4 = 1;
				float float_5 = 1;
				float float_6 = 1;
				float float_7 = 1;
				int int_6 = 1;
				long long_5 = 1;
				char_1 = char_4;
				float_4 = float_5 * float_6;
				long_1 = v_smem_aux_destroy(short_1);

				short_1 = short_1;
				short_2 = short_1 + short_1;
				short_2 = v_smem_aux_init();

				int_2 = int_2 * int_2;
				float_1 = float_7 + float_6;
				int_2 = int_6 + int_2;
			}
		}
	}
	if(1)
	{
		unsigned_int_8 = unsigned_int_6 + unsigned_int_3;
	}
	unsigned_int_9 = unsigned_int_9 + unsigned_int_2;
	short_2 = short_3;
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		long long_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		int int_5 = 1;
		float float_3 = 1;
		double double_4 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		short short_3 = 1;
		char char_5 = 1;
		long long_4 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_4 = 1;
		char char_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		float float_7 = 1;
		int int_6 = 1;
		long long_5 = 1;
		long_2 = long_5;
	}
	unsigned_int_8 = unsigned_int_7 * unsigned_int_8;
	double_3 = double_3 + double_3;
	return char_5;
}
void v_mem_align1_core( unsigned int parameter_1,unsigned int parameter_2,short parameter_3,long parameter_4,int parameter_5,char parameter_6)
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	int int_5 = 1;
	long long_4 = 1;
	float float_3 = 1;
	int int_6 = 1;
	float float_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	double double_4 = 1;
	float float_4 = 1;
	short_1 = short_2;
	long_1 = long_1 * long_1;
	double_1 = double_1 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	}
	char_2 = char_1 + char_1;
	int_1 = int_1;
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		unsigned_int_2 = unsigned_int_3;
	}
	double_2 = double_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_2 = 1;
		int int_5 = 1;
		long long_4 = 1;
		float float_3 = 1;
		int int_6 = 1;
		float float_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_4 = 1;
		float float_4 = 1;
		unsigned_int_4 = unsigned_int_4 * unsigned_int_3;
		if(1)
		{
			char_3 = char_3;
		}
		int_1 = int_2 + int_3;
		int_2 = int_3 + int_3;
	}
	double_3 = double_2 + double_1;
	float_1 = float_1;
	if(1)
	{
		int_4 = v_mem_test_and_remove_exact(double_1,int_4,int_3,int_4);

		char_3 = char_2 + char_1;
	}
	if(1)
	{
		int_3 = v_mem_sort_dedup_patch(unsigned_int_3,short_2,double_3,unsigned_int_5,int_2,double_2);

		unsigned_int_2 = unsigned_int_5;
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			float float_1 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_2 = 1;
			long long_3 = 1;
			float float_2 = 1;
			int int_5 = 1;
			long long_4 = 1;
			float float_3 = 1;
			int int_6 = 1;
			float float_5 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			double double_4 = 1;
			float float_4 = 1;
			int_2 = v_err_printf(int_3,long_2);

			unsigned_int_6 = unsigned_int_3;
			v_mem_print_chain(double_2,char_3);

			double_2 = double_3 + double_4;
		}
	}
	for(int looper_4=0; looper_4<1;looper_4++)
	{
		short short_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		float float_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_2 = 1;
		long long_3 = 1;
		float float_2 = 1;
		int int_5 = 1;
		long long_4 = 1;
		float float_3 = 1;
		int int_6 = 1;
		float float_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		double double_4 = 1;
		float float_4 = 1;
		v_mem_flt_chained_seeds(double_1,long_3,int_1,int_1,float_2,int_5,int_4);

		v_mem_chain2aln(float_1,long_4,int_3,int_3,float_1,short_2,short_2);

		float_4 = float_3 + float_2;
		if(1)
		{
			int_6 = v_mem_chain_flt(double_2,int_3,long_3);

			double_2 = double_3;
		}
	}
	float_3 = float_5 * float_1;
	char_1 = v_mem_chain(char_4);

}
long v_worker1(int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	if(1)
	{
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			float float_1 = 1;
			float_1 = float_1 * float_1;
		}
		long_2 = long_1 + long_1;
	}
	if(1)
	{
		if(1)
		{
			v_mem_align1_core(unsigned_int_2,unsigned_int_3,short_1,long_1,int_1,char_1);

			unsigned_int_1 = unsigned_int_1;
		}
		unsigned_int_1 = unsigned_int_3 * unsigned_int_1;
		if(1)
		{
			long_1 = long_1;
		}
		short_1 = short_1 + short_1;
	}
	return long_2;
}
short v_smem_aux_init()
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_2;
	short_2 = short_1 * short_1;
	long_1 = long_2;
	return short_2;
}
double v_cputime()
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	float_3 = float_1 + float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	return double_1;
}
void v_steal_work( char parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
	int_1 = int_1;
	unsigned_int_3 = unsigned_int_1;
}
void v_ktf_worker()
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	double_1 = double_1;
	double_1 = double_1 * double_2;
	int_1 = int_2;
	v_steal_work(char_1);

}
void v_kt_for( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,long parameter_6)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_4 = 1;
	float float_3 = 1;
	float_2 = float_1 * float_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1 + char_1;
	int_1 = int_2;
	double_1 = double_1 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_1 = int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_4 = 1;
		float float_3 = 1;
		v_ktf_worker();

		float_4 = float_3 + float_4;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		float_4 = float_4 + float_4;
	}
}
void v_mem_process_seqs( char parameter_1,char parameter_2,int parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6,long parameter_7,long parameter_8,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_4 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_4 = 1;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	double_2 = double_1 * double_2;
	short_1 = short_1;
	char_2 = char_1 * char_1;
	unsigned_int_2 = unsigned_int_2;
	short_1 = short_1;
	char_2 = char_3;
	double_2 = double_2 + double_3;
	double_4 = double_2;
	double_4 = double_4;
	double_4 = double_3;
	int_1 = int_1;
	int_1 = int_1 + int_1;
	int_2 = int_3;
	unsigned_int_2 = unsigned_int_2;
	float_1 = float_2;
	double_2 = double_4 * double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_3 = int_3;
	}
	int_1 = int_3 * int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long_2 = long_1 * long_2;
	}
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	char controller4vul_18[2];
	fgets(controller4vul_18 ,3 ,stdin);
	if( strcmp( controller4vul_18, "Ny") > 0)
	{
		char controller4vul_19[2];
		fgets(controller4vul_19 ,3 ,stdin);
		if( strcmp( controller4vul_19, "TS") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			short short_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_3 = 1;
			double double_4 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_4 = 1;
			long long_3 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			long long_4 = 1;
			unsigned_int_1 = v_worker2(int_2,int_4,uni_para);

			long_4 = long_1 * long_3;
		}
		if(1)
		{
			double_4 = double_4;
		}
	}
	short_1 = short_2;
	float_2 = float_2;
	unsigned_int_4 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_5 = unsigned_int_4 + unsigned_int_1;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char_1 = char_1 + char_2;
	}
	long_3 = long_1 + long_2;
}
double v_kvec_t( int parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_8 = 1;
	double double_8 = 1;
	unsigned int unsigned_int_8 = 1;
	int int_9 = 1;
	int int_10 = 1;
	double double_9 = 1;
	char char_6 = 1;
	char char_7 = 1;
	short short_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_11 = 1;
	float float_3 = 1;
	char char_8 = 1;
	unsigned int unsigned_int_9 = 1;
	int_1 = int_2;
	int_3 = int_2 * int_3;
	double_3 = double_1 * double_2;
	short_3 = short_1 * short_2;
	double_4 = double_4 + double_5;
	double_3 = double_1;
	double_3 = double_4 + double_4;
	double_5 = double_6 * double_5;
	int_4 = int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	double_7 = double_2;
	char_3 = char_1 + char_2;
	char_2 = char_4;
	double_3 = double_3;
	double_7 = double_1;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_5;
	short_2 = short_3;
	short_3 = short_3 + short_2;
	unsigned_int_1 = unsigned_int_3 * unsigned_int_4;
	int_1 = int_5;
	int_6 = int_7;
	unsigned_int_1 = unsigned_int_5;
	double_4 = double_5;
	char_1 = char_4 * char_4;
	char_5 = char_2;
	int_5 = int_4;
	unsigned_int_6 = unsigned_int_6;
	int_2 = int_6;
	int_3 = int_4 + int_7;
	short_1 = short_1;
	double_2 = double_7;
	unsigned_int_6 = unsigned_int_7 * unsigned_int_5;
	unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
	long_1 = long_2;
	short_3 = short_3;
	int_8 = int_2 + int_3;
	double_7 = double_8;
	unsigned_int_6 = unsigned_int_5;
	unsigned_int_7 = unsigned_int_8;
	int_1 = int_9 + int_3;
	int_7 = int_6 * int_6;
	int_9 = int_1 * int_1;
	unsigned_int_2 = unsigned_int_5;
	int_3 = int_4;
	int_10 = int_1 + int_2;
	double_9 = double_3;
	char_7 = char_6 + char_4;
	int_7 = int_4 * int_10;
	short_1 = short_1 + short_4;
	float_2 = float_1 + float_2;
	int_11 = int_8 * int_3;
	int_6 = int_4 + int_6;
	float_3 = float_3;
	char_8 = char_7 * char_4;
	double_1 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_7 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_8 = 1;
		double double_8 = 1;
		unsigned int unsigned_int_8 = 1;
		int int_9 = 1;
		int int_10 = 1;
		double double_9 = 1;
		char char_6 = 1;
		char char_7 = 1;
		short short_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int int_11 = 1;
		float float_3 = 1;
		char char_8 = 1;
		unsigned int unsigned_int_9 = 1;
		unsigned_int_4 = unsigned_int_7 * unsigned_int_6;
		unsigned_int_9 = unsigned_int_3 + unsigned_int_8;
		float_2 = float_2 + float_2;
		double_3 = double_2;
		if(1)
		{
			float_1 = float_2 * float_2;
		}
	}
	return double_2;
}
void v_bseq_classify( int parameter_1,float parameter_2,int parameter_3,float parameter_4)
{
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double_1 = double_1;
	char_2 = char_1 * char_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char controller_1[3];
		fgets(controller_1 ,3 ,stdin);
		if( strcmp( controller_1, "/d") > 0)
		{
			if(1)
			{
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				int int_1 = 1;
				long long_1 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int int_2 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				double_1 = double_1;
				double_2 = v_kvec_t(int_1);

				int_1 = int_1 + int_2;
				float_1 = float_1;
			}
			if(1)
			{
				double double_1 = 1;
				char char_1 = 1;
				char char_2 = 1;
				double double_2 = 1;
				int int_1 = 1;
				long long_1 = 1;
				int int_3 = 1;
				int int_4 = 1;
				int int_2 = 1;
				float float_1 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_3 = 1;
				double double_4 = 1;
				double double_5 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
		}
		char controller_4[3];
		fgets(controller_4 ,3 ,stdin);
		if( strcmp( controller_4, "*|") < 0)
		{
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_2 = 1;
			int int_1 = 1;
			long long_1 = 1;
			int int_3 = 1;
			int int_4 = 1;
			int int_2 = 1;
			float float_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			double_3 = double_1 + double_1;
		}
	}
	if(1)
	{
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		double_5 = double_2 + double_4;
	}
	long_1 = long_1;
	int_4 = int_1 + int_3;
}
int v_kseq2bseq1( float parameter_1,short parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int_1 = int_1;
	double_2 = double_1 + double_1;
	long_1 = long_2;
	double_4 = double_3 * double_4;
	int_2 = int_2;
	return int_1;
}
void v_trim_readno( float parameter_1)
{
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "(") > 0)
	{
		short short_1 = 1;
		short_1 = short_1;
	}
}
double v_bseq_read( int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_1 = v_kseq2bseq1(float_1,short_1);

	int_1 = int_2;
	v_trim_readno(float_2);

	double_1 = double_1 * double_1;
	double_1 = double_1 + double_2;
	unsigned_int_3 = unsigned_int_2;
	return double_3;
}
double v_process(int parameter_2,int uni_para)
{
	char char_1 = 1;
	double double_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long long_4 = 1;
	float float_5 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	double double_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	char_1 = char_1;
	double_1 = double_1 + double_1;
	long_3 = long_1 + long_2;
	int_1 = int_1 + int_1;
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_4 = 1;
		float float_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		double double_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		float_1 = float_1;
		float_2 = float_1;
		float_2 = float_3 + float_2;
		long_4 = long_2 * long_2;
		if(1)
		{
			float_4 = float_4 + float_5;
		}
		if(1)
		{
			for(int looper_1=0; looper_1<1;looper_1++)
			{
				char char_1 = 1;
				double double_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				int int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_4 = 1;
				float float_5 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_3 = 1;
				long long_5 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				double double_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_4 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_6 = 1;
				short_1 = short_1 + short_1;
				float_2 = float_3 + float_4;
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_1 = char_1 * char_2;
			}
		}
		double_1 = double_1;
	}
	char controller4vul_15[2];
	fgets(controller4vul_15 ,3 ,stdin);
	if( strcmp( controller4vul_15, "SI") > 0)
	{
		char char_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_4 = 1;
		float float_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		double double_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		char_3 = char_1 + char_2;
		char controller4vul_16[2];
		fgets(controller4vul_16 ,3 ,stdin);
		if( strcmp( controller4vul_16, "#v") < 0)
		{
			char_4 = char_2;
			char_2 = char_3 * char_1;
			int_1 = int_2;
			unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
			unsigned_int_2 = unsigned_int_2;
			char controller4vul_17[1];
			fgets(controller4vul_17 ,2 ,stdin);
			if( strcmp( controller4vul_17, "j") < 0)
			{
				v_mem_process_seqs(char_4,char_2,int_3,char_1,unsigned_int_1,int_2,long_3,long_5,uni_para);

				int_2 = int_3 + int_1;
				int_1 = int_1 * int_1;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					char char_1 = 1;
					double double_1 = 1;
					long long_1 = 1;
					long long_2 = 1;
					long long_3 = 1;
					int int_1 = 1;
					float float_1 = 1;
					float float_2 = 1;
					long long_4 = 1;
					float float_5 = 1;
					char char_2 = 1;
					char char_3 = 1;
					char char_4 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_3 = 1;
					long long_5 = 1;
					unsigned int unsigned_int_3 = 1;
					short short_2 = 1;
					double double_2 = 1;
					float float_3 = 1;
					float float_4 = 1;
					short short_1 = 1;
					unsigned int unsigned_int_5 = 1;
					int int_4 = 1;
					unsigned int unsigned_int_4 = 1;
					short short_3 = 1;
					unsigned int unsigned_int_6 = 1;
					int_4 = int_2 * int_2;
				}
			}
			if(1)
			{
				char char_1 = 1;
				double double_1 = 1;
				long long_1 = 1;
				long long_2 = 1;
				long long_3 = 1;
				int int_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				long long_4 = 1;
				float float_5 = 1;
				char char_2 = 1;
				char char_3 = 1;
				char char_4 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				int int_3 = 1;
				long long_5 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_2 = 1;
				double double_2 = 1;
				float float_3 = 1;
				float float_4 = 1;
				short short_1 = 1;
				unsigned int unsigned_int_5 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_4 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned_int_3 = unsigned_int_4;
				int_2 = int_2;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					long_2 = long_3;
				}
			}
			long_3 = long_4 + long_1;
			float_1 = float_5;
		}
		if(1)
		{
			short_2 = short_2;
		}
		unsigned_int_5 = unsigned_int_2;
	}
	if(1)
	{
		char char_1 = 1;
		double double_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		long long_4 = 1;
		float float_5 = 1;
		char char_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_3 = 1;
		long long_5 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		double double_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			char char_1 = 1;
			double double_1 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			int int_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			long long_4 = 1;
			float float_5 = 1;
			char char_2 = 1;
			char char_3 = 1;
			char char_4 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			long long_5 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_2 = 1;
			double double_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_1 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_6 = 1;
			if(1)
			{
				int_1 = int_3 + int_2;
			}
			char_3 = char_3 * char_1;
			unsigned_int_3 = unsigned_int_6 + unsigned_int_2;
			float_1 = float_2;
			double_1 = double_2;
			int_3 = int_1;
		}
		long_1 = long_1;
		short_2 = short_3;
	}
	return double_2;
}
long v_ktp_worker()
{
	long long_1 = 1;
	if(1)
	{
	}
	return long_1;
}
void v_kt_pipeline( int parameter_1,int parameter_3,int parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	double double_5 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double_2 = double_1 + double_2;
	double_4 = double_2 * double_3;
	long_1 = v_ktp_worker();

	double_2 = double_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_2 = 1;
		int int_3 = 1;
		short_2 = short_1 + short_1;
	}
	int_1 = int_1 * int_1;
	char_1 = char_1 * char_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	int_2 = int_2;
	float_1 = float_1 * float_1;
	double_5 = double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_2 = 1;
		int int_3 = 1;
		char_1 = char_1 + char_2;
		char_3 = char_1;
		char_1 = char_4 + char_2;
		long_1 = long_1 + long_2;
	}
	short_1 = short_1 + short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_5 = double_4 * double_5;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_2 = 1;
		float float_1 = 1;
		double double_5 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_2 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_2 = 1;
		int int_3 = 1;
		int_1 = int_2 + int_3;
	}
	int_5 = int_4 + int_1;
	int_5 = int_1 + int_1;
}
void v_bwa_print_sam_hdr( unsigned int parameter_1,double parameter_2,double parameter_3)
{
	int int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	if(1)
	{
		int int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double_1 = double_1;
		double_4 = double_2 * double_3;
		int_1 = v_err_fprintf(char_1,unsigned_int_1,unsigned_int_2);

		float_2 = float_1 * float_1;
		unsigned_int_2 = unsigned_int_2;
	}
}
char v_cmd2argv( float parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_3 = 1;
	long_2 = long_1 * long_1;
	short_2 = short_1 + short_2;
	double_3 = double_1 * double_2;
	if(1)
	{
		if(1)
		{
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_1 = double_1 * double_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_1;
	}
	return char_1;
}
void v_kftp_send_cmd( char parameter_1,float parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	if(1)
	{
	}
	if(1)
	{
	}
	float_1 = v_socket_wait(int_1,int_1);

	float_1 = v_kftp_get_response(float_2);

	int_1 = int_1;
	unsigned_int_1 = v_write_bytes(int_1,unsigned_int_1,short_1);

}
float v_socket_wait( int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	short short_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int_2 = int_1 * int_2;
	long_2 = long_1 + long_1;
	float_1 = float_1;
	short_1 = short_1 + short_2;
	short_3 = short_4;
	char_1 = char_2;
	long_1 = long_1 * long_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int_1 = int_3 + int_3;
	}
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		int_4 = int_5;
	}
	int_6 = int_6 + int_7;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		short short_3 = 1;
		short short_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		char char_3 = 1;
		char char_4 = 1;
		char_4 = char_1 * char_3;
	}
	return float_1;
}
float v_kftp_get_response( float parameter_1)
{
	short short_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short_1 = short_1;
	if(1)
	{
		short short_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		float_1 = float_1;
		if(1)
		{
			short short_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			float float_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			int int_1 = 1;
			int_1 = int_1 * int_1;
		}
		char_1 = char_1 * char_1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
	return float_2;
	float_3 = v_socket_wait(int_2,int_2);

}
char v_ftp_open( short parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	int int_7 = 1;
	int int_8 = 1;
	char char_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	short short_3 = 1;
	long long_4 = 1;
	short short_4 = 1;
	int int_9 = 1;
	int int_10 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned int unsigned_int_9 = 1;
	short short_5 = 1;
	unsigned int unsigned_int_10 = 1;
	double double_3 = 1;
	float float_3 = 1;
	char char_2 = 1;
	long long_5 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_4 = 1;
	char char_3 = 1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_1 * int_2;
	int_1 = int_1 + int_3;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1 * short_1;
	}
	if(1)
	{
	}
	unsigned_int_3 = unsigned_int_1;
	short_1 = short_2;
	int_2 = int_3 * int_4;
	int_4 = int_2 * int_5;
	unsigned_int_2 = unsigned_int_2;
	short_2 = short_2 * short_2;
	int_2 = int_4;
	int_8 = int_6 + int_7;
	if(1)
	{
		char_1 = char_1 + char_1;
	}
	int_7 = int_1 + int_3;
	long_1 = long_3;
	float_1 = float_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_4 + unsigned_int_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		char char_1 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_3 = 1;
		long long_4 = 1;
		short short_4 = 1;
		int int_9 = 1;
		int int_10 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_10 = 1;
		double double_3 = 1;
		float float_3 = 1;
		char char_2 = 1;
		long long_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		char char_3 = 1;
		unsigned_int_5 = unsigned_int_1 + unsigned_int_5;
	}
	if(1)
	{
		long_2 = long_3 * long_3;
	}
	int_7 = int_7;
	unsigned_int_7 = unsigned_int_6 + unsigned_int_2;
	short_2 = short_3;
	long_4 = v_socket_connect(short_4,int_9);

	int_10 = int_1;
	unsigned_int_3 = unsigned_int_8 * unsigned_int_9;
	int_9 = int_5 * int_8;
	short_4 = short_5 + short_1;
	unsigned_int_10 = unsigned_int_9;
	if(1)
	{
		double_3 = double_1;
	}
	float_2 = v_kftp_get_response(float_3);

	double_1 = double_3 * double_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		int int_6 = 1;
		int int_7 = 1;
		int int_8 = 1;
		char char_1 = 1;
		long long_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		short short_3 = 1;
		long long_4 = 1;
		short short_4 = 1;
		int int_9 = 1;
		int int_10 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned int unsigned_int_9 = 1;
		short short_5 = 1;
		unsigned int unsigned_int_10 = 1;
		double double_3 = 1;
		float float_3 = 1;
		char char_2 = 1;
		long long_5 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_4 = 1;
		char char_3 = 1;
		double_4 = double_1 + double_4;
		v_kftp_send_cmd(char_2,float_3,int_7);

		char_3 = char_2;
	}
	long_5 = long_1 + long_5;
	int_5 = int_10;
	long_3 = long_1;
	char_1 = char_2 + char_2;
	long_2 = long_3 * long_1;
	return char_4;
}
unsigned int v_write_bytes( int parameter_1,unsigned int parameter_2,short parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	long long_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_2 = 1;
	char char_4 = 1;
	short short_1 = 1;
	double double_5 = 1;
	double double_6 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_7 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_3 = 1;
	int int_4 = 1;
	double double_8 = 1;
	double_1 = double_2;
	double_3 = double_3;
	int_2 = int_1 * int_1;
	char_1 = char_1;
	long_1 = long_1;
	double_3 = double_2 + double_1;
	char_1 = char_2 * char_3;
	double_1 = double_4 + double_3;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	long_1 = long_2;
	char_4 = char_4;
	short_1 = short_1 + short_1;
	double_1 = double_5;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_5 = double_6 * double_6;
	int_1 = int_2;
	short_1 = short_1;
	float_2 = float_1 + float_1;
	double_4 = double_7 + double_2;
	int_3 = int_1;
	double_5 = double_1 + double_1;
	float_2 = float_1 * float_2;
	long_2 = long_2 * long_1;
	unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		char char_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		int int_4 = 1;
		double double_8 = 1;
		float_3 = float_2 * float_1;
		int_4 = int_2 + int_2;
	}
	if(1)
	{
		unsigned_int_3 = unsigned_int_3;
		double_1 = double_7 * double_6;
	}
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		long long_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_2 = 1;
		char char_4 = 1;
		short short_1 = 1;
		double double_5 = 1;
		double double_6 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_7 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_3 = 1;
		int int_4 = 1;
		double double_8 = 1;
		double_3 = double_7 * double_2;
		double_8 = double_8 * double_1;
	}
	char_2 = char_2;
	int_1 = int_2 + int_2;
	return unsigned_int_3;
}
long v_socket_connect( short parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	unsigned_int_1 = unsigned_int_1;
	return long_1;
}
short v_http_open( double parameter_1)
{
	long long_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	int int_2 = 1;
	if(1)
	{
	}
	long_1 = v_socket_connect(short_1,int_1);

	unsigned_int_1 = v_write_bytes(int_1,unsigned_int_2,short_2);

	int_2 = int_2;
	return short_2;
}
void v_kopen( long parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	short short_1 = 1;
	float float_1 = 1;
	int int_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short short_3 = 1;
	short short_4 = 1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	char_1 = v_ftp_open(short_1);

	char_1 = v_cmd2argv(float_1);

	int_1 = int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		short short_1 = 1;
		float float_1 = 1;
		int int_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		short short_3 = 1;
		short short_4 = 1;
		short_2 = v_http_open(double_1);

		int_2 = int_3;
		short_2 = short_3 * short_4;
	}
	unsigned_int_1 = unsigned_int_2;
}
void v_compileORFHistory( long parameter_1,long parameter_2,int parameter_3,float parameter_4)
{
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	float float_4 = 1;
	float float_5 = 1;
	float float_6 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	double double_6 = 1;
	float_2 = float_1 + float_1;
	float_2 = float_3;
	double_1 = double_1;
	double_2 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_5 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		float float_4 = 1;
		float float_5 = 1;
		float float_6 = 1;
		int int_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		double double_6 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	}
	long_1 = long_1;
	double_4 = double_4;
	double_4 = double_1 * double_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			double double_3 = 1;
			long long_1 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_5 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			float float_4 = 1;
			float float_5 = 1;
			float float_6 = 1;
			int int_1 = 1;
			short short_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			double double_6 = 1;
			char controller_1[3];
			fgets(controller_1 ,3 ,stdin);
			if( strcmp( controller_1, ")B") > 0)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				float float_4 = 1;
				float float_5 = 1;
				float float_6 = 1;
				int int_1 = 1;
				short short_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_6 = 1;
				char_1 = char_2;
				char_3 = char_1 * char_1;
			}
			if(1)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				float float_4 = 1;
				float float_5 = 1;
				float float_6 = 1;
				int int_1 = 1;
				short short_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_6 = 1;
				float_5 = float_2 * float_4;
				float_2 = float_6 + float_3;
			}
			double_5 = double_4;
			char controller_3[2];
			fgets(controller_3 ,2 ,stdin);
			if( strcmp( controller_3, "j") > 0)
			{
				float float_1 = 1;
				float float_2 = 1;
				float float_3 = 1;
				double double_1 = 1;
				double double_2 = 1;
				double double_3 = 1;
				long long_1 = 1;
				double double_4 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				double double_5 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				float float_4 = 1;
				float float_5 = 1;
				float float_6 = 1;
				int int_1 = 1;
				short short_1 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				double double_6 = 1;
				if(1)
				{
					float float_1 = 1;
					float float_2 = 1;
					float float_3 = 1;
					double double_1 = 1;
					double double_2 = 1;
					double double_3 = 1;
					long long_1 = 1;
					double double_4 = 1;
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					double double_5 = 1;
					char char_1 = 1;
					char char_2 = 1;
					char char_3 = 1;
					float float_4 = 1;
					float float_5 = 1;
					float float_6 = 1;
					int int_1 = 1;
					short short_1 = 1;
					int int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					unsigned int unsigned_int_4 = 1;
					unsigned int unsigned_int_5 = 1;
					unsigned int unsigned_int_6 = 1;
					unsigned int unsigned_int_7 = 1;
					double double_6 = 1;
					double_3 = double_5 * double_6;
				}
				int_1 = int_1 * int_1;
				short_1 = short_1 * short_1;
				int_2 = int_2;
				unsigned_int_4 = unsigned_int_3 + unsigned_int_4;
				unsigned_int_7 = unsigned_int_5 + unsigned_int_6;
			}
		}
	}
}
void v_addORFHistory( long parameter_1,long parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	long long_1 = 1;
	char_1 = char_2;
	float_1 = float_1 * float_1;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_3 = 1;
		long long_1 = 1;
		float_2 = float_2;
		int_1 = int_1;
	}
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_3 = 1;
			long long_1 = 1;
			unsigned_int_1 = unsigned_int_1;
			char_3 = char_1 * char_3;
			long_1 = long_1 + long_1;
			char_1 = char_1 + char_2;
		}
	}
	double_2 = double_1 + double_2;
}
long v_getLastAlignedOrfPos( long parameter_1,int parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char_3 = char_1 + char_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_1 = 1;
		int int_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int_1 = int_1 + int_1;
	}
	if(1)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_1 = 1;
			int int_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long_1 = v_getLastAlignedPos(long_1,int_2);

			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			long long_1 = 1;
			int int_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_3;
		}
	}
	return long_1;
}
int v_getSequenceORF( char parameter_1,int parameter_2,int parameter_3,int parameter_4,long parameter_5,float parameter_6)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_4 = 1;
	long long_3 = 1;
	float float_1 = 1;
	int int_4 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_1 = 1;
	int int_6 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_4 = 1;
	double double_6 = 1;
	long long_6 = 1;
	int int_5 = 1;
	double_1 = double_2;
	int_1 = int_2;
	long_1 = long_1 * long_2;
	int_1 = int_2 * int_3;
	v_addORFHistory(long_1,long_1,double_1);

	double_1 = double_2;
	double_1 = double_2 * double_1;
	double_2 = double_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		long long_3 = 1;
		float float_1 = 1;
		int int_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		char char_1 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_4 = 1;
		double double_6 = 1;
		long long_6 = 1;
		int int_5 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1 + double_2;
		short_2 = short_1 * short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		long long_3 = 1;
		float float_1 = 1;
		int int_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		char char_1 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_4 = 1;
		double double_6 = 1;
		long long_6 = 1;
		int int_5 = 1;
		short_3 = short_1 * short_2;
		long_1 = long_1;
		unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
		double_4 = double_4;
		long_1 = long_3;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			long long_3 = 1;
			float float_1 = 1;
			int int_4 = 1;
			long long_4 = 1;
			long long_5 = 1;
			char char_1 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_2 = 1;
			float float_3 = 1;
			short short_4 = 1;
			double double_6 = 1;
			long long_6 = 1;
			int int_5 = 1;
			unsigned_int_6 = unsigned_int_4 * unsigned_int_5;
		}
		for(int looper_3=0; looper_3<1;looper_3++)
		{
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_4 = 1;
			long long_3 = 1;
			float float_1 = 1;
			int int_4 = 1;
			long long_4 = 1;
			long long_5 = 1;
			char char_1 = 1;
			int int_6 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_5 = 1;
			double double_5 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned int unsigned_int_7 = 1;
			float float_2 = 1;
			float float_3 = 1;
			short short_4 = 1;
			double double_6 = 1;
			long long_6 = 1;
			int int_5 = 1;
			double_5 = double_1 * double_1;
			if(1)
			{
				v_compileORFHistory(long_3,long_2,int_2,float_1);

				int_3 = int_3;
			}
			unsigned_int_1 = unsigned_int_5 + unsigned_int_7;
			if(1)
			{
				if(1)
				{
					for(int looper_4=0; looper_4<1;looper_4++)
					{
						if(1)
						{
							double double_1 = 1;
							double double_2 = 1;
							int int_1 = 1;
							int int_2 = 1;
							long long_1 = 1;
							long long_2 = 1;
							int int_3 = 1;
							double double_3 = 1;
							unsigned int unsigned_int_1 = 1;
							unsigned int unsigned_int_2 = 1;
							short short_1 = 1;
							short short_2 = 1;
							double double_4 = 1;
							long long_3 = 1;
							float float_1 = 1;
							int int_4 = 1;
							long long_4 = 1;
							long long_5 = 1;
							char char_1 = 1;
							int int_6 = 1;
							unsigned int unsigned_int_3 = 1;
							short short_3 = 1;
							unsigned int unsigned_int_5 = 1;
							double double_5 = 1;
							unsigned int unsigned_int_4 = 1;
							unsigned int unsigned_int_6 = 1;
							unsigned int unsigned_int_7 = 1;
							float float_2 = 1;
							float float_3 = 1;
							short short_4 = 1;
							double double_6 = 1;
							long long_6 = 1;
							int int_5 = 1;
							unsigned_int_2 = unsigned_int_1 * unsigned_int_7;
							float_3 = float_2 + float_1;
							double_5 = double_4 + double_5;
							short_1 = short_2 + short_4;
							double_1 = double_2 + double_3;
						}
					}
					int_1 = int_4;
				}
				long_2 = long_4 + long_1;
			}
		}
		if(1)
		{
			if(1)
			{
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				long long_1 = 1;
				long long_2 = 1;
				int int_3 = 1;
				double double_3 = 1;
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				double double_4 = 1;
				long long_3 = 1;
				float float_1 = 1;
				int int_4 = 1;
				long long_4 = 1;
				long long_5 = 1;
				char char_1 = 1;
				int int_6 = 1;
				unsigned int unsigned_int_3 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_5 = 1;
				double double_5 = 1;
				unsigned int unsigned_int_4 = 1;
				unsigned int unsigned_int_6 = 1;
				unsigned int unsigned_int_7 = 1;
				float float_2 = 1;
				float float_3 = 1;
				short short_4 = 1;
				double double_6 = 1;
				long long_6 = 1;
				int int_5 = 1;
				long_4 = v_getLastAlignedOrfPos(long_4,int_3,double_4);

				double_3 = double_6 + double_5;
			}
		}
	}
	long_1 = long_2 + long_5;
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_4 = 1;
		long long_3 = 1;
		float float_1 = 1;
		int int_4 = 1;
		long long_4 = 1;
		long long_5 = 1;
		char char_1 = 1;
		int int_6 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_5 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned int unsigned_int_7 = 1;
		float float_2 = 1;
		float float_3 = 1;
		short short_4 = 1;
		double double_6 = 1;
		long long_6 = 1;
		int int_5 = 1;
		v_encodeCodon(char_1,int_4);

		long_6 = long_2 * long_3;
		int_5 = int_1;
	}
	return int_6;
	long_2 = v_getLastAlignedPos(long_2,int_4);

}
int v_writeReadsProtein( char parameter_1,unsigned int parameter_2,float parameter_3)
{
	int int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	int int_4 = 1;
	long long_4 = 1;
	int int_5 = 1;
	long long_5 = 1;
	double double_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int_1 = v_err_gzclose(short_1);

	long_1 = long_2;
	v_logMessage(float_1,int_2,char_1,unsigned_int_1);

	int_3 = v_convertToAA(char_2,char_2,int_2,char_3,int_2);

	int_1 = v_err_fclose(long_3);

	int_4 = int_3 * int_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "oQ") > 0)
	{
	}
	long_4 = long_1;
	if(1)
	{
		int int_1 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		float float_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_3 = 1;
		char char_2 = 1;
		char char_3 = 1;
		long long_3 = 1;
		int int_4 = 1;
		long long_4 = 1;
		int int_5 = 1;
		long long_5 = 1;
		double double_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_2;
	}
	char_2 = char_1;
	int_2 = v_getSequenceORF(char_2,int_3,int_5,int_4,long_4,float_1);

	long_5 = long_3 + long_3;
	return int_3;
	long_4 = v_err_xopen_core(int_3,double_3,char_1);

}
char v_bns_restore_core( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	long long_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_3 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	long_1 = long_1 * long_2;
	double_3 = double_1 * double_2;
	int_1 = v_err_fclose(long_3);

	char_2 = char_1 + char_2;
	v_err_fatal(short_1,unsigned_int_1,char_3);

	short_1 = short_2;
	float_2 = float_1 * float_2;
	return char_1;
}
void v_bns_restore( char parameter_1)
{
	double double_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_4 = 1;
	short short_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	double_1 = double_1;
	float_1 = float_1 + float_2;
	double_3 = double_2 * double_1;
	char_1 = char_2;
	char_1 = char_3 * char_2;
	char_2 = v_bns_restore_core(unsigned_int_1,int_1,char_3);

	short_1 = short_1 * short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		short short_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_4 = 1;
		short short_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		double double_4 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_3 = 1;
		int_1 = int_2 * int_2;
		short_1 = short_1 * short_2;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
			double_2 = double_2 + double_2;
			if(1)
			{
				unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
			}
			if(1)
			{
				double double_1 = 1;
				float float_1 = 1;
				float float_2 = 1;
				double double_2 = 1;
				double double_3 = 1;
				char char_1 = 1;
				char char_2 = 1;
				char char_3 = 1;
				unsigned int unsigned_int_1 = 1;
				int int_1 = 1;
				short short_1 = 1;
				int int_2 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_2 = 1;
				char char_4 = 1;
				short short_4 = 1;
				long long_1 = 1;
				long long_2 = 1;
				int int_3 = 1;
				double double_4 = 1;
				int int_4 = 1;
				int int_5 = 1;
				short short_3 = 1;
				short_3 = short_2;
			}
			if(1)
			{
				double_2 = double_1 * double_1;
			}
		}
		char_4 = char_2 * char_4;
		short_4 = short_1;
		int_2 = int_1 * int_1;
		long_2 = long_1 * long_1;
		int_3 = int_1 + int_1;
		double_3 = double_1;
		unsigned_int_2 = unsigned_int_2 * unsigned_int_2;
		double_3 = double_2;
		double_4 = double_2 * double_4;
		double_3 = double_3 + double_3;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		int_4 = int_3 * int_1;
		int_1 = int_3 * int_5;
	}
	if(1)
	{
	}
	if(1)
	{
	}
}
void v_bwt_restore_sa( unsigned int parameter_1,short parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	long long_3 = 1;
	float float_3 = 1;
	double double_4 = 1;
	double_1 = double_2;
	char_2 = char_1 + char_2;
	int_1 = v_err_fclose(long_1);

	float_2 = float_1 * float_2;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	char_4 = char_3 + char_1;
	int_2 = int_1 * int_2;
	unsigned_int_4 = unsigned_int_4;
	unsigned_int_3 = v_err_fread_noeof(short_1,long_2,int_3);

	long_1 = long_1;
	double_2 = double_3;
	char_3 = char_4 + char_3;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_1;
	long_3 = v_fread_fix(int_3,float_3);

	int_2 = int_1 + int_3;
	double_4 = double_3 + double_3;
}
void v_index_load_bwt( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_5 = 1;
	short short_2 = 1;
	long_1 = long_2;
	short_1 = short_1;
	long_3 = v_index_infer_prefix(float_1);

	char_1 = v_bwt_restore_bwt(long_2);

	double_2 = double_1 + double_2;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "^") < 0)
	{
		long long_1 = 1;
		long long_2 = 1;
		short short_1 = 1;
		long long_3 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_3 = 1;
		int int_3 = 1;
		int int_4 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_5 = 1;
		short short_2 = 1;
		short_2 = short_1 * short_2;
	}
	float_1 = float_1 + float_2;
	int_1 = int_2;
	v_logMessage(float_3,int_1,char_1,unsigned_int_1);

	int_2 = int_2;
	v_bwt_restore_sa(unsigned_int_2,short_3);

	int_4 = int_3 * int_3;
	double_3 = double_4;
	long_1 = long_3;
	int_5 = int_4;
}
long v_index_infer_prefix( float parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float_1 = float_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_2;
	double_4 = double_3 * double_1;
	double_1 = double_3;
	double_2 = double_4 + double_2;
	int_1 = int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_1 = 1;
		long long_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1;
		char_1 = char_2 * char_2;
	}
	return long_1;
}
long v_index_load_from_disk( int parameter_1,int parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	long long_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	int int_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long long_4 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_2 = 1;
	int int_3 = 1;
	long_2 = long_1 + long_2;
	double_1 = double_2;
	long_2 = long_2 + long_1;
	if(1)
	{
		long_1 = v_index_infer_prefix(float_1);

		v_bns_restore(char_1);

		long_3 = long_2;
	}
	short_1 = short_2;
	long_3 = long_1;
	int_1 = int_1 * int_1;
	if(1)
	{
		unsigned_int_1 = unsigned_int_1;
	}
	if(1)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_2;
		double_1 = double_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			if(1)
			{
				v_index_load_bwt(unsigned_int_3);

				double_1 = double_1;
			}
		}
		double_1 = double_2;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			char char_1 = 1;
			long long_3 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			int int_2 = 1;
			double double_3 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_6 = 1;
			long long_4 = 1;
			unsigned int unsigned_int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_2 = 1;
			int int_3 = 1;
			long_3 = long_4 * long_2;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_5;
			int_1 = v_err_fclose(long_2);

			char_1 = char_2;
			unsigned_int_2 = v_err_fread_noeof(short_3,long_1,int_2);

			int_1 = int_3 * int_3;
		}
	}
	double_2 = double_3 * double_1;
	long_3 = long_1 * long_2;
	return long_1;
	v_logMessage(float_2,int_1,char_1,unsigned_int_6);

}
unsigned int v_index_load( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	return unsigned_int_1;
	long_1 = v_index_load_from_disk(int_1,int_1);

}
int v_bwa_mem2idx( double parameter_1,double parameter_2,double parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	short short_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_4 = 1;
	float_2 = float_1 * float_2;
	short_1 = short_2;
	double_1 = double_1 + double_2;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_3 * float_3;
	unsigned_int_1 = unsigned_int_2;
	double_2 = double_1;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_2;
	float_2 = float_3 * float_2;
	unsigned_int_2 = unsigned_int_1;
	char_1 = char_1 * char_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	double_1 = double_2 * double_2;
	float_2 = float_2 + float_2;
	double_2 = double_2 * double_2;
	float_3 = float_3 + float_2;
	char_3 = char_3 * char_2;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	short_3 = short_3 + short_1;
	char_2 = char_1 * char_2;
	double_1 = double_1;
	short_1 = short_3 + short_2;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short short_3 = 1;
		long long_1 = 1;
		int int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_2 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_4 = 1;
		int_1 = int_2;
		unsigned_int_1 = unsigned_int_3;
		int_1 = int_1;
		float_1 = float_3 * float_4;
	}
	double_3 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	double_3 = double_4 * double_2;
	long_1 = long_2;
	unsigned_int_2 = unsigned_int_1;
	return int_1;
}
void v_index_load_from_shm( unsigned int parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_2 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	char_2 = char_1 + char_2;
	unsigned_int_1 = unsigned_int_3;
	unsigned_int_3 = unsigned_int_2;
	if(1)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double_1 = double_1;
	}
	int_2 = int_1 * int_1;
	if(1)
	{
	}
	unsigned_int_1 = unsigned_int_3;
	int_1 = v_bwa_mem2idx(double_1,double_1,double_2);

	double_2 = double_2 + double_3;
	if(1)
	{
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_1 = int_2;
		int_2 = int_2;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_2 = 1;
			double double_1 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			double double_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long_2 = long_1 * long_2;
		}
		int_2 = int_3 + int_1;
	}
	if(1)
	{
	}
	double_2 = double_4 + double_2;
	if(1)
	{
	}
	double_2 = double_3 * double_4;
	int_2 = int_1 * int_3;
	unsigned_int_3 = unsigned_int_1;
	char_1 = char_2;
}
int v_getIndexCompatible( short parameter_1)
{
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float_1 = float_1 * float_2;
	unsigned_int_2 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_1;
	int_1 = int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long_1 = long_1;
	}
	int_2 = int_1 + int_2;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int_3 = int_2;
	}
	double_1 = double_1 * double_2;
	int_4 = int_4 * int_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double_4 = double_1 * double_3;
	}
	unsigned_int_3 = unsigned_int_3 + unsigned_int_4;
	int_2 = int_2 * int_1;
	float_1 = float_2;
	int_5 = int_4 + int_5;
	unsigned_int_3 = unsigned_int_4;
	return int_1;
}
short v_getIndexHeader( char parameter_1)
{
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	short_2 = short_1 + short_1;
	float_1 = float_2;
	char_1 = char_2;
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
		double_1 = double_1;
	}
	if(1)
	{
		short short_1 = 1;
		short short_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_4 = 1;
		double double_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int_3 = int_1 + int_2;
		unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
	}
	v_logMessage(float_1,int_4,char_2,unsigned_int_2);

	unsigned_int_3 = unsigned_int_1;
	return short_1;
}
double v_update_a( unsigned int parameter_1,char parameter_2)
{
	double double_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_2 = 1;
	double double_1 = 1;
	float float_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	int int_3 = 1;
	short short_1 = 1;
	if(1)
	{
		double double_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		double double_3 = 1;
		int int_2 = 1;
		double double_1 = 1;
		float float_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		int int_3 = 1;
		short short_1 = 1;
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			int_1 = int_2;
		}
		if(1)
		{
			float_1 = float_1;
		}
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			double_2 = double_1 * double_2;
		}
		if(1)
		{
			double_3 = double_2 * double_3;
		}
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			float_1 = float_1 + float_2;
		}
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			double_3 = double_3 * double_4;
		}
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			long_1 = long_1 * long_2;
		}
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			int_1 = int_3;
		}
		if(1)
		{
			double double_2 = 1;
			int int_1 = 1;
			float float_1 = 1;
			double double_3 = 1;
			int int_2 = 1;
			double double_1 = 1;
			float float_2 = 1;
			double double_4 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			int int_3 = 1;
			short short_1 = 1;
			short_1 = short_1;
		}
	}
	return double_2;
}
int v_renderAlignUsage( float parameter_1)
{
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	short short_3 = 1;
	short short_4 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_2 = 1;
	long long_2 = 1;
	short short_5 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	long long_3 = 1;
	long long_4 = 1;
	double double_4 = 1;
	float float_3 = 1;
	float float_4 = 1;
	char char_4 = 1;
	char char_5 = 1;
	float float_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_6 = 1;
	unsigned int unsigned_int_7 = 1;
	char char_6 = 1;
	double double_6 = 1;
	short short_6 = 1;
	int int_5 = 1;
	long long_5 = 1;
	unsigned int unsigned_int_8 = 1;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_2;
	short_1 = short_2;
	double_2 = double_1 + double_1;
	unsigned_int_1 = unsigned_int_3;
	int_1 = int_2;
	float_1 = float_1 * float_1;
	short_4 = short_3 + short_1;
	double_3 = double_2 + double_2;
	unsigned_int_4 = unsigned_int_1 * unsigned_int_4;
	int_2 = int_3 + int_4;
	double_2 = double_1 + double_1;
	double_3 = double_2;
	float_1 = float_1;
	int_4 = int_2 + int_1;
	int_1 = int_2;
	unsigned_int_3 = unsigned_int_3;
	unsigned_int_5 = unsigned_int_4 * unsigned_int_3;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_3;
	float_1 = float_1 * float_2;
	short_4 = short_3 + short_3;
	float_1 = float_1;
	unsigned_int_4 = unsigned_int_5;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_4;
	long_1 = long_1 + long_2;
	short_3 = short_5 + short_3;
	char_3 = char_1 * char_2;
	char_1 = char_2;
	long_3 = long_2;
	long_4 = long_4 + long_2;
	double_4 = double_3;
	double_3 = double_2;
	float_2 = float_3 + float_2;
	float_4 = float_1;
	char_5 = char_4 * char_3;
	float_1 = float_1 + float_5;
	double_5 = double_4;
	unsigned_int_5 = unsigned_int_6 + unsigned_int_7;
	char_6 = char_1 * char_4;
	float_5 = float_2;
	double_2 = double_1 + double_4;
	unsigned_int_6 = unsigned_int_2 + unsigned_int_6;
	unsigned_int_6 = unsigned_int_6;
	double_2 = double_3;
	unsigned_int_1 = unsigned_int_7 + unsigned_int_2;
	long_1 = long_3;
	double_1 = double_6;
	double_2 = double_4;
	double_1 = double_2 * double_2;
	long_2 = long_2;
	short_6 = short_5 * short_3;
	long_1 = long_2 * long_1;
	double_2 = double_4;
	short_3 = short_1 + short_3;
	short_4 = short_1 + short_1;
	int_3 = int_1 * int_5;
	unsigned_int_5 = unsigned_int_1 + unsigned_int_1;
	long_5 = long_1;
	unsigned_int_4 = unsigned_int_5;
	unsigned_int_7 = unsigned_int_3;
	unsigned_int_2 = unsigned_int_3 + unsigned_int_8;
	return int_1;
}
char v_bwa_insert_header( short parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		int_3 = int_1 * int_2;
		unsigned_int_1 = v_bwa_escape(char_1);

		int_4 = int_1 + int_2;
		int_4 = int_1;
		int_3 = int_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short_1 = short_1 * short_1;
	}
	double_3 = double_1 + double_2;
	return char_1;
}
unsigned int v_bwa_escape( char parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_2 = 1;
	long_2 = long_1 * long_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_2 = 1;
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			double_1 = double_1 + double_2;
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_2 = 1;
				int_2 = int_1 + int_1;
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_2 = 1;
				short_1 = short_2;
			}
			if(1)
			{
				char_1 = char_1 + char_1;
			}
			if(1)
			{
				long long_1 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_1 = 1;
				char char_1 = 1;
				double double_1 = 1;
				double double_2 = 1;
				int int_1 = 1;
				int int_2 = 1;
				short short_1 = 1;
				short short_2 = 1;
				unsigned int unsigned_int_1 = 1;
				char char_2 = 1;
				unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
			}
		}
		if(1)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_1 = 1;
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_1 = 1;
			char char_2 = 1;
			char_2 = char_1;
		}
	}
	float_1 = float_1;
	return unsigned_int_2;
}
short v_bwa_set_rg( short parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	float float_1 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	long long_1 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_2 = 1;
	double_1 = double_1;
	double_2 = double_1 * double_1;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		int_2 = int_1 + int_2;
		char_2 = char_1 * char_1;
	}
	v_logMessage(float_1,int_3,char_1,unsigned_int_1);

	short_1 = short_1 + short_1;
	char_3 = char_3 * char_4;
	if(1)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		int_1 = int_1;
		unsigned_int_2 = unsigned_int_1;
	}
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		float float_1 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		char char_3 = 1;
		char char_4 = 1;
		long long_1 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_3 = 1;
		double double_4 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_2 = 1;
		short_2 = short_2;
	}
	if(1)
	{
		int_2 = int_4;
		unsigned_int_3 = v_bwa_escape(char_1);

		double_1 = double_3;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_2 = int_4;
	}
	double_2 = double_3 + double_4;
	return short_1;
}
void v_renderTranslations()
{
	short short_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short_2 = short_1 + short_1;
	short_2 = short_1 + short_2;
	long_1 = long_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			short short_1 = 1;
			short short_2 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float_2 = float_1 + float_1;
		}
	}
}
unsigned int v_convertTransArgs( float parameter_1)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_2 = 1;
	long long_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	double double_6 = 1;
	int int_4 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	long long_3 = 1;
	char_1 = char_1;
	double_2 = double_1 * double_2;
	int_3 = int_1 + int_2;
	char_2 = char_2;
	if(1)
	{
		long_1 = long_1 * long_1;
		double_1 = double_3;
	}
	double_4 = double_3;
	double_5 = double_5;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			float_1 = float_2;
			v_renderTranslations();

			float_3 = float_1;
		}
	}
	float_4 = float_1 + float_2;
	float_3 = float_4;
	char_1 = char_1;
	double_2 = double_6;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		double_2 = double_1;
		int_3 = int_4;
		if(1)
		{
			int_2 = int_2 + int_4;
			long_2 = long_1 * long_1;
		}
		if(1)
		{
			char char_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			char char_2 = 1;
			long long_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			float float_1 = 1;
			float float_2 = 1;
			float float_3 = 1;
			float float_4 = 1;
			double double_6 = 1;
			int int_4 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			short short_1 = 1;
			long long_3 = 1;
			unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
			short_1 = short_1;
		}
	}
	char controller_5[3];
	fgets(controller_5 ,3 ,stdin);
	if( strcmp( controller_5, "us") < 0)
	{
		char char_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_2 = 1;
		long long_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float float_3 = 1;
		float float_4 = 1;
		double double_6 = 1;
		int int_4 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		short short_1 = 1;
		long long_3 = 1;
		int_4 = int_4 + int_2;
		long_3 = long_2 * long_1;
	}
	return unsigned_int_3;
}
void v_bwa_fill_scmat( int parameter_1,int parameter_2,double parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			char_2 = char_1 * char_2;
		}
		unsigned_int_2 = unsigned_int_2 * unsigned_int_3;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char_1 = char_2;
	}
}
short v_mem_opt_init()
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_2 = 1;
	short short_3 = 1;
	int int_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_2 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_4 = 1;
	short short_5 = 1;
	double double_5 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	long long_4 = 1;
	long long_5 = 1;
	double double_7 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int_2 = int_1 + int_2;
	short_1 = short_1;
	double_2 = double_1 * double_2;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_1;
	int_1 = int_1 + int_1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2 * double_1;
	double_4 = double_2 * double_3;
	unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	long_1 = long_1 * long_1;
	float_1 = float_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	float_3 = float_1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	int_2 = int_2;
	short_3 = short_2 + short_3;
	v_bwa_fill_scmat(int_3,int_4,double_3);

	int_5 = int_5 * int_4;
	int_6 = int_1;
	long_3 = long_1 * long_2;
	unsigned_int_4 = unsigned_int_3;
	short_5 = short_2 + short_4;
	double_4 = double_5;
	unsigned_int_5 = unsigned_int_3 * unsigned_int_2;
	double_6 = double_5;
	short_4 = short_4;
	double_6 = double_5;
	double_4 = double_2 + double_5;
	int_6 = int_5 * int_5;
	int_2 = int_2;
	double_6 = double_4 + double_4;
	long_2 = long_3;
	long_5 = long_4 * long_1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_3;
	int_4 = int_5 + int_4;
	double_7 = double_6 * double_1;
	int_3 = int_2;
	char_1 = char_1 + char_2;
	char_1 = char_2;
	return short_2;
}
int v_command_align( int parameter_1,char parameter_2,int uni_para)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_1 = 1;
	int int_1 = 1;
	char char_1 = 1;
	float float_1 = 1;
	char char_3 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	char char_4 = 1;
	double double_2 = 1;
	double double_4 = 1;
	char char_2 = 1;
	float float_2 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_6 = 1;
	short short_2 = 1;
	double double_3 = 1;
	short short_4 = 1;
	int int_5 = 1;
	int int_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	char char_5 = 1;
	unsigned int unsigned_int_7 = 1;
	unsigned int unsigned_int_8 = 1;
	unsigned_int_1 = unsigned_int_1;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_3;
	char controller4vul_12[2];
	fgets(controller4vul_12 ,3 ,stdin);
	if( strcmp( controller4vul_12, "pU") > 0)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		char char_3 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_4 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		float float_2 = 1;
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		double double_3 = 1;
		short short_4 = 1;
		int int_5 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		long_1 = long_1 * long_1;
		unsigned_int_2 = unsigned_int_1;
		char controller4vul_13[1];
		fgets(controller4vul_13 ,2 ,stdin);
		if( strcmp( controller4vul_13, "s") < 0)
		{
			char controller4vul_14[2];
			fgets(controller4vul_14 ,3 ,stdin);
			if( strcmp( controller4vul_14, "aV") < 0)
			{
				double_1 = v_process(int_1,uni_para);

			}
			char_1 = char_2;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_1 = 1;
				double double_1 = 1;
				int int_1 = 1;
				char char_1 = 1;
				float float_1 = 1;
				char char_3 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_4 = 1;
				double double_2 = 1;
				double double_4 = 1;
				char char_2 = 1;
				float float_2 = 1;
				short short_1 = 1;
				float float_3 = 1;
				float float_4 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_2 = 1;
				double double_3 = 1;
				short short_4 = 1;
				int int_5 = 1;
				int int_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char char_5 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				float_1 = float_1 + float_2;
			}
			unsigned_int_1 = unsigned_int_3 * unsigned_int_3;
		}
		if(1)
		{
			char_3 = char_2 * char_1;
			if(1)
			{
				long_1 = long_2 * long_1;
			}
			if(1)
			{
				for(int looper_1=0; looper_1<1;looper_1++)
				{
					unsigned_int_3 = unsigned_int_2 + unsigned_int_2;
					unsigned_int_2 = unsigned_int_4;
				}
			}
			for(int looper_2=0; looper_2<1;looper_2++)
			{
				char_2 = char_3 * char_3;
				int_1 = int_1;
			}
			if(1)
			{
				int_3 = int_1 * int_2;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		char char_3 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_4 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		float float_2 = 1;
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		double double_3 = 1;
		short short_4 = 1;
		int int_5 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		unsigned_int_3 = unsigned_int_2 * unsigned_int_2;
		int_3 = int_2 * int_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			double double_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			float float_1 = 1;
			char char_3 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_4 = 1;
			double double_2 = 1;
			double double_4 = 1;
			char char_2 = 1;
			float float_2 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_2 = 1;
			double double_3 = 1;
			short short_4 = 1;
			int int_5 = 1;
			int int_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			long_1 = long_1;
			unsigned_int_4 = unsigned_int_4;
			int_1 = int_1;
			unsigned_int_3 = unsigned_int_4 * unsigned_int_1;
			if(1)
			{
				unsigned_int_5 = unsigned_int_5 * unsigned_int_1;
				char_1 = char_4 * char_3;
				for(int looper_3=0; looper_3<1;looper_3++)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					unsigned int unsigned_int_3 = 1;
					long long_1 = 1;
					double double_1 = 1;
					int int_1 = 1;
					char char_1 = 1;
					float float_1 = 1;
					char char_3 = 1;
					long long_2 = 1;
					unsigned int unsigned_int_4 = 1;
					int int_2 = 1;
					int int_3 = 1;
					unsigned int unsigned_int_5 = 1;
					char char_4 = 1;
					double double_2 = 1;
					double double_4 = 1;
					char char_2 = 1;
					float float_2 = 1;
					short short_1 = 1;
					float float_3 = 1;
					float float_4 = 1;
					short short_3 = 1;
					unsigned int unsigned_int_6 = 1;
					short short_2 = 1;
					double double_3 = 1;
					short short_4 = 1;
					int int_5 = 1;
					int int_4 = 1;
					double double_5 = 1;
					double double_6 = 1;
					char char_5 = 1;
					unsigned int unsigned_int_7 = 1;
					unsigned int unsigned_int_8 = 1;
					short_3 = short_1 * short_2;
				}
			}
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				unsigned int unsigned_int_2 = 1;
				unsigned int unsigned_int_3 = 1;
				long long_1 = 1;
				double double_1 = 1;
				int int_1 = 1;
				char char_1 = 1;
				float float_1 = 1;
				char char_3 = 1;
				long long_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_2 = 1;
				int int_3 = 1;
				unsigned int unsigned_int_5 = 1;
				char char_4 = 1;
				double double_2 = 1;
				double double_4 = 1;
				char char_2 = 1;
				float float_2 = 1;
				short short_1 = 1;
				float float_3 = 1;
				float float_4 = 1;
				short short_3 = 1;
				unsigned int unsigned_int_6 = 1;
				short short_2 = 1;
				double double_3 = 1;
				short short_4 = 1;
				int int_5 = 1;
				int int_4 = 1;
				double double_5 = 1;
				double double_6 = 1;
				char char_5 = 1;
				unsigned int unsigned_int_7 = 1;
				unsigned int unsigned_int_8 = 1;
				double_2 = double_3;
				short_3 = short_1;
				for(int looper_4=0; looper_4<1;looper_4++)
				{
					float_1 = float_3;
				}
			}
			double_4 = double_2 + double_1;
			unsigned_int_6 = unsigned_int_1 + unsigned_int_1;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			double double_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			float float_1 = 1;
			char char_3 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_4 = 1;
			double double_2 = 1;
			double double_4 = 1;
			char char_2 = 1;
			float float_2 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_2 = 1;
			double double_3 = 1;
			short short_4 = 1;
			int int_5 = 1;
			int int_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			short_1 = short_4;
		}
		float_4 = float_3;
	}
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_1 = 1;
		int int_1 = 1;
		char char_1 = 1;
		float float_1 = 1;
		char char_3 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		char char_4 = 1;
		double double_2 = 1;
		double double_4 = 1;
		char char_2 = 1;
		float float_2 = 1;
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_6 = 1;
		short short_2 = 1;
		double double_3 = 1;
		short short_4 = 1;
		int int_5 = 1;
		int int_4 = 1;
		double double_5 = 1;
		double double_6 = 1;
		char char_5 = 1;
		unsigned int unsigned_int_7 = 1;
		unsigned int unsigned_int_8 = 1;
		for(int looper_5=0; looper_5<1;looper_5++)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			double double_1 = 1;
			int int_1 = 1;
			char char_1 = 1;
			float float_1 = 1;
			char char_3 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			char char_4 = 1;
			double double_2 = 1;
			double double_4 = 1;
			char char_2 = 1;
			float float_2 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			short short_3 = 1;
			unsigned int unsigned_int_6 = 1;
			short short_2 = 1;
			double double_3 = 1;
			short short_4 = 1;
			int int_5 = 1;
			int int_4 = 1;
			double double_5 = 1;
			double double_6 = 1;
			char char_5 = 1;
			unsigned int unsigned_int_7 = 1;
			unsigned int unsigned_int_8 = 1;
			if(1)
			{
				int_1 = int_4;
			}
			double_1 = double_5;
			double_6 = double_4 + double_4;
			double_4 = double_2;
			char_5 = char_1 * char_4;
			unsigned_int_7 = unsigned_int_5;
			unsigned_int_8 = unsigned_int_3 + unsigned_int_4;
			int_1 = int_4 + int_5;
		}
		int_3 = int_5;
		long_2 = long_1;
	}
	return int_1;
}
void v_cleanUniprotReferenceUniref( unsigned int parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	char char_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int_1 = int_1 + int_2;
	long_1 = long_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_1 * double_1;
	long_2 = long_2 + long_3;
	float_1 = float_2;
	if(1)
	{
		double_1 = double_1 * double_2;
	}
	long_1 = v_err_xopen_core(int_3,double_3,char_1);

	int_2 = v_err_gzclose(short_1);

	long_3 = long_3 + long_2;
	int_4 = int_3;
}
int v_cleanUniprotReference( int parameter_1,double parameter_2)
{
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_5 = 1;
	double double_5 = 1;
	int int_7 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_4 = 1;
	int int_6 = 1;
	int_1 = int_1 + int_1;
	double_1 = double_2;
	v_logMessage(float_1,int_1,char_1,unsigned_int_1);

	double_4 = double_3 + double_3;
	char_1 = char_1;
	long_1 = long_1;
	short_1 = short_2;
	double_4 = double_3 * double_2;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_2;
	int_2 = int_3;
	if(1)
	{
		double_1 = double_4 + double_2;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		int int_3 = 1;
		int int_5 = 1;
		double double_5 = 1;
		int int_7 = 1;
		float float_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_4 = 1;
		int int_6 = 1;
		v_writeIndexHeader(double_1,int_1);

		float_2 = float_2 + float_1;
		char_2 = char_3;
		double_3 = double_2 + double_4;
		int_3 = int_4 + int_1;
		int_2 = int_3 + int_2;
		long_1 = v_err_xopen_core(int_5,double_4,char_1);

		short_2 = short_2;
		v_cleanUniprotReferenceUniref(unsigned_int_2,int_2);

		int_6 = int_5;
	}
	double_5 = double_2 * double_4;
	return int_7;
}
double v_downloadUniprotReference( int parameter_1,float parameter_2)
{
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	char char_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_1 = 1;
	short short_2 = 1;
	long long_2 = 1;
	double double_2 = 1;
	char char_5 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	double double_3 = 1;
	int int_4 = 1;
	long long_5 = 1;
	long long_6 = 1;
	char_2 = char_1 + char_2;
	long_1 = long_1;
	int_1 = int_2;
	double_1 = double_1 * double_1;
	char_4 = char_3 + char_4;
	int_1 = int_3 + int_2;
	long_1 = long_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_3;
	if(1)
	{
		short_1 = short_2;
	}
	long_2 = v_err_xopen_core(int_2,double_2,char_5);

	long_4 = long_3 + long_4;
	v_logMessage(float_1,int_2,char_1,unsigned_int_1);

	double_1 = double_3;
	if(1)
	{
		short_2 = short_1;
		int_2 = int_2;
		long_4 = long_4 + long_1;
	}
	int_4 = int_1 * int_1;
	long_6 = long_4 * long_5;
	return double_2;
}
int v_command_prepare( int parameter_1,char parameter_2)
{
	short short_1 = 1;
	short short_2 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_3 = 1;
	double double_3 = 1;
	int int_6 = 1;
	float float_2 = 1;
	int int_8 = 1;
	char char_4 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	int int_7 = 1;
	float float_3 = 1;
	int int_4 = 1;
	int int_5 = 1;
	short short_3 = 1;
	if(1)
	{
	}
	short_1 = short_2;
	short_2 = short_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short short_1 = 1;
		short short_2 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_3 = 1;
		double double_3 = 1;
		int int_6 = 1;
		float float_2 = 1;
		int int_8 = 1;
		char char_4 = 1;
		char char_2 = 1;
		char char_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		int int_7 = 1;
		float float_3 = 1;
		int int_4 = 1;
		int int_5 = 1;
		short short_3 = 1;
		char_1 = char_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_2;
		}
		if(1)
		{
			char_2 = char_3;
			if(1)
			{
				double_1 = double_2;
			}
		}
		int_1 = int_1;
		char_1 = char_3 * char_3;
		double_1 = double_1 + double_2;
		int_1 = int_1 * int_2;
		unsigned_int_3 = unsigned_int_2 + unsigned_int_1;
		int_3 = v_cleanUniprotReference(int_1,double_3);

		short_2 = short_2 + short_2;
		float_1 = float_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			short short_1 = 1;
			short short_2 = 1;
			char char_1 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_3 = 1;
			double double_3 = 1;
			int int_6 = 1;
			float float_2 = 1;
			int int_8 = 1;
			char char_4 = 1;
			char char_2 = 1;
			char char_3 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			float float_1 = 1;
			int int_7 = 1;
			float float_3 = 1;
			int int_4 = 1;
			int int_5 = 1;
			short short_3 = 1;
			int_5 = int_4 * int_5;
			double_1 = v_downloadUniprotReference(int_6,float_2);

			short_3 = short_1;
		}
		int_7 = int_3 * int_3;
		float_3 = float_1;
		int_1 = v_command_index(int_8,char_4);

		char_4 = char_2;
		short_2 = short_1 * short_1;
		unsigned_int_3 = unsigned_int_2;
	}
	if(1)
	{
		double_1 = double_3 + double_2;
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	}
	char_1 = char_1 * char_1;
	return int_6;
}
void v_bwt_dump_sa( int parameter_1,short parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_5 = 1;
	double double_6 = 1;
	int_1 = v_err_fclose(long_1);

	int_3 = int_2 + int_2;
	char_1 = char_2;
	int_3 = v_err_fflush(unsigned_int_1);

	double_3 = double_1 + double_2;
	double_1 = double_4 + double_2;
	long_2 = long_1 * long_2;
	int_2 = int_3;
	long_1 = long_3 + long_3;
	float_1 = v_err_fwrite(float_2,float_2,float_1,float_1);

	double_6 = double_5 + double_2;
	unsigned_int_1 = unsigned_int_1;
}
long v___occ_aux( float parameter_1,int parameter_2)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	long long_1 = 1;
	float float_1 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_4 = int_3 + int_2;
	double_2 = double_1 + double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			int int_1 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_3 = 1;
			int int_4 = 1;
			double double_1 = 1;
			double double_2 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float_1 = float_1;
		}
	}
	return long_1;
}
void v_bwt_occ4( short parameter_1,short parameter_2,double parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_2 = 1;
	long long_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_3 = 1;
	char_1 = char_2;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "<^") < 0)
	{
		int_1 = int_1;
	}
	unsigned_int_1 = unsigned_int_2;
	double_3 = double_1 * double_2;
	unsigned_int_3 = unsigned_int_3 + unsigned_int_1;
	float_1 = float_2;
	double_3 = double_3;
	short_1 = v_getOccInterval(unsigned_int_4,float_1);

	double_5 = double_4 + double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		unsigned int unsigned_int_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_4 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_2 = 1;
		long long_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_3 = 1;
		int_1 = int_2;
		unsigned_int_2 = unsigned_int_5;
		int_1 = int_3;
		unsigned_int_3 = v_unpackBWTValue(char_2,long_1);

		int_1 = int_4;
		int_2 = int_5 + int_3;
	}
	short_1 = short_1 * short_1;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		int_4 = int_2 + int_5;
	}
}
unsigned int v_bwt_occ( unsigned int parameter_1,int parameter_2,unsigned int parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	int int_4 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	int_3 = int_1 * int_2;
	char_2 = char_1 * char_1;
	long_2 = long_1 + long_1;
	double_1 = double_1;
	v_bwt_occ4(short_1,short_1,double_1);

	short_2 = v_getOccInterval(unsigned_int_1,float_1);

	double_1 = double_1;
	if(1)
	{
	}
	if(1)
	{
	}
	int_1 = int_4 + int_3;
	long_1 = v___occ_aux(float_1,int_4);

	double_1 = double_2;
	unsigned_int_2 = unsigned_int_1;
	int_4 = int_3 + int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_3 = unsigned_int_2 * unsigned_int_1;
	}
	double_3 = double_3;
	if(1)
	{
		long_1 = long_1;
	}
	return unsigned_int_3;
}
short v_getOccInterval( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	return short_1;
}
unsigned int v_unpackBWTValue( char parameter_1,long parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	short_1 = v_getOccInterval(unsigned_int_1,float_1);

	double_1 = double_2;
	char_1 = char_1 + char_1;
	float_1 = float_2 + float_3;
	char_3 = char_2 + char_2;
	char_3 = char_3;
	return unsigned_int_2;
}
unsigned int v_bwt_invPsi( long parameter_1,long parameter_2)
{
	char char_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_2 = 1;
	long long_1 = 1;
	int int_2 = 1;
	char_1 = char_1;
	double_2 = double_1 + double_1;
	unsigned_int_1 = v_bwt_occ(unsigned_int_1,int_1,unsigned_int_2);

	unsigned_int_2 = unsigned_int_2;
	unsigned_int_1 = v_unpackBWTValue(char_2,long_1);

	int_2 = int_2;
	return unsigned_int_2;
}
void v_bwt_cal_sa( char parameter_1,int parameter_2)
{
	float float_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_5 = 1;
	long long_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_5 = 1;
	float_1 = float_1;
	long_1 = long_2;
	unsigned_int_1 = unsigned_int_2;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_3;
	unsigned_int_4 = unsigned_int_3;
	if(1)
	{
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		long_1 = long_1 * long_3;
	}
	char_2 = char_1 + char_1;
	double_1 = double_1 * double_1;
	double_4 = double_2 + double_3;
	unsigned_int_1 = v_bwt_invPsi(long_1,long_1);

	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		float float_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_5 = 1;
		long long_3 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_5 = 1;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 * unsigned_int_5;
		}
		int_1 = int_2;
		double_5 = double_4 * double_3;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_4;
	}
	unsigned_int_4 = unsigned_int_2;
}
void v_bwt_bwtupdate_core( int parameter_1)
{
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	short short_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double_2 = double_1 * double_2;
	float_1 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1 * int_2;
	double_3 = double_2 + double_3;
	int_3 = int_3;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_3 = 1;
		int int_3 = 1;
		short short_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_3 = 1;
		char char_1 = 1;
		char char_2 = 1;
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			int_1 = int_1;
			unsigned_int_3 = unsigned_int_3 * unsigned_int_2;
		}
		char controller_2[3];
		fgets(controller_2 ,3 ,stdin);
		if( strcmp( controller_2, "`~") < 0)
		{
			double double_1 = 1;
			double double_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_3 = 1;
			int int_3 = 1;
			short short_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			long long_1 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_3 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char_2 = char_1 * char_1;
		}
		short_1 = short_2;
	}
	float_4 = float_3 * float_3;
	double_1 = double_1;
	long_3 = long_1 + long_2;
	short_1 = short_1;
}
long v_fread_fix( int parameter_1,float parameter_2)
{
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_2 = 1;
	long long_1 = 1;
	int int_1 = 1;
	short short_3 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	short_1 = short_1 + short_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			unsigned_int_1 = v_err_fread_noeof(short_2,long_1,int_1);

			short_2 = short_3 * short_2;
		}
	}
	unsigned_int_2 = unsigned_int_1;
	if(1)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		double_1 = double_2;
	}
	short_2 = short_3 * short_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_2 = 1;
		long long_1 = 1;
		int int_1 = 1;
		short short_3 = 1;
		unsigned int unsigned_int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		short_1 = short_3;
		char_1 = char_1;
	}
	return long_1;
}
char v_bwt_restore_bwt( long parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	int int_3 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_4 = 1;
	short short_2 = 1;
	float float_2 = 1;
	long long_4 = 1;
	long long_5 = 1;
	char char_3 = 1;
	int int_5 = 1;
	int_2 = int_1 * int_1;
	long_1 = v_err_ftell();

	short_1 = short_1;
	unsigned_int_1 = unsigned_int_1;
	long_2 = long_2 + long_3;
	int_3 = int_3 + int_1;
	char_1 = char_2;
	double_1 = double_1 * double_2;
	long_3 = v_fread_fix(int_1,float_1);

	double_3 = double_2 * double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	int_4 = v_err_fseek(double_1,long_3,int_2);

	char_2 = char_2;
	unsigned_int_1 = v_err_fread_noeof(short_2,long_2,int_1);

	float_1 = float_2;
	long_3 = long_4 + long_5;
	return char_3;
	int_5 = v_err_fclose(long_2);

}
void v_bwt_destroy( short parameter_1)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "X&") > 0)
	{
	}
	int_1 = int_2;
	double_2 = double_1 * double_1;
	float_1 = float_1 * float_1;
}
void v_bwt_dump_bwt( float parameter_1,char parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	double double_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	double double_8 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_1 = v_err_fflush(unsigned_int_1);

	double_1 = double_2;
	double_1 = double_1;
	double_1 = double_3;
	int_1 = v_err_fclose(long_1);

	double_4 = double_5;
	double_8 = double_6 + double_7;
	unsigned_int_1 = unsigned_int_1;
	float_1 = v_err_fwrite(float_2,float_2,float_3,float_1);

}
void v_packValue( float parameter_1,double parameter_2,char parameter_3)
{
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	long_1 = long_1 + long_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
}
char v_induceSA( char parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,float parameter_5,char parameter_6,float parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_1 = 1;
	long long_2 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	int int_3 = 1;
	char char_3 = 1;
	long long_3 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned_int_1 = v_getBuckets(unsigned_int_1,long_1,double_1,short_1);

	int_1 = int_1 * int_1;
	int_1 = int_1 + int_1;
	if(1)
	{
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		short short_1 = 1;
		int int_1 = 1;
		long long_2 = 1;
		short short_2 = 1;
		short short_3 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		unsigned int unsigned_int_4 = 1;
		int int_3 = 1;
		char char_3 = 1;
		long long_3 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_2 = 1;
		int int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		long_2 = long_3;
	}
	short_2 = short_3;
	long_1 = long_1 * long_1;
	float_2 = float_1 * float_1;
	char_2 = char_1 + char_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			short short_1 = 1;
			int int_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_3 = 1;
			char char_3 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			unsigned_int_3 = unsigned_int_1 + unsigned_int_3;
			if(1)
			{
				char_1 = v_getCounts(unsigned_int_2,float_2,float_2,float_3,int_2);

				unsigned_int_3 = unsigned_int_2 * unsigned_int_4;
				char_2 = char_1;
			}
			double_1 = double_2 + double_1;
		}
	}
	if(1)
	{
		int_3 = int_1 + int_3;
	}
	long_1 = long_2;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char controller_5[3];
		fgets(controller_5 ,3 ,stdin);
		if( strcmp( controller_5, "t5") > 0)
		{
			unsigned int unsigned_int_1 = 1;
			long long_1 = 1;
			double double_1 = 1;
			short short_1 = 1;
			int int_1 = 1;
			long long_2 = 1;
			short short_2 = 1;
			short short_3 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			unsigned int unsigned_int_4 = 1;
			int int_3 = 1;
			char char_3 = 1;
			long long_3 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_5 = 1;
			int_4 = int_2 * int_3;
			if(1)
			{
				unsigned int unsigned_int_1 = 1;
				long long_1 = 1;
				double double_1 = 1;
				short short_1 = 1;
				int int_1 = 1;
				long long_2 = 1;
				short short_2 = 1;
				short short_3 = 1;
				float float_1 = 1;
				float float_2 = 1;
				char char_1 = 1;
				char char_2 = 1;
				unsigned int unsigned_int_2 = 1;
				float float_3 = 1;
				int int_2 = 1;
				unsigned int unsigned_int_4 = 1;
				int int_3 = 1;
				char char_3 = 1;
				long long_3 = 1;
				unsigned int unsigned_int_3 = 1;
				double double_2 = 1;
				int int_4 = 1;
				unsigned int unsigned_int_5 = 1;
				float_3 = float_1;
				unsigned_int_5 = unsigned_int_1 * unsigned_int_4;
			}
			int_1 = int_4;
		}
		if(1)
		{
			short_1 = short_3;
		}
	}
	return char_3;
}
unsigned int v_getBuckets( unsigned int parameter_1,long parameter_2,double parameter_3,short parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_4 = 1;
	unsigned int unsigned_int_1 = 1;
	int_3 = int_1 + int_2;
	if(1)
	{
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			long_1 = long_2;
			double_2 = double_1 + double_1;
		}
	}
	if(1)
	{
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			int int_1 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			long long_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_4 = 1;
			unsigned int unsigned_int_1 = 1;
			int_3 = int_4;
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
	}
	return unsigned_int_2;
}
char v_getCounts( unsigned int parameter_1,float parameter_2,float parameter_3,float parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	unsigned_int_1 = unsigned_int_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		int_2 = int_1 * int_2;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		float_1 = float_2;
	}
	return char_1;
}
short v_sais_main( int parameter_1,short parameter_2,short parameter_3,int parameter_4,double parameter_5,long parameter_6)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_2 = 1;
	float float_3 = 1;
	int int_2 = 1;
	int int_3 = 1;
	char char_3 = 1;
	short short_1 = 1;
	float float_4 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_6 = 1;
	double double_3 = 1;
	short short_2 = 1;
	int int_4 = 1;
	char char_4 = 1;
	unsigned int unsigned_int_3 = 1;
	long long_1 = 1;
	double double_4 = 1;
	short short_3 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_4 = 1;
	float float_5 = 1;
	char char_5 = 1;
	int int_5 = 1;
	int int_6 = 1;
	long long_4 = 1;
	char char_6 = 1;
	char char_7 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_5 = 1;
	char_1 = v_induceSA(char_1,char_2,int_1,unsigned_int_1,float_1,char_1,float_1);

	double_2 = double_1 * double_1;
	float_3 = float_2 + float_3;
	int_3 = int_2 + int_1;
	char_2 = char_3;
	if(1)
	{
		double_1 = double_2 * double_1;
		int_3 = int_2;
	}
	if(1)
	{
	}
	double_1 = double_2 + double_2;
	double_2 = double_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		short_1 = short_1 + short_1;
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			char char_3 = 1;
			short short_1 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_6 = 1;
			double double_3 = 1;
			short short_2 = 1;
			int int_4 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			double double_4 = 1;
			short short_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_4 = 1;
			float float_5 = 1;
			char char_5 = 1;
			int int_5 = 1;
			int int_6 = 1;
			long long_4 = 1;
			char char_6 = 1;
			char char_7 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_5 = 1;
			float_4 = float_4 + float_5;
		}
		if(1)
		{
			double_1 = double_1;
		}
	}
	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		int_1 = int_2 * int_2;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		unsigned_int_1 = unsigned_int_1;
		if(1)
		{
			for(int looper_4=0; looper_4<1;looper_4++)
			{
				float_4 = float_3;
			}
			if(1)
			{
				float_4 = float_6 + float_1;
			}
		}
	}
	for(int looper_5=0; looper_5<1;looper_5++)
	{
		double_1 = double_1 + double_1;
	}
	for(int looper_6=0; looper_6<1;looper_6++)
	{
		if(1)
		{
			double_1 = double_2 * double_2;
		}
		if(1)
		{
			double_3 = double_1 + double_2;
			float_6 = float_2 + float_4;
			short_2 = short_2;
		}
	}
	for(int looper_7=0; looper_7<1;looper_7++)
	{
		int_4 = int_1;
		if(1)
		{
			for(int looper_8=0; looper_8<1;looper_8++)
			{
				double_3 = double_1;
			}
			if(1)
			{
				char_4 = char_1 + char_2;
			}
		}
		if(1)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			char char_3 = 1;
			short short_1 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_6 = 1;
			double double_3 = 1;
			short short_2 = 1;
			int int_4 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			double double_4 = 1;
			short short_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_4 = 1;
			float float_5 = 1;
			char char_5 = 1;
			int int_5 = 1;
			int int_6 = 1;
			long long_4 = 1;
			char char_6 = 1;
			char char_7 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_5 = 1;
			char_2 = char_5;
		}
		unsigned_int_2 = unsigned_int_1;
	}
	if(1)
	{
		char_4 = v_getCounts(unsigned_int_2,float_6,float_2,float_6,int_4);

		unsigned_int_3 = v_getBuckets(unsigned_int_2,long_1,double_4,short_3);

		float_6 = float_1;
		for(int looper_9=0; looper_9<1;looper_9++)
		{
			if(1)
			{
				long_2 = long_1 + long_1;
			}
		}
		if(1)
		{
		}
		for(int looper_10=0; looper_10<1;looper_10++)
		{
			if(1)
			{
				double_2 = double_1;
			}
			if(1)
			{
				long_1 = long_3;
			}
		}
		for(int looper_11=0; looper_11<1;looper_11++)
		{
			char char_1 = 1;
			char char_2 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			float float_1 = 1;
			double double_1 = 1;
			double double_2 = 1;
			float float_2 = 1;
			float float_3 = 1;
			int int_2 = 1;
			int int_3 = 1;
			char char_3 = 1;
			short short_1 = 1;
			float float_4 = 1;
			unsigned int unsigned_int_2 = 1;
			float float_6 = 1;
			double double_3 = 1;
			short short_2 = 1;
			int int_4 = 1;
			char char_4 = 1;
			unsigned int unsigned_int_3 = 1;
			long long_1 = 1;
			double double_4 = 1;
			short short_3 = 1;
			long long_2 = 1;
			long long_3 = 1;
			short short_4 = 1;
			float float_5 = 1;
			char char_5 = 1;
			int int_5 = 1;
			int int_6 = 1;
			long long_4 = 1;
			char char_6 = 1;
			char char_7 = 1;
			unsigned int unsigned_int_4 = 1;
			short short_5 = 1;
			int_3 = int_3 * int_5;
		}
	}
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_3 = 1;
		short short_1 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_6 = 1;
		double double_3 = 1;
		short short_2 = 1;
		int int_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		short short_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_4 = 1;
		float float_5 = 1;
		char char_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long long_4 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_5 = 1;
		int_1 = int_6 * int_3;
		long_2 = long_4 + long_4;
	}
	if(1)
	{
	}
	long_3 = long_3 + long_1;
	short_4 = short_1;
	for(int looper_12=0; looper_12<1;looper_12++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_3 = 1;
		short short_1 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_6 = 1;
		double double_3 = 1;
		short short_2 = 1;
		int int_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		short short_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_4 = 1;
		float float_5 = 1;
		char char_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long long_4 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_5 = 1;
		char_4 = char_6 * char_7;
	}
	for(int looper_13=0; looper_13<1;looper_13++)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_3 = 1;
		short short_1 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_6 = 1;
		double double_3 = 1;
		short short_2 = 1;
		int int_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		short short_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_4 = 1;
		float float_5 = 1;
		char char_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long long_4 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_5 = 1;
		double_3 = double_1;
		unsigned_int_4 = unsigned_int_4;
	}
	int_2 = int_2 + int_2;
	if(1)
	{
		char char_1 = 1;
		char char_2 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		float float_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_2 = 1;
		float float_3 = 1;
		int int_2 = 1;
		int int_3 = 1;
		char char_3 = 1;
		short short_1 = 1;
		float float_4 = 1;
		unsigned int unsigned_int_2 = 1;
		float float_6 = 1;
		double double_3 = 1;
		short short_2 = 1;
		int int_4 = 1;
		char char_4 = 1;
		unsigned int unsigned_int_3 = 1;
		long long_1 = 1;
		double double_4 = 1;
		short short_3 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_4 = 1;
		float float_5 = 1;
		char char_5 = 1;
		int int_5 = 1;
		int int_6 = 1;
		long long_4 = 1;
		char char_6 = 1;
		char char_7 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_5 = 1;
		short_5 = short_4;
	}
	return short_2;
}
unsigned int v_is_sa( unsigned int parameter_1,long parameter_2,unsigned int parameter_3)
{
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	double double_3 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char controller_1[3];
	fgets(controller_1 ,3 ,stdin);
	if( strcmp( controller_1, "fm") > 0)
	{
	}
	double_1 = double_2;
	char controller_2[3];
	fgets(controller_2 ,3 ,stdin);
	if( strcmp( controller_2, "Mr") < 0)
	{
		if(1)
		{
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			int int_2 = 1;
			short short_2 = 1;
			int int_3 = 1;
			double double_3 = 1;
			long long_1 = 1;
			int int_1 = 1;
			int_1 = int_1;
		}
	}
	return unsigned_int_1;
	short_1 = v_sais_main(int_2,short_1,short_2,int_3,double_3,long_1);

}
double v_is_bwt( int parameter_1,short parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	long long_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_3 = 1;
	unsigned_int_1 = v_is_sa(unsigned_int_2,long_1,unsigned_int_3);

	unsigned_int_4 = unsigned_int_4;
	long_2 = long_1;
	char controller_1[2];
	fgets(controller_1 ,2 ,stdin);
	if( strcmp( controller_1, "[") == 0)
	{
	}
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		if(1)
		{
			char_2 = char_1 + char_2;
		}
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned int unsigned_int_4 = 1;
			long long_2 = 1;
			char char_1 = 1;
			char char_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			long long_3 = 1;
			int_1 = int_1 + int_2;
		}
	}
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		long long_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		long long_3 = 1;
		long_3 = long_1;
	}
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		char_2 = char_1;
	}
	double_1 = double_2;
	return double_1;
}
unsigned int v_err_fread_noeof(short parameter_2,long parameter_3,int parameter_4)
{
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int_1 = int_1;
	if(1)
	{
		int_1 = int_1;
	}
	return unsigned_int_1;
	v__err_fatal_simple(float_1,short_1);

}
long v_err_ftell()
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	v__err_fatal_simple(float_1,short_1);

	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long long_1 = 1;
		long long_2 = 1;
		long_2 = long_1 + long_1;
	}
	return long_1;
}
int v_err_fseek( double parameter_1,long parameter_2,int parameter_3)
{
	float float_1 = 1;
	short short_1 = 1;
	float float_2 = 1;
	int int_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	v__err_fatal_simple(float_1,short_1);

	float_2 = float_1;
	if(1)
	{
		float float_1 = 1;
		short short_1 = 1;
		float float_2 = 1;
		int int_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		double_1 = double_1 + double_2;
	}
	return int_1;
}
float v_bwa_seq_len( float parameter_1)
{
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	float float_1 = 1;
	double double_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	float float_2 = 1;
	float float_3 = 1;
	float float_4 = 1;
	long long_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	double double_2 = 1;
	int int_5 = 1;
	unsigned_int_1 = v_err_fread_noeof(short_1,long_1,int_1);

	float_1 = float_1;
	double_1 = double_1 * double_1;
	long_3 = long_2 + long_1;
	float_4 = float_2 + float_3;
	long_4 = long_1 + long_1;
	int_3 = int_2 * int_1;
	int_4 = v_err_fclose(long_1);

	char_1 = char_1 * char_1;
	int_3 = v_err_fseek(double_2,long_2,int_5);

	short_1 = short_1;
	return float_2;
	long_1 = v_err_ftell();

}
float v_bwt_pac2bwt( unsigned int parameter_1)
{
	char char_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	double double_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_3 = 1;
	int int_4 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	int int_5 = 1;
	double double_5 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_6 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	double double_6 = 1;
	double double_7 = 1;
	unsigned int unsigned_int_6 = 1;
	char_1 = char_1;
	int_2 = int_1 * int_1;
	short_1 = short_1;
	double_1 = v_is_bwt(int_2,short_2);

	double_2 = double_2 * double_3;
	double_3 = double_4;
	int_2 = int_1 + int_3;
	int_4 = v_err_fclose(long_1);

	float_1 = float_2;
	char_2 = char_2;
	int_3 = int_5;
	double_5 = double_3;
	float_3 = v_bwa_seq_len(float_1);

	int_2 = int_1;
	v_packValue(float_1,double_1,char_1);

	double_1 = double_1;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_1 + int_6;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long_2 = long_2;
		unsigned_int_2 = v_err_fread_noeof(short_2,long_2,int_2);

		unsigned_int_3 = unsigned_int_4;
	}
	unsigned_int_5 = unsigned_int_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		char char_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_1 = 1;
		double double_1 = 1;
		short short_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		double double_4 = 1;
		int int_3 = 1;
		int int_4 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		int int_5 = 1;
		double double_5 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_6 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_4 = 1;
		unsigned int unsigned_int_5 = 1;
		double double_6 = 1;
		double double_7 = 1;
		unsigned int unsigned_int_6 = 1;
		unsigned_int_6 = unsigned_int_3;
	}
	double_6 = double_5 + double_3;
	double_2 = double_7;
	for(int looper_3=0; looper_3<1;looper_3++)
	{
		long_2 = long_2;
	}
	long_1 = long_2;
	return float_2;
}
void v_bns_destroy()
{
	int int_1 = 1;
	long long_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	float float_3 = 1;
	float float_4 = 1;
	if(1)
	{
	}
	if(1)
	{
		int int_1 = 1;
		long long_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		double double_1 = 1;
		double double_2 = 1;
		char char_1 = 1;
		float float_3 = 1;
		float float_4 = 1;
		float_1 = float_2;
		if(1)
		{
			int int_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			char_1 = char_1 * char_2;
		}
		int_1 = int_1;
		for(int looper_1=0; looper_1<1;looper_1++)
		{
			int int_1 = 1;
			long long_1 = 1;
			float float_1 = 1;
			float float_2 = 1;
			char char_2 = 1;
			char char_3 = 1;
			double double_1 = 1;
			double double_2 = 1;
			char char_1 = 1;
			float float_3 = 1;
			float float_4 = 1;
			float_4 = float_3 + float_2;
			float_3 = float_4;
		}
		int_1 = v_err_fclose(long_1);

		char_2 = char_2 * char_3;
		double_2 = double_1 * double_1;
	}
}
int v_err_fprintf( char parameter_1,unsigned int parameter_2,unsigned int parameter_3)
{
	short short_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	short short_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short_1 = short_1;
	double_1 = double_2;
	float_1 = float_1;
	unsigned_int_1 = unsigned_int_1;
	double_2 = double_2;
	int_1 = int_2;
	if(1)
	{
		short short_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		short short_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		v__err_fatal_simple(float_1,short_2);

		int_4 = int_3 * int_1;
	}
	return int_2;
}
void v_bns_dump( char parameter_1,char parameter_2)
{
	long long_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_2 = 1;
	double double_2 = 1;
	float float_1 = 1;
	double double_3 = 1;
	double double_4 = 1;
	double double_5 = 1;
	int int_3 = 1;
	int int_4 = 1;
	float float_2 = 1;
	short short_4 = 1;
	unsigned int unsigned_int_3 = 1;
	short short_3 = 1;
	double double_6 = 1;
	short short_5 = 1;
	long_1 = long_1;
	int_1 = v_err_fflush(unsigned_int_1);

	short_2 = short_1 * short_1;
	double_1 = double_1;
	char_3 = char_1 + char_2;
	int_1 = v_err_fprintf(char_2,unsigned_int_2,unsigned_int_1);

	int_1 = int_1 + int_1;
	char_3 = char_1;
	unsigned_int_1 = unsigned_int_2 + unsigned_int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		int_2 = v_err_fclose(long_1);

		unsigned_int_1 = unsigned_int_1;
		double_2 = double_2 * double_1;
		if(1)
		{
			long long_1 = 1;
			int int_1 = 1;
			unsigned int unsigned_int_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			char char_3 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_2 = 1;
			double double_2 = 1;
			float float_1 = 1;
			double double_3 = 1;
			double double_4 = 1;
			double double_5 = 1;
			int int_3 = 1;
			int int_4 = 1;
			float float_2 = 1;
			short short_4 = 1;
			unsigned int unsigned_int_3 = 1;
			short short_3 = 1;
			double double_6 = 1;
			short short_5 = 1;
			short_2 = short_1 + short_3;
		}
		if(1)
		{
			double_1 = double_2;
		}
		float_1 = float_1 + float_1;
	}
	int_1 = int_1;
	double_2 = double_3 + double_3;
	double_5 = double_1 * double_4;
	int_4 = int_3 + int_3;
	float_2 = float_1 + float_1;
	short_4 = short_4;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		long long_1 = 1;
		int int_1 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char char_3 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_2 = 1;
		double double_2 = 1;
		float float_1 = 1;
		double double_3 = 1;
		double double_4 = 1;
		double double_5 = 1;
		int int_3 = 1;
		int int_4 = 1;
		float float_2 = 1;
		short short_4 = 1;
		unsigned int unsigned_int_3 = 1;
		short short_3 = 1;
		double double_6 = 1;
		short short_5 = 1;
		double_3 = double_6;
		short_5 = short_5 * short_1;
	}
	unsigned_int_2 = unsigned_int_3 * unsigned_int_2;
	int_2 = int_2;
}
int v_err_fflush( unsigned int parameter_1)
{
	long long_1 = 1;
	long long_2 = 1;
	int int_1 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long_1 = long_2;
	if(1)
	{
		int_1 = int_1;
	}
	float_1 = float_1 + float_2;
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		int int_1 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		char_1 = char_1 * char_2;
	}
	if(1)
	{
		if(1)
		{
			v__err_fatal_simple(float_2,short_1);

			short_1 = short_1;
		}
	}
	return int_1;
}
float v_err_fwrite( float parameter_1,float parameter_2,float parameter_3,float parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_1 = 1;
	int_1 = int_2;
	if(1)
	{
		float_1 = float_2;
	}
	return float_1;
	v__err_fatal_simple(float_2,short_1);

}
long v_add1( int parameter_1,long parameter_2,double parameter_3,short parameter_4,int parameter_5,int parameter_6,long parameter_7)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	int int_3 = 1;
	float float_1 = 1;
	short short_1 = 1;
	int int_4 = 1;
	int int_5 = 1;
	long long_2 = 1;
	int int_8 = 1;
	long long_1 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_7 = 1;
	float float_4 = 1;
	float float_3 = 1;
	int int_6 = 1;
	short short_2 = 1;
	short short_3 = 1;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_2;
	int_1 = int_2;
	if(1)
	{
		double_1 = double_2;
		unsigned_int_2 = unsigned_int_2;
	}
	int_1 = int_1 * int_2;
	int_3 = int_3 * int_2;
	int_2 = int_3 * int_1;
	float_1 = float_1 * float_1;
	short_1 = short_1;
	int_5 = int_2 + int_4;
	double_1 = double_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		int int_3 = 1;
		float float_1 = 1;
		short short_1 = 1;
		int int_4 = 1;
		int int_5 = 1;
		long long_2 = 1;
		int int_8 = 1;
		long long_1 = 1;
		float float_2 = 1;
		unsigned int unsigned_int_3 = 1;
		int int_7 = 1;
		float float_4 = 1;
		float float_3 = 1;
		int int_6 = 1;
		short short_2 = 1;
		short short_3 = 1;
		long_2 = long_1 + long_1;
		if(1)
		{
			if(1)
			{
				int_5 = int_2 * int_4;
			}
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_1 = 1;
					unsigned int unsigned_int_2 = 1;
					int int_1 = 1;
					int int_2 = 1;
					double double_1 = 1;
					double double_2 = 1;
					int int_3 = 1;
					float float_1 = 1;
					short short_1 = 1;
					int int_4 = 1;
					int int_5 = 1;
					long long_2 = 1;
					int int_8 = 1;
					long long_1 = 1;
					float float_2 = 1;
					unsigned int unsigned_int_3 = 1;
					int int_7 = 1;
					float float_4 = 1;
					float float_3 = 1;
					int int_6 = 1;
					short short_2 = 1;
					short short_3 = 1;
					double_1 = double_2;
					float_3 = float_2 + float_3;
				}
				double_1 = double_2 + double_2;
				unsigned_int_1 = unsigned_int_3;
				double_1 = double_2;
				unsigned_int_2 = unsigned_int_3;
				unsigned_int_1 = unsigned_int_1;
				unsigned_int_3 = unsigned_int_3;
			}
		}
		long_2 = long_1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			int int_3 = 1;
			float float_1 = 1;
			short short_1 = 1;
			int int_4 = 1;
			int int_5 = 1;
			long long_2 = 1;
			int int_8 = 1;
			long long_1 = 1;
			float float_2 = 1;
			unsigned int unsigned_int_3 = 1;
			int int_7 = 1;
			float float_4 = 1;
			float float_3 = 1;
			int int_6 = 1;
			short short_2 = 1;
			short short_3 = 1;
			int_6 = int_4 + int_1;
			int_7 = int_6 + int_1;
			short_3 = short_2 + short_2;
		}
		if(1)
		{
			unsigned_int_1 = unsigned_int_3;
		}
		int_7 = int_4 + int_7;
		float_4 = float_4 * float_2;
	}
	int_4 = int_8 * int_1;
	return long_2;
}
int v_bns_fasta2bntseq( char parameter_1,unsigned int parameter_2,int parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_2 = 1;
	double double_1 = 1;
	short short_1 = 1;
	int int_3 = 1;
	long long_2 = 1;
	float_1 = v_err_fwrite(float_1,float_1,float_1,float_1);

	int_1 = v_err_fflush(unsigned_int_1);

	int_1 = v_err_fclose(long_1);

	v_bns_dump(char_1,char_1);

	v_bns_destroy();

	char_1 = char_2;
	return int_2;
	long_1 = v_add1(int_2,long_1,double_1,short_1,int_2,int_3,long_2);

}
void v_logMessageRaw( int parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_4 = 1;
	unsigned int unsigned_int_5 = 1;
	float float_1 = 1;
	unsigned_int_3 = unsigned_int_1 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_2 * unsigned_int_1;
	if(1)
	{
	}
	int_2 = int_1 * int_1;
	unsigned_int_4 = unsigned_int_3 * unsigned_int_4;
	unsigned_int_4 = unsigned_int_2 * unsigned_int_5;
	float_1 = float_1;
}
int v_writeIndexTestProtein( short parameter_1,float parameter_2)
{
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	char char_4 = 1;
	int int_2 = 1;
	long long_2 = 1;
	long long_3 = 1;
	short short_1 = 1;
	char char_3 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_2;
	char_2 = char_1 + char_2;
	float_1 = float_2;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		int int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		char char_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		char_1 = char_3;
		double_1 = double_1;
		long_1 = v_err_xopen_core(int_1,double_1,char_4);

		float_3 = float_2 + float_3;
	}
	int_2 = v_convertToAA(char_2,char_4,int_1,char_4,int_1);

	long_2 = long_3;
	for(int looper_2=0; looper_2<1;looper_2++)
	{
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		int int_2 = 1;
		long long_2 = 1;
		long long_3 = 1;
		short short_1 = 1;
		char char_3 = 1;
		float float_3 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned_int_2 = unsigned_int_3;
	}
	int_2 = v_err_fclose(long_1);

	float_1 = float_1 * float_1;
	return int_1;
	int_2 = v_err_gzclose(short_1);

}
int v_writeIndexDirectProtein( unsigned int parameter_1,float parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	long long_1 = 1;
	double double_2 = 1;
	char char_1 = 1;
	int_1 = int_2;
	short_1 = short_2;
	float_3 = float_1 + float_2;
	unsigned_int_1 = unsigned_int_2;
	int_3 = int_2 + int_3;
	v_writeIndexHeader(double_1,int_2);

	float_1 = float_2 + float_2;
	return int_3;
	long_1 = v_err_xopen_core(int_3,double_2,char_1);

	int_3 = v_err_fclose(long_1);

}
long v_getLastAlignedPos( long parameter_1,int parameter_2)
{
	float float_1 = 1;
	unsigned int unsigned_int_1 = 1;
	long long_1 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	float_1 = float_1 + float_1;
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		double_1 = double_1 + double_2;
		if(1)
		{
			unsigned_int_1 = unsigned_int_1;
		}
	}
	if(1)
	{
		float float_1 = 1;
		unsigned int unsigned_int_1 = 1;
		long long_1 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_2;
		if(1)
		{
			unsigned_int_2 = unsigned_int_1;
		}
	}
	return long_1;
}
int v_writeIndexCodingProtein( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	int int_1 = 1;
	double double_1 = 1;
	int int_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	short short_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	long long_3 = 1;
	short short_3 = 1;
	int int_5 = 1;
	float float_1 = 1;
	float float_2 = 1;
	short short_2 = 1;
	double double_4 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int_1 = int_1;
	double_1 = double_1 * double_1;
	int_2 = v_convertToAA(char_1,char_2,int_3,char_1,int_2);

	int_4 = v_err_gzclose(short_1);

	long_1 = long_2;
	if(1)
	{
	}
	int_1 = v_err_fclose(long_2);

	double_2 = double_1 * double_1;
	double_2 = double_1 * double_2;
	if(1)
	{
		double_3 = double_1 + double_1;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		short short_3 = 1;
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		long_3 = v_err_xopen_core(int_2,double_1,char_1);

		v_writeIndexHeader(double_3,int_2);

		double_3 = double_3 * double_2;
		short_2 = short_2;
		long_3 = v_getLastAlignedPos(long_2,int_3);

		double_3 = double_4 + double_4;
		short_3 = short_3;
	}
	if(1)
	{
		int_2 = int_5 + int_5;
		short_1 = short_3;
	}
	if(1)
	{
		int_4 = int_4;
	}
	if(1)
	{
		int int_1 = 1;
		double double_1 = 1;
		int int_2 = 1;
		char char_1 = 1;
		char char_2 = 1;
		int int_3 = 1;
		int int_4 = 1;
		short short_1 = 1;
		long long_1 = 1;
		long long_2 = 1;
		double double_2 = 1;
		double double_3 = 1;
		long long_3 = 1;
		short short_3 = 1;
		int int_5 = 1;
		float float_1 = 1;
		float float_2 = 1;
		short short_2 = 1;
		double double_4 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned_int_2 = unsigned_int_1 + unsigned_int_1;
	}
	if(1)
	{
		int_4 = int_5 * int_4;
	}
	float_1 = float_2;
	return int_4;
}
int v_err_fclose( long parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	long long_1 = 1;
	v__err_fatal_simple(float_1,short_1);

	unsigned_int_1 = unsigned_int_2;
	if(1)
	{
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long_1 = long_1 + long_1;
	}
	return int_1;
}
void v__err_fatal_simple( float parameter_1,short parameter_2)
{
	long long_1 = 1;
	long long_2 = 1;
	double double_1 = 1;
	long_1 = long_2;
	double_1 = double_1;
}
int v_err_gzclose( short parameter_1)
{
	float float_1 = 1;
	short short_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_1 = 1;
	long long_1 = 1;
	v__err_fatal_simple(float_1,short_1);

	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	if(1)
	{
		float float_1 = 1;
		short short_1 = 1;
		unsigned int unsigned_int_1 = 1;
		int int_1 = 1;
		long long_1 = 1;
		long_1 = long_1;
	}
	return int_1;
}
void v_encodeCodon( char parameter_1,int parameter_2)
{
	long long_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	long_1 = long_1 * long_1;
	short_1 = short_2;
	int_2 = int_1 * int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		float_1 = float_2;
		if(1)
		{
			long long_1 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			int int_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_1 = 1;
			double double_2 = 1;
			unsigned int unsigned_int_1 = 1;
			double_2 = double_1 * double_2;
		}
		if(1)
		{
		}
		short_2 = short_1;
	}
	if(1)
	{
		long long_1 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
	}
}
int v_convertToAA( char parameter_1,char parameter_2,int parameter_3,char parameter_4,int parameter_5)
{
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	int int_1 = 1;
	int int_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	char_1 = char_1 + char_2;
	float_2 = float_1 + float_2;
	double_2 = double_2 * double_2;
	short_2 = short_1 * short_2;
	int_1 = int_1;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		unsigned int unsigned_int_1 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		float float_1 = 1;
		float float_2 = 1;
		double double_2 = 1;
		short short_1 = 1;
		short short_2 = 1;
		int int_1 = 1;
		int int_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		long long_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			int int_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			long_1 = long_1;
			int_2 = int_1 + int_1;
		}
		int_3 = int_2 * int_3;
		if(1)
		{
			unsigned int unsigned_int_1 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			float float_1 = 1;
			float float_2 = 1;
			double double_2 = 1;
			short short_1 = 1;
			short short_2 = 1;
			int int_1 = 1;
			int int_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			long long_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
		}
		if(1)
		{
			int_3 = int_3 + int_2;
		}
	}
	return int_1;
	v_encodeCodon(char_1,int_4);

}
int v_getNextCDS( short parameter_1,char parameter_2,int parameter_3)
{
	char char_1 = 1;
	char char_2 = 1;
	int int_1 = 1;
	int int_2 = 1;
	int int_3 = 1;
	double double_1 = 1;
	char_1 = char_2;
	int_2 = int_1 * int_1;
	int_1 = int_1 * int_3;
	double_1 = double_1;
	return int_1;
}
void v_writeIndexHeader( double parameter_1,int parameter_2)
{
	double double_1 = 1;
	double double_2 = 1;
	double_1 = double_2;
}
void v_err_fatal( short parameter_1,unsigned int parameter_2,char parameter_3)
{
	float float_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	long long_1 = 1;
	long long_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	short short_3 = 1;
	float float_2 = 1;
	float_1 = float_1;
	int_1 = int_2;
	long_1 = long_2;
	short_3 = short_1 + short_2;
	float_1 = float_2 + float_2;
	int_1 = int_1;
	long_2 = long_2 * long_2;
}
long v_err_xopen_core( int parameter_1,double parameter_2,char parameter_3)
{
	float float_1 = 1;
	float float_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	short short_1 = 1;
	char char_1 = 1;
	long long_1 = 1;
	int int_1 = 1;
	int int_2 = 1;
	float_1 = float_2;
	double_2 = double_1 + double_1;
	if(1)
	{
		float float_1 = 1;
		float float_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		short short_1 = 1;
		char char_1 = 1;
		long long_1 = 1;
		int int_1 = 1;
		int int_2 = 1;
		int_1 = int_2;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_1 = unsigned_int_1 + unsigned_int_1;
		}
		v_err_fatal(short_1,unsigned_int_1,char_1);

		short_1 = short_1;
	}
	return long_1;
}
int v_writeIndexProtein( unsigned int parameter_1,double parameter_2,long parameter_3,char parameter_4)
{
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	char char_4 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_2 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_3 = 1;
	double double_4 = 1;
	int int_1 = 1;
	long long_1 = 1;
	double double_5 = 1;
	int int_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_5 = 1;
	long long_2 = 1;
	long long_3 = 1;
	long long_4 = 1;
	float float_1 = 1;
	float float_2 = 1;
	float float_3 = 1;
	short short_3 = 1;
	char char_6 = 1;
	unsigned_int_1 = unsigned_int_1;
	char_2 = char_1 + char_2;
	char_3 = char_4;
	double_1 = double_2;
	double_1 = double_2;
	double_1 = double_2 + double_2;
	unsigned_int_2 = unsigned_int_1;
	short_1 = short_1 + short_2;
	unsigned_int_3 = unsigned_int_2;
	double_3 = double_4;
	int_1 = v_err_fclose(long_1);

	double_1 = double_5 + double_1;
	v_writeIndexHeader(double_3,int_1);

	int_2 = v_convertToAA(char_3,char_3,int_3,char_3,int_4);

	char_2 = char_3;
	long_1 = v_err_xopen_core(int_3,double_2,char_5);

	unsigned_int_3 = unsigned_int_3;
	long_1 = long_2 + long_3;
	long_3 = long_4;
	int_3 = int_3;
	int_1 = int_2 + int_1;
	float_1 = float_2;
	float_3 = float_2;
	double_4 = double_2;
	double_2 = double_3;
	return int_4;
	int_2 = v_getNextCDS(short_3,char_6,int_3);

	int_1 = v_err_gzclose(short_2);

}
void v_logMessage( float parameter_1,int parameter_2,char parameter_3,unsigned int parameter_4)
{
	int int_1 = 1;
	int int_2 = 1;
	unsigned int unsigned_int_1 = 1;
	double double_1 = 1;
	short short_1 = 1;
	short short_2 = 1;
	double double_2 = 1;
	int int_3 = 1;
	int int_4 = 1;
	char char_1 = 1;
	char char_2 = 1;
	long long_1 = 1;
	unsigned int unsigned_int_2 = 1;
	float float_1 = 1;
	float float_2 = 1;
	double double_3 = 1;
	unsigned int unsigned_int_3 = 1;
	int_2 = int_1 * int_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1 * double_1;
	if(1)
	{
	}
	short_1 = short_2;
	int_2 = int_2 + int_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_2;
	int_3 = int_3 + int_4;
	char_1 = char_2;
	long_1 = long_1 * long_1;
	unsigned_int_2 = unsigned_int_1;
	float_1 = float_2;
	double_3 = double_2 * double_1;
	unsigned_int_1 = unsigned_int_2;
	double_1 = double_1 * double_2;
	unsigned_int_2 = unsigned_int_2 + unsigned_int_2;
	unsigned_int_3 = unsigned_int_2;
}
int v_command_index( int parameter_1,char parameter_2)
{
	int int_1 = 1;
	long long_1 = 1;
	long long_2 = 1;
	float float_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_1 = 1;
	int int_2 = 1;
	short short_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_2 = 1;
	double double_1 = 1;
	long long_3 = 1;
	char char_3 = 1;
	float float_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	double double_2 = 1;
	double double_3 = 1;
	double double_4 = 1;
	float float_3 = 1;
	char char_4 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	unsigned int unsigned_int_6 = 1;
	int int_4 = 1;
	int int_5 = 1;
	if(1)
	{
	}
	v_bwt_bwtupdate_core(int_1);

	long_1 = long_1 + long_2;
	v_logMessage(float_1,int_1,char_1,unsigned_int_1);

	int_2 = v_err_gzclose(short_1);

	int_2 = int_2;
	int_2 = int_1;
	v_logMessageRaw(int_1,char_1,int_2);

	char_1 = v_bwt_restore_bwt(long_2);

	char_1 = char_2;
	int_1 = v_writeIndexProtein(unsigned_int_2,double_1,long_3,char_3);

	float_2 = v_bwt_pac2bwt(unsigned_int_3);

	unsigned_int_4 = unsigned_int_1;
	unsigned_int_4 = unsigned_int_2;
	int_2 = v_bns_fasta2bntseq(char_2,unsigned_int_2,int_2);

	v_bwt_dump_sa(int_1,short_1);

	double_4 = double_2 + double_3;
	if(1)
	{
		v_bwt_destroy(short_1);

		int_1 = int_2;
	}
	if(1)
	{
	}
	int_2 = v_writeIndexDirectProtein(unsigned_int_2,float_3,char_3);

	v_bwt_dump_bwt(float_1,char_4);

	v_bwt_cal_sa(char_3,int_3);

	unsigned_int_5 = unsigned_int_5 * unsigned_int_2;
	if(1)
	{
	}
	int_2 = v_writeIndexCodingProtein(unsigned_int_6,float_2,short_1);

	int_5 = int_4 * int_3;
	return int_3;
	int_2 = v_writeIndexTestProtein(short_1,float_1);

}
int v_renderMainUsage()
{
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	int int_1 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	int int_2 = 1;
	double double_2 = 1;
	double double_3 = 1;
	int int_3 = 1;
	long long_1 = 1;
	long long_2 = 1;
	long long_3 = 1;
	double double_4 = 1;
	int int_4 = 1;
	short_1 = short_2;
	unsigned_int_1 = unsigned_int_2;
	int_1 = int_1;
	unsigned_int_1 = unsigned_int_3 + unsigned_int_2;
	unsigned_int_1 = unsigned_int_1;
	double_1 = double_1;
	int_2 = int_2;
	double_2 = double_3;
	unsigned_int_2 = unsigned_int_1 * unsigned_int_1;
	int_3 = int_3;
	long_3 = long_1 * long_2;
	int_2 = int_3 + int_1;
	double_4 = double_2 + double_3;
	double_4 = double_4;
	int_1 = int_3 + int_3;
	return int_4;
}
int v_ksprintf( int parameter_1,float parameter_2,char parameter_3)
{
	int int_1 = 1;
	int int_2 = 1;
	double double_1 = 1;
	double double_2 = 1;
	unsigned int unsigned_int_1 = 1;
	char char_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	unsigned int unsigned_int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	char char_2 = 1;
	char char_3 = 1;
	int_1 = int_2;
	double_1 = double_2;
	unsigned_int_1 = unsigned_int_1 * unsigned_int_1;
	char_1 = char_1;
	unsigned_int_2 = unsigned_int_2;
	if(1)
	{
		int int_1 = 1;
		int int_2 = 1;
		double double_1 = 1;
		double double_2 = 1;
		unsigned int unsigned_int_1 = 1;
		char char_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		unsigned int unsigned_int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		char char_2 = 1;
		char char_3 = 1;
		short_1 = short_2;
		double_1 = double_1;
		char_1 = char_1;
		unsigned_int_4 = unsigned_int_3 * unsigned_int_3;
		char_2 = char_3;
	}
	int_1 = int_2;
	unsigned_int_2 = unsigned_int_3 * unsigned_int_4;
	return int_2;
}
double v_realtime()
{
	float float_1 = 1;
	float float_2 = 1;
	char char_1 = 1;
	char char_2 = 1;
	char char_3 = 1;
	double double_1 = 1;
	float_1 = float_2;
	char_2 = char_1 * char_1;
	char_2 = char_3;
	return double_1;
}
int main()
{
	int uni_para =436;
	long long_1 = 1;
	long long_2 = 1;
	unsigned int unsigned_int_1 = 1;
	unsigned int unsigned_int_2 = 1;
	unsigned int unsigned_int_3 = 1;
	double double_1 = 1;
	char char_1 = 1;
	char char_2 = 1;
	unsigned int unsigned_int_4 = 1;
	float float_1 = 1;
	int int_1 = 1;
	char char_4 = 1;
	double double_4 = 1;
	int int_2 = 1;
	int int_3 = 1;
	unsigned int unsigned_int_5 = 1;
	int int_5 = 1;
	char char_3 = 1;
	long long_3 = 1;
	double double_2 = 1;
	double double_3 = 1;
	float float_2 = 1;
	int int_4 = 1;
	short short_1 = 1;
	short short_2 = 1;
	unsigned int unsigned_int_6 = 1;
	long_1 = long_2;
	unsigned_int_3 = unsigned_int_1 * unsigned_int_2;
	double_1 = double_1 + double_1;
	char_1 = char_1 + char_2;
	char_2 = char_1;
	unsigned_int_4 = unsigned_int_4 + unsigned_int_4;
	for(int looper_1=0; looper_1<1;looper_1++)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		char_3 = char_2;
	}
	float_1 = float_1;
	char controller4vul_11[1];
	fgets(controller4vul_11 ,2 ,stdin);
	if( strcmp( controller4vul_11, "A") > 0)
	{
		int_1 = v_command_align(int_1,char_4,uni_para);

	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		long_2 = long_3;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		double_2 = double_3;
	}
	if(1)
	{
		double_4 = double_4 * double_1;
	}
	if(1)
	{
		int_2 = int_3;
	}
	if(1)
	{
		long_1 = long_1 * long_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		float_2 = float_1 + float_1;
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		int_3 = int_4 + int_1;
	}
	if(1)
	{
		unsigned_int_5 = unsigned_int_1;
	}
	if(1)
	{
	}
	if(1)
	{
		long long_1 = 1;
		long long_2 = 1;
		unsigned int unsigned_int_1 = 1;
		unsigned int unsigned_int_2 = 1;
		unsigned int unsigned_int_3 = 1;
		double double_1 = 1;
		char char_1 = 1;
		char char_2 = 1;
		unsigned int unsigned_int_4 = 1;
		float float_1 = 1;
		int int_1 = 1;
		char char_4 = 1;
		double double_4 = 1;
		int int_2 = 1;
		int int_3 = 1;
		unsigned int unsigned_int_5 = 1;
		int int_5 = 1;
		char char_3 = 1;
		long long_3 = 1;
		double double_2 = 1;
		double double_3 = 1;
		float float_2 = 1;
		int int_4 = 1;
		short short_1 = 1;
		short short_2 = 1;
		unsigned int unsigned_int_6 = 1;
		short_1 = short_1 * short_2;
	}
	unsigned_int_4 = unsigned_int_2;
	double_1 = double_4 * double_1;
	if(1)
	{
		unsigned_int_4 = unsigned_int_4;
		char_2 = char_1;
		for(int looper_2=0; looper_2<1;looper_2++)
		{
			long long_1 = 1;
			long long_2 = 1;
			unsigned int unsigned_int_1 = 1;
			unsigned int unsigned_int_2 = 1;
			unsigned int unsigned_int_3 = 1;
			double double_1 = 1;
			char char_1 = 1;
			char char_2 = 1;
			unsigned int unsigned_int_4 = 1;
			float float_1 = 1;
			int int_1 = 1;
			char char_4 = 1;
			double double_4 = 1;
			int int_2 = 1;
			int int_3 = 1;
			unsigned int unsigned_int_5 = 1;
			int int_5 = 1;
			char char_3 = 1;
			long long_3 = 1;
			double double_2 = 1;
			double double_3 = 1;
			float float_2 = 1;
			int int_4 = 1;
			short short_1 = 1;
			short short_2 = 1;
			unsigned int unsigned_int_6 = 1;
			unsigned_int_6 = unsigned_int_4;
		}
		unsigned_int_5 = unsigned_int_2;
	}
	int_2 = int_5;
	return int_1;
}
