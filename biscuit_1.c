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

unsigned int bsconv_func( char parameter_1,short parameter_2,char parameter_3);
int main_bsconv( int parameter_1,char parameter_2);
void free_data_meth();
void format_output( long parameter_1,char parameter_2,char parameter_3,char parameter_4,int parameter_5);
void refcache_fetch_chrm( short parameter_1,char parameter_2);
void parse_data_meth( unsigned int parameter_1,char parameter_2,int parameter_3);
void init_data_meth( long parameter_1);
int main_mergecg( int parameter_1,char parameter_2);
int subseq_refcache2( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4);
float fivenuc_context( int parameter_1,float parameter_2,char parameter_3,char parameter_4);
char cinread_func( int parameter_1,float parameter_2,float parameter_3);
int main_cinread( int parameter_1,char parameter_2);
double bam_tag_get_bsstrand( int parameter_1);
int bsstrand_func( unsigned int parameter_1,float parameter_2,short parameter_3);
int bam_filter( char parameter_1,char parameter_2,char parameter_3);
int main_bsstrand( int parameter_1,char parameter_2);
long btv_destroy( char parameter_1);
float btv_win_goto( unsigned int parameter_1,int parameter_2,int parameter_3);
int btv_win_help( float parameter_1);
char btv_loop( float parameter_1);
char draw_read1( long parameter_1,int parameter_2,int parameter_3,int parameter_4);
int sam_short_format1( long parameter_1,unsigned int parameter_2);
double vmvprintw( short parameter_1,int parameter_2,int parameter_3,long parameter_4,long parameter_5);
int set_row_update_endposes( long parameter_1,float parameter_2,int parameter_3);
float screen_layout_reads( unsigned int parameter_1);
void reset_rnode_v( long parameter_1);
float btv_reload_data( char parameter_1);
short btv_drawaln( long parameter_1,int parameter_2,int uni_para);
unsigned int btv_init_colors( int parameter_1);
double btv_init( int parameter_1,float parameter_2);
int main_tview( int parameter_1,char parameter_2,int uni_para);
double col_sums( int parameter_1,int parameter_2,int parameter_3);
void max2( int parameter_1,int parameter_2,int parameter_3);
float row_sums( int parameter_1,int parameter_2,int parameter_3);
void test_asm( int parameter_1,char parameter_2,int parameter_3,int parameter_4);
int main_asm( int parameter_1,char parameter_2);
void put_into_record_v( unsigned int parameter_1,char parameter_2);
void pop_record_by_block_id( unsigned int parameter_1,long parameter_2,float parameter_3);
char epiread_write_func();
short get_n_insert_episnp1( long parameter_1,char parameter_2);
float bed_init_episnp( char parameter_1);
int main_epiread( int parameter_1,char parameter_2);
float pass_coverage( double parameter_1,short parameter_2);
unsigned int vcf2bed_ctxt( float parameter_1,short parameter_2,int parameter_3);
short free_bed_data();
int vcf_record2bed1( short parameter_1,int parameter_2,float parameter_3);
float init_bed_data( long parameter_1);
long vcf2bed_snp( long parameter_1,unsigned int parameter_2);
int main_vcf2bed( int parameter_1,char parameter_2);
void free_methbed();
void methbed_close( long parameter_1);
double meth_emission(int parameter_2,int parameter_3);
int methbed_parse1( char parameter_1,long parameter_2,char parameter_3);
int methbed_get_chrom1( char parameter_1);
void methbed_open( float parameter_1);
int main_ndr( int parameter_1,char parameter_2);
long bam_get_bsstrand( int parameter_1);
short flush_dangling_reads( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4,double parameter_5,double parameter_6);
double sum_qual( char parameter_1);
void resolve_dup( double parameter_1,float parameter_2,long parameter_3,short parameter_4,double parameter_5,unsigned int parameter_6);
int mark_dup( char parameter_1,char parameter_2,int parameter_3);
int main_markdup( int parameter_1,char parameter_2);
float pileup_parse_region( float parameter_1,int parameter_3,int parameter_4,int parameter_5);
void free_refcache( unsigned int parameter_1);
unsigned int format_epiread( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,char parameter_4,char parameter_5,int parameter_6,short parameter_7,int parameter_8,long parameter_9);
short refcache_getbase( short parameter_1,float parameter_2);
float format_epiread_pairwise( long parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,char parameter_5,short parameter_6,float parameter_7,double parameter_8,float parameter_9);
int cnt_retention( float parameter_1,unsigned int parameter_2);
float infer_bsstrand( int parameter_1,int parameter_2,unsigned int parameter_3,int uni_para);
char get_bsstrand( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,int uni_para);
double __refcache_fetch( double parameter_1);
float refcache_fetch( long parameter_1,char parameter_2,char parameter_3,short parameter_4);
short get_episnp1( unsigned int parameter_1,char parameter_2);
void init_refcache( char parameter_1,float parameter_2,int parameter_3);
char process_func();
char write_func();
int head_append_verbose( char parameter_1,char parameter_2,short parameter_3);
char print_vcf_header( char parameter_1,long parameter_2,char parameter_3,int parameter_4,float parameter_5,char parameter_6,int parameter_7);
char compare_targets( long parameter_1,long parameter_2);
void conf_init( float parameter_1);
int main_pileup( int parameter_1,char parameter_2);
int kclose();
void bwa_idx_destroy( double parameter_1);
int err_fputs( char parameter_1,unsigned int parameter_2);
int mem_approx_mapq_se( int parameter_1,char parameter_2);
void ks_introsort_128( float parameter_1,float parameter_2);
void ks_introsort_192( long parameter_1,long parameter_2);
void mem_pair( float parameter_1,int parameter_2,char parameter_3,char parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,int parameter_9);
void mem_reg2sam_pe_nopairing( int parameter_1,int parameter_2,long parameter_3,long parameter_4,unsigned int parameter_5,char parameter_6);
void mem_reg2sam_pe( char parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7);
void mem_alnreg_matesw_core( int parameter_1,char parameter_2,long parameter_3,short parameter_4,short parameter_5,int parameter_6,short parameter_7,unsigned int parameter_8);
void mem_alnreg_matesw( char parameter_1,float parameter_2,int parameter_3,long parameter_4,float parameter_5,short parameter_6);
int mem_alnreg_freeSAM( float parameter_1);
long get_pri_idx( double parameter_1,unsigned int parameter_2,int parameter_3);
unsigned int mem_alnreg_tagXAXB( float parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4,unsigned int parameter_5,unsigned int parameter_6,char parameter_7);
long infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6);
long mem_alnreg_setSAM( long parameter_1,char parameter_2,short parameter_3,float parameter_4,double parameter_5);
char mem_alnreg_tagSA( float parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4,short parameter_5,float parameter_6,int parameter_7);
short get_rlen( int parameter_1,float parameter_2);
int kputl( long parameter_1,short parameter_2);
float kputs( short parameter_1,short parameter_2);
double kputsn( unsigned int parameter_1,int parameter_2,char parameter_3);
short ks_resize( char parameter_1,short parameter_2);
int is_proper_pair( short parameter_1,float parameter_2,char parameter_3,short parameter_4);
void mem_alnreg_formatSAM( short parameter_1,long parameter_2,long parameter_3,char parameter_4,int parameter_5,long parameter_6,short parameter_7,unsigned int parameter_8,int parameter_9,long parameter_10);
void mem_reg2sam_se( double parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4,char parameter_5);
long mem_alnreg_resetFLAG( int parameter_1);
int hash_64( float parameter_1);
void mem_mark_primary_se( unsigned int parameter_1,int parameter_2,float parameter_3);
int bis_worker2(int parameter_2,int parameter_3);
void ks_introsort_64s( unsigned int parameter_1,double parameter_2);
unsigned int mem_infer_isize( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7);
char mem_alnreg_isize( int parameter_1,double parameter_2,double parameter_3,int parameter_4);
float cal_sub( char parameter_1,char parameter_2);
double mem_pestat( char parameter_1);
void check_paired_read_names( long parameter_1,char parameter_2);
unsigned int region_depos( float parameter_1,float parameter_2,int parameter_3);
int mem_print_region1( unsigned int parameter_1,float parameter_2);
double mem_print_regions( short parameter_1,double parameter_2);
unsigned int mem_test_and_remove_exact( float parameter_1,short parameter_2,int parameter_3);
unsigned int kputc( int parameter_1,float parameter_2);
char kputw( int parameter_1,long parameter_2);
long push_cigar( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5);
int ksw_global2( int parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,long parameter_13);
float bis_bwa_gen_cigar2( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,char parameter_8,int parameter_9,float parameter_10,double parameter_11,unsigned int parameter_12,int parameter_13,int parameter_14,int parameter_15,float parameter_16,char parameter_17,double parameter_18);
int mem_test_reg_concatenation( float parameter_1,char parameter_2,float parameter_3,long parameter_4,double parameter_5,char parameter_6,int parameter_7);
void mem_sort_deduplicate( long parameter_1,char parameter_2,int parameter_3,long parameter_4,double parameter_5);
void mem_merge_regions( unsigned int parameter_1,short parameter_2,int parameter_3,short parameter_4,short parameter_5);
int right_extend_seed_set_align_end( char parameter_1,double parameter_2,float parameter_3,int parameter_4,short parameter_5,double parameter_6,int parameter_7,int parameter_8,float parameter_9);
int ksw_extend2( int parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19);
float left_extend_seed_set_align_beg( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4,double parameter_5,int parameter_6,int parameter_7,double parameter_8);
void ks_introsort_64( char parameter_1,unsigned int parameter_2);
short cal_max_gap( short parameter_1,int parameter_2);
int mem_chain_reference_span( short parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5);
void mem_chain2aln( short parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,float parameter_7,double parameter_8);
float revseq( int parameter_1,float parameter_2);
short ksw_u8( long parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
float ksw_i16( short parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8);
int ksw_qinit( int parameter_1,int parameter_2,float parameter_3,int parameter_4,char parameter_5);
unsigned int ksw_align2( int parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,char parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,short parameter_12);
float mem_seed_sw( char parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,long parameter_6,short parameter_7);
void mem_flt_chained_seeds( double parameter_1,double parameter_2,long parameter_3,double parameter_4,unsigned int parameter_5,double parameter_6);
void mem_chain_flt( int parameter_1,unsigned int parameter_2);
int mem_chain_weight();
long mem_print_chain1( unsigned int parameter_1,char parameter_2);
void mem_print_chains( float parameter_1,unsigned int parameter_2);
long bwtintv_cache_destroy( long parameter_1);
void test_and_merge( short parameter_1,char parameter_2,char parameter_3,long parameter_4,int parameter_5);
void bns_get_seq( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,long parameter_5);
char bns_fetch_seq( char parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5,int parameter_6);
char asymmetric_flt_seed( int parameter_1,long parameter_2,double parameter_3,double parameter_4);
void bns_depos( int parameter_1,int parameter_2,int parameter_3);
int bns_pos2rid( short parameter_1,char parameter_2);
int bns_intv2rid( long parameter_1,unsigned int parameter_2,long parameter_3);
double bwt_sa( long parameter_1,int parameter_2);
int bwt_seed_strategy1( short parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,unsigned int parameter_8);
short bwt_reverse_intvs();
void bwt_occ4( char parameter_1,float parameter_2,int parameter_3);
void bwt_2occ4( float parameter_1,long parameter_2,char parameter_3,char parameter_4,char parameter_5);
void bwt_extend( int parameter_1,long parameter_2,float parameter_3,int parameter_4);
int bwt_smem1a( double parameter_1,short parameter_2,int parameter_3,short parameter_4,int parameter_5,int parameter_6,char parameter_7,float parameter_8,float parameter_9);
int bwt_smem1( unsigned int parameter_1,double parameter_2,int parameter_3,float parameter_4,int parameter_5,int parameter_6,int parameter_7,char parameter_8);
unsigned int mem_collect_intv( long parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5,double parameter_6);
long mem_chain( char parameter_1);
void bseq_bsconvert( double parameter_1,short parameter_2);
float mem_align1_core( long parameter_1,float parameter_2,double parameter_3,short parameter_4,double parameter_5,float parameter_7,long parameter_8);
double wzmemmem( char parameter_1,int parameter_2,int parameter_3,char parameter_4);
void read_identify_adaptor( long parameter_1,short parameter_2,int parameter_3);
char bis_worker1(int parameter_2,int parameter_3);
short bwtintv_cache_init();
double cputime();
void mem_process_seqs( int parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7,long parameter_8);
void bseq_classify( int parameter_1,char parameter_2,int parameter_3,float parameter_4);
void bis_kseq2bseq1( float parameter_1,long parameter_2);
long trim_readno( double parameter_1);
short bis_bseq_read( int parameter_1,int parameter_2);
void bseq1_code_nt4( char parameter_1);
char bis_create_bseq1( char parameter_1,char parameter_2,int parameter_3);
float process(int parameter_2);
void kt_pipeline( int parameter_1,int parameter_3,int parameter_6);
int err_printf( float parameter_1,char parameter_2);
void bwa_print_sam_hdr( float parameter_1,unsigned int parameter_2);
unsigned int kopen( float parameter_1,int parameter_2);
char infer_alt_chromosomes( double parameter_1);
float bns_restore_core( short parameter_1,int parameter_2,long parameter_3);
void bns_restore();
void bwt_restore_sa( unsigned int parameter_1,int parameter_2);
void bwt_restore_bwt2( int parameter_1,char parameter_2);
void bwa_idx_load_bwt( double parameter_1,float parameter_2,char parameter_3);
char bwa_idx_infer_prefix( short parameter_1);
unsigned int bwa_idx_load_from_disk( unsigned int parameter_1,int parameter_2);
long bwa_idx_load( unsigned int parameter_1,int parameter_2);
int bwa_mem2idx( short parameter_1,long parameter_2,char parameter_3);
float bwa_idx_load_from_shm( long parameter_1);
char update_a( short parameter_1,float parameter_2);
char bwa_insert_header( int parameter_1,char parameter_2);
int bwa_escape( char parameter_1);
short bwa_set_rg( long parameter_1);
void bwa_fill_scmat_ga( int parameter_1,int parameter_2,long parameter_3);
void bwa_fill_scmat_ct( int parameter_1,int parameter_2,short parameter_3);
void bwa_fill_scmat( int parameter_1,int parameter_2,double parameter_3);
unsigned int mem_opt_init();
int main_align( int parameter_1,char parameter_2);
void bwt_dump_sa( char parameter_1,int parameter_2);
short __occ_aux( double parameter_1,int parameter_2);
char bwt_occ( int parameter_1,short parameter_2,int parameter_3);
unsigned int bwt_invPsi( unsigned int parameter_1,double parameter_2);
void bwt_cal_sa( double parameter_1,int parameter_2);
short add1( double parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,unsigned int parameter_7);
double dump_forward_pac( long parameter_1,double parameter_2);
void bwt_bwtupdate_core();
void bwt_gen_cnt_table( short parameter_1);
double fread_fix( double parameter_1,float parameter_2);
short bwt_restore_bwt( double parameter_1);
void bwt_destroy( long parameter_1);
void bwt_dump_bwt( long parameter_1,float parameter_2);
char induceSA( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7);
void getBuckets( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4);
unsigned int getCounts( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5);
void sais_main( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6);
int is_sa( float parameter_1,int parameter_2,int parameter_3);
int is_bwt( char parameter_1,int parameter_2);
double err_fread_noeof(double parameter_2,double parameter_3,unsigned int parameter_4);
long err_ftell( unsigned int parameter_1);
int err_fseek( unsigned int parameter_1,long parameter_2,int parameter_3);
void bwa_seq_len( unsigned int parameter_1);
unsigned int bwt_pac2bwt( float parameter_1,int parameter_2);
void BWTIncFree( double parameter_1);
int BWTFileSizeInWord( double parameter_1);
void BWTSaveBwtCodeAndOcc( double parameter_1,unsigned int parameter_2);
void BWTGenerateOccValueFromBwt( short parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5);
void BWTClearTrailingBwtCode();
void BWTIncMergeBwt( long parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,double parameter_5,int parameter_6);
int BWTIncBuildBwt( char parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4);
double BWTIncBuildRelativeRank( float parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6);
unsigned int BWTIncSortKey( long parameter_1,float parameter_2,unsigned int parameter_3);
float BackwardDNAOccCount( char parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4);
void ForwardDNAOccCount( unsigned int parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4);
long BWTOccValueExplicit( unsigned int parameter_1,long parameter_2,short parameter_3);
int BWTOccValue( int parameter_1,int parameter_2,unsigned int parameter_3);
unsigned int BWTIncGetAbsoluteRank( char parameter_1,char parameter_2,long parameter_3,char parameter_4,int parameter_5,char parameter_6,double parameter_7);
double ForwardDNAAllOccCountNoLimit( char parameter_1,short parameter_2,short parameter_3,float parameter_4);
short BWTIncBuildPackedBwt( int parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5);
char initializeVAL( short parameter_1,char parameter_2,float parameter_3);
long QSufSortChoosePivot( char parameter_1,long parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5);
unsigned int QSufSortInsertSortSplit( float parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4,int parameter_5);
void QSufSortSortSplit( float parameter_1,float parameter_2,long parameter_3,unsigned int parameter_4,char parameter_5);
long QSufSortBucketSort( short parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4);
float QSufSortTransform( long parameter_1,char parameter_2,double parameter_3,short parameter_4,short parameter_5,double parameter_6,int parameter_7);
void QSufSortSuffixSort( short parameter_1,int parameter_2,int parameter_3,float parameter_4,long parameter_5,float parameter_6);
void BWTIncPutPackedTextToRank( short parameter_1,int parameter_2,float parameter_3,float parameter_4);
unsigned int BWTIncConstruct( int parameter_1,long parameter_2);
double BitPerWordPackedChar( double parameter_1);
unsigned int leadingZero( short parameter_1);
double ceilLog2( float parameter_1);
short BitPerBytePackedChar( char parameter_1);
double ConvertBytePackedToWordPacked( long parameter_1,short parameter_2,int parameter_3,int parameter_4);
char BWTIncSetBuildSizeAndTextAddr( int parameter_1);
int BWTOccValueMinorSizeInWord( float parameter_1);
float BWTResidentSizeInWord( short parameter_1);
long BWTOccValueMajorSizeInWord( int parameter_1);
unsigned int GenerateDNAOccCountTable( float parameter_1);
unsigned int initializeVAL_bg( char parameter_1,long parameter_2,int parameter_3);
int BWTCreate( char parameter_1,double parameter_2);
void BWTIncCreate( float parameter_1,float parameter_2,double parameter_3);
unsigned int TextLengthFromBytePacked( long parameter_1,char parameter_2,int parameter_3);
unsigned int BWTIncConstructFromPacked( unsigned int parameter_1,char parameter_2,long parameter_3);
void bwt_bwtgen2( unsigned int parameter_1,short parameter_2,int parameter_3);
void bwt_bwtgen( short parameter_1,long parameter_2);
int err_gzclose( double parameter_1);
void bns_destroy();
int err_fprintf( unsigned int parameter_1,char parameter_2,double parameter_3);
char bis_bns_dump( char parameter_1,unsigned int parameter_2);
int err_fclose();
int err_fflush();
void _err_fatal_simple( double parameter_1,long parameter_2);
float err_fwrite( short parameter_1,float parameter_2,double parameter_3,unsigned int parameter_4);
int bis_add1( unsigned int parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,char parameter_7);
long bis_bns_fasta2bntseq( int parameter_1,int parameter_2,unsigned int parameter_3);
void err_fatal( unsigned int parameter_1,unsigned int parameter_2,long parameter_3);
int main_biscuit_index( int parameter_1,char parameter_2);
int usage( double parameter_1);
int ksprintf( int parameter_1,short parameter_2,unsigned int parameter_3);
double realtime();
unsigned int bsconv_func( char parameter_1,short parameter_2,char parameter_3)
{
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	float float_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_d = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	double double_k = 0;
	char char_c = 0;
	long long_a = 0;
	unsigned int unsigned_int_b = 0;
	char char_d = 0;
	short short_d = 0;
	short short_e = 0;
	int int_c = 0;
	char char_e = 0;
	char char_f = 0;
	unsigned int unsigned_int_c = 0;
	double double_l = 0;
	double double_m = 0;
	unsigned int unsigned_int_d = 0;
	double double_n = 0;
	unsigned_int_a = kputc(int_a,float_a);

	double_a = log ( double_a ) ;
	double_c = double_b + double_b;
	float_a = float_a;
	int_a = int_b;
	if(1)
	{
		return unsigned_int_a;
	}
	char_a = char_b;
	double_d = asin ( double_c ) ;
	short_a = short_b;
	short_c = short_a;
	double_d = pow ( double_d , double_c ) ;
	double_e = ceil ( double_b ) ;
	double_f = acos ( double_g ) ;
	double_i = double_b / double_h;
	double_j = fabs ( double_j ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double_k = floor ( double_a ) ;
		double_c = sinh ( double_d ) ;
		{
			for(int looper_b=0; looper_b<9;looper_b++)
			{
				double_d = double_i;
				if(1)
				{
				}
				if(1)
				{
				}
				if(1)
				{
				}
				char_c = char_b * char_b;
				char_c = get_bsstrand(unsigned_int_a,long_a,unsigned_int_b,32);

				double_g = acos ( double_j ) ;
				if(1)
				{
					if(1)
					{
						double_f = cos ( double_f ) ;
					}
					if(1)
					{
						double_g = double_h;
					}
				}
				if(1)
				{
					if(1)
					{
						double_i = acos ( double_a ) ;
					}
					if(1)
					{
						unsigned_int_a = unsigned_int_b / unsigned_int_b;
					}
				}
			}
			char_a = char_d * char_a;
			short_d = short_e;
			double_e = asin ( double_k ) ;
			int_c = int_a;
			char_a = char_a / char_a;
			double_f = ldexp ( double_e , int_b ) ;
			double_c = sinh ( double_j ) ;
		}
	}
	double_b = sqrt ( double_j ) ;
	if(1)
	{
		float_a = fivenuc_context(int_c,float_a,char_a,char_e);

		double_b = pow ( double_a , double_f ) ;
	}
	if(1)
	{
		double_c = acos ( double_j ) ;
	}
	if(1)
	{
		char_f = char_d;
	}
	if(1)
	{
		unsigned_int_b = unsigned_int_b;
	}
	if(1)
	{
		int_b = ksprintf(int_a,short_d,unsigned_int_c);

		double_c = tan ( double_g ) ;
	}
	if(1)
	{
		return unsigned_int_a;
	}
	if(1)
	{
		for(int looper_c=0; looper_c<4;looper_c++)
		{
			if(1)
			{
				double_f = sinh ( double_f ) ;
			}
			double_l = cosh ( double_k ) ;
		}
		double_b = double_h;
		return unsigned_int_a;
	}
	double_e = sqrt ( double_b ) ;
	double_b = double_g;
	char_b = char_a;
	for(int looper_d=0; looper_d<6;looper_d++)
	{
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_d = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		double double_k = 0;
		char char_c = 0;
		long long_a = 0;
		unsigned int unsigned_int_b = 0;
		char char_d = 0;
		short short_d = 0;
		short short_e = 0;
		int int_c = 0;
		char char_e = 0;
		char char_f = 0;
		unsigned int unsigned_int_c = 0;
		double double_l = 0;
		double double_m = 0;
		unsigned int unsigned_int_d = 0;
		double double_n = 0;
		if(1)
		{
			float_a = refcache_fetch(long_a,char_f,char_d,short_a);

			double_h = sinh ( double_b ) ;
		}
		unsigned_int_b = unsigned_int_d;
	}
	double_b = double_m / double_a;
	double_i = sinh ( double_i ) ;
	if(1)
	{
		if(1)
		{
			short_b = short_d / short_e;
		}
	}
	else
	{
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_d = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		double double_k = 0;
		char char_c = 0;
		long long_a = 0;
		unsigned int unsigned_int_b = 0;
		char char_d = 0;
		short short_d = 0;
		short short_e = 0;
		int int_c = 0;
		char char_e = 0;
		char char_f = 0;
		unsigned int unsigned_int_c = 0;
		double double_l = 0;
		double double_m = 0;
		unsigned int unsigned_int_d = 0;
		double double_n = 0;
		double_e = sinh ( double_a ) ;
		double_n = tanh ( double_d ) ;
		double_m = log10 ( double_h ) ;
		if(1)
		{
			if(1)
			{
				double_l = ceil ( double_l ) ;
			}
		}
		double_h = log ( double_e ) ;
	}
	return unsigned_int_b;
}
int main_bsconv( int parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	int int_b = 0;
	double double_e = 0;
	char char_a = 0;
	float float_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	char char_b = 0;
	char char_c = 0;
	int int_d = 0;
	double double_f = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	short short_a = 0;
	char char_d = 0;
	float float_b = 0;
	float float_c = 0;
	double_a = double_a / double_b;
	double_c = tan ( double_d ) ;
	int_a = usage(double_c);

	double_d = double_b;
	double_b = tan ( double_b ) ;
	int_a = int_b;
	if(1)
	{
		double_c = pow ( double_b , double_b ) ;
		return int_a;
	}
	int looper_a = 0;
	while(looper_a < 7)
	{
		looper_a += 1;
		{
			double_d = tan ( double_c ) ;
			double_d = atan2 ( double_d , double_e ) ;
			double_c = acos ( double_b ) ;
			double_e = sinh ( double_b ) ;
			double_a = log10 ( double_c ) ;
			init_refcache(char_a,float_a,int_a);

			unsigned_int_a = unsigned_int_b;
			int_c = bam_filter(char_a,char_b,char_c);

			double_d = sqrt ( double_c ) ;
			double_c = acos ( double_e ) ;
			return int_d;
			double_e = acos ( double_b ) ;
		}
	}
	?:
	double_e = cosh ( double_f ) ;
	?:
	double_b = ldexp ( double_b , int_c ) ;
	?:
	free_refcache(unsigned_int_b);

	double_b = double_c;
	if(1)
	{
		double_f = exp ( double_c ) ;
		double_e = double_e;
	}
	unsigned_int_b = unsigned_int_a;
	double_a = sqrt ( double_g ) ;
	unsigned_int_c = bsconv_func(char_c,short_a,char_d);

	char_b = char_b * char_d;
	float_c = float_b - float_b;
	double_f = tan ( double_c ) ;
	return int_b;
}
void free_data_meth()
{
	float float_a = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	float_a = float_b;
	char_b = char_a * char_b;
	long_a = long_a;
	double_a = double_a / double_a;
	double_a = cosh ( double_b ) ;
}
void format_output( long parameter_1,char parameter_2,char parameter_3,char parameter_4,int parameter_5)
{
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	char char_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_b = 0;
	long_b = long_a / long_a;
	double_a = sinh ( double_a ) ;
	double_a = atan2 ( double_b , double_a ) ;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		char controller_a[4];
		scanf("%4s", controller_a);
		if( controller_a <"k7wA" )
		{
			double_c = cosh ( double_c ) ;
		}
	}
	if(1)
	{
	}
	if(1)
	{
		long_a = long_a - long_a;
	}
	if(1)
	{
		double_b = atan2 ( double_c , double_b ) ;
	}
	double_a = log10 ( double_c ) ;
	for(int looper_b=0; looper_b<5;looper_b++)
	{
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		char char_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_b = 0;
		char_a = char_a * char_a;
		if(1)
		{
			long_a = long_a;
		}
		else
		{
			long long_a = 0;
			long long_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			char char_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_b = 0;
			double_d = double_a - double_d;
		}
		if(1)
		{
			unsigned_int_a = unsigned_int_a;
		}
		else
		{
			long long_a = 0;
			long long_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			char char_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_b = 0;
			unsigned_int_b = unsigned_int_c;
		}
		if(1)
		{
			unsigned_int_c = unsigned_int_a;
		}
		else
		{
			long_b = long_b - long_a;
		}
	}
	int_c = int_a - int_b;
}
void refcache_fetch_chrm( short parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_b = 0;
	char char_a = 0;
	double double_c = 0;
	double_a = __refcache_fetch(double_a);

	double_b = pow ( double_a , double_b ) ;
	if(1)
	{
		int_a = int_a;
	}
	char controller_b[1];
	scanf("%1s", controller_b);
	if( controller_b <"n" )
	{
	}
	double_a = sinh ( double_b ) ;
	unsigned_int_b = unsigned_int_a / unsigned_int_a;
	int_a = int_a + int_b;
	char_a = char_a + char_a;
	double_b = double_c;
}
void parse_data_meth( unsigned int parameter_1,char parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_a = 0;
	short short_b = 0;
	double double_d = 0;
	int int_a = 0;
	int int_b = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	int int_c = 0;
	int int_d = 0;
	double_a = double_b;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a >"&GM1x" )
	{
		double_b = sqrt ( double_a ) ;
	}
	else
	{
		double_a = double_c * double_a;
	}
	short_b = short_a + short_a;
	if(1)
	{
		double_d = ldexp ( double_d , int_a ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			short short_a = 0;
			short short_b = 0;
			double double_d = 0;
			int int_a = 0;
			int int_b = 0;
			double double_e = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			int int_c = 0;
			int int_d = 0;
			unsigned_int_a = unsigned_int_b;
		}
		double_b = double_a;
		int_a = int_b;
		double_a = pow ( double_e , double_d ) ;
		double_a = fabs ( double_e ) ;
	}
	char controller_d[5];
	scanf("%5s", controller_d);
	if( controller_d <"Y}A(`" )
	{
		int_b = int_a / int_b;
	}
	double_c = double_e;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		short short_a = 0;
		short short_b = 0;
		double double_d = 0;
		int int_a = 0;
		int int_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		int int_c = 0;
		int int_d = 0;
		double_b = pow ( double_f , double_a ) ;
		double_g = cosh ( double_c ) ;
		double_d = atan ( double_h ) ;
		int_d = int_c / int_a;
	}
}
void init_data_meth( long parameter_1)
{
	double double_a = 0;
	long long_a = 0;
	long long_b = 0;
	double_a = atan ( double_a ) ;
	long_a = long_b;
}
int main_mergecg( int parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	int int_d = 0;
	char char_c = 0;
	char char_d = 0;
	long long_a = 0;
	char char_e = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	double double_f = 0;
	long long_c = 0;
	unsigned int unsigned_int_b = 0;
	float float_b = 0;
	short short_c = 0;
	double double_h = 0;
	float float_a = 0;
	long long_b = 0;
	long long_d = 0;
	double double_g = 0;
	short short_d = 0;
	long long_e = 0;
	short short_a = 0;
	short short_b = 0;
	double_a = atan ( double_a ) ;
	double_b = sinh ( double_c ) ;
	char_a = char_a / char_b;
	int looper_a = 0;
	while(looper_a < 3)
	{
		looper_a += 1;
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			int int_d = 0;
			char char_c = 0;
			char char_d = 0;
			long long_a = 0;
			char char_e = 0;
			double double_d = 0;
			double double_e = 0;
			unsigned int unsigned_int_a = 0;
			double double_f = 0;
			long long_c = 0;
			unsigned int unsigned_int_b = 0;
			float float_b = 0;
			short short_c = 0;
			double double_h = 0;
			float float_a = 0;
			long long_b = 0;
			long long_d = 0;
			double double_g = 0;
			short short_d = 0;
			long long_e = 0;
			short short_a = 0;
			short short_b = 0;
			float_a = float_a;
			int_a = usage(double_c);

			int_c = int_a * int_b;
			return int_d;
		}
	}
	char controller_a[1];
	scanf("%1s", controller_a);
	if( controller_a <"+" )
	{
		double_b = log10 ( double_b ) ;
		int_b = int_d;
	}
	double_a = ldexp ( double_c , int_c ) ;
	char_d = char_c + char_c;
	double_a = sqrt ( double_c ) ;
	double_b = log10 ( double_a ) ;
	format_output(long_a,char_c,char_d,char_a,int_a);

	char_d = char_e;
	double_a = atan2 ( double_c , double_c ) ;
	free_data_meth();

	double_d = exp ( double_c ) ;
	double_b = double_e;
	free_refcache(unsigned_int_a);

	double_c = pow ( double_d , double_e ) ;
	int looper_b = 0;
	while(looper_b < 5)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		int int_d = 0;
		char char_c = 0;
		char char_d = 0;
		long long_a = 0;
		char char_e = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		double double_f = 0;
		long long_c = 0;
		unsigned int unsigned_int_b = 0;
		float float_b = 0;
		short short_c = 0;
		double double_h = 0;
		float float_a = 0;
		long long_b = 0;
		long long_d = 0;
		double double_g = 0;
		short short_d = 0;
		long long_e = 0;
		short short_a = 0;
		short short_b = 0;
		looper_b += 1;
		double_f = log ( double_d ) ;
		long_b = long_c;
		unsigned_int_b = unsigned_int_b + unsigned_int_b;
		unsigned_int_b = unsigned_int_b;
		float_b = float_b;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			int int_d = 0;
			char char_c = 0;
			char char_d = 0;
			long long_a = 0;
			char char_e = 0;
			double double_d = 0;
			double double_e = 0;
			unsigned int unsigned_int_a = 0;
			double double_f = 0;
			long long_c = 0;
			unsigned int unsigned_int_b = 0;
			float float_b = 0;
			short short_c = 0;
			double double_h = 0;
			float float_a = 0;
			long long_b = 0;
			long long_d = 0;
			double double_g = 0;
			short short_d = 0;
			long long_e = 0;
			short short_a = 0;
			short short_b = 0;
			short_c = short_a + short_b;
			refcache_fetch_chrm(short_c,char_e);

			long_b = long_d;
			double_a = fmod ( double_a , double_c ) ;
			double_f = cosh ( double_g ) ;
		}
		double_d = sinh ( double_c ) ;
		if(1)
		{
			if(1)
			{
				init_data_meth(long_c);

				int_c = int_b + int_a;
			}
			double_g = double_b;
			double_b = fmod ( double_e , double_g ) ;
			double_e = asin ( double_d ) ;
		}
		if(1)
		{
			int_c = int_d;
		}
		parse_data_meth(unsigned_int_b,char_d,int_d);

		short_c = short_d * short_c;
		double_e = double_c;
		double_b = asin ( double_c ) ;
		long_e = long_d;
		double_c = asin ( double_b ) ;
	}
	if(1)
	{
		double_e = cosh ( double_f ) ;
	}
	init_refcache(char_e,float_b,int_d);

	double_d = cos ( double_h ) ;
	double_f = fabs ( double_c ) ;
	double_h = log10 ( double_e ) ;
	double_h = double_b + double_c;
	return int_a;
}
int subseq_refcache2( unsigned int parameter_1,char parameter_2,char parameter_3,int parameter_4)
{
	double double_a = 0;
	double double_c = 0;
	long long_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a >"_jRx6" )
	{
		double double_a = 0;
		double double_c = 0;
		long long_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		long_a = long_a / long_a;
		double_b = double_a + double_a;
	}
	double_c = fmod ( double_c , double_a ) ;
	for(int looper_a=0; looper_a<6;looper_a++)
	{
		double double_a = 0;
		double double_c = 0;
		long long_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned_int_a = unsigned_int_b;
	}
}
float fivenuc_context( int parameter_1,float parameter_2,char parameter_3,char parameter_4)
{
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_c = 0;
	float float_a = 0;
	int int_c = 0;
	float float_b = 0;
	int int_e = 0;
	unsigned int unsigned_int_a = 0;
	char char_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	double double_d = 0;
	int int_d = 0;
	if(1)
	{
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		double double_c = 0;
		float float_a = 0;
		int int_c = 0;
		float float_b = 0;
		int int_e = 0;
		unsigned int unsigned_int_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_d = 0;
		int int_d = 0;
		int_b = int_a - int_a;
		double_a = acos ( double_b ) ;
	}
	if(1)
	{
		double_a = acos ( double_c ) ;
		float_a = float_a;
	}
	if(1)
	{
		int_c = int_a + int_b;
		float_a = float_a - float_b;
	}
	if(1)
	{
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		double double_c = 0;
		float float_a = 0;
		int int_c = 0;
		float float_b = 0;
		int int_e = 0;
		unsigned int unsigned_int_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_d = 0;
		int int_d = 0;
		double_a = double_d - double_a;
		int_b = int_c;
	}
	else
	{
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		double double_c = 0;
		float float_a = 0;
		int int_c = 0;
		float float_b = 0;
		int int_e = 0;
		unsigned int unsigned_int_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_d = 0;
		int int_d = 0;
		int_d = int_b / int_c;
	}
	if(1)
	{
		int_e = subseq_refcache2(unsigned_int_a,char_a,char_a,int_b);

		double_c = fabs ( double_c ) ;
	}
	unsigned_int_b = unsigned_int_a + unsigned_int_b;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		if(1)
		{
			return float_a;
		}
	}
	if(1)
	{
		return float_b;
	}
	char controller_h[2];
	scanf("%2s", controller_h);
	if( controller_h >"5X" )
	{
		if(1)
		{
			return float_a;
		}
		else
		{
			return float_a;
		}
	}
	if(1)
	{
		if(1)
		{
			return float_b;
		}
		else
		{
			return float_a;
		}
	}
	else
	{
		if(1)
		{
			return float_b;
		}
		else
		{
			return float_a;
		}
	}
}
char cinread_func( int parameter_1,float parameter_2,float parameter_3)
{
	double double_a = 0;
	float float_a = 0;
	long long_a = 0;
	char char_a = 0;
	short short_a = 0;
	int int_a = 0;
	char char_b = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	double_a = fmod ( double_a , double_a ) ;
	float_a = refcache_fetch(long_a,char_a,char_a,short_a);

	float_a = fivenuc_context(int_a,float_a,char_a,char_b);

	double_b = atan2 ( double_a , double_c ) ;
	char_b = get_bsstrand(unsigned_int_a,long_a,unsigned_int_a,399);

}
int main_cinread( int parameter_1,char parameter_2)
{
	int int_a = 0;
	char char_a = 0;
	char char_b = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_b = 0;
	long long_a = 0;
	long long_c = 0;
	double double_e = 0;
	float float_a = 0;
	int int_c = 0;
	int int_d = 0;
	int int_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	long long_d = 0;
	long long_e = 0;
	double double_j = 0;
	unsigned int unsigned_int_b = 0;
	int int_f = 0;
	unsigned int unsigned_int_c = 0;
	float float_b = 0;
	unsigned int unsigned_int_a = 0;
	long long_b = 0;
	char char_c = 0;
	char char_d = 0;
	double double_k = 0;
	int_a = bam_filter(char_a,char_b,char_a);

	short_c = short_a - short_b;
	char_a = char_a + char_b;
	double_b = double_a + double_b;
	double_a = double_c;
	double_c = log ( double_c ) ;
	double_b = fabs ( double_b ) ;
	double_d = fmod ( double_a , double_b ) ;
	if(1)
	{
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		long long_a = 0;
		long long_c = 0;
		double double_e = 0;
		float float_a = 0;
		int int_c = 0;
		int int_d = 0;
		int int_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		long long_d = 0;
		long long_e = 0;
		double double_j = 0;
		unsigned int unsigned_int_b = 0;
		int int_f = 0;
		unsigned int unsigned_int_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_a = 0;
		long long_b = 0;
		char char_c = 0;
		char char_d = 0;
		double double_k = 0;
		unsigned_int_a = unsigned_int_a;
		return int_b;
	}
	int looper_a = 0;
	while(looper_a < 8)
	{
		looper_a += 1;
		{
			int int_a = 0;
			char char_a = 0;
			char char_b = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_b = 0;
			long long_a = 0;
			long long_c = 0;
			double double_e = 0;
			float float_a = 0;
			int int_c = 0;
			int int_d = 0;
			int int_e = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			double double_i = 0;
			long long_d = 0;
			long long_e = 0;
			double double_j = 0;
			unsigned int unsigned_int_b = 0;
			int int_f = 0;
			unsigned int unsigned_int_c = 0;
			float float_b = 0;
			unsigned int unsigned_int_a = 0;
			long long_b = 0;
			char char_c = 0;
			char char_d = 0;
			double double_k = 0;
			long_c = long_a / long_b;
			double_e = pow ( double_e , double_c ) ;
			int_b = usage(double_b);

			init_refcache(char_a,float_a,int_c);

			int_e = int_d - int_a;
			double_f = cosh ( double_e ) ;
			float_a = float_a;
			double_b = pow ( double_d , double_g ) ;
			return int_c;
			double_e = asin ( double_b ) ;
		}
	}
	double_c = double_f;
	if(1)
	{
		for(int looper_b=0; looper_b<7;looper_b++)
		{
			if(1)
			{
				double_a = sqrt ( double_h ) ;
			}
		}
		char controller_d[2];
		scanf("%2s", controller_d);
		if( controller_d <"Qd" )
		{
			double_d = fmod ( double_d , double_i ) ;
			double_g = asin ( double_d ) ;
		}
	}
	else
	{
		long_e = long_d - long_d;
	}
	if(1)
	{
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		long long_a = 0;
		long long_c = 0;
		double double_e = 0;
		float float_a = 0;
		int int_c = 0;
		int int_d = 0;
		int int_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		long long_d = 0;
		long long_e = 0;
		double double_j = 0;
		unsigned int unsigned_int_b = 0;
		int int_f = 0;
		unsigned int unsigned_int_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_a = 0;
		long long_b = 0;
		char char_c = 0;
		char char_d = 0;
		double double_k = 0;
		char_c = char_d;
		int looper_c = 0;
		while(looper_c < 3)
		{
			looper_c += 1;
			for(int looper_d=0; looper_d<2;looper_d++)
			{
				if(1)
				{
					short_a = short_c;
					double_c = tanh ( double_a ) ;
				}
			}
			if(1)
			{
				double_i = ldexp ( double_i , int_c ) ;
				long_d = long_d;
			}
			double_e = cosh ( double_a ) ;
		}
	}
	else
	{
		double_b = log ( double_c ) ;
		double_g = sinh ( double_j ) ;
		free_refcache(unsigned_int_b);

		double_c = cos ( double_h ) ;
		char_b = char_b;
		double_i = cosh ( double_a ) ;
		long_d = long_e;
		int_e = int_f * int_d;
	}
	?:
	double_a = ceil ( double_b ) ;
	?:
	unsigned_int_b = unsigned_int_b / unsigned_int_c;
	if(1)
	{
		short_c = short_a;
		double_b = ceil ( double_c ) ;
	}
	char controller_i[1];
	scanf("%1s", controller_i);
	if( controller_i <"0" )
	{
		double_a = fmod ( double_g , double_d ) ;
	}
	else
	{
		int_a = int_f + int_d;
	}
	int_f = int_a;
	char_b = cinread_func(int_b,float_b,float_b);

	int_a = int_a;
	double_f = fmod ( double_i , double_g ) ;
	long_c = long_e / long_a;
	double_d = sqrt ( double_e ) ;
	double_a = asin ( double_g ) ;
	if(1)
	{
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		long long_a = 0;
		long long_c = 0;
		double double_e = 0;
		float float_a = 0;
		int int_c = 0;
		int int_d = 0;
		int int_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		long long_d = 0;
		long long_e = 0;
		double double_j = 0;
		unsigned int unsigned_int_b = 0;
		int int_f = 0;
		unsigned int unsigned_int_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_a = 0;
		long long_b = 0;
		char char_c = 0;
		char char_d = 0;
		double double_k = 0;
		double_k = acos ( double_j ) ;
	}
	return int_d;
}
double bam_tag_get_bsstrand( int parameter_1)
{
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	long long_a = 0;
	int_b = int_a - int_b;
	unsigned_int_a = unsigned_int_a + unsigned_int_b;
	if(1)
	{
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		long long_a = 0;
		long_a = long_a;
		if(1)
		{
			return double_a;
		}
		if(1)
		{
			return double_b;
		}
	}
	double_b = fmod ( double_b , double_b ) ;
	if(1)
	{
		int_a = int_a + int_b;
		if(1)
		{
			return double_c;
		}
		if(1)
		{
			return double_b;
		}
		if(1)
		{
			return double_c;
		}
		if(1)
		{
			return double_d;
		}
	}
	double_d = double_b - double_b;
	if(1)
	{
		double_d = floor ( double_d ) ;
		if(1)
		{
			return double_c;
		}
		if(1)
		{
			return double_c;
		}
	}
	return double_b;
}
int bsstrand_func( unsigned int parameter_1,float parameter_2,short parameter_3)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	double double_e = 0;
	int int_b = 0;
	double double_f = 0;
	short short_a = 0;
	double double_g = 0;
	float float_a = 0;
	long long_a = 0;
	char char_a = 0;
	double double_h = 0;
	short short_c = 0;
	short short_d = 0;
	long long_b = 0;
	int int_c = 0;
	double double_i = 0;
	unsigned int unsigned_int_c = 0;
	double double_j = 0;
	short short_b = 0;
	unsigned_int_a = unsigned_int_b;
	double_a = sqrt ( double_b ) ;
	double_b = double_a;
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_c = double_b;
			}
		}
		double_d = bam_tag_get_bsstrand(int_a);

		double_c = ldexp ( double_e , int_a ) ;
		return int_b;
	}
	double_d = sinh ( double_b ) ;
	unsigned_int_a = unsigned_int_a;
	double_d = atan2 ( double_a , double_a ) ;
	double_c = atan ( double_c ) ;
	int_a = int_a;
	double_c = tanh ( double_f ) ;
	for(int looper_a=0; looper_a<6;looper_a++)
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		double double_e = 0;
		int int_b = 0;
		double double_f = 0;
		short short_a = 0;
		double double_g = 0;
		float float_a = 0;
		long long_a = 0;
		char char_a = 0;
		double double_h = 0;
		short short_c = 0;
		short short_d = 0;
		long long_b = 0;
		int int_c = 0;
		double double_i = 0;
		unsigned int unsigned_int_c = 0;
		double double_j = 0;
		short short_b = 0;
		short_b = short_a + short_b;
		double_c = atan ( double_c ) ;
		{
			for(int looper_b=0; looper_b<9;looper_b++)
			{
				double_e = acos ( double_a ) ;
				double_e = fabs ( double_g ) ;
				if(1)
				{
					double_d = double_a / double_b;
				}
				if(1)
				{
					double_c = sinh ( double_e ) ;
				}
			}
			float_a = refcache_fetch(long_a,char_a,char_a,short_a);

			double_b = double_f * double_g;
			double_e = exp ( double_b ) ;
			double_b = double_a;
			double_h = ceil ( double_a ) ;
			short_c = refcache_getbase(short_d,float_a);

			long_a = long_a - long_b;
			double_d = tanh ( double_c ) ;
			int_b = int_c;
		}
	}
	double_e = pow ( double_i , double_c ) ;
	if(1)
	{
		int_c = int_b;
	}
	else
	{
		double_b = cosh ( double_g ) ;
		if(1)
		{
			if(1)
			{
				unsigned_int_c = unsigned_int_b / unsigned_int_a;
			}
			else
			{
				double_g = double_a;
			}
		}
		else
		{
			if(1)
			{
				double_f = log ( double_f ) ;
			}
			else
			{
				double_a = cos ( double_h ) ;
			}
		}
	}
	double_d = pow ( double_b , double_c ) ;
	double_b = pow ( double_g , double_d ) ;
	if(1)
	{
		unsigned_int_a = unsigned_int_b;
		if(1)
		{
			double_d = tanh ( double_i ) ;
			if(1)
			{
				double_e = acos ( double_b ) ;
				double_b = cos ( double_d ) ;
			}
		}
		else
		{
			short_d = short_c;
			double_g = atan ( double_a ) ;
		}
	}
	if(1)
	{
		long_a = long_b;
		double_g = exp ( double_a ) ;
	}
	if(1)
	{
		if(1)
		{
			unsigned_int_b = unsigned_int_c / unsigned_int_b;
		}
	}
	double_j = ceil ( double_g ) ;
	return int_a;
}
int bam_filter( char parameter_1,char parameter_2,char parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	float float_b = 0;
	float float_c = 0;
	double double_g = 0;
	float float_d = 0;
	int int_a = 0;
	short short_a = 0;
	short short_b = 0;
	unsigned int unsigned_int_d = 0;
	long long_a = 0;
	long long_b = 0;
	float float_a = 0;
	char char_c = 0;
	long long_c = 0;
	double_a = acos ( double_a ) ;
	double_a = cos ( double_b ) ;
	char_b = char_a + char_a;
	unsigned_int_c = unsigned_int_a + unsigned_int_b;
	if(1)
	{
		char_b = char_b * char_a;
		if(1)
		{
			double_a = fabs ( double_b ) ;
		}
		if(1)
		{
			double_b = sqrt ( double_c ) ;
		}
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		float float_b = 0;
		float float_c = 0;
		double double_g = 0;
		float float_d = 0;
		int int_a = 0;
		short short_a = 0;
		short short_b = 0;
		unsigned int unsigned_int_d = 0;
		long long_a = 0;
		long long_b = 0;
		float float_a = 0;
		char char_c = 0;
		long long_c = 0;
		double_d = fmod ( double_d , double_d ) ;
		if(1)
		{
			double_a = double_a;
		}
		short_b = short_a / short_a;
		double_e = asin ( double_b ) ;
		unsigned_int_c = unsigned_int_a - unsigned_int_d;
		if(1)
		{
			unsigned_int_a = unsigned_int_a;
			double_f = pow ( double_c , double_a ) ;
			double_e = tanh ( double_c ) ;
			double_b = exp ( double_b ) ;
		}
		long_a = long_a / long_b;
		if(1)
		{
			double_d = cos ( double_f ) ;
		}
		float_a = float_a - float_b;
		unsigned_int_c = unsigned_int_b;
		int looper_a = 0;
		while(looper_a < 10)
		{
			looper_a += 1;
			float_c = float_b;
		}
		char_c = char_b;
		double_c = double_g - double_b;
		long_c = long_b + long_b;
	}
	else
	{
		double_b = double_b;
		int looper_b = 0;
		while(looper_b < 8)
		{
			looper_b += 1;
			double_a = double_e;
		}
		double_d = sinh ( double_g ) ;
	}
	if(1)
	{
		double_c = atan ( double_f ) ;
	}
	float_c = float_b / float_d;
	unsigned_int_b = unsigned_int_c;
	if(1)
	{
		double_b = fabs ( double_c ) ;
	}
	return int_a;
}
int main_bsstrand( int parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_c = 0;
	int int_a = 0;
	unsigned int unsigned_int_c = 0;
	double double_d = 0;
	int int_b = 0;
	int int_c = 0;
	int int_d = 0;
	short short_a = 0;
	long long_a = 0;
	short short_b = 0;
	char char_a = 0;
	char char_b = 0;
	short short_c = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	int int_e = 0;
	double double_i = 0;
	float float_a = 0;
	char char_c = 0;
	int int_f = 0;
	float float_b = 0;
	short short_d = 0;
	char char_d = 0;
	char char_e = 0;
	double_a = ceil ( double_b ) ;
	double_b = double_a + double_a;
	unsigned_int_a = unsigned_int_b;
	if(1)
	{
		double_b = cos ( double_c ) ;
		return int_a;
	}
	int looper_a = 0;
	while(looper_a < 4)
	{
		looper_a += 1;
		{
			double_c = tan ( double_a ) ;
			unsigned_int_b = unsigned_int_c;
			double_b = double_d - double_d;
			double_b = sqrt ( double_b ) ;
			return int_b;
			int_d = int_a / int_c;
		}
	}
	?:
	short_a = short_a / short_a;
	?:
	double_d = exp ( double_a ) ;
	?:
	long_a = long_a;
	if(1)
	{
		double_c = fabs ( double_a ) ;
		short_b = short_a;
	}
	int_d = bam_filter(char_a,char_a,char_b);

	unsigned_int_c = unsigned_int_a;
	double_c = sqrt ( double_c ) ;
	unsigned_int_b = unsigned_int_a;
	short_c = short_b;
	double_d = atan ( double_b ) ;
	double_c = ceil ( double_e ) ;
	free_refcache(unsigned_int_b);

	char_a = char_b;
	short_a = short_c;
	double_d = fmod ( double_f , double_f ) ;
	double_a = fmod ( double_e , double_d ) ;
	int_d = usage(double_c);

	double_f = asin ( double_g ) ;
	for(int looper_b=0; looper_b<1;looper_b++)
	{
		double_h = fabs ( double_h ) ;
	}
	unsigned_int_b = unsigned_int_c + unsigned_int_c;
	int_e = int_e * int_a;
	for(int looper_c=0; looper_c<2;looper_c++)
	{
		int_d = int_e;
	}
	double_i = fabs ( double_a ) ;
	init_refcache(char_b,float_a,int_e);

	char_c = char_a;
	for(int looper_d=0; looper_d<7;looper_d++)
	{
		int_f = bsstrand_func(unsigned_int_c,float_b,short_b);

		double_d = double_h;
	}
	double_g = double_c;
	double_a = ldexp ( double_h , int_c ) ;
	for(int looper_e=0; looper_e<8;looper_e++)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_c = 0;
		int int_a = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		int int_b = 0;
		int int_c = 0;
		int int_d = 0;
		short short_a = 0;
		long long_a = 0;
		short short_b = 0;
		char char_a = 0;
		char char_b = 0;
		short short_c = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		int int_e = 0;
		double double_i = 0;
		float float_a = 0;
		char char_c = 0;
		int int_f = 0;
		float float_b = 0;
		short short_d = 0;
		char char_d = 0;
		char char_e = 0;
		char_e = char_c * char_d;
	}
	short_b = short_d;
	float_a = float_a;
	double_a = log ( double_b ) ;
	return int_a;
}
long btv_destroy( char parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_c = 0;
	long long_a = 0;
	double double_d = 0;
	if(1)
	{
		double_a = fabs ( double_b ) ;
	}
	if(1)
	{
		double_c = double_a;
	}
	unsigned_int_a = unsigned_int_b;
	char_a = char_b;
	double_b = log10 ( double_a ) ;
	double_c = tanh ( double_b ) ;
	int_a = int_a;
	unsigned_int_c = unsigned_int_b;
	reset_rnode_v(long_a);

	double_b = cos ( double_d ) ;
	double_c = double_d;
	double_d = atan ( double_d ) ;
}
float btv_win_goto( unsigned int parameter_1,int parameter_2,int parameter_3)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_b = 0;
	int int_a = 0;
	float float_a = 0;
	float float_b = 0;
	int int_b = 0;
	char char_a = 0;
	double double_c = 0;
	double double_e = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_f = 0;
	unsigned int unsigned_int_b = 0;
	short short_a = 0;
	short short_b = 0;
	float float_c = 0;
	double double_d = 0;
	int int_c = 0;
	unsigned int unsigned_int_e = 0;
	char char_b = 0;
	double_a = double_a;
	unsigned_int_a = unsigned_int_a - unsigned_int_a;
	double_b = asin ( double_b ) ;
	int_a = int_a;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_b = 0;
		int int_a = 0;
		float float_a = 0;
		float float_b = 0;
		int int_b = 0;
		char char_a = 0;
		double double_c = 0;
		double double_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		short short_a = 0;
		short short_b = 0;
		float float_c = 0;
		double double_d = 0;
		int int_c = 0;
		unsigned int unsigned_int_e = 0;
		char char_b = 0;
		double_a = floor ( double_a ) ;
		int_b = int_a;
		char_a = char_a;
		if(1)
		{
			if(1)
			{
				double_a = exp ( double_c ) ;
			}
		}
		if(1)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			double double_b = 0;
			int int_a = 0;
			float float_a = 0;
			float float_b = 0;
			int int_b = 0;
			char char_a = 0;
			double double_c = 0;
			double double_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			short short_a = 0;
			short short_b = 0;
			float float_c = 0;
			double double_d = 0;
			int int_c = 0;
			unsigned int unsigned_int_e = 0;
			char char_b = 0;
			unsigned_int_b = unsigned_int_b;
			if(1)
			{
				double_c = asin ( double_a ) ;
				if(1)
				{
					double double_a = 0;
					unsigned int unsigned_int_a = 0;
					double double_b = 0;
					int int_a = 0;
					float float_a = 0;
					float float_b = 0;
					int int_b = 0;
					char char_a = 0;
					double double_c = 0;
					double double_e = 0;
					unsigned int unsigned_int_c = 0;
					unsigned int unsigned_int_d = 0;
					double double_f = 0;
					unsigned int unsigned_int_b = 0;
					short short_a = 0;
					short short_b = 0;
					float float_c = 0;
					double double_d = 0;
					int int_c = 0;
					unsigned int unsigned_int_e = 0;
					char char_b = 0;
					short_b = short_a - short_a;
					return float_a;
				}
			}
			else
			{
				double double_a = 0;
				unsigned int unsigned_int_a = 0;
				double double_b = 0;
				int int_a = 0;
				float float_a = 0;
				float float_b = 0;
				int int_b = 0;
				char char_a = 0;
				double double_c = 0;
				double double_e = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_f = 0;
				unsigned int unsigned_int_b = 0;
				short short_a = 0;
				short short_b = 0;
				float float_c = 0;
				double double_d = 0;
				int int_c = 0;
				unsigned int unsigned_int_e = 0;
				char char_b = 0;
				float_c = float_a * float_b;
				if(1)
				{
					double double_a = 0;
					unsigned int unsigned_int_a = 0;
					double double_b = 0;
					int int_a = 0;
					float float_a = 0;
					float float_b = 0;
					int int_b = 0;
					char char_a = 0;
					double double_c = 0;
					double double_e = 0;
					unsigned int unsigned_int_c = 0;
					unsigned int unsigned_int_d = 0;
					double double_f = 0;
					unsigned int unsigned_int_b = 0;
					short short_a = 0;
					short short_b = 0;
					float float_c = 0;
					double double_d = 0;
					int int_c = 0;
					unsigned int unsigned_int_e = 0;
					char char_b = 0;
					double_b = log ( double_a ) ;
					double_b = asin ( double_c ) ;
					double_a = pow ( double_b , double_a ) ;
					double_c = exp ( double_d ) ;
				}
				else
				{
					double_e = ldexp ( double_c , int_b ) ;
					unsigned_int_d = unsigned_int_c * unsigned_int_c;
				}
				if(1)
				{
					double double_a = 0;
					unsigned int unsigned_int_a = 0;
					double double_b = 0;
					int int_a = 0;
					float float_a = 0;
					float float_b = 0;
					int int_b = 0;
					char char_a = 0;
					double double_c = 0;
					double double_e = 0;
					unsigned int unsigned_int_c = 0;
					unsigned int unsigned_int_d = 0;
					double double_f = 0;
					unsigned int unsigned_int_b = 0;
					short short_a = 0;
					short short_b = 0;
					float float_c = 0;
					double double_d = 0;
					int int_c = 0;
					unsigned int unsigned_int_e = 0;
					char char_b = 0;
					int_a = int_c + int_c;
					double_c = ceil ( double_b ) ;
					return float_b;
				}
			}
			double_a = atan ( double_e ) ;
		}
		if(1)
		{
			if(1)
			{
				double_e = tanh ( double_b ) ;
			}
		}
		char controller_j[2];
		scanf("%2s", controller_j);
		if( controller_j >"5|" )
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			double double_b = 0;
			int int_a = 0;
			float float_a = 0;
			float float_b = 0;
			int int_b = 0;
			char char_a = 0;
			double double_c = 0;
			double double_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			short short_a = 0;
			short short_b = 0;
			float float_c = 0;
			double double_d = 0;
			int int_c = 0;
			unsigned int unsigned_int_e = 0;
			char char_b = 0;
			unsigned_int_e = unsigned_int_d * unsigned_int_c;
		}
		if(1)
		{
			return float_a;
		}
		double_f = atan ( double_f ) ;
		for(int looper_b=0; looper_b<2;looper_b++)
		{
			double_b = fabs ( double_c ) ;
		}
		if(1)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			double double_b = 0;
			int int_a = 0;
			float float_a = 0;
			float float_b = 0;
			int int_b = 0;
			char char_a = 0;
			double double_c = 0;
			double double_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			short short_a = 0;
			short short_b = 0;
			float float_c = 0;
			double double_d = 0;
			int int_c = 0;
			unsigned int unsigned_int_e = 0;
			char char_b = 0;
			char_b = char_b * char_b;
		}
		unsigned_int_a = unsigned_int_c;
	}
}
int btv_win_help( float parameter_1)
{
	char char_a = 0;
	double double_a = 0;
	float float_a = 0;
	float float_b = 0;
	short short_a = 0;
	short short_b = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	float float_c = 0;
	int int_a = 0;
	double double_d = 0;
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_e = 0;
	int int_b = 0;
	long long_c = 0;
	double double_f = 0;
	double double_g = 0;
	unsigned int unsigned_int_d = 0;
	double double_h = 0;
	char_a = char_a + char_a;
	double_a = atan ( double_a ) ;
	float_b = float_a / float_a;
	short_a = short_a - short_b;
	double_b = fabs ( double_b ) ;
	double_a = fabs ( double_a ) ;
	double_b = double_c * double_b;
	unsigned_int_a = unsigned_int_a - unsigned_int_b;
	float_c = float_b - float_a;
	double_b = fmod ( double_c , double_a ) ;
	double_b = ldexp ( double_c , int_a ) ;
	double_d = double_c;
	long_b = long_a - long_a;
	unsigned_int_c = unsigned_int_c / unsigned_int_c;
	double_e = sinh ( double_e ) ;
	double_c = exp ( double_a ) ;
	int_b = int_a;
	long_c = long_b;
	long_c = long_c;
	double_e = double_f / double_e;
	double_b = cos ( double_d ) ;
	unsigned_int_a = unsigned_int_c;
	double_f = log ( double_f ) ;
	double_e = double_a * double_e;
	double_f = log10 ( double_a ) ;
	double_a = atan2 ( double_f , double_f ) ;
	double_g = fabs ( double_b ) ;
	double_c = tan ( double_e ) ;
	unsigned_int_d = unsigned_int_a;
	double_e = cosh ( double_h ) ;
}
char btv_loop( float parameter_1)
{
	double double_a = 0;
	float float_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	char char_b = 0;
	int int_d = 0;
	short short_c = 0;
	long long_b = 0;
	double double_b = 0;
	char char_a = 0;
	char char_c = 0;
	int int_e = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	float float_a = 0;
	long long_a = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	float float_c = 0;
	double double_k = 0;
	double double_l = 0;
	double double_m = 0;
	float float_d = 0;
	short short_b = 0;
	unsigned int unsigned_int_c = 0;
	short short_d = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	long long_c = 0;
	double_a = ceil ( double_a ) ;
	int looper_a = 0;
	while(looper_a < 2)
	{
		double double_a = 0;
		float float_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		char char_b = 0;
		int int_d = 0;
		short short_c = 0;
		long long_b = 0;
		double double_b = 0;
		char char_a = 0;
		char char_c = 0;
		int int_e = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		float float_a = 0;
		long long_a = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		float float_c = 0;
		double double_k = 0;
		double double_l = 0;
		double double_m = 0;
		float float_d = 0;
		short short_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_d = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		long long_c = 0;
		looper_a += 1;
		double_b = sqrt ( double_b ) ;
		double_a = fmod ( double_a , double_b ) ;
		{
			double double_a = 0;
			float float_b = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_b = 0;
			int int_c = 0;
			char char_b = 0;
			int int_d = 0;
			short short_c = 0;
			long long_b = 0;
			double double_b = 0;
			char char_a = 0;
			char char_c = 0;
			int int_e = 0;
			double double_c = 0;
			double double_d = 0;
			short short_a = 0;
			float float_a = 0;
			long long_a = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			float float_c = 0;
			double double_k = 0;
			double double_l = 0;
			double double_m = 0;
			float float_d = 0;
			short short_b = 0;
			unsigned int unsigned_int_c = 0;
			short short_d = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			long long_c = 0;
			double_c = double_d;
			short_a = short_a;
			float_b = float_a * float_a;
			double_b = cosh ( double_d ) ;
			long_a = long_a / long_a;
			double_d = atan ( double_b ) ;
			double_c = ldexp ( double_e , int_a ) ;
			double_e = double_a * double_e;
			double_c = pow ( double_f , double_g ) ;
			unsigned_int_a = btv_init_colors(int_b);

			double_h = floor ( double_g ) ;
			if(1)
			{
				unsigned_int_b = unsigned_int_a * unsigned_int_a;
			}
			float_b = btv_win_goto(unsigned_int_b,int_c,int_a);

			double_b = cosh ( double_c ) ;
			if(1)
			{
				double_h = double_d;
			}
			double_i = asin ( double_i ) ;
			unsigned_int_a = unsigned_int_a + unsigned_int_b;
			unsigned_int_a = unsigned_int_a;
			char_a = char_b;
			double_j = tanh ( double_i ) ;
			double_i = log10 ( double_i ) ;
			float_c = float_b;
			char_a = char_c + char_b;
			unsigned_int_b = unsigned_int_b;
			double_a = ceil ( double_b ) ;
			double_h = atan2 ( double_j , double_k ) ;
			int_a = int_b;
			double_l = ceil ( double_m ) ;
			double_k = fmod ( double_d , double_m ) ;
			double_k = tan ( double_f ) ;
			double_h = sinh ( double_h ) ;
			int_d = int_d - int_c;
			double_l = tanh ( double_c ) ;
			float_d = float_c;
			short_b = short_c;
			unsigned_int_a = unsigned_int_c * unsigned_int_a;
			double_a = fabs ( double_d ) ;
			short_d = short_a;
			short_c = btv_drawaln(long_b,int_d,610);

			unsigned_int_d = unsigned_int_e;
		}
		if(1)
		{
			int_a = btv_win_help(float_b);

			char_c = char_a;
		}
		if(1)
		{
			double double_a = 0;
			float float_b = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_b = 0;
			int int_c = 0;
			char char_b = 0;
			int int_d = 0;
			short short_c = 0;
			long long_b = 0;
			double double_b = 0;
			char char_a = 0;
			char char_c = 0;
			int int_e = 0;
			double double_c = 0;
			double double_d = 0;
			short short_a = 0;
			float float_a = 0;
			long long_a = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			float float_c = 0;
			double double_k = 0;
			double double_l = 0;
			double double_m = 0;
			float float_d = 0;
			short short_b = 0;
			unsigned int unsigned_int_c = 0;
			short short_d = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			long long_c = 0;
			long_b = long_c;
		}
		int_d = int_e - int_c;
	}
	return char_b;
}
char draw_read1( long parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	int int_b = 0;
	float float_a = 0;
	float float_b = 0;
	int int_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_g = 0;
	int int_d = 0;
	double double_h = 0;
	float float_c = 0;
	float float_d = 0;
	int int_e = 0;
	short short_a = 0;
	short short_b = 0;
	long long_a = 0;
	double double_f = 0;
	long long_b = 0;
	char char_a = 0;
	char char_b = 0;
	double_a = atan ( double_b ) ;
	double_a = atan ( double_b ) ;
	double_c = exp ( double_c ) ;
	unsigned_int_a = unsigned_int_a;
	double_b = ldexp ( double_b , int_a ) ;
	int_a = int_b;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		int int_b = 0;
		float float_a = 0;
		float float_b = 0;
		int int_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_g = 0;
		int int_d = 0;
		double double_h = 0;
		float float_c = 0;
		float float_d = 0;
		int int_e = 0;
		short short_a = 0;
		short short_b = 0;
		long long_a = 0;
		double double_f = 0;
		long long_b = 0;
		char char_a = 0;
		char char_b = 0;
		float_b = float_a + float_b;
		int_a = int_c;
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			int int_b = 0;
			float float_a = 0;
			float float_b = 0;
			int int_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_g = 0;
			int int_d = 0;
			double double_h = 0;
			float float_c = 0;
			float float_d = 0;
			int int_e = 0;
			short short_a = 0;
			short short_b = 0;
			long long_a = 0;
			double double_f = 0;
			long long_b = 0;
			char char_a = 0;
			char char_b = 0;
			for(int looper_b=0; looper_b<8;looper_b++)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				int int_a = 0;
				int int_b = 0;
				float float_a = 0;
				float float_b = 0;
				int int_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_g = 0;
				int int_d = 0;
				double double_h = 0;
				float float_c = 0;
				float float_d = 0;
				int int_e = 0;
				short short_a = 0;
				short short_b = 0;
				long long_a = 0;
				double double_f = 0;
				long long_b = 0;
				char char_a = 0;
				char char_b = 0;
				if(1)
				{
				}
				double_b = sinh ( double_d ) ;
				short_a = short_a / short_b;
				double_a = log10 ( double_c ) ;
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					unsigned int unsigned_int_a = 0;
					int int_a = 0;
					int int_b = 0;
					float float_a = 0;
					float float_b = 0;
					int int_c = 0;
					double double_d = 0;
					double double_e = 0;
					double double_g = 0;
					int int_d = 0;
					double double_h = 0;
					float float_c = 0;
					float float_d = 0;
					int int_e = 0;
					short short_a = 0;
					short short_b = 0;
					long long_a = 0;
					double double_f = 0;
					long long_b = 0;
					char char_a = 0;
					char char_b = 0;
					double_b = exp ( double_a ) ;
					if(1)
					{
						if(1)
						{
							double_c = exp ( double_e ) ;
						}
						if(1)
						{
							double_c = cos ( double_c ) ;
							double_e = tanh ( double_f ) ;
						}
					}
					if(1)
					{
						char controller_g[3];
						scanf("%3s", controller_g);
						if( controller_g >"`7m" )
						{
							double_f = pow ( double_g , double_a ) ;
						}
						if(1)
						{
							long_a = long_a;
							int_a = int_a;
						}
					}
					if(1)
					{
						double_f = atan2 ( double_e , double_f ) ;
					}
				}
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					unsigned int unsigned_int_a = 0;
					int int_a = 0;
					int int_b = 0;
					float float_a = 0;
					float float_b = 0;
					int int_c = 0;
					double double_d = 0;
					double double_e = 0;
					double double_g = 0;
					int int_d = 0;
					double double_h = 0;
					float float_c = 0;
					float float_d = 0;
					int int_e = 0;
					short short_a = 0;
					short short_b = 0;
					long long_a = 0;
					double double_f = 0;
					long long_b = 0;
					char char_a = 0;
					char char_b = 0;
					long_b = long_a;
				}
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					unsigned int unsigned_int_a = 0;
					int int_a = 0;
					int int_b = 0;
					float float_a = 0;
					float float_b = 0;
					int int_c = 0;
					double double_d = 0;
					double double_e = 0;
					double double_g = 0;
					int int_d = 0;
					double double_h = 0;
					float float_c = 0;
					float float_d = 0;
					int int_e = 0;
					short short_a = 0;
					short short_b = 0;
					long long_a = 0;
					double double_f = 0;
					long long_b = 0;
					char char_a = 0;
					char char_b = 0;
					char_b = char_a / char_a;
					char controller_l[1];
					scanf("%1s", controller_l);
					if( controller_l <" " )
					{
						int_d = int_d * int_a;
					}
					double_g = exp ( double_d ) ;
				}
				double_g = fabs ( double_b ) ;
				if(1)
				{
					?:
					double_g = acos ( double_d ) ;
				}
				else
				{
					?:
					int_a = int_a;
				}
				int_c = int_d;
			}
			double_h = double_g;
			float_c = float_c;
			double_d = ldexp ( double_e , int_a ) ;
			for(int looper_c=0; looper_c<1;looper_c++)
			{
				int_c = int_b;
			}
			float_b = float_d - float_c;
			double_c = sinh ( double_b ) ;
			int_d = int_e;
		}
	}
}
int sam_short_format1( long parameter_1,unsigned int parameter_2)
{
	char char_a = 0;
	int int_a = 0;
	long long_a = 0;
	short short_a = 0;
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_b = 0;
	short short_b = 0;
	int int_b = 0;
	float float_a = 0;
	double double_c = 0;
	short short_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	long long_b = 0;
	int int_c = 0;
	char char_c = 0;
	double double_h = 0;
	int int_e = 0;
	double double_i = 0;
	char char_b = 0;
	double double_g = 0;
	long long_c = 0;
	int int_d = 0;
	char_a = kputw(int_a,long_a);

	short_a = short_a / short_a;
	double_a = double_a;
	unsigned_int_a = unsigned_int_a - unsigned_int_a;
	double_a = fmod ( double_b , double_b ) ;
	double_a = double_a - double_b;
	short_b = short_b;
	unsigned_int_a = unsigned_int_a;
	if(1)
	{
		unsigned_int_a = kputc(int_b,float_a);

		double_a = fmod ( double_c , double_c ) ;
		float_a = kputs(short_b,short_c);

		double_b = double_c;
	}
	else
	{
		double_d = ceil ( double_e ) ;
	}
	double_e = log10 ( double_f ) ;
	double_e = double_d;
	long_b = long_a + long_b;
	double_b = asin ( double_a ) ;
	if(1)
	{
		char char_a = 0;
		int int_a = 0;
		long long_a = 0;
		short short_a = 0;
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_b = 0;
		short short_b = 0;
		int int_b = 0;
		float float_a = 0;
		double double_c = 0;
		short short_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		long long_b = 0;
		int int_c = 0;
		char char_c = 0;
		double double_h = 0;
		int int_e = 0;
		double double_i = 0;
		char char_b = 0;
		double double_g = 0;
		long long_c = 0;
		int int_d = 0;
		char_b = char_b;
		for(int looper_a=0; looper_a<5;looper_a++)
		{
			char char_a = 0;
			int int_a = 0;
			long long_a = 0;
			short short_a = 0;
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			double double_b = 0;
			short short_b = 0;
			int int_b = 0;
			float float_a = 0;
			double double_c = 0;
			short short_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			long long_b = 0;
			int int_c = 0;
			char char_c = 0;
			double double_h = 0;
			int int_e = 0;
			double double_i = 0;
			char char_b = 0;
			double double_g = 0;
			long long_c = 0;
			int int_d = 0;
			double_g = sqrt ( double_c ) ;
			short_b = short_c - short_b;
		}
	}
	else
	{
		double_c = kputsn(unsigned_int_a,int_c,char_c);

		char_c = char_a;
	}
	float_a = float_a;
	if(1)
	{
		char char_a = 0;
		int int_a = 0;
		long long_a = 0;
		short short_a = 0;
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_b = 0;
		short short_b = 0;
		int int_b = 0;
		float float_a = 0;
		double double_c = 0;
		short short_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		long long_b = 0;
		int int_c = 0;
		char char_c = 0;
		double double_h = 0;
		int int_e = 0;
		double double_i = 0;
		char char_b = 0;
		double double_g = 0;
		long long_c = 0;
		int int_d = 0;
		long_c = long_b;
	}
	if(1)
	{
		double_h = sinh ( double_e ) ;
	}
	else
	{
		char char_a = 0;
		int int_a = 0;
		long long_a = 0;
		short short_a = 0;
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_b = 0;
		short short_b = 0;
		int int_b = 0;
		float float_a = 0;
		double double_c = 0;
		short short_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		long long_b = 0;
		int int_c = 0;
		char char_c = 0;
		double double_h = 0;
		int int_e = 0;
		double double_i = 0;
		char char_b = 0;
		double double_g = 0;
		long long_c = 0;
		int int_d = 0;
		int_a = int_d * int_e;
		double_c = double_b / double_h;
	}
	double_d = atan ( double_c ) ;
	long_b = long_a;
	double_i = ceil ( double_i ) ;
	double_i = double_b + double_e;
	return int_e;
}
double vmvprintw( short parameter_1,int parameter_2,int parameter_3,long parameter_4,long parameter_5)
{
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	double double_b = 0;
	double double_c = 0;
	char char_a = 0;
	char char_b = 0;
	int int_d = 0;
	double double_a = 0;
	int_a = int_a - int_b;
	int_a = int_a / int_c;
	char controller_a[3];
	scanf("%3s", controller_a);
	if( controller_a <"~ C" )
	{
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		double double_b = 0;
		double double_c = 0;
		char char_a = 0;
		char char_b = 0;
		int int_d = 0;
		double double_a = 0;
		double_a = log10 ( double_a ) ;
	}
	double_b = log ( double_b ) ;
	double_b = sqrt ( double_b ) ;
	double_c = floor ( double_c ) ;
	char_b = char_a + char_b;
	int_d = int_b;
	double_c = cos ( double_b ) ;
}
int set_row_update_endposes( long parameter_1,float parameter_2,int parameter_3)
{
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	double double_a = 0;
	double double_c = 0;
	double double_e = 0;
	int int_d = 0;
	double double_b = 0;
	double double_d = 0;
	unsigned int unsigned_int_b = 0;
	double double_f = 0;
	int int_e = 0;
	short short_a = 0;
	short short_b = 0;
	int int_f = 0;
	double double_g = 0;
	float float_a = 0;
	float float_b = 0;
	unsigned_int_a = unsigned_int_a;
	int_b = int_a / int_a;
	if(1)
	{
		return int_c;
	}
	double_a = exp ( double_a ) ;
	int looper_a = 0;
	while(looper_a < 1)
	{
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		double double_a = 0;
		double double_c = 0;
		double double_e = 0;
		int int_d = 0;
		double double_b = 0;
		double double_d = 0;
		unsigned int unsigned_int_b = 0;
		double double_f = 0;
		int int_e = 0;
		short short_a = 0;
		short short_b = 0;
		int int_f = 0;
		double double_g = 0;
		float float_a = 0;
		float float_b = 0;
		looper_a += 1;
		double_b = log ( double_a ) ;
		double_b = double_a - double_c;
		if(1)
		{
			if(1)
			{
				unsigned int unsigned_int_a = 0;
				int int_a = 0;
				int int_b = 0;
				int int_c = 0;
				double double_a = 0;
				double double_c = 0;
				double double_e = 0;
				int int_d = 0;
				double double_b = 0;
				double double_d = 0;
				unsigned int unsigned_int_b = 0;
				double double_f = 0;
				int int_e = 0;
				short short_a = 0;
				short short_b = 0;
				int int_f = 0;
				double double_g = 0;
				float float_a = 0;
				float float_b = 0;
				if(1)
				{
					unsigned int unsigned_int_a = 0;
					int int_a = 0;
					int int_b = 0;
					int int_c = 0;
					double double_a = 0;
					double double_c = 0;
					double double_e = 0;
					int int_d = 0;
					double double_b = 0;
					double double_d = 0;
					unsigned int unsigned_int_b = 0;
					double double_f = 0;
					int int_e = 0;
					short short_a = 0;
					short short_b = 0;
					int int_f = 0;
					double double_g = 0;
					float float_a = 0;
					float float_b = 0;
					unsigned_int_b = unsigned_int_a - unsigned_int_a;
					double_b = double_c;
					double_b = log10 ( double_a ) ;
					int looper_b = 0;
					while(looper_b < 3)
					{
						looper_b += 1;
						double_a = sinh ( double_b ) ;
					}
					double_d = floor ( double_e ) ;
					double_c = double_e;
					double_c = ldexp ( double_f , int_d ) ;
					double_c = atan2 ( double_a , double_a ) ;
					int_e = int_d + int_e;
					double_b = double_d;
				}
				else
				{
					unsigned int unsigned_int_a = 0;
					int int_a = 0;
					int int_b = 0;
					int int_c = 0;
					double double_a = 0;
					double double_c = 0;
					double double_e = 0;
					int int_d = 0;
					double double_b = 0;
					double double_d = 0;
					unsigned int unsigned_int_b = 0;
					double double_f = 0;
					int int_e = 0;
					short short_a = 0;
					short short_b = 0;
					int int_f = 0;
					double double_g = 0;
					float float_a = 0;
					float float_b = 0;
					short_a = short_b;
					if(1)
					{
					}
					int_f = int_c;
					double_g = exp ( double_b ) ;
					float_a = float_a / float_b;
					double_b = floor ( double_d ) ;
				}
			}
		}
	}
	double_e = cosh ( double_c ) ;
	return int_d;
}
float screen_layout_reads( unsigned int parameter_1)
{
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	float float_a = 0;
	int_b = int_a / int_b;
	double_a = floor ( double_b ) ;
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		double_b = floor ( double_b ) ;
	}
	int_b = set_row_update_endposes(long_a,float_a,int_b);

	double_b = sinh ( double_b ) ;
}
void reset_rnode_v( long parameter_1)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	double double_a = 0;
	unsigned_int_a = unsigned_int_a * unsigned_int_b;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_a = 0;
		double_a = cos ( double_a ) ;
		double_a = double_a;
	}
	double_b = fabs ( double_b ) ;
}
float btv_reload_data( char parameter_1)
{
	float float_a = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	float float_b = 0;
	double double_e = 0;
	double double_f = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	float float_d = 0;
	double double_g = 0;
	int int_c = 0;
	double double_j = 0;
	int int_d = 0;
	float float_c = 0;
	long long_b = 0;
	long long_c = 0;
	unsigned int unsigned_int_b = 0;
	double double_h = 0;
	double double_i = 0;
	int int_b = 0;
	if(1)
	{
		return float_a;
	}
	reset_rnode_v(long_a);

	double_a = exp ( double_a ) ;
	double_b = pow ( double_c , double_d ) ;
	double_d = ldexp ( double_a , int_a ) ;
	if(1)
	{
		float float_a = 0;
		long long_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		float float_b = 0;
		double double_e = 0;
		double double_f = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		float float_d = 0;
		double double_g = 0;
		int int_c = 0;
		double double_j = 0;
		int int_d = 0;
		float float_c = 0;
		long long_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		double double_i = 0;
		int int_b = 0;
		unsigned_int_a = unsigned_int_a + unsigned_int_a;
		if(1)
		{
			float float_a = 0;
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			float float_b = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			float float_d = 0;
			double double_g = 0;
			int int_c = 0;
			double double_j = 0;
			int int_d = 0;
			float float_c = 0;
			long long_b = 0;
			long long_c = 0;
			unsigned int unsigned_int_b = 0;
			double double_h = 0;
			double double_i = 0;
			int int_b = 0;
			unsigned_int_b = unsigned_int_a;
			unsigned_int_b = unsigned_int_a;
		}
		double_d = log10 ( double_d ) ;
		float_c = float_b + float_a;
		long_b = long_c;
		double_c = fabs ( double_d ) ;
		double_a = tan ( double_a ) ;
		double_d = fmod ( double_d , double_e ) ;
		if(1)
		{
			double_b = floor ( double_f ) ;
		}
	}
	unsigned_int_a = unsigned_int_c / unsigned_int_d;
	float_d = float_a + float_b;
	double_a = log ( double_g ) ;
	double_c = double_f;
	double_a = floor ( double_a ) ;
	double_f = atan2 ( double_e , double_f ) ;
	int looper_a = 0;
	while(looper_a < 5)
	{
		float float_a = 0;
		long long_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		float float_b = 0;
		double double_e = 0;
		double double_f = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		float float_d = 0;
		double double_g = 0;
		int int_c = 0;
		double double_j = 0;
		int int_d = 0;
		float float_c = 0;
		long long_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		double double_i = 0;
		int int_b = 0;
		looper_a += 1;
		if(1)
		{
			float float_a = 0;
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			float float_b = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			float float_d = 0;
			double double_g = 0;
			int int_c = 0;
			double double_j = 0;
			int int_d = 0;
			float float_c = 0;
			long long_b = 0;
			long long_c = 0;
			unsigned int unsigned_int_b = 0;
			double double_h = 0;
			double double_i = 0;
			int int_b = 0;
			int_b = int_c;
			double_c = cos ( double_b ) ;
		}
		if(1)
		{
			int_a = int_a;
			if(1)
			{
			}
		}
		unsigned_int_d = unsigned_int_a / unsigned_int_a;
		unsigned_int_a = unsigned_int_c + unsigned_int_c;
		double_h = sinh ( double_i ) ;
	}
	double_g = sinh ( double_j ) ;
	int_c = int_d;
}
short btv_drawaln( long parameter_1,int parameter_2,int uni_para)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	int int_d = 0;
	double double_c = 0;
	double double_d = 0;
	char char_a = 0;
	long long_a = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	float float_a = 0;
	float float_b = 0;
	int int_b = 0;
	double double_i = 0;
	float float_c = 0;
	float float_d = 0;
	long long_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_j = 0;
	unsigned_int_a = unsigned_int_a * unsigned_int_a;
	double_a = double_b;
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		int int_d = 0;
		double double_c = 0;
		double double_d = 0;
		char char_a = 0;
		long long_a = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		float float_a = 0;
		float float_b = 0;
		int int_b = 0;
		double double_i = 0;
		float float_c = 0;
		float float_d = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_j = 0;
		double_a = exp ( double_b ) ;
		int_a = int_a + int_b;
	}
	unsigned_int_a = unsigned_int_b;
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		int_c = int_d;
		if(1)
		{
			double_a = fabs ( double_c ) ;
		}
	}
	char controller4vul_d[2];
	scanf("%2s", controller4vul_d);
	if( controller4vul_d >"c(" )
	{
		for(int looper_b=0; looper_b<1;looper_b++)
		{
			double_d = fmod ( double_b , double_a ) ;
			char_a = char_a;
			double_d = double_d;
			if(1)
			{
				double_a = atan ( double_b ) ;
			}
			char controller4vul_e[4];
			scanf("%4s", controller4vul_e);
			if( controller4vul_e >"je(/" )
			{
				char controller4vul_f[4];
				scanf("%4s", controller4vul_f);
				if( controller4vul_f <"<_ZR" )
				{
					char controller4vul_g[5];
					scanf("%5s", controller4vul_g);
					if( controller4vul_g >"xCKqh" )
					{
						char_a = get_bsstrand(unsigned_int_a,long_a,unsigned_int_b,uni_para);

						double_c = sinh ( double_b ) ;
					}
					else
					{
						double_c = double_c / double_d;
					}
				}
				if(1)
				{
					if(1)
					{
						double_d = log ( double_d ) ;
					}
					else
					{
						double_a = double_e;
					}
				}
			}
			double_a = cos ( double_d ) ;
			double_d = double_f * double_a;
			double_g = sinh ( double_h ) ;
		}
	}
	else
	{
		for(int looper_c=0; looper_c<9;looper_c++)
		{
			double_f = ldexp ( double_f , int_c ) ;
		}
	}
	float_a = float_a / float_b;
	for(int looper_d=0; looper_d<5;looper_d++)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		int int_d = 0;
		double double_c = 0;
		double double_d = 0;
		char char_a = 0;
		long long_a = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		float float_a = 0;
		float float_b = 0;
		int int_b = 0;
		double double_i = 0;
		float float_c = 0;
		float float_d = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_j = 0;
		double_i = exp ( double_c ) ;
		float_d = float_c + float_a;
		long_a = long_a / long_b;
		double_i = pow ( double_g , double_d ) ;
		if(1)
		{
			unsigned int unsigned_int_a = 0;
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_c = 0;
			int int_d = 0;
			double double_c = 0;
			double double_d = 0;
			char char_a = 0;
			long long_a = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			float float_a = 0;
			float float_b = 0;
			int int_b = 0;
			double double_i = 0;
			float float_c = 0;
			float float_d = 0;
			long long_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_j = 0;
			unsigned_int_c = unsigned_int_a - unsigned_int_b;
			if(1)
			{
				double_e = fabs ( double_c ) ;
				if(1)
				{
					int_c = int_a;
				}
				int_a = int_d - int_a;
			}
			if(1)
			{
				double_e = atan2 ( double_h , double_i ) ;
			}
			if(1)
			{
				unsigned_int_a = unsigned_int_b;
			}
			if(1)
			{
				unsigned int unsigned_int_a = 0;
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_c = 0;
				int int_d = 0;
				double double_c = 0;
				double double_d = 0;
				char char_a = 0;
				long long_a = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				double double_h = 0;
				float float_a = 0;
				float float_b = 0;
				int int_b = 0;
				double double_i = 0;
				float float_c = 0;
				float float_d = 0;
				long long_b = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_j = 0;
				unsigned_int_d = unsigned_int_a - unsigned_int_a;
				double_i = ldexp ( double_g , int_d ) ;
				double_g = sqrt ( double_a ) ;
			}
			if(1)
			{
				unsigned int unsigned_int_a = 0;
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_c = 0;
				int int_d = 0;
				double double_c = 0;
				double double_d = 0;
				char char_a = 0;
				long long_a = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				double double_h = 0;
				float float_a = 0;
				float float_b = 0;
				int int_b = 0;
				double double_i = 0;
				float float_c = 0;
				float float_d = 0;
				long long_b = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_j = 0;
				double_d = log10 ( double_i ) ;
				double_g = sqrt ( double_j ) ;
				int_d = int_d;
			}
			else
			{
				double_b = ceil ( double_g ) ;
			}
		}
	}
}
unsigned int btv_init_colors( int parameter_1)
{
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	long long_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_d = 0;
	double double_e = 0;
	int int_c = 0;
	char char_c = 0;
	double double_f = 0;
	if(1)
	{
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		long long_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_d = 0;
		double double_e = 0;
		int int_c = 0;
		char char_c = 0;
		double double_f = 0;
		int_a = int_a / int_b;
		char_b = char_a / char_a;
		double_a = ceil ( double_b ) ;
		double_a = double_b;
		double_b = double_b;
		double_b = exp ( double_a ) ;
		double_c = log10 ( double_b ) ;
		long_a = long_a;
		unsigned_int_a = unsigned_int_b;
	}
	else
	{
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		long long_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_d = 0;
		double double_e = 0;
		int int_c = 0;
		char char_c = 0;
		double double_f = 0;
		double_c = exp ( double_a ) ;
		double_a = sinh ( double_d ) ;
		double_e = double_a - double_e;
		double_a = ldexp ( double_e , int_a ) ;
		int_b = int_c;
		char_a = char_b + char_c;
		unsigned_int_c = unsigned_int_c + unsigned_int_b;
		double_b = fabs ( double_b ) ;
		double_d = atan ( double_f ) ;
	}
	return unsigned_int_c;
}
double btv_init( int parameter_1,float parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	int int_b = 0;
	double double_e = 0;
	double double_f = 0;
	int int_c = 0;
	float float_a = 0;
	float float_b = 0;
	float float_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_g = 0;
	short short_a = 0;
	double double_h = 0;
	long long_a = 0;
	long long_b = 0;
	char char_a = 0;
	char char_b = 0;
	double_a = sinh ( double_a ) ;
	if(1)
	{
		double_b = exp ( double_c ) ;
		if(1)
		{
			double_d = log10 ( double_d ) ;
		}
	}
	double_a = ldexp ( double_b , int_a ) ;
	if(1)
	{
		double_b = double_b;
	}
	int_b = int_b - int_b;
	if(1)
	{
		double_b = atan2 ( double_a , double_e ) ;
	}
	double_e = sinh ( double_f ) ;
	char controller_e[3];
	scanf("%3s", controller_e);
	if( controller_e >"WXA" )
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		int int_b = 0;
		double double_e = 0;
		double double_f = 0;
		int int_c = 0;
		float float_a = 0;
		float float_b = 0;
		float float_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_g = 0;
		short short_a = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		char char_a = 0;
		char char_b = 0;
		char_b = char_a + char_a;
	}
	int_a = int_b - int_c;
	double_b = floor ( double_f ) ;
	float_b = float_a - float_b;
	double_d = log10 ( double_c ) ;
	float_a = float_c / float_b;
	double_d = asin ( double_a ) ;
	unsigned_int_c = unsigned_int_a / unsigned_int_b;
	double_g = double_g - double_a;
	unsigned_int_c = unsigned_int_a;
	double_a = acos ( double_f ) ;
	double_f = tan ( double_g ) ;
	short_a = short_a;
	double_h = fabs ( double_b ) ;
	long_b = long_a * long_a;
	double_a = atan ( double_a ) ;
	int_b = int_b;
	double_c = double_a;
	double_d = atan2 ( double_b , double_h ) ;
	return double_a;
	unsigned_int_a = btv_init_colors(int_c);

}
int main_tview( int parameter_1,char parameter_2,int uni_para)
{
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	int int_b = 0;
	double double_f = 0;
	double double_g = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_h = 0;
	short short_a = 0;
	long long_a = 0;
	int int_c = 0;
	double double_i = 0;
	double double_k = 0;
	unsigned int unsigned_int_c = 0;
	float float_a = 0;
	float float_b = 0;
	long long_b = 0;
	double double_j = 0;
	double_a = log ( double_b ) ;
	double_a = exp ( double_a ) ;
	char_a = char_b;
	double_b = ldexp ( double_b , int_a ) ;
	double_c = sqrt ( double_c ) ;
	int looper_a = 0;
	while(looper_a < 6)
	{
		looper_a += 1;
		{
			double_b = cosh ( double_a ) ;
			double_e = double_d + double_c;
			double_d = tanh ( double_e ) ;
			double_e = sinh ( double_c ) ;
			int_b = int_b;
			double_d = sqrt ( double_f ) ;
			double_b = floor ( double_b ) ;
		}
	}
	char_a = char_b + char_b;
	?:
	double_e = fmod ( double_e , double_g ) ;
	unsigned_int_a = unsigned_int_b;
	?:
	unsigned_int_b = unsigned_int_a;
	if(1)
	{
		double_h = double_e + double_e;
		unsigned_int_a = unsigned_int_b;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		int int_b = 0;
		double double_f = 0;
		double double_g = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		short short_a = 0;
		long long_a = 0;
		int int_c = 0;
		double double_i = 0;
		double double_k = 0;
		unsigned int unsigned_int_c = 0;
		float float_a = 0;
		float float_b = 0;
		long long_b = 0;
		double double_j = 0;
		double_h = exp ( double_c ) ;
		unsigned_int_c = unsigned_int_b;
	}
	double_e = acos ( double_d ) ;
	double_a = ceil ( double_c ) ;
	int_a = int_b;
	double_d = cos ( double_d ) ;
	char controller4vul_b[4];
	scanf("%4s", controller4vul_b);
	if( strcmp( controller4vul_b, "cFk]") == 0)
	{
		double_a = double_h;
		int_a = int_b / int_b;
		char controller4vul_c[5];
		scanf("%5s", controller4vul_c);
		if( controller4vul_c >"hJna<" )
		{
			double double_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_b = 0;
			double double_f = 0;
			double double_g = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_h = 0;
			short short_a = 0;
			long long_a = 0;
			int int_c = 0;
			double double_i = 0;
			double double_k = 0;
			unsigned int unsigned_int_c = 0;
			float float_a = 0;
			float float_b = 0;
			long long_b = 0;
			double double_j = 0;
			short_a = btv_drawaln(long_a,int_c,uni_para);

			float_b = float_a / float_a;
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_b = 0;
			double double_f = 0;
			double double_g = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_h = 0;
			short short_a = 0;
			long long_a = 0;
			int int_c = 0;
			double double_i = 0;
			double double_k = 0;
			unsigned int unsigned_int_c = 0;
			float float_a = 0;
			float float_b = 0;
			long long_b = 0;
			double double_j = 0;
			long_a = long_b;
		}
		double_d = double_c - double_i;
		if(1)
		{
			double_c = tan ( double_b ) ;
		}
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		int int_b = 0;
		double double_f = 0;
		double double_g = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		short short_a = 0;
		long long_a = 0;
		int int_c = 0;
		double double_i = 0;
		double double_k = 0;
		unsigned int unsigned_int_c = 0;
		float float_a = 0;
		float float_b = 0;
		long long_b = 0;
		double double_j = 0;
		double_h = floor ( double_g ) ;
		for(int looper_b=0; looper_b<4;looper_b++)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			double_b = ceil ( double_b ) ;
		}
		double_b = asin ( double_j ) ;
	}
	double_k = cosh ( double_d ) ;
	double_a = fmod ( double_f , double_i ) ;
	double_b = tan ( double_h ) ;
	return int_c;
}
double col_sums( int parameter_1,int parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	float float_b = 0;
	double double_c = 0;
	long long_a = 0;
	double_a = ceil ( double_b ) ;
	float_a = float_b;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		for(int looper_b=0; looper_b<7;looper_b++)
		{
			double double_a = 0;
			double double_b = 0;
			float float_a = 0;
			float float_b = 0;
			double double_c = 0;
			long long_a = 0;
			long_a = long_a;
		}
	}
	return double_c;
}
void max2( int parameter_1,int parameter_2,int parameter_3)
{
	float float_a = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	float_a = float_a * float_a;
	double_a = pow ( double_a , double_b ) ;
	unsigned_int_a = unsigned_int_a + unsigned_int_a;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		?:
		double_b = fmod ( double_b , double_b ) ;
		char controller_a[1];
		scanf("%1s", controller_a);
		if( controller_a <"p" )
		{
			float float_a = 0;
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			double_c = atan ( double_b ) ;
		}
	}
}
float row_sums( int parameter_1,int parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	float float_a = 0;
	double_a = fmod ( double_b , double_a ) ;
	long_a = long_a;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		for(int looper_b=0; looper_b<9;looper_b++)
		{
			double_b = asin ( double_a ) ;
		}
	}
	return float_a;
}
void test_asm( int parameter_1,char parameter_2,int parameter_3,int parameter_4)
{
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_b = 0;
	float float_a = 0;
	int int_c = 0;
	double double_e = 0;
	long long_a = 0;
	double double_f = 0;
	max2(int_a,int_a,int_a);

	double_a = sqrt ( double_a ) ;
	double_a = fabs ( double_a ) ;
	double_b = exp ( double_c ) ;
	double_d = log10 ( double_d ) ;
	double_c = acos ( double_a ) ;
	int_a = int_b;
	if(1)
	{
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		float float_a = 0;
		int int_c = 0;
		double double_e = 0;
		long long_a = 0;
		double double_f = 0;
		float_a = row_sums(int_b,int_b,int_c);

		long_a = long_a;
		double_a = atan2 ( double_c , double_e ) ;
		double_f = asin ( double_a ) ;
		if(1)
		{
			double_e = col_sums(int_c,int_c,int_c);

			double_a = double_d;
		}
	}
}
int main_asm( int parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	char char_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	double double_e = 0;
	double double_f = 0;
	int int_d = 0;
	int int_e = 0;
	int int_g = 0;
	double double_h = 0;
	int int_h = 0;
	double double_i = 0;
	double double_j = 0;
	char char_a = 0;
	int int_f = 0;
	double double_g = 0;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		double double_e = 0;
		double double_f = 0;
		int int_d = 0;
		int int_e = 0;
		int int_g = 0;
		double double_h = 0;
		int int_h = 0;
		double double_i = 0;
		double double_j = 0;
		char char_a = 0;
		int int_f = 0;
		double double_g = 0;
		double_a = tan ( double_b ) ;
		double_c = cos ( double_d ) ;
		double_c = fmod ( double_b , double_c ) ;
		double_b = floor ( double_b ) ;
		char_a = char_b;
		unsigned_int_a = unsigned_int_a / unsigned_int_a;
		double_b = sqrt ( double_d ) ;
	}
	unsigned_int_b = unsigned_int_b;
	int_a = int_b;
	int_c = int_b / int_a;
	double_c = fmod ( double_c , double_a ) ;
	double_e = exp ( double_f ) ;
	int_d = int_a * int_b;
	int looper_a = 0;
	while(looper_a < 4)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		double double_e = 0;
		double double_f = 0;
		int int_d = 0;
		int int_e = 0;
		int int_g = 0;
		double double_h = 0;
		int int_h = 0;
		double double_i = 0;
		double double_j = 0;
		char char_a = 0;
		int int_f = 0;
		double double_g = 0;
		looper_a += 1;
		if(1)
		{
		}
		int_f = int_e * int_e;
		double_a = exp ( double_c ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			char char_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			double double_e = 0;
			double double_f = 0;
			int int_d = 0;
			int int_e = 0;
			int int_g = 0;
			double double_h = 0;
			int int_h = 0;
			double double_i = 0;
			double double_j = 0;
			char char_a = 0;
			int int_f = 0;
			double double_g = 0;
			if(1)
			{
				double_a = double_b / double_a;
			}
			int_g = int_e * int_g;
			double_g = pow ( double_d , double_b ) ;
			char_b = char_b - char_b;
			double_a = cosh ( double_f ) ;
			double_g = cosh ( double_e ) ;
		}
		double_h = fmod ( double_a , double_e ) ;
		unsigned_int_a = unsigned_int_a;
		double_d = fabs ( double_a ) ;
		double_f = acos ( double_e ) ;
		test_asm(int_g,char_b,int_e,int_h);

		unsigned_int_a = unsigned_int_a / unsigned_int_a;
	}
	if(1)
	{
		int_h = int_g - int_h;
	}
	double_i = tan ( double_f ) ;
	double_j = double_h / double_a;
	return int_e;
}
void put_into_record_v( unsigned int parameter_1,char parameter_2)
{
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	int int_c = 0;
	int_b = int_a - int_b;
	double_a = tan ( double_b ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double_c = atan ( double_c ) ;
		char controller_a[3];
		scanf("%3s", controller_a);
		if( controller_a >"y Y" )
		{
			int int_a = 0;
			int int_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_c = 0;
			int_b = int_b * int_c;
		}
	}
	double_d = cosh ( double_e ) ;
	double_e = double_c;
}
void pop_record_by_block_id( unsigned int parameter_1,long parameter_2,float parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	short short_a = 0;
	short short_b = 0;
	double double_c = 0;
	double_b = double_a - double_a;
	unsigned_int_a = unsigned_int_a;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		short short_a = 0;
		short short_b = 0;
		double double_c = 0;
		short_b = short_a - short_a;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			short short_a = 0;
			short short_b = 0;
			double double_c = 0;
			double_c = pow ( double_b , double_a ) ;
			double_b = tanh ( double_c ) ;
		}
	}
	double_b = log10 ( double_a ) ;
}
char epiread_write_func()
{
	double double_a = 0;
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_a = 0;
	long long_c = 0;
	float float_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_c = 0;
	char char_a = 0;
	char char_b = 0;
	int int_b = 0;
	long long_f = 0;
	char char_c = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	long long_d = 0;
	long long_e = 0;
	double double_g = 0;
	double double_h = 0;
	double_a = exp ( double_a ) ;
	long_b = long_a + long_b;
	if(1)
	{
		pop_record_by_block_id(unsigned_int_a,long_c,float_a);

		unsigned_int_b = unsigned_int_a;
	}
	else
	{
		int_a = int_a / int_a;
	}
	put_into_record_v(unsigned_int_c,char_a);

	char_a = char_a / char_b;
	int_b = int_a + int_b;
	int looper_a = 0;
	while(looper_a < 9)
	{
		double double_a = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		long long_c = 0;
		float float_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_c = 0;
		char char_a = 0;
		char char_b = 0;
		int int_b = 0;
		long long_f = 0;
		char char_c = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		long long_d = 0;
		long long_e = 0;
		double double_g = 0;
		double double_h = 0;
		looper_a += 1;
		double_b = acos ( double_c ) ;
		double_d = ldexp ( double_d , int_b ) ;
		if(1)
		{
		}
		if(1)
		{
			do
			{
				double double_a = 0;
				long long_a = 0;
				long long_b = 0;
				unsigned int unsigned_int_a = 0;
				long long_c = 0;
				float float_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_a = 0;
				unsigned int unsigned_int_c = 0;
				char char_a = 0;
				char char_b = 0;
				int int_b = 0;
				long long_f = 0;
				char char_c = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				long long_d = 0;
				long long_e = 0;
				double double_g = 0;
				double double_h = 0;
				if(1)
				{
					double_e = sqrt ( double_c ) ;
				}
				char_b = char_a + char_b;
				double_e = ldexp ( double_c , int_b ) ;
				double_a = pow ( double_f , double_a ) ;
			}
			int looper_b = 0;
			while(looper_b < 5)
			char_b = char_b * char_a;
			looper_b += 1;
		}
		else
		{
			double double_a = 0;
			long long_a = 0;
			long long_b = 0;
			unsigned int unsigned_int_a = 0;
			long long_c = 0;
			float float_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			unsigned int unsigned_int_c = 0;
			char char_a = 0;
			char char_b = 0;
			int int_b = 0;
			long long_f = 0;
			char char_c = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			long long_d = 0;
			long long_e = 0;
			double double_g = 0;
			double double_h = 0;
			long_d = long_e;
		}
	}
	long_a = long_f;
	if(1)
	{
		double double_a = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		long long_c = 0;
		float float_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_c = 0;
		char char_a = 0;
		char char_b = 0;
		int int_b = 0;
		long long_f = 0;
		char char_c = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		long long_d = 0;
		long long_e = 0;
		double double_g = 0;
		double double_h = 0;
		unsigned_int_c = unsigned_int_b;
		double_h = double_a + double_g;
	}
	return char_c;
}
short get_n_insert_episnp1( long parameter_1,char parameter_2)
{
	short short_a = 0;
	short short_c = 0;
	unsigned int unsigned_int_a = 0;
	char char_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_b = 0;
	double double_d = 0;
	short_a = short_a;
	if(1)
	{
		short short_a = 0;
		short short_c = 0;
		unsigned int unsigned_int_a = 0;
		char char_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		short short_b = 0;
		double double_d = 0;
		double_a = exp ( double_b ) ;
		double_b = sqrt ( double_c ) ;
		short_b = short_c;
		double_c = sinh ( double_d ) ;
	}
	return short_a;
	short_c = get_episnp1(unsigned_int_a,char_a);

}
float bed_init_episnp( char parameter_1)
{
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_a = 0;
	short short_a = 0;
	char char_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_c = 0;
	long long_d = 0;
	double double_d = 0;
	int int_b = 0;
	unsigned int unsigned_int_d = 0;
	float float_c = 0;
	float_b = float_a - float_b;
	double_a = atan ( double_a ) ;
	double_a = atan2 ( double_a , double_b ) ;
	unsigned_int_a = unsigned_int_a + unsigned_int_a;
	long_c = long_a + long_b;
	unsigned_int_b = unsigned_int_b + unsigned_int_b;
	long_b = long_b;
	int looper_a = 0;
	while(looper_a < 9)
	{
		float float_a = 0;
		float float_b = 0;
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		short short_a = 0;
		char char_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_c = 0;
		long long_d = 0;
		double double_d = 0;
		int int_b = 0;
		unsigned int unsigned_int_d = 0;
		float float_c = 0;
		looper_a += 1;
		unsigned_int_c = kputc(int_a,float_a);

		double_b = floor ( double_c ) ;
		if(1)
		{
			if(1)
			{
				float float_a = 0;
				float float_b = 0;
				double double_a = 0;
				double double_b = 0;
				unsigned int unsigned_int_a = 0;
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				int int_a = 0;
				short short_a = 0;
				char char_a = 0;
				short short_b = 0;
				short short_c = 0;
				double double_c = 0;
				long long_d = 0;
				double double_d = 0;
				int int_b = 0;
				unsigned int unsigned_int_d = 0;
				float float_c = 0;
				double_b = double_c - double_c;
				if(1)
				{
					float float_a = 0;
					float float_b = 0;
					double double_a = 0;
					double double_b = 0;
					unsigned int unsigned_int_a = 0;
					long long_a = 0;
					long long_b = 0;
					long long_c = 0;
					unsigned int unsigned_int_b = 0;
					unsigned int unsigned_int_c = 0;
					int int_a = 0;
					short short_a = 0;
					char char_a = 0;
					short short_b = 0;
					short short_c = 0;
					double double_c = 0;
					long long_d = 0;
					double double_d = 0;
					int int_b = 0;
					unsigned int unsigned_int_d = 0;
					float float_c = 0;
					float_c = float_c * float_c;
				}
				short_a = get_n_insert_episnp1(long_c,char_a);

				long_a = long_d;
				double_d = ldexp ( double_a , int_b ) ;
				unsigned_int_c = unsigned_int_d;
				double_c = floor ( double_c ) ;
				float_a = float_a;
			}
			double_c = sinh ( double_b ) ;
			if(1)
			{
			}
		}
		else
		{
			short_b = short_a;
		}
	}
	short_a = short_b - short_c;
	return float_b;
}
int main_epiread( int parameter_1,char parameter_2)
{
	double double_a = 0;
	int int_a = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	short short_a = 0;
	double double_f = 0;
	double double_g = 0;
	int int_b = 0;
	double double_h = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_i = 0;
	int int_c = 0;
	float float_a = 0;
	double double_j = 0;
	long long_a = 0;
	double double_k = 0;
	int int_d = 0;
	double double_l = 0;
	double double_m = 0;
	double double_n = 0;
	double double_o = 0;
	float float_b = 0;
	double double_p = 0;
	long long_c = 0;
	long long_d = 0;
	long long_e = 0;
	double double_q = 0;
	int int_e = 0;
	char char_d = 0;
	double double_r = 0;
	int int_f = 0;
	int int_g = 0;
	char char_e = 0;
	short short_b = 0;
	long long_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_s = 0;
	double double_t = 0;
	short short_c = 0;
	double_a = floor ( double_a ) ;
	double_a = double_a;
	double_a = cos ( double_a ) ;
	int_a = usage(double_a);

	char_c = char_a / char_b;
	double_a = atan2 ( double_a , double_a ) ;
	int_a = int_a;
	double_b = double_b / double_c;
	double_c = floor ( double_a ) ;
	double_b = ldexp ( double_d , int_a ) ;
	double_c = fabs ( double_d ) ;
	double_e = floor ( double_d ) ;
	short_a = short_a;
	double_e = log ( double_d ) ;
	double_f = double_b;
	double_a = acos ( double_c ) ;
	double_c = double_e * double_b;
	double_b = fmod ( double_g , double_a ) ;
	int_b = int_b;
	double_e = asin ( double_h ) ;
	unsigned_int_b = unsigned_int_a + unsigned_int_b;
	double_h = double_d - double_a;
	double_c = ceil ( double_i ) ;
	char controller_a[2];
	scanf("%2s", controller_a);
	if( controller_a <"5j" )
	{
		return int_c;
	}
	int looper_a = 0;
	while(looper_a < 4)
	{
		looper_a += 1;
		{
			double double_a = 0;
			int int_a = 0;
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			short short_a = 0;
			double double_f = 0;
			double double_g = 0;
			int int_b = 0;
			double double_h = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_i = 0;
			int int_c = 0;
			float float_a = 0;
			double double_j = 0;
			long long_a = 0;
			double double_k = 0;
			int int_d = 0;
			double double_l = 0;
			double double_m = 0;
			double double_n = 0;
			double double_o = 0;
			float float_b = 0;
			double double_p = 0;
			long long_c = 0;
			long long_d = 0;
			long long_e = 0;
			double double_q = 0;
			int int_e = 0;
			char char_d = 0;
			double double_r = 0;
			int int_f = 0;
			int int_g = 0;
			char char_e = 0;
			short short_b = 0;
			long long_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_s = 0;
			double double_t = 0;
			short short_c = 0;
			double_h = floor ( double_d ) ;
			float_a = bed_init_episnp(char_b);

			double_h = double_d + double_h;
			char_c = process_func();

			double_i = fabs ( double_h ) ;
			double_b = fmod ( double_j , double_j ) ;
			short_b = short_a - short_a;
			long_b = long_a - long_a;
			char_a = char_a;
			double_c = log ( double_f ) ;
			double_a = floor ( double_b ) ;
			double_k = double_j + double_e;
			double_f = pow ( double_k , double_c ) ;
			char_b = compare_targets(long_a,long_a);

			double_c = acos ( double_e ) ;
			double_j = double_i;
			double_g = double_c;
			double_a = atan2 ( double_k , double_a ) ;
			double_d = tanh ( double_j ) ;
			double_a = floor ( double_d ) ;
			return int_d;
			int_c = int_b;
		}
	}
	if(1)
	{
		double_c = ldexp ( double_k , int_a ) ;
		double_l = pow ( double_e , double_m ) ;
	}
	?:
	unsigned_int_a = unsigned_int_a + unsigned_int_a;
	char_b = char_c;
	double_b = cos ( double_n ) ;
	double_k = log ( double_g ) ;
	int_c = int_a;
	double_l = atan ( double_d ) ;
	double_g = atan ( double_n ) ;
	double_o = acos ( double_n ) ;
	float_a = float_b;
	double_o = tan ( double_h ) ;
	for(int looper_b=0; looper_b<7;looper_b++)
	{
		double double_a = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		char char_c = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		short short_a = 0;
		double double_f = 0;
		double double_g = 0;
		int int_b = 0;
		double double_h = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_i = 0;
		int int_c = 0;
		float float_a = 0;
		double double_j = 0;
		long long_a = 0;
		double double_k = 0;
		int int_d = 0;
		double double_l = 0;
		double double_m = 0;
		double double_n = 0;
		double double_o = 0;
		float float_b = 0;
		double double_p = 0;
		long long_c = 0;
		long long_d = 0;
		long long_e = 0;
		double double_q = 0;
		int int_e = 0;
		char char_d = 0;
		double double_r = 0;
		int int_f = 0;
		int int_g = 0;
		char char_e = 0;
		short short_b = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_s = 0;
		double double_t = 0;
		short short_c = 0;
		unsigned_int_c = unsigned_int_c + unsigned_int_b;
		double_c = atan2 ( double_g , double_e ) ;
		double_m = fabs ( double_k ) ;
		double_c = pow ( double_c , double_a ) ;
	}
	double_p = sqrt ( double_k ) ;
	double_o = acos ( double_j ) ;
	long_e = long_c / long_d;
	double_p = sqrt ( double_a ) ;
	for(int looper_c=0; looper_c<5;looper_c++)
	{
		double double_a = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		char char_c = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		short short_a = 0;
		double double_f = 0;
		double double_g = 0;
		int int_b = 0;
		double double_h = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_i = 0;
		int int_c = 0;
		float float_a = 0;
		double double_j = 0;
		long long_a = 0;
		double double_k = 0;
		int int_d = 0;
		double double_l = 0;
		double double_m = 0;
		double double_n = 0;
		double double_o = 0;
		float float_b = 0;
		double double_p = 0;
		long long_c = 0;
		long long_d = 0;
		long long_e = 0;
		double double_q = 0;
		int int_e = 0;
		char char_d = 0;
		double double_r = 0;
		int int_f = 0;
		int int_g = 0;
		char char_e = 0;
		short short_b = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_s = 0;
		double double_t = 0;
		short short_c = 0;
		double_c = tanh ( double_b ) ;
		double_o = cos ( double_q ) ;
		double_b = cos ( double_i ) ;
		unsigned_int_b = unsigned_int_d + unsigned_int_b;
		int_e = int_d;
		unsigned_int_b = unsigned_int_a;
		unsigned_int_d = unsigned_int_a;
	}
	double_p = sinh ( double_e ) ;
	float_a = float_a * float_a;
	char_d = char_b;
	double_d = pow ( double_m , double_e ) ;
	if(1)
	{
		double_e = fabs ( double_q ) ;
		unsigned_int_b = unsigned_int_b * unsigned_int_b;
		double_l = fmod ( double_f , double_b ) ;
		int_a = int_c;
		double_i = asin ( double_c ) ;
		if(1)
		{
			double_r = cos ( double_q ) ;
		}
		if(1)
		{
			double_r = tanh ( double_a ) ;
		}
		for(int looper_d=0; looper_d<8;looper_d++)
		{
			double_e = pow ( double_j , double_e ) ;
			double_g = fabs ( double_c ) ;
			int_f = int_b;
			double_r = double_l * double_d;
			if(1)
			{
				double_h = double_c;
			}
			double_q = double_p;
		}
	}
	else
	{
		for(int looper_e=0; looper_e<6;looper_e++)
		{
			double_c = asin ( double_o ) ;
			for(int looper_f=0; looper_f<3;looper_f++)
			{
				double double_a = 0;
				int int_a = 0;
				char char_a = 0;
				char char_b = 0;
				char char_c = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				short short_a = 0;
				double double_f = 0;
				double double_g = 0;
				int int_b = 0;
				double double_h = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_i = 0;
				int int_c = 0;
				float float_a = 0;
				double double_j = 0;
				long long_a = 0;
				double double_k = 0;
				int int_d = 0;
				double double_l = 0;
				double double_m = 0;
				double double_n = 0;
				double double_o = 0;
				float float_b = 0;
				double double_p = 0;
				long long_c = 0;
				long long_d = 0;
				long long_e = 0;
				double double_q = 0;
				int int_e = 0;
				char char_d = 0;
				double double_r = 0;
				int int_f = 0;
				int int_g = 0;
				char char_e = 0;
				short short_b = 0;
				long long_b = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_s = 0;
				double double_t = 0;
				short short_c = 0;
				int_c = int_d;
				double_s = atan ( double_f ) ;
				char_a = epiread_write_func();

				int_d = int_e - int_e;
				double_g = sqrt ( double_j ) ;
				if(1)
				{
					double_f = sinh ( double_p ) ;
				}
				double_t = log10 ( double_n ) ;
			}
		}
	}
	for(int looper_g=0; looper_g<4;looper_g++)
	{
		double double_a = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		char char_c = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		short short_a = 0;
		double double_f = 0;
		double double_g = 0;
		int int_b = 0;
		double double_h = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_i = 0;
		int int_c = 0;
		float float_a = 0;
		double double_j = 0;
		long long_a = 0;
		double double_k = 0;
		int int_d = 0;
		double double_l = 0;
		double double_m = 0;
		double double_n = 0;
		double double_o = 0;
		float float_b = 0;
		double double_p = 0;
		long long_c = 0;
		long long_d = 0;
		long long_e = 0;
		double double_q = 0;
		int int_e = 0;
		char char_d = 0;
		double double_r = 0;
		int int_f = 0;
		int int_g = 0;
		char char_e = 0;
		short short_b = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_s = 0;
		double double_t = 0;
		short short_c = 0;
		double_c = atan2 ( double_m , double_m ) ;
		short_a = short_c;
	}
	for(int looper_h=0; looper_h<5;looper_h++)
	{
		double_r = fabs ( double_f ) ;
	}
	double_l = floor ( double_b ) ;
	double_k = atan ( double_c ) ;
	double_q = ldexp ( double_n , int_g ) ;
	char_e = char_a + char_b;
	double_i = log10 ( double_p ) ;
	double_p = sqrt ( double_g ) ;
	double_i = acos ( double_k ) ;
	double_m = atan ( double_f ) ;
	double_c = sqrt ( double_h ) ;
	float_b = pileup_parse_region(float_b,int_f,int_b,int_b);

	double_h = cosh ( double_n ) ;
	return int_b;
}
float pass_coverage( double parameter_1,short parameter_2)
{
	double double_a = 0;
	int int_a = 0;
	double double_b = 0;
	float float_a = 0;
	float float_b = 0;
	double_a = ldexp ( double_a , int_a ) ;
	double_b = sqrt ( double_b ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		if(1)
		{
			return float_a;
		}
	}
	return float_b;
}
unsigned int vcf2bed_ctxt( float parameter_1,short parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	short short_a = 0;
	float float_a = 0;
	float float_b = 0;
	short short_b = 0;
	long long_a = 0;
	float float_d = 0;
	short short_c = 0;
	double double_h = 0;
	char char_a = 0;
	char char_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	float float_c = 0;
	double double_g = 0;
	double_a = fmod ( double_b , double_a ) ;
	double_a = double_c - double_b;
	int looper_a = 0;
	while(looper_a < 3)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		short short_a = 0;
		float float_a = 0;
		float float_b = 0;
		short short_b = 0;
		long long_a = 0;
		float float_d = 0;
		short short_c = 0;
		double double_h = 0;
		char char_a = 0;
		char char_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		float float_c = 0;
		double double_g = 0;
		looper_a += 1;
		int_a = vcf_record2bed1(short_a,int_a,float_a);

		float_b = pass_coverage(double_a,short_b);

		char_b = char_a + char_b;
		long_a = long_a;
		if(1)
		{
		}
		if(1)
		{
			if(1)
			{
			}
		}
		if(1)
		{
			char controller_e[3];
			scanf("%3s", controller_e);
			if( controller_e >"O/ " )
			{
			}
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
		double_b = double_d;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			short short_a = 0;
			float float_a = 0;
			float float_b = 0;
			short short_b = 0;
			long long_a = 0;
			float float_d = 0;
			short short_c = 0;
			double double_h = 0;
			char char_a = 0;
			char char_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			float float_c = 0;
			double double_g = 0;
			?:
			double_e = fabs ( double_f ) ;
		}
		double_d = fmod ( double_c , double_a ) ;
		for(int looper_b=0; looper_b<8;looper_b++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			short short_a = 0;
			float float_a = 0;
			float float_b = 0;
			short short_b = 0;
			long long_a = 0;
			float float_d = 0;
			short short_c = 0;
			double double_h = 0;
			char char_a = 0;
			char char_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			float float_c = 0;
			double double_g = 0;
			if(1)
			{
				float_a = float_c / float_c;
			}
			else
			{
				float_b = float_c;
			}
			float_d = init_bed_data(long_a);

			double_a = atan2 ( double_a , double_e ) ;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			short short_a = 0;
			float float_a = 0;
			float float_b = 0;
			short short_b = 0;
			long long_a = 0;
			float float_d = 0;
			short short_c = 0;
			double double_h = 0;
			char char_a = 0;
			char char_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			float float_c = 0;
			double double_g = 0;
			double_g = asin ( double_b ) ;
		}
	}
	short_c = free_bed_data();

	double_h = acos ( double_b ) ;
	double_h = log10 ( double_h ) ;
}
short free_bed_data()
{
	int int_a = 0;
	double double_a = 0;
	long long_a = 0;
	short short_a = 0;
	int_a = int_a;
	double_a = exp ( double_a ) ;
	long_a = long_a;
	double_a = fabs ( double_a ) ;
	short_a = short_a;
}
int vcf_record2bed1( short parameter_1,int parameter_2,float parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_b = 0;
	double double_f = 0;
	char char_c = 0;
	double double_g = 0;
	long long_a = 0;
	float float_a = 0;
	float float_b = 0;
	int int_a = 0;
	int int_b = 0;
	char char_d = 0;
	short short_a = 0;
	double_a = ceil ( double_a ) ;
	double_a = log ( double_b ) ;
	double_b = log ( double_c ) ;
	double_b = tanh ( double_b ) ;
	double_d = fmod ( double_b , double_c ) ;
	double_d = acos ( double_d ) ;
	double_a = fabs ( double_d ) ;
	unsigned_int_a = unsigned_int_a;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_b = 0;
		double double_f = 0;
		char char_c = 0;
		double double_g = 0;
		long long_a = 0;
		float float_a = 0;
		float float_b = 0;
		int int_a = 0;
		int int_b = 0;
		char char_d = 0;
		short short_a = 0;
		int_a = int_a * int_b;
	}
	if(1)
	{
		double_c = fmod ( double_d , double_b ) ;
	}
	double_e = double_e;
	double_b = log ( double_c ) ;
	double_d = double_d + double_c;
	char_b = char_a * char_b;
	unsigned_int_b = unsigned_int_a;
	double_a = atan2 ( double_f , double_f ) ;
	double_f = exp ( double_b ) ;
	if(1)
	{
		for(int looper_a=0; looper_a<7;looper_a++)
		{
			double_c = floor ( double_c ) ;
		}
	}
	else
	{
		for(int looper_b=0; looper_b<5;looper_b++)
		{
			if(1)
			{
				char_b = char_c;
			}
			else
			{
				double_d = asin ( double_e ) ;
			}
		}
	}
	if(1)
	{
		for(int looper_c=0; looper_c<4;looper_c++)
		{
			double_e = exp ( double_c ) ;
		}
	}
	else
	{
		for(int looper_d=0; looper_d<4;looper_d++)
		{
			if(1)
			{
				double_g = asin ( double_f ) ;
			}
			else
			{
				double_d = atan ( double_c ) ;
			}
		}
	}
	if(1)
	{
		double_g = double_c;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_b = 0;
		double double_f = 0;
		char char_c = 0;
		double double_g = 0;
		long long_a = 0;
		float float_a = 0;
		float float_b = 0;
		int int_a = 0;
		int int_b = 0;
		char char_d = 0;
		short short_a = 0;
		double_f = acos ( double_a ) ;
		char_c = char_d;
	}
	if(1)
	{
		double_b = pow ( double_f , double_c ) ;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_b = 0;
		double double_f = 0;
		char char_c = 0;
		double double_g = 0;
		long long_a = 0;
		float float_a = 0;
		float float_b = 0;
		int int_a = 0;
		int int_b = 0;
		char char_d = 0;
		short short_a = 0;
		short_a = short_a;
	}
	long_a = long_a * long_a;
	float_a = float_b;
	double_a = fmod ( double_f , double_a ) ;
	char_c = char_a;
}
float init_bed_data( long parameter_1)
{
	float float_a = 0;
	float float_b = 0;
	unsigned int unsigned_int_a = 0;
	char char_a = 0;
	char char_b = 0;
	double double_a = 0;
	double double_b = 0;
	float float_c = 0;
	float_a = float_b;
	unsigned_int_a = unsigned_int_a + unsigned_int_a;
	char_b = char_a + char_a;
	double_a = fabs ( double_b ) ;
	float_c = float_a * float_b;
}
long vcf2bed_snp( long parameter_1,unsigned int parameter_2)
{
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	short short_b = 0;
	double double_e = 0;
	int int_b = 0;
	int int_c = 0;
	float float_a = 0;
	short short_c = 0;
	float float_b = 0;
	long long_c = 0;
	double double_g = 0;
	double double_h = 0;
	double double_j = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	short short_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_f = 0;
	unsigned int unsigned_int_d = 0;
	double double_i = 0;
	long long_d = 0;
	int_a = int_a / int_a;
	double_a = ceil ( double_a ) ;
	int looper_a = 0;
	while(looper_a < 10)
	{
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		short short_b = 0;
		double double_e = 0;
		int int_b = 0;
		int int_c = 0;
		float float_a = 0;
		short short_c = 0;
		float float_b = 0;
		long long_c = 0;
		double double_g = 0;
		double double_h = 0;
		double double_j = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_f = 0;
		unsigned int unsigned_int_d = 0;
		double double_i = 0;
		long long_d = 0;
		looper_a += 1;
		double_a = cosh ( double_b ) ;
		double_c = tan ( double_c ) ;
		if(1)
		{
			int int_a = 0;
			double double_a = 0;
			double double_b = 0;
			short short_b = 0;
			double double_e = 0;
			int int_b = 0;
			int int_c = 0;
			float float_a = 0;
			short short_c = 0;
			float float_b = 0;
			long long_c = 0;
			double double_g = 0;
			double double_h = 0;
			double double_j = 0;
			double double_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			short short_a = 0;
			long long_a = 0;
			long long_b = 0;
			double double_f = 0;
			unsigned int unsigned_int_d = 0;
			double double_i = 0;
			long long_d = 0;
			double_d = double_b / double_d;
			unsigned_int_a = unsigned_int_b;
			unsigned_int_c = unsigned_int_a * unsigned_int_c;
			short_a = short_a;
			short_b = short_a * short_a;
			unsigned_int_c = unsigned_int_a * unsigned_int_a;
			long_a = long_b;
			double_a = double_e;
			double_d = log ( double_c ) ;
			double_e = acos ( double_d ) ;
			double_f = tanh ( double_b ) ;
			double_e = log10 ( double_f ) ;
			if(1)
			{
				int_b = vcf_record2bed1(short_b,int_c,float_a);

				unsigned_int_b = unsigned_int_c;
			}
			char controller_c[1];
			scanf("%1s", controller_c);
			if( controller_c >"=" )
			{
				double_b = tanh ( double_a ) ;
			}
			unsigned_int_d = unsigned_int_c - unsigned_int_a;
			double_b = exp ( double_a ) ;
			double_b = tan ( double_f ) ;
			for(int looper_b=0; looper_b<9;looper_b++)
			{
				short_c = free_bed_data();

				unsigned_int_a = unsigned_int_a * unsigned_int_b;
				if(1)
				{
					float_b = float_b;
				}
				double_f = double_e;
				if(1)
				{
					unsigned_int_d = unsigned_int_b * unsigned_int_a;
				}
			}
			char controller_f[1];
			scanf("%1s", controller_f);
			if( controller_f <"w" )
			{
				float_b = init_bed_data(long_c);

				short_b = short_b;
			}
			if(1)
			{
				double_c = tan ( double_g ) ;
			}
			double_c = cos ( double_c ) ;
			for(int looper_c=0; looper_c<4;looper_c++)
			{
				int int_a = 0;
				double double_a = 0;
				double double_b = 0;
				short short_b = 0;
				double double_e = 0;
				int int_b = 0;
				int int_c = 0;
				float float_a = 0;
				short short_c = 0;
				float float_b = 0;
				long long_c = 0;
				double double_g = 0;
				double double_h = 0;
				double double_j = 0;
				double double_c = 0;
				double double_d = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				short short_a = 0;
				long long_a = 0;
				long long_b = 0;
				double double_f = 0;
				unsigned int unsigned_int_d = 0;
				double double_i = 0;
				long long_d = 0;
				long_b = long_d;
				double_c = double_d;
				unsigned_int_d = unsigned_int_b;
				int_a = int_b / int_a;
				int_a = int_b / int_b;
				long_b = long_b;
				double_f = fmod ( double_h , double_e ) ;
				long_b = long_a + long_c;
			}
			if(1)
			{
				double_e = double_g;
			}
			double_e = sinh ( double_i ) ;
			double_c = exp ( double_g ) ;
			double_c = atan ( double_h ) ;
			double_e = double_c;
		}
	}
	double_b = log10 ( double_g ) ;
	double_h = double_e / double_j;
}
int main_vcf2bed( int parameter_1,char parameter_2)
{
	int int_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	int int_b = 0;
	double double_f = 0;
	int int_c = 0;
	unsigned int unsigned_int_b = 0;
	float float_a = 0;
	short short_a = 0;
	int int_d = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	double double_i = 0;
	int int_e = 0;
	double double_e = 0;
	double double_h = 0;
	float float_b = 0;
	int_a = int_a * int_a;
	long_a = long_b;
	double_a = double_b;
	double_c = floor ( double_c ) ;
	int looper_a = 0;
	while(looper_a < 7)
	{
		looper_a += 1;
		{
			int int_a = 0;
			long long_a = 0;
			long long_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			int int_b = 0;
			double double_f = 0;
			int int_c = 0;
			unsigned int unsigned_int_b = 0;
			float float_a = 0;
			short short_a = 0;
			int int_d = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			double double_i = 0;
			int int_e = 0;
			double double_e = 0;
			double double_h = 0;
			float float_b = 0;
			double_d = double_d + double_d;
			if(1)
			{
				double_a = fabs ( double_c ) ;
			}
			double_b = sqrt ( double_c ) ;
			double_d = acos ( double_e ) ;
			unsigned_int_a = unsigned_int_a;
			return int_a;
			int_b = usage(double_f);

			int_c = int_a;
		}
	}
	if(1)
	{
		double_d = cos ( double_c ) ;
	}
	if(1)
	{
		unsigned_int_b = vcf2bed_ctxt(float_a,short_a,int_d);

		double_b = double_c;
		int_b = int_d;
	}
	unsigned_int_b = unsigned_int_a * unsigned_int_a;
	double_g = tanh ( double_c ) ;
	unsigned_int_a = unsigned_int_c * unsigned_int_c;
	long_a = long_b;
	if(1)
	{
		int int_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		int int_b = 0;
		double double_f = 0;
		int int_c = 0;
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		short short_a = 0;
		int int_d = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		double double_i = 0;
		int int_e = 0;
		double double_e = 0;
		double double_h = 0;
		float float_b = 0;
		double_c = asin ( double_h ) ;
	}
	double_g = tan ( double_f ) ;
	if(1)
	{
		int int_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		int int_b = 0;
		double double_f = 0;
		int int_c = 0;
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		short short_a = 0;
		int int_d = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		double double_i = 0;
		int int_e = 0;
		double double_e = 0;
		double double_h = 0;
		float float_b = 0;
		float_a = float_b;
	}
	else
	{
		int_d = int_c;
	}
	double_i = double_a * double_d;
	unsigned_int_b = unsigned_int_c;
	return int_e;
	long_b = vcf2bed_snp(long_b,unsigned_int_b);

}
void free_methbed()
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double_a = atan ( double_b ) ;
	double_c = exp ( double_d ) ;
	unsigned_int_c = unsigned_int_a / unsigned_int_b;
}
void methbed_close( long parameter_1)
{
	double double_a = 0;
	int int_a = 0;
	double_a = ldexp ( double_a , int_a ) ;
}
double meth_emission(int parameter_2,int parameter_3)
{
	float float_a = 0;
	float float_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	float_b = float_a / float_a;
	unsigned_int_a = unsigned_int_b;
	if(1)
	{
		return double_a;
	}
	else
	{
		return double_a;
	}
}
int methbed_parse1( char parameter_1,long parameter_2,char parameter_3)
{
	double double_a = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	char char_d = 0;
	double double_b = 0;
	double double_c = 0;
	float float_a = 0;
	float float_b = 0;
	short short_a = 0;
	double double_d = 0;
	double double_e = 0;
	int int_a = 0;
	int int_b = 0;
	double_a = log ( double_a ) ;
	char_c = char_a - char_b;
	char_d = char_d;
	double_a = double_a / double_a;
	double_a = tanh ( double_a ) ;
	double_b = log ( double_a ) ;
	double_c = sqrt ( double_b ) ;
	float_a = float_b;
	short_a = short_a - short_a;
	double_b = double_c + double_c;
	double_a = fabs ( double_d ) ;
	double_b = tanh ( double_d ) ;
	double_a = double_e;
	int_b = int_a / int_b;
	return int_b;
}
int methbed_get_chrom1( char parameter_1)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	long long_b = 0;
	double double_c = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	float float_a = 0;
	short short_b = 0;
	double double_g = 0;
	int int_b = 0;
	int int_c = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_j = 0;
	short short_a = 0;
	float float_c = 0;
	float float_d = 0;
	float float_e = 0;
	long long_c = 0;
	double double_h = 0;
	double double_i = 0;
	unsigned_int_a = unsigned_int_a * unsigned_int_a;
	double_b = double_a / double_a;
	long_b = long_a / long_a;
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		float float_a = 0;
		short short_b = 0;
		double double_g = 0;
		int int_b = 0;
		int int_c = 0;
		float float_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_j = 0;
		short short_a = 0;
		float float_c = 0;
		float float_d = 0;
		float float_e = 0;
		long long_c = 0;
		double double_h = 0;
		double double_i = 0;
		double_c = atan2 ( double_b , double_a ) ;
		int_a = int_a;
		unsigned_int_b = unsigned_int_a;
		short_a = short_a;
	}
	double_d = ldexp ( double_c , int_a ) ;
	double_e = double_f;
	float_a = kputs(short_b,short_b);

	double_b = exp ( double_g ) ;
	unsigned_int_b = unsigned_int_a;
	double_c = double_b;
	int looper_a = 0;
	while(looper_a < 7)
	{
		looper_a += 1;
		double_d = double_e;
		if(1)
		{
			unsigned int unsigned_int_a = 0;
			double double_a = 0;
			double double_b = 0;
			long long_a = 0;
			long long_b = 0;
			double double_c = 0;
			int int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			float float_a = 0;
			short short_b = 0;
			double double_g = 0;
			int int_b = 0;
			int int_c = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			double double_j = 0;
			short short_a = 0;
			float float_c = 0;
			float float_d = 0;
			float float_e = 0;
			long long_c = 0;
			double double_h = 0;
			double double_i = 0;
			if(1)
			{
				int_c = int_b - int_c;
				unsigned_int_b = kputc(int_b,float_b);

				double_c = asin ( double_d ) ;
			}
			float_c = float_d;
			if(1)
			{
				if(1)
				{
					unsigned int unsigned_int_a = 0;
					double double_a = 0;
					double double_b = 0;
					long long_a = 0;
					long long_b = 0;
					double double_c = 0;
					int int_a = 0;
					unsigned int unsigned_int_b = 0;
					double double_d = 0;
					double double_e = 0;
					double double_f = 0;
					float float_a = 0;
					short short_b = 0;
					double double_g = 0;
					int int_b = 0;
					int int_c = 0;
					float float_b = 0;
					char char_a = 0;
					char char_b = 0;
					double double_j = 0;
					short short_a = 0;
					float float_c = 0;
					float float_d = 0;
					float float_e = 0;
					long long_c = 0;
					double double_h = 0;
					double double_i = 0;
					if(1)
					{
						int_c = methbed_parse1(char_a,long_b,char_b);

						double_d = cosh ( double_d ) ;
						unsigned_int_b = unsigned_int_b;
					}
					if(1)
					{
						unsigned int unsigned_int_a = 0;
						double double_a = 0;
						double double_b = 0;
						long long_a = 0;
						long long_b = 0;
						double double_c = 0;
						int int_a = 0;
						unsigned int unsigned_int_b = 0;
						double double_d = 0;
						double double_e = 0;
						double double_f = 0;
						float float_a = 0;
						short short_b = 0;
						double double_g = 0;
						int int_b = 0;
						int int_c = 0;
						float float_b = 0;
						char char_a = 0;
						char char_b = 0;
						double double_j = 0;
						short short_a = 0;
						float float_c = 0;
						float float_d = 0;
						float float_e = 0;
						long long_c = 0;
						double double_h = 0;
						double double_i = 0;
						double_f = acos ( double_h ) ;
						int_a = int_b - int_b;
						double_g = ceil ( double_c ) ;
					}
					long_c = long_c;
					double_f = tanh ( double_g ) ;
				}
			}
			float_e = float_c;
			if(1)
			{
				unsigned int unsigned_int_a = 0;
				double double_a = 0;
				double double_b = 0;
				long long_a = 0;
				long long_b = 0;
				double double_c = 0;
				int int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				float float_a = 0;
				short short_b = 0;
				double double_g = 0;
				int int_b = 0;
				int int_c = 0;
				float float_b = 0;
				char char_a = 0;
				char char_b = 0;
				double double_j = 0;
				short short_a = 0;
				float float_c = 0;
				float float_d = 0;
				float float_e = 0;
				long long_c = 0;
				double double_h = 0;
				double double_i = 0;
				double_a = atan2 ( double_b , double_i ) ;
				double_i = sqrt ( double_g ) ;
			}
		}
		else
		{
			long_a = long_b * long_b;
		}
	}
	double_j = atan2 ( double_f , double_d ) ;
	return int_a;
}
void methbed_open( float parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	double double_c = 0;
	double double_d = 0;
	double_a = atan ( double_a ) ;
	double_a = cos ( double_a ) ;
	double_a = sinh ( double_b ) ;
	if(1)
	{
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double_c = floor ( double_a ) ;
		}
		else
		{
			double_a = exp ( double_a ) ;
			char controller_c[2];
			scanf("%2s", controller_c);
			if( controller_c <"2<" )
			{
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				double double_c = 0;
				double double_d = 0;
				int_a = int_a;
				double_d = double_b / double_d;
				double_b = log10 ( double_b ) ;
			}
		}
	}
	else
	{
		double_b = ldexp ( double_a , int_a ) ;
	}
}
int main_ndr( int parameter_1,char parameter_2)
{
	int int_a = 0;
	short short_a = 0;
	short short_b = 0;
	float float_a = 0;
	float float_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	char char_b = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	int int_b = 0;
	double double_f = 0;
	double double_g = 0;
	long long_d = 0;
	int int_c = 0;
	int int_e = 0;
	double double_h = 0;
	char char_c = 0;
	double double_k = 0;
	float float_c = 0;
	float float_d = 0;
	char char_a = 0;
	float float_e = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_i = 0;
	double double_j = 0;
	double double_l = 0;
	unsigned int unsigned_int_e = 0;
	int int_d = 0;
	unsigned int unsigned_int_f = 0;
	unsigned int unsigned_int_g = 0;
	int_a = int_a;
	short_b = short_a * short_b;
	methbed_open(float_a);

	float_b = float_b / float_a;
	unsigned_int_a = unsigned_int_a + unsigned_int_b;
	double_b = double_a + double_b;
	int looper_a = 0;
	while(looper_a < 9)
	{
		looper_a += 1;
		{
			int int_a = 0;
			short short_a = 0;
			short short_b = 0;
			float float_a = 0;
			float float_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			char char_b = 0;
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			int int_b = 0;
			double double_f = 0;
			double double_g = 0;
			long long_d = 0;
			int int_c = 0;
			int int_e = 0;
			double double_h = 0;
			char char_c = 0;
			double double_k = 0;
			float float_c = 0;
			float float_d = 0;
			char char_a = 0;
			float float_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_i = 0;
			double double_j = 0;
			double double_l = 0;
			unsigned int unsigned_int_e = 0;
			int int_d = 0;
			unsigned int unsigned_int_f = 0;
			unsigned int unsigned_int_g = 0;
			double_b = cos ( double_a ) ;
			double_a = log10 ( double_a ) ;
			float_b = float_c;
			short_a = short_a;
			int_a = int_a;
			double_b = log10 ( double_a ) ;
			double_b = asin ( double_a ) ;
			unsigned_int_a = unsigned_int_b;
			float_d = float_b + float_a;
			short_b = short_a;
			double_b = tan ( double_c ) ;
			double_d = log10 ( double_c ) ;
			unsigned_int_b = unsigned_int_a / unsigned_int_a;
			double_d = asin ( double_b ) ;
			double_e = double_e;
			char_a = char_b;
			long_a = long_a + long_a;
			double_b = tan ( double_d ) ;
			float_e = float_b;
			double_b = ceil ( double_d ) ;
			methbed_close(long_b);

			long_c = long_b;
			return int_b;
			double_b = double_f;
			double_g = cos ( double_d ) ;
		}
	}
	if(1)
	{
		long_c = long_d;
		int_c = int_a;
		double_f = exp ( double_a ) ;
	}
	int_b = int_a - int_c;
	if(1)
	{
		free_methbed();

		double_a = floor ( double_a ) ;
	}
	else
	{
		int int_a = 0;
		short short_a = 0;
		short short_b = 0;
		float float_a = 0;
		float float_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		char char_b = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		int int_b = 0;
		double double_f = 0;
		double double_g = 0;
		long long_d = 0;
		int int_c = 0;
		int int_e = 0;
		double double_h = 0;
		char char_c = 0;
		double double_k = 0;
		float float_c = 0;
		float float_d = 0;
		char char_a = 0;
		float float_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_i = 0;
		double double_j = 0;
		double double_l = 0;
		unsigned int unsigned_int_e = 0;
		int int_d = 0;
		unsigned int unsigned_int_f = 0;
		unsigned int unsigned_int_g = 0;
		unsigned_int_c = unsigned_int_c;
	}
	double_a = atan ( double_b ) ;
	int looper_b = 0;
	while(looper_b < 7)
	{
		int int_a = 0;
		short short_a = 0;
		short short_b = 0;
		float float_a = 0;
		float float_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		char char_b = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		int int_b = 0;
		double double_f = 0;
		double double_g = 0;
		long long_d = 0;
		int int_c = 0;
		int int_e = 0;
		double double_h = 0;
		char char_c = 0;
		double double_k = 0;
		float float_c = 0;
		float float_d = 0;
		char char_a = 0;
		float float_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_i = 0;
		double double_j = 0;
		double double_l = 0;
		unsigned int unsigned_int_e = 0;
		int int_d = 0;
		unsigned int unsigned_int_f = 0;
		unsigned int unsigned_int_g = 0;
		looper_b += 1;
		unsigned_int_d = unsigned_int_d;
		if(1)
		{
			int int_a = 0;
			short short_a = 0;
			short short_b = 0;
			float float_a = 0;
			float float_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			char char_b = 0;
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			int int_b = 0;
			double double_f = 0;
			double double_g = 0;
			long long_d = 0;
			int int_c = 0;
			int int_e = 0;
			double double_h = 0;
			char char_c = 0;
			double double_k = 0;
			float float_c = 0;
			float float_d = 0;
			char char_a = 0;
			float float_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_i = 0;
			double double_j = 0;
			double double_l = 0;
			unsigned int unsigned_int_e = 0;
			int int_d = 0;
			unsigned int unsigned_int_f = 0;
			unsigned int unsigned_int_g = 0;
			unsigned_int_b = unsigned_int_e / unsigned_int_a;
		}
		if(1)
		{
			for(int looper_c=0; looper_c<3;looper_c++)
			{
				int int_a = 0;
				short short_a = 0;
				short short_b = 0;
				float float_a = 0;
				float float_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				char char_b = 0;
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				int int_b = 0;
				double double_f = 0;
				double double_g = 0;
				long long_d = 0;
				int int_c = 0;
				int int_e = 0;
				double double_h = 0;
				char char_c = 0;
				double double_k = 0;
				float float_c = 0;
				float float_d = 0;
				char char_a = 0;
				float float_e = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_i = 0;
				double double_j = 0;
				double double_l = 0;
				unsigned int unsigned_int_e = 0;
				int int_d = 0;
				unsigned int unsigned_int_f = 0;
				unsigned int unsigned_int_g = 0;
				double_g = atan2 ( double_c , double_b ) ;
				int_d = int_a;
			}
		}
		int_e = int_b;
		double_d = acos ( double_h ) ;
		double_d = sqrt ( double_c ) ;
		double_f = tan ( double_e ) ;
		unsigned_int_a = unsigned_int_a * unsigned_int_a;
		double_b = meth_emission(int_c,int_a);

		double_f = sinh ( double_i ) ;
		double_d = exp ( double_j ) ;
		double_e = acos ( double_c ) ;
		if(1)
		{
			double_d = cos ( double_h ) ;
			for(int looper_d=0; looper_d<10;looper_d++)
			{
				double_c = double_f / double_c;
				if(1)
				{
					double_f = sinh ( double_h ) ;
					if(1)
					{
						long_a = long_b;
					}
				}
				else
				{
					if(1)
					{
						double_c = log ( double_h ) ;
						long_a = long_d + long_a;
					}
				}
			}
			if(1)
			{
				int_c = methbed_get_chrom1(char_c);

				double_k = fmod ( double_k , double_f ) ;
			}
			long_b = long_c + long_a;
		}
		else
		{
			for(int looper_e=0; looper_e<7;looper_e++)
			{
				int int_a = 0;
				short short_a = 0;
				short short_b = 0;
				float float_a = 0;
				float float_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				char char_b = 0;
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				int int_b = 0;
				double double_f = 0;
				double double_g = 0;
				long long_d = 0;
				int int_c = 0;
				int int_e = 0;
				double double_h = 0;
				char char_c = 0;
				double double_k = 0;
				float float_c = 0;
				float float_d = 0;
				char char_a = 0;
				float float_e = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_i = 0;
				double double_j = 0;
				double double_l = 0;
				unsigned int unsigned_int_e = 0;
				int int_d = 0;
				unsigned int unsigned_int_f = 0;
				unsigned int unsigned_int_g = 0;
				unsigned_int_f = unsigned_int_g;
				double_e = sinh ( double_l ) ;
			}
			double_h = acos ( double_h ) ;
		}
		double_g = exp ( double_i ) ;
		double_l = double_b;
		double_b = double_g;
		double_j = log ( double_l ) ;
	}
	double_g = sinh ( double_a ) ;
	double_g = sinh ( double_f ) ;
	double_f = sqrt ( double_e ) ;
	char_c = char_c * char_b;
	char controller_j[1];
	scanf("%1s", controller_j);
	if( controller_j >"z" )
	{
		double_h = asin ( double_k ) ;
	}
	return int_e;
}
long bam_get_bsstrand( int parameter_1)
{
	float float_a = 0;
	float float_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	short short_a = 0;
	float_b = float_a / float_b;
	unsigned_int_b = unsigned_int_a + unsigned_int_b;
	if(1)
	{
		double_a = double_a / double_b;
		if(1)
		{
			return long_a;
		}
		if(1)
		{
			return long_a;
		}
		else
		{
			float float_a = 0;
			float float_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_a = 0;
			double double_b = 0;
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			short short_a = 0;
			short_a = short_a;
			long_b = long_b * long_c;
			double_a = fabs ( double_a ) ;
		}
	}
	double_a = sinh ( double_c ) ;
	if(1)
	{
		double_b = sinh ( double_a ) ;
		if(1)
		{
			return long_b;
		}
		if(1)
		{
			return long_b;
		}
		if(1)
		{
			return long_a;
		}
	}
	double_d = cosh ( double_b ) ;
	if(1)
	{
		double_c = tan ( double_a ) ;
		if(1)
		{
			return long_c;
		}
		if(1)
		{
			return long_c;
		}
	}
	double_e = exp ( double_e ) ;
	double_b = acos ( double_d ) ;
	return long_b;
}
short flush_dangling_reads( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4,double parameter_5,double parameter_6)
{
	float float_a = 0;
	float float_b = 0;
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	unsigned int unsigned_int_d = 0;
	double double_d = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_c = 0;
	short short_a = 0;
	int int_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_b = 0;
	float_b = float_a / float_a;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		if(1)
		{
			float float_a = 0;
			float float_b = 0;
			long long_a = 0;
			long long_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_a = 0;
			unsigned int unsigned_int_d = 0;
			double double_d = 0;
			unsigned int unsigned_int_e = 0;
			unsigned int unsigned_int_c = 0;
			short short_a = 0;
			int int_a = 0;
			double double_b = 0;
			double double_c = 0;
			short short_b = 0;
			long_a = long_b;
			if(1)
			{
				float float_a = 0;
				float float_b = 0;
				long long_a = 0;
				long long_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_a = 0;
				unsigned int unsigned_int_d = 0;
				double double_d = 0;
				unsigned int unsigned_int_e = 0;
				unsigned int unsigned_int_c = 0;
				short short_a = 0;
				int int_a = 0;
				double double_b = 0;
				double double_c = 0;
				short short_b = 0;
				if(1)
				{
					float float_a = 0;
					float float_b = 0;
					long long_a = 0;
					long long_b = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					double double_a = 0;
					unsigned int unsigned_int_d = 0;
					double double_d = 0;
					unsigned int unsigned_int_e = 0;
					unsigned int unsigned_int_c = 0;
					short short_a = 0;
					int int_a = 0;
					double double_b = 0;
					double double_c = 0;
					short short_b = 0;
					unsigned_int_a = unsigned_int_a * unsigned_int_b;
					short_a = short_a;
				}
				unsigned_int_c = unsigned_int_c - unsigned_int_c;
				double_a = fmod ( double_a , double_a ) ;
				unsigned_int_a = unsigned_int_d;
			}
			if(1)
			{
				float float_a = 0;
				float float_b = 0;
				long long_a = 0;
				long long_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_a = 0;
				unsigned int unsigned_int_d = 0;
				double double_d = 0;
				unsigned int unsigned_int_e = 0;
				unsigned int unsigned_int_c = 0;
				short short_a = 0;
				int int_a = 0;
				double double_b = 0;
				double double_c = 0;
				short short_b = 0;
				if(1)
				{
					float float_a = 0;
					float float_b = 0;
					long long_a = 0;
					long long_b = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					double double_a = 0;
					unsigned int unsigned_int_d = 0;
					double double_d = 0;
					unsigned int unsigned_int_e = 0;
					unsigned int unsigned_int_c = 0;
					short short_a = 0;
					int int_a = 0;
					double double_b = 0;
					double double_c = 0;
					short short_b = 0;
					double_b = sinh ( double_c ) ;
					short_b = short_b;
				}
				int_a = int_a;
				double_d = floor ( double_d ) ;
				unsigned_int_a = unsigned_int_b + unsigned_int_d;
			}
			unsigned_int_e = unsigned_int_a / unsigned_int_b;
			double_d = tan ( double_a ) ;
		}
	}
}
double sum_qual( char parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	char char_a = 0;
	char char_b = 0;
	double double_d = 0;
	if(1)
	{
		return double_a;
	}
	double_b = atan2 ( double_a , double_c ) ;
	char_a = char_b;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double_d = double_c + double_c;
	}
	return double_d;
}
void resolve_dup( double parameter_1,float parameter_2,long parameter_3,short parameter_4,double parameter_5,unsigned int parameter_6)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_f = 0;
	double double_g = 0;
	char char_a = 0;
	int int_a = 0;
	long long_a = 0;
	int int_b = 0;
	int int_c = 0;
	double double_e = 0;
	float float_b = 0;
	int int_d = 0;
	double double_d = 0;
	float float_a = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	int int_e = 0;
	double_a = fabs ( double_a ) ;
	double_b = pow ( double_c , double_b ) ;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_f = 0;
			double double_g = 0;
			char char_a = 0;
			int int_a = 0;
			long long_a = 0;
			int int_b = 0;
			int int_c = 0;
			double double_e = 0;
			float float_b = 0;
			int int_d = 0;
			double double_d = 0;
			float float_a = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			int int_e = 0;
			double_b = ldexp ( double_b , int_a ) ;
			long_a = long_a;
			int_a = int_b * int_c;
			double_b = log ( double_c ) ;
			for(int looper_b=0; looper_b<10;looper_b++)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_f = 0;
				double double_g = 0;
				char char_a = 0;
				int int_a = 0;
				long long_a = 0;
				int int_b = 0;
				int int_c = 0;
				double double_e = 0;
				float float_b = 0;
				int int_d = 0;
				double double_d = 0;
				float float_a = 0;
				double double_h = 0;
				double double_i = 0;
				double double_j = 0;
				int int_e = 0;
				double_d = sinh ( double_e ) ;
				double_f = double_d + double_d;
				if(1)
				{
					double_g = sum_qual(char_a);

					double_f = pow ( double_a , double_g ) ;
					int_a = int_a;
				}
			}
			double_c = acos ( double_c ) ;
			for(int looper_c=0; looper_c<8;looper_c++)
			{
				int_a = int_c + int_b;
				if(1)
				{
					double_g = asin ( double_c ) ;
				}
			}
			if(1)
			{
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					double double_f = 0;
					double double_g = 0;
					char char_a = 0;
					int int_a = 0;
					long long_a = 0;
					int int_b = 0;
					int int_c = 0;
					double double_e = 0;
					float float_b = 0;
					int int_d = 0;
					double double_d = 0;
					float float_a = 0;
					double double_h = 0;
					double double_i = 0;
					double double_j = 0;
					int int_e = 0;
					?:
					float_a = float_b;
				}
			}
			for(int looper_d=0; looper_d<6;looper_d++)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_f = 0;
				double double_g = 0;
				char char_a = 0;
				int int_a = 0;
				long long_a = 0;
				int int_b = 0;
				int int_c = 0;
				double double_e = 0;
				float float_b = 0;
				int int_d = 0;
				double double_d = 0;
				float float_a = 0;
				double double_h = 0;
				double double_i = 0;
				double double_j = 0;
				int int_e = 0;
				double_f = sinh ( double_e ) ;
				if(1)
				{
					if(1)
					{
						double_g = tan ( double_g ) ;
					}
					else
					{
						double_f = ldexp ( double_h , int_b ) ;
					}
					if(1)
					{
						float_b = float_b * float_b;
					}
					if(1)
					{
						double double_a = 0;
						double double_b = 0;
						double double_c = 0;
						double double_f = 0;
						double double_g = 0;
						char char_a = 0;
						int int_a = 0;
						long long_a = 0;
						int int_b = 0;
						int int_c = 0;
						double double_e = 0;
						float float_b = 0;
						int int_d = 0;
						double double_d = 0;
						float float_a = 0;
						double double_h = 0;
						double double_i = 0;
						double double_j = 0;
						int int_e = 0;
						double_i = tan ( double_a ) ;
					}
				}
				if(1)
				{
					if(1)
					{
						double double_a = 0;
						double double_b = 0;
						double double_c = 0;
						double double_f = 0;
						double double_g = 0;
						char char_a = 0;
						int int_a = 0;
						long long_a = 0;
						int int_b = 0;
						int int_c = 0;
						double double_e = 0;
						float float_b = 0;
						int int_d = 0;
						double double_d = 0;
						float float_a = 0;
						double double_h = 0;
						double double_i = 0;
						double double_j = 0;
						int int_e = 0;
						double_f = tanh ( double_h ) ;
						double_g = tan ( double_j ) ;
					}
					if(1)
					{
						double double_a = 0;
						double double_b = 0;
						double double_c = 0;
						double double_f = 0;
						double double_g = 0;
						char char_a = 0;
						int int_a = 0;
						long long_a = 0;
						int int_b = 0;
						int int_c = 0;
						double double_e = 0;
						float float_b = 0;
						int int_d = 0;
						double double_d = 0;
						float float_a = 0;
						double double_h = 0;
						double double_i = 0;
						double double_j = 0;
						int int_e = 0;
						int_e = int_d / int_c;
						int_a = int_c - int_e;
					}
				}
				double_g = double_f;
			}
			int_b = int_d;
		}
	}
	double_a = acos ( double_f ) ;
}
int mark_dup( char parameter_1,char parameter_2,int parameter_3)
{
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	double double_c = 0;
	int int_b = 0;
	int int_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	long long_a = 0;
	long long_b = 0;
	double double_e = 0;
	char char_a = 0;
	double double_f = 0;
	short short_a = 0;
	char char_b = 0;
	double double_h = 0;
	double double_i = 0;
	long long_c = 0;
	int int_d = 0;
	char char_c = 0;
	unsigned int unsigned_int_d = 0;
	char char_e = 0;
	unsigned int unsigned_int_e = 0;
	short short_b = 0;
	float float_d = 0;
	int int_e = 0;
	double double_l = 0;
	unsigned int unsigned_int_f = 0;
	double double_m = 0;
	unsigned int unsigned_int_h = 0;
	double double_g = 0;
	float float_c = 0;
	double double_j = 0;
	double double_k = 0;
	char char_d = 0;
	unsigned int unsigned_int_g = 0;
	float_a = float_b;
	double_a = cosh ( double_b ) ;
	if(1)
	{
		int_a = int_a;
		double_a = fmod ( double_c , double_b ) ;
		int_b = int_b - int_a;
	}
	double_b = ldexp ( double_c , int_c ) ;
	if(1)
	{
		float_a = float_a;
		double_b = floor ( double_b ) ;
		int_b = int_a - int_b;
	}
	double_a = log ( double_b ) ;
	double_a = sqrt ( double_d ) ;
	unsigned_int_c = unsigned_int_a * unsigned_int_b;
	long_a = long_b;
	double_e = log10 ( double_c ) ;
	unsigned_int_b = unsigned_int_b - unsigned_int_b;
	char_a = char_a + char_a;
	int looper_a = 0;
	while(looper_a < 2)
	{
		float float_a = 0;
		float float_b = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		double double_c = 0;
		int int_b = 0;
		int int_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_e = 0;
		char char_a = 0;
		double double_f = 0;
		short short_a = 0;
		char char_b = 0;
		double double_h = 0;
		double double_i = 0;
		long long_c = 0;
		int int_d = 0;
		char char_c = 0;
		unsigned int unsigned_int_d = 0;
		char char_e = 0;
		unsigned int unsigned_int_e = 0;
		short short_b = 0;
		float float_d = 0;
		int int_e = 0;
		double double_l = 0;
		unsigned int unsigned_int_f = 0;
		double double_m = 0;
		unsigned int unsigned_int_h = 0;
		double double_g = 0;
		float float_c = 0;
		double double_j = 0;
		double double_k = 0;
		char char_d = 0;
		unsigned int unsigned_int_g = 0;
		looper_a += 1;
		double_e = cos ( double_e ) ;
		int_a = int_b * int_c;
		double_d = sum_qual(char_a);

		double_d = fmod ( double_a , double_c ) ;
		if(1)
		{
			double_f = double_d;
			if(1)
			{
				double_a = double_e;
			}
			double_a = ceil ( double_c ) ;
			short_a = short_a + short_a;
		}
		if(1)
		{
			double_b = log10 ( double_g ) ;
		}
		short_a = flush_dangling_reads(unsigned_int_b,long_b,char_b,long_b,double_f,double_c);

		int_c = int_c;
		if(1)
		{
			double_a = floor ( double_d ) ;
			double_b = exp ( double_h ) ;
			double_e = log ( double_c ) ;
			if(1)
			{
				double_c = sinh ( double_b ) ;
				float_a = float_c;
				double_b = asin ( double_i ) ;
			}
			else
			{
				long_c = long_a;
			}
			double_c = floor ( double_c ) ;
			if(1)
			{
				double_e = fmod ( double_b , double_c ) ;
				long_b = bam_get_bsstrand(int_d);

				int_c = int_a - int_b;
			}
			if(1)
			{
				float float_a = 0;
				float float_b = 0;
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				double double_c = 0;
				int int_b = 0;
				int int_c = 0;
				double double_d = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				long long_a = 0;
				long long_b = 0;
				double double_e = 0;
				char char_a = 0;
				double double_f = 0;
				short short_a = 0;
				char char_b = 0;
				double double_h = 0;
				double double_i = 0;
				long long_c = 0;
				int int_d = 0;
				char char_c = 0;
				unsigned int unsigned_int_d = 0;
				char char_e = 0;
				unsigned int unsigned_int_e = 0;
				short short_b = 0;
				float float_d = 0;
				int int_e = 0;
				double double_l = 0;
				unsigned int unsigned_int_f = 0;
				double double_m = 0;
				unsigned int unsigned_int_h = 0;
				double double_g = 0;
				float float_c = 0;
				double double_j = 0;
				double double_k = 0;
				char char_d = 0;
				unsigned int unsigned_int_g = 0;
				char_c = char_d;
				float_b = float_a;
			}
			else
			{
				unsigned_int_c = unsigned_int_b;
			}
			if(1)
			{
				?:
				unsigned_int_a = unsigned_int_d;
				?:
				double_d = tanh ( double_a ) ;
				char controller_k[5];
				scanf("%5s", controller_k);
				if( controller_k <"(?hCV" )
				{
					double_i = cosh ( double_f ) ;
				}
				else
				{
					if(1)
					{
						double_h = sinh ( double_a ) ;
					}
					if(1)
					{
						double_i = double_j + double_a;
					}
					if(1)
					{
						if(1)
						{
							double_b = atan ( double_j ) ;
							int_c = int_d - int_a;
						}
						double_j = cos ( double_e ) ;
					}
					else
					{
						if(1)
						{
							double_d = double_i;
							double_j = tanh ( double_j ) ;
						}
						?:
						double_b = fmod ( double_i , double_k ) ;
					}
				}
				double_g = tanh ( double_c ) ;
				char_b = char_e;
				if(1)
				{
					double_b = cos ( double_b ) ;
					double_e = sqrt ( double_a ) ;
				}
				else
				{
					double_g = double_g - double_d;
				}
				double_d = double_a - double_j;
				unsigned_int_d = unsigned_int_e - unsigned_int_a;
			}
		}
		else
		{
			unsigned_int_c = unsigned_int_c - unsigned_int_e;
			unsigned_int_c = unsigned_int_b;
			short_a = short_b * short_b;
			double_g = tanh ( double_g ) ;
			float_c = float_d / float_c;
			int_b = int_a * int_e;
			if(1)
			{
				short_b = short_b * short_a;
			}
			else
			{
				double_f = double_h / double_j;
			}
			double_a = asin ( double_i ) ;
			double_k = fmod ( double_l , double_d ) ;
			double_e = log10 ( double_j ) ;
			if(1)
			{
				float float_a = 0;
				float float_b = 0;
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				double double_c = 0;
				int int_b = 0;
				int int_c = 0;
				double double_d = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				long long_a = 0;
				long long_b = 0;
				double double_e = 0;
				char char_a = 0;
				double double_f = 0;
				short short_a = 0;
				char char_b = 0;
				double double_h = 0;
				double double_i = 0;
				long long_c = 0;
				int int_d = 0;
				char char_c = 0;
				unsigned int unsigned_int_d = 0;
				char char_e = 0;
				unsigned int unsigned_int_e = 0;
				short short_b = 0;
				float float_d = 0;
				int int_e = 0;
				double double_l = 0;
				unsigned int unsigned_int_f = 0;
				double double_m = 0;
				unsigned int unsigned_int_h = 0;
				double double_g = 0;
				float float_c = 0;
				double double_j = 0;
				double double_k = 0;
				char char_d = 0;
				unsigned int unsigned_int_g = 0;
				unsigned_int_d = unsigned_int_f;
				unsigned_int_g = unsigned_int_g;
			}
			else
			{
				double_b = exp ( double_l ) ;
			}
			int_d = int_e * int_e;
		}
	}
	int_d = int_e * int_b;
	resolve_dup(double_a,float_d,long_b,short_b,double_a,unsigned_int_d);

	double_m = fabs ( double_a ) ;
	double_d = pow ( double_i , double_l ) ;
	unsigned_int_a = unsigned_int_d - unsigned_int_e;
	double_c = double_l - double_m;
	double_l = asin ( double_f ) ;
	double_l = double_f / double_a;
	char_b = char_e - char_c;
	long_c = long_b;
	int_a = int_a;
	double_i = pow ( double_l , double_f ) ;
	unsigned_int_h = unsigned_int_a + unsigned_int_f;
	double_h = atan ( double_b ) ;
	double_l = tanh ( double_a ) ;
	double_h = double_m;
	return int_b;
}
int main_markdup( int parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	char char_a = 0;
	double double_c = 0;
	int int_b = 0;
	int int_d = 0;
	short short_c = 0;
	double double_d = 0;
	double double_f = 0;
	int int_f = 0;
	float float_a = 0;
	int int_c = 0;
	short short_a = 0;
	short short_b = 0;
	short short_d = 0;
	int int_e = 0;
	double double_e = 0;
	double_a = log10 ( double_a ) ;
	double_b = fmod ( double_a , double_b ) ;
	if(1)
	{
		return int_a;
	}
	int looper_a = 0;
	while(looper_a < 9)
	{
		looper_a += 1;
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			char char_a = 0;
			double double_c = 0;
			int int_b = 0;
			int int_d = 0;
			short short_c = 0;
			double double_d = 0;
			double double_f = 0;
			int int_f = 0;
			float float_a = 0;
			int int_c = 0;
			short short_a = 0;
			short short_b = 0;
			short short_d = 0;
			int int_e = 0;
			double double_e = 0;
			double_a = double_b;
			int_a = mark_dup(char_a,char_a,int_a);

			double_a = double_b + double_b;
			double_b = cos ( double_b ) ;
			double_a = sqrt ( double_c ) ;
			float_a = float_a;
			int_a = usage(double_a);

			int_d = int_b - int_c;
			return int_b;
			short_c = short_a / short_b;
		}
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		char char_a = 0;
		double double_c = 0;
		int int_b = 0;
		int int_d = 0;
		short short_c = 0;
		double double_d = 0;
		double double_f = 0;
		int int_f = 0;
		float float_a = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_d = 0;
		int int_e = 0;
		double double_e = 0;
		short_c = short_d - short_c;
		double_b = exp ( double_d ) ;
	}
	double_c = ldexp ( double_a , int_d ) ;
	double_a = cos ( double_a ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		char char_a = 0;
		double double_c = 0;
		int int_b = 0;
		int int_d = 0;
		short short_c = 0;
		double double_d = 0;
		double double_f = 0;
		int int_f = 0;
		float float_a = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_d = 0;
		int int_e = 0;
		double double_e = 0;
		int_b = int_e;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		char char_a = 0;
		double double_c = 0;
		int int_b = 0;
		int int_d = 0;
		short short_c = 0;
		double double_d = 0;
		double double_f = 0;
		int int_f = 0;
		float float_a = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_d = 0;
		int int_e = 0;
		double double_e = 0;
		double_d = log ( double_d ) ;
		double_e = double_b;
		double_b = fmod ( double_b , double_d ) ;
	}
	double_f = fabs ( double_f ) ;
	int_f = int_b * int_d;
	return int_f;
}
float pileup_parse_region( float parameter_1,int parameter_3,int parameter_4,int parameter_5)
{
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	double_a = fabs ( double_a ) ;
	char controller_a[3];
	scanf("%3s", controller_a);
	if( controller_a <"1pg" )
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		int_a = int_a * int_a;
		double_a = ldexp ( double_a , int_b ) ;
		double_a = cos ( double_a ) ;
		unsigned_int_a = unsigned_int_a;
		double_b = atan2 ( double_a , double_b ) ;
	}
	else
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		double_b = fmod ( double_c , double_b ) ;
		double_c = exp ( double_b ) ;
		int_b = int_a;
	}
}
void free_refcache( unsigned int parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_a = 0;
	short short_b = 0;
	if(1)
	{
		double_a = floor ( double_a ) ;
	}
	char controller_b[4];
	scanf("%4s", controller_b);
	if( controller_b >",7`m" )
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		short short_a = 0;
		short short_b = 0;
		short_a = short_b;
	}
	double_a = pow ( double_a , double_b ) ;
	double_c = ceil ( double_b ) ;
}
unsigned int format_epiread( char parameter_1,unsigned int parameter_2,unsigned int parameter_3,char parameter_4,char parameter_5,int parameter_6,short parameter_7,int parameter_8,long parameter_9)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	long long_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	int int_b = 0;
	float float_a = 0;
	double double_f = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	short short_a = 0;
	int int_c = 0;
	int int_d = 0;
	double double_h = 0;
	int int_e = 0;
	int int_f = 0;
	double double_i = 0;
	int int_g = 0;
	unsigned int unsigned_int_b = 0;
	char char_d = 0;
	char char_f = 0;
	double double_j = 0;
	double double_k = 0;
	short short_d = 0;
	double double_l = 0;
	double double_m = 0;
	double double_g = 0;
	float float_b = 0;
	long long_b = 0;
	unsigned int unsigned_int_c = 0;
	long long_c = 0;
	char char_e = 0;
	short short_b = 0;
	short short_c = 0;
	double_a = double_b;
	double_b = ldexp ( double_b , int_a ) ;
	long_a = long_a;
	double_b = tanh ( double_a ) ;
	double_a = exp ( double_b ) ;
	double_c = floor ( double_c ) ;
	double_b = sqrt ( double_d ) ;
	double_c = asin ( double_e ) ;
	double_b = floor ( double_b ) ;
	unsigned_int_a = kputc(int_b,float_a);

	double_e = cosh ( double_c ) ;
	double_c = asin ( double_a ) ;
	double_f = log10 ( double_f ) ;
	double_b = tanh ( double_d ) ;
	char_c = char_a / char_b;
	double_b = floor ( double_b ) ;
	double_d = log ( double_e ) ;
	double_f = asin ( double_c ) ;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		double_f = exp ( double_b ) ;
		unsigned_int_a = unsigned_int_a;
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			long long_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			unsigned int unsigned_int_a = 0;
			int int_b = 0;
			float float_a = 0;
			double double_f = 0;
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			short short_a = 0;
			int int_c = 0;
			int int_d = 0;
			double double_h = 0;
			int int_e = 0;
			int int_f = 0;
			double double_i = 0;
			int int_g = 0;
			unsigned int unsigned_int_b = 0;
			char char_d = 0;
			char char_f = 0;
			double double_j = 0;
			double double_k = 0;
			short short_d = 0;
			double double_l = 0;
			double double_m = 0;
			double double_g = 0;
			float float_b = 0;
			long long_b = 0;
			unsigned int unsigned_int_c = 0;
			long long_c = 0;
			char char_e = 0;
			short short_b = 0;
			short short_c = 0;
			for(int looper_b=0; looper_b<10;looper_b++)
			{
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				long long_a = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				unsigned int unsigned_int_a = 0;
				int int_b = 0;
				float float_a = 0;
				double double_f = 0;
				char char_a = 0;
				char char_b = 0;
				char char_c = 0;
				short short_a = 0;
				int int_c = 0;
				int int_d = 0;
				double double_h = 0;
				int int_e = 0;
				int int_f = 0;
				double double_i = 0;
				int int_g = 0;
				unsigned int unsigned_int_b = 0;
				char char_d = 0;
				char char_f = 0;
				double double_j = 0;
				double double_k = 0;
				short short_d = 0;
				double double_l = 0;
				double double_m = 0;
				double double_g = 0;
				float float_b = 0;
				long long_b = 0;
				unsigned int unsigned_int_c = 0;
				long long_c = 0;
				char char_e = 0;
				short short_b = 0;
				short short_c = 0;
				float_a = kputs(short_a,short_a);

				double_c = log10 ( double_b ) ;
				int_a = int_c + int_b;
				if(1)
				{
					if(1)
					{
						if(1)
						{
							double_g = fmod ( double_c , double_c ) ;
							int_d = int_b - int_b;
							if(1)
							{
								if(1)
								{
									long_b = long_b / long_b;
								}
								if(1)
								{
									double_b = double_a / double_b;
								}
								if(1)
								{
									double_e = cosh ( double_h ) ;
								}
								else
								{
									int_e = int_f;
								}
							}
							if(1)
							{
								if(1)
								{
									double_h = log ( double_i ) ;
								}
								if(1)
								{
									int_e = int_d * int_g;
								}
								if(1)
								{
									int_g = int_d;
								}
								else
								{
									double_d = asin ( double_c ) ;
								}
							}
						}
					}
					else
					{
						unsigned_int_a = unsigned_int_b;
						if(1)
						{
							if(1)
							{
								int_g = int_d / int_a;
							}
							if(1)
							{
								int_d = int_e * int_g;
							}
							if(1)
							{
								double_b = fabs ( double_c ) ;
							}
							else
							{
								double_g = double_i * double_h;
							}
						}
					}
				}
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					int int_a = 0;
					long long_a = 0;
					double double_c = 0;
					double double_d = 0;
					double double_e = 0;
					unsigned int unsigned_int_a = 0;
					int int_b = 0;
					float float_a = 0;
					double double_f = 0;
					char char_a = 0;
					char char_b = 0;
					char char_c = 0;
					short short_a = 0;
					int int_c = 0;
					int int_d = 0;
					double double_h = 0;
					int int_e = 0;
					int int_f = 0;
					double double_i = 0;
					int int_g = 0;
					unsigned int unsigned_int_b = 0;
					char char_d = 0;
					char char_f = 0;
					double double_j = 0;
					double double_k = 0;
					short short_d = 0;
					double double_l = 0;
					double double_m = 0;
					double double_g = 0;
					float float_b = 0;
					long long_b = 0;
					unsigned int unsigned_int_c = 0;
					long long_c = 0;
					char char_e = 0;
					short short_b = 0;
					short short_c = 0;
					if(1)
					{
						if(1)
						{
							double double_a = 0;
							double double_b = 0;
							int int_a = 0;
							long long_a = 0;
							double double_c = 0;
							double double_d = 0;
							double double_e = 0;
							unsigned int unsigned_int_a = 0;
							int int_b = 0;
							float float_a = 0;
							double double_f = 0;
							char char_a = 0;
							char char_b = 0;
							char char_c = 0;
							short short_a = 0;
							int int_c = 0;
							int int_d = 0;
							double double_h = 0;
							int int_e = 0;
							int int_f = 0;
							double double_i = 0;
							int int_g = 0;
							unsigned int unsigned_int_b = 0;
							char char_d = 0;
							char char_f = 0;
							double double_j = 0;
							double double_k = 0;
							short short_d = 0;
							double double_l = 0;
							double double_m = 0;
							double double_g = 0;
							float float_b = 0;
							long long_b = 0;
							unsigned int unsigned_int_c = 0;
							long long_c = 0;
							char char_e = 0;
							short short_b = 0;
							short short_c = 0;
							long_b = long_b + long_c;
							char_d = char_d / char_e;
							if(1)
							{
								if(1)
								{
									char_b = char_c;
								}
								if(1)
								{
									unsigned_int_c = unsigned_int_a + unsigned_int_a;
								}
								if(1)
								{
									double_g = cosh ( double_a ) ;
								}
								else
								{
									double_a = fabs ( double_b ) ;
								}
							}
							if(1)
							{
								if(1)
								{
									char_f = char_b;
								}
								if(1)
								{
									unsigned_int_a = unsigned_int_a;
								}
								if(1)
								{
									double_h = double_h - double_j;
								}
								else
								{
									int_b = int_b / int_e;
								}
							}
						}
					}
					else
					{
						unsigned_int_a = unsigned_int_c;
						if(1)
						{
							if(1)
							{
								double_f = cosh ( double_a ) ;
							}
							if(1)
							{
								double_c = fmod ( double_c , double_f ) ;
							}
							if(1)
							{
								short_a = short_a;
							}
							else
							{
								double_e = double_a - double_e;
							}
						}
					}
				}
				double_g = acos ( double_f ) ;
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					int int_a = 0;
					long long_a = 0;
					double double_c = 0;
					double double_d = 0;
					double double_e = 0;
					unsigned int unsigned_int_a = 0;
					int int_b = 0;
					float float_a = 0;
					double double_f = 0;
					char char_a = 0;
					char char_b = 0;
					char char_c = 0;
					short short_a = 0;
					int int_c = 0;
					int int_d = 0;
					double double_h = 0;
					int int_e = 0;
					int int_f = 0;
					double double_i = 0;
					int int_g = 0;
					unsigned int unsigned_int_b = 0;
					char char_d = 0;
					char char_f = 0;
					double double_j = 0;
					double double_k = 0;
					short short_d = 0;
					double double_l = 0;
					double double_m = 0;
					double double_g = 0;
					float float_b = 0;
					long long_b = 0;
					unsigned int unsigned_int_c = 0;
					long long_c = 0;
					char char_e = 0;
					short short_b = 0;
					short short_c = 0;
					short_c = short_b + short_b;
					if(1)
					{
						double_i = double_a;
					}
				}
			}
			double_g = log10 ( double_g ) ;
			float_b = float_b;
			double_k = cos ( double_b ) ;
			int_c = ksprintf(int_f,short_d,unsigned_int_b);

			double_k = ceil ( double_c ) ;
			float_b = float_b;
			int_b = int_b;
			double_d = acos ( double_a ) ;
			double_l = tan ( double_h ) ;
		}
	}
	if(1)
	{
		?:
		double_l = tan ( double_i ) ;
		if(1)
		{
			?:
			?:
			char_d = char_f * char_a;
			if(1)
			{
				double_k = acos ( double_i ) ;
			}
			else
			{
				double_a = cos ( double_j ) ;
			}
			if(1)
			{
				double_j = acos ( double_b ) ;
			}
			else
			{
				double_b = double_c + double_d;
			}
			if(1)
			{
				double_f = double_b;
			}
			if(1)
			{
				double_a = ceil ( double_b ) ;
			}
			double_d = log ( double_h ) ;
		}
	}
	else
	{
		if(1)
		{
			?:
			?:
			int_g = int_b + int_g;
			if(1)
			{
				double_h = double_c / double_l;
			}
			else
			{
				double_a = exp ( double_l ) ;
			}
			char controller_O[1];
			scanf("%1s", controller_O);
			if( controller_O >"d" )
			{
				double_k = exp ( double_h ) ;
			}
			if(1)
			{
				int_d = int_e - int_a;
			}
			double_e = fabs ( double_k ) ;
		}
	}
	short_d = short_d / short_d;
	double_l = double_d + double_l;
	double_m = sqrt ( double_c ) ;
}
short refcache_getbase( short parameter_1,float parameter_2)
{
	short short_a = 0;
	double double_a = 0;
	double double_b = 0;
	if(1)
	{
		short short_a = 0;
		double double_a = 0;
		double double_b = 0;
		double_a = log ( double_b ) ;
	}
	return short_a;
}
float format_epiread_pairwise( long parameter_1,short parameter_2,unsigned int parameter_3,float parameter_4,char parameter_5,short parameter_6,float parameter_7,double parameter_8,float parameter_9)
{
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	short short_a = 0;
	short short_b = 0;
	float float_a = 0;
	double double_c = 0;
	double double_d = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	unsigned int unsigned_int_b = 0;
	double double_i = 0;
	unsigned int unsigned_int_c = 0;
	double double_k = 0;
	char char_a = 0;
	unsigned int unsigned_int_d = 0;
	double double_m = 0;
	double double_n = 0;
	int int_d = 0;
	unsigned int unsigned_int_e = 0;
	char char_c = 0;
	int int_e = 0;
	int int_f = 0;
	float float_b = 0;
	short short_c = 0;
	short short_d = 0;
	double double_l = 0;
	int int_c = 0;
	double double_j = 0;
	char char_b = 0;
	long long_b = 0;
	long long_c = 0;
	int_a = int_a;
	double_a = floor ( double_b ) ;
	long_a = long_a;
	short_a = refcache_getbase(short_b,float_a);

	int_a = int_a;
	if(1)
	{
		double_b = fabs ( double_c ) ;
		double_a = fmod ( double_c , double_b ) ;
		double_d = acos ( double_c ) ;
		double_d = exp ( double_b ) ;
	}
	else
	{
		int_b = ksprintf(int_a,short_a,unsigned_int_a);

		short_a = short_b;
		short_a = short_a;
	}
	double_e = log ( double_f ) ;
	double_g = atan ( double_g ) ;
	double_c = cos ( double_g ) ;
	double_f = sinh ( double_h ) ;
	double_b = double_h;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		short short_a = 0;
		short short_b = 0;
		float float_a = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		unsigned int unsigned_int_b = 0;
		double double_i = 0;
		unsigned int unsigned_int_c = 0;
		double double_k = 0;
		char char_a = 0;
		unsigned int unsigned_int_d = 0;
		double double_m = 0;
		double double_n = 0;
		int int_d = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		int int_e = 0;
		int int_f = 0;
		float float_b = 0;
		short short_c = 0;
		short short_d = 0;
		double double_l = 0;
		int int_c = 0;
		double double_j = 0;
		char char_b = 0;
		long long_b = 0;
		long long_c = 0;
		double_f = tanh ( double_c ) ;
		short_d = short_c / short_b;
		{
			int int_a = 0;
			double double_a = 0;
			double double_b = 0;
			long long_a = 0;
			short short_a = 0;
			short short_b = 0;
			float float_a = 0;
			double double_c = 0;
			double double_d = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			unsigned int unsigned_int_b = 0;
			double double_i = 0;
			unsigned int unsigned_int_c = 0;
			double double_k = 0;
			char char_a = 0;
			unsigned int unsigned_int_d = 0;
			double double_m = 0;
			double double_n = 0;
			int int_d = 0;
			unsigned int unsigned_int_e = 0;
			char char_c = 0;
			int int_e = 0;
			int int_f = 0;
			float float_b = 0;
			short short_c = 0;
			short short_d = 0;
			double double_l = 0;
			int int_c = 0;
			double double_j = 0;
			char char_b = 0;
			long long_b = 0;
			long long_c = 0;
			for(int looper_b=0; looper_b<6;looper_b++)
			{
				int int_a = 0;
				double double_a = 0;
				double double_b = 0;
				long long_a = 0;
				short short_a = 0;
				short short_b = 0;
				float float_a = 0;
				double double_c = 0;
				double double_d = 0;
				int int_b = 0;
				unsigned int unsigned_int_a = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				double double_h = 0;
				unsigned int unsigned_int_b = 0;
				double double_i = 0;
				unsigned int unsigned_int_c = 0;
				double double_k = 0;
				char char_a = 0;
				unsigned int unsigned_int_d = 0;
				double double_m = 0;
				double double_n = 0;
				int int_d = 0;
				unsigned int unsigned_int_e = 0;
				char char_c = 0;
				int int_e = 0;
				int int_f = 0;
				float float_b = 0;
				short short_c = 0;
				short short_d = 0;
				double double_l = 0;
				int int_c = 0;
				double double_j = 0;
				char char_b = 0;
				long long_b = 0;
				long long_c = 0;
				int_a = int_b;
				double_a = double_e;
				if(1)
				{
					if(1)
					{
						if(1)
						{
							unsigned_int_b = unsigned_int_b;
							double_d = log10 ( double_b ) ;
							if(1)
							{
								double_i = fabs ( double_d ) ;
								if(1)
								{
									double_h = sinh ( double_a ) ;
								}
								if(1)
								{
									double_b = acos ( double_e ) ;
								}
								else
								{
									double_g = pow ( double_j , double_j ) ;
								}
							}
							if(1)
							{
								double_i = acos ( double_c ) ;
								if(1)
								{
									unsigned_int_b = unsigned_int_c;
								}
								if(1)
								{
									double_i = log ( double_b ) ;
								}
								else
								{
									double_c = cosh ( double_j ) ;
								}
							}
						}
					}
					else
					{
						double_f = atan2 ( double_g , double_d ) ;
						if(1)
						{
							float_a = float_a / float_a;
							if(1)
							{
								double_g = double_i;
							}
							if(1)
							{
								double_h = sinh ( double_c ) ;
							}
							else
							{
								double_c = sqrt ( double_f ) ;
							}
						}
					}
				}
				if(1)
				{
					if(1)
					{
						if(1)
						{
							double_g = atan ( double_d ) ;
							double_c = tanh ( double_f ) ;
							if(1)
							{
								double_k = ceil ( double_l ) ;
								if(1)
								{
									double_i = tan ( double_k ) ;
								}
								if(1)
								{
									double_h = sqrt ( double_j ) ;
								}
								else
								{
									double_k = tanh ( double_f ) ;
								}
							}
							if(1)
							{
								double_e = asin ( double_b ) ;
								if(1)
								{
									double_g = ceil ( double_k ) ;
								}
								if(1)
								{
									double_c = ldexp ( double_i , int_a ) ;
								}
								else
								{
									int int_a = 0;
									double double_a = 0;
									double double_b = 0;
									long long_a = 0;
									short short_a = 0;
									short short_b = 0;
									float float_a = 0;
									double double_c = 0;
									double double_d = 0;
									int int_b = 0;
									unsigned int unsigned_int_a = 0;
									double double_e = 0;
									double double_f = 0;
									double double_g = 0;
									double double_h = 0;
									unsigned int unsigned_int_b = 0;
									double double_i = 0;
									unsigned int unsigned_int_c = 0;
									double double_k = 0;
									char char_a = 0;
									unsigned int unsigned_int_d = 0;
									double double_m = 0;
									double double_n = 0;
									int int_d = 0;
									unsigned int unsigned_int_e = 0;
									char char_c = 0;
									int int_e = 0;
									int int_f = 0;
									float float_b = 0;
									short short_c = 0;
									short short_d = 0;
									double double_l = 0;
									int int_c = 0;
									double double_j = 0;
									char char_b = 0;
									long long_b = 0;
									long long_c = 0;
									char_a = char_a - char_b;
								}
							}
						}
					}
					else
					{
						int_b = int_b / int_b;
						if(1)
						{
							unsigned_int_b = unsigned_int_b - unsigned_int_c;
							if(1)
							{
								unsigned_int_d = unsigned_int_d / unsigned_int_c;
							}
							if(1)
							{
								double_g = atan ( double_b ) ;
							}
							else
							{
								double_h = exp ( double_g ) ;
							}
						}
					}
				}
				double_c = pow ( double_e , double_m ) ;
				if(1)
				{
					int int_a = 0;
					double double_a = 0;
					double double_b = 0;
					long long_a = 0;
					short short_a = 0;
					short short_b = 0;
					float float_a = 0;
					double double_c = 0;
					double double_d = 0;
					int int_b = 0;
					unsigned int unsigned_int_a = 0;
					double double_e = 0;
					double double_f = 0;
					double double_g = 0;
					double double_h = 0;
					unsigned int unsigned_int_b = 0;
					double double_i = 0;
					unsigned int unsigned_int_c = 0;
					double double_k = 0;
					char char_a = 0;
					unsigned int unsigned_int_d = 0;
					double double_m = 0;
					double double_n = 0;
					int int_d = 0;
					unsigned int unsigned_int_e = 0;
					char char_c = 0;
					int int_e = 0;
					int int_f = 0;
					float float_b = 0;
					short short_c = 0;
					short short_d = 0;
					double double_l = 0;
					int int_c = 0;
					double double_j = 0;
					char char_b = 0;
					long long_b = 0;
					long long_c = 0;
					long_c = long_b - long_b;
					int_a = int_a - int_b;
				}
			}
			double_k = fmod ( double_f , double_l ) ;
			int_c = int_a;
			double_l = sinh ( double_n ) ;
			double_n = ldexp ( double_h , int_d ) ;
			unsigned_int_c = unsigned_int_d;
			unsigned_int_b = unsigned_int_e;
			char_c = char_a * char_a;
			int_c = int_e - int_f;
		}
	}
	for(int looper_c=0; looper_c<4;looper_c++)
	{
		if(1)
		{
		}
		if(1)
		{
			for(int looper_d=0; looper_d<4;looper_d++)
			{
				unsigned_int_d = unsigned_int_a / unsigned_int_c;
			}
			for(int looper_e=0; looper_e<8;looper_e++)
			{
				double_m = atan ( double_k ) ;
			}
		}
		else
		{
			for(int looper_f=0; looper_f<8;looper_f++)
			{
				unsigned_int_c = unsigned_int_b;
			}
		}
	}
	float_b = float_a;
	unsigned_int_a = unsigned_int_e / unsigned_int_d;
	if(1)
	{
		int_d = int_e * int_b;
		double_c = exp ( double_e ) ;
		double_c = cos ( double_d ) ;
		double_n = atan2 ( double_e , double_i ) ;
	}
	else
	{
		int_f = int_e / int_d;
		char_c = char_a;
	}
}
int cnt_retention( float parameter_1,unsigned int parameter_2)
{
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	int int_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	int int_c = 0;
	char char_a = 0;
	char char_b = 0;
	int int_b = 0;
	float_a = float_b;
	double_a = double_a;
	char controller_a[1];
	scanf("%1s", controller_a);
	if( controller_a <"4" )
	{
		return int_a;
	}
	double_a = sinh ( double_b ) ;
	double_b = floor ( double_c ) ;
	double_d = tan ( double_e ) ;
	double_f = fmod ( double_e , double_e ) ;
	double_f = double_a;
	double_c = acos ( double_a ) ;
	unsigned_int_a = unsigned_int_b;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		int_a = int_a + int_a;
		double_e = asin ( double_c ) ;
		{
			float float_a = 0;
			float float_b = 0;
			double double_a = 0;
			int int_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			int int_c = 0;
			char char_a = 0;
			char char_b = 0;
			int int_b = 0;
			for(int looper_b=0; looper_b<3;looper_b++)
			{
				double_g = exp ( double_c ) ;
				float_a = float_a;
				char controller_b[3];
				scanf("%3s", controller_b);
				if( controller_b <"ss1" )
				{
					float float_a = 0;
					float float_b = 0;
					double double_a = 0;
					int int_a = 0;
					double double_b = 0;
					double double_c = 0;
					double double_d = 0;
					double double_e = 0;
					double double_f = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					double double_g = 0;
					unsigned int unsigned_int_c = 0;
					int int_c = 0;
					char char_a = 0;
					char char_b = 0;
					int int_b = 0;
					int_b = int_b;
				}
				if(1)
				{
					double_d = tan ( double_e ) ;
				}
				else
				{
				}
			}
			double_c = cos ( double_d ) ;
			double_e = tanh ( double_g ) ;
			unsigned_int_c = unsigned_int_a;
			unsigned_int_a = unsigned_int_a + unsigned_int_a;
			int_c = int_c;
			char_a = char_b;
			double_f = floor ( double_b ) ;
		}
	}
	return int_a;
}
float infer_bsstrand( int parameter_1,int parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	float float_a = 0;
	double double_c = 0;
	float float_b = 0;
	char char_d = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	long long_a = 0;
	double double_d = 0;
	double double_e = 0;
	int int_c = 0;
	double double_f = 0;
	double double_g = 0;
	char char_c = 0;
	float float_c = 0;
	char * vul_var;
	double_a = cos ( double_b ) ;
	char_b = char_a + char_b;
	double_a = acos ( double_a ) ;
	float_a = float_a;
	double_c = log ( double_b ) ;
	float_a = float_b / float_b;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		float float_a = 0;
		double double_c = 0;
		float float_b = 0;
		char char_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		double double_d = 0;
		double double_e = 0;
		int int_c = 0;
		double double_f = 0;
		double double_g = 0;
		char char_c = 0;
		float float_c = 0;
		double_b = sqrt ( double_b ) ;
		int_a = int_a * int_b;
		{
			double double_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			float float_a = 0;
			double double_c = 0;
			float float_b = 0;
			char char_d = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			long long_a = 0;
			double double_d = 0;
			double double_e = 0;
			int int_c = 0;
			double double_f = 0;
			double double_g = 0;
			char char_c = 0;
			float float_c = 0;
			vul_var=(char*)malloc(20*sizeof(char));
			for(int looper_b=0; looper_b<1;looper_b++)
			{
				double double_a = 0;
				double double_b = 0;
				char char_a = 0;
				char char_b = 0;
				float float_a = 0;
				double double_c = 0;
				float float_b = 0;
				char char_d = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_a = 0;
				int int_b = 0;
				long long_a = 0;
				double double_d = 0;
				double double_e = 0;
				int int_c = 0;
				double double_f = 0;
				double double_g = 0;
				char char_c = 0;
				float float_c = 0;
				strcpy(vul_var, "CWE-761");
				double_b = sqrt ( double_b ) ;
				char_c = char_d;
				if(1)
				{
					if(uni_para == 100)
					{
						vul_var = vul_var + 1;
					}
					free(vul_var);
				}
				if(1)
				{
					double_a = double_a - double_b;
				}
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					char char_a = 0;
					char char_b = 0;
					float float_a = 0;
					double double_c = 0;
					float float_b = 0;
					char char_d = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					int int_a = 0;
					int int_b = 0;
					long long_a = 0;
					double double_d = 0;
					double double_e = 0;
					int int_c = 0;
					double double_f = 0;
					double double_g = 0;
					char char_c = 0;
					float float_c = 0;
					float_b = float_c;
				}
			}
			long_a = long_a;
			int_b = int_a + int_b;
			double_a = double_a + double_c;
			double_d = fmod ( double_c , double_e ) ;
			int_b = int_c;
			double_f = exp ( double_c ) ;
			unsigned_int_a = unsigned_int_b;
			double_c = ldexp ( double_g , int_a ) ;
		}
	}
	if(1)
	{
		char_d = char_d;
	}
	if(1)
	{
		unsigned_int_b = unsigned_int_a;
	}
}
char get_bsstrand( unsigned int parameter_1,long parameter_2,unsigned int parameter_3,int uni_para)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	float float_a = 0;
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	double double_c = 0;
	char char_b = 0;
	double double_d = 0;
	char char_c = 0;
	float float_b = 0;
	long long_a = 0;
	long long_b = 0;
	int int_c = 0;
	double_a = ceil ( double_b ) ;
	unsigned_int_a = unsigned_int_b;
	char controller4vul_h[3];
	scanf("%3s", controller4vul_h);
	if( controller4vul_h <"0/H" )
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		double double_c = 0;
		char char_b = 0;
		double double_d = 0;
		char char_c = 0;
		float float_b = 0;
		long long_a = 0;
		long long_b = 0;
		int int_c = 0;
		float_a = float_b;
		char controller4vul_i[2];
		scanf("%2s", controller4vul_i);
		if( controller4vul_i >"l]" )
		{
			float_a = infer_bsstrand(int_a,int_b,unsigned_int_a,uni_para);

			return char_a;
		}
		if(1)
		{
			return char_a;
		}
	}
	double_a = tanh ( double_c ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		double double_c = 0;
		char char_b = 0;
		double double_d = 0;
		char char_c = 0;
		float float_b = 0;
		long long_a = 0;
		long long_b = 0;
		int int_c = 0;
		long_a = long_a + long_b;
		if(1)
		{
			return char_a;
		}
		if(1)
		{
			return char_b;
		}
	}
	double_d = floor ( double_b ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		double double_c = 0;
		char char_b = 0;
		double double_d = 0;
		char char_c = 0;
		float float_b = 0;
		long long_a = 0;
		long long_b = 0;
		int int_c = 0;
		int_b = int_c;
		if(1)
		{
			return char_c;
		}
		if(1)
		{
			return char_b;
		}
	}
	return char_c;
}
double __refcache_fetch( double parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_a = 0;
	double double_d = 0;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_a = 0;
		double double_d = 0;
		unsigned_int_a = unsigned_int_a;
	}
	double_a = pow ( double_b , double_c ) ;
	unsigned_int_b = unsigned_int_c;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_a = 0;
		double double_d = 0;
		double_c = double_a - double_d;
	}
}
float refcache_fetch( long parameter_1,char parameter_2,char parameter_3,short parameter_4)
{
	float float_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_b = 0;
	if(1)
	{
		return float_a;
	}
	unsigned_int_a = unsigned_int_a;
	if(1)
	{
		double_a = tanh ( double_a ) ;
		double_a = log10 ( double_b ) ;
	}
	if(1)
	{
		double_b = sqrt ( double_b ) ;
	}
	else
	{
		double_c = floor ( double_c ) ;
	}
	if(1)
	{
		double_a = fmod ( double_c , double_a ) ;
	}
	else
	{
		double_d = __refcache_fetch(double_d);

		double_c = exp ( double_a ) ;
	}
	float_a = float_a;
	unsigned_int_b = unsigned_int_a;
	double_b = ceil ( double_d ) ;
}
short get_episnp1( unsigned int parameter_1,char parameter_2)
{
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	short short_a = 0;
	short short_b = 0;
	long_a = long_a;
	double_a = cos ( double_b ) ;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		double_b = atan ( double_b ) ;
		char controller_a[5];
		scanf("%5s", controller_a);
		if( controller_a >"DEL!{" )
		{
			return short_a;
		}
	}
	return short_b;
}
void init_refcache( char parameter_1,float parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	double_a = acos ( double_a ) ;
	double_a = pow ( double_a , double_b ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		long_a = long_b;
		double_b = fabs ( double_a ) ;
		long_b = long_c;
	}
	double_a = exp ( double_b ) ;
	double_c = sinh ( double_b ) ;
}
char process_func()
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_d = 0;
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	int int_a = 0;
	long long_a = 0;
	long long_b = 0;
	short short_a = 0;
	short short_b = 0;
	int int_b = 0;
	float float_b = 0;
	char char_c = 0;
	unsigned int unsigned_int_e = 0;
	short short_c = 0;
	long long_c = 0;
	double double_c = 0;
	double double_d = 0;
	float float_c = 0;
	double double_f = 0;
	long long_d = 0;
	float float_d = 0;
	char char_e = 0;
	char char_f = 0;
	char char_g = 0;
	unsigned int unsigned_int_f = 0;
	short short_d = 0;
	unsigned int unsigned_int_g = 0;
	int int_c = 0;
	double double_e = 0;
	int int_d = 0;
	double double_g = 0;
	int int_e = 0;
	float float_e = 0;
	char char_d = 0;
	unsigned_int_c = unsigned_int_a + unsigned_int_b;
	char_a = char_b;
	unsigned_int_c = unsigned_int_d;
	double_a = floor ( double_a ) ;
	double_b = ceil ( double_b ) ;
	char_b = char_b;
	init_refcache(char_b,float_a,int_a);

	double_b = log ( double_b ) ;
	long_a = long_a - long_b;
	short_b = short_a - short_a;
	int_b = cnt_retention(float_b,unsigned_int_b);

	unsigned_int_d = format_epiread(char_c,unsigned_int_c,unsigned_int_e,char_c,char_c,int_b,short_c,int_b,long_c);

	double_a = ceil ( double_a ) ;
	int looper_a = 0;
	while(looper_a < 7)
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_d = 0;
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		int int_a = 0;
		long long_a = 0;
		long long_b = 0;
		short short_a = 0;
		short short_b = 0;
		int int_b = 0;
		float float_b = 0;
		char char_c = 0;
		unsigned int unsigned_int_e = 0;
		short short_c = 0;
		long long_c = 0;
		double double_c = 0;
		double double_d = 0;
		float float_c = 0;
		double double_f = 0;
		long long_d = 0;
		float float_d = 0;
		char char_e = 0;
		char char_f = 0;
		char char_g = 0;
		unsigned int unsigned_int_f = 0;
		short short_d = 0;
		unsigned int unsigned_int_g = 0;
		int int_c = 0;
		double double_e = 0;
		int int_d = 0;
		double double_g = 0;
		int int_e = 0;
		float float_e = 0;
		char char_d = 0;
		looper_a += 1;
		double_a = double_a;
		char controller_a[3];
		scanf("%3s", controller_a);
		if( controller_a <"aSB" )
		{
		}
		unsigned_int_e = unsigned_int_a + unsigned_int_c;
		double_a = ldexp ( double_c , int_c ) ;
		?:
		double_a = fabs ( double_a ) ;
		long_c = long_a;
		double_c = pow ( double_d , double_b ) ;
		if(1)
		{
			double_a = asin ( double_d ) ;
			double_a = ceil ( double_e ) ;
			if(1)
			{
				for(int looper_b=0; looper_b<5;looper_b++)
				{
					double_a = pow ( double_a , double_d ) ;
					char controller_d[4];
					scanf("%4s", controller_d);
					if( controller_d <"(GJ:" )
					{
						int_d = int_d * int_b;
					}
				}
			}
		}
		float_c = float_c;
		double_d = cosh ( double_f ) ;
		?:
		double_d = acos ( double_a ) ;
		?:
		float_a = format_epiread_pairwise(long_d,short_c,unsigned_int_a,float_c,char_c,short_b,float_d,double_c,float_a);

		double_a = exp ( double_g ) ;
		int_c = int_d;
		char_c = char_a;
		int looper_c = 0;
		while(looper_c < 6)
		{
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			char char_a = 0;
			char char_b = 0;
			unsigned int unsigned_int_d = 0;
			double double_a = 0;
			double double_b = 0;
			float float_a = 0;
			int int_a = 0;
			long long_a = 0;
			long long_b = 0;
			short short_a = 0;
			short short_b = 0;
			int int_b = 0;
			float float_b = 0;
			char char_c = 0;
			unsigned int unsigned_int_e = 0;
			short short_c = 0;
			long long_c = 0;
			double double_c = 0;
			double double_d = 0;
			float float_c = 0;
			double double_f = 0;
			long long_d = 0;
			float float_d = 0;
			char char_e = 0;
			char char_f = 0;
			char char_g = 0;
			unsigned int unsigned_int_f = 0;
			short short_d = 0;
			unsigned int unsigned_int_g = 0;
			int int_c = 0;
			double double_e = 0;
			int int_d = 0;
			double double_g = 0;
			int int_e = 0;
			float float_e = 0;
			char char_d = 0;
			looper_c += 1;
			double_g = pow ( double_f , double_a ) ;
			int_d = int_a - int_e;
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
				if(1)
				{
				}
			}
			float_a = float_e;
			if(1)
			{
			}
			double_e = double_b;
			if(1)
			{
			}
			if(1)
			{
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				char char_a = 0;
				char char_b = 0;
				unsigned int unsigned_int_d = 0;
				double double_a = 0;
				double double_b = 0;
				float float_a = 0;
				int int_a = 0;
				long long_a = 0;
				long long_b = 0;
				short short_a = 0;
				short short_b = 0;
				int int_b = 0;
				float float_b = 0;
				char char_c = 0;
				unsigned int unsigned_int_e = 0;
				short short_c = 0;
				long long_c = 0;
				double double_c = 0;
				double double_d = 0;
				float float_c = 0;
				double double_f = 0;
				long long_d = 0;
				float float_d = 0;
				char char_e = 0;
				char char_f = 0;
				char char_g = 0;
				unsigned int unsigned_int_f = 0;
				short short_d = 0;
				unsigned int unsigned_int_g = 0;
				int int_c = 0;
				double double_e = 0;
				int int_d = 0;
				double double_g = 0;
				int int_e = 0;
				float float_e = 0;
				char char_d = 0;
				char_d = char_e;
			}
			else
			{
				double_g = fabs ( double_a ) ;
			}
		}
		short_a = short_c;
		free_refcache(unsigned_int_e);

		unsigned_int_e = unsigned_int_a * unsigned_int_e;
		double_a = acos ( double_d ) ;
		double_g = double_g - double_a;
		float_c = float_c;
	}
	float_d = refcache_fetch(long_b,char_e,char_f,short_c);

	double_d = exp ( double_f ) ;
	double_d = sqrt ( double_a ) ;
	char_g = get_bsstrand(unsigned_int_a,long_b,unsigned_int_f,971);

	double_a = asin ( double_a ) ;
	short_d = get_episnp1(unsigned_int_g,char_b);

	float_d = float_c;
	return char_b;
}
char write_func()
{
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	long long_b = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	long_a = long_a;
	double_a = double_a;
	int looper_a = 0;
	while(looper_a < 1)
	{
		long long_a = 0;
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		long long_b = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		looper_a += 1;
		long_b = long_b;
		int_a = int_a - int_b;
		if(1)
		{
		}
		double_b = double_a;
		unsigned_int_a = unsigned_int_a;
	}
	double_b = double_a;
	return char_a;
}
int head_append_verbose( char parameter_1,char parameter_2,short parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_a = 0;
	short short_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double_a = sqrt ( double_a ) ;
	double_b = pow ( double_b , double_c ) ;
	short_a = short_b;
	double_c = cosh ( double_a ) ;
	int_a = ksprintf(int_a,short_a,unsigned_int_a);

	unsigned_int_b = unsigned_int_c;
	unsigned_int_c = unsigned_int_a;
}
char print_vcf_header( char parameter_1,long parameter_2,char parameter_3,int parameter_4,float parameter_5,char parameter_6,int parameter_7)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	float float_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	double double_c = 0;
	char char_a = 0;
	char char_b = 0;
	double double_d = 0;
	int int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	short short_a = 0;
	double double_e = 0;
	long long_a = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_f = 0;
	double double_f = 0;
	long long_b = 0;
	double double_g = 0;
	double double_h = 0;
	char char_c = 0;
	double double_i = 0;
	short short_b = 0;
	short short_c = 0;
	double double_j = 0;
	float float_b = 0;
	short short_d = 0;
	short short_e = 0;
	int int_c = 0;
	int int_d = 0;
	double double_k = 0;
	short short_f = 0;
	unsigned int unsigned_int_h = 0;
	double double_l = 0;
	double double_m = 0;
	unsigned int unsigned_int_i = 0;
	char char_d = 0;
	unsigned int unsigned_int_g = 0;
	long long_c = 0;
	long long_d = 0;
	int int_e = 0;
	double_a = ceil ( double_a ) ;
	unsigned_int_a = kputc(int_a,float_a);

	unsigned_int_a = unsigned_int_b;
	double_b = fabs ( double_c ) ;
	char_b = char_a - char_a;
	unsigned_int_a = unsigned_int_a * unsigned_int_a;
	double_d = ldexp ( double_b , int_b ) ;
	double_d = cosh ( double_a ) ;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		double_c = fabs ( double_a ) ;
		unsigned_int_a = unsigned_int_a;
	}
	unsigned_int_a = unsigned_int_c;
	unsigned_int_c = unsigned_int_d;
	for(int looper_b=0; looper_b<6;looper_b++)
	{
		float_a = kputs(short_a,short_a);

		double_b = fabs ( double_e ) ;
	}
	long_a = long_a;
	unsigned_int_f = unsigned_int_e * unsigned_int_b;
	unsigned_int_b = unsigned_int_c - unsigned_int_b;
	double_d = cos ( double_f ) ;
	long_b = long_a + long_a;
	unsigned_int_e = unsigned_int_e - unsigned_int_a;
	double_d = exp ( double_f ) ;
	if(1)
	{
		double_f = sinh ( double_f ) ;
		double_g = cos ( double_h ) ;
		double_a = exp ( double_c ) ;
	}
	char_b = char_c;
	double_d = log10 ( double_g ) ;
	double_g = log ( double_i ) ;
	short_c = short_b * short_b;
	double_i = log10 ( double_j ) ;
	double_f = double_g * double_f;
	float_a = float_b;
	short_d = short_e;
	int_c = int_d;
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_c = 0;
		char char_a = 0;
		char char_b = 0;
		double double_d = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		short short_a = 0;
		double double_e = 0;
		long long_a = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		double double_f = 0;
		long long_b = 0;
		double double_g = 0;
		double double_h = 0;
		char char_c = 0;
		double double_i = 0;
		short short_b = 0;
		short short_c = 0;
		double double_j = 0;
		float float_b = 0;
		short short_d = 0;
		short short_e = 0;
		int int_c = 0;
		int int_d = 0;
		double double_k = 0;
		short short_f = 0;
		unsigned int unsigned_int_h = 0;
		double double_l = 0;
		double double_m = 0;
		unsigned int unsigned_int_i = 0;
		char char_d = 0;
		unsigned int unsigned_int_g = 0;
		long long_c = 0;
		long long_d = 0;
		int int_e = 0;
		unsigned_int_g = unsigned_int_d;
		double_g = atan2 ( double_k , double_g ) ;
		int_a = ksprintf(int_c,short_f,unsigned_int_h);

		short_f = short_f + short_e;
		int_b = head_append_verbose(char_b,char_b,short_e);

		short_d = short_d * short_c;
		double_l = exp ( double_a ) ;
		double_k = ldexp ( double_c , int_b ) ;
		double_g = double_m + double_a;
	}
	double_c = double_j;
	double_j = cosh ( double_l ) ;
	for(int looper_c=0; looper_c<3;looper_c++)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_c = 0;
		char char_a = 0;
		char char_b = 0;
		double double_d = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		short short_a = 0;
		double double_e = 0;
		long long_a = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		double double_f = 0;
		long long_b = 0;
		double double_g = 0;
		double double_h = 0;
		char char_c = 0;
		double double_i = 0;
		short short_b = 0;
		short short_c = 0;
		double double_j = 0;
		float float_b = 0;
		short short_d = 0;
		short short_e = 0;
		int int_c = 0;
		int int_d = 0;
		double double_k = 0;
		short short_f = 0;
		unsigned int unsigned_int_h = 0;
		double double_l = 0;
		double double_m = 0;
		unsigned int unsigned_int_i = 0;
		char char_d = 0;
		unsigned int unsigned_int_g = 0;
		long long_c = 0;
		long long_d = 0;
		int int_e = 0;
		char_a = char_c / char_b;
		long_c = long_b;
		double_k = pow ( double_h , double_c ) ;
		if(1)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			float float_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_b = 0;
			double double_c = 0;
			char char_a = 0;
			char char_b = 0;
			double double_d = 0;
			int int_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			short short_a = 0;
			double double_e = 0;
			long long_a = 0;
			unsigned int unsigned_int_e = 0;
			unsigned int unsigned_int_f = 0;
			double double_f = 0;
			long long_b = 0;
			double double_g = 0;
			double double_h = 0;
			char char_c = 0;
			double double_i = 0;
			short short_b = 0;
			short short_c = 0;
			double double_j = 0;
			float float_b = 0;
			short short_d = 0;
			short short_e = 0;
			int int_c = 0;
			int int_d = 0;
			double double_k = 0;
			short short_f = 0;
			unsigned int unsigned_int_h = 0;
			double double_l = 0;
			double double_m = 0;
			unsigned int unsigned_int_i = 0;
			char char_d = 0;
			unsigned int unsigned_int_g = 0;
			long long_c = 0;
			long long_d = 0;
			int int_e = 0;
			int_e = int_d / int_e;
		}
		double_c = double_e - double_m;
		long_d = long_d;
	}
	unsigned_int_i = unsigned_int_c;
	return char_d;
}
char compare_targets( long parameter_1,long parameter_2)
{
	char char_a = 0;
	return char_a;
}
void conf_init( float parameter_1)
{
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	long long_b = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	int int_c = 0;
	unsigned int unsigned_int_b = 0;
	double double_g = 0;
	int int_d = 0;
	double double_h = 0;
	int int_e = 0;
	unsigned int unsigned_int_c = 0;
	long long_c = 0;
	long long_d = 0;
	double double_i = 0;
	unsigned_int_a = unsigned_int_a + unsigned_int_a;
	long_a = long_a + long_b;
	short_c = short_a + short_b;
	double_a = acos ( double_b ) ;
	double_b = asin ( double_b ) ;
	double_c = tan ( double_b ) ;
	int_a = int_b;
	double_c = tanh ( double_c ) ;
	double_d = tanh ( double_e ) ;
	double_a = cos ( double_e ) ;
	double_a = sqrt ( double_b ) ;
	double_f = fmod ( double_b , double_d ) ;
	int_b = int_b - int_c;
	unsigned_int_b = unsigned_int_a * unsigned_int_a;
	long_a = long_a;
	double_c = log ( double_f ) ;
	double_d = double_a;
	double_e = ldexp ( double_g , int_d ) ;
	unsigned_int_a = unsigned_int_a;
	double_h = atan ( double_c ) ;
	int_a = int_d / int_c;
	int_d = int_a * int_a;
	double_c = tan ( double_g ) ;
	double_d = tan ( double_e ) ;
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		long long_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_c = 0;
		unsigned int unsigned_int_b = 0;
		double double_g = 0;
		int int_d = 0;
		double double_h = 0;
		int int_e = 0;
		unsigned int unsigned_int_c = 0;
		long long_c = 0;
		long long_d = 0;
		double double_i = 0;
		long_c = long_c * long_a;
		long_d = long_c + long_c;
	}
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		long long_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_c = 0;
		unsigned int unsigned_int_b = 0;
		double double_g = 0;
		int int_d = 0;
		double double_h = 0;
		int int_e = 0;
		unsigned int unsigned_int_c = 0;
		long long_c = 0;
		long long_d = 0;
		double double_i = 0;
		double_b = cosh ( double_i ) ;
		int_e = int_a;
	}
	if(1)
	{
		double_g = tanh ( double_e ) ;
		int_e = int_d - int_d;
	}
	double_h = acos ( double_d ) ;
	unsigned_int_c = unsigned_int_b;
}
int main_pileup( int parameter_1,char parameter_2)
{
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_c = 0;
	int int_d = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	char char_a = 0;
	long long_a = 0;
	long long_b = 0;
	float float_a = 0;
	float float_b = 0;
	float float_c = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	char char_b = 0;
	unsigned int unsigned_int_b = 0;
	double double_j = 0;
	short short_a = 0;
	short short_b = 0;
	int int_e = 0;
	double double_k = 0;
	unsigned int unsigned_int_c = 0;
	float float_d = 0;
	float float_e = 0;
	double double_l = 0;
	double double_m = 0;
	char char_c = 0;
	char char_d = 0;
	float float_f = 0;
	int int_f = 0;
	int int_g = 0;
	double double_n = 0;
	double double_o = 0;
	int int_h = 0;
	unsigned int unsigned_int_e = 0;
	long long_c = 0;
	double double_p = 0;
	int int_i = 0;
	double double_q = 0;
	double double_r = 0;
	short short_c = 0;
	double double_s = 0;
	unsigned int unsigned_int_d = 0;
	double_a = fabs ( double_a ) ;
	int_a = int_a * int_b;
	double_a = acos ( double_b ) ;
	double_b = cos ( double_c ) ;
	double_b = tanh ( double_c ) ;
	double_b = ldexp ( double_d , int_c ) ;
	double_a = acos ( double_c ) ;
	if(1)
	{
		return int_d;
	}
	int looper_a = 0;
	while(looper_a < 1)
	{
		looper_a += 1;
		{
			double_c = atan ( double_b ) ;
			double_a = double_b;
			unsigned_int_a = unsigned_int_a;
			double_a = ceil ( double_b ) ;
			double_b = double_e;
			char_a = compare_targets(long_a,long_b);

			float_c = float_a + float_b;
			float_a = float_c;
			int_c = int_d;
			double_f = atan2 ( double_a , double_b ) ;
			double_b = double_d;
			char_a = write_func();

			double_a = tanh ( double_e ) ;
			double_c = asin ( double_b ) ;
			double_f = cosh ( double_a ) ;
			double_g = double_e + double_f;
			double_b = double_h;
			char_a = char_a - char_a;
			double_c = cos ( double_i ) ;
			int_c = int_d;
			char_b = process_func();

			double_d = sqrt ( double_a ) ;
			int_a = int_d / int_d;
			int_b = int_d;
			double_f = asin ( double_f ) ;
			double_a = sinh ( double_i ) ;
			double_f = asin ( double_b ) ;
			unsigned_int_a = unsigned_int_b;
			return int_c;
			double_f = log ( double_j ) ;
		}
	}
	if(1)
	{
		short_a = short_b;
		int_d = int_e;
		double_e = double_k;
	}
	double_g = sinh ( double_k ) ;
	int_e = int_b;
	double_i = atan2 ( double_d , double_d ) ;
	for(int looper_b=0; looper_b<4;looper_b++)
	{
		double_b = cos ( double_a ) ;
		double_i = fmod ( double_e , double_i ) ;
	}
	if(1)
	{
		unsigned_int_c = unsigned_int_a / unsigned_int_b;
		float_e = float_c / float_d;
		conf_init(float_e);

		double_a = cos ( double_d ) ;
	}
	if(1)
	{
		for(int looper_c=0; looper_c<4;looper_c++)
		{
			double_c = log ( double_d ) ;
		}
		double_b = asin ( double_g ) ;
	}
	double_h = double_c + double_i;
	if(1)
	{
		double_l = atan ( double_k ) ;
		double_m = log ( double_d ) ;
		double_j = fmod ( double_b , double_c ) ;
	}
	float_d = float_b;
	char_c = print_vcf_header(char_b,long_b,char_c,int_c,float_e,char_c,int_a);

	double_h = log10 ( double_l ) ;
	char_d = char_c;
	for(int looper_d=0; looper_d<1;looper_d++)
	{
		unsigned_int_b = unsigned_int_a;
		double_h = fabs ( double_d ) ;
		double_l = log10 ( double_k ) ;
		double_a = fmod ( double_h , double_g ) ;
	}
	unsigned_int_a = unsigned_int_a * unsigned_int_c;
	double_d = asin ( double_b ) ;
	float_a = float_f;
	long_b = long_a;
	double_j = cosh ( double_i ) ;
	int_g = int_e / int_f;
	double_k = double_k + double_e;
	double_g = double_f;
	for(int looper_e=0; looper_e<1;looper_e++)
	{
		double_b = log ( double_e ) ;
		short_b = short_a + short_b;
		int_c = int_e;
		double_j = double_a;
		double_n = log10 ( double_m ) ;
		double_d = ceil ( double_i ) ;
		double_h = double_n * double_j;
	}
	int_c = int_e;
	float_f = float_c;
	double_o = atan ( double_g ) ;
	int_a = int_e / int_h;
	if(1)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_c = 0;
		int int_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		char char_a = 0;
		long long_a = 0;
		long long_b = 0;
		float float_a = 0;
		float float_b = 0;
		float float_c = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		char char_b = 0;
		unsigned int unsigned_int_b = 0;
		double double_j = 0;
		short short_a = 0;
		short short_b = 0;
		int int_e = 0;
		double double_k = 0;
		unsigned int unsigned_int_c = 0;
		float float_d = 0;
		float float_e = 0;
		double double_l = 0;
		double double_m = 0;
		char char_c = 0;
		char char_d = 0;
		float float_f = 0;
		int int_f = 0;
		int int_g = 0;
		double double_n = 0;
		double double_o = 0;
		int int_h = 0;
		unsigned int unsigned_int_e = 0;
		long long_c = 0;
		double double_p = 0;
		int int_i = 0;
		double double_q = 0;
		double double_r = 0;
		short short_c = 0;
		double double_s = 0;
		unsigned int unsigned_int_d = 0;
		int_h = usage(double_j);

		double_f = log ( double_c ) ;
		float_d = pileup_parse_region(float_e,int_c,int_f,int_f);

		unsigned_int_d = unsigned_int_d * unsigned_int_e;
		double_j = pow ( double_l , double_e ) ;
		long_c = long_c + long_a;
		double_e = double_j - double_k;
		if(1)
		{
			double_i = ldexp ( double_a , int_d ) ;
		}
		char controller_h[1];
		scanf("%1s", controller_h);
		if( controller_h <"L" )
		{
			double_a = cosh ( double_p ) ;
		}
		for(int looper_f=0; looper_f<5;looper_f++)
		{
			int_i = int_i;
			double_p = atan2 ( double_l , double_g ) ;
			double_f = ceil ( double_a ) ;
			double_d = floor ( double_a ) ;
			if(1)
			{
				double_i = fmod ( double_b , double_d ) ;
			}
			unsigned_int_d = unsigned_int_c;
		}
	}
	else
	{
		for(int looper_g=0; looper_g<4;looper_g++)
		{
			double_q = cos ( double_j ) ;
			for(int looper_h=0; looper_h<2;looper_h++)
			{
				double_m = tan ( double_f ) ;
				unsigned_int_e = unsigned_int_c;
				double_i = ldexp ( double_i , int_d ) ;
				double_h = fabs ( double_b ) ;
				if(1)
				{
					int_f = int_b * int_d;
				}
				int_f = int_c;
			}
		}
	}
	for(int looper_i=0; looper_i<1;looper_i++)
	{
		double_h = cosh ( double_i ) ;
		unsigned_int_a = unsigned_int_e;
	}
	for(int looper_j=0; looper_j<2;looper_j++)
	{
		double_g = floor ( double_d ) ;
	}
	double_n = log10 ( double_r ) ;
	long_c = long_a;
	double_o = double_g;
	short_a = short_c + short_b;
	double_f = sqrt ( double_q ) ;
	double_b = asin ( double_d ) ;
	double_r = asin ( double_l ) ;
	double_n = sinh ( double_i ) ;
	double_g = pow ( double_b , double_g ) ;
	double_l = asin ( double_d ) ;
	double_p = sinh ( double_s ) ;
	float_a = float_b * float_d;
	return int_i;
}
int kclose()
void bwa_idx_destroy( double parameter_1)
{
	double double_a = 0;
	short short_a = 0;
	short short_b = 0;
	float float_a = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_a = 0;
	int int_b = 0;
	if(1)
	{
	}
	if(1)
	{
		double double_a = 0;
		short short_a = 0;
		short short_b = 0;
		float float_a = 0;
		float float_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		int int_b = 0;
		float_a = float_a + float_b;
		char_b = char_a - char_a;
		bns_destroy();

		double_a = tan ( double_b ) ;
		double_c = log ( double_b ) ;
		if(1)
		{
			double double_a = 0;
			short short_a = 0;
			short short_b = 0;
			float float_a = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned_int_a = unsigned_int_a;
		}
		if(1)
		{
			double_c = acos ( double_b ) ;
		}
	}
	else
	{
		double double_a = 0;
		short short_a = 0;
		short short_b = 0;
		float float_a = 0;
		float float_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned_int_b = unsigned_int_c;
		int_a = int_b;
		if(1)
		{
			double_a = log10 ( double_a ) ;
		}
	}
	short_a = short_b;
}
int err_fputs( char parameter_1,unsigned int parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	int int_a = 0;
	int int_b = 0;
	double_a = cosh ( double_a ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		int int_a = 0;
		int int_b = 0;
		_err_fatal_simple(double_b,long_a);

		int_b = int_a / int_a;
	}
	return int_a;
}
int mem_approx_mapq_se( int parameter_1,char parameter_2)
{
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_e = 0;
	double double_f = 0;
	float float_a = 0;
	float float_b = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	int int_c = 0;
	char char_a = 0;
	char char_b = 0;
	?:
	double_a = exp ( double_a ) ;
	double_a = atan ( double_a ) ;
	?:
	double_a = ldexp ( double_a , int_a ) ;
	if(1)
	{
		return int_b;
	}
	?:
	int_b = int_b;
	double_a = tan ( double_a ) ;
	if(1)
	{
		double_b = sinh ( double_a ) ;
	}
	if(1)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_e = 0;
		double double_f = 0;
		float float_a = 0;
		float float_b = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		int int_c = 0;
		char char_a = 0;
		char char_b = 0;
		float_a = float_a * float_b;
		?:
		double_c = exp ( double_d ) ;
		unsigned_int_a = unsigned_int_a - unsigned_int_a;
		int_b = int_c * int_c;
	}
	else
	{
		double_e = double_c + double_e;
		?:
		double_b = fabs ( double_b ) ;
	}
	if(1)
	{
		double_c = pow ( double_f , double_e ) ;
	}
	if(1)
	{
		double_f = tan ( double_e ) ;
	}
	if(1)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_e = 0;
		double double_f = 0;
		float float_a = 0;
		float float_b = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		int int_c = 0;
		char char_a = 0;
		char char_b = 0;
		char_a = char_b;
	}
	double_c = double_f * double_c;
	return int_a;
}
void ks_introsort_128( float parameter_1,float parameter_2)
void ks_introsort_192( long parameter_1,long parameter_2)
void mem_pair( float parameter_1,int parameter_2,char parameter_3,char parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8,int parameter_9)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	int int_d = 0;
	long long_a = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_f = 0;
	float float_a = 0;
	float float_b = 0;
	int int_e = 0;
	float float_c = 0;
	float float_d = 0;
	double double_g = 0;
	double double_h = 0;
	double double_j = 0;
	int int_f = 0;
	float float_g = 0;
	double double_l = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	unsigned int unsigned_int_e = 0;
	float float_e = 0;
	float float_f = 0;
	double double_i = 0;
	unsigned int unsigned_int_f = 0;
	double double_k = 0;
	double_a = acos ( double_b ) ;
	double_a = double_a + double_c;
	int_a = int_b;
	unsigned_int_a = mem_infer_isize(double_b,unsigned_int_b,int_a,int_c,int_a,int_d,long_a);

	double_d = fmod ( double_e , double_b ) ;
	double_b = log ( double_d ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		for(int looper_b=0; looper_b<3;looper_b++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_c = 0;
			int int_d = 0;
			long long_a = 0;
			double double_d = 0;
			double double_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_f = 0;
			float float_a = 0;
			float float_b = 0;
			int int_e = 0;
			float float_c = 0;
			float float_d = 0;
			double double_g = 0;
			double double_h = 0;
			double double_j = 0;
			int int_f = 0;
			float float_g = 0;
			double double_l = 0;
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			unsigned int unsigned_int_e = 0;
			float float_e = 0;
			float float_f = 0;
			double double_i = 0;
			unsigned int unsigned_int_f = 0;
			double double_k = 0;
			char_a = char_a / char_a;
			unsigned_int_c = unsigned_int_c;
			char_c = char_b - char_b;
			double_b = cos ( double_c ) ;
			double_b = sinh ( double_b ) ;
			double_d = double_d;
		}
	}
	unsigned_int_d = unsigned_int_a;
	if(1)
	{
		unsigned_int_a = unsigned_int_b;
		double_a = double_a;
		for(int looper_c=0; looper_c<8;looper_c++)
		{
			double_f = sqrt ( double_d ) ;
		}
		float_a = float_b;
	}
	int_b = int_e;
	float_d = float_a * float_c;
	float_d = float_c;
	for(int looper_d=0; looper_d<1;looper_d++)
	{
		for(int looper_e=0; looper_e<7;looper_e++)
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
			if(1)
			{
			}
			double_g = fabs ( double_b ) ;
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				int int_a = 0;
				int int_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_c = 0;
				int int_d = 0;
				long long_a = 0;
				double double_d = 0;
				double double_e = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_f = 0;
				float float_a = 0;
				float float_b = 0;
				int int_e = 0;
				float float_c = 0;
				float float_d = 0;
				double double_g = 0;
				double double_h = 0;
				double double_j = 0;
				int int_f = 0;
				float float_g = 0;
				double double_l = 0;
				char char_a = 0;
				char char_b = 0;
				char char_c = 0;
				unsigned int unsigned_int_e = 0;
				float float_e = 0;
				float float_f = 0;
				double double_i = 0;
				unsigned int unsigned_int_f = 0;
				double double_k = 0;
				unsigned_int_b = unsigned_int_c - unsigned_int_e;
				int_e = int_b;
				unsigned_int_d = unsigned_int_e;
			}
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				int int_a = 0;
				int int_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_c = 0;
				int int_d = 0;
				long long_a = 0;
				double double_d = 0;
				double double_e = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_f = 0;
				float float_a = 0;
				float float_b = 0;
				int int_e = 0;
				float float_c = 0;
				float float_d = 0;
				double double_g = 0;
				double double_h = 0;
				double double_j = 0;
				int int_f = 0;
				float float_g = 0;
				double double_l = 0;
				char char_a = 0;
				char char_b = 0;
				char char_c = 0;
				unsigned int unsigned_int_e = 0;
				float float_e = 0;
				float float_f = 0;
				double double_i = 0;
				unsigned int unsigned_int_f = 0;
				double double_k = 0;
				double_h = sinh ( double_h ) ;
				unsigned_int_a = unsigned_int_d;
				unsigned_int_c = region_depos(float_c,float_d,int_c);

				double_b = acos ( double_c ) ;
				double_h = acos ( double_g ) ;
				float_f = float_e * float_b;
			}
		}
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		int int_d = 0;
		long long_a = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_f = 0;
		float float_a = 0;
		float float_b = 0;
		int int_e = 0;
		float float_c = 0;
		float float_d = 0;
		double double_g = 0;
		double double_h = 0;
		double double_j = 0;
		int int_f = 0;
		float float_g = 0;
		double double_l = 0;
		char char_a = 0;
		char char_b = 0;
		char char_c = 0;
		unsigned int unsigned_int_e = 0;
		float float_e = 0;
		float float_f = 0;
		double double_i = 0;
		unsigned int unsigned_int_f = 0;
		double double_k = 0;
		double_e = sqrt ( double_b ) ;
		if(1)
		{
			double_d = log10 ( double_b ) ;
			for(int looper_f=0; looper_f<7;looper_f++)
			{
				double_a = cos ( double_i ) ;
				double_g = cosh ( double_b ) ;
				double_b = ceil ( double_g ) ;
				double_d = acos ( double_d ) ;
				unsigned_int_d = unsigned_int_a / unsigned_int_f;
				double_i = atan2 ( double_h , double_e ) ;
				int_e = mem_print_region1(unsigned_int_c,float_a);

				int_e = int_a;
				double_e = tanh ( double_e ) ;
				ks_introsort_128(float_b,float_d);

				double_c = atan ( double_g ) ;
			}
		}
		double_d = exp ( double_i ) ;
		double_d = log10 ( double_j ) ;
		double_h = double_a + double_c;
		double_f = fmod ( double_a , double_j ) ;
		unsigned_int_a = unsigned_int_f / unsigned_int_d;
		?:
		ks_introsort_192(long_a,long_a);

		float_c = float_c;
		double_f = cosh ( double_k ) ;
		double_a = cos ( double_e ) ;
		int_a = int_d + int_c;
		for(int looper_g=0; looper_g<5;looper_g++)
		{
			if(1)
			{
				int_c = int_e + int_f;
			}
		}
	}
	else
	{
		int_d = int_d;
		int_a = int_f;
		double_b = sinh ( double_b ) ;
		double_j = double_j;
		int_c = int_c;
	}
	int_d = hash_64(float_g);

	double_l = atan2 ( double_b , double_g ) ;
	double_j = fabs ( double_j ) ;
}
void mem_reg2sam_pe_nopairing( int parameter_1,int parameter_2,long parameter_3,long parameter_4,unsigned int parameter_5,char parameter_6)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	short short_a = 0;
	long long_a = 0;
	long long_b = 0;
	char char_a = 0;
	int int_c = 0;
	long long_c = 0;
	unsigned int unsigned_int_a = 0;
	long long_d = 0;
	double double_g = 0;
	int int_d = 0;
	int int_e = 0;
	short short_b = 0;
	short short_c = 0;
	unsigned int unsigned_int_b = 0;
	double double_h = 0;
	unsigned int unsigned_int_c = 0;
	int int_f = 0;
	double_a = cos ( double_b ) ;
	int_b = int_a * int_b;
	double_c = atan2 ( double_b , double_b ) ;
	if(1)
	{
		double_e = double_d / double_e;
	}
	double_f = double_f;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		short short_a = 0;
		long long_a = 0;
		long long_b = 0;
		char char_a = 0;
		int int_c = 0;
		long long_c = 0;
		unsigned int unsigned_int_a = 0;
		long long_d = 0;
		double double_g = 0;
		int int_d = 0;
		int int_e = 0;
		short short_b = 0;
		short short_c = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		unsigned int unsigned_int_c = 0;
		int int_f = 0;
		mem_alnreg_formatSAM(short_a,long_a,long_b,char_a,int_c,long_c,short_a,unsigned_int_a,int_b,long_d);

		short_c = short_a * short_b;
		double_g = log10 ( double_g ) ;
		char controller_b[1];
		scanf("%1s", controller_b);
		if( controller_b <"#" )
		{
			int_c = int_d;
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			short short_a = 0;
			long long_a = 0;
			long long_b = 0;
			char char_a = 0;
			int int_c = 0;
			long long_c = 0;
			unsigned int unsigned_int_a = 0;
			long long_d = 0;
			double double_g = 0;
			int int_d = 0;
			int int_e = 0;
			short short_b = 0;
			short short_c = 0;
			unsigned int unsigned_int_b = 0;
			double double_h = 0;
			unsigned int unsigned_int_c = 0;
			int int_f = 0;
			int_b = int_e;
			int_b = int_b;
			int_c = int_b;
			unsigned_int_a = unsigned_int_b;
		}
	}
	for(int looper_b=0; looper_b<10;looper_b++)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		short short_a = 0;
		long long_a = 0;
		long long_b = 0;
		char char_a = 0;
		int int_c = 0;
		long long_c = 0;
		unsigned int unsigned_int_a = 0;
		long long_d = 0;
		double double_g = 0;
		int int_d = 0;
		int int_e = 0;
		short short_b = 0;
		short short_c = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		unsigned int unsigned_int_c = 0;
		int int_f = 0;
		double_d = atan ( double_e ) ;
		double_b = cos ( double_h ) ;
		if(1)
		{
			double_g = pow ( double_h , double_c ) ;
			for(int looper_c=0; looper_c<4;looper_c++)
			{
				int_c = int_d;
				if(1)
				{
					double_b = sinh ( double_e ) ;
				}
				double_c = fmod ( double_f , double_f ) ;
			}
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			short short_a = 0;
			long long_a = 0;
			long long_b = 0;
			char char_a = 0;
			int int_c = 0;
			long long_c = 0;
			unsigned int unsigned_int_a = 0;
			long long_d = 0;
			double double_g = 0;
			int int_d = 0;
			int int_e = 0;
			short short_b = 0;
			short short_c = 0;
			unsigned int unsigned_int_b = 0;
			double double_h = 0;
			unsigned int unsigned_int_c = 0;
			int int_f = 0;
			int_f = int_a / int_e;
		}
		unsigned_int_c = unsigned_int_a;
	}
	for(int looper_d=0; looper_d<10;looper_d++)
	{
		double_f = tanh ( double_f ) ;
	}
}
void mem_reg2sam_pe( char parameter_1,int parameter_2,unsigned int parameter_3,float parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	long long_a = 0;
	long long_b = 0;
	double double_d = 0;
	double double_e = 0;
	float float_a = 0;
	float float_b = 0;
	short short_a = 0;
	short short_b = 0;
	long long_c = 0;
	long long_d = 0;
	char char_a = 0;
	float float_c = 0;
	double double_f = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_b = 0;
	char char_b = 0;
	int int_c = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	int int_d = 0;
	int int_e = 0;
	int int_f = 0;
	int int_g = 0;
	long long_e = 0;
	short short_c = 0;
	double double_h = 0;
	double double_i = 0;
	short short_d = 0;
	double double_j = 0;
	unsigned int unsigned_int_d = 0;
	double double_k = 0;
	char char_c = 0;
	double double_m = 0;
	unsigned int unsigned_int_g = 0;
	int int_j = 0;
	float float_d = 0;
	int int_h = 0;
	short short_e = 0;
	short short_f = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_f = 0;
	double double_l = 0;
	unsigned int unsigned_int_h = 0;
	int int_i = 0;
	if(1)
	{
		unsigned_int_a = unsigned_int_a;
		double_a = fmod ( double_b , double_c ) ;
		double_a = cosh ( double_c ) ;
		double_c = double_a;
		long_b = long_a + long_a;
	}
	double_c = tanh ( double_d ) ;
	double_c = atan2 ( double_a , double_e ) ;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		for(int looper_b=0; looper_b<6;looper_b++)
		{
			float_a = float_a * float_b;
		}
	}
	if(1)
	{
	}
	if(1)
	{
	}
	short_a = short_a / short_b;
	long_c = mem_alnreg_setSAM(long_d,char_a,short_b,float_c,double_e);

	float_b = float_a;
	for(int looper_c=0; looper_c<1;looper_c++)
	{
		for(int looper_d=0; looper_d<7;looper_d++)
		{
			if(1)
			{
			}
		}
		?:
		double_e = fabs ( double_f ) ;
	}
	if(1)
	{
	}
	mem_reg2sam_pe_nopairing(int_a,int_a,long_a,long_b,unsigned_int_a,char_a);

	unsigned_int_b = unsigned_int_a * unsigned_int_a;
	mem_pair(float_a,int_b,char_b,char_b,int_a,int_c,int_c,int_a,int_a);

	double_g = double_f / double_e;
	double_c = atan2 ( double_g , double_a ) ;
	unsigned_int_a = unsigned_int_a / unsigned_int_c;
	if(1)
	{
	}
	if(1)
	{
		int_c = int_d;
		int_f = int_e + int_b;
		double_e = double_a - double_c;
		double_c = acos ( double_c ) ;
		double_b = double_c;
	}
	mem_alnreg_formatSAM(short_a,long_d,long_b,char_b,int_g,long_b,short_a,unsigned_int_b,int_d,long_e);

	short_a = short_c + short_c;
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		long long_d = 0;
		char char_a = 0;
		float float_c = 0;
		double double_f = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_b = 0;
		char char_b = 0;
		int int_c = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		int int_d = 0;
		int int_e = 0;
		int int_f = 0;
		int int_g = 0;
		long long_e = 0;
		short short_c = 0;
		double double_h = 0;
		double double_i = 0;
		short short_d = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		double double_k = 0;
		char char_c = 0;
		double double_m = 0;
		unsigned int unsigned_int_g = 0;
		int int_j = 0;
		float float_d = 0;
		int int_h = 0;
		short short_e = 0;
		short short_f = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		double double_l = 0;
		unsigned int unsigned_int_h = 0;
		int int_i = 0;
		if(1)
		{
			float_b = float_c;
		}
		double_h = ldexp ( double_g , int_g ) ;
		int_g = int_e;
		if(1)
		{
			double_h = ldexp ( double_i , int_f ) ;
		}
		short_b = short_d;
		double_a = mem_print_regions(short_d,double_h);

		float_a = float_d;
		double_a = double_j;
		int_d = int_c * int_c;
		unsigned_int_d = unsigned_int_c - unsigned_int_c;
		double_b = ldexp ( double_k , int_e ) ;
		for(int looper_e=0; looper_e<7;looper_e++)
		{
			if(1)
			{
				unsigned int unsigned_int_a = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				long long_a = 0;
				long long_b = 0;
				double double_d = 0;
				double double_e = 0;
				float float_a = 0;
				float float_b = 0;
				short short_a = 0;
				short short_b = 0;
				long long_c = 0;
				long long_d = 0;
				char char_a = 0;
				float float_c = 0;
				double double_f = 0;
				int int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_b = 0;
				char char_b = 0;
				int int_c = 0;
				double double_g = 0;
				unsigned int unsigned_int_c = 0;
				int int_d = 0;
				int int_e = 0;
				int int_f = 0;
				int int_g = 0;
				long long_e = 0;
				short short_c = 0;
				double double_h = 0;
				double double_i = 0;
				short short_d = 0;
				double double_j = 0;
				unsigned int unsigned_int_d = 0;
				double double_k = 0;
				char char_c = 0;
				double double_m = 0;
				unsigned int unsigned_int_g = 0;
				int int_j = 0;
				float float_d = 0;
				int int_h = 0;
				short short_e = 0;
				short short_f = 0;
				unsigned int unsigned_int_e = 0;
				unsigned int unsigned_int_f = 0;
				double double_l = 0;
				unsigned int unsigned_int_h = 0;
				int int_i = 0;
				int_e = int_h;
				long_d = long_d;
			}
			double_j = asin ( double_e ) ;
		}
		double_k = double_h;
		long_d = long_b;
		double_e = double_g / double_e;
		double_a = cos ( double_i ) ;
	}
	else
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		long long_d = 0;
		char char_a = 0;
		float float_c = 0;
		double double_f = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_b = 0;
		char char_b = 0;
		int int_c = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		int int_d = 0;
		int int_e = 0;
		int int_f = 0;
		int int_g = 0;
		long long_e = 0;
		short short_c = 0;
		double double_h = 0;
		double double_i = 0;
		short short_d = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		double double_k = 0;
		char char_c = 0;
		double double_m = 0;
		unsigned int unsigned_int_g = 0;
		int int_j = 0;
		float float_d = 0;
		int int_h = 0;
		short short_e = 0;
		short short_f = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		double double_l = 0;
		unsigned int unsigned_int_h = 0;
		int int_i = 0;
		if(1)
		{
			unsigned int unsigned_int_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			long long_a = 0;
			long long_b = 0;
			double double_d = 0;
			double double_e = 0;
			float float_a = 0;
			float float_b = 0;
			short short_a = 0;
			short short_b = 0;
			long long_c = 0;
			long long_d = 0;
			char char_a = 0;
			float float_c = 0;
			double double_f = 0;
			int int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_b = 0;
			char char_b = 0;
			int int_c = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			int int_d = 0;
			int int_e = 0;
			int int_f = 0;
			int int_g = 0;
			long long_e = 0;
			short short_c = 0;
			double double_h = 0;
			double double_i = 0;
			short short_d = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			double double_k = 0;
			char char_c = 0;
			double double_m = 0;
			unsigned int unsigned_int_g = 0;
			int int_j = 0;
			float float_d = 0;
			int int_h = 0;
			short short_e = 0;
			short short_f = 0;
			unsigned int unsigned_int_e = 0;
			unsigned int unsigned_int_f = 0;
			double double_l = 0;
			unsigned int unsigned_int_h = 0;
			int int_i = 0;
			unsigned_int_f = unsigned_int_e + unsigned_int_d;
		}
		short_f = short_e + short_c;
		char_a = char_a / char_c;
		double_e = ldexp ( double_f , int_b ) ;
	}
	for(int looper_f=0; looper_f<6;looper_f++)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		long long_d = 0;
		char char_a = 0;
		float float_c = 0;
		double double_f = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_b = 0;
		char char_b = 0;
		int int_c = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		int int_d = 0;
		int int_e = 0;
		int int_f = 0;
		int int_g = 0;
		long long_e = 0;
		short short_c = 0;
		double double_h = 0;
		double double_i = 0;
		short short_d = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		double double_k = 0;
		char char_c = 0;
		double double_m = 0;
		unsigned int unsigned_int_g = 0;
		int int_j = 0;
		float float_d = 0;
		int int_h = 0;
		short short_e = 0;
		short short_f = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		double double_l = 0;
		unsigned int unsigned_int_h = 0;
		int int_i = 0;
		double_b = log10 ( double_a ) ;
		double_g = cos ( double_l ) ;
		if(1)
		{
			double_m = floor ( double_a ) ;
			for(int looper_g=0; looper_g<3;looper_g++)
			{
				if(1)
				{
					unsigned int unsigned_int_a = 0;
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					long long_a = 0;
					long long_b = 0;
					double double_d = 0;
					double double_e = 0;
					float float_a = 0;
					float float_b = 0;
					short short_a = 0;
					short short_b = 0;
					long long_c = 0;
					long long_d = 0;
					char char_a = 0;
					float float_c = 0;
					double double_f = 0;
					int int_a = 0;
					unsigned int unsigned_int_b = 0;
					int int_b = 0;
					char char_b = 0;
					int int_c = 0;
					double double_g = 0;
					unsigned int unsigned_int_c = 0;
					int int_d = 0;
					int int_e = 0;
					int int_f = 0;
					int int_g = 0;
					long long_e = 0;
					short short_c = 0;
					double double_h = 0;
					double double_i = 0;
					short short_d = 0;
					double double_j = 0;
					unsigned int unsigned_int_d = 0;
					double double_k = 0;
					char char_c = 0;
					double double_m = 0;
					unsigned int unsigned_int_g = 0;
					int int_j = 0;
					float float_d = 0;
					int int_h = 0;
					short short_e = 0;
					short short_f = 0;
					unsigned int unsigned_int_e = 0;
					unsigned int unsigned_int_f = 0;
					double double_l = 0;
					unsigned int unsigned_int_h = 0;
					int int_i = 0;
					unsigned_int_h = unsigned_int_g / unsigned_int_h;
				}
			}
			double_f = sqrt ( double_b ) ;
		}
	}
	for(int looper_h=0; looper_h<10;looper_h++)
	{
		double_f = fabs ( double_b ) ;
	}
	for(int looper_i=0; looper_i<5;looper_i++)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		long long_d = 0;
		char char_a = 0;
		float float_c = 0;
		double double_f = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_b = 0;
		char char_b = 0;
		int int_c = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		int int_d = 0;
		int int_e = 0;
		int int_f = 0;
		int int_g = 0;
		long long_e = 0;
		short short_c = 0;
		double double_h = 0;
		double double_i = 0;
		short short_d = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		double double_k = 0;
		char char_c = 0;
		double double_m = 0;
		unsigned int unsigned_int_g = 0;
		int int_j = 0;
		float float_d = 0;
		int int_h = 0;
		short short_e = 0;
		short short_f = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		double double_l = 0;
		unsigned int unsigned_int_h = 0;
		int int_i = 0;
		int_i = int_g;
		double_m = exp ( double_c ) ;
		double_a = sqrt ( double_k ) ;
		double_a = tan ( double_j ) ;
		double_k = floor ( double_e ) ;
		if(1)
		{
			double_d = sqrt ( double_e ) ;
			if(1)
			{
				double_i = ceil ( double_h ) ;
				double_g = pow ( double_e , double_c ) ;
				unsigned_int_b = unsigned_int_g * unsigned_int_d;
			}
		}
		double_b = cos ( double_a ) ;
	}
	int_j = mem_approx_mapq_se(int_e,char_c);

}
void mem_alnreg_matesw_core( int parameter_1,char parameter_2,long parameter_3,short parameter_4,short parameter_5,int parameter_6,short parameter_7,unsigned int parameter_8)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	short short_a = 0;
	short short_b = 0;
	float float_a = 0;
	double double_i = 0;
	long long_a = 0;
	char char_a = 0;
	int int_c = 0;
	unsigned int unsigned_int_b = 0;
	long long_b = 0;
	long long_c = 0;
	char char_c = 0;
	int int_d = 0;
	int int_e = 0;
	float float_b = 0;
	short short_c = 0;
	char char_e = 0;
	unsigned int unsigned_int_d = 0;
	int int_f = 0;
	short short_e = 0;
	char char_b = 0;
	double double_j = 0;
	double double_k = 0;
	double double_l = 0;
	long long_d = 0;
	unsigned int unsigned_int_c = 0;
	short short_d = 0;
	char char_d = 0;
	unsigned_int_a = unsigned_int_a;
	double_a = log10 ( double_b ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double_b = double_c + double_c;
		if(1)
		{
		}
	}
	int_a = int_b;
	double_d = asin ( double_c ) ;
	for(int looper_b=0; looper_b<9;looper_b++)
	{
		?:
		double_c = double_e;
	}
	double_c = atan ( double_f ) ;
	double_g = double_g;
	double_h = fabs ( double_e ) ;
	short_a = short_b;
	double_d = tanh ( double_b ) ;
	if(1)
	{
		double_e = double_c;
	}
	if(1)
	{
		int_b = mem_print_region1(unsigned_int_a,float_a);

		double_e = acos ( double_g ) ;
		double_e = tanh ( double_i ) ;
	}
	mem_sort_deduplicate(long_a,char_a,int_c,long_a,double_i);

	double_a = exp ( double_c ) ;
	?:
	unsigned_int_b = unsigned_int_a;
	?:
	unsigned_int_a = unsigned_int_b * unsigned_int_a;
	if(1)
	{
		double_h = double_c;
		long_c = long_b + long_b;
		short_b = short_a;
		int_c = int_a * int_a;
	}
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		short short_a = 0;
		short short_b = 0;
		float float_a = 0;
		double double_i = 0;
		long long_a = 0;
		char char_a = 0;
		int int_c = 0;
		unsigned int unsigned_int_b = 0;
		long long_b = 0;
		long long_c = 0;
		char char_c = 0;
		int int_d = 0;
		int int_e = 0;
		float float_b = 0;
		short short_c = 0;
		char char_e = 0;
		unsigned int unsigned_int_d = 0;
		int int_f = 0;
		short short_e = 0;
		char char_b = 0;
		double double_j = 0;
		double double_k = 0;
		double double_l = 0;
		long long_d = 0;
		unsigned int unsigned_int_c = 0;
		short short_d = 0;
		char char_d = 0;
		double_b = exp ( double_c ) ;
		int_a = int_a / int_b;
		char_a = char_b / char_b;
		double_h = double_f;
		short_a = short_b / short_a;
		double_j = asin ( double_a ) ;
		double_k = atan ( double_d ) ;
		char_c = mem_alnreg_isize(int_d,double_h,double_e,int_e);

		double_c = sqrt ( double_l ) ;
		float_b = float_a - float_b;
		double_b = atan2 ( double_k , double_j ) ;
		long_d = long_c * long_a;
		double_c = double_l;
		float_b = float_a * float_a;
		if(1)
		{
			unsigned int unsigned_int_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			short short_a = 0;
			short short_b = 0;
			float float_a = 0;
			double double_i = 0;
			long long_a = 0;
			char char_a = 0;
			int int_c = 0;
			unsigned int unsigned_int_b = 0;
			long long_b = 0;
			long long_c = 0;
			char char_c = 0;
			int int_d = 0;
			int int_e = 0;
			float float_b = 0;
			short short_c = 0;
			char char_e = 0;
			unsigned int unsigned_int_d = 0;
			int int_f = 0;
			short short_e = 0;
			char char_b = 0;
			double double_j = 0;
			double double_k = 0;
			double double_l = 0;
			long long_d = 0;
			unsigned int unsigned_int_c = 0;
			short short_d = 0;
			char char_d = 0;
			int_c = int_a - int_b;
			double_j = atan ( double_c ) ;
			double_e = sqrt ( double_d ) ;
			unsigned_int_c = unsigned_int_a + unsigned_int_c;
			short_c = short_d;
			long_b = long_a;
			char_a = char_d;
		}
		double_a = double_l / double_l;
		for(int looper_c=0; looper_c<3;looper_c++)
		{
			if(1)
			{
			}
		}
		char_a = char_a + char_a;
		for(int looper_d=0; looper_d<1;looper_d++)
		{
			double_d = cos ( double_b ) ;
		}
		char_e = bns_fetch_seq(char_c,float_b,unsigned_int_d,int_a,short_c,int_a);

		double_b = ldexp ( double_i , int_e ) ;
		double_f = cos ( double_h ) ;
	}
	if(1)
	{
		double_f = cosh ( double_g ) ;
	}
	char_c = char_a;
	unsigned_int_b = ksw_align2(int_d,unsigned_int_b,int_d,unsigned_int_d,int_a,char_a,int_b,int_f,int_a,int_e,int_a,short_e);

}
void mem_alnreg_matesw( char parameter_1,float parameter_2,int parameter_3,long parameter_4,float parameter_5,short parameter_6)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	char char_a = 0;
	long long_a = 0;
	short short_a = 0;
	short short_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_b = 0;
	double_a = exp ( double_b ) ;
	double_d = double_c / double_b;
	mem_alnreg_matesw_core(int_a,char_a,long_a,short_a,short_b,int_a,short_b,unsigned_int_a);

	double_c = tanh ( double_b ) ;
	double_a = log10 ( double_d ) ;
	double_b = sqrt ( double_b ) ;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		for(int looper_b=0; looper_b<2;looper_b++)
		{
			if(1)
			{
				int_a = int_a;
			}
		}
	}
	for(int looper_c=0; looper_c<7;looper_c++)
	{
		for(int looper_d=0; looper_d<1;looper_d++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_a = 0;
			char char_a = 0;
			long long_a = 0;
			short short_a = 0;
			short short_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			unsigned int unsigned_int_b = 0;
			unsigned_int_c = unsigned_int_a + unsigned_int_b;
		}
	}
	unsigned_int_d = unsigned_int_d;
	unsigned_int_c = unsigned_int_e - unsigned_int_d;
}
int mem_alnreg_freeSAM( float parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	double double_d = 0;
	int int_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double_a = atan ( double_b ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		int_a = int_a;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned_int_c = unsigned_int_a * unsigned_int_b;
	}
	if(1)
	{
		double_b = double_c + double_a;
	}
	if(1)
	{
		double_a = fmod ( double_b , double_b ) ;
	}
	if(1)
	{
		double_c = atan ( double_b ) ;
	}
	if(1)
	{
		double_c = floor ( double_b ) ;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		double double_d = 0;
		int int_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned_int_a = unsigned_int_d / unsigned_int_d;
	}
	double_c = asin ( double_b ) ;
	double_d = log ( double_d ) ;
	return int_b;
}
long get_pri_idx( double parameter_1,unsigned int parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	long long_b = 0;
	double_a = exp ( double_b ) ;
	if(1)
	{
		return long_a;
	}
	return long_b;
}
unsigned int mem_alnreg_tagXAXB( float parameter_1,unsigned int parameter_2,double parameter_3,short parameter_4,unsigned int parameter_5,unsigned int parameter_6,char parameter_7)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	int int_a = 0;
	float float_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_c = 0;
	double double_d = 0;
	float float_b = 0;
	int int_b = 0;
	long long_a = 0;
	double double_e = 0;
	long long_b = 0;
	unsigned int unsigned_int_b = 0;
	short short_d = 0;
	float float_c = 0;
	double double_f = 0;
	long long_d = 0;
	long long_c = 0;
	double double_g = 0;
	double double_h = 0;
	if(1)
	{
		return unsigned_int_a;
	}
	double_a = log10 ( double_a ) ;
	short_c = short_a / short_b;
	for(int looper_a=0; looper_a<5;looper_a++)
	{
		unsigned_int_a = kputc(int_a,float_a);

		double_a = ceil ( double_b ) ;
		if(1)
		{
			if(1)
			{
				double_b = tan ( double_a ) ;
			}
			else
			{
				char_b = char_a + char_a;
			}
		}
	}
	if(1)
	{
		double_a = pow ( double_b , double_a ) ;
		double_c = double_d;
		for(int looper_b=0; looper_b<7;looper_b++)
		{
			unsigned int unsigned_int_a = 0;
			double double_a = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			int int_a = 0;
			float float_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			double double_c = 0;
			double double_d = 0;
			float float_b = 0;
			int int_b = 0;
			long long_a = 0;
			double double_e = 0;
			long long_b = 0;
			unsigned int unsigned_int_b = 0;
			short short_d = 0;
			float float_c = 0;
			double double_f = 0;
			long long_d = 0;
			long long_c = 0;
			double double_g = 0;
			double double_h = 0;
			double_b = atan ( double_c ) ;
			float_b = float_a + float_a;
			if(1)
			{
			}
			if(1)
			{
				int_b = kputl(long_a,short_a);

				double_e = atan ( double_d ) ;
				if(1)
				{
				}
			}
			if(1)
			{
				double_c = atan2 ( double_d , double_a ) ;
			}
			char_a = kputw(int_a,long_b);

			double_c = double_d;
			long_a = long_b;
			double_e = tan ( double_b ) ;
			double_c = tan ( double_a ) ;
			float_b = kputs(short_a,short_a);

			double_d = kputsn(unsigned_int_b,int_b,char_b);

			double_b = floor ( double_c ) ;
			double_e = tan ( double_b ) ;
			for(int looper_c=0; looper_c<9;looper_c++)
			{
				long_b = mem_alnreg_setSAM(long_b,char_b,short_d,float_c,double_f);

				double_c = sinh ( double_e ) ;
				double_c = cos ( double_f ) ;
			}
			long_c = long_d;
			double_c = log ( double_a ) ;
			double_e = log ( double_c ) ;
		}
		if(1)
		{
			double_e = sqrt ( double_c ) ;
			int_a = int_b;
		}
		double_d = double_d - double_e;
	}
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		int int_a = 0;
		float float_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_c = 0;
		double double_d = 0;
		float float_b = 0;
		int int_b = 0;
		long long_a = 0;
		double double_e = 0;
		long long_b = 0;
		unsigned int unsigned_int_b = 0;
		short short_d = 0;
		float float_c = 0;
		double double_f = 0;
		long long_d = 0;
		long long_c = 0;
		double double_g = 0;
		double double_h = 0;
		long_d = get_pri_idx(double_e,unsigned_int_b,int_a);

		char_b = char_a;
		double_c = floor ( double_e ) ;
		double_d = fmod ( double_g , double_h ) ;
		char_b = char_a;
	}
}
long infer_bw( int parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	double double_a = 0;
	long long_a = 0;
	double double_b = 0;
	long long_b = 0;
	double double_c = 0;
	double_a = acos ( double_a ) ;
	if(1)
	{
		return long_a;
	}
	?:
	double_a = fmod ( double_a , double_b ) ;
	char controller_b[3];
	scanf("%3s", controller_b);
	if( controller_b <"`9L" )
	{
		double double_a = 0;
		long long_a = 0;
		double double_b = 0;
		long long_b = 0;
		double double_c = 0;
		double_a = double_b / double_c;
	}
	return long_b;
}
long mem_alnreg_setSAM( long parameter_1,char parameter_2,short parameter_3,float parameter_4,double parameter_5)
{
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	float float_a = 0;
	float float_b = 0;
	short short_a = 0;
	int int_c = 0;
	char char_c = 0;
	int int_d = 0;
	double double_e = 0;
	double double_f = 0;
	int int_e = 0;
	unsigned int unsigned_int_c = 0;
	float float_c = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	int int_f = 0;
	short short_b = 0;
	double double_g = 0;
	float float_d = 0;
	long long_b = 0;
	float float_e = 0;
	unsigned int unsigned_int_g = 0;
	long long_c = 0;
	char char_a = 0;
	char char_b = 0;
	double double_h = 0;
	unsigned int unsigned_int_f = 0;
	int int_g = 0;
	int int_h = 0;
	double double_i = 0;
	if(1)
	{
		return long_a;
	}
	double_a = exp ( double_a ) ;
	double_b = floor ( double_a ) ;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		?:
		double_a = double_b * double_a;
	}
	double_a = ceil ( double_b ) ;
	double_b = tanh ( double_a ) ;
	long_a = long_a;
	if(1)
	{
		double_c = pow ( double_c , double_a ) ;
	}
	if(1)
	{
		long long_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		float float_b = 0;
		short short_a = 0;
		int int_c = 0;
		char char_c = 0;
		int int_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_e = 0;
		unsigned int unsigned_int_c = 0;
		float float_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		int int_f = 0;
		short short_b = 0;
		double double_g = 0;
		float float_d = 0;
		long long_b = 0;
		float float_e = 0;
		unsigned int unsigned_int_g = 0;
		long long_c = 0;
		char char_a = 0;
		char char_b = 0;
		double double_h = 0;
		unsigned int unsigned_int_f = 0;
		int int_g = 0;
		int int_h = 0;
		double double_i = 0;
		int_a = int_b;
		char_b = char_a + char_a;
		double_c = log10 ( double_d ) ;
	}
	unsigned_int_a = unsigned_int_b;
	float_a = float_a;
	float_b = bis_bwa_gen_cigar2(short_a,int_a,int_a,int_c,int_a,int_b,double_d,char_c,int_a,float_b,double_c,unsigned_int_a,int_d,int_a,int_d,float_b,char_c,double_e);

	double_e = double_d * double_d;
	double_a = log ( double_b ) ;
	for(int looper_b=0; looper_b<10;looper_b++)
	{
		double_f = exp ( double_c ) ;
		int_e = mem_print_region1(unsigned_int_c,float_c);

		unsigned_int_d = unsigned_int_b - unsigned_int_b;
		?:
		unsigned_int_c = unsigned_int_c - unsigned_int_e;
		if(1)
		{
			int_c = int_e;
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
	}
	double_a = acos ( double_b ) ;
	short_a = short_a;
	?:
	double_d = sinh ( double_e ) ;
	bns_depos(int_b,int_a,int_a);

	double_f = tan ( double_d ) ;
	?:
	double_d = log ( double_f ) ;
	if(1)
	{
		if(1)
		{
			int_f = bns_pos2rid(short_b,char_c);

			double_e = acos ( double_c ) ;
			double_e = ceil ( double_g ) ;
			double_d = log10 ( double_b ) ;
		}
		if(1)
		{
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			float float_a = 0;
			float float_b = 0;
			short short_a = 0;
			int int_c = 0;
			char char_c = 0;
			int int_d = 0;
			double double_e = 0;
			double double_f = 0;
			int int_e = 0;
			unsigned int unsigned_int_c = 0;
			float float_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			int int_f = 0;
			short short_b = 0;
			double double_g = 0;
			float float_d = 0;
			long long_b = 0;
			float float_e = 0;
			unsigned int unsigned_int_g = 0;
			long long_c = 0;
			char char_a = 0;
			char char_b = 0;
			double double_h = 0;
			unsigned int unsigned_int_f = 0;
			int int_g = 0;
			int int_h = 0;
			double double_i = 0;
			double_g = atan2 ( double_h , double_e ) ;
			double_f = floor ( double_e ) ;
		}
	}
	if(1)
	{
		float_d = float_b - float_b;
		?:
		double_d = acos ( double_b ) ;
		?:
		long_b = long_a;
		double_c = double_f - double_d;
		if(1)
		{
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			float float_a = 0;
			float float_b = 0;
			short short_a = 0;
			int int_c = 0;
			char char_c = 0;
			int int_d = 0;
			double double_e = 0;
			double double_f = 0;
			int int_e = 0;
			unsigned int unsigned_int_c = 0;
			float float_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			int int_f = 0;
			short short_b = 0;
			double double_g = 0;
			float float_d = 0;
			long long_b = 0;
			float float_e = 0;
			unsigned int unsigned_int_g = 0;
			long long_c = 0;
			char char_a = 0;
			char char_b = 0;
			double double_h = 0;
			unsigned int unsigned_int_f = 0;
			int int_g = 0;
			int int_h = 0;
			double double_i = 0;
			long_b = infer_bw(int_c,int_d,int_f,int_e,int_a,int_f);

			double_f = cosh ( double_b ) ;
			unsigned_int_f = unsigned_int_e;
			int_b = int_d - int_g;
		}
		if(1)
		{
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			float float_a = 0;
			float float_b = 0;
			short short_a = 0;
			int int_c = 0;
			char char_c = 0;
			int int_d = 0;
			double double_e = 0;
			double double_f = 0;
			int int_e = 0;
			unsigned int unsigned_int_c = 0;
			float float_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			int int_f = 0;
			short short_b = 0;
			double double_g = 0;
			float float_d = 0;
			long long_b = 0;
			float float_e = 0;
			unsigned int unsigned_int_g = 0;
			long long_c = 0;
			char char_a = 0;
			char char_b = 0;
			double double_h = 0;
			unsigned int unsigned_int_f = 0;
			int int_g = 0;
			int int_h = 0;
			double double_i = 0;
			int_e = int_h;
			double_i = double_b;
		}
	}
	float_e = float_d - float_c;
	double_a = tan ( double_c ) ;
	if(1)
	{
		double_a = sinh ( double_g ) ;
	}
	else
	{
		float_a = float_d;
	}
	long_a = long_a;
	unsigned_int_d = unsigned_int_g;
	return long_c;
}
char mem_alnreg_tagSA( float parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4,short parameter_5,float parameter_6,int parameter_7)
{
	char char_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	float float_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_b = 0;
	long long_a = 0;
	short short_a = 0;
	double double_a = 0;
	double double_b = 0;
	float float_b = 0;
	short short_b = 0;
	short short_c = 0;
	double double_c = 0;
	unsigned int unsigned_int_d = 0;
	long long_b = 0;
	long long_c = 0;
	char char_c = 0;
	char char_d = 0;
	int int_e = 0;
	double double_d = 0;
	char char_e = 0;
	float float_e = 0;
	int int_c = 0;
	unsigned int unsigned_int_c = 0;
	char char_b = 0;
	long long_d = 0;
	int int_f = 0;
	float float_c = 0;
	float float_d = 0;
	int int_d = 0;
	if(1)
	{
		return char_a;
	}
	unsigned_int_a = kputc(int_a,float_a);

	unsigned_int_b = unsigned_int_b;
	int_b = kputl(long_a,short_a);

	double_a = floor ( double_b ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		char char_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_b = 0;
		long long_a = 0;
		short short_a = 0;
		double double_a = 0;
		double double_b = 0;
		float float_b = 0;
		short short_b = 0;
		short short_c = 0;
		double double_c = 0;
		unsigned int unsigned_int_d = 0;
		long long_b = 0;
		long long_c = 0;
		char char_c = 0;
		char char_d = 0;
		int int_e = 0;
		double double_d = 0;
		char char_e = 0;
		float float_e = 0;
		int int_c = 0;
		unsigned int unsigned_int_c = 0;
		char char_b = 0;
		long long_d = 0;
		int int_f = 0;
		float float_c = 0;
		float float_d = 0;
		int int_d = 0;
		double_a = ceil ( double_b ) ;
		if(1)
		{
		}
		if(1)
		{
			char char_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			float float_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_b = 0;
			long long_a = 0;
			short short_a = 0;
			double double_a = 0;
			double double_b = 0;
			float float_b = 0;
			short short_b = 0;
			short short_c = 0;
			double double_c = 0;
			unsigned int unsigned_int_d = 0;
			long long_b = 0;
			long long_c = 0;
			char char_c = 0;
			char char_d = 0;
			int int_e = 0;
			double double_d = 0;
			char char_e = 0;
			float float_e = 0;
			int int_c = 0;
			unsigned int unsigned_int_c = 0;
			char char_b = 0;
			long long_d = 0;
			int int_f = 0;
			float float_c = 0;
			float float_d = 0;
			int int_d = 0;
			float_b = kputs(short_b,short_c);

			float_c = float_d;
			if(1)
			{
			}
		}
		float_e = float_e;
		int_c = int_b;
		unsigned_int_b = unsigned_int_c;
		double_c = tan ( double_a ) ;
		double_c = kputsn(unsigned_int_d,int_b,char_a);

		float_b = float_b * float_b;
		char_b = char_b * char_b;
		double_b = log ( double_c ) ;
		for(int looper_b=0; looper_b<1;looper_b++)
		{
			char char_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			float float_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_b = 0;
			long long_a = 0;
			short short_a = 0;
			double double_a = 0;
			double double_b = 0;
			float float_b = 0;
			short short_b = 0;
			short short_c = 0;
			double double_c = 0;
			unsigned int unsigned_int_d = 0;
			long long_b = 0;
			long long_c = 0;
			char char_c = 0;
			char char_d = 0;
			int int_e = 0;
			double double_d = 0;
			char char_e = 0;
			float float_e = 0;
			int int_c = 0;
			unsigned int unsigned_int_c = 0;
			char char_b = 0;
			long long_d = 0;
			int int_f = 0;
			float float_c = 0;
			float float_d = 0;
			int int_d = 0;
			double_b = log10 ( double_c ) ;
			int_b = int_d;
		}
		long_b = mem_alnreg_setSAM(long_c,char_c,short_a,float_a,double_c);

		double_a = pow ( double_a , double_a ) ;
		unsigned_int_a = unsigned_int_d;
		long_d = long_d - long_b;
		char_d = kputw(int_e,long_a);

		int_c = int_f - int_b;
		double_a = floor ( double_d ) ;
	}
	if(1)
	{
		double_d = double_d - double_a;
		double_c = tan ( double_b ) ;
	}
	char_d = char_e;
}
short get_rlen( int parameter_1,float parameter_2)
{
	char char_a = 0;
	short short_a = 0;
	double double_a = 0;
	double double_b = 0;
	char_a = char_a;
	for(int looper_a=0; looper_a<6;looper_a++)
	{
		char char_a = 0;
		short short_a = 0;
		double double_a = 0;
		double double_b = 0;
		double_a = floor ( double_a ) ;
		char controller_a[4];
		scanf("%4s", controller_a);
		if( controller_a >"@L/b" )
		{
			char char_a = 0;
			short short_a = 0;
			double double_a = 0;
			double double_b = 0;
			double_b = double_a / double_a;
		}
	}
	return short_a;
}
int kputl( long parameter_1,short parameter_2)
{
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	float float_a = 0;
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_d = 0;
	double double_e = 0;
	int int_d = 0;
	int int_b = 0;
	int int_c = 0;
	double double_c = 0;
	unsigned_int_a = kputc(int_a,float_a);

	short_a = short_a - short_b;
	int_a = int_a;
	if(1)
	{
		return int_a;
	}
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		short short_a = 0;
		short short_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_d = 0;
		double double_e = 0;
		int int_d = 0;
		int int_b = 0;
		int int_c = 0;
		double double_c = 0;
		int_a = int_b + int_c;
	}
	double_a = fabs ( double_b ) ;
	char controller_b[3];
	scanf("%3s", controller_b);
	if( controller_b <"nc>" )
	{
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		short short_a = 0;
		short short_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_d = 0;
		double double_e = 0;
		int int_d = 0;
		int int_b = 0;
		int int_c = 0;
		double double_c = 0;
		double_b = log10 ( double_c ) ;
	}
	if(1)
	{
		double_a = cos ( double_b ) ;
		double_b = atan2 ( double_a , double_b ) ;
		unsigned_int_a = unsigned_int_a;
	}
	for(int looper_b=0; looper_b<1;looper_b++)
	{
		double_d = cos ( double_a ) ;
	}
	double_e = fmod ( double_a , double_d ) ;
	return int_d;
}
float kputs( short parameter_1,short parameter_2)
{
	float float_a = 0;
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	char char_a = 0;
	return float_a;
	double_a = kputsn(unsigned_int_a,int_a,char_a);

}
double kputsn( unsigned int parameter_1,int parameter_2,char parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	double double_c = 0;
	char controller_a[1];
	scanf("%1s", controller_a);
	if( controller_a >"6" )
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		double double_c = 0;
		double_a = sqrt ( double_a ) ;
		double_a = pow ( double_a , double_b ) ;
		double_b = log ( double_c ) ;
	}
	double_b = fmod ( double_b , double_a ) ;
	double_b = tanh ( double_a ) ;
	int_a = int_a + int_a;
	return double_a;
}
short ks_resize( char parameter_1,short parameter_2)
{
	if(1)
	{
		short short_a = 0;
		short short_b = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		double double_c = 0;
		short_a = short_b;
		double_a = ldexp ( double_b , int_a ) ;
		double_c = log10 ( double_b ) ;
	}
}
int is_proper_pair( short parameter_1,float parameter_2,char parameter_3,short parameter_4)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	int int_c = 0;
	double_a = floor ( double_b ) ;
	if(1)
	{
		return int_a;
	}
	if(1)
	{
		return int_a;
	}
	else
	{
		return int_b;
	}
	char_a = mem_alnreg_isize(int_a,double_b,double_a,int_c);

}
void mem_alnreg_formatSAM( short parameter_1,long parameter_2,long parameter_3,char parameter_4,int parameter_5,long parameter_6,short parameter_7,unsigned int parameter_8,int parameter_9,long parameter_10)
{
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	short short_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_c = 0;
	float float_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_c = 0;
	int int_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_d = 0;
	double double_e = 0;
	int int_d = 0;
	int int_e = 0;
	short short_b = 0;
	short short_c = 0;
	double double_f = 0;
	short short_d = 0;
	char char_b = 0;
	char char_c = 0;
	char char_d = 0;
	double double_g = 0;
	double double_h = 0;
	short short_e = 0;
	char char_e = 0;
	double double_i = 0;
	double double_j = 0;
	int int_f = 0;
	double double_k = 0;
	double double_l = 0;
	unsigned int unsigned_int_f = 0;
	unsigned int unsigned_int_g = 0;
	double double_m = 0;
	float float_b = 0;
	double double_n = 0;
	int int_g = 0;
	int int_h = 0;
	char char_f = 0;
	char char_g = 0;
	char char_h = 0;
	unsigned int unsigned_int_h = 0;
	long long_d = 0;
	unsigned int unsigned_int_e = 0;
	float float_c = 0;
	float float_d = 0;
	long long_c = 0;
	int int_i = 0;
	double_a = floor ( double_b ) ;
	char_a = char_a - char_a;
	short_a = short_a;
	if(1)
	{
		unsigned_int_b = unsigned_int_a * unsigned_int_b;
	}
	?:
	int_a = int_a - int_b;
	?:
	unsigned_int_c = unsigned_int_a;
	if(1)
	{
		float_a = float_a;
		double_b = fmod ( double_a , double_a ) ;
	}
	if(1)
	{
		long_a = long_b;
		double_c = ldexp ( double_a , int_a ) ;
		double_b = acos ( double_b ) ;
		double_c = floor ( double_c ) ;
	}
	if(1)
	{
		int_a = int_c + int_a;
		double_b = fabs ( double_a ) ;
		char_a = char_a - char_a;
		double_c = sqrt ( double_a ) ;
	}
	?:
	double_c = cos ( double_d ) ;
	unsigned_int_b = unsigned_int_a + unsigned_int_d;
	?:
	double_a = double_c * double_e;
	int_d = int_e;
	short_c = short_b - short_a;
	?:
	double_c = tanh ( double_b ) ;
	unsigned_int_d = mem_alnreg_tagXAXB(float_a,unsigned_int_d,double_a,short_c,unsigned_int_c,unsigned_int_c,char_a);

	short_c = short_c;
	if(1)
	{
		double_e = sinh ( double_b ) ;
		int_a = int_a - int_c;
		int_d = int_a;
		double_a = atan ( double_d ) ;
		double_e = tanh ( double_b ) ;
		double_e = fabs ( double_a ) ;
		if(1)
		{
			int_d = int_a;
			for(int looper_a=0; looper_a<9;looper_a++)
			{
				double_e = fmod ( double_c , double_a ) ;
				if(1)
				{
					?:
					double_f = asin ( double_d ) ;
				}
				double_b = sinh ( double_b ) ;
				double_b = ldexp ( double_c , int_c ) ;
			}
		}
		else
		{
			float_a = float_a;
		}
	}
	else
	{
		int_b = int_a * int_e;
	}
	double_f = fmod ( double_b , double_b ) ;
	if(1)
	{
		if(1)
		{
			double_b = double_a;
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			char char_a = 0;
			short short_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_c = 0;
			float float_a = 0;
			long long_a = 0;
			long long_b = 0;
			double double_c = 0;
			int int_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_d = 0;
			double double_e = 0;
			int int_d = 0;
			int int_e = 0;
			short short_b = 0;
			short short_c = 0;
			double double_f = 0;
			short short_d = 0;
			char char_b = 0;
			char char_c = 0;
			char char_d = 0;
			double double_g = 0;
			double double_h = 0;
			short short_e = 0;
			char char_e = 0;
			double double_i = 0;
			double double_j = 0;
			int int_f = 0;
			double double_k = 0;
			double double_l = 0;
			unsigned int unsigned_int_f = 0;
			unsigned int unsigned_int_g = 0;
			double double_m = 0;
			float float_b = 0;
			double double_n = 0;
			int int_g = 0;
			int int_h = 0;
			char char_f = 0;
			char char_g = 0;
			char char_h = 0;
			unsigned int unsigned_int_h = 0;
			long long_d = 0;
			unsigned int unsigned_int_e = 0;
			float float_c = 0;
			float float_d = 0;
			long long_c = 0;
			int int_i = 0;
			unsigned_int_a = unsigned_int_e;
		}
		double_e = atan2 ( double_a , double_c ) ;
		int_b = ksprintf(int_a,short_a,unsigned_int_a);

		double_d = asin ( double_a ) ;
		double_b = atan2 ( double_b , double_a ) ;
		if(1)
		{
			float_a = kputs(short_a,short_d);

			double_e = exp ( double_f ) ;
			if(1)
			{
				char_b = char_c;
			}
			else
			{
				char_d = kputw(int_a,long_a);

				long_b = long_a;
			}
			char controller_l[3];
			scanf("%3s", controller_l);
			if( controller_l >"$f#" )
			{
				double_f = kputsn(unsigned_int_b,int_c,char_c);

				double_g = asin ( double_f ) ;
			}
			else
			{
				double_h = ldexp ( double_b , int_b ) ;
			}
			if(1)
			{
				short_e = ks_resize(char_e,short_c);

				int_e = int_c;
			}
			else
			{
				int_a = is_proper_pair(short_c,float_a,char_b,short_e);

				double_c = acos ( double_i ) ;
			}
		}
		else
		{
			double_h = double_c;
		}
	}
	else
	{
		double_a = pow ( double_h , double_i ) ;
	}
	int_b = int_e + int_e;
	if(1)
	{
		double_j = floor ( double_h ) ;
	}
	if(1)
	{
		double_j = double_h - double_i;
		if(1)
		{
			if(1)
			{
				int_f = kputl(long_b,short_c);

				double_g = atan ( double_e ) ;
			}
			if(1)
			{
				double_i = log10 ( double_g ) ;
			}
		}
		double_k = cosh ( double_k ) ;
		for(int looper_b=0; looper_b<1;looper_b++)
		{
			double_i = atan ( double_f ) ;
		}
		double_c = fmod ( double_g , double_i ) ;
		if(1)
		{
			double_l = atan2 ( double_e , double_j ) ;
			for(int looper_c=0; looper_c<6;looper_c++)
			{
				unsigned_int_g = unsigned_int_f / unsigned_int_a;
			}
			int_a = int_c * int_d;
		}
		else
		{
			double_k = fmod ( double_h , double_c ) ;
		}
	}
	else
	{
		double_f = acos ( double_i ) ;
		if(1)
		{
			if(1)
			{
				double_b = double_m / double_g;
			}
			if(1)
			{
				double_f = sinh ( double_f ) ;
			}
		}
		short_d = get_rlen(int_c,float_b);

		double_n = double_m + double_h;
		for(int looper_d=0; looper_d<7;looper_d++)
		{
			double_b = acos ( double_m ) ;
		}
		double_c = tan ( double_n ) ;
		if(1)
		{
			int_h = int_f / int_g;
			for(int looper_e=0; looper_e<3;looper_e++)
			{
				float_b = float_a;
			}
			double_j = fmod ( double_g , double_d ) ;
		}
		else
		{
			double_b = tan ( double_a ) ;
		}
	}
	if(1)
	{
		int_g = int_d;
		double_h = tan ( double_c ) ;
		int_f = int_d;
		double_h = tanh ( double_b ) ;
		double_e = tanh ( double_i ) ;
		double_f = tan ( double_m ) ;
		char_f = char_g;
		char_h = mem_alnreg_tagSA(float_a,char_e,unsigned_int_a,double_n,short_d,float_b,int_g);

		double_b = sinh ( double_d ) ;
	}
	if(1)
	{
		double_b = log ( double_c ) ;
		char_g = char_f;
	}
	if(1)
	{
		unsigned_int_h = kputc(int_h,float_a);

		long_b = long_a;
		double_h = atan ( double_g ) ;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		float float_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		int int_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_d = 0;
		double double_e = 0;
		int int_d = 0;
		int int_e = 0;
		short short_b = 0;
		short short_c = 0;
		double double_f = 0;
		short short_d = 0;
		char char_b = 0;
		char char_c = 0;
		char char_d = 0;
		double double_g = 0;
		double double_h = 0;
		short short_e = 0;
		char char_e = 0;
		double double_i = 0;
		double double_j = 0;
		int int_f = 0;
		double double_k = 0;
		double double_l = 0;
		unsigned int unsigned_int_f = 0;
		unsigned int unsigned_int_g = 0;
		double double_m = 0;
		float float_b = 0;
		double double_n = 0;
		int int_g = 0;
		int int_h = 0;
		char char_f = 0;
		char char_g = 0;
		char char_h = 0;
		unsigned int unsigned_int_h = 0;
		long long_d = 0;
		unsigned int unsigned_int_e = 0;
		float float_c = 0;
		float float_d = 0;
		long long_c = 0;
		int int_i = 0;
		double_b = sinh ( double_h ) ;
		float_d = float_c * float_c;
	}
	if(1)
	{
		unsigned_int_g = unsigned_int_c;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		float float_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		int int_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_d = 0;
		double double_e = 0;
		int int_d = 0;
		int int_e = 0;
		short short_b = 0;
		short short_c = 0;
		double double_f = 0;
		short short_d = 0;
		char char_b = 0;
		char char_c = 0;
		char char_d = 0;
		double double_g = 0;
		double double_h = 0;
		short short_e = 0;
		char char_e = 0;
		double double_i = 0;
		double double_j = 0;
		int int_f = 0;
		double double_k = 0;
		double double_l = 0;
		unsigned int unsigned_int_f = 0;
		unsigned int unsigned_int_g = 0;
		double double_m = 0;
		float float_b = 0;
		double double_n = 0;
		int int_g = 0;
		int int_h = 0;
		char char_f = 0;
		char char_g = 0;
		char char_h = 0;
		unsigned int unsigned_int_h = 0;
		long long_d = 0;
		unsigned int unsigned_int_e = 0;
		float float_c = 0;
		float float_d = 0;
		long long_c = 0;
		int int_i = 0;
		long_c = long_a / long_b;
	}
	double_m = tan ( double_k ) ;
	double_g = fabs ( double_f ) ;
	if(1)
	{
		int_d = int_e;
	}
	if(1)
	{
		double_a = double_i;
		int_b = int_a - int_b;
	}
	if(1)
	{
		double_e = floor ( double_m ) ;
		double_l = cosh ( double_d ) ;
		int_c = int_d + int_c;
		unsigned_int_g = unsigned_int_d;
		unsigned_int_h = unsigned_int_f;
		for(int looper_f=0; looper_f<5;looper_f++)
		{
			if(1)
			{
				double_j = fabs ( double_f ) ;
			}
		}
	}
	double_l = double_a + double_l;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		float float_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		int int_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_d = 0;
		double double_e = 0;
		int int_d = 0;
		int int_e = 0;
		short short_b = 0;
		short short_c = 0;
		double double_f = 0;
		short short_d = 0;
		char char_b = 0;
		char char_c = 0;
		char char_d = 0;
		double double_g = 0;
		double double_h = 0;
		short short_e = 0;
		char char_e = 0;
		double double_i = 0;
		double double_j = 0;
		int int_f = 0;
		double double_k = 0;
		double double_l = 0;
		unsigned int unsigned_int_f = 0;
		unsigned int unsigned_int_g = 0;
		double double_m = 0;
		float float_b = 0;
		double double_n = 0;
		int int_g = 0;
		int int_h = 0;
		char char_f = 0;
		char char_g = 0;
		char char_h = 0;
		unsigned int unsigned_int_h = 0;
		long long_d = 0;
		unsigned int unsigned_int_e = 0;
		float float_c = 0;
		float float_d = 0;
		long long_c = 0;
		int int_i = 0;
		int_c = int_i;
	}
	else
	{
		long_d = long_a;
	}
	long_b = long_b - long_d;
}
void mem_reg2sam_se( double parameter_1,char parameter_2,unsigned int parameter_3,long parameter_4,char parameter_5)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	long long_a = 0;
	long long_b = 0;
	char char_a = 0;
	int int_a = 0;
	short short_b = 0;
	unsigned int unsigned_int_a = 0;
	int int_b = 0;
	long long_c = 0;
	double double_e = 0;
	short short_c = 0;
	double_a = double_a + double_a;
	double_b = tan ( double_a ) ;
	if(1)
	{
		double_b = fmod ( double_b , double_c ) ;
		for(int looper_a=0; looper_a<10;looper_a++)
		{
			double_b = double_b / double_d;
		}
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		long long_a = 0;
		long long_b = 0;
		char char_a = 0;
		int int_a = 0;
		short short_b = 0;
		unsigned int unsigned_int_a = 0;
		int int_b = 0;
		long long_c = 0;
		double double_e = 0;
		short short_c = 0;
		mem_alnreg_formatSAM(short_a,long_a,long_b,char_a,int_a,long_b,short_b,unsigned_int_a,int_b,long_c);

		double_c = double_d;
		short_c = short_a;
		double_d = floor ( double_a ) ;
		double_d = tanh ( double_c ) ;
		double_a = pow ( double_d , double_e ) ;
	}
	double_e = double_d;
	double_a = double_d - double_a;
}
long mem_alnreg_resetFLAG( int parameter_1)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double_a = fmod ( double_a , double_a ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned_int_b = unsigned_int_a + unsigned_int_b;
	}
}
int hash_64( float parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	double double_c = 0;
	long long_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_b = 0;
	double_a = asin ( double_b ) ;
	long_a = long_a * long_a;
	double_c = sinh ( double_c ) ;
	long_a = long_b / long_a;
	int_a = int_a;
	double_b = double_b;
	unsigned_int_a = unsigned_int_a;
	double_c = cosh ( double_b ) ;
	return int_b;
}
void mem_mark_primary_se( unsigned int parameter_1,int parameter_2,float parameter_3)
{
	double double_a = 0;
	short short_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	double double_f = 0;
	int int_a = 0;
	float float_a = 0;
	double double_g = 0;
	double double_h = 0;
	long long_a = 0;
	long long_b = 0;
	int int_b = 0;
	int int_c = 0;
	float float_b = 0;
	unsigned int unsigned_int_b = 0;
	short short_b = 0;
	short short_c = 0;
	double_a = mem_print_regions(short_a,double_b);

	double_b = log10 ( double_a ) ;
	if(1)
	{
	}
	if(1)
	{
		double_c = floor ( double_d ) ;
		double_d = tan ( double_c ) ;
	}
	unsigned_int_a = unsigned_int_a;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double_d = double_b;
		double_c = fabs ( double_e ) ;
		double_a = sqrt ( double_f ) ;
		double_c = cosh ( double_e ) ;
		unsigned_int_a = unsigned_int_a + unsigned_int_a;
		if(1)
		{
			double_b = double_c;
		}
	}
	double_d = floor ( double_e ) ;
	double_d = pow ( double_a , double_f ) ;
	double_b = ldexp ( double_e , int_a ) ;
	if(1)
	{
		double_c = ceil ( double_f ) ;
		double_c = floor ( double_c ) ;
	}
	for(int looper_b=0; looper_b<10;looper_b++)
	{
		double double_a = 0;
		short short_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		double double_f = 0;
		int int_a = 0;
		float float_a = 0;
		double double_g = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		int int_b = 0;
		int int_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_b = 0;
		short short_b = 0;
		short short_c = 0;
		long_b = long_a * long_a;
		double_c = double_f;
		if(1)
		{
			long_b = long_b;
		}
	}
	if(1)
	{
		double double_a = 0;
		short short_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		double double_f = 0;
		int int_a = 0;
		float float_a = 0;
		double double_g = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		int int_b = 0;
		int int_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_b = 0;
		short short_b = 0;
		short short_c = 0;
		int_a = hash_64(float_a);

		int_c = int_a - int_b;
		if(1)
		{
			double_g = double_c * double_b;
		}
		for(int looper_c=0; looper_c<1;looper_c++)
		{
			int_a = int_c;
		}
		for(int looper_d=0; looper_d<4;looper_d++)
		{
			if(1)
			{
				double_e = ceil ( double_e ) ;
				if(1)
				{
					double_c = log ( double_d ) ;
				}
			}
			else
			{
				double_c = sqrt ( double_d ) ;
			}
		}
		if(1)
		{
			double double_a = 0;
			short short_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			double double_e = 0;
			double double_f = 0;
			int int_a = 0;
			float float_a = 0;
			double double_g = 0;
			double double_h = 0;
			long long_a = 0;
			long long_b = 0;
			int int_b = 0;
			int int_c = 0;
			float float_b = 0;
			unsigned int unsigned_int_b = 0;
			short short_b = 0;
			short short_c = 0;
			for(int looper_e=0; looper_e<3;looper_e++)
			{
				double double_a = 0;
				short short_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				unsigned int unsigned_int_a = 0;
				double double_e = 0;
				double double_f = 0;
				int int_a = 0;
				float float_a = 0;
				double double_g = 0;
				double double_h = 0;
				long long_a = 0;
				long long_b = 0;
				int int_b = 0;
				int int_c = 0;
				float float_b = 0;
				unsigned int unsigned_int_b = 0;
				short short_b = 0;
				short short_c = 0;
				unsigned_int_a = unsigned_int_a + unsigned_int_a;
				unsigned_int_b = unsigned_int_a + unsigned_int_a;
			}
			float_b = float_a;
		}
	}
	else
	{
		for(int looper_f=0; looper_f<9;looper_f++)
		{
			double double_a = 0;
			short short_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			double double_e = 0;
			double double_f = 0;
			int int_a = 0;
			float float_a = 0;
			double double_g = 0;
			double double_h = 0;
			long long_a = 0;
			long long_b = 0;
			int int_b = 0;
			int int_c = 0;
			float float_b = 0;
			unsigned int unsigned_int_b = 0;
			short short_b = 0;
			short short_c = 0;
			short_a = short_b - short_c;
		}
	}
	if(1)
	{
		double_g = double_f;
		unsigned_int_a = unsigned_int_a;
	}
	double_g = double_h - double_c;
}
int bis_worker2(int parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	float float_a = 0;
	char char_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	double double_d = 0;
	double double_e = 0;
	short short_a = 0;
	unsigned int unsigned_int_d = 0;
	int int_d = 0;
	float float_b = 0;
	int int_e = 0;
	char char_b = 0;
	unsigned int unsigned_int_e = 0;
	long long_a = 0;
	char char_c = 0;
	float float_c = 0;
	long long_b = 0;
	unsigned int unsigned_int_c = 0;
	short short_b = 0;
	char char_d = 0;
	double double_f = 0;
	int int_f = 0;
	short short_c = 0;
	float float_d = 0;
	float float_e = 0;
	double_a = floor ( double_a ) ;
	double_b = atan ( double_c ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		float float_a = 0;
		char char_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		double double_d = 0;
		double double_e = 0;
		short short_a = 0;
		unsigned int unsigned_int_d = 0;
		int int_d = 0;
		float float_b = 0;
		int int_e = 0;
		char char_b = 0;
		unsigned int unsigned_int_e = 0;
		long long_a = 0;
		char char_c = 0;
		float float_c = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		char char_d = 0;
		double double_f = 0;
		int int_f = 0;
		short short_c = 0;
		float float_d = 0;
		float float_e = 0;
		if(1)
		{
			double_c = ceil ( double_a ) ;
		}
		int_a = mem_alnreg_freeSAM(float_a);

		mem_reg2sam_pe(char_a,int_b,unsigned_int_a,float_a,unsigned_int_b,int_c,int_a);

		double_b = floor ( double_c ) ;
		unsigned_int_c = unsigned_int_a;
		double_e = double_d * double_b;
		short_b = short_a - short_b;
		double_c = floor ( double_b ) ;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		float float_a = 0;
		char char_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		double double_d = 0;
		double double_e = 0;
		short short_a = 0;
		unsigned int unsigned_int_d = 0;
		int int_d = 0;
		float float_b = 0;
		int int_e = 0;
		char char_b = 0;
		unsigned int unsigned_int_e = 0;
		long long_a = 0;
		char char_c = 0;
		float float_c = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		char char_d = 0;
		double double_f = 0;
		int int_f = 0;
		short short_c = 0;
		float float_d = 0;
		float float_e = 0;
		if(1)
		{
			mem_mark_primary_se(unsigned_int_d,int_d,float_b);

			int_e = int_a;
		}
		if(1)
		{
			mem_reg2sam_se(double_e,char_b,unsigned_int_e,long_a,char_c);

			double_e = atan2 ( double_d , double_c ) ;
		}
		if(1)
		{
			double_c = sqrt ( double_a ) ;
		}
		char_d = char_d - char_c;
		if(1)
		{
			double_e = double_b;
		}
		double_d = double_d;
		double_f = pow ( double_c , double_a ) ;
		float_a = float_a;
		long_a = mem_alnreg_resetFLAG(int_e);

		int_f = int_d / int_a;
		short_c = short_c + short_a;
		mem_alnreg_matesw(char_a,float_c,int_b,long_b,float_c,short_a);

		double_b = tan ( double_e ) ;
		double_d = sinh ( double_b ) ;
		float_d = float_e;
	}
}
void ks_introsort_64s( unsigned int parameter_1,double parameter_2)
unsigned int mem_infer_isize( double parameter_1,unsigned int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,long parameter_7)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	char controller_a[2];
	scanf("%2s", controller_a);
	if( controller_a <"wy" )
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double_a = double_b;
		return unsigned_int_a;
	}
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double_c = tan ( double_c ) ;
		return unsigned_int_a;
	}
	else
	{
		return unsigned_int_b;
	}
}
char mem_alnreg_isize( int parameter_1,double parameter_2,double parameter_3,int parameter_4)
{
	char char_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	int int_d = 0;
	long long_a = 0;
	unsigned int unsigned_int_c = 0;
	if(1)
	{
		return char_a;
	}
	int_b = int_a * int_a;
	double_a = asin ( double_a ) ;
	?:
	double_b = tanh ( double_a ) ;
	?:
	unsigned_int_a = mem_infer_isize(double_c,unsigned_int_b,int_b,int_b,int_c,int_d,long_a);

	unsigned_int_b = unsigned_int_c;
	return char_a;
}
float cal_sub( char parameter_1,char parameter_2)
{
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	float float_a = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	short_a = short_b;
	double_a = double_a;
	double_c = double_a + double_b;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		double_a = log ( double_b ) ;
		?:
		double_b = tan ( double_b ) ;
		?:
		double_b = sqrt ( double_c ) ;
		if(1)
		{
			?:
			short_b = short_a;
			if(1)
			{
			}
		}
	}
	return float_a;
	?:
	int_c = int_a / int_b;
}
double mem_pestat( char parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	float float_b = 0;
	float float_c = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	char char_a = 0;
	int int_a = 0;
	char char_b = 0;
	float float_d = 0;
	double double_f = 0;
	double double_g = 0;
	char char_c = 0;
	char char_d = 0;
	float float_e = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_h = 0;
	int int_b = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_f = 0;
	float float_a = 0;
	double_a = acos ( double_a ) ;
	double_b = fmod ( double_b , double_b ) ;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		float float_b = 0;
		float float_c = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		char char_a = 0;
		int int_a = 0;
		char char_b = 0;
		float float_d = 0;
		double double_f = 0;
		double double_g = 0;
		char char_c = 0;
		char char_d = 0;
		float float_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_h = 0;
		int int_b = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		float float_a = 0;
		ks_introsort_64s(unsigned_int_a,double_b);

		double_b = sinh ( double_b ) ;
		unsigned_int_b = unsigned_int_a - unsigned_int_b;
		float_c = float_a - float_b;
		double_b = floor ( double_a ) ;
		if(1)
		{
		}
		double_c = fabs ( double_d ) ;
		double_b = sqrt ( double_e ) ;
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
			if(1)
			{
				char_a = mem_alnreg_isize(int_a,double_c,double_d,int_a);

				double_c = pow ( double_d , double_d ) ;
			}
		}
	}
	if(1)
	{
		double_d = exp ( double_e ) ;
	}
	double_a = tanh ( double_d ) ;
	char_a = char_b;
	if(1)
	{
		float_d = float_b;
		double_c = atan2 ( double_f , double_c ) ;
		float_c = cal_sub(char_a,char_a);

		unsigned_int_b = unsigned_int_a * unsigned_int_a;
		return double_c;
	}
	double_d = asin ( double_g ) ;
	char_b = char_c - char_d;
	double_a = acos ( double_c ) ;
	double_e = log10 ( double_b ) ;
	float_b = float_b + float_e;
	double_b = log10 ( double_d ) ;
	float_b = float_d;
	unsigned_int_b = unsigned_int_c;
	char_c = char_a;
	for(int looper_b=0; looper_b<9;looper_b++)
	{
		if(1)
		{
			double_a = double_e;
		}
	}
	unsigned_int_a = unsigned_int_d;
	for(int looper_c=0; looper_c<9;looper_c++)
	{
		if(1)
		{
			double_c = cos ( double_f ) ;
		}
	}
	double_f = atan2 ( double_a , double_h ) ;
	int_a = int_b;
	double_b = log ( double_f ) ;
	double_f = tanh ( double_b ) ;
	if(1)
	{
		double_e = cosh ( double_a ) ;
	}
	if(1)
	{
		unsigned_int_d = unsigned_int_a - unsigned_int_e;
	}
	unsigned_int_d = unsigned_int_e + unsigned_int_b;
	unsigned_int_f = unsigned_int_e + unsigned_int_e;
	return double_d;
}
void check_paired_read_names( long parameter_1,char parameter_2)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	if(1)
	{
	}
	err_fatal(unsigned_int_a,unsigned_int_b,long_a);

	double_a = sqrt ( double_b ) ;
	if(1)
	{
		if(1)
		{
		}
	}
	double_c = pow ( double_c , double_a ) ;
}
unsigned int region_depos( float parameter_1,float parameter_2,int parameter_3)
{
	short short_a = 0;
	short short_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	short_b = short_a + short_a;
	if(1)
	{
		short short_a = 0;
		short short_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double_a = fabs ( double_a ) ;
	}
	?:
	bns_depos(int_a,int_b,int_a);

	double_b = tanh ( double_b ) ;
	return unsigned_int_a;
}
int mem_print_region1( unsigned int parameter_1,float parameter_2)
{
	unsigned int unsigned_int_b = 0;
	float float_a = 0;
	float float_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	if(1)
	{
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		float float_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned_int_a = unsigned_int_a / unsigned_int_b;
		double_a = exp ( double_b ) ;
	}
	else
	{
		unsigned int unsigned_int_b = 0;
		float float_a = 0;
		float float_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double_c = floor ( double_d ) ;
	}
	unsigned_int_b = region_depos(float_a,float_b,int_a);

}
double mem_print_regions( short parameter_1,double parameter_2)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	float float_a = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned_int_a = unsigned_int_a;
	unsigned_int_a = unsigned_int_b;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		float float_a = 0;
		double double_a = 0;
		double double_b = 0;
		double_a = double_a + double_a;
		int_a = mem_print_region1(unsigned_int_b,float_a);

		double_a = tanh ( double_b ) ;
	}
}
unsigned int mem_test_and_remove_exact( float parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a <"JwKjX" )
	{
		return unsigned_int_a;
	}
	double_a = sinh ( double_a ) ;
	double_a = ldexp ( double_a , int_a ) ;
	return unsigned_int_b;
}
unsigned int kputc( int parameter_1,float parameter_2)
{
	double double_b = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	char char_a = 0;
	double double_c = 0;
	char controller_a[1];
	scanf("%1s", controller_a);
	if( controller_a >"m" )
	{
		double double_b = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		char char_a = 0;
		double double_c = 0;
		double_a = log10 ( double_a ) ;
		char_a = char_a;
		double_c = double_b - double_c;
	}
	double_b = fabs ( double_b ) ;
	double_d = tanh ( double_e ) ;
	return unsigned_int_a;
}
char kputw( int parameter_1,long parameter_2)
{
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	float float_a = 0;
	double double_c = 0;
	double double_e = 0;
	short short_c = 0;
	double double_b = 0;
	double double_d = 0;
	int int_b = 0;
	short_b = short_a + short_a;
	double_a = tanh ( double_a ) ;
	if(1)
	{
		return char_a;
	}
	if(1)
	{
		for(int looper_a=0; looper_a<3;looper_a++)
		{
			short short_a = 0;
			short short_b = 0;
			double double_a = 0;
			char char_a = 0;
			char char_b = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			float float_a = 0;
			double double_c = 0;
			double double_e = 0;
			short short_c = 0;
			double double_b = 0;
			double double_d = 0;
			int int_b = 0;
			short_b = short_a - short_c;
		}
	}
	else
	{
		for(int looper_b=0; looper_b<1;looper_b++)
		{
			double_a = floor ( double_a ) ;
		}
	}
	if(1)
	{
		char_a = char_a;
	}
	if(1)
	{
		short short_a = 0;
		short short_b = 0;
		double double_a = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		double double_c = 0;
		double double_e = 0;
		short short_c = 0;
		double double_b = 0;
		double double_d = 0;
		int int_b = 0;
		char_a = char_b * char_b;
		double_a = cos ( double_b ) ;
		unsigned_int_a = kputc(int_a,float_a);

		double_a = double_c;
	}
	for(int looper_c=0; looper_c<2;looper_c++)
	{
		short short_a = 0;
		short short_b = 0;
		double double_a = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		float float_a = 0;
		double double_c = 0;
		double double_e = 0;
		short short_c = 0;
		double double_b = 0;
		double double_d = 0;
		int int_b = 0;
		double_d = ldexp ( double_c , int_b ) ;
	}
	double_c = asin ( double_e ) ;
	return char_b;
}
long push_cigar( int parameter_1,int parameter_2,float parameter_3,int parameter_4,int parameter_5)
{
	double double_a = 0;
	double double_c = 0;
	long long_a = 0;
	double double_b = 0;
	short short_a = 0;
	short short_b = 0;
	if(1)
	{
		if(1)
		{
			double double_a = 0;
			double double_c = 0;
			long long_a = 0;
			double double_b = 0;
			short short_a = 0;
			short short_b = 0;
			?:
			double_a = ceil ( double_b ) ;
			short_a = short_b;
		}
		double_a = cos ( double_c ) ;
	}
	else
	{
		double_a = cos ( double_c ) ;
	}
	return long_a;
}
int ksw_global2( int parameter_1,char parameter_2,int parameter_3,double parameter_4,int parameter_5,float parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,long parameter_13)
{
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	float float_b = 0;
	double double_c = 0;
	double double_d = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	double double_e = 0;
	double double_f = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_g = 0;
	unsigned int unsigned_int_d = 0;
	short short_a = 0;
	short short_b = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	int int_c = 0;
	int int_d = 0;
	int int_e = 0;
	long long_d = 0;
	double double_k = 0;
	double double_m = 0;
	double double_n = 0;
	double double_o = 0;
	float float_c = 0;
	unsigned int unsigned_int_g = 0;
	unsigned int unsigned_int_e = 0;
	double double_l = 0;
	float float_d = 0;
	unsigned int unsigned_int_f = 0;
	char char_a = 0;
	char char_b = 0;
	float float_e = 0;
	float float_f = 0;
	short short_c = 0;
	short short_d = 0;
	short short_e = 0;
	int_a = int_b;
	double_a = asin ( double_b ) ;
	float_a = float_b;
	double_c = ceil ( double_b ) ;
	char controller_a[2];
	scanf("%2s", controller_a);
	if( controller_a <"wW" )
	{
		double_d = fabs ( double_c ) ;
	}
	?:
	long_c = long_a + long_b;
	?:
	double_e = ldexp ( double_e , int_b ) ;
	double_d = double_f;
	unsigned_int_c = unsigned_int_a - unsigned_int_b;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		double_g = pow ( double_c , double_g ) ;
		for(int looper_b=0; looper_b<5;looper_b++)
		{
			double_d = asin ( double_d ) ;
		}
	}
	unsigned_int_c = unsigned_int_c * unsigned_int_d;
	double_g = exp ( double_e ) ;
	for(int looper_c=0; looper_c<4;looper_c++)
	{
		double_d = double_a - double_a;
	}
	for(int looper_d=0; looper_d<4;looper_d++)
	{
		short_b = short_a / short_b;
	}
	for(int looper_e=0; looper_e<2;looper_e++)
	{
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		float float_b = 0;
		double double_c = 0;
		double double_d = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_e = 0;
		double double_f = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_g = 0;
		unsigned int unsigned_int_d = 0;
		short short_a = 0;
		short short_b = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		int int_c = 0;
		int int_d = 0;
		int int_e = 0;
		long long_d = 0;
		double double_k = 0;
		double double_m = 0;
		double double_n = 0;
		double double_o = 0;
		float float_c = 0;
		unsigned int unsigned_int_g = 0;
		unsigned int unsigned_int_e = 0;
		double double_l = 0;
		float float_d = 0;
		unsigned int unsigned_int_f = 0;
		char char_a = 0;
		char char_b = 0;
		float float_e = 0;
		float float_f = 0;
		short short_c = 0;
		short short_d = 0;
		short short_e = 0;
		double_h = ceil ( double_i ) ;
		double_d = ldexp ( double_a , int_a ) ;
		?:
		double_c = atan2 ( double_a , double_j ) ;
		?:
		int_b = int_c;
		?:
		double_h = sinh ( double_f ) ;
		if(1)
		{
			int int_a = 0;
			int int_b = 0;
			double double_a = 0;
			double double_b = 0;
			float float_a = 0;
			float float_b = 0;
			double double_c = 0;
			double double_d = 0;
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_g = 0;
			unsigned int unsigned_int_d = 0;
			short short_a = 0;
			short short_b = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			int int_c = 0;
			int int_d = 0;
			int int_e = 0;
			long long_d = 0;
			double double_k = 0;
			double double_m = 0;
			double double_n = 0;
			double double_o = 0;
			float float_c = 0;
			unsigned int unsigned_int_g = 0;
			unsigned int unsigned_int_e = 0;
			double double_l = 0;
			float float_d = 0;
			unsigned int unsigned_int_f = 0;
			char char_a = 0;
			char char_b = 0;
			float float_e = 0;
			float float_f = 0;
			short short_c = 0;
			short short_d = 0;
			short short_e = 0;
			unsigned_int_d = unsigned_int_e;
			for(int looper_f=0; looper_f<3;looper_f++)
			{
				int int_a = 0;
				int int_b = 0;
				double double_a = 0;
				double double_b = 0;
				float float_a = 0;
				float float_b = 0;
				double double_c = 0;
				double double_d = 0;
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				double double_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				double double_g = 0;
				unsigned int unsigned_int_d = 0;
				short short_a = 0;
				short short_b = 0;
				double double_h = 0;
				double double_i = 0;
				double double_j = 0;
				int int_c = 0;
				int int_d = 0;
				int int_e = 0;
				long long_d = 0;
				double double_k = 0;
				double double_m = 0;
				double double_n = 0;
				double double_o = 0;
				float float_c = 0;
				unsigned int unsigned_int_g = 0;
				unsigned int unsigned_int_e = 0;
				double double_l = 0;
				float float_d = 0;
				unsigned int unsigned_int_f = 0;
				char char_a = 0;
				char char_b = 0;
				float float_e = 0;
				float float_f = 0;
				short short_c = 0;
				short short_d = 0;
				short short_e = 0;
				int_a = int_d;
				double_f = acos ( double_j ) ;
				double_j = pow ( double_f , double_e ) ;
				double_f = floor ( double_i ) ;
				int_d = int_e;
				?:
				double_e = atan ( double_c ) ;
				?:
				double_e = floor ( double_d ) ;
				?:
				long_d = push_cigar(int_a,int_e,float_b,int_a,int_c);

				double_a = cosh ( double_b ) ;
				?:
				double_b = ceil ( double_e ) ;
				double_f = cos ( double_i ) ;
				double_a = exp ( double_b ) ;
				short_a = short_a * short_b;
				?:
				double_f = exp ( double_k ) ;
				?:
				double_h = floor ( double_d ) ;
				float_c = float_a - float_a;
				double_l = cosh ( double_c ) ;
				short_b = short_b / short_b;
				?:
				int_c = int_a + int_e;
				?:
				float_b = float_a * float_c;
				double_e = double_j;
			}
		}
		else
		{
			for(int looper_g=0; looper_g<8;looper_g++)
			{
				int int_a = 0;
				int int_b = 0;
				double double_a = 0;
				double double_b = 0;
				float float_a = 0;
				float float_b = 0;
				double double_c = 0;
				double double_d = 0;
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				double double_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				double double_g = 0;
				unsigned int unsigned_int_d = 0;
				short short_a = 0;
				short short_b = 0;
				double double_h = 0;
				double double_i = 0;
				double double_j = 0;
				int int_c = 0;
				int int_d = 0;
				int int_e = 0;
				long long_d = 0;
				double double_k = 0;
				double double_m = 0;
				double double_n = 0;
				double double_o = 0;
				float float_c = 0;
				unsigned int unsigned_int_g = 0;
				unsigned int unsigned_int_e = 0;
				double double_l = 0;
				float float_d = 0;
				unsigned int unsigned_int_f = 0;
				char char_a = 0;
				char char_b = 0;
				float float_e = 0;
				float float_f = 0;
				short short_c = 0;
				short short_d = 0;
				short short_e = 0;
				short_b = short_b;
				double_h = sinh ( double_c ) ;
				float_a = float_d;
				float_b = float_a / float_a;
				?:
				double_c = double_m + double_c;
				?:
				double_n = fabs ( double_m ) ;
				unsigned_int_a = unsigned_int_f * unsigned_int_a;
				double_n = cos ( double_b ) ;
				double_b = tanh ( double_g ) ;
				?:
				char_b = char_a + char_a;
				float_e = float_c / float_b;
				double_n = cos ( double_e ) ;
				float_f = float_d - float_b;
				?:
				double_c = exp ( double_o ) ;
			}
		}
		double_i = exp ( double_a ) ;
		unsigned_int_g = unsigned_int_a / unsigned_int_g;
	}
	double_n = double_b;
	if(1)
	{
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		float float_b = 0;
		double double_c = 0;
		double double_d = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_e = 0;
		double double_f = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_g = 0;
		unsigned int unsigned_int_d = 0;
		short short_a = 0;
		short short_b = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		int int_c = 0;
		int int_d = 0;
		int int_e = 0;
		long long_d = 0;
		double double_k = 0;
		double double_m = 0;
		double double_n = 0;
		double double_o = 0;
		float float_c = 0;
		unsigned int unsigned_int_g = 0;
		unsigned int unsigned_int_e = 0;
		double double_l = 0;
		float float_d = 0;
		unsigned int unsigned_int_f = 0;
		char char_a = 0;
		char char_b = 0;
		float float_e = 0;
		float float_f = 0;
		short short_c = 0;
		short short_d = 0;
		short short_e = 0;
		double_k = tan ( double_c ) ;
		short_d = short_a * short_c;
		double_g = ceil ( double_d ) ;
		?:
		long_c = long_b / long_d;
		int looper_h = 0;
		while(looper_h < 3)
		{
			looper_h += 1;
			?:
			double_e = sqrt ( double_n ) ;
			if(1)
			{
				unsigned_int_b = unsigned_int_c;
			}
			if(1)
			{
				int_b = int_b;
			}
			else
			{
				double_i = tanh ( double_e ) ;
			}
		}
		if(1)
		{
			double_g = tan ( double_m ) ;
		}
		if(1)
		{
			double_n = floor ( double_h ) ;
		}
		for(int looper_i=0; looper_i<4;looper_i++)
		{
			double_j = exp ( double_a ) ;
		}
		short_c = short_e;
	}
	long_d = long_a;
	double_c = atan2 ( double_c , double_d ) ;
	double_n = ldexp ( double_o , int_e ) ;
	return int_d;
}
float bis_bwa_gen_cigar2( short parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,double parameter_7,char parameter_8,int parameter_9,float parameter_10,double parameter_11,unsigned int parameter_12,int parameter_13,int parameter_14,int parameter_15,float parameter_16,char parameter_17,double parameter_18)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	char char_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	int int_c = 0;
	float float_a = 0;
	float float_b = 0;
	double double_e = 0;
	float float_c = 0;
	long long_a = 0;
	long long_b = 0;
	double double_f = 0;
	float float_e = 0;
	short short_a = 0;
	int int_d = 0;
	double double_g = 0;
	long long_c = 0;
	double double_h = 0;
	double double_i = 0;
	int int_e = 0;
	char char_c = 0;
	char char_e = 0;
	int int_f = 0;
	float float_f = 0;
	long long_f = 0;
	double double_m = 0;
	unsigned int unsigned_int_b = 0;
	float float_d = 0;
	short short_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_k = 0;
	long long_d = 0;
	double double_j = 0;
	long long_e = 0;
	short short_c = 0;
	char char_b = 0;
	char char_d = 0;
	short short_d = 0;
	short short_e = 0;
	double double_l = 0;
	double_a = exp ( double_b ) ;
	double_a = fabs ( double_a ) ;
	double_c = cos ( double_b ) ;
	double_d = ldexp ( double_b , int_a ) ;
	char_a = char_a;
	int_b = int_b;
	if(1)
	{
		double_b = sinh ( double_a ) ;
	}
	if(1)
	{
		unsigned_int_a = kputc(int_c,float_a);

		double_b = tanh ( double_b ) ;
	}
	if(1)
	{
		return float_a;
	}
	float_a = float_b;
	if(1)
	{
		double_d = tan ( double_a ) ;
	}
	if(1)
	{
		for(int looper_a=0; looper_a<2;looper_a++)
		{
			double_b = sinh ( double_d ) ;
		}
		for(int looper_b=0; looper_b<10;looper_b++)
		{
			double_b = sinh ( double_c ) ;
		}
	}
	if(1)
	{
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_a = 0;
			char char_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_e = 0;
			float float_c = 0;
			long long_a = 0;
			long long_b = 0;
			double double_f = 0;
			float float_e = 0;
			short short_a = 0;
			int int_d = 0;
			double double_g = 0;
			long long_c = 0;
			double double_h = 0;
			double double_i = 0;
			int int_e = 0;
			char char_c = 0;
			char char_e = 0;
			int int_f = 0;
			float float_f = 0;
			long long_f = 0;
			double double_m = 0;
			unsigned int unsigned_int_b = 0;
			float float_d = 0;
			short short_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_k = 0;
			long long_d = 0;
			double double_j = 0;
			long long_e = 0;
			short short_c = 0;
			char char_b = 0;
			char char_d = 0;
			short short_d = 0;
			short short_e = 0;
			double double_l = 0;
			double_e = atan2 ( double_a , double_a ) ;
			float_c = float_a * float_c;
			unsigned_int_b = unsigned_int_b;
		}
		for(int looper_c=0; looper_c<6;looper_c++)
		{
			unsigned_int_a = unsigned_int_a;
		}
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		char char_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		int int_c = 0;
		float float_a = 0;
		float float_b = 0;
		double double_e = 0;
		float float_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_f = 0;
		float float_e = 0;
		short short_a = 0;
		int int_d = 0;
		double double_g = 0;
		long long_c = 0;
		double double_h = 0;
		double double_i = 0;
		int int_e = 0;
		char char_c = 0;
		char char_e = 0;
		int int_f = 0;
		float float_f = 0;
		long long_f = 0;
		double double_m = 0;
		unsigned int unsigned_int_b = 0;
		float float_d = 0;
		short short_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_k = 0;
		long long_d = 0;
		double double_j = 0;
		long long_e = 0;
		short short_c = 0;
		char char_b = 0;
		char char_d = 0;
		short short_d = 0;
		short short_e = 0;
		double double_l = 0;
		int_c = int_c;
		double_a = sinh ( double_e ) ;
		long_a = long_b;
		?:
		float_c = float_c + float_a;
		?:
		double_c = atan2 ( double_b , double_f ) ;
		float_b = float_d / float_a;
		?:
		float_b = float_e;
		double_b = log10 ( double_d ) ;
		?:
		short_b = short_a + short_b;
		if(1)
		{
			int_b = int_d - int_d;
			double_a = exp ( double_e ) ;
			for(int looper_d=0; looper_d<10;looper_d++)
			{
				float_e = float_b;
			}
			double_f = cos ( double_d ) ;
			double_g = sqrt ( double_f ) ;
			for(int looper_e=0; looper_e<1;looper_e++)
			{
				double_a = cos ( double_f ) ;
			}
			bns_get_seq(int_d,unsigned_int_a,long_b,int_b,long_c);

			int_a = int_a;
		}
		double_c = double_g + double_h;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		char char_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		int int_c = 0;
		float float_a = 0;
		float float_b = 0;
		double double_e = 0;
		float float_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_f = 0;
		float float_e = 0;
		short short_a = 0;
		int int_d = 0;
		double double_g = 0;
		long long_c = 0;
		double double_h = 0;
		double double_i = 0;
		int int_e = 0;
		char char_c = 0;
		char char_e = 0;
		int int_f = 0;
		float float_f = 0;
		long long_f = 0;
		double double_m = 0;
		unsigned int unsigned_int_b = 0;
		float float_d = 0;
		short short_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_k = 0;
		long long_d = 0;
		double double_j = 0;
		long long_e = 0;
		short short_c = 0;
		char char_b = 0;
		char char_d = 0;
		short short_d = 0;
		short short_e = 0;
		double double_l = 0;
		unsigned_int_c = unsigned_int_d;
		unsigned_int_a = unsigned_int_d;
		double_d = floor ( double_e ) ;
		?:
		double_c = cosh ( double_b ) ;
		for(int looper_f=0; looper_f<4;looper_f++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_a = 0;
			char char_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_e = 0;
			float float_c = 0;
			long long_a = 0;
			long long_b = 0;
			double double_f = 0;
			float float_e = 0;
			short short_a = 0;
			int int_d = 0;
			double double_g = 0;
			long long_c = 0;
			double double_h = 0;
			double double_i = 0;
			int int_e = 0;
			char char_c = 0;
			char char_e = 0;
			int int_f = 0;
			float float_f = 0;
			long long_f = 0;
			double double_m = 0;
			unsigned int unsigned_int_b = 0;
			float float_d = 0;
			short short_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_k = 0;
			long long_d = 0;
			double double_j = 0;
			long long_e = 0;
			short short_c = 0;
			char char_b = 0;
			char char_d = 0;
			short short_d = 0;
			short short_e = 0;
			double double_l = 0;
			double_f = atan ( double_a ) ;
			double_i = atan ( double_c ) ;
			long_b = long_d - long_c;
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				int int_a = 0;
				char char_a = 0;
				int int_b = 0;
				unsigned int unsigned_int_a = 0;
				int int_c = 0;
				float float_a = 0;
				float float_b = 0;
				double double_e = 0;
				float float_c = 0;
				long long_a = 0;
				long long_b = 0;
				double double_f = 0;
				float float_e = 0;
				short short_a = 0;
				int int_d = 0;
				double double_g = 0;
				long long_c = 0;
				double double_h = 0;
				double double_i = 0;
				int int_e = 0;
				char char_c = 0;
				char char_e = 0;
				int int_f = 0;
				float float_f = 0;
				long long_f = 0;
				double double_m = 0;
				unsigned int unsigned_int_b = 0;
				float float_d = 0;
				short short_b = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_k = 0;
				long long_d = 0;
				double double_j = 0;
				long long_e = 0;
				short short_c = 0;
				char char_b = 0;
				char char_d = 0;
				short short_d = 0;
				short short_e = 0;
				double double_l = 0;
				for(int looper_g=0; looper_g<1;looper_g++)
				{
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					double double_d = 0;
					int int_a = 0;
					char char_a = 0;
					int int_b = 0;
					unsigned int unsigned_int_a = 0;
					int int_c = 0;
					float float_a = 0;
					float float_b = 0;
					double double_e = 0;
					float float_c = 0;
					long long_a = 0;
					long long_b = 0;
					double double_f = 0;
					float float_e = 0;
					short short_a = 0;
					int int_d = 0;
					double double_g = 0;
					long long_c = 0;
					double double_h = 0;
					double double_i = 0;
					int int_e = 0;
					char char_c = 0;
					char char_e = 0;
					int int_f = 0;
					float float_f = 0;
					long long_f = 0;
					double double_m = 0;
					unsigned int unsigned_int_b = 0;
					float float_d = 0;
					short short_b = 0;
					unsigned int unsigned_int_c = 0;
					unsigned int unsigned_int_d = 0;
					double double_k = 0;
					long long_d = 0;
					double double_j = 0;
					long long_e = 0;
					short short_c = 0;
					char char_b = 0;
					char char_d = 0;
					short short_d = 0;
					short short_e = 0;
					double double_l = 0;
					int_e = int_e - int_c;
					short_c = short_a;
					if(1)
					{
						if(1)
						{
							double_f = tan ( double_b ) ;
						}
						if(1)
						{
							double_a = ceil ( double_g ) ;
						}
						double_f = atan ( double_a ) ;
					}
					if(1)
					{
						double_f = asin ( double_i ) ;
						char_b = char_a;
					}
					if(1)
					{
						double_a = tanh ( double_e ) ;
						char_c = char_a + char_b;
					}
					else
					{
						double double_a = 0;
						double double_b = 0;
						double double_c = 0;
						double double_d = 0;
						int int_a = 0;
						char char_a = 0;
						int int_b = 0;
						unsigned int unsigned_int_a = 0;
						int int_c = 0;
						float float_a = 0;
						float float_b = 0;
						double double_e = 0;
						float float_c = 0;
						long long_a = 0;
						long long_b = 0;
						double double_f = 0;
						float float_e = 0;
						short short_a = 0;
						int int_d = 0;
						double double_g = 0;
						long long_c = 0;
						double double_h = 0;
						double double_i = 0;
						int int_e = 0;
						char char_c = 0;
						char char_e = 0;
						int int_f = 0;
						float float_f = 0;
						long long_f = 0;
						double double_m = 0;
						unsigned int unsigned_int_b = 0;
						float float_d = 0;
						short short_b = 0;
						unsigned int unsigned_int_c = 0;
						unsigned int unsigned_int_d = 0;
						double double_k = 0;
						long long_d = 0;
						double double_j = 0;
						long long_e = 0;
						short short_c = 0;
						char char_b = 0;
						char char_d = 0;
						short short_d = 0;
						short short_e = 0;
						double double_l = 0;
						char_c = char_d;
						double_c = tanh ( double_a ) ;
						unsigned_int_c = unsigned_int_a;
						double_j = sqrt ( double_b ) ;
					}
				}
				int_e = int_d;
				long_e = long_c;
			}
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				int int_a = 0;
				char char_a = 0;
				int int_b = 0;
				unsigned int unsigned_int_a = 0;
				int int_c = 0;
				float float_a = 0;
				float float_b = 0;
				double double_e = 0;
				float float_c = 0;
				long long_a = 0;
				long long_b = 0;
				double double_f = 0;
				float float_e = 0;
				short short_a = 0;
				int int_d = 0;
				double double_g = 0;
				long long_c = 0;
				double double_h = 0;
				double double_i = 0;
				int int_e = 0;
				char char_c = 0;
				char char_e = 0;
				int int_f = 0;
				float float_f = 0;
				long long_f = 0;
				double double_m = 0;
				unsigned int unsigned_int_b = 0;
				float float_d = 0;
				short short_b = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_k = 0;
				long long_d = 0;
				double double_j = 0;
				long long_e = 0;
				short short_c = 0;
				char char_b = 0;
				char char_d = 0;
				short short_d = 0;
				short short_e = 0;
				double double_l = 0;
				if(1)
				{
					double_j = exp ( double_d ) ;
					float_a = float_e;
					for(int looper_h=0; looper_h<7;looper_h++)
					{
						unsigned_int_c = unsigned_int_a / unsigned_int_d;
					}
					double_f = double_h - double_i;
					int_c = ksw_global2(int_d,char_e,int_c,double_i,int_f,float_f,int_c,int_f,int_c,int_b,int_f,int_e,long_b);

					double_b = acos ( double_d ) ;
				}
				short_e = short_d * short_d;
			}
			if(1)
			{
				double_g = atan ( double_j ) ;
			}
		}
		double_h = double_b - double_e;
		double_b = log ( double_i ) ;
		long_f = long_a - long_b;
		double_i = double_h;
		double_k = log10 ( double_k ) ;
		long_f = long_f;
	}
	if(1)
	{
		for(int looper_i=0; looper_i<7;looper_i++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_a = 0;
			char char_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_e = 0;
			float float_c = 0;
			long long_a = 0;
			long long_b = 0;
			double double_f = 0;
			float float_e = 0;
			short short_a = 0;
			int int_d = 0;
			double double_g = 0;
			long long_c = 0;
			double double_h = 0;
			double double_i = 0;
			int int_e = 0;
			char char_c = 0;
			char char_e = 0;
			int int_f = 0;
			float float_f = 0;
			long long_f = 0;
			double double_m = 0;
			unsigned int unsigned_int_b = 0;
			float float_d = 0;
			short short_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_k = 0;
			long long_d = 0;
			double double_j = 0;
			long long_e = 0;
			short short_c = 0;
			char char_b = 0;
			char char_d = 0;
			short short_d = 0;
			short short_e = 0;
			double double_l = 0;
			double_c = ldexp ( double_l , int_d ) ;
		}
	}
	double_g = acos ( double_m ) ;
	return float_f;
	char_c = kputw(int_d,long_f);

}
int mem_test_reg_concatenation( float parameter_1,char parameter_2,float parameter_3,long parameter_4,double parameter_5,char parameter_6,int parameter_7)
{
	int int_a = 0;
	double double_a = 0;
	int int_b = 0;
	int int_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_d = 0;
	unsigned int unsigned_int_c = 0;
	double double_b = 0;
	double double_c = 0;
	float float_a = 0;
	short short_a = 0;
	int int_e = 0;
	char char_a = 0;
	int int_f = 0;
	float float_b = 0;
	unsigned int unsigned_int_d = 0;
	float float_c = 0;
	double double_d = 0;
	double double_e = 0;
	char char_c = 0;
	char char_d = 0;
	char char_b = 0;
	if(1)
	{
		return int_a;
	}
	double_a = asin ( double_a ) ;
	if(1)
	{
		return int_b;
	}
	if(1)
	{
		return int_c;
	}
	unsigned_int_a = unsigned_int_b;
	?:
	int_d = int_c;
	unsigned_int_b = unsigned_int_c;
	?:
	double_b = log10 ( double_b ) ;
	if(1)
	{
		double_a = atan2 ( double_a , double_c ) ;
	}
	char controller_e[4];
	scanf("%4s", controller_e);
	if( controller_e <",pT;" )
	{
		if(1)
		{
			return int_c;
		}
	}
	if(1)
	{
		return int_d;
	}
	float_a = bis_bwa_gen_cigar2(short_a,int_d,int_c,int_a,int_a,int_e,double_b,char_a,int_f,float_b,double_c,unsigned_int_d,int_c,int_e,int_c,float_c,char_a,double_b);

	double_d = acos ( double_c ) ;
	double_a = ceil ( double_b ) ;
	if(1)
	{
		int int_a = 0;
		double double_a = 0;
		int int_b = 0;
		int int_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_d = 0;
		unsigned int unsigned_int_c = 0;
		double double_b = 0;
		double double_c = 0;
		float float_a = 0;
		short short_a = 0;
		int int_e = 0;
		char char_a = 0;
		int int_f = 0;
		float float_b = 0;
		unsigned int unsigned_int_d = 0;
		float float_c = 0;
		double double_d = 0;
		double double_e = 0;
		char char_c = 0;
		char char_d = 0;
		char char_b = 0;
		char_b = char_b;
	}
	double_d = atan2 ( double_d , double_c ) ;
	?:
	double_b = sqrt ( double_c ) ;
	double_e = double_c;
	char_c = char_d;
	if(1)
	{
		double_c = fmod ( double_c , double_b ) ;
	}
	if(1)
	{
		return int_e;
	}
	float_b = float_c;
	return int_d;
}
void mem_sort_deduplicate( long parameter_1,char parameter_2,int parameter_3,long parameter_4,double parameter_5)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_b = 0;
	double double_g = 0;
	double double_h = 0;
	long long_b = 0;
	float float_b = 0;
	double double_i = 0;
	char char_a = 0;
	int int_d = 0;
	unsigned int unsigned_int_d = 0;
	int int_e = 0;
	int int_a = 0;
	double double_e = 0;
	double double_f = 0;
	long long_a = 0;
	unsigned int unsigned_int_c = 0;
	float float_a = 0;
	int int_c = 0;
	double double_j = 0;
	double double_k = 0;
	if(1)
	{
	}
	double_a = sinh ( double_a ) ;
	double_b = log10 ( double_a ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double_a = acos ( double_a ) ;
	}
	for(int looper_b=0; looper_b<1;looper_b++)
	{
		unsigned_int_a = unsigned_int_b;
		double_b = cosh ( double_c ) ;
		for(int looper_c=0; looper_c<6;looper_c++)
		{
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_b = 0;
			double double_g = 0;
			double double_h = 0;
			long long_b = 0;
			float float_b = 0;
			double double_i = 0;
			char char_a = 0;
			int int_d = 0;
			unsigned int unsigned_int_d = 0;
			int int_e = 0;
			int int_a = 0;
			double double_e = 0;
			double double_f = 0;
			long long_a = 0;
			unsigned int unsigned_int_c = 0;
			float float_a = 0;
			int int_c = 0;
			double double_j = 0;
			double double_k = 0;
			double_b = ldexp ( double_b , int_a ) ;
			if(1)
			{
			}
			double_e = double_a / double_d;
			?:
			int_a = int_b;
			double_f = fmod ( double_g , double_g ) ;
			double_c = fmod ( double_g , double_c ) ;
			double_a = fabs ( double_g ) ;
			if(1)
			{
				if(1)
				{
					double_g = tan ( double_h ) ;
				}
				else
				{
					double double_a = 0;
					double double_b = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					double double_c = 0;
					double double_d = 0;
					int int_b = 0;
					double double_g = 0;
					double double_h = 0;
					long long_b = 0;
					float float_b = 0;
					double double_i = 0;
					char char_a = 0;
					int int_d = 0;
					unsigned int unsigned_int_d = 0;
					int int_e = 0;
					int int_a = 0;
					double double_e = 0;
					double double_f = 0;
					long long_a = 0;
					unsigned int unsigned_int_c = 0;
					float float_a = 0;
					int int_c = 0;
					double double_j = 0;
					double double_k = 0;
					long_a = long_a - long_b;
				}
			}
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_c = 0;
				double double_d = 0;
				int int_b = 0;
				double double_g = 0;
				double double_h = 0;
				long long_b = 0;
				float float_b = 0;
				double double_i = 0;
				char char_a = 0;
				int int_d = 0;
				unsigned int unsigned_int_d = 0;
				int int_e = 0;
				int int_a = 0;
				double double_e = 0;
				double double_f = 0;
				long long_a = 0;
				unsigned int unsigned_int_c = 0;
				float float_a = 0;
				int int_c = 0;
				double double_j = 0;
				double double_k = 0;
				unsigned_int_c = unsigned_int_c;
				?:
				double_a = double_d;
				float_b = float_a * float_a;
				double_e = double_i / double_e;
				double_c = cos ( double_i ) ;
				double_d = floor ( double_h ) ;
				double_b = ldexp ( double_c , int_c ) ;
				double_b = double_d;
				float_a = float_a;
			}
		}
	}
	double_d = tanh ( double_a ) ;
	for(int looper_d=0; looper_d<2;looper_d++)
	{
		if(1)
		{
			if(1)
			{
				double_d = fmod ( double_h , double_g ) ;
			}
			else
			{
				double_a = asin ( double_h ) ;
			}
		}
	}
	int_b = mem_test_reg_concatenation(float_b,char_a,float_b,long_b,double_i,char_a,int_d);

	unsigned_int_d = unsigned_int_d;
	unsigned_int_a = unsigned_int_b;
	for(int looper_e=0; looper_e<3;looper_e++)
	{
		if(1)
		{
			double_h = double_c;
		}
	}
	for(int looper_f=0; looper_f<9;looper_f++)
	{
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_b = 0;
			double double_g = 0;
			double double_h = 0;
			long long_b = 0;
			float float_b = 0;
			double double_i = 0;
			char char_a = 0;
			int int_d = 0;
			unsigned int unsigned_int_d = 0;
			int int_e = 0;
			int int_a = 0;
			double double_e = 0;
			double double_f = 0;
			long long_a = 0;
			unsigned int unsigned_int_c = 0;
			float float_a = 0;
			int int_c = 0;
			double double_j = 0;
			double double_k = 0;
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_c = 0;
				double double_d = 0;
				int int_b = 0;
				double double_g = 0;
				double double_h = 0;
				long long_b = 0;
				float float_b = 0;
				double double_i = 0;
				char char_a = 0;
				int int_d = 0;
				unsigned int unsigned_int_d = 0;
				int int_e = 0;
				int int_a = 0;
				double double_e = 0;
				double double_f = 0;
				long long_a = 0;
				unsigned int unsigned_int_c = 0;
				float float_a = 0;
				int int_c = 0;
				double double_j = 0;
				double double_k = 0;
				double_j = log ( double_k ) ;
			}
			else
			{
				double_j = sinh ( double_j ) ;
			}
		}
	}
	int_b = int_e;
}
void mem_merge_regions( unsigned int parameter_1,short parameter_2,int parameter_3,short parameter_4,short parameter_5)
{
	unsigned int unsigned_int_a = 0;
	float float_a = 0;
	short short_a = 0;
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	char char_a = 0;
	double double_c = 0;
	double double_d = 0;
	short short_b = 0;
	int int_b = 0;
	unsigned_int_a = mem_test_and_remove_exact(float_a,short_a,int_a);

	double_a = acos ( double_b ) ;
	mem_sort_deduplicate(long_a,char_a,int_a,long_a,double_b);

	double_b = sinh ( double_a ) ;
	if(1)
	{
		double_d = double_a - double_c;
	}
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		float float_a = 0;
		short short_a = 0;
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		char char_a = 0;
		double double_c = 0;
		double double_d = 0;
		short short_b = 0;
		int int_b = 0;
		double_b = ldexp ( double_c , int_b ) ;
		double_d = double_d;
	}
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		double_c = log ( double_c ) ;
		if(1)
		{
			double_d = mem_print_regions(short_b,double_a);

			double_a = cosh ( double_d ) ;
		}
	}
}
int right_extend_seed_set_align_end( char parameter_1,double parameter_2,float parameter_3,int parameter_4,short parameter_5,double parameter_6,int parameter_7,int parameter_8,float parameter_9)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	long long_a = 0;
	long long_c = 0;
	unsigned int unsigned_int_e = 0;
	int int_c = 0;
	float float_a = 0;
	float float_b = 0;
	double double_e = 0;
	unsigned int unsigned_int_d = 0;
	long long_b = 0;
	short short_a = 0;
	long long_d = 0;
	if(1)
	{
		double_a = sinh ( double_b ) ;
		return int_a;
	}
	unsigned_int_a = unsigned_int_a + unsigned_int_b;
	unsigned_int_c = unsigned_int_b;
	unsigned_int_c = unsigned_int_a / unsigned_int_a;
	int_a = int_b;
	unsigned_int_a = unsigned_int_c + unsigned_int_a;
	double_a = atan ( double_a ) ;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		long long_a = 0;
		long long_c = 0;
		unsigned int unsigned_int_e = 0;
		int int_c = 0;
		float float_a = 0;
		float float_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_d = 0;
		long long_b = 0;
		short short_a = 0;
		long long_d = 0;
		double_c = log ( double_a ) ;
		double_c = double_d;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			long long_a = 0;
			long long_c = 0;
			unsigned int unsigned_int_e = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_e = 0;
			unsigned int unsigned_int_d = 0;
			long long_b = 0;
			short short_a = 0;
			long long_d = 0;
			double_c = acos ( double_e ) ;
			unsigned_int_d = unsigned_int_a;
			for(int looper_b=0; looper_b<2;looper_b++)
			{
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				int int_b = 0;
				double double_c = 0;
				double double_d = 0;
				long long_a = 0;
				long long_c = 0;
				unsigned int unsigned_int_e = 0;
				int int_c = 0;
				float float_a = 0;
				float float_b = 0;
				double double_e = 0;
				unsigned int unsigned_int_d = 0;
				long long_b = 0;
				short short_a = 0;
				long long_d = 0;
				long_c = long_a * long_b;
			}
			double_c = double_c + double_a;
			double_a = sinh ( double_d ) ;
			for(int looper_c=0; looper_c<5;looper_c++)
			{
				double_d = log10 ( double_e ) ;
			}
			unsigned_int_b = unsigned_int_e;
		}
		float_a = float_a + float_b;
		?:
		double_d = tan ( double_a ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			long long_a = 0;
			long long_c = 0;
			unsigned int unsigned_int_e = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_e = 0;
			unsigned int unsigned_int_d = 0;
			long long_b = 0;
			short short_a = 0;
			long long_d = 0;
			short_a = short_a;
			double_a = pow ( double_a , double_d ) ;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		int_c = int_a - int_b;
		double_c = sinh ( double_c ) ;
		double_a = sqrt ( double_d ) ;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		long long_a = 0;
		long long_c = 0;
		unsigned int unsigned_int_e = 0;
		int int_c = 0;
		float float_a = 0;
		float float_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_d = 0;
		long long_b = 0;
		short short_a = 0;
		long long_d = 0;
		double_d = fabs ( double_d ) ;
		int_b = ksw_extend2(int_a,double_b,int_b,int_a,int_b,unsigned_int_e,int_c,int_c,int_b,int_a,int_b,int_b,int_c,int_b,int_b,int_a,int_a,int_c,int_a);

		long_d = long_c * long_a;
		unsigned_int_a = unsigned_int_a;
	}
}
int ksw_extend2( int parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,int parameter_12,int parameter_13,int parameter_14,int parameter_15,int parameter_16,int parameter_17,int parameter_18,int parameter_19)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_d = 0;
	double double_e = 0;
	float float_a = 0;
	float float_b = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	long long_a = 0;
	long long_b = 0;
	int int_b = 0;
	double double_i = 0;
	double double_j = 0;
	int int_c = 0;
	short short_a = 0;
	short short_b = 0;
	long long_c = 0;
	unsigned int unsigned_int_d = 0;
	float float_c = 0;
	double double_k = 0;
	double double_l = 0;
	float float_d = 0;
	double double_m = 0;
	double double_n = 0;
	long long_d = 0;
	long long_e = 0;
	unsigned int unsigned_int_e = 0;
	char char_c = 0;
	double_a = atan2 ( double_a , double_b ) ;
	double_c = cosh ( double_a ) ;
	double_b = ldexp ( double_a , int_a ) ;
	double_b = exp ( double_c ) ;
	char_a = char_b;
	unsigned_int_c = unsigned_int_a - unsigned_int_b;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		double_d = log10 ( double_c ) ;
		for(int looper_b=0; looper_b<9;looper_b++)
		{
			double_d = log ( double_a ) ;
		}
	}
	double_a = tan ( double_e ) ;
	?:
	float_a = float_b;
	for(int looper_c=0; looper_c<7;looper_c++)
	{
		double_e = tanh ( double_d ) ;
	}
	double_b = tanh ( double_c ) ;
	for(int looper_d=0; looper_d<9;looper_d++)
	{
		?:
		double_b = atan ( double_d ) ;
	}
	int_a = int_a;
	?:
	double_f = atan2 ( double_a , double_a ) ;
	?:
	double_g = sinh ( double_b ) ;
	double_h = atan ( double_h ) ;
	?:
	long_b = long_a + long_a;
	?:
	int_a = int_b;
	int_a = int_b;
	char_a = char_a * char_a;
	double_c = exp ( double_c ) ;
	double_i = atan2 ( double_j , double_j ) ;
	for(int looper_e=0; looper_e<4;looper_e++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		int int_b = 0;
		double double_i = 0;
		double double_j = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_d = 0;
		float float_c = 0;
		double double_k = 0;
		double double_l = 0;
		float float_d = 0;
		double double_m = 0;
		double double_n = 0;
		long long_d = 0;
		long long_e = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		double_b = ceil ( double_j ) ;
		double_i = log ( double_a ) ;
		if(1)
		{
			float_c = float_a;
		}
		if(1)
		{
			double_i = double_j - double_e;
		}
		if(1)
		{
			double_f = double_j;
		}
		if(1)
		{
			double_a = ldexp ( double_j , int_b ) ;
			char controller_e[1];
			scanf("%1s", controller_e);
			if( controller_e <"b" )
			{
				double_g = double_f - double_k;
			}
		}
		else
		{
			double_k = atan2 ( double_b , double_j ) ;
		}
		for(int looper_f=0; looper_f<7;looper_f++)
		{
			unsigned_int_b = unsigned_int_b;
			double_a = ldexp ( double_c , int_c ) ;
			long_a = long_a;
			?:
			long_b = long_b * long_a;
			?:
			short_a = short_b;
			?:
			double_d = cos ( double_b ) ;
			double_b = tan ( double_c ) ;
			?:
			double_j = cos ( double_d ) ;
			?:
			double_e = ceil ( double_j ) ;
			double_l = exp ( double_c ) ;
			?:
			float_c = float_a;
			float_d = float_d;
			?:
			double_e = sqrt ( double_i ) ;
			double_b = pow ( double_b , double_d ) ;
			long_b = long_c;
			?:
			float_b = float_b;
			double_g = cos ( double_l ) ;
			?:
			unsigned_int_d = unsigned_int_a;
		}
		double_k = pow ( double_a , double_l ) ;
		double_i = fabs ( double_j ) ;
		if(1)
		{
			?:
			float_b = float_a - float_c;
			?:
			double_e = double_d;
		}
		if(1)
		{
		}
		if(1)
		{
			float_c = float_d;
			?:
			double_k = tanh ( double_f ) ;
		}
		if(1)
		{
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
		}
		for(int looper_g=0; looper_g<8;looper_g++)
		{
			double_k = tan ( double_f ) ;
		}
		double_a = pow ( double_i , double_i ) ;
		for(int looper_h=0; looper_h<4;looper_h++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			char char_a = 0;
			char char_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_d = 0;
			double double_e = 0;
			float float_a = 0;
			float float_b = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			long long_a = 0;
			long long_b = 0;
			int int_b = 0;
			double double_i = 0;
			double double_j = 0;
			int int_c = 0;
			short short_a = 0;
			short short_b = 0;
			long long_c = 0;
			unsigned int unsigned_int_d = 0;
			float float_c = 0;
			double double_k = 0;
			double double_l = 0;
			float float_d = 0;
			double double_m = 0;
			double double_n = 0;
			long long_d = 0;
			long long_e = 0;
			unsigned int unsigned_int_e = 0;
			char char_c = 0;
			double_c = fmod ( double_h , double_m ) ;
		}
		?:
		double_g = ldexp ( double_a , int_c ) ;
	}
	short_a = short_b * short_a;
	unsigned_int_d = unsigned_int_c;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		int int_b = 0;
		double double_i = 0;
		double double_j = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_d = 0;
		float float_c = 0;
		double double_k = 0;
		double double_l = 0;
		float float_d = 0;
		double double_m = 0;
		double double_n = 0;
		long long_d = 0;
		long long_e = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		double_n = exp ( double_c ) ;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		int int_b = 0;
		double double_i = 0;
		double double_j = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_d = 0;
		float float_c = 0;
		double double_k = 0;
		double double_l = 0;
		float float_d = 0;
		double double_m = 0;
		double double_n = 0;
		long long_d = 0;
		long long_e = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		long_c = long_d / long_e;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		int int_b = 0;
		double double_i = 0;
		double double_j = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_d = 0;
		float float_c = 0;
		double double_k = 0;
		double double_l = 0;
		float float_d = 0;
		double double_m = 0;
		double double_n = 0;
		long long_d = 0;
		long long_e = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		unsigned_int_e = unsigned_int_c / unsigned_int_e;
	}
	if(1)
	{
		unsigned_int_d = unsigned_int_a;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		float float_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		long long_a = 0;
		long long_b = 0;
		int int_b = 0;
		double double_i = 0;
		double double_j = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_d = 0;
		float float_c = 0;
		double double_k = 0;
		double double_l = 0;
		float float_d = 0;
		double double_m = 0;
		double double_n = 0;
		long long_d = 0;
		long long_e = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		char_c = char_a;
	}
	return int_c;
}
float left_extend_seed_set_align_beg( unsigned int parameter_1,long parameter_2,char parameter_3,long parameter_4,double parameter_5,int parameter_6,int parameter_7,double parameter_8)
{
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	unsigned int unsigned_int_a = 0;
	int int_d = 0;
	int int_e = 0;
	int int_f = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	float float_c = 0;
	float float_d = 0;
	long long_c = 0;
	long long_d = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_h = 0;
	if(1)
	{
		double_a = cos ( double_b ) ;
		return float_a;
	}
	long_b = long_a + long_b;
	double_b = log10 ( double_a ) ;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		double_a = double_b;
	}
	double_b = pow ( double_a , double_c ) ;
	double_c = sqrt ( double_a ) ;
	for(int looper_b=0; looper_b<6;looper_b++)
	{
		int_a = ksw_extend2(int_b,double_c,int_b,int_c,int_c,unsigned_int_a,int_d,int_a,int_e,int_f,int_f,int_f,int_b,int_f,int_d,int_a,int_f,int_f,int_e);

		double_d = acos ( double_a ) ;
	}
	double_d = double_b;
	for(int looper_c=0; looper_c<5;looper_c++)
	{
		double_e = cosh ( double_d ) ;
		double_e = fabs ( double_d ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			float float_a = 0;
			long long_a = 0;
			long long_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			unsigned int unsigned_int_a = 0;
			int int_d = 0;
			int int_e = 0;
			int int_f = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			float float_c = 0;
			float float_d = 0;
			long long_c = 0;
			long long_d = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			double double_h = 0;
			double_c = tan ( double_e ) ;
			long_d = long_c - long_a;
			for(int looper_d=0; looper_d<8;looper_d++)
			{
				double_b = sinh ( double_b ) ;
			}
			double_c = pow ( double_e , double_a ) ;
			double_f = fmod ( double_e , double_d ) ;
			for(int looper_e=0; looper_e<4;looper_e++)
			{
				double_a = ldexp ( double_b , int_f ) ;
			}
			double_b = tan ( double_a ) ;
		}
		double_c = double_g;
		?:
		double_g = fabs ( double_d ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			float float_a = 0;
			long long_a = 0;
			long long_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			unsigned int unsigned_int_a = 0;
			int int_d = 0;
			int int_e = 0;
			int int_f = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			float float_c = 0;
			float float_d = 0;
			long long_c = 0;
			long long_d = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			double double_h = 0;
			float_d = float_b + float_c;
			unsigned_int_a = unsigned_int_a;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		unsigned int unsigned_int_a = 0;
		int int_d = 0;
		int int_e = 0;
		int int_f = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		float float_c = 0;
		float float_d = 0;
		long long_c = 0;
		long long_d = 0;
		float float_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_h = 0;
		double_f = double_e + double_e;
		char_a = char_a * char_b;
		int_b = int_f;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		unsigned int unsigned_int_a = 0;
		int int_d = 0;
		int int_e = 0;
		int int_f = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		float float_c = 0;
		float float_d = 0;
		long long_c = 0;
		long long_d = 0;
		float float_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_h = 0;
		double_b = double_e;
		double_g = cos ( double_h ) ;
		double_b = log ( double_b ) ;
	}
	double_b = asin ( double_a ) ;
	float_c = float_d;
}
void ks_introsort_64( char parameter_1,unsigned int parameter_2)
short cal_max_gap( short parameter_1,int parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	char char_a = 0;
	char char_b = 0;
	long long_a = 0;
	long long_b = 0;
	short short_a = 0;
	float float_a = 0;
	float float_b = 0;
	double_a = fmod ( double_b , double_c ) ;
	double_a = ldexp ( double_a , int_a ) ;
	?:
	char_b = char_a * char_a;
	?:
	long_b = long_a * long_b;
	return short_a;
	?:
	float_b = float_a - float_b;
}
int mem_chain_reference_span( short parameter_1,int parameter_2,int parameter_3,unsigned int parameter_4,char parameter_5)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	short short_a = 0;
	short short_b = 0;
	double double_d = 0;
	short short_c = 0;
	int int_c = 0;
	long long_a = 0;
	long long_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_c = 0;
	double_a = tanh ( double_a ) ;
	unsigned_int_a = unsigned_int_b;
	double_b = double_a;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		short short_a = 0;
		short short_b = 0;
		double double_d = 0;
		short short_c = 0;
		int int_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		char char_b = 0;
		unsigned int unsigned_int_c = 0;
		long_b = long_a * long_b;
		double_c = exp ( double_a ) ;
		int_a = int_b;
		?:
		char_a = char_b;
		?:
		unsigned_int_a = unsigned_int_a;
	}
	?:
	short_b = short_a * short_b;
	?:
	double_d = sqrt ( double_a ) ;
	if(1)
	{
		char controller_b[5];
		scanf("%5s", controller_b);
		if( controller_b <"oLqYD" )
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_b = 0;
			short short_a = 0;
			short short_b = 0;
			double double_d = 0;
			short short_c = 0;
			int int_c = 0;
			long long_a = 0;
			long long_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			char char_a = 0;
			char char_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned_int_c = unsigned_int_a - unsigned_int_b;
		}
		else
		{
			double_d = double_d * double_d;
		}
	}
	short_c = cal_max_gap(short_a,int_c);

}
void mem_chain2aln( short parameter_1,long parameter_2,unsigned int parameter_3,int parameter_4,int parameter_5,unsigned int parameter_6,float parameter_7,double parameter_8)
{
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	unsigned int unsigned_int_a = 0;
	char char_a = 0;
	long long_b = 0;
	double double_c = 0;
	float float_a = 0;
	char char_b = 0;
	long long_c = 0;
	int int_b = 0;
	double double_d = 0;
	long long_d = 0;
	long long_e = 0;
	char char_c = 0;
	float float_b = 0;
	unsigned int unsigned_int_b = 0;
	short short_a = 0;
	double double_e = 0;
	unsigned int unsigned_int_c = 0;
	char char_d = 0;
	int int_c = 0;
	double double_f = 0;
	float float_c = 0;
	char char_e = 0;
	unsigned int unsigned_int_d = 0;
	short short_b = 0;
	int int_d = 0;
	char char_f = 0;
	double double_l = 0;
	unsigned int unsigned_int_e = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	short short_c = 0;
	double double_j = 0;
	double double_k = 0;
	float float_d = 0;
	short short_d = 0;
	short short_e = 0;
	if(1)
	{
		int_a = int_a - int_a;
		double_b = double_a / double_a;
	}
	if(1)
	{
	}
	double_a = floor ( double_a ) ;
	long_a = mem_print_chain1(unsigned_int_a,char_a);

	long_a = long_a + long_b;
	double_c = double_b;
	double_b = double_a - double_a;
	float_a = left_extend_seed_set_align_beg(unsigned_int_a,long_a,char_b,long_c,double_a,int_a,int_b,double_d);

	long_e = long_c * long_d;
	char_b = bns_fetch_seq(char_c,float_b,unsigned_int_b,int_a,short_a,int_a);

	double_e = acos ( double_a ) ;
	unsigned_int_a = unsigned_int_c;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		char_d = char_c;
	}
	int_c = right_extend_seed_set_align_end(char_d,double_f,float_c,int_b,short_a,double_d,int_c,int_b,float_a);

	double_c = fmod ( double_a , double_a ) ;
	double_a = sinh ( double_f ) ;
	short_a = cal_max_gap(short_a,int_a);

	double_a = acos ( double_c ) ;
	for(int looper_b=0; looper_b<9;looper_b++)
	{
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		unsigned int unsigned_int_a = 0;
		char char_a = 0;
		long long_b = 0;
		double double_c = 0;
		float float_a = 0;
		char char_b = 0;
		long long_c = 0;
		int int_b = 0;
		double double_d = 0;
		long long_d = 0;
		long long_e = 0;
		char char_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_b = 0;
		short short_a = 0;
		double double_e = 0;
		unsigned int unsigned_int_c = 0;
		char char_d = 0;
		int int_c = 0;
		double double_f = 0;
		float float_c = 0;
		char char_e = 0;
		unsigned int unsigned_int_d = 0;
		short short_b = 0;
		int int_d = 0;
		char char_f = 0;
		double double_l = 0;
		unsigned int unsigned_int_e = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		short short_c = 0;
		double double_j = 0;
		double double_k = 0;
		float float_d = 0;
		short short_d = 0;
		short short_e = 0;
		int_b = int_c - int_a;
		for(int looper_c=0; looper_c<1;looper_c++)
		{
			char_c = char_d + char_d;
			double_c = atan2 ( double_e , double_f ) ;
			double_f = tan ( double_g ) ;
			if(1)
			{
			}
			if(1)
			{
			}
			double_b = ldexp ( double_e , int_b ) ;
			double_b = atan ( double_d ) ;
			ks_introsort_64(char_e,unsigned_int_d);

			float_c = float_a;
			double_e = cos ( double_a ) ;
			if(1)
			{
			}
			double_d = atan2 ( double_f , double_h ) ;
			double_h = atan2 ( double_b , double_f ) ;
			int_c = mem_chain_reference_span(short_b,int_d,int_c,unsigned_int_d,char_f);

			int_d = int_c;
			unsigned_int_c = unsigned_int_b / unsigned_int_b;
			if(1)
			{
			}
		}
		if(1)
		{
			if(1)
			{
				int_c = int_b;
			}
			for(int looper_d=0; looper_d<10;looper_d++)
			{
				double_c = pow ( double_b , double_h ) ;
				if(1)
				{
				}
				long_b = long_d;
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
			if(1)
			{
				double_b = ldexp ( double_g , int_c ) ;
			}
			if(1)
			{
				int int_a = 0;
				double double_a = 0;
				double double_b = 0;
				long long_a = 0;
				unsigned int unsigned_int_a = 0;
				char char_a = 0;
				long long_b = 0;
				double double_c = 0;
				float float_a = 0;
				char char_b = 0;
				long long_c = 0;
				int int_b = 0;
				double double_d = 0;
				long long_d = 0;
				long long_e = 0;
				char char_c = 0;
				float float_b = 0;
				unsigned int unsigned_int_b = 0;
				short short_a = 0;
				double double_e = 0;
				unsigned int unsigned_int_c = 0;
				char char_d = 0;
				int int_c = 0;
				double double_f = 0;
				float float_c = 0;
				char char_e = 0;
				unsigned int unsigned_int_d = 0;
				short short_b = 0;
				int int_d = 0;
				char char_f = 0;
				double double_l = 0;
				unsigned int unsigned_int_e = 0;
				double double_g = 0;
				double double_h = 0;
				double double_i = 0;
				short short_c = 0;
				double double_j = 0;
				double double_k = 0;
				float float_d = 0;
				short short_d = 0;
				short short_e = 0;
				float_d = float_b * float_c;
			}
		}
		double_b = exp ( double_e ) ;
		double_i = asin ( double_g ) ;
		double_i = sqrt ( double_f ) ;
		int_d = err_printf(float_c,char_f);

		double_h = atan ( double_h ) ;
		int_c = int_d;
		short_c = short_a;
		if(1)
		{
			unsigned_int_b = unsigned_int_b;
		}
		double_g = double_a;
		unsigned_int_c = unsigned_int_c;
		double_i = double_a;
		double_h = cos ( double_j ) ;
		if(1)
		{
			double_e = fmod ( double_i , double_j ) ;
		}
		for(int looper_e=0; looper_e<9;looper_e++)
		{
			double_i = fmod ( double_a , double_c ) ;
			if(1)
			{
				int int_a = 0;
				double double_a = 0;
				double double_b = 0;
				long long_a = 0;
				unsigned int unsigned_int_a = 0;
				char char_a = 0;
				long long_b = 0;
				double double_c = 0;
				float float_a = 0;
				char char_b = 0;
				long long_c = 0;
				int int_b = 0;
				double double_d = 0;
				long long_d = 0;
				long long_e = 0;
				char char_c = 0;
				float float_b = 0;
				unsigned int unsigned_int_b = 0;
				short short_a = 0;
				double double_e = 0;
				unsigned int unsigned_int_c = 0;
				char char_d = 0;
				int int_c = 0;
				double double_f = 0;
				float float_c = 0;
				char char_e = 0;
				unsigned int unsigned_int_d = 0;
				short short_b = 0;
				int int_d = 0;
				char char_f = 0;
				double double_l = 0;
				unsigned int unsigned_int_e = 0;
				double double_g = 0;
				double double_h = 0;
				double double_i = 0;
				short short_c = 0;
				double double_j = 0;
				double double_k = 0;
				float float_d = 0;
				short short_d = 0;
				short short_e = 0;
				short_d = short_e;
			}
		}
		?:
		char_a = char_d * char_e;
		double_j = log10 ( double_k ) ;
		double_e = double_l;
	}
	double_l = atan ( double_f ) ;
	unsigned_int_b = unsigned_int_e - unsigned_int_d;
}
float revseq( int parameter_1,float parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double_a = sinh ( double_a ) ;
	for(int looper_a=0; looper_a<5;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double_b = cos ( double_b ) ;
	}
}
short ksw_u8( long parameter_1,int parameter_2,short parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	if(1)
	{
		double double_a = 0;
		char char_a = 0;
		char char_b = 0;
		double double_b = 0;
		int int_a = 0;
		double_a = acos ( double_a ) ;
		int looper_a = 0;
		while(looper_a < 10)
		{
			double double_a = 0;
			char char_a = 0;
			char char_b = 0;
			double double_b = 0;
			int int_a = 0;
			looper_a += 1;
			double_a = acos ( double_a ) ;
			int_a = int_a + int_a;
			double_a = fabs ( double_a ) ;
		}
		char_b = char_a - char_b;
		double_a = double_b - double_b;
	}
}
float ksw_i16( short parameter_1,int parameter_2,char parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,int parameter_8)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned_int_a = unsigned_int_a - unsigned_int_a;
	double_a = sqrt ( double_a ) ;
	double_c = double_b * double_b;
}
int ksw_qinit( int parameter_1,int parameter_2,float parameter_3,int parameter_4,char parameter_5)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	float float_a = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	double double_g = 0;
	int int_d = 0;
	long long_b = 0;
	double double_h = 0;
	char char_d = 0;
	long long_a = 0;
	long long_c = 0;
	char char_e = 0;
	double_a = ceil ( double_a ) ;
	unsigned_int_a = unsigned_int_a;
	?:
	int_c = int_a / int_b;
	double_b = asin ( double_c ) ;
	int_b = int_c * int_c;
	double_a = acos ( double_a ) ;
	double_d = acos ( double_e ) ;
	double_c = cos ( double_f ) ;
	double_e = asin ( double_c ) ;
	float_b = float_a + float_a;
	char_c = char_a + char_b;
	double_g = cos ( double_f ) ;
	double_g = asin ( double_b ) ;
	double_c = double_d - double_b;
	double_b = double_d;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		char controller_a[4];
		scanf("%4s", controller_a);
		if( controller_a >"EN8/" )
		{
			int_d = int_d / int_b;
		}
		char controller_b[1];
		scanf("%1s", controller_b);
		if( controller_b >"A" )
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			float float_a = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			double double_g = 0;
			int int_d = 0;
			long long_b = 0;
			double double_h = 0;
			char char_d = 0;
			long long_a = 0;
			long long_c = 0;
			char char_e = 0;
			long_a = long_b;
		}
	}
	double_h = fabs ( double_c ) ;
	double_f = fabs ( double_g ) ;
	int_c = int_a / int_b;
	if(1)
	{
		char_a = char_b * char_c;
		for(int looper_b=0; looper_b<5;looper_b++)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			float float_a = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			double double_g = 0;
			int int_d = 0;
			long long_b = 0;
			double double_h = 0;
			char char_d = 0;
			long long_a = 0;
			long long_c = 0;
			char char_e = 0;
			char_d = char_d / char_d;
			long_b = long_b + long_c;
			for(int looper_c=0; looper_c<9;looper_c++)
			{
				for(int looper_d=0; looper_d<1;looper_d++)
				{
					?:
					int_c = int_d;
				}
			}
		}
	}
	else
	{
		float_a = float_b - float_b;
		for(int looper_e=0; looper_e<3;looper_e++)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			float float_a = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			double double_g = 0;
			int int_d = 0;
			long long_b = 0;
			double double_h = 0;
			char char_d = 0;
			long long_a = 0;
			long long_c = 0;
			char char_e = 0;
			double_h = acos ( double_c ) ;
			char_e = char_d - char_d;
			for(int looper_f=0; looper_f<4;looper_f++)
			{
				for(int looper_g=0; looper_g<10;looper_g++)
				{
					?:
					double_b = tanh ( double_h ) ;
				}
			}
		}
	}
	return int_b;
}
unsigned int ksw_align2( int parameter_1,unsigned int parameter_2,int parameter_3,unsigned int parameter_4,int parameter_5,char parameter_6,int parameter_7,int parameter_8,int parameter_9,int parameter_10,int parameter_11,short parameter_12)
{
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	short short_b = 0;
	long long_a = 0;
	short short_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	float float_a = 0;
	float float_b = 0;
	char char_d = 0;
	int int_d = 0;
	float float_c = 0;
	unsigned int unsigned_int_d = 0;
	char char_c = 0;
	double double_e = 0;
	char_a = char_b;
	char_a = char_a;
	int_a = int_a;
	int_b = int_c;
	?:
	?:
	double_a = log ( double_b ) ;
	if(1)
	{
		double_a = atan ( double_c ) ;
	}
	?:
	double_d = cos ( double_a ) ;
	short_a = short_a / short_a;
	short_b = ksw_u8(long_a,int_a,short_c,int_c,int_b,int_b,int_b,int_b);

	double_a = double_c / double_b;
	if(1)
	{
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		short short_b = 0;
		long long_a = 0;
		short short_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		float float_a = 0;
		float float_b = 0;
		char char_d = 0;
		int int_d = 0;
		float float_c = 0;
		unsigned int unsigned_int_d = 0;
		char char_c = 0;
		double double_e = 0;
		char_b = char_c / char_a;
	}
	if(1)
	{
		return unsigned_int_a;
	}
	unsigned_int_c = unsigned_int_b - unsigned_int_a;
	int_a = ksw_qinit(int_b,int_a,float_a,int_b,char_a);

	double_b = cos ( double_d ) ;
	float_a = float_b;
	double_c = fmod ( double_c , double_c ) ;
	unsigned_int_c = unsigned_int_c;
	double_a = acos ( double_a ) ;
	float_b = ksw_i16(short_c,int_b,char_d,int_b,int_a,int_a,int_b,int_c);

	float_a = revseq(int_d,float_c);

	unsigned_int_b = unsigned_int_c - unsigned_int_d;
	char controller_d[4];
	scanf("%4s", controller_d);
	if( controller_d <"4yMR" )
	{
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		int int_b = 0;
		int int_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		short short_b = 0;
		long long_a = 0;
		short short_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		float float_a = 0;
		float float_b = 0;
		char char_d = 0;
		int int_d = 0;
		float float_c = 0;
		unsigned int unsigned_int_d = 0;
		char char_c = 0;
		double double_e = 0;
		double_b = asin ( double_e ) ;
	}
	return unsigned_int_b;
}
float mem_seed_sw( char parameter_1,int parameter_2,double parameter_3,int parameter_4,int parameter_5,long parameter_6,short parameter_7)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	short short_a = 0;
	short short_b = 0;
	float float_a = 0;
	char char_a = 0;
	char char_b = 0;
	float float_b = 0;
	float float_c = 0;
	long long_a = 0;
	long long_b = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	int int_d = 0;
	int int_e = 0;
	short short_c = 0;
	double double_c = 0;
	long long_c = 0;
	char char_c = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_d = 0;
	double_a = acos ( double_a ) ;
	double_b = asin ( double_b ) ;
	unsigned_int_c = unsigned_int_a / unsigned_int_b;
	short_a = short_a + short_b;
	if(1)
	{
		return float_a;
	}
	char_a = char_b;
	float_c = float_b + float_a;
	long_b = long_a + long_a;
	unsigned_int_a = ksw_align2(int_a,unsigned_int_b,int_b,unsigned_int_c,int_c,char_b,int_d,int_b,int_c,int_e,int_e,short_c);

	double_b = asin ( double_c ) ;
	?:
	long_b = long_c;
	int_e = int_c;
	?:
	char_a = bns_fetch_seq(char_c,float_b,unsigned_int_a,int_e,short_a,int_b);

	double_d = pow ( double_a , double_b ) ;
	long_a = long_c;
	?:
	double_e = double_a;
	double_c = tan ( double_a ) ;
	?:
	unsigned_int_d = unsigned_int_c;
	if(1)
	{
		if(1)
		{
			double_a = floor ( double_b ) ;
		}
		else
		{
			short_b = short_a;
		}
	}
	char controller_d[5];
	scanf("%5s", controller_d);
	if( controller_d <"VAa%2" )
	{
		return float_a;
	}
	unsigned_int_c = unsigned_int_c;
	?:
	double_d = floor ( double_c ) ;
	int_c = int_c;
	return float_a;
}
void mem_flt_chained_seeds( double parameter_1,double parameter_2,long parameter_3,double parameter_4,unsigned int parameter_5,double parameter_6)
{
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	float float_a = 0;
	char char_a = 0;
	double double_d = 0;
	long long_a = 0;
	short short_a = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	double double_f = 0;
	unsigned int unsigned_int_b = 0;
	int_b = int_a / int_b;
	double_a = sqrt ( double_a ) ;
	?:
	double_a = cosh ( double_a ) ;
	char controller_a[4];
	scanf("%4s", controller_a);
	if( controller_a <"2M0&" )
	{
		double_b = cos ( double_c ) ;
	}
	float_a = mem_seed_sw(char_a,int_b,double_d,int_b,int_a,long_a,short_a);

	double_d = log10 ( double_c ) ;
	short_a = short_a;
	double_e = atan ( double_a ) ;
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		double_a = ldexp ( double_b , int_a ) ;
		for(int looper_b=0; looper_b<1;looper_b++)
		{
			int int_a = 0;
			int int_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			float float_a = 0;
			char char_a = 0;
			double double_d = 0;
			long long_a = 0;
			short short_a = 0;
			double double_e = 0;
			unsigned int unsigned_int_a = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			double_a = log ( double_e ) ;
			mem_print_chains(float_a,unsigned_int_a);

			double_f = sqrt ( double_f ) ;
			char controller_b[1];
			scanf("%1s", controller_b);
			if( controller_b >"Z" )
			{
				?:
				double_b = fabs ( double_b ) ;
				double_a = tanh ( double_f ) ;
			}
		}
		double_b = floor ( double_e ) ;
	}
	char controller_c[4];
	scanf("%4s", controller_c);
	if( controller_c >"({AH" )
	{
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		float float_a = 0;
		char char_a = 0;
		double double_d = 0;
		long long_a = 0;
		short short_a = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		double_d = atan ( double_e ) ;
		unsigned_int_a = unsigned_int_a - unsigned_int_b;
	}
}
void mem_chain_flt( int parameter_1,unsigned int parameter_2)
int mem_chain_weight()
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	long long_b = 0;
	long long_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	long long_a = 0;
	double double_d = 0;
	long long_d = 0;
	double_a = cos ( double_a ) ;
	double_b = cos ( double_b ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double_a = asin ( double_c ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			long long_b = 0;
			long long_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			long long_a = 0;
			double double_d = 0;
			long long_d = 0;
			long_c = long_a * long_b;
		}
		char controller_b[1];
		scanf("%1s", controller_b);
		if( controller_b <"N" )
		{
			unsigned_int_a = unsigned_int_a + unsigned_int_b;
		}
		?:
		double_c = double_b + double_a;
	}
	double_b = ldexp ( double_c , int_a ) ;
	unsigned_int_a = unsigned_int_b;
	for(int looper_b=0; looper_b<3;looper_b++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		long long_b = 0;
		long long_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		double double_d = 0;
		long long_d = 0;
		int_a = int_a;
		char controller_c[2];
		scanf("%2s", controller_c);
		if( controller_c <"!v" )
		{
			double_a = cosh ( double_b ) ;
		}
		char controller_d[2];
		scanf("%2s", controller_d);
		if( controller_d <"qw" )
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			long long_b = 0;
			long long_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			long long_a = 0;
			double double_d = 0;
			long long_d = 0;
			long_c = long_d + long_b;
		}
		?:
		double_d = double_a;
	}
	?:
	double_a = log ( double_b ) ;
	return int_b;
	?:
	double_b = fabs ( double_a ) ;
}
long mem_print_chain1( unsigned int parameter_1,char parameter_2)
{
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_b = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double_a = sqrt ( double_a ) ;
	int_a = int_a - int_b;
	for(int looper_a=0; looper_a<5;looper_a++)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double_b = pow ( double_a , double_c ) ;
		double_c = cosh ( double_a ) ;
		double_b = acos ( double_d ) ;
		char controller_a[2];
		scanf("%2s", controller_a);
		if( controller_a <"W$" )
		{
			double double_a = 0;
			int int_a = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_b = 0;
			double double_e = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned_int_b = unsigned_int_a * unsigned_int_a;
		}
		int_a = mem_chain_weight();

		bns_depos(int_b,int_a,int_a);

		double_e = double_e;
	}
	double_d = fmod ( double_a , double_c ) ;
}
void mem_print_chains( float parameter_1,unsigned int parameter_2)
{
	double double_a = 0;
	long long_a = 0;
	unsigned int unsigned_int_a = 0;
	char char_a = 0;
	int int_a = 0;
	double_a = sqrt ( double_a ) ;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double double_a = 0;
		long long_a = 0;
		unsigned int unsigned_int_a = 0;
		char char_a = 0;
		int int_a = 0;
		int_a = int_a;
		long_a = mem_print_chain1(unsigned_int_a,char_a);

		double_a = ldexp ( double_a , int_a ) ;
	}
}
long bwtintv_cache_destroy( long parameter_1)
{
	double double_a = 0;
	short short_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	char char_a = 0;
	double_a = double_a;
	short_a = short_a;
	double_b = acos ( double_b ) ;
	int_a = int_b;
	double_a = cosh ( double_b ) ;
	double_c = floor ( double_d ) ;
	char_a = char_a;
}
void test_and_merge( short parameter_1,char parameter_2,char parameter_3,long parameter_4,int parameter_5)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	double double_c = 0;
	double_a = acos ( double_a ) ;
	if(1)
	{
	}
	if(1)
	{
	}
	if(1)
	{
	}
	double_a = cos ( double_b ) ;
	long_a = long_a - long_a;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		double double_c = 0;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			long long_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			double double_c = 0;
			int_a = int_a;
			double_c = double_b;
		}
		unsigned_int_a = unsigned_int_a;
	}
}
void bns_get_seq( int parameter_1,unsigned int parameter_2,long parameter_3,int parameter_4,long parameter_5)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	int int_c = 0;
	long long_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double_a = acos ( double_b ) ;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a <"8[((h" )
	{
		double_a = cosh ( double_a ) ;
	}
	if(1)
	{
		double_b = ceil ( double_b ) ;
	}
	if(1)
	{
		double_c = exp ( double_b ) ;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		int int_c = 0;
		long long_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int_a = int_a / int_b;
		char_a = char_a;
		double_a = pow ( double_b , double_a ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			int int_b = 0;
			char char_a = 0;
			int int_c = 0;
			long long_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double_a = log10 ( double_b ) ;
			int_c = int_a;
			for(int looper_a=0; looper_a<7;looper_a++)
			{
				double_c = fmod ( double_a , double_b ) ;
			}
		}
		else
		{
			for(int looper_b=0; looper_b<1;looper_b++)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				int int_a = 0;
				int int_b = 0;
				char char_a = 0;
				int int_c = 0;
				long long_a = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				long_a = long_a * long_a;
			}
		}
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		int int_c = 0;
		long long_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned_int_a = unsigned_int_b;
	}
}
char bns_fetch_seq( char parameter_1,float parameter_2,unsigned int parameter_3,int parameter_4,short parameter_5,int parameter_6)
{
	float float_a = 0;
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	short short_a = 0;
	char char_a = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_j = 0;
	int int_b = 0;
	int int_c = 0;
	unsigned int unsigned_int_b = 0;
	long long_a = 0;
	double double_d = 0;
	double double_i = 0;
	float_a = float_a * float_a;
	double_a = sqrt ( double_b ) ;
	int_a = bns_pos2rid(short_a,char_a);

	double_a = atan2 ( double_c , double_c ) ;
	if(1)
	{
		float float_a = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		short short_a = 0;
		char char_a = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_j = 0;
		int int_b = 0;
		int int_c = 0;
		unsigned int unsigned_int_b = 0;
		long long_a = 0;
		double double_d = 0;
		double double_i = 0;
		double_b = double_d + double_b;
	}
	unsigned_int_a = unsigned_int_a;
	double_c = floor ( double_e ) ;
	double_f = double_c / double_f;
	double_a = sinh ( double_b ) ;
	if(1)
	{
		float float_a = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		short short_a = 0;
		char char_a = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_j = 0;
		int int_b = 0;
		int int_c = 0;
		unsigned int unsigned_int_b = 0;
		long long_a = 0;
		double double_d = 0;
		double double_i = 0;
		double_g = fabs ( double_h ) ;
		double_a = sqrt ( double_f ) ;
		double_g = pow ( double_i , double_j ) ;
	}
	?:
	bns_depos(int_a,int_b,int_c);

	double_j = double_j;
	?:
	double_a = asin ( double_f ) ;
	bns_get_seq(int_b,unsigned_int_b,long_a,int_a,long_a);

	double_j = exp ( double_g ) ;
	if(1)
	{
		double_h = log10 ( double_j ) ;
	}
	short_a = short_a;
	return char_a;
}
char asymmetric_flt_seed( int parameter_1,long parameter_2,double parameter_3,double parameter_4)
{
	float float_a = 0;
	int int_a = 0;
	int int_b = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_c = 0;
	int int_d = 0;
	int int_e = 0;
	double double_d = 0;
	char char_a = 0;
	unsigned int unsigned_int_a = 0;
	short short_a = 0;
	char char_b = 0;
	float float_c = 0;
	float_a = float_a;
	int_a = int_b;
	if(1)
	{
		float_a = float_b * float_b;
	}
	bns_depos(int_b,int_a,int_a);

	double_a = atan ( double_b ) ;
	double_c = fmod ( double_b , double_b ) ;
	int_b = int_c;
	int_d = int_e;
	double_d = tanh ( double_d ) ;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		if(1)
		{
			char_a = bns_fetch_seq(char_a,float_b,unsigned_int_a,int_c,short_a,int_d);

			double_c = atan ( double_d ) ;
			return char_b;
		}
	}
	float_b = float_a + float_c;
	return char_a;
}
void bns_depos( int parameter_1,int parameter_2,int parameter_3)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	?:
	unsigned_int_a = unsigned_int_a / unsigned_int_b;
}
int bns_pos2rid( short parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_c = 0;
	float float_a = 0;
	float float_b = 0;
	int int_b = 0;
	double double_d = 0;
	double_b = double_a + double_a;
	if(1)
	{
		return int_a;
	}
	short_c = short_a * short_b;
	double_c = tanh ( double_c ) ;
	float_a = float_b;
	int looper_a = 0;
	while(looper_a < 1)
	{
		looper_a += 1;
		double_b = fmod ( double_a , double_b ) ;
		if(1)
		{
			char controller_c[5];
			scanf("%5s", controller_c);
			if( controller_c >"i,/S," )
			{
			}
			if(1)
			{
			}
			short_a = short_b + short_a;
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			double double_c = 0;
			float float_a = 0;
			float float_b = 0;
			int int_b = 0;
			double double_d = 0;
			double_b = sqrt ( double_d ) ;
		}
	}
	return int_b;
}
int bns_intv2rid( long parameter_1,unsigned int parameter_2,long parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	long long_a = 0;
	short short_a = 0;
	int int_b = 0;
	int int_c = 0;
	int int_d = 0;
	double_a = double_a * double_b;
	if(1)
	{
		return int_a;
	}
	double_b = cos ( double_b ) ;
	char_c = char_a + char_b;
	?:
	long_a = long_a;
	return int_a;
	?:
	int_a = bns_pos2rid(short_a,char_c);

	bns_depos(int_b,int_c,int_b);

	int_c = int_b - int_d;
}
double bwt_sa( long parameter_1,int parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	float float_a = 0;
	float float_b = 0;
	double_a = sqrt ( double_b ) ;
	int looper_a = 0;
	while(looper_a < 2)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		float float_a = 0;
		float float_b = 0;
		looper_a += 1;
		float_a = float_b;
		double_b = atan ( double_a ) ;
	}
	return double_b;
	unsigned_int_a = bwt_invPsi(unsigned_int_a,double_c);

}
int bwt_seed_strategy1( short parameter_1,double parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7,unsigned int parameter_8)
{
	long long_a = 0;
	float float_a = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	char char_c = 0;
	char char_d = 0;
	int int_b = 0;
	int int_c = 0;
	int int_d = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_a = 0;
	short short_b = 0;
	long_a = long_a / long_a;
	float_a = float_b;
	char_a = char_b;
	if(1)
	{
		return int_a;
	}
	char_c = char_c / char_d;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		if(1)
		{
			long long_a = 0;
			float float_a = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			char char_c = 0;
			char char_d = 0;
			int int_b = 0;
			int int_c = 0;
			int int_d = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			short short_a = 0;
			short short_b = 0;
			double_a = double_a;
			bwt_extend(int_b,long_a,float_a,int_a);

			double_b = floor ( double_b ) ;
			if(1)
			{
				long long_a = 0;
				float float_a = 0;
				float float_b = 0;
				char char_a = 0;
				char char_b = 0;
				int int_a = 0;
				char char_c = 0;
				char char_d = 0;
				int int_b = 0;
				int int_c = 0;
				int int_d = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				short short_a = 0;
				short short_b = 0;
				short_b = short_a * short_a;
				double_b = atan2 ( double_a , double_b ) ;
				return int_c;
			}
			double_c = ceil ( double_c ) ;
		}
		else
		{
			return int_d;
		}
	}
	return int_c;
}
short bwt_reverse_intvs()
{
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		long long_a = 0;
		long long_b = 0;
		double_a = double_b;
		for(int looper_a=0; looper_a<5;looper_a++)
		{
			double double_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			long long_a = 0;
			long long_b = 0;
			double_a = pow ( double_b , double_b ) ;
			char_a = char_b;
			long_a = long_b;
		}
	}
}
void bwt_occ4( char parameter_1,float parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_a = 0;
	short short_b = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_d = 0;
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_a = 0;
	double_b = double_a / double_b;
	double_b = double_a;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		short short_a = 0;
		short short_b = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		long_b = long_a * long_b;
	}
	double_b = sqrt ( double_b ) ;
	double_c = pow ( double_c , double_c ) ;
	short_a = short_a + short_b;
	int_a = int_b;
	double_b = asin ( double_b ) ;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		short short_a = 0;
		short short_b = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned_int_a = unsigned_int_b;
	}
	unsigned_int_c = unsigned_int_b + unsigned_int_b;
	double_a = cosh ( double_b ) ;
	double_c = atan2 ( double_a , double_b ) ;
	double_d = acos ( double_a ) ;
	double_c = atan2 ( double_d , double_c ) ;
	double_c = tan ( double_c ) ;
}
void bwt_2occ4( float parameter_1,long parameter_2,char parameter_3,char parameter_4,char parameter_5)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	char char_a = 0;
	int int_a = 0;
	char char_c = 0;
	float float_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	char char_b = 0;
	double double_j = 0;
	unsigned int unsigned_int_d = 0;
	double double_k = 0;
	double double_l = 0;
	int int_b = 0;
	int int_c = 0;
	long long_a = 0;
	double_a = cos ( double_b ) ;
	double_c = double_a;
	double_d = floor ( double_e ) ;
	if(1)
	{
		char_a = char_a;
		double_a = ceil ( double_a ) ;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		char char_a = 0;
		int int_a = 0;
		char char_c = 0;
		float float_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		char char_b = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		double double_k = 0;
		double double_l = 0;
		int int_b = 0;
		int int_c = 0;
		long long_a = 0;
		unsigned_int_c = unsigned_int_a - unsigned_int_b;
		double_a = double_f + double_e;
		double_c = double_g - double_c;
		double_h = ldexp ( double_c , int_a ) ;
		double_g = fmod ( double_d , double_a ) ;
		int_a = int_a;
		double_e = double_c;
		double_e = double_e * double_f;
		double_d = double_b;
		for(int looper_a=0; looper_a<1;looper_a++)
		{
			double_i = cosh ( double_f ) ;
		}
		double_g = tanh ( double_f ) ;
		unsigned_int_a = unsigned_int_b / unsigned_int_b;
		char_a = char_b;
		for(int looper_b=0; looper_b<10;looper_b++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			char char_a = 0;
			int int_a = 0;
			char char_c = 0;
			float float_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			double double_i = 0;
			char char_b = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			double double_k = 0;
			double double_l = 0;
			int int_b = 0;
			int int_c = 0;
			long long_a = 0;
			long_a = long_a;
		}
		double_i = cosh ( double_b ) ;
		double_i = sinh ( double_e ) ;
		double_f = exp ( double_b ) ;
		double_j = fabs ( double_b ) ;
		bwt_occ4(char_c,float_a,int_a);

		double_d = double_a / double_b;
		double_e = atan2 ( double_f , double_a ) ;
		double_g = fmod ( double_a , double_d ) ;
		unsigned_int_b = unsigned_int_d;
		double_a = pow ( double_k , double_d ) ;
		double_l = ldexp ( double_k , int_b ) ;
		int_b = int_c / int_b;
	}
}
void bwt_extend( int parameter_1,long parameter_2,float parameter_3,int parameter_4)
{
	double double_a = 0;
	float float_a = 0;
	long long_a = 0;
	char char_a = 0;
	char char_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_g = 0;
	unsigned int unsigned_int_a = 0;
	double_a = tanh ( double_a ) ;
	bwt_2occ4(float_a,long_a,char_a,char_b,char_a);

	double_b = atan ( double_c ) ;
	float_a = float_a;
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		double double_a = 0;
		float float_a = 0;
		long long_a = 0;
		char char_a = 0;
		char char_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_g = 0;
		unsigned int unsigned_int_a = 0;
		double_c = log10 ( double_d ) ;
		unsigned_int_a = unsigned_int_a;
	}
	double_e = ldexp ( double_f , int_a ) ;
	double_d = double_f - double_e;
	unsigned_int_b = unsigned_int_b;
	double_g = atan ( double_e ) ;
}
int bwt_smem1a( double parameter_1,short parameter_2,int parameter_3,short parameter_4,int parameter_5,int parameter_6,char parameter_7,float parameter_8,float parameter_9)
{
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	int int_d = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	char char_a = 0;
	char char_b = 0;
	double double_f = 0;
	char char_c = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	unsigned int unsigned_int_b = 0;
	int int_e = 0;
	long long_a = 0;
	float float_a = 0;
	int int_f = 0;
	short_c = short_a / short_b;
	int_c = int_a * int_b;
	unsigned_int_a = unsigned_int_a;
	double_a = cos ( double_a ) ;
	if(1)
	{
		return int_d;
	}
	if(1)
	{
		double_b = atan2 ( double_a , double_c ) ;
	}
	double_d = cosh ( double_b ) ;
	double_d = double_d / double_c;
	?:
	double_e = floor ( double_a ) ;
	?:
	char_b = char_a - char_a;
	double_c = sinh ( double_d ) ;
	double_b = pow ( double_b , double_f ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		if(1)
		{
			double_d = acos ( double_c ) ;
		}
		if(1)
		{
			char_b = char_c;
			double_e = cos ( double_b ) ;
			char controller_e[3];
			scanf("%3s", controller_e);
			if( controller_e >"z0M" )
			{
				double_h = double_g / double_c;
				if(1)
				{
				}
			}
			double_a = double_a / double_f;
			double_c = pow ( double_b , double_i ) ;
		}
		else
		{
			double_a = tanh ( double_f ) ;
		}
	}
	if(1)
	{
		double_d = pow ( double_i , double_g ) ;
	}
	double_b = log ( double_e ) ;
	short_b = bwt_reverse_intvs();

	unsigned_int_a = unsigned_int_b;
	bwt_extend(int_e,long_a,float_a,int_d);

	double_c = tan ( double_c ) ;
	int_d = int_f;
	double_e = ldexp ( double_e , int_d ) ;
	for(int looper_b=0; looper_b<6;looper_b++)
	{
		?:
		?:
		double_g = ldexp ( double_f , int_f ) ;
		for(int looper_c=0; looper_c<2;looper_c++)
		{
			unsigned_int_a = unsigned_int_b;
			if(1)
			{
				double_c = tan ( double_a ) ;
			}
			if(1)
			{
				if(1)
				{
					if(1)
					{
						double_h = sinh ( double_c ) ;
						double_h = pow ( double_i , double_c ) ;
						unsigned_int_b = unsigned_int_b;
					}
				}
			}
			if(1)
			{
				double_h = exp ( double_d ) ;
				double_g = ceil ( double_a ) ;
			}
		}
		if(1)
		{
		}
		double_d = tan ( double_h ) ;
		double_a = fmod ( double_i , double_c ) ;
		double_e = double_f;
	}
	unsigned_int_a = unsigned_int_a;
	if(1)
	{
		char_b = char_c;
	}
	if(1)
	{
		int_c = int_d / int_b;
	}
	return int_e;
}
int bwt_smem1( unsigned int parameter_1,double parameter_2,int parameter_3,float parameter_4,int parameter_5,int parameter_6,int parameter_7,char parameter_8)
{
	int int_a = 0;
	double double_a = 0;
	short short_a = 0;
	int int_b = 0;
	char char_a = 0;
	float float_a = 0;
	float float_b = 0;
	return int_a;
	int_a = bwt_smem1a(double_a,short_a,int_a,short_a,int_a,int_b,char_a,float_a,float_b);

}
unsigned int mem_collect_intv( long parameter_1,unsigned int parameter_2,char parameter_3,int parameter_4,unsigned int parameter_5,double parameter_6)
{
	unsigned int unsigned_int_a = 0;
	float float_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	int int_c = 0;
	int int_d = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_e = 0;
	char char_b = 0;
	int int_f = 0;
	unsigned int unsigned_int_b = 0;
	float float_b = 0;
	short short_a = 0;
	int int_h = 0;
	float float_c = 0;
	double double_f = 0;
	int int_i = 0;
	double double_e = 0;
	long long_a = 0;
	char char_a = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	int int_g = 0;
	unsigned_int_a = unsigned_int_a;
	float_a = float_a - float_a;
	?:
	float_a = float_a;
	int_b = int_a + int_b;
	double_a = double_a / double_a;
	int_b = int_c - int_d;
	double_a = atan2 ( double_a , double_a ) ;
	double_a = atan2 ( double_b , double_c ) ;
	int looper_a = 0;
	while(looper_a < 4)
	{
		looper_a += 1;
		if(1)
		{
			double_d = tanh ( double_a ) ;
			for(int looper_b=0; looper_b<7;looper_b++)
			{
				char controller_b[2];
				scanf("%2s", controller_b);
				if( controller_b >"zt" )
				{
					int_e = int_d / int_b;
				}
			}
		}
		else
		{
			double_a = asin ( double_b ) ;
		}
	}
	double_c = atan2 ( double_a , double_b ) ;
	for(int looper_c=0; looper_c<6;looper_c++)
	{
		unsigned int unsigned_int_a = 0;
		float float_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		int int_c = 0;
		int int_d = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_e = 0;
		char char_b = 0;
		int int_f = 0;
		unsigned int unsigned_int_b = 0;
		float float_b = 0;
		short short_a = 0;
		int int_h = 0;
		float float_c = 0;
		double double_f = 0;
		int int_i = 0;
		double double_e = 0;
		long long_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		int int_g = 0;
		double_d = fmod ( double_b , double_e ) ;
		double_a = double_b / double_b;
		if(1)
		{
		}
		long_a = long_a;
		for(int looper_d=0; looper_d<9;looper_d++)
		{
			if(1)
			{
				double_b = fabs ( double_c ) ;
			}
		}
	}
	if(1)
	{
		unsigned int unsigned_int_a = 0;
		float float_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		int int_c = 0;
		int int_d = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_e = 0;
		char char_b = 0;
		int int_f = 0;
		unsigned int unsigned_int_b = 0;
		float float_b = 0;
		short short_a = 0;
		int int_h = 0;
		float float_c = 0;
		double double_f = 0;
		int int_i = 0;
		double double_e = 0;
		long long_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		int int_g = 0;
		char_a = char_b;
		int looper_e = 0;
		while(looper_e < 6)
		{
			unsigned int unsigned_int_a = 0;
			float float_a = 0;
			int int_a = 0;
			int int_b = 0;
			double double_a = 0;
			int int_c = 0;
			int int_d = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			int int_e = 0;
			char char_b = 0;
			int int_f = 0;
			unsigned int unsigned_int_b = 0;
			float float_b = 0;
			short short_a = 0;
			int int_h = 0;
			float float_c = 0;
			double double_f = 0;
			int int_i = 0;
			double double_e = 0;
			long long_a = 0;
			char char_a = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			int int_g = 0;
			looper_e += 1;
			if(1)
			{
				if(1)
				{
					int_f = bwt_smem1(unsigned_int_b,double_c,int_d,float_b,int_d,int_e,int_d,char_b);

					double_d = cosh ( double_b ) ;
					int_c = bwt_seed_strategy1(short_a,double_a,int_c,int_c,int_f,int_f,int_d,unsigned_int_b);

					unsigned_int_b = unsigned_int_c;
					if(1)
					{
						unsigned int unsigned_int_a = 0;
						float float_a = 0;
						int int_a = 0;
						int int_b = 0;
						double double_a = 0;
						int int_c = 0;
						int int_d = 0;
						double double_b = 0;
						double double_c = 0;
						double double_d = 0;
						int int_e = 0;
						char char_b = 0;
						int int_f = 0;
						unsigned int unsigned_int_b = 0;
						float float_b = 0;
						short short_a = 0;
						int int_h = 0;
						float float_c = 0;
						double double_f = 0;
						int int_i = 0;
						double double_e = 0;
						long long_a = 0;
						char char_a = 0;
						unsigned int unsigned_int_c = 0;
						unsigned int unsigned_int_d = 0;
						unsigned int unsigned_int_e = 0;
						int int_g = 0;
						unsigned_int_e = unsigned_int_d + unsigned_int_c;
					}
				}
				else
				{
					double_b = double_b;
					for(int looper_f=0; looper_f<6;looper_f++)
					{
						unsigned int unsigned_int_a = 0;
						float float_a = 0;
						int int_a = 0;
						int int_b = 0;
						double double_a = 0;
						int int_c = 0;
						int int_d = 0;
						double double_b = 0;
						double double_c = 0;
						double double_d = 0;
						int int_e = 0;
						char char_b = 0;
						int int_f = 0;
						unsigned int unsigned_int_b = 0;
						float float_b = 0;
						short short_a = 0;
						int int_h = 0;
						float float_c = 0;
						double double_f = 0;
						int int_i = 0;
						double double_e = 0;
						long long_a = 0;
						char char_a = 0;
						unsigned int unsigned_int_c = 0;
						unsigned int unsigned_int_d = 0;
						unsigned int unsigned_int_e = 0;
						int int_g = 0;
						int_h = int_g - int_h;
					}
				}
			}
			else
			{
				unsigned_int_c = unsigned_int_b;
			}
		}
	}
	int_e = bwt_smem1a(double_d,short_a,int_h,short_a,int_e,int_f,char_b,float_c,float_a);

	double_f = ldexp ( double_d , int_i ) ;
}
long mem_chain( char parameter_1)
{
	float float_a = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	char char_a = 0;
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	long long_b = 0;
	int int_b = 0;
	int int_c = 0;
	double double_f = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_g = 0;
	long long_c = 0;
	short short_a = 0;
	float float_b = 0;
	double double_h = 0;
	long long_d = 0;
	char char_b = 0;
	double double_i = 0;
	double double_k = 0;
	char char_c = 0;
	double double_m = 0;
	int int_d = 0;
	double double_j = 0;
	short short_b = 0;
	short short_c = 0;
	double double_l = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_f = 0;
	float_a = float_a;
	unsigned_int_a = mem_collect_intv(long_a,unsigned_int_a,char_a,int_a,unsigned_int_a,double_a);

	double_b = ceil ( double_c ) ;
	int_a = int_a;
	double_c = atan2 ( double_d , double_e ) ;
	double_d = cos ( double_d ) ;
	double_e = tanh ( double_b ) ;
	if(1)
	{
		return long_b;
	}
	int_b = int_c;
	double_f = pow ( double_d , double_a ) ;
	?:
	unsigned_int_a = unsigned_int_b / unsigned_int_c;
	double_c = double_d;
	for(int looper_a=0; looper_a<6;looper_a++)
	{
		int_c = int_a;
		if(1)
		{
		}
		double_f = pow ( double_f , double_g ) ;
		if(1)
		{
			int_b = int_c;
		}
		else
		{
			?:
			double_f = cos ( double_a ) ;
		}
	}
	double_g = cos ( double_d ) ;
	for(int looper_b=0; looper_b<4;looper_b++)
	{
		long_a = bwtintv_cache_destroy(long_c);

		short_a = short_a;
		float_a = float_b + float_a;
		double_h = pow ( double_a , double_f ) ;
		double_e = atan ( double_d ) ;
		?:
		double_e = tan ( double_h ) ;
		for(int looper_c=0; looper_c<9;looper_c++)
		{
			float float_a = 0;
			unsigned int unsigned_int_a = 0;
			long long_a = 0;
			char char_a = 0;
			int int_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			long long_b = 0;
			int int_b = 0;
			int int_c = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_g = 0;
			long long_c = 0;
			short short_a = 0;
			float float_b = 0;
			double double_h = 0;
			long long_d = 0;
			char char_b = 0;
			double double_i = 0;
			double double_k = 0;
			char char_c = 0;
			double double_m = 0;
			int int_d = 0;
			double double_j = 0;
			short short_b = 0;
			short short_c = 0;
			double double_l = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			unsigned int unsigned_int_f = 0;
			int_c = int_a;
			long_c = long_c * long_d;
			test_and_merge(short_a,char_a,char_b,long_b,int_c);

			double_d = sinh ( double_h ) ;
			double_a = bwt_sa(long_c,int_b);

			double_e = tanh ( double_a ) ;
			double_i = ldexp ( double_d , int_d ) ;
			double_j = double_e;
			double_h = floor ( double_g ) ;
			double_i = floor ( double_j ) ;
			if(1)
			{
			}
			if(1)
			{
			}
			if(1)
			{
			}
			short_b = short_c;
			if(1)
			{
				double_a = atan ( double_h ) ;
				if(1)
				{
					mem_print_chains(float_b,unsigned_int_a);

					double_i = double_k;
				}
			}
			else
			{
				double_j = exp ( double_g ) ;
			}
			if(1)
			{
				double_h = cos ( double_k ) ;
				double_c = acos ( double_a ) ;
				char_c = asymmetric_flt_seed(int_a,long_b,double_c,double_g);

				double_e = double_h + double_k;
				int_c = bns_intv2rid(long_c,unsigned_int_a,long_d);

				double_a = pow ( double_c , double_e ) ;
				short_a = bwtintv_cache_init();

				double_d = asin ( double_b ) ;
				double_j = floor ( double_g ) ;
				double_g = double_k;
			}
		}
	}
	if(1)
	{
		float float_a = 0;
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		char char_a = 0;
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		long long_b = 0;
		int int_b = 0;
		int int_c = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_g = 0;
		long long_c = 0;
		short short_a = 0;
		float float_b = 0;
		double double_h = 0;
		long long_d = 0;
		char char_b = 0;
		double double_i = 0;
		double double_k = 0;
		char char_c = 0;
		double double_m = 0;
		int int_d = 0;
		double double_j = 0;
		short short_b = 0;
		short short_c = 0;
		double double_l = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		double_l = floor ( double_h ) ;
	}
	double_i = fabs ( double_k ) ;
	double_f = cosh ( double_m ) ;
	for(int looper_d=0; looper_d<5;looper_d++)
	{
		double_k = floor ( double_m ) ;
	}
	if(1)
	{
		float float_a = 0;
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		char char_a = 0;
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		long long_b = 0;
		int int_b = 0;
		int int_c = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_g = 0;
		long long_c = 0;
		short short_a = 0;
		float float_b = 0;
		double double_h = 0;
		long long_d = 0;
		char char_b = 0;
		double double_i = 0;
		double double_k = 0;
		char char_c = 0;
		double double_m = 0;
		int int_d = 0;
		double double_j = 0;
		short short_b = 0;
		short short_c = 0;
		double double_l = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		unsigned int unsigned_int_f = 0;
		unsigned_int_d = unsigned_int_e;
		unsigned_int_d = unsigned_int_f;
	}
	double_c = double_h + double_m;
	return long_d;
}
void bseq_bsconvert( double parameter_1,short parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_d = 0;
	if(1)
	{
	}
	double_a = double_b;
	if(1)
	{
		double_a = fabs ( double_c ) ;
		for(int looper_a=0; looper_a<10;looper_a++)
		{
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				int int_a = 0;
				int int_b = 0;
				double double_d = 0;
				unsigned_int_c = unsigned_int_a / unsigned_int_b;
			}
			else
			{
				double_c = cos ( double_c ) ;
			}
		}
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		int_a = int_b;
		for(int looper_b=0; looper_b<4;looper_b++)
		{
			if(1)
			{
				double_b = sqrt ( double_a ) ;
			}
			else
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				int int_a = 0;
				int int_b = 0;
				double double_d = 0;
				double_d = atan2 ( double_c , double_b ) ;
			}
		}
	}
}
float mem_align1_core( long parameter_1,float parameter_2,double parameter_3,short parameter_4,double parameter_5,float parameter_7,long parameter_8)
{
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	float float_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	short short_a = 0;
	long long_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_c = 0;
	double double_d = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	double double_e = 0;
	short short_b = 0;
	double double_g = 0;
	double double_f = 0;
	if(1)
	{
		double_a = log ( double_b ) ;
	}
	float_a = float_b;
	mem_chain_flt(int_a,unsigned_int_a);

	mem_chain2aln(short_a,long_a,unsigned_int_b,int_b,int_a,unsigned_int_c,float_a,double_c);

	double_a = atan2 ( double_b , double_b ) ;
	double_a = asin ( double_d ) ;
	unsigned_int_b = unsigned_int_b + unsigned_int_b;
	char_c = char_a - char_b;
	double_b = ldexp ( double_d , int_a ) ;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		float float_b = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		short short_a = 0;
		long long_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_c = 0;
		double double_d = 0;
		char char_a = 0;
		char char_b = 0;
		char char_c = 0;
		double double_e = 0;
		short short_b = 0;
		double double_g = 0;
		double double_f = 0;
		mem_flt_chained_seeds(double_d,double_e,long_a,double_e,unsigned_int_c,double_e);

		double_b = sqrt ( double_a ) ;
		double_f = double_c;
		long_a = mem_chain(char_b);

		double_a = fabs ( double_c ) ;
	}
	bseq_bsconvert(double_d,short_b);

	double_d = atan ( double_g ) ;
}
double wzmemmem( char parameter_1,int parameter_2,int parameter_3,char parameter_4)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double_a = exp ( double_b ) ;
	double_c = cos ( double_c ) ;
	double_a = atan2 ( double_d , double_e ) ;
	if(1)
	{
		return double_b;
	}
	double_c = asin ( double_b ) ;
	int looper_a = 0;
	while(looper_a < 9)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		looper_a += 1;
		if(1)
		{
			return double_f;
		}
		double_d = log10 ( double_b ) ;
		double_b = cosh ( double_g ) ;
	}
	return double_d;
}
void read_identify_adaptor( long parameter_1,short parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_g = 0;
	double double_h = 0;
	char char_a = 0;
	int int_a = 0;
	int int_b = 0;
	char char_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	if(1)
	{
		double_a = log10 ( double_b ) ;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_g = 0;
		double double_h = 0;
		char char_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double_c = double_d;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_g = 0;
			double double_h = 0;
			char char_a = 0;
			int int_a = 0;
			int int_b = 0;
			char char_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double_e = atan2 ( double_d , double_c ) ;
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			double double_g = 0;
			double double_h = 0;
			char char_a = 0;
			int int_a = 0;
			int int_b = 0;
			char char_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double_b = tan ( double_f ) ;
			for(int looper_a=0; looper_a<1;looper_a++)
			{
				if(1)
				{
				}
			}
			double_h = double_g + double_a;
		}
	}
	double_h = log10 ( double_g ) ;
	double_g = wzmemmem(char_a,int_a,int_b,char_b);

}
char bis_worker1(int parameter_2,int parameter_3)
{
	float float_a = 0;
	long long_a = 0;
	float float_b = 0;
	double double_a = 0;
	short short_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	double double_d = 0;
	short short_b = 0;
	short short_c = 0;
	double double_e = 0;
	char char_c = 0;
	unsigned int unsigned_int_b = 0;
	short short_d = 0;
	int int_c = 0;
	long long_e = 0;
	double double_f = 0;
	long long_b = 0;
	long long_c = 0;
	long long_d = 0;
	double double_g = 0;
	double double_h = 0;
	float float_c = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	float_a = mem_align1_core(long_a,float_b,double_a,short_a,double_b,float_b,long_a);

	double_b = cos ( double_a ) ;
	char_b = char_a * char_b;
	int_a = int_b;
	if(1)
	{
		if(1)
		{
			double_a = double_a * double_b;
		}
		double_b = exp ( double_c ) ;
		char_b = char_a * char_b;
		unsigned_int_a = unsigned_int_a;
		unsigned_int_a = unsigned_int_a;
		if(1)
		{
			double_d = fabs ( double_b ) ;
		}
		if(1)
		{
			short_c = short_b - short_c;
		}
		double_e = cosh ( double_d ) ;
	}
	else
	{
		float float_a = 0;
		long long_a = 0;
		float float_b = 0;
		double double_a = 0;
		short short_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		double double_d = 0;
		short short_b = 0;
		short short_c = 0;
		double double_e = 0;
		char char_c = 0;
		unsigned int unsigned_int_b = 0;
		short short_d = 0;
		int int_c = 0;
		long long_e = 0;
		double double_f = 0;
		long long_b = 0;
		long long_c = 0;
		long long_d = 0;
		double double_g = 0;
		double double_h = 0;
		float float_c = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		int_a = int_a * int_a;
		check_paired_read_names(long_a,char_c);

		double_d = fmod ( double_f , double_f ) ;
		double_b = pow ( double_d , double_e ) ;
		if(1)
		{
			double_f = ceil ( double_c ) ;
		}
		double_a = fmod ( double_b , double_f ) ;
		short_c = short_b - short_c;
		long_d = long_b - long_c;
		mem_merge_regions(unsigned_int_b,short_d,int_c,short_c,short_c);

		long_d = long_c * long_d;
		if(1)
		{
			float float_a = 0;
			long long_a = 0;
			float float_b = 0;
			double double_a = 0;
			short short_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			double double_d = 0;
			short short_b = 0;
			short short_c = 0;
			double double_e = 0;
			char char_c = 0;
			unsigned int unsigned_int_b = 0;
			short short_d = 0;
			int int_c = 0;
			long long_e = 0;
			double double_f = 0;
			long long_b = 0;
			long long_c = 0;
			long long_d = 0;
			double double_g = 0;
			double double_h = 0;
			float float_c = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned_int_d = unsigned_int_a * unsigned_int_c;
		}
		long_e = long_c / long_a;
		if(1)
		{
			int_a = int_a;
		}
		double_e = cos ( double_f ) ;
		double_e = ceil ( double_a ) ;
		double_g = tanh ( double_h ) ;
		read_identify_adaptor(long_e,short_b,int_c);

		float_b = float_b * float_c;
		if(1)
		{
			float_a = float_c / float_a;
		}
		double_c = acos ( double_g ) ;
	}
}
short bwtintv_cache_init()
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	unsigned_int_b = unsigned_int_a - unsigned_int_a;
	double_a = sqrt ( double_b ) ;
	unsigned_int_a = unsigned_int_c / unsigned_int_c;
	double_c = exp ( double_d ) ;
	return short_a;
}
double cputime()
{
	double double_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_b = 0;
	double_a = sqrt ( double_a ) ;
	long_b = long_a - long_a;
	return double_b;
}
void mem_process_seqs( int parameter_1,unsigned int parameter_2,char parameter_3,char parameter_4,unsigned int parameter_5,int parameter_6,int parameter_7,long parameter_8)
{
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	short short_a = 0;
	int int_a = 0;
	char char_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_c = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	char char_b = 0;
	int int_d = 0;
	float float_a = 0;
	float float_b = 0;
	unsigned int unsigned_int_b = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	char char_c = 0;
	long_a = long_a;
	double_b = double_a * double_b;
	short_a = bwtintv_cache_init();

	long_a = bwtintv_cache_destroy(long_a);

	int_a = int_a + int_a;
	char_a = char_a;
	int_b = int_a;
	double_c = ceil ( double_c ) ;
	double_c = ceil ( double_d ) ;
	double_c = realtime();

	int_a = int_c;
	unsigned_int_a = unsigned_int_a;
	int_c = int_b;
	double_e = acos ( double_c ) ;
	double_c = mem_pestat(char_b);

	double_b = pow ( double_c , double_b ) ;
	int_c = int_d * int_c;
	char_a = bis_worker1(int_a,int_c);

	float_b = float_a - float_a;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double_b = double_b * double_e;
	}
	?:
	int_c = bis_worker2(int_c,int_b);

	unsigned_int_a = unsigned_int_b;
	for(int looper_b=0; looper_b<10;looper_b++)
	{
		long long_a = 0;
		double double_a = 0;
		double double_b = 0;
		short short_a = 0;
		int int_a = 0;
		char char_a = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_c = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		char char_b = 0;
		int int_d = 0;
		float float_a = 0;
		float float_b = 0;
		unsigned int unsigned_int_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		char char_c = 0;
		double_e = cputime();

		char_c = char_a / char_b;
	}
	double_e = exp ( double_a ) ;
	if(1)
	{
		if(1)
		{
			double_e = tan ( double_c ) ;
		}
		else
		{
			double_f = acos ( double_f ) ;
		}
	}
	?:
	double_g = double_a;
	double_h = pow ( double_h , double_c ) ;
	if(1)
	{
		double_b = atan2 ( double_f , double_h ) ;
	}
}
void bseq_classify( int parameter_1,char parameter_2,int parameter_3,float parameter_4)
{
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	short short_a = 0;
	short short_b = 0;
	long_b = long_a * long_a;
	double_a = atan ( double_b ) ;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		char controller_a[1];
		scanf("%1s", controller_a);
		if( controller_a >"w" )
		{
			if(1)
			{
				long long_a = 0;
				long long_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				int int_a = 0;
				int int_b = 0;
				double double_d = 0;
				double double_e = 0;
				unsigned int unsigned_int_a = 0;
				short short_a = 0;
				short short_b = 0;
				double_a = sinh ( double_a ) ;
				int_a = int_a - int_b;
				double_a = cos ( double_c ) ;
			}
			else
			{
				long long_a = 0;
				long long_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				int int_a = 0;
				int int_b = 0;
				double double_d = 0;
				double double_e = 0;
				unsigned int unsigned_int_a = 0;
				short short_a = 0;
				short short_b = 0;
				double_d = acos ( double_b ) ;
			}
		}
		else
		{
			long long_a = 0;
			long long_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_d = 0;
			double double_e = 0;
			unsigned int unsigned_int_a = 0;
			short short_a = 0;
			short short_b = 0;
			double_e = log10 ( double_b ) ;
		}
	}
	char controller_c[1];
	scanf("%1s", controller_c);
	if( controller_c <"E" )
	{
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		short short_a = 0;
		short short_b = 0;
		unsigned_int_a = unsigned_int_b;
	}
	unsigned_int_b = unsigned_int_c;
	double_c = asin ( double_c ) ;
	char controller_d[2];
	scanf("%2s", controller_d);
	if( controller_d >"xA" )
	{
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		short short_a = 0;
		short short_b = 0;
		short_b = short_a / short_a;
	}
}
void bis_kseq2bseq1( float parameter_1,long parameter_2)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	int int_d = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	char char_a = 0;
	unsigned_int_a = unsigned_int_b;
	?:
	int_b = int_a / int_b;
	int_d = int_a + int_c;
	?:
	double_a = tan ( double_b ) ;
	double_a = acos ( double_c ) ;
	double_b = log ( double_c ) ;
	double_b = tanh ( double_a ) ;
	bseq1_code_nt4(char_a);

	double_b = fmod ( double_c , double_b ) ;
}
long trim_readno( double parameter_1)
{
	if(1)
	{
		double double_a = 0;
		double_a = sqrt ( double_a ) ;
	}
}
short bis_bseq_read( int parameter_1,int parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	float float_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	long long_a = 0;
	float float_b = 0;
	int int_a = 0;
	int int_b = 0;
	short short_a = 0;
	double double_f = 0;
	char char_a = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	double double_h = 0;
	char char_b = 0;
	char char_c = 0;
	double_a = double_b;
	double_a = log10 ( double_c ) ;
	double_c = double_d + double_e;
	float_a = float_a - float_a;
	unsigned_int_a = unsigned_int_a * unsigned_int_b;
	int looper_a = 0;
	while(looper_a < 1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		float float_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		long long_a = 0;
		float float_b = 0;
		int int_a = 0;
		int int_b = 0;
		short short_a = 0;
		double double_f = 0;
		char char_a = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		double double_h = 0;
		char char_b = 0;
		char char_c = 0;
		looper_a += 1;
		if(1)
		{
			float_a = float_a / float_a;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			float float_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			long long_a = 0;
			float float_b = 0;
			int int_a = 0;
			int int_b = 0;
			short short_a = 0;
			double double_f = 0;
			char char_a = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			double double_h = 0;
			char char_b = 0;
			char char_c = 0;
			?:
			long_a = trim_readno(double_c);

			double_f = atan ( double_a ) ;
			char_a = char_b;
		}
		double_e = atan2 ( double_c , double_g ) ;
		unsigned_int_c = unsigned_int_a;
		double_f = atan ( double_h ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			float float_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			long long_a = 0;
			float float_b = 0;
			int int_a = 0;
			int int_b = 0;
			short short_a = 0;
			double double_f = 0;
			char char_a = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			double double_h = 0;
			char char_b = 0;
			char char_c = 0;
			bis_kseq2bseq1(float_b,long_a);

			double_g = double_g + double_d;
			char_c = char_a;
			double_g = floor ( double_b ) ;
		}
		if(1)
		{
		}
	}
	if(1)
	{
		char controller_f[3];
		scanf("%3s", controller_f);
		if( controller_f >"5RD" )
		{
			double_c = exp ( double_e ) ;
		}
	}
	int_a = int_a + int_b;
	return short_a;
}
void bseq1_code_nt4( char parameter_1)
{
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_a = 0;
	short_c = short_a * short_b;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_a = 0;
		double_a = asin ( double_a ) ;
	}
}
char bis_create_bseq1( char parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	int int_c = 0;
	int int_d = 0;
	double double_c = 0;
	char char_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_d = 0;
	double double_e = 0;
	?:
	unsigned_int_a = unsigned_int_b;
	double_a = asin ( double_a ) ;
	double_a = atan ( double_b ) ;
	int_b = int_a - int_b;
	bseq1_code_nt4(char_a);

	int_d = int_c / int_b;
	double_a = tanh ( double_c ) ;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a <"Pfz0z" )
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		int int_c = 0;
		int int_d = 0;
		double double_c = 0;
		char char_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned_int_a = unsigned_int_b - unsigned_int_c;
		double_d = pow ( double_e , double_d ) ;
		double_b = log10 ( double_d ) ;
		double_a = cosh ( double_c ) ;
		double_b = atan ( double_c ) ;
	}
	return char_b;
}
float process(int parameter_2)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	char char_a = 0;
	float float_a = 0;
	int int_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	int int_b = 0;
	unsigned int unsigned_int_c = 0;
	char char_b = 0;
	long long_a = 0;
	unsigned int unsigned_int_e = 0;
	char char_c = 0;
	short short_d = 0;
	int int_c = 0;
	char char_e = 0;
	float float_b = 0;
	int int_e = 0;
	char char_g = 0;
	char char_h = 0;
	float float_c = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_g = 0;
	long long_b = 0;
	char char_d = 0;
	unsigned int unsigned_int_f = 0;
	int int_d = 0;
	char char_f = 0;
	int int_f = 0;
	double double_h = 0;
	short short_e = 0;
	double_a = ceil ( double_a ) ;
	unsigned_int_b = unsigned_int_a - unsigned_int_a;
	double_b = pow ( double_a , double_b ) ;
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		char char_a = 0;
		float float_a = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		char char_b = 0;
		long long_a = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		short short_d = 0;
		int int_c = 0;
		char char_e = 0;
		float float_b = 0;
		int int_e = 0;
		char char_g = 0;
		char char_h = 0;
		float float_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_g = 0;
		long long_b = 0;
		char char_d = 0;
		unsigned int unsigned_int_f = 0;
		int int_d = 0;
		char char_f = 0;
		int int_f = 0;
		double double_h = 0;
		short short_e = 0;
		double_a = sqrt ( double_a ) ;
		char_a = char_a;
		if(1)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_b = 0;
			char char_a = 0;
			float float_a = 0;
			int int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			int int_b = 0;
			unsigned int unsigned_int_c = 0;
			char char_b = 0;
			long long_a = 0;
			unsigned int unsigned_int_e = 0;
			char char_c = 0;
			short short_d = 0;
			int int_c = 0;
			char char_e = 0;
			float float_b = 0;
			int int_e = 0;
			char char_g = 0;
			char char_h = 0;
			float float_c = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_g = 0;
			long long_b = 0;
			char char_d = 0;
			unsigned int unsigned_int_f = 0;
			int int_d = 0;
			char char_f = 0;
			int int_f = 0;
			double double_h = 0;
			short short_e = 0;
			if(1)
			{
				return float_a;
			}
			short_a = short_a * short_b;
			if(1)
			{
				double_b = ldexp ( double_b , int_a ) ;
			}
			double_a = ldexp ( double_a , int_a ) ;
		}
		else
		{
			double_b = floor ( double_a ) ;
			if(1)
			{
				double_c = cos ( double_a ) ;
				return float_a;
			}
			if(1)
			{
				for(int looper_a=0; looper_a<4;looper_a++)
				{
					double_a = asin ( double_d ) ;
					double_a = tanh ( double_a ) ;
				}
			}
			for(int looper_b=0; looper_b<9;looper_b++)
			{
				double_d = floor ( double_e ) ;
				double_c = pow ( double_a , double_f ) ;
			}
			if(1)
			{
				double double_a = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_b = 0;
				char char_a = 0;
				float float_a = 0;
				int int_a = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				int int_b = 0;
				unsigned int unsigned_int_c = 0;
				char char_b = 0;
				long long_a = 0;
				unsigned int unsigned_int_e = 0;
				char char_c = 0;
				short short_d = 0;
				int int_c = 0;
				char char_e = 0;
				float float_b = 0;
				int int_e = 0;
				char char_g = 0;
				char char_h = 0;
				float float_c = 0;
				short short_a = 0;
				short short_b = 0;
				short short_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_g = 0;
				long long_b = 0;
				char char_d = 0;
				unsigned int unsigned_int_f = 0;
				int int_d = 0;
				char char_f = 0;
				int int_f = 0;
				double double_h = 0;
				short short_e = 0;
				mem_process_seqs(int_b,unsigned_int_c,char_b,char_a,unsigned_int_b,int_b,int_b,long_a);

				short_a = short_c + short_c;
			}
		}
		return float_a;
	}
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		char char_a = 0;
		float float_a = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		char char_b = 0;
		long long_a = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		short short_d = 0;
		int int_c = 0;
		char char_e = 0;
		float float_b = 0;
		int int_e = 0;
		char char_g = 0;
		char char_h = 0;
		float float_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_g = 0;
		long long_b = 0;
		char char_d = 0;
		unsigned int unsigned_int_f = 0;
		int int_d = 0;
		char char_f = 0;
		int int_f = 0;
		double double_h = 0;
		short short_e = 0;
		unsigned_int_d = unsigned_int_b - unsigned_int_d;
		char_a = char_b * char_a;
		if(1)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_b = 0;
			char char_a = 0;
			float float_a = 0;
			int int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			int int_b = 0;
			unsigned int unsigned_int_c = 0;
			char char_b = 0;
			long long_a = 0;
			unsigned int unsigned_int_e = 0;
			char char_c = 0;
			short short_d = 0;
			int int_c = 0;
			char char_e = 0;
			float float_b = 0;
			int int_e = 0;
			char char_g = 0;
			char char_h = 0;
			float float_c = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_g = 0;
			long long_b = 0;
			char char_d = 0;
			unsigned int unsigned_int_f = 0;
			int int_d = 0;
			char char_f = 0;
			int int_f = 0;
			double double_h = 0;
			short short_e = 0;
			unsigned_int_e = unsigned_int_d * unsigned_int_c;
			double_f = double_g;
			double_d = double_g;
			int_b = err_fputs(char_c,unsigned_int_e);

			double_a = double_g * double_a;
			if(1)
			{
				double double_a = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_b = 0;
				char char_a = 0;
				float float_a = 0;
				int int_a = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				int int_b = 0;
				unsigned int unsigned_int_c = 0;
				char char_b = 0;
				long long_a = 0;
				unsigned int unsigned_int_e = 0;
				char char_c = 0;
				short short_d = 0;
				int int_c = 0;
				char char_e = 0;
				float float_b = 0;
				int int_e = 0;
				char char_g = 0;
				char char_h = 0;
				float float_c = 0;
				short short_a = 0;
				short short_b = 0;
				short short_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_g = 0;
				long long_b = 0;
				char char_d = 0;
				unsigned int unsigned_int_f = 0;
				int int_d = 0;
				char char_f = 0;
				int int_f = 0;
				double double_h = 0;
				short short_e = 0;
				short_d = bis_bseq_read(int_c,int_b);

				char_d = char_a * char_d;
				bseq_classify(int_b,char_e,int_c,float_b);

				unsigned_int_f = unsigned_int_d + unsigned_int_d;
				for(int looper_c=0; looper_c<6;looper_c++)
				{
					double_f = fmod ( double_b , double_e ) ;
				}
			}
			if(1)
			{
				double double_a = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_b = 0;
				char char_a = 0;
				float float_a = 0;
				int int_a = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				int int_b = 0;
				unsigned int unsigned_int_c = 0;
				char char_b = 0;
				long long_a = 0;
				unsigned int unsigned_int_e = 0;
				char char_c = 0;
				short short_d = 0;
				int int_c = 0;
				char char_e = 0;
				float float_b = 0;
				int int_e = 0;
				char char_g = 0;
				char char_h = 0;
				float float_c = 0;
				short short_a = 0;
				short short_b = 0;
				short short_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_g = 0;
				long long_b = 0;
				char char_d = 0;
				unsigned int unsigned_int_f = 0;
				int int_d = 0;
				char char_f = 0;
				int int_f = 0;
				double double_h = 0;
				short short_e = 0;
				int_d = int_e;
				char_c = char_f * char_a;
				for(int looper_d=0; looper_d<2;looper_d++)
				{
					double_c = fabs ( double_c ) ;
				}
			}
			long_b = long_a + long_a;
			double_a = double_e;
		}
		else
		{
			double_g = tanh ( double_a ) ;
		}
		double_g = floor ( double_f ) ;
		return float_a;
	}
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		char char_a = 0;
		float float_a = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_b = 0;
		unsigned int unsigned_int_c = 0;
		char char_b = 0;
		long long_a = 0;
		unsigned int unsigned_int_e = 0;
		char char_c = 0;
		short short_d = 0;
		int int_c = 0;
		char char_e = 0;
		float float_b = 0;
		int int_e = 0;
		char char_g = 0;
		char char_h = 0;
		float float_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_g = 0;
		long long_b = 0;
		char char_d = 0;
		unsigned int unsigned_int_f = 0;
		int int_d = 0;
		char char_f = 0;
		int int_f = 0;
		double double_h = 0;
		short short_e = 0;
		for(int looper_e=0; looper_e<3;looper_e++)
		{
			double double_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_b = 0;
			char char_a = 0;
			float float_a = 0;
			int int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			int int_b = 0;
			unsigned int unsigned_int_c = 0;
			char char_b = 0;
			long long_a = 0;
			unsigned int unsigned_int_e = 0;
			char char_c = 0;
			short short_d = 0;
			int int_c = 0;
			char char_e = 0;
			float float_b = 0;
			int int_e = 0;
			char char_g = 0;
			char char_h = 0;
			float float_c = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_g = 0;
			long long_b = 0;
			char char_d = 0;
			unsigned int unsigned_int_f = 0;
			int int_d = 0;
			char char_f = 0;
			int int_f = 0;
			double double_h = 0;
			short short_e = 0;
			if(1)
			{
				double_b = tan ( double_a ) ;
			}
			double_h = floor ( double_a ) ;
			double_e = cosh ( double_a ) ;
			char_c = bis_create_bseq1(char_g,char_h,int_a);

			int_e = int_f;
			double_b = ceil ( double_d ) ;
			short_e = short_e;
			double_a = atan2 ( double_e , double_f ) ;
			double_b = cos ( double_a ) ;
		}
		int_f = int_c * int_b;
		double_e = ceil ( double_d ) ;
		return float_a;
	}
	return float_c;
}
void kt_pipeline( int parameter_1,int parameter_3,int parameter_6)
int err_printf( float parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	char char_a = 0;
	char char_b = 0;
	double double_c = 0;
	int int_a = 0;
	double_a = log10 ( double_a ) ;
	double_a = atan ( double_a ) ;
	double_a = ceil ( double_b ) ;
	_err_fatal_simple(double_b,long_a);

	char_b = char_a - char_a;
	double_c = double_a;
	double_c = log ( double_a ) ;
	if(1)
	{
		double_b = asin ( double_a ) ;
	}
	return int_a;
}
void bwa_print_sam_hdr( float parameter_1,unsigned int parameter_2)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	float float_a = 0;
	char char_a = 0;
	unsigned int unsigned_int_c = 0;
	int int_b = 0;
	double double_e = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	double_a = log10 ( double_a ) ;
	unsigned_int_a = unsigned_int_b;
	if(1)
	{
		double_b = exp ( double_a ) ;
		int looper_a = 0;
		while(looper_a < 1)
		{
			looper_a += 1;
			if(1)
			{
				double_c = fabs ( double_c ) ;
			}
			double_a = sinh ( double_d ) ;
		}
	}
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		float float_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_c = 0;
		int int_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		unsigned_int_b = unsigned_int_a;
		for(int looper_b=0; looper_b<6;looper_b++)
		{
			int_a = err_printf(float_a,char_a);

			double_c = exp ( double_d ) ;
		}
		int_b = int_a;
		for(int looper_c=0; looper_c<1;looper_c++)
		{
			unsigned_int_a = unsigned_int_c;
		}
		double_a = double_b;
	}
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		float float_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_c = 0;
		int int_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		double_e = acos ( double_b ) ;
	}
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		float float_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_c = 0;
		int int_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		unsigned_int_b = unsigned_int_a * unsigned_int_d;
	}
	if(1)
	{
		double double_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		float float_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_c = 0;
		int int_b = 0;
		double double_e = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		unsigned_int_e = unsigned_int_c - unsigned_int_c;
	}
}
unsigned int kopen( float parameter_1,int parameter_2)
char infer_alt_chromosomes( double parameter_1)
{
	double double_a = 0;
	char char_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	double double_d = 0;
	double double_e = 0;
	char char_c = 0;
	double double_c = 0;
	char char_b = 0;
	short short_a = 0;
	int int_b = 0;
	double_a = double_a - double_a;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		if(1)
		{
		}
	}
	if(1)
	{
		return char_a;
	}
	double_b = atan ( double_a ) ;
	unsigned_int_a = unsigned_int_a * unsigned_int_a;
	for(int looper_b=0; looper_b<4;looper_b++)
	{
		if(1)
		{
			double double_a = 0;
			char char_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			double double_d = 0;
			double double_e = 0;
			char char_c = 0;
			double double_c = 0;
			char char_b = 0;
			short short_a = 0;
			int int_b = 0;
			if(1)
			{
				if(1)
				{
					double_a = cosh ( double_b ) ;
				}
				if(1)
				{
					double_b = tan ( double_b ) ;
				}
				if(1)
				{
					double_b = asin ( double_a ) ;
				}
				if(1)
				{
					double_c = sqrt ( double_c ) ;
					if(1)
					{
						double double_a = 0;
						char char_a = 0;
						double double_b = 0;
						unsigned int unsigned_int_a = 0;
						int int_a = 0;
						double double_d = 0;
						double double_e = 0;
						char char_c = 0;
						double double_c = 0;
						char char_b = 0;
						short short_a = 0;
						int int_b = 0;
						char_b = char_a;
					}
				}
			}
			if(1)
			{
				double double_a = 0;
				char char_a = 0;
				double double_b = 0;
				unsigned int unsigned_int_a = 0;
				int int_a = 0;
				double double_d = 0;
				double double_e = 0;
				char char_c = 0;
				double double_c = 0;
				char char_b = 0;
				short short_a = 0;
				int int_b = 0;
				short_a = short_a;
				if(1)
				{
					double_c = ldexp ( double_a , int_a ) ;
				}
			}
		}
	}
	double_d = tan ( double_b ) ;
	for(int looper_c=0; looper_c<4;looper_c++)
	{
		if(1)
		{
			double_d = atan2 ( double_b , double_e ) ;
		}
	}
	if(1)
	{
		return char_c;
	}
	for(int looper_d=0; looper_d<4;looper_d++)
	{
		char controller_n[3];
		scanf("%3s", controller_n);
		if( controller_n <"fCU" )
		{
			double_e = exp ( double_d ) ;
			if(1)
			{
				double double_a = 0;
				char char_a = 0;
				double double_b = 0;
				unsigned int unsigned_int_a = 0;
				int int_a = 0;
				double double_d = 0;
				double double_e = 0;
				char char_c = 0;
				double double_c = 0;
				char char_b = 0;
				short short_a = 0;
				int int_b = 0;
				int_b = int_a;
			}
		}
	}
}
float bns_restore_core( short parameter_1,int parameter_2,long parameter_3)
{
	short short_a = 0;
	short short_b = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	short short_c = 0;
	double double_d = 0;
	double double_e = 0;
	int int_a = 0;
	int int_b = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	short short_f = 0;
	char char_a = 0;
	double double_i = 0;
	int int_c = 0;
	char char_b = 0;
	int int_d = 0;
	double double_j = 0;
	float float_a = 0;
	short short_d = 0;
	short short_e = 0;
	char char_c = 0;
	char char_d = 0;
	short_b = short_a / short_b;
	err_fatal(unsigned_int_a,unsigned_int_a,long_a);

	unsigned_int_a = unsigned_int_a;
	double_a = atan ( double_a ) ;
	double_a = sinh ( double_a ) ;
	double_c = double_b + double_b;
	double_b = pow ( double_c , double_a ) ;
	double_c = cosh ( double_a ) ;
	double_c = floor ( double_b ) ;
	short_b = short_a * short_c;
	double_b = tanh ( double_a ) ;
	if(1)
	{
		short_c = short_a;
	}
	double_d = asin ( double_e ) ;
	int_b = int_a * int_a;
	for(int looper_a=0; looper_a<3;looper_a++)
	{
		short short_a = 0;
		short short_b = 0;
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		short short_c = 0;
		double double_d = 0;
		double double_e = 0;
		int int_a = 0;
		int int_b = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		short short_f = 0;
		char char_a = 0;
		double double_i = 0;
		int int_c = 0;
		char char_b = 0;
		int int_d = 0;
		double double_j = 0;
		float float_a = 0;
		short short_d = 0;
		short short_e = 0;
		char char_c = 0;
		char char_d = 0;
		short_d = short_e;
		double_e = double_c;
		short_e = short_d + short_a;
		double_a = double_b + double_c;
		if(1)
		{
			int_b = err_fclose();

			double_e = log10 ( double_a ) ;
		}
		double_f = sqrt ( double_a ) ;
		int looper_b = 0;
		while(looper_b < 4)
		{
			looper_b += 1;
			double_e = asin ( double_d ) ;
		}
		int looper_c = 0;
		while(looper_c < 8)
		{
			looper_c += 1;
			int_b = int_b + int_a;
		}
		if(1)
		{
			int_a = int_b * int_a;
			double_c = cosh ( double_g ) ;
		}
		double_h = log10 ( double_g ) ;
		if(1)
		{
			double_b = log ( double_b ) ;
		}
		else
		{
			double_d = acos ( double_b ) ;
		}
		double_h = atan2 ( double_c , double_a ) ;
		if(1)
		{
			double_d = sinh ( double_e ) ;
		}
		double_b = tanh ( double_e ) ;
	}
	double_f = tanh ( double_f ) ;
	double_h = double_e * double_d;
	short_f = short_f / short_c;
	char_a = char_a;
	double_i = ceil ( double_h ) ;
	if(1)
	{
		double_d = double_h;
	}
	double_h = ldexp ( double_d , int_b ) ;
	int_c = int_a;
	?:
	char_a = char_b;
	for(int looper_d=0; looper_d<5;looper_d++)
	{
		int_c = int_a;
		double_b = pow ( double_b , double_a ) ;
		if(1)
		{
			short short_a = 0;
			short short_b = 0;
			unsigned int unsigned_int_a = 0;
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			short short_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_a = 0;
			int int_b = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			short short_f = 0;
			char char_a = 0;
			double double_i = 0;
			int int_c = 0;
			char char_b = 0;
			int int_d = 0;
			double double_j = 0;
			float float_a = 0;
			short short_d = 0;
			short short_e = 0;
			char char_c = 0;
			char char_d = 0;
			char_d = char_c * char_b;
		}
		double_b = double_g * double_e;
		int_d = int_b / int_c;
	}
	double_c = floor ( double_j ) ;
	int_d = int_c;
	return float_a;
	if(1)
	{
		?:
		double_g = log ( double_b ) ;
	}
	double_h = double_h * double_e;
}
void bns_restore()
{
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	int int_b = 0;
	char char_a = 0;
	double double_c = 0;
	float float_c = 0;
	short short_a = 0;
	long long_a = 0;
	float float_a = 0;
	float float_b = 0;
	double double_d = 0;
	double double_f = 0;
	double double_g = 0;
	char char_b = 0;
	int int_c = 0;
	int int_d = 0;
	double double_e = 0;
	int int_e = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_f = 0;
	int_a = int_a * int_a;
	double_a = fmod ( double_a , double_a ) ;
	double_a = log10 ( double_a ) ;
	double_b = ceil ( double_b ) ;
	int_a = int_a / int_b;
	char_a = char_a / char_a;
	double_b = atan ( double_c ) ;
	if(1)
	{
	}
	if(1)
	{
		int int_a = 0;
		double double_a = 0;
		double double_b = 0;
		int int_b = 0;
		char char_a = 0;
		double double_c = 0;
		float float_c = 0;
		short short_a = 0;
		long long_a = 0;
		float float_a = 0;
		float float_b = 0;
		double double_d = 0;
		double double_f = 0;
		double double_g = 0;
		char char_b = 0;
		int int_c = 0;
		int int_d = 0;
		double double_e = 0;
		int int_e = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_f = 0;
		double_c = fmod ( double_b , double_a ) ;
		float_a = float_b;
		int_a = int_b;
		double_a = atan2 ( double_d , double_d ) ;
		double_b = tan ( double_b ) ;
		for(int looper_a=0; looper_a<7;looper_a++)
		{
			int int_a = 0;
			double double_a = 0;
			double double_b = 0;
			int int_b = 0;
			char char_a = 0;
			double double_c = 0;
			float float_c = 0;
			short short_a = 0;
			long long_a = 0;
			float float_a = 0;
			float float_b = 0;
			double double_d = 0;
			double double_f = 0;
			double double_g = 0;
			char char_b = 0;
			int int_c = 0;
			int int_d = 0;
			double double_e = 0;
			int int_e = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_f = 0;
			int_d = int_c * int_a;
			double_b = tanh ( double_e ) ;
		}
		double_f = cos ( double_g ) ;
		int looper_b = 0;
		while(looper_b < 10)
		{
			looper_b += 1;
			if(1)
			{
				int int_a = 0;
				double double_a = 0;
				double double_b = 0;
				int int_b = 0;
				char char_a = 0;
				double double_c = 0;
				float float_c = 0;
				short short_a = 0;
				long long_a = 0;
				float float_a = 0;
				float float_b = 0;
				double double_d = 0;
				double double_f = 0;
				double double_g = 0;
				char char_b = 0;
				int int_c = 0;
				int int_d = 0;
				double double_e = 0;
				int int_e = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_f = 0;
				float_c = bns_restore_core(short_a,int_a,long_a);

				double_c = log ( double_c ) ;
				char controller_d[4];
				scanf("%4s", controller_d);
				if( controller_d <"[q+2" )
				{
					int_e = int_b + int_e;
					char controller_e[4];
					scanf("%4s", controller_e);
					if( controller_e >"QHA." )
					{
						int int_a = 0;
						double double_a = 0;
						double double_b = 0;
						int int_b = 0;
						char char_a = 0;
						double double_c = 0;
						float float_c = 0;
						short short_a = 0;
						long long_a = 0;
						float float_a = 0;
						float float_b = 0;
						double double_d = 0;
						double double_f = 0;
						double double_g = 0;
						char char_b = 0;
						int int_c = 0;
						int int_d = 0;
						double double_e = 0;
						int int_e = 0;
						unsigned int unsigned_int_a = 0;
						unsigned int unsigned_int_b = 0;
						int int_f = 0;
						unsigned_int_a = unsigned_int_a / unsigned_int_b;
					}
				}
				int looper_c = 0;
				while(looper_c < 4)
				{
					int int_a = 0;
					double double_a = 0;
					double double_b = 0;
					int int_b = 0;
					char char_a = 0;
					double double_c = 0;
					float float_c = 0;
					short short_a = 0;
					long long_a = 0;
					float float_a = 0;
					float float_b = 0;
					double double_d = 0;
					double double_f = 0;
					double double_g = 0;
					char char_b = 0;
					int int_c = 0;
					int int_d = 0;
					double double_e = 0;
					int int_e = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					int int_f = 0;
					looper_c += 1;
					int_e = int_f;
				}
				double_c = pow ( double_g , double_d ) ;
			}
			else
			{
				double_c = ceil ( double_a ) ;
			}
		}
		char_b = char_b;
		float_b = float_c - float_c;
	}
}
void bwt_restore_sa( unsigned int parameter_1,int parameter_2)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_b = 0;
	float float_a = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	short short_a = 0;
	short short_b = 0;
	double double_g = 0;
	double double_h = 0;
	unsigned_int_a = unsigned_int_b;
	double_a = acos ( double_a ) ;
	long_b = long_a * long_b;
	double_a = fread_fix(double_b,float_a);

	int_a = err_fclose();

	double_b = ldexp ( double_a , int_b ) ;
	double_a = sinh ( double_b ) ;
	unsigned_int_c = unsigned_int_d;
	double_b = double_a;
	double_c = err_fread_noeof(double_b,double_a,unsigned_int_a);

	double_a = fmod ( double_d , double_d ) ;
	double_a = log10 ( double_c ) ;
	double_e = cos ( double_f ) ;
	short_b = short_a * short_b;
	double_e = fabs ( double_a ) ;
	double_g = ceil ( double_f ) ;
	double_f = tan ( double_h ) ;
	double_e = sqrt ( double_g ) ;
}
void bwt_restore_bwt2( int parameter_1,char parameter_2)
{
	double double_a = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	int int_b = 0;
	double double_b = 0;
	unsigned int unsigned_int_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	float float_a = 0;
	float float_b = 0;
	float float_c = 0;
	short short_a = 0;
	double double_f = 0;
	double double_g = 0;
	long long_b = 0;
	double_a = ceil ( double_a ) ;
	int_a = err_fseek(unsigned_int_a,long_a,int_b);

	double_a = cos ( double_b ) ;
	unsigned_int_b = unsigned_int_b;
	int_b = err_fclose();

	double_b = acos ( double_c ) ;
	double_c = ldexp ( double_a , int_b ) ;
	double_d = sqrt ( double_c ) ;
	long_a = long_a * long_a;
	double_b = fread_fix(double_e,float_a);

	float_b = float_c;
	bwt_gen_cnt_table(short_a);

	double_c = atan2 ( double_d , double_f ) ;
	double_g = err_fread_noeof(double_c,double_d,unsigned_int_b);

	double_b = pow ( double_a , double_d ) ;
	unsigned_int_a = unsigned_int_a;
	long_b = err_ftell(unsigned_int_b);

	double_f = log10 ( double_f ) ;
	double_f = tan ( double_c ) ;
}
void bwa_idx_load_bwt( double parameter_1,float parameter_2,char parameter_3)
{
	char char_a = 0;
	char char_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	int int_b = 0;
	char char_c = 0;
	unsigned int unsigned_int_b = 0;
	short short_b = 0;
	short short_c = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	char_b = char_a - char_b;
	double_a = tanh ( double_b ) ;
	if(1)
	{
		if(1)
		{
			double_b = fmod ( double_b , double_c ) ;
		}
	}
	double_b = sinh ( double_a ) ;
	if(1)
	{
		char char_a = 0;
		char char_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_c = 0;
		unsigned int unsigned_int_b = 0;
		short short_b = 0;
		short short_c = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double_d = log10 ( double_a ) ;
		double_b = floor ( double_c ) ;
		short_c = short_a - short_b;
		double_e = atan2 ( double_d , double_b ) ;
	}
	else
	{
		char char_a = 0;
		char char_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_c = 0;
		unsigned int unsigned_int_b = 0;
		short short_b = 0;
		short short_c = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double_b = double_f;
		double_g = double_c + double_a;
		char_b = bwa_idx_infer_prefix(short_a);

		double_h = pow ( double_h , double_g ) ;
		double_g = fmod ( double_d , double_b ) ;
	}
	bwt_restore_sa(unsigned_int_a,int_a);

	int_b = int_b;
	bwt_restore_bwt2(int_b,char_c);

	unsigned_int_a = unsigned_int_b * unsigned_int_a;
	char_c = char_b / char_a;
}
char bwa_idx_infer_prefix( short parameter_1)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	int int_a = 0;
	double double_f = 0;
	double_a = atan2 ( double_a , double_a ) ;
	unsigned_int_a = unsigned_int_a;
	double_a = fmod ( double_b , double_a ) ;
	double_c = double_c;
	double_b = pow ( double_c , double_d ) ;
	double_c = exp ( double_d ) ;
	double_c = ceil ( double_b ) ;
	if(1)
	{
		double_b = double_b - double_e;
		return char_a;
	}
	char_b = char_c;
	int_a = int_a;
	if(1)
	{
		double_c = cosh ( double_a ) ;
		return char_c;
	}
	unsigned_int_a = unsigned_int_a;
	double_d = fmod ( double_e , double_f ) ;
	return char_a;
}
unsigned int bwa_idx_load_from_disk( unsigned int parameter_1,int parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_c = 0;
	double double_d = 0;
	char char_a = 0;
	short short_a = 0;
	double double_e = 0;
	float float_a = 0;
	unsigned int unsigned_int_d = 0;
	double double_f = 0;
	double double_g = 0;
	long long_a = 0;
	long long_b = 0;
	double_a = atan ( double_b ) ;
	int_b = int_a - int_a;
	int_b = err_fclose();

	unsigned_int_a = unsigned_int_b;
	if(1)
	{
		if(1)
		{
			unsigned_int_a = unsigned_int_b;
		}
		return unsigned_int_c;
	}
	double_c = atan ( double_c ) ;
	if(1)
	{
		double_a = pow ( double_b , double_a ) ;
		double_d = fabs ( double_b ) ;
	}
	if(1)
	{
		char_a = bwa_idx_infer_prefix(short_a);

		double_d = err_fread_noeof(double_a,double_e,unsigned_int_c);

		double_a = atan ( double_d ) ;
		bwa_idx_load_bwt(double_a,float_a,char_a);

		unsigned_int_a = unsigned_int_d * unsigned_int_c;
		for(int looper_a=0; looper_a<10;looper_a++)
		{
			if(1)
			{
				double_a = double_d * double_a;
			}
		}
		char controller_f[3];
		scanf("%3s", controller_f);
		if( controller_f <"IF2" )
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_c = 0;
			double double_d = 0;
			char char_a = 0;
			short short_a = 0;
			double double_e = 0;
			float float_a = 0;
			unsigned int unsigned_int_d = 0;
			double double_f = 0;
			double double_g = 0;
			long long_a = 0;
			long long_b = 0;
			double_f = double_c / double_e;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_c = 0;
			double double_d = 0;
			char char_a = 0;
			short short_a = 0;
			double double_e = 0;
			float float_a = 0;
			unsigned int unsigned_int_d = 0;
			double double_f = 0;
			double double_g = 0;
			long long_a = 0;
			long long_b = 0;
			double_e = tan ( double_g ) ;
			short_a = short_a;
			bns_restore();

			long_b = long_a - long_b;
			double_e = cos ( double_c ) ;
		}
	}
	unsigned_int_c = unsigned_int_d;
	return unsigned_int_b;
}
long bwa_idx_load( unsigned int parameter_1,int parameter_2)
{
	long long_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	return long_a;
	unsigned_int_a = bwa_idx_load_from_disk(unsigned_int_a,int_a);

}
int bwa_mem2idx( short parameter_1,long parameter_2,char parameter_3)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	char char_a = 0;
	short short_a = 0;
	unsigned int unsigned_int_c = 0;
	double double_c = 0;
	double double_d = 0;
	long long_a = 0;
	double double_e = 0;
	int int_a = 0;
	int int_b = 0;
	char char_b = 0;
	float float_a = 0;
	float float_b = 0;
	long long_b = 0;
	char char_c = 0;
	char char_d = 0;
	char char_e = 0;
	long long_c = 0;
	int int_c = 0;
	short short_b = 0;
	double_a = asin ( double_a ) ;
	unsigned_int_a = unsigned_int_a - unsigned_int_b;
	double_b = log10 ( double_b ) ;
	double_b = atan ( double_b ) ;
	char_a = char_a;
	char_a = char_a;
	short_a = short_a;
	double_b = double_a * double_b;
	double_a = double_b;
	unsigned_int_c = unsigned_int_b;
	double_b = tan ( double_b ) ;
	double_c = log ( double_c ) ;
	double_d = atan ( double_c ) ;
	long_a = long_a;
	double_d = sqrt ( double_c ) ;
	double_a = exp ( double_b ) ;
	double_d = ceil ( double_a ) ;
	double_a = sinh ( double_e ) ;
	unsigned_int_b = unsigned_int_c * unsigned_int_b;
	int_a = int_b;
	char_a = char_a / char_b;
	float_a = float_a / float_b;
	long_b = long_b / long_b;
	double_d = acos ( double_a ) ;
	char_e = char_c * char_d;
	double_a = acos ( double_b ) ;
	unsigned_int_c = unsigned_int_a;
	double_e = double_a;
	long_c = long_c;
	double_e = tanh ( double_a ) ;
	unsigned_int_b = unsigned_int_c;
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		double_e = log ( double_a ) ;
		double_b = fabs ( double_c ) ;
		double_b = log ( double_d ) ;
		int_b = int_c;
	}
	double_d = ldexp ( double_c , int_b ) ;
	short_b = short_a * short_a;
	double_a = ceil ( double_b ) ;
	int_b = int_b / int_b;
	double_c = sqrt ( double_b ) ;
	return int_c;
}
float bwa_idx_load_from_shm( long parameter_1)
{
	short short_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	short short_b = 0;
	double double_e = 0;
	float float_a = 0;
	int int_a = 0;
	float float_b = 0;
	double double_f = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_b = 0;
	long long_c = 0;
	char char_a = 0;
	char char_b = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	short_a = short_a;
	long_a = long_b;
	double_a = asin ( double_b ) ;
	double_b = atan ( double_c ) ;
	double_c = atan2 ( double_a , double_d ) ;
	short_a = short_b - short_a;
	double_b = atan ( double_e ) ;
	if(1)
	{
		return float_a;
	}
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double_c = sinh ( double_c ) ;
	}
	double_e = ldexp ( double_e , int_a ) ;
	if(1)
	{
		return float_b;
	}
	double_f = double_b;
	unsigned_int_a = unsigned_int_b;
	if(1)
	{
		return float_a;
	}
	for(int looper_b=0; looper_b<10;looper_b++)
	{
		short short_a = 0;
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		short short_b = 0;
		double double_e = 0;
		float float_a = 0;
		int int_a = 0;
		float float_b = 0;
		double double_f = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_b = 0;
		long long_c = 0;
		char char_a = 0;
		char char_b = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		unsigned_int_c = unsigned_int_b * unsigned_int_b;
		int_b = bwa_mem2idx(short_a,long_c,char_a);

		unsigned_int_b = unsigned_int_b;
		if(1)
		{
		}
		double_b = cos ( double_e ) ;
	}
	if(1)
	{
		return float_a;
	}
	double_b = acos ( double_f ) ;
	if(1)
	{
		return float_b;
	}
	char_b = char_b;
	double_c = ceil ( double_c ) ;
	double_g = atan2 ( double_g , double_e ) ;
	int_a = int_a * int_b;
	return float_a;
}
char update_a( short parameter_1,float parameter_2)
{
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_d = 0;
		if(1)
		{
			double_a = log10 ( double_a ) ;
		}
		if(1)
		{
			double_a = acos ( double_b ) ;
		}
		if(1)
		{
			double_c = pow ( double_b , double_a ) ;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_d = 0;
			unsigned_int_a = unsigned_int_b;
		}
		if(1)
		{
			double_c = atan ( double_b ) ;
		}
		if(1)
		{
			double_a = tan ( double_b ) ;
		}
		if(1)
		{
			double_b = atan2 ( double_b , double_a ) ;
		}
		if(1)
		{
			double_a = log ( double_b ) ;
		}
		if(1)
		{
			double_c = cos ( double_a ) ;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_d = 0;
			double_d = double_c;
		}
	}
}
char bwa_insert_header( int parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	int int_a = 0;
	double double_c = 0;
	double double_d = 0;
	float float_a = 0;
	double_a = exp ( double_b ) ;
	if(1)
	{
		return char_a;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		float float_a = 0;
		double_b = sinh ( double_a ) ;
		int_a = bwa_escape(char_a);

		double_c = exp ( double_d ) ;
		double_c = exp ( double_d ) ;
		float_a = float_a;
	}
	else
	{
		double_d = sqrt ( double_a ) ;
	}
	double_a = fabs ( double_c ) ;
	return char_a;
}
int bwa_escape( char parameter_1)
{
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	int int_a = 0;
	double double_d = 0;
	double double_b = 0;
	double double_c = 0;
	int int_b = 0;
	long_b = long_a * long_a;
	for(int looper_a=0; looper_a<6;looper_a++)
	{
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		int int_a = 0;
		double double_d = 0;
		double double_b = 0;
		double double_c = 0;
		int int_b = 0;
		if(1)
		{
			long_a = long_a - long_a;
			char controller_b[4];
			scanf("%4s", controller_b);
			if( controller_b >"0,s6" )
			{
				double_a = tanh ( double_a ) ;
			}
			if(1)
			{
				double_b = acos ( double_c ) ;
			}
			if(1)
			{
				int_a = int_a;
			}
			char controller_e[2];
			scanf("%2s", controller_e);
			if( controller_e <"`{" )
			{
				long long_a = 0;
				long long_b = 0;
				double double_a = 0;
				int int_a = 0;
				double double_d = 0;
				double double_b = 0;
				double double_c = 0;
				int int_b = 0;
				int_b = int_a;
			}
		}
		else
		{
			double_c = exp ( double_b ) ;
		}
	}
	double_a = atan ( double_d ) ;
	return int_a;
}
short bwa_set_rg( long parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	short short_a = 0;
	double double_c = 0;
	float float_b = 0;
	double double_d = 0;
	double_a = double_a;
	double_b = tanh ( double_a ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		short short_a = 0;
		double double_c = 0;
		float float_b = 0;
		double double_d = 0;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			float float_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_a = 0;
			int int_b = 0;
			char char_a = 0;
			short short_a = 0;
			double double_c = 0;
			float float_b = 0;
			double double_d = 0;
			float_b = float_a / float_b;
		}
		double_b = acos ( double_c ) ;
	}
	unsigned_int_a = unsigned_int_a - unsigned_int_a;
	int_a = int_a + int_b;
	if(1)
	{
		if(1)
		{
			float_a = float_a + float_a;
		}
		double_a = sinh ( double_b ) ;
	}
	double_b = log10 ( double_a ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		float float_a = 0;
		unsigned int unsigned_int_a = 0;
		int int_a = 0;
		int int_b = 0;
		char char_a = 0;
		short short_a = 0;
		double double_c = 0;
		float float_b = 0;
		double double_d = 0;
		double_b = double_d;
	}
	char controller_e[4];
	scanf("%4s", controller_e);
	if( controller_e <"~~JQ" )
	{
		if(1)
		{
			double_b = floor ( double_b ) ;
		}
		char_a = char_a;
	}
	for(int looper_b=0; looper_b<10;looper_b++)
	{
		double_b = floor ( double_a ) ;
	}
	return short_a;
	return short_a;
	int_a = bwa_escape(char_a);

}
void bwa_fill_scmat_ga( int parameter_1,int parameter_2,long parameter_3)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	unsigned_int_a = unsigned_int_a;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		unsigned int unsigned_int_a = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		for(int looper_b=0; looper_b<7;looper_b++)
		{
			char controller_a[4];
			scanf("%4s", controller_a);
			if( controller_a <";Mvs" )
			{
				double_a = floor ( double_b ) ;
			}
			else
			{
				?:
				double_a = tan ( double_b ) ;
			}
		}
		int_a = int_a;
	}
	for(int looper_c=0; looper_c<8;looper_c++)
	{
		double_a = log ( double_b ) ;
	}
}
void bwa_fill_scmat_ct( int parameter_1,int parameter_2,short parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	double_a = tan ( double_b ) ;
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		for(int looper_b=0; looper_b<2;looper_b++)
		{
			if(1)
			{
				double_a = atan ( double_c ) ;
			}
			else
			{
				?:
				double_b = exp ( double_c ) ;
			}
		}
		unsigned_int_a = unsigned_int_a / unsigned_int_a;
	}
	for(int looper_c=0; looper_c<7;looper_c++)
	{
		double_c = log ( double_b ) ;
	}
}
void bwa_fill_scmat( int parameter_1,int parameter_2,double parameter_3)
{
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	long_a = long_b;
	for(int looper_a=0; looper_a<9;looper_a++)
	{
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		for(int looper_b=0; looper_b<6;looper_b++)
		{
			long long_a = 0;
			long long_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			?:
			unsigned_int_a = unsigned_int_b;
		}
		unsigned_int_c = unsigned_int_a;
	}
	for(int looper_c=0; looper_c<1;looper_c++)
	{
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		int_b = int_a + int_a;
	}
}
unsigned int mem_opt_init()
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_d = 0;
	double double_e = 0;
	double double_f = 0;
	int int_c = 0;
	short short_a = 0;
	short short_b = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	long long_a = 0;
	int int_d = 0;
	double double_j = 0;
	int int_e = 0;
	double double_k = 0;
	double double_l = 0;
	char char_a = 0;
	char char_b = 0;
	long long_b = 0;
	long long_c = 0;
	unsigned int unsigned_int_e = 0;
	unsigned_int_a = unsigned_int_a + unsigned_int_b;
	double_a = double_b;
	float_a = float_a / float_a;
	float_a = float_a;
	double_a = sinh ( double_b ) ;
	int_b = int_a / int_a;
	double_a = atan2 ( double_c , double_b ) ;
	int_a = int_b;
	double_a = tan ( double_b ) ;
	unsigned_int_c = unsigned_int_a + unsigned_int_a;
	double_a = cosh ( double_d ) ;
	int_a = int_a;
	double_a = pow ( double_b , double_a ) ;
	double_b = double_a;
	unsigned_int_d = unsigned_int_d;
	double_f = double_e * double_e;
	bwa_fill_scmat_ct(int_c,int_a,short_a);

	short_b = short_b;
	double_g = double_d - double_c;
	double_c = double_f;
	double_f = double_h;
	double_e = double_h * double_i;
	bwa_fill_scmat_ga(int_b,int_c,long_a);

	int_b = int_c - int_d;
	double_c = atan2 ( double_h , double_g ) ;
	double_j = tan ( double_e ) ;
	double_h = tan ( double_f ) ;
	int_e = int_a;
	double_d = double_c * double_b;
	double_h = sinh ( double_k ) ;
	double_l = acos ( double_g ) ;
	double_i = double_a;
	double_j = sqrt ( double_d ) ;
	float_a = float_a;
	bwa_fill_scmat(int_d,int_a,double_d);

	char_a = char_a + char_b;
	long_b = long_c;
	double_c = ldexp ( double_c , int_a ) ;
	double_b = fmod ( double_f , double_j ) ;
	double_j = asin ( double_c ) ;
	return unsigned_int_e;
}
int main_align( int parameter_1,char parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_b = 0;
	float float_a = 0;
	long long_a = 0;
	char char_a = 0;
	short short_a = 0;
	double double_f = 0;
	float float_b = 0;
	int int_c = 0;
	double double_g = 0;
	int int_d = 0;
	float float_c = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	float float_d = 0;
	int int_e = 0;
	double double_k = 0;
	short short_b = 0;
	float float_e = 0;
	int int_f = 0;
	double double_l = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	double double_m = 0;
	long long_b = 0;
	long long_c = 0;
	long long_d = 0;
	double double_n = 0;
	double double_o = 0;
	unsigned int unsigned_int_f = 0;
	short short_d = 0;
	short short_e = 0;
	double double_p = 0;
	double double_q = 0;
	char char_b = 0;
	short short_f = 0;
	double double_r = 0;
	char char_c = 0;
	long long_e = 0;
	long long_f = 0;
	long long_g = 0;
	long long_h = 0;
	double double_s = 0;
	int int_g = 0;
	double double_t = 0;
	int int_h = 0;
	double double_u = 0;
	short short_h = 0;
	double double_v = 0;
	double double_w = 0;
	int int_i = 0;
	float float_f = 0;
	short short_c = 0;
	char char_d = 0;
	char char_e = 0;
	short short_g = 0;
	unsigned int unsigned_int_g = 0;
	double_a = log ( double_b ) ;
	double_c = double_b / double_c;
	double_b = acos ( double_d ) ;
	double_c = cosh ( double_e ) ;
	double_d = fabs ( double_e ) ;
	int_a = int_a;
	double_b = acos ( double_b ) ;
	unsigned_int_c = unsigned_int_a * unsigned_int_b;
	double_a = sqrt ( double_e ) ;
	int_b = int_a / int_b;
	float_a = float_a;
	long_a = long_a * long_a;
	int looper_a = 0;
	while(looper_a < 6)
	{
		looper_a += 1;
		if(1)
		{
			char_a = update_a(short_a,float_a);

			char_a = char_a;
		}
		if(1)
		{
			double_d = log ( double_f ) ;
		}
		if(1)
		{
			float_a = float_a;
		}
		if(1)
		{
			float_a = float_b;
		}
		if(1)
		{
			int_c = int_a / int_a;
		}
		if(1)
		{
			double_c = fabs ( double_g ) ;
		}
		if(1)
		{
			double_b = fabs ( double_d ) ;
		}
		if(1)
		{
			int_a = err_gzclose(double_b);

			int_d = int_b;
		}
		if(1)
		{
			long_a = long_a;
		}
		if(1)
		{
			double_c = exp ( double_e ) ;
		}
		if(1)
		{
			double_f = cosh ( double_f ) ;
		}
		if(1)
		{
			long_a = long_a / long_a;
		}
		if(1)
		{
			?:
			double_d = atan ( double_f ) ;
		}
		if(1)
		{
			float_b = float_c;
		}
		if(1)
		{
			double_c = pow ( double_g , double_h ) ;
		}
		if(1)
		{
			double_i = tanh ( double_b ) ;
		}
		if(1)
		{
			double_j = cos ( double_f ) ;
		}
		if(1)
		{
			double_i = atan2 ( double_g , double_c ) ;
		}
		if(1)
		{
			double_e = fabs ( double_e ) ;
		}
		if(1)
		{
			float_d = float_a - float_a;
		}
		if(1)
		{
			int_a = int_e - int_c;
		}
		if(1)
		{
			double_k = exp ( double_j ) ;
		}
		if(1)
		{
			short_a = short_b;
		}
		if(1)
		{
			float_c = float_c;
		}
		if(1)
		{
			float_e = float_c;
		}
		if(1)
		{
			int_f = int_a;
		}
		if(1)
		{
			double_g = double_h;
		}
		if(1)
		{
			double_d = double_a;
		}
		if(1)
		{
			unsigned_int_c = unsigned_int_c + unsigned_int_a;
		}
		if(1)
		{
			float_e = bwa_idx_load_from_shm(long_a);

			double_h = double_i;
		}
		if(1)
		{
			double_g = double_l;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_b = 0;
			float float_a = 0;
			long long_a = 0;
			char char_a = 0;
			short short_a = 0;
			double double_f = 0;
			float float_b = 0;
			int int_c = 0;
			double double_g = 0;
			int int_d = 0;
			float float_c = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			float float_d = 0;
			int int_e = 0;
			double double_k = 0;
			short short_b = 0;
			float float_e = 0;
			int int_f = 0;
			double double_l = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			double double_m = 0;
			long long_b = 0;
			long long_c = 0;
			long long_d = 0;
			double double_n = 0;
			double double_o = 0;
			unsigned int unsigned_int_f = 0;
			short short_d = 0;
			short short_e = 0;
			double double_p = 0;
			double double_q = 0;
			char char_b = 0;
			short short_f = 0;
			double double_r = 0;
			char char_c = 0;
			long long_e = 0;
			long long_f = 0;
			long long_g = 0;
			long long_h = 0;
			double double_s = 0;
			int int_g = 0;
			double double_t = 0;
			int int_h = 0;
			double double_u = 0;
			short short_h = 0;
			double double_v = 0;
			double double_w = 0;
			int int_i = 0;
			float float_f = 0;
			short short_c = 0;
			char char_d = 0;
			char char_e = 0;
			short short_g = 0;
			unsigned int unsigned_int_g = 0;
			float_a = float_f;
		}
		if(1)
		{
			float_d = float_b * float_d;
		}
		if(1)
		{
			unsigned_int_d = unsigned_int_a + unsigned_int_a;
		}
		if(1)
		{
			unsigned_int_b = unsigned_int_b;
		}
		if(1)
		{
			unsigned_int_b = unsigned_int_b - unsigned_int_e;
			double_f = atan2 ( double_b , double_f ) ;
			for(int looper_b=0; looper_b<1;looper_b++)
			{
				double_c = ceil ( double_l ) ;
			}
		}
		if(1)
		{
			double_i = tan ( double_m ) ;
			double_l = sinh ( double_b ) ;
			for(int looper_c=0; looper_c<7;looper_c++)
			{
				int_f = int_b - int_e;
			}
		}
		if(1)
		{
			int_e = int_f + int_b;
		}
		if(1)
		{
			double_d = fmod ( double_g , double_b ) ;
			long_d = long_b * long_c;
			if(1)
			{
				double_l = double_m;
			}
		}
		if(1)
		{
			double_b = fmod ( double_l , double_n ) ;
			double_c = acos ( double_j ) ;
			?:
			double_f = ceil ( double_i ) ;
		}
		if(1)
		{
			int_a = int_e;
			double_f = fmod ( double_d , double_g ) ;
			if(1)
			{
				double_a = fmod ( double_e , double_f ) ;
			}
		}
		if(1)
		{
			double_o = tanh ( double_d ) ;
			unsigned_int_d = unsigned_int_b / unsigned_int_a;
			if(1)
			{
				unsigned_int_e = unsigned_int_f;
			}
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_b = 0;
			float float_a = 0;
			long long_a = 0;
			char char_a = 0;
			short short_a = 0;
			double double_f = 0;
			float float_b = 0;
			int int_c = 0;
			double double_g = 0;
			int int_d = 0;
			float float_c = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			float float_d = 0;
			int int_e = 0;
			double double_k = 0;
			short short_b = 0;
			float float_e = 0;
			int int_f = 0;
			double double_l = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			double double_m = 0;
			long long_b = 0;
			long long_c = 0;
			long long_d = 0;
			double double_n = 0;
			double double_o = 0;
			unsigned int unsigned_int_f = 0;
			short short_d = 0;
			short short_e = 0;
			double double_p = 0;
			double double_q = 0;
			char char_b = 0;
			short short_f = 0;
			double double_r = 0;
			char char_c = 0;
			long long_e = 0;
			long long_f = 0;
			long long_g = 0;
			long long_h = 0;
			double double_s = 0;
			int int_g = 0;
			double double_t = 0;
			int int_h = 0;
			double double_u = 0;
			short short_h = 0;
			double double_v = 0;
			double double_w = 0;
			int int_i = 0;
			float float_f = 0;
			short short_c = 0;
			char char_d = 0;
			char char_e = 0;
			short short_g = 0;
			unsigned int unsigned_int_g = 0;
			short_e = short_c * short_d;
			double_b = asin ( double_o ) ;
			if(1)
			{
				double_p = atan ( double_b ) ;
			}
		}
		if(1)
		{
			if(1)
			{
				return int_e;
			}
		}
		if(1)
		{
			if(1)
			{
				double_m = ldexp ( double_f , int_a ) ;
				if(1)
				{
					bwa_fill_scmat_ct(int_d,int_c,short_b);

					double_o = double_q * double_h;
					double_f = ceil ( double_k ) ;
					int looper_d = 0;
					while(looper_d < 3)
					{
						looper_d += 1;
						kt_pipeline(int_c,int_f,int_b);

						double_f = floor ( double_i ) ;
						char_b = bwa_insert_header(int_c,char_a);

						unsigned_int_e = unsigned_int_a;
						double_c = cos ( double_f ) ;
						int_d = kclose();

						unsigned_int_a = unsigned_int_f - unsigned_int_f;
					}
					short_e = short_f;
					int_e = int_b;
				}
			}
			else
			{
				short_e = bwa_set_rg(long_a);

				double_r = cosh ( double_j ) ;
			}
		}
		if(1)
		{
			char_c = char_b;
			long_g = long_e - long_f;
			int_d = int_f / int_c;
			double_a = double_c;
			if(1)
			{
				double_q = atan2 ( double_b , double_l ) ;
			}
			bwa_fill_scmat(int_a,int_d,double_j);

			int_d = int_c;
			double_c = log10 ( double_p ) ;
			if(1)
			{
				long_h = long_g / long_c;
			}
			if(1)
			{
				char_b = infer_alt_chromosomes(double_j);

				double_n = double_e / double_j;
			}
			if(1)
			{
				double_e = asin ( double_m ) ;
			}
			double_d = atan2 ( double_j , double_e ) ;
		}
		else
		{
			return int_d;
		}
	}
	if(1)
	{
		double_f = log ( double_a ) ;
		double_s = ceil ( double_h ) ;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		int int_a = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_b = 0;
		float float_a = 0;
		long long_a = 0;
		char char_a = 0;
		short short_a = 0;
		double double_f = 0;
		float float_b = 0;
		int int_c = 0;
		double double_g = 0;
		int int_d = 0;
		float float_c = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		float float_d = 0;
		int int_e = 0;
		double double_k = 0;
		short short_b = 0;
		float float_e = 0;
		int int_f = 0;
		double double_l = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		double double_m = 0;
		long long_b = 0;
		long long_c = 0;
		long long_d = 0;
		double double_n = 0;
		double double_o = 0;
		unsigned int unsigned_int_f = 0;
		short short_d = 0;
		short short_e = 0;
		double double_p = 0;
		double double_q = 0;
		char char_b = 0;
		short short_f = 0;
		double double_r = 0;
		char char_c = 0;
		long long_e = 0;
		long long_f = 0;
		long long_g = 0;
		long long_h = 0;
		double double_s = 0;
		int int_g = 0;
		double double_t = 0;
		int int_h = 0;
		double double_u = 0;
		short short_h = 0;
		double double_v = 0;
		double double_w = 0;
		int int_i = 0;
		float float_f = 0;
		short short_c = 0;
		char char_d = 0;
		char char_e = 0;
		short short_g = 0;
		unsigned int unsigned_int_g = 0;
		char_d = char_e;
	}
	if(1)
	{
		return int_b;
	}
	if(1)
	{
		if(1)
		{
			if(1)
			{
				double_b = tan ( double_k ) ;
			}
			if(1)
			{
				long_b = bwa_idx_load(unsigned_int_f,int_f);

				short_e = short_e - short_a;
			}
			if(1)
			{
				bwa_print_sam_hdr(float_b,unsigned_int_c);

				float_e = float_e;
			}
			if(1)
			{
				double_l = tan ( double_r ) ;
			}
			if(1)
			{
				double_b = double_n;
			}
		}
		if(1)
		{
			if(1)
			{
				double_a = ldexp ( double_e , int_a ) ;
			}
			if(1)
			{
				int_c = int_a / int_d;
			}
			if(1)
			{
				float_b = float_b;
			}
			if(1)
			{
				double_e = cosh ( double_r ) ;
			}
			if(1)
			{
				double_c = cos ( double_h ) ;
			}
			if(1)
			{
				char_b = char_c;
			}
			if(1)
			{
				char_b = char_c;
				if(1)
				{
					float_a = float_e;
				}
				if(1)
				{
					double_d = asin ( double_j ) ;
				}
				if(1)
				{
					double_i = sqrt ( double_k ) ;
				}
				if(1)
				{
					double_k = fmod ( double_n , double_n ) ;
				}
				if(1)
				{
					float_c = process(int_e);

					double_p = double_a - double_c;
				}
			}
			if(1)
			{
				if(1)
				{
					double_i = asin ( double_q ) ;
				}
				if(1)
				{
					unsigned_int_c = mem_opt_init();

					unsigned_int_b = kopen(float_d,int_g);

					double_m = cos ( double_f ) ;
				}
				if(1)
				{
					int_b = usage(double_t);

					long_d = long_h;
				}
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					double double_d = 0;
					double double_e = 0;
					int int_a = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					unsigned int unsigned_int_c = 0;
					int int_b = 0;
					float float_a = 0;
					long long_a = 0;
					char char_a = 0;
					short short_a = 0;
					double double_f = 0;
					float float_b = 0;
					int int_c = 0;
					double double_g = 0;
					int int_d = 0;
					float float_c = 0;
					double double_h = 0;
					double double_i = 0;
					double double_j = 0;
					float float_d = 0;
					int int_e = 0;
					double double_k = 0;
					short short_b = 0;
					float float_e = 0;
					int int_f = 0;
					double double_l = 0;
					unsigned int unsigned_int_d = 0;
					unsigned int unsigned_int_e = 0;
					double double_m = 0;
					long long_b = 0;
					long long_c = 0;
					long long_d = 0;
					double double_n = 0;
					double double_o = 0;
					unsigned int unsigned_int_f = 0;
					short short_d = 0;
					short short_e = 0;
					double double_p = 0;
					double double_q = 0;
					char char_b = 0;
					short short_f = 0;
					double double_r = 0;
					char char_c = 0;
					long long_e = 0;
					long long_f = 0;
					long long_g = 0;
					long long_h = 0;
					double double_s = 0;
					int int_g = 0;
					double double_t = 0;
					int int_h = 0;
					double double_u = 0;
					short short_h = 0;
					double double_v = 0;
					double double_w = 0;
					int int_i = 0;
					float float_f = 0;
					short short_c = 0;
					char char_d = 0;
					char char_e = 0;
					short short_g = 0;
					unsigned int unsigned_int_g = 0;
					short_e = short_g / short_d;
				}
			}
			else
			{
				if(1)
				{
					double_g = exp ( double_b ) ;
				}
				if(1)
				{
					double_e = ceil ( double_e ) ;
				}
				if(1)
				{
					long_d = long_h;
				}
				if(1)
				{
					double_m = asin ( double_i ) ;
				}
			}
		}
		else
		{
			double_f = tan ( double_e ) ;
			return int_a;
		}
	}
	else
	{
		int_h = int_b - int_a;
	}
	double_k = pow ( double_f , double_g ) ;
	double_u = log ( double_j ) ;
	double_s = atan ( double_r ) ;
	if(1)
	{
		return int_e;
	}
	double_s = cos ( double_h ) ;
	if(1)
	{
		if(1)
		{
			return int_c;
		}
	}
	if(1)
	{
		int_g = int_c;
	}
	if(1)
	{
		double_o = atan2 ( double_q , double_p ) ;
	}
	if(1)
	{
		for(int looper_e=0; looper_e<2;looper_e++)
		{
			double_l = log10 ( double_t ) ;
		}
	}
	double_k = tanh ( double_s ) ;
	short_h = short_f;
	if(1)
	{
		long_f = long_a;
		if(1)
		{
			if(1)
			{
				float_b = float_c;
			}
			return int_h;
		}
		double_h = sqrt ( double_i ) ;
		short_d = short_d / short_b;
		if(1)
		{
			if(1)
			{
				if(1)
				{
					double_n = pow ( double_m , double_m ) ;
				}
			}
			else
			{
				char_c = char_b;
				if(1)
				{
					if(1)
					{
						double_r = tanh ( double_c ) ;
					}
					return int_g;
				}
				double_i = tan ( double_l ) ;
				double_j = double_i;
				double_a = sinh ( double_l ) ;
			}
		}
	}
	else
	{
		double_b = floor ( double_v ) ;
		double_h = ceil ( double_v ) ;
	}
	if(1)
	{
		long_h = long_e;
	}
	?:
	double_u = cos ( double_a ) ;
	?:
	unsigned_int_d = unsigned_int_e;
	double_h = log10 ( double_k ) ;
	bwa_idx_destroy(double_o);

	double_r = double_l;
	double_r = floor ( double_w ) ;
	double_v = log10 ( double_t ) ;
	long_f = long_e / long_a;
	double_u = pow ( double_e , double_f ) ;
	if(1)
	{
		double_d = pow ( double_s , double_m ) ;
		long_c = long_g;
		if(1)
		{
			short_f = short_b;
		}
	}
	bwa_fill_scmat_ga(int_d,int_b,long_g);

	unsigned_int_c = unsigned_int_d * unsigned_int_d;
	if(1)
	{
		int_d = int_c + int_f;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_b = 0;
			float float_a = 0;
			long long_a = 0;
			char char_a = 0;
			short short_a = 0;
			double double_f = 0;
			float float_b = 0;
			int int_c = 0;
			double double_g = 0;
			int int_d = 0;
			float float_c = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			float float_d = 0;
			int int_e = 0;
			double double_k = 0;
			short short_b = 0;
			float float_e = 0;
			int int_f = 0;
			double double_l = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			double double_m = 0;
			long long_b = 0;
			long long_c = 0;
			long long_d = 0;
			double double_n = 0;
			double double_o = 0;
			unsigned int unsigned_int_f = 0;
			short short_d = 0;
			short short_e = 0;
			double double_p = 0;
			double double_q = 0;
			char char_b = 0;
			short short_f = 0;
			double double_r = 0;
			char char_c = 0;
			long long_e = 0;
			long long_f = 0;
			long long_g = 0;
			long long_h = 0;
			double double_s = 0;
			int int_g = 0;
			double double_t = 0;
			int int_h = 0;
			double double_u = 0;
			short short_h = 0;
			double double_v = 0;
			double double_w = 0;
			int int_i = 0;
			float float_f = 0;
			short short_c = 0;
			char char_d = 0;
			char char_e = 0;
			short short_g = 0;
			unsigned int unsigned_int_g = 0;
			unsigned_int_g = unsigned_int_e - unsigned_int_b;
			double_h = acos ( double_j ) ;
			if(1)
			{
				double_u = fmod ( double_r , double_s ) ;
			}
		}
	}
	return int_i;
}
void bwt_dump_sa( char parameter_1,int parameter_2)
{
	float float_a = 0;
	float float_b = 0;
	float float_c = 0;
	int int_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	float float_d = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_b = 0;
	double double_e = 0;
	double double_f = 0;
	float_c = float_a + float_b;
	int_a = err_fflush();

	double_a = fmod ( double_a , double_b ) ;
	double_c = double_d;
	float_a = err_fwrite(short_a,float_d,double_c,unsigned_int_a);

	double_b = tanh ( double_d ) ;
	long_a = long_b;
	int_a = err_fclose();

	unsigned_int_a = unsigned_int_b;
	double_a = double_e / double_f;
	double_a = acos ( double_d ) ;
	double_d = pow ( double_a , double_b ) ;
}
short __occ_aux( double parameter_1,int parameter_2)
{
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	short short_a = 0;
	?:
	?:
	float_b = float_a * float_b;
	double_a = pow ( double_a , double_a ) ;
	return short_a;
}
char bwt_occ( int parameter_1,short parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	int int_a = 0;
	double double_e = 0;
	double_a = asin ( double_b ) ;
	double_b = ceil ( double_a ) ;
	if(1)
	{
		return char_a;
	}
	if(1)
	{
		return char_b;
	}
	char_c = char_b + char_b;
	double_b = acos ( double_b ) ;
	double_c = atan ( double_c ) ;
	double_b = tanh ( double_d ) ;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		short_a = __occ_aux(double_a,int_a);

		double_d = asin ( double_a ) ;
	}
	double_e = tanh ( double_c ) ;
	if(1)
	{
		double_c = fmod ( double_d , double_b ) ;
	}
	return char_c;
}
unsigned int bwt_invPsi( unsigned int parameter_1,double parameter_2)
{
	double double_a = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	short short_a = 0;
	int int_b = 0;
	long long_a = 0;
	unsigned int unsigned_int_a = 0;
	double_a = cosh ( double_a ) ;
	char_a = char_b;
	char_b = bwt_occ(int_a,short_a,int_b);

	long_a = long_a * long_a;
	return unsigned_int_a;
	?:
	char_b = char_b;
}
void bwt_cal_sa( double parameter_1,int parameter_2)
{
	double double_a = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	long long_a = 0;
	char char_c = 0;
	double_a = log ( double_a ) ;
	short_a = short_a / short_a;
	short_a = short_b - short_c;
	double_a = floor ( double_b ) ;
	char_a = char_a + char_b;
	if(1)
	{
		int_a = int_b;
	}
	short_a = short_b;
	double_a = atan2 ( double_b , double_a ) ;
	double_b = log ( double_b ) ;
	int_a = int_b;
	double_c = sqrt ( double_c ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double double_a = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		long long_a = 0;
		char char_c = 0;
		if(1)
		{
			double_b = log10 ( double_d ) ;
		}
		long_a = long_a * long_a;
		char_b = char_c * char_b;
	}
	if(1)
	{
		double_b = double_d / double_b;
	}
	unsigned_int_a = bwt_invPsi(unsigned_int_b,double_a);

	unsigned_int_b = unsigned_int_b + unsigned_int_a;
}
short add1( double parameter_1,char parameter_2,long parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,unsigned int parameter_7)
{
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	float float_a = 0;
	float float_c = 0;
	short short_c = 0;
	long long_a = 0;
	long long_b = 0;
	double double_f = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	float float_b = 0;
	short_b = short_a / short_a;
	double_a = atan2 ( double_b , double_b ) ;
	char_a = char_a + char_b;
	if(1)
	{
		double_b = log10 ( double_b ) ;
		double_a = double_c;
	}
	unsigned_int_a = unsigned_int_a;
	double_b = cosh ( double_c ) ;
	?:
	unsigned_int_a = unsigned_int_a * unsigned_int_a;
	unsigned_int_b = unsigned_int_b;
	double_a = cosh ( double_b ) ;
	?:
	double_b = atan2 ( double_c , double_c ) ;
	int_b = int_a / int_b;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		short short_a = 0;
		short short_b = 0;
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		int int_b = 0;
		float float_a = 0;
		float float_c = 0;
		short short_c = 0;
		long long_a = 0;
		long long_b = 0;
		double double_f = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		float float_b = 0;
		unsigned_int_b = unsigned_int_b / unsigned_int_b;
		if(1)
		{
			if(1)
			{
				double_a = atan2 ( double_b , double_b ) ;
			}
			else
			{
				short short_a = 0;
				short short_b = 0;
				double double_a = 0;
				double double_b = 0;
				char char_a = 0;
				char char_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_a = 0;
				int int_b = 0;
				float float_a = 0;
				float float_c = 0;
				short short_c = 0;
				long long_a = 0;
				long long_b = 0;
				double double_f = 0;
				double double_d = 0;
				double double_e = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				unsigned int unsigned_int_e = 0;
				float float_b = 0;
				if(1)
				{
					double_b = floor ( double_a ) ;
					double_c = cosh ( double_a ) ;
				}
				double_a = acos ( double_b ) ;
				double_c = cos ( double_c ) ;
				double_b = acos ( double_a ) ;
				double_a = fabs ( double_a ) ;
				double_a = tanh ( double_d ) ;
				double_e = fabs ( double_b ) ;
			}
		}
		long_b = long_a + long_b;
		if(1)
		{
			short short_a = 0;
			short short_b = 0;
			double double_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			float float_a = 0;
			float float_c = 0;
			short short_c = 0;
			long long_a = 0;
			long long_b = 0;
			double double_f = 0;
			double double_d = 0;
			double double_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			float float_b = 0;
			unsigned_int_c = unsigned_int_d;
		}
		if(1)
		{
			short short_a = 0;
			short short_b = 0;
			double double_a = 0;
			double double_b = 0;
			char char_a = 0;
			char char_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			int int_b = 0;
			float float_a = 0;
			float float_c = 0;
			short short_c = 0;
			long long_a = 0;
			long long_b = 0;
			double double_f = 0;
			double double_d = 0;
			double double_e = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			float float_b = 0;
			unsigned_int_b = unsigned_int_e;
			int_b = int_b - int_b;
			float_b = float_a * float_a;
		}
		long_b = long_b;
		double_b = tanh ( double_f ) ;
	}
	float_a = float_c / float_a;
	return short_c;
}
double dump_forward_pac( long parameter_1,double parameter_2)
{
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_b = 0;
	int int_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	float float_a = 0;
	short short_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	short short_b = 0;
	float float_b = 0;
	double double_f = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_g = 0;
	double double_h = 0;
	short short_c = 0;
	char char_a = 0;
	long long_a = 0;
	char char_b = 0;
	char char_c = 0;
	double double_i = 0;
	unsigned int unsigned_int_e = 0;
	double double_j = 0;
	char char_d = 0;
	unsigned int unsigned_int_f = 0;
	int_a = int_b;
	double_a = double_b;
	int_c = err_fflush();

	unsigned_int_a = unsigned_int_a / unsigned_int_b;
	float_a = err_fwrite(short_a,float_a,double_c,unsigned_int_b);

	double_c = cosh ( double_d ) ;
	double_a = fabs ( double_e ) ;
	unsigned_int_b = unsigned_int_a / unsigned_int_a;
	bns_destroy();

	short_b = short_b;
	float_b = float_a + float_b;
	double_e = sinh ( double_b ) ;
	double_f = double_e;
	double_f = sinh ( double_e ) ;
	unsigned_int_c = unsigned_int_d;
	double_g = tan ( double_g ) ;
	unsigned_int_b = unsigned_int_c;
	double_f = cos ( double_h ) ;
	short_c = add1(double_e,char_a,long_a,unsigned_int_c,int_c,int_a,unsigned_int_a);

	int_b = err_fclose();

	double_f = sinh ( double_g ) ;
	char_c = char_a / char_b;
	double_f = ldexp ( double_i , int_c ) ;
	double_a = sqrt ( double_c ) ;
	double_i = double_d * double_e;
	unsigned_int_e = unsigned_int_e / unsigned_int_d;
	double_a = tan ( double_j ) ;
	int looper_a = 0;
	while(looper_a < 10)
	{
		looper_a += 1;
		char_b = char_c - char_d;
	}
	char_d = char_d + char_d;
	double_h = fabs ( double_i ) ;
	?:
	unsigned_int_f = unsigned_int_d;
	if(1)
	{
		double_d = pow ( double_g , double_a ) ;
		unsigned_int_c = unsigned_int_c + unsigned_int_e;
	}
	double_g = floor ( double_e ) ;
	double_b = ldexp ( double_i , int_b ) ;
	short_c = short_c;
	double_j = double_f * double_b;
	double_i = atan2 ( double_d , double_g ) ;
	double_f = cosh ( double_g ) ;
	unsigned_int_a = unsigned_int_d;
	return double_i;
}
void bwt_bwtupdate_core()
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	char char_a = 0;
	char char_b = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	int int_c = 0;
	double_a = floor ( double_b ) ;
	int_b = int_a + int_a;
	double_c = asin ( double_b ) ;
	double_d = tanh ( double_a ) ;
	char_a = char_b;
	double_a = atan2 ( double_e , double_e ) ;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		if(1)
		{
			double_f = log10 ( double_c ) ;
			double_f = acos ( double_g ) ;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			char char_a = 0;
			char char_b = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			int int_c = 0;
			int_c = int_b;
		}
		double_a = double_a;
	}
	double_e = atan2 ( double_b , double_a ) ;
	double_g = sqrt ( double_f ) ;
	int_a = int_b;
	double_d = sqrt ( double_a ) ;
}
void bwt_gen_cnt_table( short parameter_1)
{
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	char_c = char_a / char_b;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		char char_a = 0;
		char char_b = 0;
		char char_c = 0;
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double_a = asin ( double_a ) ;
		for(int looper_b=0; looper_b<4;looper_b++)
		{
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned_int_a = unsigned_int_a - unsigned_int_b;
		}
		double_a = log ( double_b ) ;
	}
}
double fread_fix( double parameter_1,float parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	short short_a = 0;
	short short_b = 0;
	double_a = err_fread_noeof(double_b,double_b,unsigned_int_a);

	unsigned_int_a = unsigned_int_a * unsigned_int_a;
	double_a = pow ( double_b , double_a ) ;
	int looper_a = 0;
	while(looper_a < 7)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		short short_a = 0;
		short short_b = 0;
		looper_a += 1;
		?:
		unsigned_int_a = unsigned_int_a;
		if(1)
		{
		}
		short_a = short_a + short_b;
		short_a = short_a;
	}
	return double_b;
}
short bwt_restore_bwt( double parameter_1)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	float float_a = 0;
	double double_e = 0;
	short short_a = 0;
	double double_f = 0;
	int int_b = 0;
	long long_b = 0;
	double double_g = 0;
	short short_b = 0;
	long long_c = 0;
	double double_h = 0;
	short short_c = 0;
	short short_d = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	short short_e = 0;
	unsigned_int_b = unsigned_int_a - unsigned_int_b;
	int_a = err_fseek(unsigned_int_a,long_a,int_a);

	int_a = err_fclose();

	double_a = atan ( double_b ) ;
	double_a = double_c * double_c;
	double_d = fread_fix(double_a,float_a);

	double_e = tanh ( double_a ) ;
	bwt_gen_cnt_table(short_a);

	double_d = ldexp ( double_f , int_b ) ;
	long_b = err_ftell(unsigned_int_b);

	double_f = floor ( double_g ) ;
	double_e = cos ( double_b ) ;
	short_a = short_b;
	long_b = long_a - long_c;
	double_a = floor ( double_h ) ;
	double_a = err_fread_noeof(double_e,double_e,unsigned_int_a);

	short_b = short_c * short_d;
	double_a = ceil ( double_c ) ;
	double_d = double_e;
	char_c = char_a - char_b;
	return short_e;
}
void bwt_destroy( long parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	short short_a = 0;
	if(1)
	{
	}
	double_a = exp ( double_a ) ;
	double_a = fabs ( double_b ) ;
	short_a = short_a;
}
void bwt_dump_bwt( long parameter_1,float parameter_2)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	int int_b = 0;
	char char_a = 0;
	char char_b = 0;
	float float_a = 0;
	short short_a = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned_int_a = unsigned_int_b;
	int_a = err_fflush();

	int_b = err_fclose();

	char_b = char_a * char_b;
	float_a = err_fwrite(short_a,float_b,double_a,unsigned_int_b);

	double_b = sqrt ( double_a ) ;
	double_b = double_c - double_c;
	double_d = log10 ( double_b ) ;
	int_b = int_a + int_b;
	short_a = short_a - short_a;
}
char induceSA( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6,int parameter_7)
{
	int int_a = 0;
	int int_b = 0;
	int int_c = 0;
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	unsigned int unsigned_int_a = 0;
	float float_c = 0;
	long long_b = 0;
	int int_d = 0;
	int int_e = 0;
	double double_g = 0;
	double double_j = 0;
	double double_h = 0;
	double double_i = 0;
	double double_k = 0;
	long long_c = 0;
	int_c = int_a / int_b;
	float_a = float_b;
	if(1)
	{
		double_a = floor ( double_a ) ;
	}
	double_a = tanh ( double_b ) ;
	long_a = long_a;
	double_e = double_c + double_d;
	?:
	double_b = pow ( double_f , double_d ) ;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		getBuckets(unsigned_int_a,int_b,int_a,int_a);

		double_c = cos ( double_c ) ;
		if(1)
		{
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_a = 0;
			double double_b = 0;
			long long_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_a = 0;
			float float_c = 0;
			long long_b = 0;
			int int_d = 0;
			int int_e = 0;
			double double_g = 0;
			double double_j = 0;
			double double_h = 0;
			double double_i = 0;
			double double_k = 0;
			long long_c = 0;
			double_g = cosh ( double_g ) ;
			if(1)
			{
				int int_a = 0;
				int int_b = 0;
				int int_c = 0;
				float float_a = 0;
				float float_b = 0;
				double double_a = 0;
				double double_b = 0;
				long long_a = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_a = 0;
				float float_c = 0;
				long long_b = 0;
				int int_d = 0;
				int int_e = 0;
				double double_g = 0;
				double double_j = 0;
				double double_h = 0;
				double double_i = 0;
				double double_k = 0;
				long long_c = 0;
				double_a = atan2 ( double_h , double_d ) ;
				double_i = fabs ( double_b ) ;
			}
			?:
			double_j = floor ( double_e ) ;
		}
	}
	if(1)
	{
		double_c = asin ( double_e ) ;
	}
	float_c = float_a - float_b;
	for(int looper_b=0; looper_b<9;looper_b++)
	{
		if(1)
		{
			unsigned_int_a = unsigned_int_a;
			if(1)
			{
				int int_a = 0;
				int int_b = 0;
				int int_c = 0;
				float float_a = 0;
				float float_b = 0;
				double double_a = 0;
				double double_b = 0;
				long long_a = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_a = 0;
				float float_c = 0;
				long long_b = 0;
				int int_d = 0;
				int int_e = 0;
				double double_g = 0;
				double double_j = 0;
				double double_h = 0;
				double double_i = 0;
				double double_k = 0;
				long long_c = 0;
				unsigned_int_a = getCounts(long_b,int_c,int_d,int_e,int_e);

				double_a = tanh ( double_b ) ;
				double_d = pow ( double_c , double_k ) ;
			}
			?:
			double_a = double_f;
		}
		else
		{
			int int_a = 0;
			int int_b = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_a = 0;
			double double_b = 0;
			long long_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_a = 0;
			float float_c = 0;
			long long_b = 0;
			int int_d = 0;
			int int_e = 0;
			double double_g = 0;
			double double_j = 0;
			double double_h = 0;
			double double_i = 0;
			double double_k = 0;
			long long_c = 0;
			long_b = long_c / long_b;
		}
	}
}
void getBuckets( unsigned int parameter_1,int parameter_2,int parameter_3,int parameter_4)
{
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	char char_d = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	char_b = char_a * char_b;
	if(1)
	{
		for(int looper_a=0; looper_a<9;looper_a++)
		{
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			char char_d = 0;
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			char_c = char_d;
			long_a = long_a;
		}
	}
	else
	{
		for(int looper_b=0; looper_b<4;looper_b++)
		{
			char char_a = 0;
			char char_b = 0;
			char char_c = 0;
			char char_d = 0;
			long long_a = 0;
			double double_a = 0;
			double double_b = 0;
			double_a = ceil ( double_b ) ;
			double_b = fmod ( double_a , double_b ) ;
		}
	}
}
unsigned int getCounts( long parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	int int_b = 0;
	double_a = cos ( double_b ) ;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		int int_b = 0;
		double_c = exp ( double_d ) ;
	}
	for(int looper_b=0; looper_b<4;looper_b++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		int int_a = 0;
		int int_b = 0;
		int_a = int_b;
	}
}
void sais_main( double parameter_1,int parameter_2,int parameter_3,int parameter_4,int parameter_5,int parameter_6)
{
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	double double_a = 0;
	short short_a = 0;
	short short_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_c = 0;
	double double_d = 0;
	double double_e = 0;
	int int_b = 0;
	int int_c = 0;
	char char_a = 0;
	char char_b = 0;
	int int_e = 0;
	int int_f = 0;
	double double_f = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	unsigned int unsigned_int_d = 0;
	int int_g = 0;
	float float_a = 0;
	float float_b = 0;
	double double_m = 0;
	int int_d = 0;
	double double_g = 0;
	char char_c = 0;
	double double_k = 0;
	char char_d = 0;
	char char_e = 0;
	double double_l = 0;
	long_c = long_a / long_b;
	double_a = log ( double_a ) ;
	short_b = short_a + short_b;
	unsigned_int_a = unsigned_int_a * unsigned_int_b;
	if(1)
	{
		double_a = ldexp ( double_a , int_a ) ;
		?:
		int_a = int_a;
	}
	if(1)
	{
	}
	double_a = pow ( double_a , double_a ) ;
	double_a = double_b + double_b;
	for(int looper_a=0; looper_a<5;looper_a++)
	{
		double_b = double_c;
	}
	for(int looper_b=0; looper_b<3;looper_b++)
	{
		if(1)
		{
			unsigned_int_a = unsigned_int_c;
		}
		if(1)
		{
			double_b = double_d + double_c;
		}
	}
	double_d = acos ( double_e ) ;
	if(1)
	{
		double_a = cos ( double_d ) ;
	}
	for(int looper_c=0; looper_c<10;looper_c++)
	{
		double_e = log ( double_a ) ;
		if(1)
		{
			for(int looper_d=0; looper_d<2;looper_d++)
			{
				unsigned_int_a = getCounts(long_a,int_b,int_a,int_c,int_a);

				char_b = char_a - char_a;
			}
			if(1)
			{
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				double double_a = 0;
				short short_a = 0;
				short short_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_c = 0;
				double double_d = 0;
				double double_e = 0;
				int int_b = 0;
				int int_c = 0;
				char char_a = 0;
				char char_b = 0;
				int int_e = 0;
				int int_f = 0;
				double double_f = 0;
				double double_h = 0;
				double double_i = 0;
				double double_j = 0;
				unsigned int unsigned_int_d = 0;
				int int_g = 0;
				float float_a = 0;
				float float_b = 0;
				double double_m = 0;
				int int_d = 0;
				double double_g = 0;
				char char_c = 0;
				double double_k = 0;
				char char_d = 0;
				char char_e = 0;
				double double_l = 0;
				int_f = int_d - int_e;
			}
		}
	}
	for(int looper_e=0; looper_e<10;looper_e++)
	{
		double_e = fmod ( double_f , double_b ) ;
	}
	for(int looper_f=0; looper_f<6;looper_f++)
	{
		if(1)
		{
			double_e = atan ( double_d ) ;
		}
		if(1)
		{
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			double double_a = 0;
			short short_a = 0;
			short short_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_b = 0;
			int int_c = 0;
			char char_a = 0;
			char char_b = 0;
			int int_e = 0;
			int int_f = 0;
			double double_f = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			int int_g = 0;
			float float_a = 0;
			float float_b = 0;
			double double_m = 0;
			int int_d = 0;
			double double_g = 0;
			char char_c = 0;
			double double_k = 0;
			char char_d = 0;
			char char_e = 0;
			double double_l = 0;
			double_d = double_g / double_c;
			double_e = fmod ( double_h , double_i ) ;
			double_c = floor ( double_f ) ;
		}
	}
	for(int looper_g=0; looper_g<8;looper_g++)
	{
		short_a = short_b;
		if(1)
		{
			for(int looper_h=0; looper_h<9;looper_h++)
			{
				double_b = double_b / double_i;
			}
			if(1)
			{
				int_e = int_c;
			}
		}
		if(1)
		{
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			double double_a = 0;
			short short_a = 0;
			short short_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_b = 0;
			int int_c = 0;
			char char_a = 0;
			char char_b = 0;
			int int_e = 0;
			int int_f = 0;
			double double_f = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			int int_g = 0;
			float float_a = 0;
			float float_b = 0;
			double double_m = 0;
			int int_d = 0;
			double double_g = 0;
			char char_c = 0;
			double double_k = 0;
			char char_d = 0;
			char char_e = 0;
			double double_l = 0;
			char_a = char_b / char_c;
		}
		double_a = exp ( double_j ) ;
	}
	if(1)
	{
		unsigned_int_b = unsigned_int_a - unsigned_int_b;
		for(int looper_i=0; looper_i<5;looper_i++)
		{
			if(1)
			{
				unsigned_int_c = unsigned_int_c + unsigned_int_c;
			}
		}
		if(1)
		{
		}
		for(int looper_j=0; looper_j<10;looper_j++)
		{
			if(1)
			{
				getBuckets(unsigned_int_d,int_a,int_e,int_f);

				double_a = asin ( double_a ) ;
			}
			if(1)
			{
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				double double_a = 0;
				short short_a = 0;
				short short_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_c = 0;
				double double_d = 0;
				double double_e = 0;
				int int_b = 0;
				int int_c = 0;
				char char_a = 0;
				char char_b = 0;
				int int_e = 0;
				int int_f = 0;
				double double_f = 0;
				double double_h = 0;
				double double_i = 0;
				double double_j = 0;
				unsigned int unsigned_int_d = 0;
				int int_g = 0;
				float float_a = 0;
				float float_b = 0;
				double double_m = 0;
				int int_d = 0;
				double double_g = 0;
				char char_c = 0;
				double double_k = 0;
				char char_d = 0;
				char char_e = 0;
				double double_l = 0;
				double_e = log ( double_k ) ;
			}
		}
		for(int looper_k=0; looper_k<3;looper_k++)
		{
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			double double_a = 0;
			short short_a = 0;
			short short_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_c = 0;
			double double_d = 0;
			double double_e = 0;
			int int_b = 0;
			int int_c = 0;
			char char_a = 0;
			char char_b = 0;
			int int_e = 0;
			int int_f = 0;
			double double_f = 0;
			double double_h = 0;
			double double_i = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			int int_g = 0;
			float float_a = 0;
			float float_b = 0;
			double double_m = 0;
			int int_d = 0;
			double double_g = 0;
			char char_c = 0;
			double double_k = 0;
			char char_d = 0;
			char char_e = 0;
			double double_l = 0;
			char_a = char_d + char_e;
		}
	}
	if(1)
	{
		int_b = int_b * int_b;
		?:
		double_e = atan2 ( double_e , double_f ) ;
	}
	if(1)
	{
	}
	char_a = induceSA(double_c,int_b,int_a,int_c,int_f,int_g,int_b);

	long_a = long_c;
	float_a = float_b;
	for(int looper_l=0; looper_l<4;looper_l++)
	{
		double_e = acos ( double_f ) ;
	}
	for(int looper_m=0; looper_m<8;looper_m++)
	{
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_a = 0;
		short short_a = 0;
		short short_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_c = 0;
		double double_d = 0;
		double double_e = 0;
		int int_b = 0;
		int int_c = 0;
		char char_a = 0;
		char char_b = 0;
		int int_e = 0;
		int int_f = 0;
		double double_f = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		int int_g = 0;
		float float_a = 0;
		float float_b = 0;
		double double_m = 0;
		int int_d = 0;
		double double_g = 0;
		char char_c = 0;
		double double_k = 0;
		char char_d = 0;
		char char_e = 0;
		double double_l = 0;
		double_b = tan ( double_l ) ;
		double_m = fmod ( double_j , double_c ) ;
	}
	double_h = sqrt ( double_m ) ;
	char controller_t[3];
	scanf("%3s", controller_t);
	if( controller_t <"jm}" )
	{
		double_h = cos ( double_e ) ;
	}
}
int is_sa( float parameter_1,int parameter_2,int parameter_3)
{
	int int_a = 0;
	double double_a = 0;
	int int_b = 0;
	double double_b = 0;
	int int_c = 0;
	long long_a = 0;
	if(1)
	{
		return int_a;
	}
	sais_main(double_a,int_a,int_b,int_b,int_b,int_a);

	double_a = sqrt ( double_b ) ;
	if(1)
	{
		if(1)
		{
			int int_a = 0;
			double double_a = 0;
			int int_b = 0;
			double double_b = 0;
			int int_c = 0;
			long long_a = 0;
			long_a = long_a;
		}
		return int_c;
	}
	return int_b;
}
int is_bwt( char parameter_1,int parameter_2)
{
	double double_a = 0;
	int int_a = 0;
	float float_a = 0;
	int int_b = 0;
	double double_b = 0;
	int int_c = 0;
	double double_c = 0;
	double_a = atan2 ( double_a , double_a ) ;
	double_a = sinh ( double_a ) ;
	if(1)
	{
		return int_a;
	}
	for(int looper_a=0; looper_a<5;looper_a++)
	{
		if(1)
		{
			int_a = is_sa(float_a,int_a,int_b);

			int_a = int_a;
		}
		else
		{
			double_a = ldexp ( double_b , int_b ) ;
		}
	}
	for(int looper_b=0; looper_b<4;looper_b++)
	{
		int_a = int_c * int_c;
	}
	for(int looper_c=0; looper_c<8;looper_c++)
	{
		double_c = double_b;
	}
	double_c = floor ( double_b ) ;
	return int_c;
}
double err_fread_noeof(double parameter_2,double parameter_3,unsigned int parameter_4)
{
	double double_a = 0;
	long long_a = 0;
	double double_b = 0;
	_err_fatal_simple(double_a,long_a);

	double_a = acos ( double_b ) ;
	if(1)
	{
		?:
		double_a = cos ( double_b ) ;
	}
	return double_a;
}
long err_ftell( unsigned int parameter_1)
{
	double double_a = 0;
	long long_a = 0;
	int int_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	_err_fatal_simple(double_a,long_a);

	int_a = int_a;
	if(1)
	{
		double double_a = 0;
		long long_a = 0;
		int int_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned_int_a = unsigned_int_b;
	}
	return long_b;
}
int err_fseek( unsigned int parameter_1,long parameter_2,int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	long long_a = 0;
	int int_a = 0;
	double_a = sqrt ( double_b ) ;
	char controller_a[4];
	scanf("%4s", controller_a);
	if( controller_a <"WZ1h" )
	{
		_err_fatal_simple(double_c,long_a);

		double_a = ldexp ( double_c , int_a ) ;
	}
	return int_a;
}
void bwa_seq_len( unsigned int parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_c = 0;
	int int_c = 0;
	float float_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_d = 0;
	int int_d = 0;
	double_a = cosh ( double_b ) ;
	int_a = err_fseek(unsigned_int_a,long_a,int_b);

	double_a = ldexp ( double_a , int_b ) ;
	unsigned_int_c = unsigned_int_b + unsigned_int_c;
	double_b = err_fread_noeof(double_a,double_a,unsigned_int_c);

	double_c = ceil ( double_a ) ;
	double_a = sinh ( double_a ) ;
	int_c = err_fclose();

	float_a = float_a / float_a;
	unsigned_int_b = unsigned_int_b;
	long_b = err_ftell(unsigned_int_d);

	int_c = int_a / int_d;
}
unsigned int bwt_pac2bwt( float parameter_1,int parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	double double_c = 0;
	float float_a = 0;
	float float_b = 0;
	float float_c = 0;
	short short_a = 0;
	short short_b = 0;
	char char_a = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	double double_f = 0;
	unsigned int unsigned_int_a = 0;
	double double_g = 0;
	unsigned int unsigned_int_b = 0;
	double double_h = 0;
	char char_b = 0;
	double double_d = 0;
	double double_e = 0;
	double_a = fmod ( double_b , double_b ) ;
	int_a = int_a + int_a;
	double_b = sqrt ( double_a ) ;
	double_c = pow ( double_b , double_b ) ;
	float_c = float_a - float_b;
	short_a = short_a;
	double_b = acos ( double_b ) ;
	int_a = err_fclose();

	short_a = short_b;
	?:
	double_b = log10 ( double_a ) ;
	int_a = is_bwt(char_a,int_a);

	int_a = int_a + int_a;
	long_a = long_a * long_b;
	double_b = double_c;
	long_b = long_c;
	short_a = short_a - short_a;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		double double_c = 0;
		float float_a = 0;
		float float_b = 0;
		float float_c = 0;
		short short_a = 0;
		short short_b = 0;
		char char_a = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_f = 0;
		unsigned int unsigned_int_a = 0;
		double double_g = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		char char_b = 0;
		double double_d = 0;
		double double_e = 0;
		double_c = cosh ( double_a ) ;
		double_b = pow ( double_a , double_d ) ;
	}
	for(int looper_b=0; looper_b<4;looper_b++)
	{
		double_b = double_a;
	}
	double_a = tan ( double_b ) ;
	if(1)
	{
		int_a = int_a;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		double double_c = 0;
		float float_a = 0;
		float float_b = 0;
		float float_c = 0;
		short short_a = 0;
		short short_b = 0;
		char char_a = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_f = 0;
		unsigned int unsigned_int_a = 0;
		double double_g = 0;
		unsigned int unsigned_int_b = 0;
		double double_h = 0;
		char char_b = 0;
		double double_d = 0;
		double double_e = 0;
		double_e = floor ( double_f ) ;
		else
		{
			double_f = sinh ( double_c ) ;
		}
	}
	bwa_seq_len(unsigned_int_a);

	double_g = err_fread_noeof(double_f,double_f,unsigned_int_b);

	double_h = exp ( double_a ) ;
	for(int looper_c=0; looper_c<4;looper_c++)
	{
		double_h = acos ( double_f ) ;
	}
	char_b = char_b;
	return unsigned_int_b;
}
void BWTIncFree( double parameter_1)
{
	int int_a = 0;
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	double double_b = 0;
	char controller_a[3];
	scanf("%3s", controller_a);
	if( controller_a <"IN0" )
	{
	}
	int_a = int_a;
	short_a = short_b;
	double_a = acos ( double_b ) ;
}
int BWTFileSizeInWord( double parameter_1)
{
	int int_a = 0;
	return int_a;
}
void BWTSaveBwtCodeAndOcc( double parameter_1,unsigned int parameter_2)
{
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	char_b = char_a / char_a;
	char_b = char_b;
	int_a = BWTFileSizeInWord(double_a);

	unsigned_int_b = unsigned_int_a + unsigned_int_a;
	if(1)
	{
		double_b = tanh ( double_c ) ;
		double_d = tanh ( double_b ) ;
	}
	double_e = ceil ( double_d ) ;
	if(1)
	{
		double_b = pow ( double_f , double_d ) ;
		double_b = fmod ( double_c , double_c ) ;
	}
	if(1)
	{
		double_a = fabs ( double_d ) ;
		double_f = double_d;
	}
}
void BWTGenerateOccValueFromBwt( short parameter_1,double parameter_2,char parameter_3,int parameter_4,int parameter_5)
{
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	long long_a = 0;
	double double_h = 0;
	double double_i = 0;
	float float_a = 0;
	char char_c = 0;
	double double_j = 0;
	short short_c = 0;
	double double_k = 0;
	double double_l = 0;
	double double_m = 0;
	double double_n = 0;
	double double_o = 0;
	double double_p = 0;
	unsigned int unsigned_int_c = 0;
	float float_b = 0;
	float float_c = 0;
	int int_d = 0;
	int int_e = 0;
	double double_q = 0;
	float float_d = 0;
	double double_r = 0;
	double double_s = 0;
	float float_e = 0;
	double double_t = 0;
	short short_e = 0;
	unsigned int unsigned_int_e = 0;
	long long_b = 0;
	int int_c = 0;
	short short_a = 0;
	short short_b = 0;
	short short_d = 0;
	unsigned int unsigned_int_d = 0;
	char char_d = 0;
	int int_f = 0;
	float float_f = 0;
	double double_u = 0;
	char_a = char_b;
	int_b = int_a + int_a;
	double_a = log10 ( double_a ) ;
	double_b = atan2 ( double_a , double_a ) ;
	double_a = ceil ( double_c ) ;
	unsigned_int_a = unsigned_int_a * unsigned_int_b;
	double_c = fabs ( double_c ) ;
	int_b = int_a / int_a;
	double_d = atan2 ( double_c , double_a ) ;
	unsigned_int_a = unsigned_int_b / unsigned_int_a;
	double_b = fmod ( double_a , double_d ) ;
	double_b = exp ( double_c ) ;
	double_a = double_b / double_e;
	double_b = atan ( double_d ) ;
	double_b = log ( double_d ) ;
	double_c = log10 ( double_b ) ;
	double_b = acos ( double_c ) ;
	double_e = pow ( double_f , double_a ) ;
	double_e = floor ( double_c ) ;
	double_a = sinh ( double_g ) ;
	long_a = long_a;
	double_f = sqrt ( double_g ) ;
	double_c = sqrt ( double_d ) ;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		for(int looper_b=0; looper_b<10;looper_b++)
		{
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			long long_a = 0;
			double double_h = 0;
			double double_i = 0;
			float float_a = 0;
			char char_c = 0;
			double double_j = 0;
			short short_c = 0;
			double double_k = 0;
			double double_l = 0;
			double double_m = 0;
			double double_n = 0;
			double double_o = 0;
			double double_p = 0;
			unsigned int unsigned_int_c = 0;
			float float_b = 0;
			float float_c = 0;
			int int_d = 0;
			int int_e = 0;
			double double_q = 0;
			float float_d = 0;
			double double_r = 0;
			double double_s = 0;
			float float_e = 0;
			double double_t = 0;
			short short_e = 0;
			unsigned int unsigned_int_e = 0;
			long long_b = 0;
			int int_c = 0;
			short short_a = 0;
			short short_b = 0;
			short short_d = 0;
			unsigned int unsigned_int_d = 0;
			char char_d = 0;
			int int_f = 0;
			float float_f = 0;
			double double_u = 0;
			double_g = cos ( double_e ) ;
			int_a = int_a * int_a;
			long_b = long_a;
			double_d = sqrt ( double_c ) ;
			double_d = asin ( double_f ) ;
			for(int looper_c=0; looper_c<5;looper_c++)
			{
				int_c = int_c * int_a;
				double_b = floor ( double_h ) ;
				double_e = double_c - double_c;
				double_b = double_d + double_f;
			}
			if(1)
			{
				double_i = cos ( double_f ) ;
				double_c = log10 ( double_h ) ;
				double_h = tan ( double_b ) ;
				float_a = float_a + float_a;
				double_h = pow ( double_e , double_c ) ;
				short_a = short_b;
				int_b = int_b;
			}
			else
			{
				if(1)
				{
					double_f = double_a + double_h;
				}
				if(1)
				{
					char_c = char_a;
				}
				if(1)
				{
					double_f = cosh ( double_d ) ;
				}
				else
				{
					double_j = sinh ( double_f ) ;
				}
			}
			short_a = short_c / short_b;
			double_g = double_k + double_g;
			double_k = sqrt ( double_d ) ;
			unsigned_int_b = unsigned_int_b * unsigned_int_a;
			double_j = fmod ( double_d , double_b ) ;
			double_l = cosh ( double_f ) ;
			double_e = double_f;
			double_c = floor ( double_m ) ;
			char_b = char_c;
			unsigned_int_b = unsigned_int_b / unsigned_int_a;
			for(int looper_d=0; looper_d<7;looper_d++)
			{
				double_d = tan ( double_a ) ;
				double_j = fabs ( double_a ) ;
				int_b = int_c - int_c;
				double_n = log10 ( double_k ) ;
			}
			if(1)
			{
				char char_a = 0;
				char char_b = 0;
				int int_a = 0;
				int int_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				long long_a = 0;
				double double_h = 0;
				double double_i = 0;
				float float_a = 0;
				char char_c = 0;
				double double_j = 0;
				short short_c = 0;
				double double_k = 0;
				double double_l = 0;
				double double_m = 0;
				double double_n = 0;
				double double_o = 0;
				double double_p = 0;
				unsigned int unsigned_int_c = 0;
				float float_b = 0;
				float float_c = 0;
				int int_d = 0;
				int int_e = 0;
				double double_q = 0;
				float float_d = 0;
				double double_r = 0;
				double double_s = 0;
				float float_e = 0;
				double double_t = 0;
				short short_e = 0;
				unsigned int unsigned_int_e = 0;
				long long_b = 0;
				int int_c = 0;
				short short_a = 0;
				short short_b = 0;
				short short_d = 0;
				unsigned int unsigned_int_d = 0;
				char char_d = 0;
				int int_f = 0;
				float float_f = 0;
				double double_u = 0;
				short_c = short_d;
				int_a = int_c;
				double_a = ldexp ( double_d , int_a ) ;
				double_h = pow ( double_c , double_o ) ;
				double_p = log ( double_m ) ;
				unsigned_int_a = unsigned_int_c - unsigned_int_a;
				double_e = exp ( double_c ) ;
			}
			else
			{
				if(1)
				{
					double_b = atan ( double_h ) ;
				}
				if(1)
				{
					int_a = int_c * int_c;
				}
				if(1)
				{
					float_c = float_b * float_c;
				}
				else
				{
					double_l = ceil ( double_o ) ;
				}
			}
		}
		double_g = exp ( double_n ) ;
		int_e = int_d + int_a;
		double_m = tan ( double_n ) ;
		double_n = floor ( double_l ) ;
		double_j = ceil ( double_n ) ;
		double_h = double_m;
		unsigned_int_c = unsigned_int_b + unsigned_int_b;
		double_n = atan2 ( double_n , double_a ) ;
	}
	int looper_e = 0;
	while(looper_e < 6)
	{
		looper_e += 1;
		double_d = cosh ( double_f ) ;
		double_d = sinh ( double_b ) ;
		double_d = log10 ( double_j ) ;
		double_e = acos ( double_i ) ;
		double_a = atan ( double_b ) ;
		for(int looper_f=0; looper_f<1;looper_f++)
		{
			double_p = sinh ( double_c ) ;
			double_c = ceil ( double_m ) ;
			double_j = double_f;
			double_p = sinh ( double_e ) ;
		}
		if(1)
		{
			double_q = fmod ( double_l , double_m ) ;
			double_p = exp ( double_j ) ;
			double_o = fmod ( double_b , double_f ) ;
			double_g = floor ( double_o ) ;
			short_c = short_c * short_c;
			unsigned_int_b = unsigned_int_c - unsigned_int_c;
			double_f = log10 ( double_c ) ;
		}
		else
		{
			if(1)
			{
				char char_a = 0;
				char char_b = 0;
				int int_a = 0;
				int int_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				long long_a = 0;
				double double_h = 0;
				double double_i = 0;
				float float_a = 0;
				char char_c = 0;
				double double_j = 0;
				short short_c = 0;
				double double_k = 0;
				double double_l = 0;
				double double_m = 0;
				double double_n = 0;
				double double_o = 0;
				double double_p = 0;
				unsigned int unsigned_int_c = 0;
				float float_b = 0;
				float float_c = 0;
				int int_d = 0;
				int int_e = 0;
				double double_q = 0;
				float float_d = 0;
				double double_r = 0;
				double double_s = 0;
				float float_e = 0;
				double double_t = 0;
				short short_e = 0;
				unsigned int unsigned_int_e = 0;
				long long_b = 0;
				int int_c = 0;
				short short_a = 0;
				short short_b = 0;
				short short_d = 0;
				unsigned int unsigned_int_d = 0;
				char char_d = 0;
				int int_f = 0;
				float float_f = 0;
				double double_u = 0;
				unsigned_int_a = unsigned_int_a * unsigned_int_d;
			}
			if(1)
			{
				double_m = double_a - double_i;
			}
			if(1)
			{
				double_h = cosh ( double_q ) ;
			}
			else
			{
				float_a = float_d / float_a;
			}
		}
		double_d = log10 ( double_f ) ;
		double_l = floor ( double_q ) ;
		double_l = double_j;
		double_i = fmod ( double_j , double_r ) ;
		double_a = tanh ( double_s ) ;
		double_s = floor ( double_p ) ;
		float_d = float_b / float_c;
		double_s = sinh ( double_d ) ;
		double_s = fabs ( double_o ) ;
		double_k = fabs ( double_o ) ;
		for(int looper_g=0; looper_g<7;looper_g++)
		{
			double_h = ceil ( double_f ) ;
			double_s = floor ( double_s ) ;
			double_f = double_h;
			double_a = double_s + double_d;
		}
		if(1)
		{
			int_d = int_e;
			double_h = double_g;
			double_n = asin ( double_q ) ;
			double_a = double_s + double_c;
			float_c = float_d;
			double_s = tan ( double_q ) ;
			double_b = ceil ( double_e ) ;
		}
		else
		{
			if(1)
			{
				double_a = log10 ( double_q ) ;
			}
			if(1)
			{
				double_d = double_f;
			}
			if(1)
			{
				char char_a = 0;
				char char_b = 0;
				int int_a = 0;
				int int_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				long long_a = 0;
				double double_h = 0;
				double double_i = 0;
				float float_a = 0;
				char char_c = 0;
				double double_j = 0;
				short short_c = 0;
				double double_k = 0;
				double double_l = 0;
				double double_m = 0;
				double double_n = 0;
				double double_o = 0;
				double double_p = 0;
				unsigned int unsigned_int_c = 0;
				float float_b = 0;
				float float_c = 0;
				int int_d = 0;
				int int_e = 0;
				double double_q = 0;
				float float_d = 0;
				double double_r = 0;
				double double_s = 0;
				float float_e = 0;
				double double_t = 0;
				short short_e = 0;
				unsigned int unsigned_int_e = 0;
				long long_b = 0;
				int int_c = 0;
				short short_a = 0;
				short short_b = 0;
				short short_d = 0;
				unsigned int unsigned_int_d = 0;
				char char_d = 0;
				int int_f = 0;
				float float_f = 0;
				double double_u = 0;
				char_d = char_b;
			}
			else
			{
				float_b = float_e;
			}
		}
	}
	double_j = log ( double_g ) ;
	double_q = cosh ( double_t ) ;
	short_e = short_e;
	float_e = float_e - float_c;
	unsigned_int_c = unsigned_int_b;
	if(1)
	{
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		long long_a = 0;
		double double_h = 0;
		double double_i = 0;
		float float_a = 0;
		char char_c = 0;
		double double_j = 0;
		short short_c = 0;
		double double_k = 0;
		double double_l = 0;
		double double_m = 0;
		double double_n = 0;
		double double_o = 0;
		double double_p = 0;
		unsigned int unsigned_int_c = 0;
		float float_b = 0;
		float float_c = 0;
		int int_d = 0;
		int int_e = 0;
		double double_q = 0;
		float float_d = 0;
		double double_r = 0;
		double double_s = 0;
		float float_e = 0;
		double double_t = 0;
		short short_e = 0;
		unsigned int unsigned_int_e = 0;
		long long_b = 0;
		int int_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_d = 0;
		unsigned int unsigned_int_d = 0;
		char char_d = 0;
		int int_f = 0;
		float float_f = 0;
		double double_u = 0;
		for(int looper_h=0; looper_h<5;looper_h++)
		{
			char char_a = 0;
			char char_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			long long_a = 0;
			double double_h = 0;
			double double_i = 0;
			float float_a = 0;
			char char_c = 0;
			double double_j = 0;
			short short_c = 0;
			double double_k = 0;
			double double_l = 0;
			double double_m = 0;
			double double_n = 0;
			double double_o = 0;
			double double_p = 0;
			unsigned int unsigned_int_c = 0;
			float float_b = 0;
			float float_c = 0;
			int int_d = 0;
			int int_e = 0;
			double double_q = 0;
			float float_d = 0;
			double double_r = 0;
			double double_s = 0;
			float float_e = 0;
			double double_t = 0;
			short short_e = 0;
			unsigned int unsigned_int_e = 0;
			long long_b = 0;
			int int_c = 0;
			short short_a = 0;
			short short_b = 0;
			short short_d = 0;
			unsigned int unsigned_int_d = 0;
			char char_d = 0;
			int int_f = 0;
			float float_f = 0;
			double double_u = 0;
			float_f = float_d;
			double_t = atan ( double_g ) ;
			char_a = char_c - char_b;
			double_k = sinh ( double_r ) ;
		}
		if(1)
		{
			double_f = tan ( double_t ) ;
			double_i = sinh ( double_r ) ;
			double_e = sqrt ( double_j ) ;
			double_f = cos ( double_s ) ;
			double_s = log10 ( double_j ) ;
			double_k = ldexp ( double_c , int_f ) ;
			double_k = fabs ( double_c ) ;
		}
		else
		{
			if(1)
			{
				double_p = double_a;
			}
			if(1)
			{
				double_o = log ( double_c ) ;
			}
			if(1)
			{
				char char_a = 0;
				char char_b = 0;
				int int_a = 0;
				int int_b = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				long long_a = 0;
				double double_h = 0;
				double double_i = 0;
				float float_a = 0;
				char char_c = 0;
				double double_j = 0;
				short short_c = 0;
				double double_k = 0;
				double double_l = 0;
				double double_m = 0;
				double double_n = 0;
				double double_o = 0;
				double double_p = 0;
				unsigned int unsigned_int_c = 0;
				float float_b = 0;
				float float_c = 0;
				int int_d = 0;
				int int_e = 0;
				double double_q = 0;
				float float_d = 0;
				double double_r = 0;
				double double_s = 0;
				float float_e = 0;
				double double_t = 0;
				short short_e = 0;
				unsigned int unsigned_int_e = 0;
				long long_b = 0;
				int int_c = 0;
				short short_a = 0;
				short short_b = 0;
				short short_d = 0;
				unsigned int unsigned_int_d = 0;
				char char_d = 0;
				int int_f = 0;
				float float_f = 0;
				double double_u = 0;
				double_p = pow ( double_u , double_g ) ;
			}
			else
			{
				int_f = int_e;
			}
		}
	}
	double_q = ceil ( double_i ) ;
	double_r = acos ( double_r ) ;
	double_l = double_r;
	unsigned_int_b = unsigned_int_a - unsigned_int_e;
}
void BWTClearTrailingBwtCode()
{
	long long_a = 0;
	float float_a = 0;
	short short_a = 0;
	double double_a = 0;
	double double_b = 0;
	float float_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_d = 0;
	long_a = long_a;
	float_a = BWTResidentSizeInWord(short_a);

	double_a = acos ( double_b ) ;
	float_a = float_b * float_b;
	double_a = atan2 ( double_b , double_c ) ;
	float_a = float_b;
	unsigned_int_a = unsigned_int_a - unsigned_int_a;
	if(1)
	{
		double_a = floor ( double_c ) ;
	}
	else
	{
		if(1)
		{
			long long_a = 0;
			float float_a = 0;
			short short_a = 0;
			double double_a = 0;
			double double_b = 0;
			float float_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_d = 0;
			unsigned_int_a = unsigned_int_b;
		}
	}
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		long long_a = 0;
		float float_a = 0;
		short short_a = 0;
		double double_a = 0;
		double double_b = 0;
		float float_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_d = 0;
		double_d = cos ( double_b ) ;
	}
}
void BWTIncMergeBwt( long parameter_1,long parameter_2,unsigned int parameter_3,char parameter_4,double parameter_5,int parameter_6)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_g = 0;
	char char_a = 0;
	double double_h = 0;
	double double_k = 0;
	long long_a = 0;
	long long_b = 0;
	short short_b = 0;
	double double_i = 0;
	double double_j = 0;
	int int_d = 0;
	int int_e = 0;
	short short_a = 0;
	long long_c = 0;
	float float_a = 0;
	float float_b = 0;
	short short_c = 0;
	char char_b = 0;
	char char_c = 0;
	double_a = atan2 ( double_b , double_b ) ;
	double_b = double_a - double_a;
	double_b = double_a;
	int_b = int_a + int_a;
	unsigned_int_a = unsigned_int_a;
	double_c = fmod ( double_a , double_c ) ;
	double_a = atan2 ( double_a , double_d ) ;
	double_c = tanh ( double_a ) ;
	double_b = pow ( double_e , double_c ) ;
	double_d = ceil ( double_f ) ;
	unsigned_int_b = unsigned_int_c;
	int looper_a = 0;
	while(looper_a < 5)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_g = 0;
		char char_a = 0;
		double double_h = 0;
		double double_k = 0;
		long long_a = 0;
		long long_b = 0;
		short short_b = 0;
		double double_i = 0;
		double double_j = 0;
		int int_d = 0;
		int int_e = 0;
		short short_a = 0;
		long long_c = 0;
		float float_a = 0;
		float float_b = 0;
		short short_c = 0;
		char char_b = 0;
		char char_c = 0;
		looper_a += 1;
		int looper_b = 0;
		while(looper_b < 2)
		{
			looper_b += 1;
			char controller_a[5];
			scanf("%5s", controller_a);
			if( strcmp( controller_a, "pz;lC") == 0)
			{
				int_c = int_c;
				double_d = exp ( double_f ) ;
				int_c = int_a;
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					int int_a = 0;
					int int_b = 0;
					unsigned int unsigned_int_a = 0;
					double double_c = 0;
					double double_d = 0;
					double double_e = 0;
					double double_f = 0;
					unsigned int unsigned_int_b = 0;
					unsigned int unsigned_int_c = 0;
					int int_c = 0;
					unsigned int unsigned_int_d = 0;
					double double_g = 0;
					char char_a = 0;
					double double_h = 0;
					double double_k = 0;
					long long_a = 0;
					long long_b = 0;
					short short_b = 0;
					double double_i = 0;
					double double_j = 0;
					int int_d = 0;
					int int_e = 0;
					short short_a = 0;
					long long_c = 0;
					float float_a = 0;
					float float_b = 0;
					short short_c = 0;
					char char_b = 0;
					char char_c = 0;
					unsigned_int_b = unsigned_int_d;
					long_a = long_b;
					short_a = short_b;
				}
			}
			double_f = double_f - double_b;
		}
		if(1)
		{
			double_f = double_c;
		}
		else
		{
			double_b = acos ( double_d ) ;
		}
		double_f = sqrt ( double_e ) ;
		double_e = log10 ( double_a ) ;
		double_b = double_d;
		if(1)
		{
			double_g = tan ( double_a ) ;
			unsigned_int_a = unsigned_int_a + unsigned_int_a;
			double_g = pow ( double_e , double_a ) ;
			unsigned_int_a = unsigned_int_a;
			int looper_c = 0;
			while(looper_c < 8)
			{
				looper_c += 1;
				char_a = char_a;
				double_g = atan2 ( double_e , double_f ) ;
				long_a = long_a + long_a;
				int_c = int_a / int_b;
			}
		}
		char controller_e[4];
		scanf("%4s", controller_e);
		if( controller_e <"pdt(" )
		{
			double_c = tan ( double_h ) ;
			double_i = log10 ( double_a ) ;
			int_a = int_b * int_b;
			double_h = log ( double_d ) ;
			int looper_d = 0;
			while(looper_d < 1)
			{
				looper_d += 1;
				int_c = int_c * int_c;
				double_i = atan ( double_g ) ;
				double_c = sinh ( double_f ) ;
				double_c = double_j + double_i;
			}
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_g = 0;
			char char_a = 0;
			double double_h = 0;
			double double_k = 0;
			long long_a = 0;
			long long_b = 0;
			short short_b = 0;
			double double_i = 0;
			double double_j = 0;
			int int_d = 0;
			int int_e = 0;
			short short_a = 0;
			long long_c = 0;
			float float_a = 0;
			float float_b = 0;
			short short_c = 0;
			char char_b = 0;
			char char_c = 0;
			long_b = long_c / long_a;
			double_c = atan ( double_e ) ;
			int looper_e = 0;
			while(looper_e < 6)
			{
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				int int_b = 0;
				unsigned int unsigned_int_a = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				int int_c = 0;
				unsigned int unsigned_int_d = 0;
				double double_g = 0;
				char char_a = 0;
				double double_h = 0;
				double double_k = 0;
				long long_a = 0;
				long long_b = 0;
				short short_b = 0;
				double double_i = 0;
				double double_j = 0;
				int int_d = 0;
				int int_e = 0;
				short short_a = 0;
				long long_c = 0;
				float float_a = 0;
				float float_b = 0;
				short short_c = 0;
				char char_b = 0;
				char char_c = 0;
				looper_e += 1;
				float_b = float_a - float_b;
				int_c = int_b + int_b;
				float_b = float_b;
				double_c = double_i;
			}
		}
		double_e = ldexp ( double_h , int_c ) ;
		double_b = atan ( double_a ) ;
		int_d = int_e;
		double_j = ldexp ( double_i , int_e ) ;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_g = 0;
			char char_a = 0;
			double double_h = 0;
			double double_k = 0;
			long long_a = 0;
			long long_b = 0;
			short short_b = 0;
			double double_i = 0;
			double double_j = 0;
			int int_d = 0;
			int int_e = 0;
			short short_a = 0;
			long long_c = 0;
			float float_a = 0;
			float float_b = 0;
			short short_c = 0;
			char char_b = 0;
			char char_c = 0;
			short_b = short_c;
		}
		else
		{
			double_f = floor ( double_k ) ;
		}
	}
	int looper_f = 0;
	while(looper_f < 9)
	{
		looper_f += 1;
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_g = 0;
			char char_a = 0;
			double double_h = 0;
			double double_k = 0;
			long long_a = 0;
			long long_b = 0;
			short short_b = 0;
			double double_i = 0;
			double double_j = 0;
			int int_d = 0;
			int int_e = 0;
			short short_a = 0;
			long long_c = 0;
			float float_a = 0;
			float float_b = 0;
			short short_c = 0;
			char char_b = 0;
			char char_c = 0;
			double_b = ldexp ( double_g , int_c ) ;
			char_c = char_b * char_a;
			double_h = ceil ( double_h ) ;
			if(1)
			{
				double_h = tanh ( double_f ) ;
				double_k = asin ( double_g ) ;
				unsigned_int_c = unsigned_int_d / unsigned_int_a;
			}
		}
		double_h = ldexp ( double_c , int_c ) ;
	}
}
int BWTIncBuildBwt( char parameter_1,int parameter_2,long parameter_3,unsigned int parameter_4)
{
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	long_a = long_b;
	double_a = ceil ( double_a ) ;
	double_b = ceil ( double_c ) ;
	double_c = fmod ( double_d , double_a ) ;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double_c = double_b - double_e;
		double_a = fabs ( double_f ) ;
		double_b = atan ( double_b ) ;
		double_f = exp ( double_g ) ;
	}
}
double BWTIncBuildRelativeRank( float parameter_1,int parameter_2,float parameter_3,unsigned int parameter_4,short parameter_5,double parameter_6)
{
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_g = 0;
	double double_h = 0;
	long long_d = 0;
	unsigned int unsigned_int_c = 0;
	double double_i = 0;
	float float_a = 0;
	int int_c = 0;
	double double_j = 0;
	unsigned int unsigned_int_d = 0;
	double_a = floor ( double_b ) ;
	unsigned_int_a = unsigned_int_b;
	double_c = floor ( double_c ) ;
	double_a = sqrt ( double_d ) ;
	double_c = log10 ( double_c ) ;
	double_e = exp ( double_b ) ;
	if(1)
	{
		double_b = exp ( double_d ) ;
	}
	double_e = atan ( double_f ) ;
	double_b = sinh ( double_b ) ;
	if(1)
	{
		double_d = log ( double_f ) ;
		double_b = tan ( double_b ) ;
	}
	long_c = long_a - long_b;
	int_a = int_a;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_g = 0;
		double double_h = 0;
		long long_d = 0;
		unsigned int unsigned_int_c = 0;
		double double_i = 0;
		float float_a = 0;
		int int_c = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		int_b = int_a * int_b;
		if(1)
		{
			double_a = cos ( double_b ) ;
		}
		double_g = asin ( double_h ) ;
		if(1)
		{
			if(1)
			{
				double_f = double_g;
			}
			double_a = double_c;
			double_a = tanh ( double_c ) ;
		}
		char controller_f[5];
		scanf("%5s", controller_f);
		if( controller_f >"X[e;X" )
		{
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_g = 0;
			double double_h = 0;
			long long_d = 0;
			unsigned int unsigned_int_c = 0;
			double double_i = 0;
			float float_a = 0;
			int int_c = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			long_b = long_d - long_b;
		}
		else
		{
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_g = 0;
			double double_h = 0;
			long long_d = 0;
			unsigned int unsigned_int_c = 0;
			double double_i = 0;
			float float_a = 0;
			int int_c = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			if(1)
			{
				if(1)
				{
					double double_a = 0;
					double double_b = 0;
					unsigned int unsigned_int_a = 0;
					unsigned int unsigned_int_b = 0;
					double double_c = 0;
					double double_d = 0;
					double double_e = 0;
					double double_f = 0;
					long long_a = 0;
					long long_b = 0;
					long long_c = 0;
					int int_a = 0;
					int int_b = 0;
					double double_g = 0;
					double double_h = 0;
					long long_d = 0;
					unsigned int unsigned_int_c = 0;
					double double_i = 0;
					float float_a = 0;
					int int_c = 0;
					double double_j = 0;
					unsigned int unsigned_int_d = 0;
					double_d = ldexp ( double_h , int_c ) ;
				}
				else
				{
					unsigned_int_c = unsigned_int_c;
				}
			}
			double_i = tanh ( double_d ) ;
			float_a = float_a;
			double_g = cosh ( double_i ) ;
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				int int_a = 0;
				int int_b = 0;
				double double_g = 0;
				double double_h = 0;
				long long_d = 0;
				unsigned int unsigned_int_c = 0;
				double double_i = 0;
				float float_a = 0;
				int int_c = 0;
				double double_j = 0;
				unsigned int unsigned_int_d = 0;
				double_i = floor ( double_j ) ;
				unsigned_int_c = unsigned_int_d;
			}
		}
	}
}
unsigned int BWTIncSortKey( long parameter_1,float parameter_2,unsigned int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	char char_a = 0;
	char char_b = 0;
	long long_a = 0;
	long long_b = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	unsigned int unsigned_int_e = 0;
	double double_f = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_k = 0;
	char char_d = 0;
	double double_g = 0;
	char char_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_h = 0;
	double double_i = 0;
	unsigned int unsigned_int_d = 0;
	double double_j = 0;
	int int_c = 0;
	float float_a = 0;
	float float_b = 0;
	float float_c = 0;
	char char_e = 0;
	long long_c = 0;
	long long_d = 0;
	long long_e = 0;
	long long_f = 0;
	double double_l = 0;
	char char_f = 0;
	double_a = double_a;
	double_b = log10 ( double_c ) ;
	char_a = char_b;
	long_a = long_b;
	double_d = double_d;
	double_d = acos ( double_b ) ;
	double_c = cos ( double_d ) ;
	if(1)
	{
		return unsigned_int_a;
	}
	double_d = atan ( double_e ) ;
	double_c = tanh ( double_a ) ;
	double_c = log ( double_c ) ;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		char char_a = 0;
		char char_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		unsigned int unsigned_int_e = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_k = 0;
		char char_d = 0;
		double double_g = 0;
		char char_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_h = 0;
		double double_i = 0;
		unsigned int unsigned_int_d = 0;
		double double_j = 0;
		int int_c = 0;
		float float_a = 0;
		float float_b = 0;
		float float_c = 0;
		char char_e = 0;
		long long_c = 0;
		long long_d = 0;
		long long_e = 0;
		long long_f = 0;
		double double_l = 0;
		char char_f = 0;
		for(int looper_b=0; looper_b<4;looper_b++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			char char_a = 0;
			char char_b = 0;
			long long_a = 0;
			long long_b = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			double double_e = 0;
			unsigned int unsigned_int_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_k = 0;
			char char_d = 0;
			double double_g = 0;
			char char_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_h = 0;
			double double_i = 0;
			unsigned int unsigned_int_d = 0;
			double double_j = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			float float_c = 0;
			char char_e = 0;
			long long_c = 0;
			long long_d = 0;
			long long_e = 0;
			long long_f = 0;
			double double_l = 0;
			char char_f = 0;
			if(1)
			{
				for(int looper_c=0; looper_c<7;looper_c++)
				{
					unsigned_int_a = unsigned_int_a;
					double_c = atan2 ( double_a , double_a ) ;
					for(int looper_d=0; looper_d<7;looper_d++)
					{
						double_d = exp ( double_b ) ;
						double_e = fmod ( double_c , double_b ) ;
					}
					if(1)
					{
						char_b = char_a;
						double_d = asin ( double_d ) ;
					}
				}
			}
			double_d = fabs ( double_a ) ;
			if(1)
			{
				double_e = double_f - double_e;
				double_a = log10 ( double_e ) ;
				double_c = tan ( double_f ) ;
				double_c = cosh ( double_a ) ;
				double_f = tanh ( double_c ) ;
				double_g = double_a * double_g;
			}
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				char char_a = 0;
				char char_b = 0;
				long long_a = 0;
				long long_b = 0;
				double double_d = 0;
				unsigned int unsigned_int_a = 0;
				double double_e = 0;
				unsigned int unsigned_int_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				double double_k = 0;
				char char_d = 0;
				double double_g = 0;
				char char_c = 0;
				int int_a = 0;
				int int_b = 0;
				double double_h = 0;
				double double_i = 0;
				unsigned int unsigned_int_d = 0;
				double double_j = 0;
				int int_c = 0;
				float float_a = 0;
				float float_b = 0;
				float float_c = 0;
				char char_e = 0;
				long long_c = 0;
				long long_d = 0;
				long long_e = 0;
				long long_f = 0;
				double double_l = 0;
				char char_f = 0;
				char_c = char_c;
				long_a = long_b - long_c;
				unsigned_int_c = unsigned_int_a / unsigned_int_b;
				long_a = long_c;
				long_b = long_d;
				int_a = int_a + int_a;
			}
			if(1)
			{
				int_b = int_a * int_a;
				double_d = cosh ( double_d ) ;
				double_g = cos ( double_c ) ;
				double_g = ceil ( double_h ) ;
				double_i = double_g;
				unsigned_int_a = unsigned_int_d - unsigned_int_e;
			}
			double_c = tan ( double_e ) ;
			double_c = ceil ( double_h ) ;
			double_e = acos ( double_j ) ;
			for(int looper_e=0; looper_e<3;looper_e++)
			{
				int looper_f = 0;
				while(looper_f < 1)
				{
					looper_f += 1;
					double_h = acos ( double_d ) ;
					double_f = sqrt ( double_h ) ;
				}
				int looper_g = 0;
				while(looper_g < 8)
				{
					looper_g += 1;
					if(1)
					{
						double_d = cosh ( double_d ) ;
					}
					unsigned_int_d = unsigned_int_d;
				}
				if(1)
				{
				}
				int_b = int_b - int_c;
				double_f = tanh ( double_b ) ;
				double_c = sinh ( double_g ) ;
				float_c = float_a / float_b;
				double_a = double_k;
				unsigned_int_a = unsigned_int_d;
				if(1)
				{
					double_c = exp ( double_k ) ;
				}
				double_c = sqrt ( double_i ) ;
				double_c = floor ( double_f ) ;
			}
			double_k = double_g * double_j;
			double_i = tanh ( double_k ) ;
			unsigned_int_b = unsigned_int_e * unsigned_int_c;
			double_i = pow ( double_d , double_h ) ;
			int_c = int_b;
			unsigned_int_b = unsigned_int_c * unsigned_int_c;
			char_d = char_e;
			double_i = floor ( double_f ) ;
			char controller_j[4];
			scanf("%4s", controller_j);
			if( controller_j >"CnNg" )
			{
				double_a = atan2 ( double_i , double_a ) ;
				for(int looper_h=0; looper_h<5;looper_h++)
				{
					double double_a = 0;
					double double_b = 0;
					double double_c = 0;
					char char_a = 0;
					char char_b = 0;
					long long_a = 0;
					long long_b = 0;
					double double_d = 0;
					unsigned int unsigned_int_a = 0;
					double double_e = 0;
					unsigned int unsigned_int_e = 0;
					double double_f = 0;
					unsigned int unsigned_int_b = 0;
					unsigned int unsigned_int_c = 0;
					double double_k = 0;
					char char_d = 0;
					double double_g = 0;
					char char_c = 0;
					int int_a = 0;
					int int_b = 0;
					double double_h = 0;
					double double_i = 0;
					unsigned int unsigned_int_d = 0;
					double double_j = 0;
					int int_c = 0;
					float float_a = 0;
					float float_b = 0;
					float float_c = 0;
					char char_e = 0;
					long long_c = 0;
					long long_d = 0;
					long long_e = 0;
					long long_f = 0;
					double double_l = 0;
					char char_f = 0;
					int looper_i = 0;
					while(looper_i < 10)
					{
						looper_i += 1;
						float_a = float_b + float_a;
					}
					int looper_j = 0;
					while(looper_j < 9)
					{
						looper_j += 1;
						int_a = int_b / int_b;
					}
					if(1)
					{
					}
					long_a = long_e;
					long_f = long_e - long_a;
					float_b = float_c * float_b;
					char_a = char_c - char_d;
					double_a = ceil ( double_f ) ;
					double_g = ldexp ( double_d , int_a ) ;
					double_d = exp ( double_j ) ;
					double_d = atan2 ( double_d , double_d ) ;
				}
			}
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				char char_a = 0;
				char char_b = 0;
				long long_a = 0;
				long long_b = 0;
				double double_d = 0;
				unsigned int unsigned_int_a = 0;
				double double_e = 0;
				unsigned int unsigned_int_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				double double_k = 0;
				char char_d = 0;
				double double_g = 0;
				char char_c = 0;
				int int_a = 0;
				int int_b = 0;
				double double_h = 0;
				double double_i = 0;
				unsigned int unsigned_int_d = 0;
				double double_j = 0;
				int int_c = 0;
				float float_a = 0;
				float float_b = 0;
				float float_c = 0;
				char char_e = 0;
				long long_c = 0;
				long long_d = 0;
				long long_e = 0;
				long long_f = 0;
				double double_l = 0;
				char char_f = 0;
				char_d = char_a;
				double_h = fmod ( double_b , double_g ) ;
				double_d = double_l;
				unsigned_int_a = unsigned_int_a / unsigned_int_a;
			}
			else
			{
				unsigned_int_b = unsigned_int_c * unsigned_int_d;
				double_i = tan ( double_j ) ;
				double_c = tan ( double_e ) ;
				if(1)
				{
					double_i = log10 ( double_g ) ;
				}
				else
				{
				}
			}
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			char char_a = 0;
			char char_b = 0;
			long long_a = 0;
			long long_b = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			double double_e = 0;
			unsigned int unsigned_int_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			double double_k = 0;
			char char_d = 0;
			double double_g = 0;
			char char_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_h = 0;
			double double_i = 0;
			unsigned int unsigned_int_d = 0;
			double double_j = 0;
			int int_c = 0;
			float float_a = 0;
			float float_b = 0;
			float float_c = 0;
			char char_e = 0;
			long long_c = 0;
			long long_d = 0;
			long long_e = 0;
			long long_f = 0;
			double double_l = 0;
			char char_f = 0;
			double_f = atan2 ( double_d , double_k ) ;
			char_d = char_f;
			unsigned_int_b = unsigned_int_e * unsigned_int_c;
		}
		else
		{
			return unsigned_int_e;
		}
	}
}
float BackwardDNAOccCount( char parameter_1,char parameter_2,unsigned int parameter_3,double parameter_4)
{
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	int int_a = 0;
	double double_b = 0;
	float float_a = 0;
	float float_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	short short_a = 0;
	double double_d = 0;
	char char_a = 0;
	double double_c = 0;
	char char_b = 0;
	double double_e = 0;
	long_b = long_a - long_b;
	double_a = ldexp ( double_a , int_a ) ;
	double_a = fmod ( double_b , double_b ) ;
	float_a = float_b;
	unsigned_int_c = unsigned_int_a * unsigned_int_b;
	double_b = asin ( double_b ) ;
	short_a = short_a;
	char controller_a[3];
	scanf("%3s", controller_a);
	if( controller_a <"oIX" )
	{
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		int int_a = 0;
		double double_b = 0;
		float float_a = 0;
		float float_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_a = 0;
		double double_d = 0;
		char char_a = 0;
		double double_c = 0;
		char char_b = 0;
		double double_e = 0;
		double_c = cosh ( double_d ) ;
		double_a = atan ( double_c ) ;
		char_b = char_a * char_a;
		double_d = asin ( double_a ) ;
	}
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		long long_a = 0;
		long long_b = 0;
		double double_a = 0;
		int int_a = 0;
		double double_b = 0;
		float float_a = 0;
		float float_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_a = 0;
		double double_d = 0;
		char char_a = 0;
		double double_c = 0;
		char char_b = 0;
		double double_e = 0;
		double_d = atan2 ( double_e , double_e ) ;
		unsigned_int_a = unsigned_int_a;
		char_a = char_a;
	}
	return float_a;
}
void ForwardDNAOccCount( unsigned int parameter_1,char parameter_2,unsigned int parameter_3,unsigned int parameter_4)
{
	double double_a = 0;
	double double_b = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	int int_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	short short_d = 0;
	short short_e = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	double_a = exp ( double_b ) ;
	double_b = double_b + double_a;
	short_c = short_a + short_b;
	double_a = ldexp ( double_b , int_a ) ;
	double_c = exp ( double_d ) ;
	double_e = cosh ( double_a ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		short short_d = 0;
		short short_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		unsigned_int_a = unsigned_int_b;
		short_e = short_d / short_d;
	}
	char controller_a[4];
	scanf("%4s", controller_a);
	if( controller_a <"i72]" )
	{
		double double_a = 0;
		double double_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		short short_d = 0;
		short short_e = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		unsigned_int_d = unsigned_int_c - unsigned_int_d;
		unsigned_int_e = unsigned_int_c / unsigned_int_e;
		double_a = acos ( double_c ) ;
		double_c = tanh ( double_a ) ;
	}
}
long BWTOccValueExplicit( unsigned int parameter_1,long parameter_2,short parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	long long_b = 0;
	double_a = log10 ( double_a ) ;
	double_b = double_a - double_a;
	if(1)
	{
		return long_a;
	}
	else
	{
		return long_b;
	}
}
int BWTOccValue( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_a = 0;
	float float_a = 0;
	char char_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_b = 0;
	long long_a = 0;
	short short_a = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	int int_c = 0;
	int int_b = 0;
	double_a = cosh ( double_a ) ;
	float_a = BackwardDNAOccCount(char_a,char_a,unsigned_int_a,double_b);

	double_b = double_b;
	char controller_a[3];
	scanf("%3s", controller_a);
	if( controller_a <"ABV" )
	{
		double double_a = 0;
		float float_a = 0;
		char char_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_b = 0;
		long long_a = 0;
		short short_a = 0;
		int int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		int int_c = 0;
		int int_b = 0;
		long_a = BWTOccValueExplicit(unsigned_int_a,long_a,short_a);

		int_b = int_a * int_a;
	}
	double_b = fabs ( double_a ) ;
	double_b = sinh ( double_b ) ;
	ForwardDNAOccCount(unsigned_int_b,char_a,unsigned_int_c,unsigned_int_d);

	double_a = tan ( double_b ) ;
	char controller_b[5];
	scanf("%5s", controller_b);
	if( controller_b <"eu;j1" )
	{
		return int_a;
	}
	if(1)
	{
		return int_c;
	}
	else
	{
		return int_a;
	}
}
unsigned int BWTIncGetAbsoluteRank( char parameter_1,char parameter_2,long parameter_3,char parameter_4,int parameter_5,char parameter_6,double parameter_7)
{
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	short short_a = 0;
	short short_b = 0;
	double double_e = 0;
	short short_c = 0;
	int int_d = 0;
	double double_f = 0;
	double double_g = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	float_a = float_b;
	double_a = fmod ( double_b , double_a ) ;
	unsigned_int_a = unsigned_int_a;
	int_a = BWTOccValue(int_b,int_a,unsigned_int_a);

	double_c = fmod ( double_b , double_b ) ;
	double_d = exp ( double_c ) ;
	double_d = atan ( double_c ) ;
	double_b = cos ( double_b ) ;
	unsigned_int_a = unsigned_int_b;
	double_c = ldexp ( double_a , int_c ) ;
	for(int looper_a=0; looper_a<6;looper_a++)
	{
		short_b = short_a - short_b;
		double_e = ceil ( double_a ) ;
	}
	short_c = short_a;
	int_c = int_d;
	double_d = ceil ( double_b ) ;
	double_b = double_d;
	double_f = ceil ( double_f ) ;
	for(int looper_b=0; looper_b<5;looper_b++)
	{
		double_e = tan ( double_d ) ;
		for(int looper_c=0; looper_c<3;looper_c++)
		{
			double_c = ldexp ( double_f , int_d ) ;
			double_f = tan ( double_g ) ;
			char controller_a[4];
			scanf("%4s", controller_a);
			if( controller_a <"+B~y" )
			{
				int_b = int_c;
				double_g = pow ( double_b , double_a ) ;
				short_c = short_c - short_b;
			}
			else
			{
				float float_a = 0;
				float float_b = 0;
				double double_a = 0;
				double double_b = 0;
				unsigned int unsigned_int_a = 0;
				int int_a = 0;
				int int_b = 0;
				double double_c = 0;
				double double_d = 0;
				unsigned int unsigned_int_b = 0;
				int int_c = 0;
				short short_a = 0;
				short short_b = 0;
				double double_e = 0;
				short short_c = 0;
				int int_d = 0;
				double double_f = 0;
				double double_g = 0;
				char char_a = 0;
				char char_b = 0;
				unsigned int unsigned_int_e = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				float_b = float_b + float_b;
				double_g = ceil ( double_d ) ;
				unsigned_int_d = unsigned_int_c - unsigned_int_a;
			}
			double_g = pow ( double_a , double_a ) ;
			double_d = sinh ( double_g ) ;
		}
	}
	char_b = char_a / char_b;
	double_d = log ( double_g ) ;
	return unsigned_int_e;
}
double ForwardDNAAllOccCountNoLimit( char parameter_1,short parameter_2,short parameter_3,float parameter_4)
{
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	float float_a = 0;
	float float_b = 0;
	double double_b = 0;
	double double_c = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	float float_c = 0;
	int int_c = 0;
	int int_d = 0;
	int int_e = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	int int_f = 0;
	long long_d = 0;
	double double_i = 0;
	double_a = double_a;
	int_a = int_b;
	double_a = log ( double_a ) ;
	float_b = float_a * float_b;
	double_a = cosh ( double_b ) ;
	double_b = sqrt ( double_c ) ;
	double_a = exp ( double_c ) ;
	long_c = long_a / long_b;
	float_c = float_a;
	double_a = sinh ( double_c ) ;
	int_e = int_c / int_d;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		float float_a = 0;
		float float_b = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		float float_c = 0;
		int int_c = 0;
		int int_d = 0;
		int int_e = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		int int_f = 0;
		long long_d = 0;
		double double_i = 0;
		unsigned_int_a = unsigned_int_a * unsigned_int_b;
		for(int looper_b=0; looper_b<5;looper_b++)
		{
			float_c = float_b;
			double_c = atan ( double_c ) ;
			unsigned_int_a = unsigned_int_c / unsigned_int_c;
		}
		if(1)
		{
			double_a = double_d;
			double_e = asin ( double_e ) ;
			double_e = fabs ( double_b ) ;
			double_e = tanh ( double_c ) ;
			double_b = ldexp ( double_d , int_a ) ;
			unsigned_int_c = unsigned_int_b * unsigned_int_b;
			double_a = ldexp ( double_b , int_e ) ;
		}
		else
		{
			double double_a = 0;
			int int_a = 0;
			int int_b = 0;
			float float_a = 0;
			float float_b = 0;
			double double_b = 0;
			double double_c = 0;
			long long_a = 0;
			long long_b = 0;
			long long_c = 0;
			float float_c = 0;
			int int_c = 0;
			int int_d = 0;
			int int_e = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			unsigned int unsigned_int_d = 0;
			int int_f = 0;
			long long_d = 0;
			double double_i = 0;
			if(1)
			{
				unsigned_int_c = unsigned_int_a * unsigned_int_d;
			}
			if(1)
			{
				unsigned_int_b = unsigned_int_b;
			}
			if(1)
			{
				unsigned_int_d = unsigned_int_c;
			}
			if(1)
			{
				double_c = sinh ( double_c ) ;
			}
			else
			{
				double double_a = 0;
				int int_a = 0;
				int int_b = 0;
				float float_a = 0;
				float float_b = 0;
				double double_b = 0;
				double double_c = 0;
				long long_a = 0;
				long long_b = 0;
				long long_c = 0;
				float float_c = 0;
				int int_c = 0;
				int int_d = 0;
				int int_e = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				double double_h = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				unsigned int unsigned_int_d = 0;
				int int_f = 0;
				long long_d = 0;
				double double_i = 0;
				double_a = ldexp ( double_f , int_f ) ;
				long_b = long_d;
			}
		}
	}
	double_c = sqrt ( double_g ) ;
	for(int looper_c=0; looper_c<10;looper_c++)
	{
		double_d = floor ( double_f ) ;
		double_e = acos ( double_f ) ;
		double_e = sqrt ( double_c ) ;
	}
	if(1)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		float float_a = 0;
		float float_b = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		float float_c = 0;
		int int_c = 0;
		int int_d = 0;
		int int_e = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		int int_f = 0;
		long long_d = 0;
		double double_i = 0;
		double_e = sinh ( double_h ) ;
		double_c = double_c;
		double_d = double_d * double_h;
		double_g = sqrt ( double_i ) ;
	}
	double_f = log10 ( double_b ) ;
	double_a = acos ( double_h ) ;
	double_f = log10 ( double_f ) ;
	double_h = fmod ( double_c , double_a ) ;
	double_c = exp ( double_e ) ;
	double_g = ceil ( double_d ) ;
	float_b = float_a / float_b;
}
short BWTIncBuildPackedBwt( int parameter_1,char parameter_2,int parameter_3,unsigned int parameter_4,long parameter_5)
{
	char char_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	double double_d = 0;
	double double_e = 0;
	long long_a = 0;
	long long_b = 0;
	double double_f = 0;
	float float_a = 0;
	char_a = char_a - char_a;
	double_a = sqrt ( double_a ) ;
	double_b = tanh ( double_c ) ;
	double_c = log10 ( double_c ) ;
	double_b = acos ( double_b ) ;
	double_c = double_a - double_b;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		char char_a = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		double double_d = 0;
		double double_e = 0;
		long long_a = 0;
		long long_b = 0;
		double double_f = 0;
		float float_a = 0;
		int_a = int_a;
		double_d = exp ( double_e ) ;
		char controller_a[1];
		scanf("%1s", controller_a);
		if( controller_a >"x" )
		{
			char char_a = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			int int_a = 0;
			double double_d = 0;
			double double_e = 0;
			long long_a = 0;
			long long_b = 0;
			double double_f = 0;
			float float_a = 0;
			double_f = atan2 ( double_c , double_e ) ;
			if(1)
			{
				double_a = tan ( double_a ) ;
			}
			double_a = cos ( double_f ) ;
			double_b = cos ( double_e ) ;
			float_a = float_a;
		}
		long_b = long_a + long_b;
	}
}
char initializeVAL( short parameter_1,char parameter_2,float parameter_3)
{
	double double_a = 0;
	short short_a = 0;
	double_a = tan ( double_a ) ;
	for(int looper_a=0; looper_a<7;looper_a++)
	{
		double double_a = 0;
		short short_a = 0;
		short_a = short_a + short_a;
	}
}
long QSufSortChoosePivot( char parameter_1,long parameter_2,int parameter_3,int parameter_4,unsigned int parameter_5)
{
	int int_a = 0;
	float float_a = 0;
	float float_b = 0;
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	long long_a = 0;
	long long_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	int int_c = 0;
	float float_c = 0;
	unsigned int unsigned_int_b = 0;
	long long_c = 0;
	int_a = int_a - int_a;
	float_b = float_a - float_b;
	short_b = short_a + short_a;
	double_a = ceil ( double_a ) ;
	long_a = long_a;
	double_a = fabs ( double_a ) ;
	long_b = long_a;
	double_a = floor ( double_b ) ;
	double_c = cosh ( double_a ) ;
	double_d = floor ( double_b ) ;
	int_b = int_a / int_b;
	unsigned_int_a = unsigned_int_a;
	double_e = atan ( double_f ) ;
	double_f = atan ( double_f ) ;
	double_e = cosh ( double_c ) ;
	double_e = pow ( double_e , double_g ) ;
	int_c = int_c;
	float_c = float_c;
	double_g = double_a;
	unsigned_int_a = unsigned_int_a * unsigned_int_b;
	return long_c;
}
unsigned int QSufSortInsertSortSplit( float parameter_1,unsigned int parameter_2,long parameter_3,unsigned int parameter_4,int parameter_5)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	char char_a = 0;
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	long long_a = 0;
	unsigned int unsigned_int_c = 0;
	double double_j = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	char char_b = 0;
	char char_c = 0;
	float float_c = 0;
	double double_h = 0;
	int int_c = 0;
	double double_i = 0;
	unsigned_int_a = unsigned_int_a / unsigned_int_b;
	char_a = char_a;
	float_a = float_a + float_b;
	double_a = fmod ( double_a , double_b ) ;
	int_a = int_b;
	double_c = cos ( double_c ) ;
	double_d = double_e;
	for(int looper_a=0; looper_a<6;looper_a++)
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		char char_a = 0;
		float float_a = 0;
		float float_b = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		long long_a = 0;
		unsigned int unsigned_int_c = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		char char_b = 0;
		char char_c = 0;
		float float_c = 0;
		double double_h = 0;
		int int_c = 0;
		double double_i = 0;
		double_f = tan ( double_e ) ;
		char_b = char_b + char_c;
	}
	for(int looper_b=0; looper_b<1;looper_b++)
	{
		double_g = tan ( double_c ) ;
		double_b = double_a - double_f;
		for(int looper_c=0; looper_c<1;looper_c++)
		{
			double_f = sqrt ( double_b ) ;
			double_d = fmod ( double_f , double_e ) ;
		}
		double_d = asin ( double_d ) ;
		double_e = ldexp ( double_a , int_a ) ;
	}
	double_a = atan ( double_c ) ;
	double_f = sqrt ( double_e ) ;
	long_a = long_a;
	int looper_d = 0;
	while(looper_d < 2)
	{
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		char char_a = 0;
		float float_a = 0;
		float float_b = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		long long_a = 0;
		unsigned int unsigned_int_c = 0;
		double double_j = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		char char_b = 0;
		char char_c = 0;
		float float_c = 0;
		double double_h = 0;
		int int_c = 0;
		double double_i = 0;
		looper_d += 1;
		float_c = float_b - float_a;
		double_e = tanh ( double_h ) ;
		if(1)
		{
			double_h = double_f / double_f;
		}
		else
		{
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			char char_a = 0;
			float float_a = 0;
			float float_b = 0;
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			long long_a = 0;
			unsigned int unsigned_int_c = 0;
			double double_j = 0;
			unsigned int unsigned_int_d = 0;
			unsigned int unsigned_int_e = 0;
			char char_b = 0;
			char char_c = 0;
			float float_c = 0;
			double double_h = 0;
			int int_c = 0;
			double double_i = 0;
			if(1)
			{
				unsigned_int_c = unsigned_int_a + unsigned_int_a;
			}
			double_a = log10 ( double_g ) ;
			double_b = acos ( double_i ) ;
		}
		int_a = int_b + int_c;
	}
	double_j = sqrt ( double_f ) ;
	unsigned_int_e = unsigned_int_d * unsigned_int_c;
	if(1)
	{
		double_b = atan ( double_e ) ;
	}
}
void QSufSortSortSplit( float parameter_1,float parameter_2,long parameter_3,unsigned int parameter_4,char parameter_5)
{
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	long long_b = 0;
	char char_a = 0;
	long long_c = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	double double_d = 0;
	short short_a = 0;
	short short_b = 0;
	double double_e = 0;
	short short_c = 0;
	short short_d = 0;
	int int_d = 0;
	int int_e = 0;
	unsigned int unsigned_int_b = 0;
	short short_e = 0;
	short short_f = 0;
	double double_f = 0;
	float float_a = 0;
	unsigned int unsigned_int_c = 0;
	float float_b = 0;
	unsigned int unsigned_int_d = 0;
	int int_c = 0;
	long long_d = 0;
	unsigned int unsigned_int_e = 0;
	double double_g = 0;
	double_a = sqrt ( double_b ) ;
	long_a = long_a;
	long_b = QSufSortChoosePivot(char_a,long_c,int_a,int_b,unsigned_int_a);

	double_c = cosh ( double_b ) ;
	double_d = floor ( double_a ) ;
	double_d = cos ( double_c ) ;
	short_b = short_a + short_a;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a <"o.B]q" )
	{
		unsigned_int_a = unsigned_int_a;
	}
	double_d = double_e;
	short_a = short_c;
	double_a = pow ( double_b , double_c ) ;
	int looper_a = 0;
	while(looper_a < 8)
	{
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		long long_b = 0;
		char char_a = 0;
		long long_c = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		short short_b = 0;
		double double_e = 0;
		short short_c = 0;
		short short_d = 0;
		int int_d = 0;
		int int_e = 0;
		unsigned int unsigned_int_b = 0;
		short short_e = 0;
		short short_f = 0;
		double double_f = 0;
		float float_a = 0;
		unsigned int unsigned_int_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_d = 0;
		int int_c = 0;
		long long_d = 0;
		unsigned int unsigned_int_e = 0;
		double double_g = 0;
		looper_a += 1;
		int looper_b = 0;
		while(looper_b < 10)
		{
			looper_b += 1;
			if(1)
			{
				double_b = double_c;
				double_b = tanh ( double_b ) ;
			}
			double_e = ldexp ( double_d , int_c ) ;
		}
		int looper_c = 0;
		while(looper_c < 6)
		{
			looper_c += 1;
			if(1)
			{
				double_a = ceil ( double_d ) ;
				double_b = ceil ( double_a ) ;
			}
			double_c = acos ( double_c ) ;
		}
		if(1)
		{
		}
		double_c = tanh ( double_b ) ;
		long_d = long_c;
		int_c = int_a;
	}
	short_d = short_b * short_a;
	int_e = int_b / int_d;
	unsigned_int_b = unsigned_int_a;
	for(int looper_d=0; looper_d<2;looper_d++)
	{
		unsigned_int_a = unsigned_int_a * unsigned_int_a;
	}
	double_c = cos ( double_c ) ;
	short_c = short_c + short_d;
	short_e = short_f;
	for(int looper_e=0; looper_e<7;looper_e++)
	{
		double_b = log10 ( double_f ) ;
	}
	double_b = floor ( double_d ) ;
	double_a = double_e;
	if(1)
	{
		double_e = cosh ( double_b ) ;
	}
	float_a = float_a + float_a;
	unsigned_int_c = QSufSortInsertSortSplit(float_b,unsigned_int_d,long_a,unsigned_int_d,int_d);

	double_b = cos ( double_f ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		long long_a = 0;
		long long_b = 0;
		char char_a = 0;
		long long_c = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		double double_d = 0;
		short short_a = 0;
		short short_b = 0;
		double double_e = 0;
		short short_c = 0;
		short short_d = 0;
		int int_d = 0;
		int int_e = 0;
		unsigned int unsigned_int_b = 0;
		short short_e = 0;
		short short_f = 0;
		double double_f = 0;
		float float_a = 0;
		unsigned int unsigned_int_c = 0;
		float float_b = 0;
		unsigned int unsigned_int_d = 0;
		int int_c = 0;
		long long_d = 0;
		unsigned int unsigned_int_e = 0;
		double double_g = 0;
		double_c = sinh ( double_f ) ;
		unsigned_int_e = unsigned_int_a * unsigned_int_a;
	}
	else
	{
		for(int looper_f=0; looper_f<4;looper_f++)
		{
			double double_a = 0;
			double double_b = 0;
			long long_a = 0;
			long long_b = 0;
			char char_a = 0;
			long long_c = 0;
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			double double_d = 0;
			short short_a = 0;
			short short_b = 0;
			double double_e = 0;
			short short_c = 0;
			short short_d = 0;
			int int_d = 0;
			int int_e = 0;
			unsigned int unsigned_int_b = 0;
			short short_e = 0;
			short short_f = 0;
			double double_f = 0;
			float float_a = 0;
			unsigned int unsigned_int_c = 0;
			float float_b = 0;
			unsigned int unsigned_int_d = 0;
			int int_c = 0;
			long long_d = 0;
			unsigned int unsigned_int_e = 0;
			double double_g = 0;
			double_g = tanh ( double_c ) ;
		}
	}
	if(1)
	{
		double_b = asin ( double_a ) ;
	}
}
long QSufSortBucketSort( short parameter_1,int parameter_2,unsigned int parameter_3,short parameter_4)
{
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	unsigned int unsigned_int_c = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	long long_a = 0;
	double double_d = 0;
	char char_a = 0;
	char char_b = 0;
	short short_a = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	long long_b = 0;
	short short_b = 0;
	int_a = int_b;
	unsigned_int_b = unsigned_int_a + unsigned_int_b;
	int_b = int_c;
	unsigned_int_c = unsigned_int_a / unsigned_int_a;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double_c = double_a - double_b;
	}
	for(int looper_b=0; looper_b<6;looper_b++)
	{
		long_a = long_a / long_a;
		double_c = ceil ( double_c ) ;
		double_d = double_d / double_b;
	}
	char_b = char_a - char_b;
	for(int looper_c=0; looper_c<8;looper_c++)
	{
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		unsigned int unsigned_int_c = 0;
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		long long_a = 0;
		double double_d = 0;
		char char_a = 0;
		char char_b = 0;
		short short_a = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		long long_b = 0;
		short short_b = 0;
		double_a = sqrt ( double_b ) ;
		short_a = short_a;
		double_e = ldexp ( double_f , int_b ) ;
		unsigned_int_c = unsigned_int_c;
		char controller_a[1];
		scanf("%1s", controller_a);
		if( controller_a >"Z" )
		{
			double_b = double_d;
			int looper_d = 0;
			while(looper_d < 1)
			{
				int int_a = 0;
				int int_b = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_c = 0;
				unsigned int unsigned_int_c = 0;
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				long long_a = 0;
				double double_d = 0;
				char char_a = 0;
				char char_b = 0;
				short short_a = 0;
				double double_e = 0;
				double double_f = 0;
				double double_g = 0;
				long long_b = 0;
				short short_b = 0;
				looper_d += 1;
				double_f = pow ( double_f , double_f ) ;
				double_f = fmod ( double_g , double_f ) ;
				long_b = long_a * long_b;
				double_g = sqrt ( double_a ) ;
				double_d = fmod ( double_c , double_g ) ;
			}
		}
		else
		{
			int int_a = 0;
			int int_b = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			int int_c = 0;
			unsigned int unsigned_int_c = 0;
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			long long_a = 0;
			double double_d = 0;
			char char_a = 0;
			char char_b = 0;
			short short_a = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			long long_b = 0;
			short short_b = 0;
			short_b = short_a - short_a;
		}
		double_g = double_d / double_a;
	}
}
float QSufSortTransform( long parameter_1,char parameter_2,double parameter_3,short parameter_4,short parameter_5,double parameter_6,int parameter_7)
{
	double double_a = 0;
	float float_a = 0;
	double double_b = 0;
	long long_a = 0;
	long long_b = 0;
	double double_c = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	double double_d = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	int int_a = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	int int_b = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	double double_j = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	long long_c = 0;
	short short_d = 0;
	double_a = floor ( double_a ) ;
	float_a = float_a * float_a;
	double_a = sinh ( double_a ) ;
	double_a = double_b + double_a;
	long_b = long_a - long_a;
	double_a = asin ( double_c ) ;
	short_c = short_a + short_b;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		double_a = pow ( double_d , double_b ) ;
	}
	unsigned_int_a = unsigned_int_a;
	double_e = ldexp ( double_b , int_a ) ;
	for(int looper_b=0; looper_b<7;looper_b++)
	{
		double_f = exp ( double_a ) ;
		double_a = atan2 ( double_b , double_g ) ;
		double_f = pow ( double_f , double_d ) ;
	}
	double_h = atan2 ( double_g , double_c ) ;
	double_g = log ( double_c ) ;
	for(int looper_c=0; looper_c<3;looper_c++)
	{
		double_d = double_i;
	}
	double_h = log10 ( double_e ) ;
	for(int looper_d=0; looper_d<7;looper_d++)
	{
		double double_a = 0;
		float float_a = 0;
		double double_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		int int_a = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		int int_b = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		double double_j = 0;
		float float_b = 0;
		char char_a = 0;
		char char_b = 0;
		long long_c = 0;
		short short_d = 0;
		double_c = cosh ( double_h ) ;
		char_b = char_a * char_a;
	}
	for(int looper_e=0; looper_e<4;looper_e++)
	{
		double double_a = 0;
		float float_a = 0;
		double double_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		double double_d = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		int int_a = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		int int_b = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		double double_j = 0;
		float float_b = 0;
		char char_a = 0;
		char char_b = 0;
		long long_c = 0;
		short short_d = 0;
		double_g = ldexp ( double_i , int_b ) ;
		long_c = long_a;
	}
	unsigned_int_a = unsigned_int_b;
	for(int looper_f=0; looper_f<6;looper_f++)
	{
		if(1)
		{
			double double_a = 0;
			float float_a = 0;
			double double_b = 0;
			long long_a = 0;
			long long_b = 0;
			double double_c = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			double double_d = 0;
			unsigned int unsigned_int_a = 0;
			double double_e = 0;
			int int_a = 0;
			double double_f = 0;
			double double_g = 0;
			double double_h = 0;
			double double_i = 0;
			int int_b = 0;
			unsigned int unsigned_int_b = 0;
			int int_c = 0;
			double double_j = 0;
			float float_b = 0;
			char char_a = 0;
			char char_b = 0;
			long long_c = 0;
			short short_d = 0;
			short_d = short_b * short_c;
			int_b = int_c;
		}
	}
	double_h = ldexp ( double_b , int_c ) ;
	for(int looper_g=0; looper_g<10;looper_g++)
	{
		double_i = ldexp ( double_f , int_a ) ;
		double_f = double_b;
	}
	for(int looper_h=0; looper_h<6;looper_h++)
	{
		double_f = log10 ( double_i ) ;
		double_a = double_a;
	}
	unsigned_int_b = unsigned_int_b;
	double_a = tanh ( double_j ) ;
	return float_b;
}
void QSufSortSuffixSort( short parameter_1,int parameter_2,int parameter_3,float parameter_4,long parameter_5,float parameter_6)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	float float_a = 0;
	long long_a = 0;
	char char_a = 0;
	short short_a = 0;
	short short_b = 0;
	int int_a = 0;
	float float_b = 0;
	float float_c = 0;
	unsigned int unsigned_int_a = 0;
	double double_e = 0;
	unsigned int unsigned_int_b = 0;
	char char_b = 0;
	unsigned int unsigned_int_c = 0;
	double double_f = 0;
	int int_b = 0;
	unsigned int unsigned_int_f = 0;
	long long_c = 0;
	short short_c = 0;
	double double_g = 0;
	double double_h = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	long long_b = 0;
	double_a = cos ( double_b ) ;
	double_a = double_c;
	double_a = fabs ( double_d ) ;
	double_b = sqrt ( double_c ) ;
	float_a = QSufSortTransform(long_a,char_a,double_c,short_a,short_b,double_a,int_a);

	float_b = float_c;
	if(1)
	{
		unsigned_int_a = unsigned_int_a / unsigned_int_a;
		double_e = pow ( double_c , double_e ) ;
		QSufSortSortSplit(float_c,float_c,long_a,unsigned_int_b,char_b);

		unsigned_int_c = unsigned_int_b;
		double_e = tanh ( double_f ) ;
		double_a = exp ( double_f ) ;
	}
	int looper_a = 0;
	while(looper_a < 1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		float float_a = 0;
		long long_a = 0;
		char char_a = 0;
		short short_a = 0;
		short short_b = 0;
		int int_a = 0;
		float float_b = 0;
		float float_c = 0;
		unsigned int unsigned_int_a = 0;
		double double_e = 0;
		unsigned int unsigned_int_b = 0;
		char char_b = 0;
		unsigned int unsigned_int_c = 0;
		double double_f = 0;
		int int_b = 0;
		unsigned int unsigned_int_f = 0;
		long long_c = 0;
		short short_c = 0;
		double double_g = 0;
		double double_h = 0;
		unsigned int unsigned_int_d = 0;
		unsigned int unsigned_int_e = 0;
		long long_b = 0;
		looper_a += 1;
		double_b = exp ( double_g ) ;
		double_b = double_h - double_c;
		do
		{
			int_a = int_b;
			if(1)
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				float float_a = 0;
				long long_a = 0;
				char char_a = 0;
				short short_a = 0;
				short short_b = 0;
				int int_a = 0;
				float float_b = 0;
				float float_c = 0;
				unsigned int unsigned_int_a = 0;
				double double_e = 0;
				unsigned int unsigned_int_b = 0;
				char char_b = 0;
				unsigned int unsigned_int_c = 0;
				double double_f = 0;
				int int_b = 0;
				unsigned int unsigned_int_f = 0;
				long long_c = 0;
				short short_c = 0;
				double double_g = 0;
				double double_h = 0;
				unsigned int unsigned_int_d = 0;
				unsigned int unsigned_int_e = 0;
				long long_b = 0;
				unsigned_int_e = unsigned_int_b - unsigned_int_d;
				char_b = char_b;
			}
			else
			{
				double double_a = 0;
				double double_b = 0;
				double double_c = 0;
				double double_d = 0;
				float float_a = 0;
				long long_a = 0;
				char char_a = 0;
				short short_a = 0;
				short short_b = 0;
				int int_a = 0;
				float float_b = 0;
				float float_c = 0;
				unsigned int unsigned_int_a = 0;
				double double_e = 0;
				unsigned int unsigned_int_b = 0;
				char char_b = 0;
				unsigned int unsigned_int_c = 0;
				double double_f = 0;
				int int_b = 0;
				unsigned int unsigned_int_f = 0;
				long long_c = 0;
				short short_c = 0;
				double double_g = 0;
				double double_h = 0;
				unsigned int unsigned_int_d = 0;
				unsigned int unsigned_int_e = 0;
				long long_b = 0;
				if(1)
				{
					double_g = floor ( double_b ) ;
					unsigned_int_c = unsigned_int_f;
				}
				long_a = long_b;
				long_c = QSufSortBucketSort(short_b,int_b,unsigned_int_f,short_c);

				double_e = cosh ( double_d ) ;
				long_c = long_a;
			}
		}
		int looper_b = 0;
		while(looper_b < 6)
		unsigned_int_a = unsigned_int_b;
		looper_b += 1;
		if(1)
		{
			double_c = log ( double_f ) ;
		}
		unsigned_int_c = unsigned_int_d - unsigned_int_a;
	}
}
void BWTIncPutPackedTextToRank( short parameter_1,int parameter_2,float parameter_3,float parameter_4)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_a = 0;
	int int_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	char char_a = 0;
	float float_a = 0;
	float float_b = 0;
	double double_h = 0;
	long long_a = 0;
	long long_c = 0;
	short short_a = 0;
	char char_b = 0;
	long long_b = 0;
	double_c = double_a + double_b;
	unsigned_int_c = unsigned_int_a - unsigned_int_b;
	int_b = int_a * int_b;
	double_d = floor ( double_e ) ;
	double_b = sinh ( double_d ) ;
	double_a = tan ( double_a ) ;
	double_a = tan ( double_b ) ;
	double_c = exp ( double_f ) ;
	double_g = asin ( double_d ) ;
	char_a = char_a;
	double_a = cos ( double_b ) ;
	float_a = float_b;
	for(int looper_a=0; looper_a<10;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		char char_a = 0;
		float float_a = 0;
		float float_b = 0;
		double double_h = 0;
		long long_a = 0;
		long long_c = 0;
		short short_a = 0;
		char char_b = 0;
		long long_b = 0;
		float_a = float_b;
		double_h = atan ( double_e ) ;
		double_f = log10 ( double_c ) ;
		short_a = short_a - short_a;
		double_b = acos ( double_b ) ;
	}
	for(int looper_b=0; looper_b<4;looper_b++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_a = 0;
		int int_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		char char_a = 0;
		float float_a = 0;
		float float_b = 0;
		double double_h = 0;
		long long_a = 0;
		long long_c = 0;
		short short_a = 0;
		char char_b = 0;
		long long_b = 0;
		char_b = char_a - char_a;
		for(int looper_c=0; looper_c<6;looper_c++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			int int_a = 0;
			int int_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			double double_g = 0;
			char char_a = 0;
			float float_a = 0;
			float float_b = 0;
			double double_h = 0;
			long long_a = 0;
			long long_c = 0;
			short short_a = 0;
			char char_b = 0;
			long long_b = 0;
			unsigned_int_a = unsigned_int_a;
			double_h = floor ( double_a ) ;
			double_a = double_g;
			double_e = atan ( double_a ) ;
			long_a = long_b;
		}
	}
	long_a = long_c;
	double_f = double_f - double_a;
	double_a = tanh ( double_e ) ;
}
unsigned int BWTIncConstruct( int parameter_1,long parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	short short_a = 0;
	double double_c = 0;
	short short_b = 0;
	char char_a = 0;
	int int_a = 0;
	int int_b = 0;
	unsigned int unsigned_int_a = 0;
	int int_c = 0;
	float float_a = 0;
	char char_b = 0;
	float float_b = 0;
	char char_c = 0;
	float float_c = 0;
	char char_d = 0;
	double double_d = 0;
	long long_a = 0;
	short short_c = 0;
	short short_d = 0;
	long long_b = 0;
	unsigned int unsigned_int_b = 0;
	double double_e = 0;
	int int_d = 0;
	int int_e = 0;
	float float_d = 0;
	int int_f = 0;
	int int_g = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	int int_h = 0;
	double double_g = 0;
	long long_c = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	char char_e = 0;
	long long_d = 0;
	float float_e = 0;
	char char_f = 0;
	short short_e = 0;
	long long_e = 0;
	double double_f = 0;
	double_a = fabs ( double_b ) ;
	short_a = short_a;
	double_c = log10 ( double_a ) ;
	double_b = sinh ( double_c ) ;
	double_c = sqrt ( double_c ) ;
	BWTGenerateOccValueFromBwt(short_b,double_a,char_a,int_a,int_b);

	double_c = double_b + double_c;
	unsigned_int_a = unsigned_int_a;
	int_c = BWTOccValueMinorSizeInWord(float_a);

	int_c = int_a;
	char_a = char_b;
	if(1)
	{
		float_b = float_a / float_b;
		char_c = char_c;
		float_a = float_b * float_a;
		double_a = exp ( double_c ) ;
		BWTIncPutPackedTextToRank(short_a,int_b,float_a,float_c);

		int_b = int_a - int_b;
		char_d = initializeVAL(short_a,char_b,float_b);

		double_d = atan2 ( double_d , double_c ) ;
		short_a = BWTIncBuildPackedBwt(int_a,char_d,int_a,unsigned_int_a,long_a);

		double_b = double_d / double_a;
		short_a = short_c - short_d;
		int_a = BWTIncBuildBwt(char_d,int_b,long_b,unsigned_int_b);

		double_b = log10 ( double_e ) ;
		int_a = int_d;
		double_c = double_d;
		int_e = int_d;
		int_c = int_b;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		short short_a = 0;
		double double_c = 0;
		short short_b = 0;
		char char_a = 0;
		int int_a = 0;
		int int_b = 0;
		unsigned int unsigned_int_a = 0;
		int int_c = 0;
		float float_a = 0;
		char char_b = 0;
		float float_b = 0;
		char char_c = 0;
		float float_c = 0;
		char char_d = 0;
		double double_d = 0;
		long long_a = 0;
		short short_c = 0;
		short short_d = 0;
		long long_b = 0;
		unsigned int unsigned_int_b = 0;
		double double_e = 0;
		int int_d = 0;
		int int_e = 0;
		float float_d = 0;
		int int_f = 0;
		int int_g = 0;
		unsigned int unsigned_int_c = 0;
		unsigned int unsigned_int_d = 0;
		int int_h = 0;
		double double_g = 0;
		long long_c = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		char char_e = 0;
		long long_d = 0;
		float float_e = 0;
		char char_f = 0;
		short short_e = 0;
		long long_e = 0;
		double double_f = 0;
		double_b = acos ( double_b ) ;
		double_d = ceil ( double_b ) ;
		int_c = int_e - int_d;
		double_e = sinh ( double_e ) ;
		double_c = pow ( double_b , double_c ) ;
		double_e = ForwardDNAAllOccCountNoLimit(char_b,short_b,short_d,float_a);

		BWTClearTrailingBwtCode();

		int_d = int_e - int_a;
		double_c = atan ( double_e ) ;
		double_a = cos ( double_c ) ;
		short_c = short_d;
		unsigned_int_b = unsigned_int_b;
		float_c = float_d;
		double_c = BWTIncBuildRelativeRank(float_c,int_e,float_c,unsigned_int_a,short_b,double_a);

		int_f = int_g;
		for(int looper_a=0; looper_a<2;looper_a++)
		{
			char controller_b[5];
			scanf("%5s", controller_b);
			if( controller_b >"}KKm<" )
			{
				double_a = atan ( double_d ) ;
			}
			else
			{
				char controller_c[1];
				scanf("%1s", controller_c);
				if( controller_c <"`" )
				{
					unsigned_int_c = unsigned_int_b + unsigned_int_b;
				}
				char controller_d[2];
				scanf("%2s", controller_d);
				if( controller_d >"J=" )
				{
					double_f = sinh ( double_d ) ;
				}
			}
		}
		double_a = ceil ( double_e ) ;
		double_f = double_e;
		unsigned_int_d = unsigned_int_a * unsigned_int_c;
		double_b = fmod ( double_a , double_b ) ;
		unsigned_int_c = initializeVAL_bg(char_a,long_a,int_h);

		double_a = cos ( double_g ) ;
		BWTIncMergeBwt(long_c,long_a,unsigned_int_d,char_c,double_e,int_f);

		short_a = short_a / short_b;
		double_e = double_d + double_h;
		double_e = tanh ( double_b ) ;
		char_b = BWTIncSetBuildSizeAndTextAddr(int_e);

		double_e = double_d;
		double_i = fabs ( double_j ) ;
	}
	float_a = float_c - float_d;
	double_b = double_d * double_i;
	unsigned_int_a = BWTIncGetAbsoluteRank(char_c,char_d,long_a,char_e,int_f,char_c,double_a);

	long_d = long_c;
	double_j = ldexp ( double_a , int_b ) ;
	unsigned_int_c = BWTIncSortKey(long_b,float_e,unsigned_int_d);

	float_b = float_d;
	char_f = char_e - char_f;
	QSufSortSuffixSort(short_e,int_e,int_g,float_d,long_e,float_c);

	float_c = float_c / float_c;
	double_a = double_h - double_h;
	short_e = short_e;
	double_d = exp ( double_i ) ;
	unsigned_int_c = unsigned_int_a;
	unsigned_int_b = unsigned_int_c * unsigned_int_b;
	double_h = double_g;
	double_c = floor ( double_a ) ;
	double_e = sqrt ( double_d ) ;
	float_b = BWTResidentSizeInWord(short_b);

	int_f = int_h;
}
double BitPerWordPackedChar( double parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	float float_a = 0;
	return double_a;
	double_b = ceilLog2(float_a);

}
unsigned int leadingZero( short parameter_1)
{
	float float_a = 0;
	float float_b = 0;
	long long_a = 0;
	long long_b = 0;
	double double_a = 0;
	int int_a = 0;
	unsigned int unsigned_int_a = 0;
	int int_b = 0;
	float_b = float_a + float_b;
	long_a = long_b;
	if(1)
	{
		if(1)
		{
			double_a = fmod ( double_a , double_a ) ;
		}
		else
		{
			int_a = int_a * int_a;
		}
	}
	else
	{
		if(1)
		{
			double_a = atan2 ( double_a , double_a ) ;
		}
		else
		{
			float float_a = 0;
			float float_b = 0;
			long long_a = 0;
			long long_b = 0;
			double double_a = 0;
			int int_a = 0;
			unsigned int unsigned_int_a = 0;
			int int_b = 0;
			int_a = int_b / int_b;
		}
	}
	return unsigned_int_a;
}
double ceilLog2( float parameter_1)
{
	double double_a = 0;
	unsigned int unsigned_int_a = 0;
	short short_a = 0;
	if(1)
	{
		return double_a;
	}
	return double_a;
	unsigned_int_a = leadingZero(short_a);

}
short BitPerBytePackedChar( char parameter_1)
{
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	short short_a = 0;
	float float_c = 0;
	unsigned int unsigned_int_a = 0;
	float_a = float_a / float_b;
	double_a = ldexp ( double_b , int_a ) ;
	if(1)
	{
		float float_a = 0;
		float float_b = 0;
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		short short_a = 0;
		float float_c = 0;
		unsigned int unsigned_int_a = 0;
		unsigned_int_a = unsigned_int_a + unsigned_int_a;
	}
	return short_a;
	double_a = ceilLog2(float_c);

}
double ConvertBytePackedToWordPacked( long parameter_1,short parameter_2,int parameter_3,int parameter_4)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	char char_a = 0;
	char char_b = 0;
	unsigned int unsigned_int_d = 0;
	double double_g = 0;
	double double_h = 0;
	short short_a = 0;
	double double_i = 0;
	double double_j = 0;
	double double_k = 0;
	float float_a = 0;
	long long_a = 0;
	long long_c = 0;
	long long_b = 0;
	int int_c = 0;
	int int_d = 0;
	double_a = atan ( double_b ) ;
	int_b = int_a + int_a;
	int_b = int_a - int_b;
	double_b = fmod ( double_c , double_c ) ;
	double_a = pow ( double_a , double_c ) ;
	double_a = atan2 ( double_d , double_b ) ;
	double_e = atan2 ( double_f , double_e ) ;
	unsigned_int_a = unsigned_int_b;
	unsigned_int_a = unsigned_int_b * unsigned_int_b;
	unsigned_int_c = unsigned_int_b;
	char_a = char_b;
	double_e = atan ( double_e ) ;
	double_f = fmod ( double_a , double_b ) ;
	unsigned_int_b = unsigned_int_d - unsigned_int_b;
	double_c = sqrt ( double_d ) ;
	double_e = double_g * double_d;
	double_f = atan ( double_h ) ;
	short_a = BitPerBytePackedChar(char_b);

	double_e = floor ( double_h ) ;
	int looper_a = 0;
	while(looper_a < 6)
	{
		looper_a += 1;
		double_i = fmod ( double_i , double_e ) ;
		for(int looper_b=0; looper_b<2;looper_b++)
		{
			double double_a = 0;
			double double_b = 0;
			int int_a = 0;
			int int_b = 0;
			double double_c = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			unsigned int unsigned_int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			char char_a = 0;
			char char_b = 0;
			unsigned int unsigned_int_d = 0;
			double double_g = 0;
			double double_h = 0;
			short short_a = 0;
			double double_i = 0;
			double double_j = 0;
			double double_k = 0;
			float float_a = 0;
			long long_a = 0;
			long long_c = 0;
			long long_b = 0;
			int int_c = 0;
			int int_d = 0;
			double_f = atan2 ( double_c , double_h ) ;
			for(int looper_c=0; looper_c<4;looper_c++)
			{
				double double_a = 0;
				double double_b = 0;
				int int_a = 0;
				int int_b = 0;
				double double_c = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				unsigned int unsigned_int_a = 0;
				unsigned int unsigned_int_b = 0;
				unsigned int unsigned_int_c = 0;
				char char_a = 0;
				char char_b = 0;
				unsigned int unsigned_int_d = 0;
				double double_g = 0;
				double double_h = 0;
				short short_a = 0;
				double double_i = 0;
				double double_j = 0;
				double double_k = 0;
				float float_a = 0;
				long long_a = 0;
				long long_c = 0;
				long long_b = 0;
				int int_c = 0;
				int int_d = 0;
				double_i = BitPerWordPackedChar(double_a);

				long_b = long_a / long_b;
				int_d = int_c - int_b;
				double_h = atan2 ( double_a , double_h ) ;
			}
			long_c = long_a * long_a;
		}
		double_g = double_j - double_f;
		for(int looper_d=0; looper_d<5;looper_d++)
		{
			double_c = double_b / double_b;
		}
		double_a = acos ( double_c ) ;
		double_i = sinh ( double_a ) ;
	}
	double_i = tanh ( double_a ) ;
	for(int looper_e=0; looper_e<1;looper_e++)
	{
		int_a = int_a;
		for(int looper_f=0; looper_f<1;looper_f++)
		{
			double_g = ldexp ( double_a , int_b ) ;
			double_f = asin ( double_d ) ;
			double_a = ldexp ( double_j , int_a ) ;
		}
		unsigned_int_b = unsigned_int_b - unsigned_int_c;
	}
	double_k = tan ( double_e ) ;
	for(int looper_g=0; looper_g<6;looper_g++)
	{
		double_j = fabs ( double_b ) ;
	}
	float_a = float_a;
}
char BWTIncSetBuildSizeAndTextAddr( int parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	short short_a = 0;
	double double_c = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	short short_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	short short_c = 0;
	short short_d = 0;
	double_a = cos ( double_b ) ;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		short short_a = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		short short_c = 0;
		short short_d = 0;
		short_b = short_a + short_a;
		if(1)
		{
			double_c = tanh ( double_c ) ;
		}
		else
		{
			unsigned_int_a = unsigned_int_a;
		}
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		short short_a = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		short short_c = 0;
		short short_d = 0;
		double_d = double_a + double_a;
		if(1)
		{
			long_a = long_a / long_a;
			double_a = cosh ( double_a ) ;
		}
		if(1)
		{
			double double_a = 0;
			double double_b = 0;
			short short_a = 0;
			double double_c = 0;
			unsigned int unsigned_int_a = 0;
			long long_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			short short_b = 0;
			double double_d = 0;
			double double_e = 0;
			double double_f = 0;
			short short_c = 0;
			short short_d = 0;
			double_e = double_b * double_e;
		}
		else
		{
			double_a = cos ( double_d ) ;
		}
		if(1)
		{
			double_a = sinh ( double_b ) ;
		}
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		short short_a = 0;
		double double_c = 0;
		unsigned int unsigned_int_a = 0;
		long long_a = 0;
		unsigned int unsigned_int_b = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		short short_c = 0;
		short short_d = 0;
		double_a = atan ( double_f ) ;
		short_d = short_a / short_c;
	}
	unsigned_int_c = unsigned_int_a * unsigned_int_b;
	long_a = long_a;
	double_a = exp ( double_c ) ;
}
int BWTOccValueMinorSizeInWord( float parameter_1)
{
	double double_a = 0;
	float float_a = 0;
	float float_b = 0;
	int int_a = 0;
	double_a = log ( double_a ) ;
	float_b = float_a * float_a;
	return int_a;
}
float BWTResidentSizeInWord( short parameter_1)
{
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	float float_a = 0;
	double_a = ceil ( double_a ) ;
	int_b = int_a - int_a;
	return float_a;
}
long BWTOccValueMajorSizeInWord( int parameter_1)
{
	char char_a = 0;
	char char_b = 0;
	double double_a = 0;
	double double_b = 0;
	long long_a = 0;
	char_a = char_a - char_b;
	double_a = double_a / double_a;
	double_a = tan ( double_a ) ;
	double_b = sinh ( double_a ) ;
	return long_a;
}
unsigned int GenerateDNAOccCountTable( float parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double_a = sinh ( double_a ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		double_b = sqrt ( double_a ) ;
		double_b = log10 ( double_c ) ;
		for(int looper_b=0; looper_b<8;looper_b++)
		{
			double double_a = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			double_c = sinh ( double_a ) ;
			double_c = tan ( double_a ) ;
			double_b = floor ( double_d ) ;
		}
	}
}
unsigned int initializeVAL_bg( char parameter_1,long parameter_2,int parameter_3)
{
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	double double_b = 0;
	short_b = short_a / short_a;
	for(int looper_a=0; looper_a<8;looper_a++)
	{
		short short_a = 0;
		short short_b = 0;
		double double_a = 0;
		double double_b = 0;
		double_a = double_b;
	}
}
int BWTCreate( char parameter_1,double parameter_2)
{
	double double_a = 0;
	float float_a = 0;
	unsigned int unsigned_int_a = 0;
	char char_a = 0;
	long long_a = 0;
	int int_a = 0;
	double double_b = 0;
	int int_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	long long_b = 0;
	int int_c = 0;
	int int_d = 0;
	short short_a = 0;
	double_a = floor ( double_a ) ;
	float_a = float_a;
	unsigned_int_a = initializeVAL_bg(char_a,long_a,int_a);

	double_a = ldexp ( double_b , int_b ) ;
	double_a = double_b / double_b;
	double_b = tan ( double_c ) ;
	double_e = double_d + double_b;
	if(1)
	{
		double double_a = 0;
		float float_a = 0;
		unsigned int unsigned_int_a = 0;
		char char_a = 0;
		long long_a = 0;
		int int_a = 0;
		double double_b = 0;
		int int_b = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		long long_b = 0;
		int int_c = 0;
		int int_d = 0;
		short short_a = 0;
		short_a = short_a;
		double_c = atan ( double_f ) ;
	}
	else
	{
		unsigned_int_a = GenerateDNAOccCountTable(float_a);

		long_b = BWTOccValueMajorSizeInWord(int_c);

		double_f = cosh ( double_c ) ;
	}
	double_a = atan ( double_c ) ;
	double_f = double_b;
	int_d = int_b;
	double_e = atan ( double_e ) ;
	return int_b;
}
void BWTIncCreate( float parameter_1,float parameter_2,double parameter_3)
{
	float float_a = 0;
	float float_b = 0;
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	short short_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_g = 0;
	char char_a = 0;
	long long_a = 0;
	long long_b = 0;
	char char_b = 0;
	int int_c = 0;
	unsigned int unsigned_int_b = 0;
	int int_d = 0;
	float_b = float_a * float_b;
	double_a = double_a;
	if(1)
	{
		int_a = int_b;
	}
	if(1)
	{
		double_b = sinh ( double_c ) ;
	}
	double_b = exp ( double_d ) ;
	double_e = cosh ( double_f ) ;
	float_a = BWTResidentSizeInWord(short_a);

	unsigned_int_a = unsigned_int_a;
	double_f = fabs ( double_f ) ;
	double_g = ceil ( double_e ) ;
	int_b = BWTCreate(char_a,double_a);

	long_b = long_a * long_a;
	double_g = acos ( double_c ) ;
	double_c = double_e / double_d;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double_a = fabs ( double_c ) ;
	}
	int_a = int_a;
	double_b = sinh ( double_f ) ;
	if(1)
	{
		char_b = char_b;
	}
	double_d = acos ( double_g ) ;
	int_c = BWTOccValueMinorSizeInWord(float_a);

	double_a = pow ( double_d , double_d ) ;
	unsigned_int_b = initializeVAL_bg(char_b,long_a,int_d);

}
unsigned int TextLengthFromBytePacked( long parameter_1,char parameter_2,int parameter_3)
{
	unsigned int unsigned_int_a = 0;
	return unsigned_int_a;
}
unsigned int BWTIncConstructFromPacked( unsigned int parameter_1,char parameter_2,long parameter_3)
{
	double double_a = 0;
	int int_a = 0;
	int int_b = 0;
	double double_b = 0;
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_a = 0;
	double double_c = 0;
	float float_a = 0;
	float float_b = 0;
	double double_d = 0;
	double double_e = 0;
	char char_a = 0;
	char char_c = 0;
	unsigned int unsigned_int_b = 0;
	short short_a = 0;
	short short_b = 0;
	short short_c = 0;
	int int_c = 0;
	double double_f = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	int int_d = 0;
	short short_d = 0;
	float float_c = 0;
	int int_e = 0;
	char char_b = 0;
	double double_h = 0;
	char char_d = 0;
	long long_c = 0;
	unsigned int unsigned_int_d = 0;
	double double_i = 0;
	double double_j = 0;
	double double_k = 0;
	double_a = fmod ( double_a , double_a ) ;
	double_a = sqrt ( double_a ) ;
	double_a = cos ( double_a ) ;
	int_b = int_a * int_b;
	double_a = double_b + double_b;
	long_b = long_a * long_b;
	double_b = tan ( double_a ) ;
	unsigned_int_a = unsigned_int_a;
	char controller_a[3];
	scanf("%3s", controller_a);
	if( controller_a >"kce" )
	{
		double_b = exp ( double_a ) ;
		double_b = double_a * double_c;
	}
	if(1)
	{
		BWTIncCreate(float_a,float_b,double_d);

		double_e = double_c;
		double_c = ldexp ( double_c , int_b ) ;
	}
	char_a = char_a;
	if(1)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		float float_a = 0;
		float float_b = 0;
		double double_d = 0;
		double double_e = 0;
		char char_a = 0;
		char char_c = 0;
		unsigned int unsigned_int_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		int int_c = 0;
		double double_f = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		int int_d = 0;
		short short_d = 0;
		float float_c = 0;
		int int_e = 0;
		char char_b = 0;
		double double_h = 0;
		char char_d = 0;
		long long_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_i = 0;
		double double_j = 0;
		double double_k = 0;
		double_e = ceil ( double_a ) ;
		char_b = char_b * char_c;
	}
	if(1)
	{
		?:
		unsigned_int_a = unsigned_int_b;
		short_a = short_a - short_b;
	}
	int_a = int_a + int_b;
	double_a = ConvertBytePackedToWordPacked(long_a,short_c,int_b,int_c);

	double_a = log ( double_f ) ;
	float_a = float_b;
	if(1)
	{
		float_a = float_a * float_b;
	}
	else
	{
		double_a = sqrt ( double_c ) ;
	}
	double_e = tanh ( double_d ) ;
	if(1)
	{
		long_a = long_b;
		double_a = ldexp ( double_g , int_c ) ;
	}
	if(1)
	{
		?:
		unsigned_int_b = unsigned_int_c;
		double_e = double_f;
	}
	if(1)
	{
		long_a = long_a;
		unsigned_int_c = BWTIncConstruct(int_d,long_a);

		float_a = float_a + float_a;
	}
	short_d = short_a * short_c;
	short_b = short_b;
	float_b = float_c;
	int looper_a = 0;
	while(looper_a < 3)
	{
		double double_a = 0;
		int int_a = 0;
		int int_b = 0;
		double double_b = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_a = 0;
		double double_c = 0;
		float float_a = 0;
		float float_b = 0;
		double double_d = 0;
		double double_e = 0;
		char char_a = 0;
		char char_c = 0;
		unsigned int unsigned_int_b = 0;
		short short_a = 0;
		short short_b = 0;
		short short_c = 0;
		int int_c = 0;
		double double_f = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		int int_d = 0;
		short short_d = 0;
		float float_c = 0;
		int int_e = 0;
		char char_b = 0;
		double double_h = 0;
		char char_d = 0;
		long long_c = 0;
		unsigned int unsigned_int_d = 0;
		double double_i = 0;
		double double_j = 0;
		double double_k = 0;
		looper_a += 1;
		double_g = log10 ( double_g ) ;
		if(1)
		{
			double_g = cosh ( double_a ) ;
		}
		double_b = double_a * double_h;
		if(1)
		{
			double double_a = 0;
			int int_a = 0;
			int int_b = 0;
			double double_b = 0;
			long long_a = 0;
			long long_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_d = 0;
			double double_e = 0;
			char char_a = 0;
			char char_c = 0;
			unsigned int unsigned_int_b = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			int int_c = 0;
			double double_f = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			int int_d = 0;
			short short_d = 0;
			float float_c = 0;
			int int_e = 0;
			char char_b = 0;
			double double_h = 0;
			char char_d = 0;
			long long_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_i = 0;
			double double_j = 0;
			double double_k = 0;
			long_b = long_c;
			unsigned_int_a = unsigned_int_d;
		}
		if(1)
		{
			?:
			int_a = int_b * int_b;
			unsigned_int_c = TextLengthFromBytePacked(long_a,char_c,int_e);

			short_a = short_a;
		}
		char controller_l[2];
		scanf("%2s", controller_l);
		if( controller_l >"rh" )
		{
			double double_a = 0;
			int int_a = 0;
			int int_b = 0;
			double double_b = 0;
			long long_a = 0;
			long long_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_d = 0;
			double double_e = 0;
			char char_a = 0;
			char char_c = 0;
			unsigned int unsigned_int_b = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			int int_c = 0;
			double double_f = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			int int_d = 0;
			short short_d = 0;
			float float_c = 0;
			int int_e = 0;
			char char_b = 0;
			double double_h = 0;
			char char_d = 0;
			long long_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_i = 0;
			double double_j = 0;
			double double_k = 0;
			double_a = log ( double_b ) ;
			double_i = pow ( double_b , double_j ) ;
		}
		double_g = sinh ( double_a ) ;
		char_d = char_d;
		double_a = sinh ( double_h ) ;
		if(1)
		{
			double double_a = 0;
			int int_a = 0;
			int int_b = 0;
			double double_b = 0;
			long long_a = 0;
			long long_b = 0;
			unsigned int unsigned_int_a = 0;
			double double_c = 0;
			float float_a = 0;
			float float_b = 0;
			double double_d = 0;
			double double_e = 0;
			char char_a = 0;
			char char_c = 0;
			unsigned int unsigned_int_b = 0;
			short short_a = 0;
			short short_b = 0;
			short short_c = 0;
			int int_c = 0;
			double double_f = 0;
			double double_g = 0;
			unsigned int unsigned_int_c = 0;
			int int_d = 0;
			short short_d = 0;
			float float_c = 0;
			int int_e = 0;
			char char_b = 0;
			double double_h = 0;
			char char_d = 0;
			long long_c = 0;
			unsigned int unsigned_int_d = 0;
			double double_i = 0;
			double double_j = 0;
			double double_k = 0;
			double_h = floor ( double_k ) ;
		}
	}
	return unsigned_int_a;
	char_a = BWTIncSetBuildSizeAndTextAddr(int_e);

}
void bwt_bwtgen2( unsigned int parameter_1,short parameter_2,int parameter_3)
{
	unsigned int unsigned_int_a = 0;
	char char_a = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned_int_a = BWTIncConstructFromPacked(unsigned_int_a,char_a,long_a);

	double_a = atan ( double_a ) ;
	double_b = cos ( double_b ) ;
	double_c = ldexp ( double_d , int_a ) ;
	unsigned_int_b = unsigned_int_b * unsigned_int_c;
	BWTSaveBwtCodeAndOcc(double_b,unsigned_int_b);

	double_b = sqrt ( double_c ) ;
	BWTIncFree(double_b);

}
void bwt_bwtgen( short parameter_1,long parameter_2)
{
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	short short_a = 0;
	int int_a = 0;
	unsigned_int_a = unsigned_int_a * unsigned_int_a;
	bwt_bwtgen2(unsigned_int_b,short_a,int_a);

}
int err_gzclose( double parameter_1)
{
	int int_a = 0;
	int int_b = 0;
	double double_a = 0;
	long long_a = 0;
	double double_b = 0;
	int_a = int_a - int_b;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a >"N*7@d" )
	{
		int int_a = 0;
		int int_b = 0;
		double double_a = 0;
		long long_a = 0;
		double double_b = 0;
		?:
		_err_fatal_simple(double_a,long_a);

		double_a = fmod ( double_a , double_b ) ;
	}
	return int_a;
}
void bns_destroy()
{
	int int_a = 0;
	double double_a = 0;
	float float_a = 0;
	float float_b = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	float float_c = 0;
	long long_a = 0;
	long long_b = 0;
	if(1)
	{
	}
	else
	{
		int int_a = 0;
		double double_a = 0;
		float float_a = 0;
		float float_b = 0;
		double double_b = 0;
		double double_c = 0;
		double double_d = 0;
		float float_c = 0;
		long long_a = 0;
		long long_b = 0;
		double_a = fabs ( double_a ) ;
		if(1)
		{
			int int_a = 0;
			double double_a = 0;
			float float_a = 0;
			float float_b = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			float float_c = 0;
			long long_a = 0;
			long long_b = 0;
			float_c = float_a - float_b;
		}
		double_b = double_c;
		for(int looper_a=0; looper_a<1;looper_a++)
		{
			int int_a = 0;
			double double_a = 0;
			float float_a = 0;
			float float_b = 0;
			double double_b = 0;
			double double_c = 0;
			double double_d = 0;
			float float_c = 0;
			long long_a = 0;
			long long_b = 0;
			long_a = long_a - long_b;
			int_a = err_fclose();

			float_a = float_b;
		}
		double_c = sqrt ( double_b ) ;
		double_d = ceil ( double_a ) ;
	}
}
int err_fprintf( unsigned int parameter_1,char parameter_2,double parameter_3)
{
	double double_a = 0;
	long long_a = 0;
	int int_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_b = 0;
	_err_fatal_simple(double_a,long_a);

	int_a = int_a;
	double_a = double_b + double_b;
	double_a = fmod ( double_a , double_b ) ;
	double_b = pow ( double_b , double_a ) ;
	double_c = tanh ( double_b ) ;
	int_a = int_a;
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a >"0ulcc" )
	{
		long_a = long_a;
	}
	return int_b;
}
char bis_bns_dump( char parameter_1,unsigned int parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	double double_c = 0;
	double double_d = 0;
	double double_e = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	long long_a = 0;
	long long_b = 0;
	unsigned int unsigned_int_c = 0;
	int int_c = 0;
	char char_a = 0;
	int int_d = 0;
	int int_b = 0;
	double double_f = 0;
	double_a = ldexp ( double_b , int_a ) ;
	double_a = atan2 ( double_c , double_a ) ;
	int_a = int_a / int_a;
	double_a = pow ( double_b , double_d ) ;
	double_e = double_d;
	unsigned_int_a = unsigned_int_a * unsigned_int_b;
	double_c = double_b + double_d;
	for(int looper_a=0; looper_a<1;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_c = 0;
		char char_a = 0;
		int int_d = 0;
		int int_b = 0;
		double double_f = 0;
		int_a = err_fclose();

		int_b = int_b;
		unsigned_int_a = unsigned_int_a;
		if(1)
		{
			long_b = long_a * long_a;
		}
		else
		{
			double_e = ldexp ( double_a , int_b ) ;
		}
		long_a = long_b;
	}
	double_b = pow ( double_b , double_a ) ;
	unsigned_int_c = unsigned_int_a + unsigned_int_a;
	double_d = sqrt ( double_b ) ;
	double_d = atan2 ( double_d , double_b ) ;
	double_a = sinh ( double_d ) ;
	double_d = log ( double_b ) ;
	for(int looper_b=0; looper_b<9;looper_b++)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		double double_c = 0;
		double double_d = 0;
		double double_e = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		long long_a = 0;
		long long_b = 0;
		unsigned int unsigned_int_c = 0;
		int int_c = 0;
		char char_a = 0;
		int int_d = 0;
		int int_b = 0;
		double double_f = 0;
		int_c = err_fprintf(unsigned_int_a,char_a,double_b);

		double_e = atan2 ( double_e , double_f ) ;
		long_a = long_a * long_b;
	}
	double_a = sinh ( double_a ) ;
	int_c = int_d - int_a;
	int_c = err_fflush();

}
int err_fclose()
{
	int int_a = 0;
	int int_b = 0;
	double double_c = 0;
	long long_a = 0;
	double double_a = 0;
	double double_b = 0;
	int_a = int_b;
	if(1)
	{
		int int_a = 0;
		int int_b = 0;
		double double_c = 0;
		long long_a = 0;
		double double_a = 0;
		double double_b = 0;
		double_a = acos ( double_b ) ;
	}
	return int_b;
	_err_fatal_simple(double_c,long_a);

}
int err_fflush()
{
	short short_a = 0;
	short short_b = 0;
	double double_a = 0;
	double double_b = 0;
	unsigned int unsigned_int_a = 0;
	long long_a = 0;
	int int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	short_b = short_a - short_a;
	if(1)
	{
		double_a = fmod ( double_b , double_b ) ;
	}
	unsigned_int_a = unsigned_int_a / unsigned_int_a;
	if(1)
	{
		double_a = atan ( double_b ) ;
	}
	char controller_c[1];
	scanf("%1s", controller_c);
	if( controller_c >"H" )
	{
		if(1)
		{
			short short_a = 0;
			short short_b = 0;
			double double_a = 0;
			double double_b = 0;
			unsigned int unsigned_int_a = 0;
			long long_a = 0;
			int int_a = 0;
			unsigned int unsigned_int_b = 0;
			unsigned int unsigned_int_c = 0;
			_err_fatal_simple(double_a,long_a);

			unsigned_int_c = unsigned_int_b / unsigned_int_b;
		}
	}
	return int_a;
}
void _err_fatal_simple( double parameter_1,long parameter_2)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double_a = ceil ( double_b ) ;
	double_b = atan2 ( double_c , double_d ) ;
}
float err_fwrite( short parameter_1,float parameter_2,double parameter_3,unsigned int parameter_4)
{
	float float_a = 0;
	float float_b = 0;
	long long_a = 0;
	float float_c = 0;
	double double_a = 0;
	long long_b = 0;
	float_b = float_a / float_a;
	if(1)
	{
		float float_a = 0;
		float float_b = 0;
		long long_a = 0;
		float float_c = 0;
		double double_a = 0;
		long long_b = 0;
		long_a = long_b;
	}
	return float_c;
	_err_fatal_simple(double_a,long_a);

}
int bis_add1( unsigned int parameter_1,char parameter_2,double parameter_3,unsigned int parameter_4,int parameter_5,int parameter_6,char parameter_7)
{
	double double_a = 0;
	double double_b = 0;
	char char_a = 0;
	char char_b = 0;
	int int_a = 0;
	int int_b = 0;
	long long_a = 0;
	long long_b = 0;
	double double_d = 0;
	double double_e = 0;
	double double_f = 0;
	int int_e = 0;
	double double_c = 0;
	short short_b = 0;
	int int_d = 0;
	short short_c = 0;
	short short_d = 0;
	float float_a = 0;
	char char_c = 0;
	unsigned int unsigned_int_a = 0;
	short short_a = 0;
	unsigned int unsigned_int_b = 0;
	int int_c = 0;
	double_a = pow ( double_b , double_b ) ;
	double_a = acos ( double_a ) ;
	double_b = acos ( double_b ) ;
	if(1)
	{
		char_a = char_a;
		double_a = double_b;
	}
	double_a = double_b - double_b;
	char_b = char_b * char_a;
	?:
	int_b = int_a - int_b;
	double_a = acos ( double_a ) ;
	long_a = long_b;
	?:
	double_b = asin ( double_b ) ;
	double_b = acos ( double_a ) ;
	for(int looper_a=0; looper_a<4;looper_a++)
	{
		double double_a = 0;
		double double_b = 0;
		char char_a = 0;
		char char_b = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_d = 0;
		double double_e = 0;
		double double_f = 0;
		int int_e = 0;
		double double_c = 0;
		short short_b = 0;
		int int_d = 0;
		short short_c = 0;
		short short_d = 0;
		float float_a = 0;
		char char_c = 0;
		unsigned int unsigned_int_a = 0;
		short short_a = 0;
		unsigned int unsigned_int_b = 0;
		int int_c = 0;
		double_c = cos ( double_c ) ;
		if(1)
		{
			if(1)
			{
				double_a = log ( double_d ) ;
			}
			else
			{
				double double_a = 0;
				double double_b = 0;
				char char_a = 0;
				char char_b = 0;
				int int_a = 0;
				int int_b = 0;
				long long_a = 0;
				long long_b = 0;
				double double_d = 0;
				double double_e = 0;
				double double_f = 0;
				int int_e = 0;
				double double_c = 0;
				short short_b = 0;
				int int_d = 0;
				short short_c = 0;
				short short_d = 0;
				float float_a = 0;
				char char_c = 0;
				unsigned int unsigned_int_a = 0;
				short short_a = 0;
				unsigned int unsigned_int_b = 0;
				int int_c = 0;
				if(1)
				{
					double_b = fmod ( double_a , double_c ) ;
					double_d = acos ( double_a ) ;
				}
				char_a = char_c;
				unsigned_int_a = unsigned_int_a;
				short_a = short_b;
				unsigned_int_b = unsigned_int_b + unsigned_int_b;
				unsigned_int_a = unsigned_int_a - unsigned_int_a;
				int_b = int_c * int_b;
			}
		}
		int_d = int_b / int_d;
		if(1)
		{
			double_a = cosh ( double_c ) ;
		}
		if(1)
		{
			double_e = tan ( double_b ) ;
			double_b = double_e + double_e;
			double_d = double_a;
		}
		short_b = short_c - short_d;
		float_a = float_a;
	}
	double_e = double_f - double_d;
	return int_e;
}
long bis_bns_fasta2bntseq( int parameter_1,int parameter_2,unsigned int parameter_3)
{
	double double_a = 0;
	double double_b = 0;
	int int_a = 0;
	int int_b = 0;
	long long_a = 0;
	long long_b = 0;
	double double_c = 0;
	double double_d = 0;
	float float_a = 0;
	float float_b = 0;
	int int_c = 0;
	double double_e = 0;
	short short_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_f = 0;
	unsigned int unsigned_int_b = 0;
	double double_g = 0;
	unsigned int unsigned_int_c = 0;
	short short_b = 0;
	short short_c = 0;
	short short_d = 0;
	unsigned int unsigned_int_d = 0;
	char char_a = 0;
	int int_d = 0;
	char char_b = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	double double_l = 0;
	short short_e = 0;
	double double_m = 0;
	unsigned int unsigned_int_e = 0;
	long long_c = 0;
	double double_k = 0;
	double double_n = 0;
	double_a = double_a * double_b;
	int_a = int_b;
	long_b = long_a * long_b;
	double_b = cos ( double_b ) ;
	double_c = tan ( double_b ) ;
	double_a = fabs ( double_d ) ;
	double_c = double_b;
	float_b = float_a - float_b;
	int_a = int_b / int_c;
	double_e = fabs ( double_c ) ;
	float_b = err_fwrite(short_a,float_b,double_b,unsigned_int_a);

	double_c = log ( double_e ) ;
	double_f = tan ( double_c ) ;
	double_f = pow ( double_a , double_d ) ;
	unsigned_int_b = unsigned_int_a - unsigned_int_b;
	double_g = ldexp ( double_c , int_c ) ;
	unsigned_int_a = unsigned_int_c * unsigned_int_a;
	double_b = cosh ( double_a ) ;
	double_d = atan2 ( double_g , double_d ) ;
	short_b = short_c;
	short_a = short_c + short_d;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		double double_d = 0;
		float float_a = 0;
		float float_b = 0;
		int int_c = 0;
		double double_e = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		short short_c = 0;
		short short_d = 0;
		unsigned int unsigned_int_d = 0;
		char char_a = 0;
		int int_d = 0;
		char char_b = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		double double_l = 0;
		short short_e = 0;
		double double_m = 0;
		unsigned int unsigned_int_e = 0;
		long long_c = 0;
		double double_k = 0;
		double double_n = 0;
		double_c = pow ( double_c , double_e ) ;
		long_c = long_a + long_c;
	}
	else
	{
		double_g = ceil ( double_d ) ;
		int_c = int_b / int_c;
	}
	double_g = pow ( double_e , double_a ) ;
	int looper_a = 0;
	while(looper_a < 4)
	{
		looper_a += 1;
		int_b = int_b + int_c;
	}
	int_a = bis_add1(unsigned_int_d,char_a,double_c,unsigned_int_b,int_a,int_d,char_b);

	double_b = double_h + double_f;
	double_g = fmod ( double_c , double_i ) ;
	int_b = int_b / int_b;
	for(int looper_b=0; looper_b<9;looper_b++)
	{
		unsigned_int_b = unsigned_int_d;
		if(1)
		{
			bns_destroy();

			int_b = int_c;
		}
		if(1)
		{
			double_b = cosh ( double_c ) ;
		}
		double_a = cosh ( double_j ) ;
	}
	for(int looper_c=0; looper_c<1;looper_c++)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		double double_d = 0;
		float float_a = 0;
		float float_b = 0;
		int int_c = 0;
		double double_e = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		short short_c = 0;
		short short_d = 0;
		unsigned int unsigned_int_d = 0;
		char char_a = 0;
		int int_d = 0;
		char char_b = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		double double_l = 0;
		short short_e = 0;
		double double_m = 0;
		unsigned int unsigned_int_e = 0;
		long long_c = 0;
		double double_k = 0;
		double double_n = 0;
		double_k = atan ( double_c ) ;
		char controller_d[3];
		scanf("%3s", controller_d);
		if( controller_d >"&B9" )
		{
			double_l = double_d + double_b;
		}
		if(1)
		{
			double_c = log ( double_k ) ;
		}
		double_i = atan2 ( double_h , double_b ) ;
	}
	int_a = err_fclose();

	double_d = floor ( double_f ) ;
	short_a = short_e * short_a;
	double_l = exp ( double_m ) ;
	?:
	float_b = float_b * float_a;
	if(1)
	{
		double_a = tanh ( double_e ) ;
		double_f = fabs ( double_i ) ;
	}
	int_a = int_b / int_a;
	char_b = bis_bns_dump(char_b,unsigned_int_e);

	double_g = log ( double_j ) ;
	double_i = atan ( double_c ) ;
	long_b = long_a + long_b;
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		long long_b = 0;
		double double_c = 0;
		double double_d = 0;
		float float_a = 0;
		float float_b = 0;
		int int_c = 0;
		double double_e = 0;
		short short_a = 0;
		unsigned int unsigned_int_a = 0;
		double double_f = 0;
		unsigned int unsigned_int_b = 0;
		double double_g = 0;
		unsigned int unsigned_int_c = 0;
		short short_b = 0;
		short short_c = 0;
		short short_d = 0;
		unsigned int unsigned_int_d = 0;
		char char_a = 0;
		int int_d = 0;
		char char_b = 0;
		double double_h = 0;
		double double_i = 0;
		double double_j = 0;
		double double_l = 0;
		short short_e = 0;
		double double_m = 0;
		unsigned int unsigned_int_e = 0;
		long long_c = 0;
		double double_k = 0;
		double double_n = 0;
		double_f = double_n;
	}
	char_a = char_b;
	double_a = fmod ( double_e , double_g ) ;
	double_m = ceil ( double_a ) ;
	return long_b;
	int_a = err_fflush();

}
void err_fatal( unsigned int parameter_1,unsigned int parameter_2,long parameter_3)
{
	double double_a = 0;
	char char_a = 0;
	unsigned int unsigned_int_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	double_a = tan ( double_a ) ;
	char_a = char_a;
	unsigned_int_a = unsigned_int_a;
	double_b = double_a / double_a;
	double_a = fmod ( double_c , double_d ) ;
	double_b = tan ( double_d ) ;
	double_c = exp ( double_a ) ;
}
int main_biscuit_index( int parameter_1,char parameter_2)
{
	unsigned int unsigned_int_a = 0;
	double double_a = 0;
	long long_a = 0;
	double double_b = 0;
	double double_c = 0;
	double double_d = 0;
	int int_a = 0;
	char char_a = 0;
	char char_b = 0;
	char char_c = 0;
	long long_b = 0;
	double double_e = 0;
	int int_b = 0;
	unsigned int unsigned_int_b = 0;
	long long_c = 0;
	long long_d = 0;
	double double_f = 0;
	unsigned int unsigned_int_c = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	double double_j = 0;
	unsigned int unsigned_int_d = 0;
	float float_a = 0;
	float float_b = 0;
	float float_c = 0;
	int int_c = 0;
	double double_k = 0;
	float float_d = 0;
	char char_d = 0;
	short short_a = 0;
	short short_b = 0;
	int int_d = 0;
	short short_c = 0;
	unsigned int unsigned_int_e = 0;
	double double_l = 0;
	unsigned int unsigned_int_f = 0;
	double double_m = 0;
	short short_d = 0;
	double double_n = 0;
	double double_o = 0;
	unsigned int unsigned_int_g = 0;
	double double_p = 0;
	int int_e = 0;
	int int_f = 0;
	int int_g = 0;
	double double_q = 0;
	int int_h = 0;
	double double_r = 0;
	char char_e = 0;
	long long_e = 0;
	double double_s = 0;
	double double_t = 0;
	float float_e = 0;
	float float_f = 0;
	double double_u = 0;
	int int_i = 0;
	unsigned int unsigned_int_h = 0;
	double double_v = 0;
	unsigned int unsigned_int_i = 0;
	short short_e = 0;
	int int_j = 0;
	unsigned_int_a = unsigned_int_a;
	double_a = floor ( double_a ) ;
	long_a = long_a;
	bwt_destroy(long_a);

	double_b = tan ( double_b ) ;
	double_c = pow ( double_a , double_d ) ;
	int looper_a = 0;
	while(looper_a < 8)
	{
		looper_a += 1;
		{
			if(1)
			{
				int_a = int_a - int_a;
			}
			if(1)
			{
				double_a = acos ( double_c ) ;
			}
			if(1)
			{
				char_c = char_a / char_b;
			}
			else
			{
				long_a = long_b;
			}
			double_e = ldexp ( double_c , int_b ) ;
			double_d = exp ( double_d ) ;
			return int_a;
		}
	}
	if(1)
	{
		int_b = int_b;
		unsigned_int_b = unsigned_int_b;
		long_b = long_c / long_d;
		double_c = asin ( double_b ) ;
		double_f = sinh ( double_b ) ;
		double_d = acos ( double_b ) ;
		unsigned_int_a = unsigned_int_a;
		unsigned_int_c = unsigned_int_b - unsigned_int_b;
		double_g = double_a;
		return int_a;
	}
	if(1)
	{
		double_a = acos ( double_h ) ;
		double_g = tan ( double_f ) ;
		char controller_f[1];
		scanf("%1s", controller_f);
		if( controller_f >"r" )
		{
			double_h = ceil ( double_i ) ;
		}
	}
	double_g = acos ( double_j ) ;
	err_fatal(unsigned_int_d,unsigned_int_c,long_b);

	float_c = float_a - float_b;
	double_g = cosh ( double_i ) ;
	double_d = pow ( double_j , double_h ) ;
	int_a = int_c * int_c;
	double_f = pow ( double_e , double_k ) ;
	double_e = acos ( double_j ) ;
	double_c = double_j;
	double_a = fmod ( double_h , double_b ) ;
	double_c = double_a;
	if(1)
	{
		?:
		int_a = err_gzclose(double_e);

		bwt_dump_sa(char_b,int_b);

		char_c = char_a - char_b;
	}
	bwt_dump_bwt(long_c,float_d);

	double_k = cosh ( double_i ) ;
	char_d = char_a + char_b;
	double_e = sqrt ( double_e ) ;
	float_b = float_a + float_d;
	bwt_bwtgen(short_a,long_b);

	double_c = sinh ( double_c ) ;
	short_b = short_a;
	if(1)
	{
		unsigned_int_d = unsigned_int_d;
	}
	if(1)
	{
		int_a = int_d / int_c;
		short_c = short_b / short_a;
		double_g = acos ( double_d ) ;
		float_a = float_b;
	}
	double_i = log10 ( double_c ) ;
	double_j = ldexp ( double_b , int_b ) ;
	double_a = tan ( double_k ) ;
	float_c = float_b;
	double_d = tan ( double_e ) ;
	float_d = float_d;
	short_a = short_c / short_a;
	if(1)
	{
		unsigned_int_b = unsigned_int_c + unsigned_int_e;
	}
	if(1)
	{
		double_c = dump_forward_pac(long_d,double_h);

		unsigned_int_c = unsigned_int_e + unsigned_int_c;
		double_k = fabs ( double_c ) ;
		double_d = double_g + double_l;
		unsigned_int_f = unsigned_int_e - unsigned_int_e;
	}
	double_l = cosh ( double_f ) ;
	int_c = int_c;
	unsigned_int_d = unsigned_int_c / unsigned_int_a;
	double_f = sinh ( double_l ) ;
	double_j = log ( double_m ) ;
	double_l = ceil ( double_a ) ;
	int_b = int_a - int_a;
	double_e = double_c / double_j;
	long_d = long_d;
	short_d = bwt_restore_bwt(double_i);

	double_n = double_f;
	double_h = tan ( double_k ) ;
	double_e = cos ( double_h ) ;
	double_o = fmod ( double_i , double_n ) ;
	unsigned_int_g = unsigned_int_g;
	double_g = atan2 ( double_i , double_p ) ;
	double_c = sinh ( double_h ) ;
	double_p = fabs ( double_g ) ;
	char_c = char_a;
	int_e = int_e / int_c;
	int_g = int_f - int_b;
	double_e = log ( double_l ) ;
	unsigned_int_g = unsigned_int_b * unsigned_int_g;
	short_c = short_b;
	bwt_cal_sa(double_j,int_g);

	double_f = ceil ( double_a ) ;
	double_d = asin ( double_a ) ;
	double_n = sqrt ( double_f ) ;
	double_o = tan ( double_q ) ;
	int_c = int_h + int_h;
	unsigned_int_c = bwt_pac2bwt(float_d,int_g);

	double_b = floor ( double_q ) ;
	int_d = int_c;
	double_e = double_a * double_h;
	double_r = pow ( double_a , double_c ) ;
	long_c = long_c + long_c;
	bwt_bwtupdate_core();

	double_g = log ( double_g ) ;
	double_g = exp ( double_f ) ;
	char_e = char_b / char_a;
	double_c = atan2 ( double_a , double_a ) ;
	double_h = sinh ( double_p ) ;
	long_e = bis_bns_fasta2bntseq(int_g,int_c,unsigned_int_a);

	double_s = fmod ( double_t , double_q ) ;
	double_l = atan ( double_g ) ;
	double_p = double_h + double_o;
	double_e = ldexp ( double_f , int_h ) ;
	float_e = float_f;
	double_q = atan2 ( double_s , double_j ) ;
	short_c = short_a;
	double_j = double_f - double_h;
	double_l = double_i / double_e;
	double_a = log ( double_u ) ;
	int_a = int_i;
	double_p = floor ( double_n ) ;
	double_h = floor ( double_g ) ;
	double_b = acos ( double_m ) ;
	double_s = double_d / double_b;
	double_t = pow ( double_k , double_u ) ;
	double_h = atan2 ( double_i , double_n ) ;
	unsigned_int_f = unsigned_int_h;
	float_c = float_d;
	double_i = fabs ( double_v ) ;
	unsigned_int_d = unsigned_int_i;
	double_p = exp ( double_c ) ;
	short_c = short_e - short_d;
	return int_j;
}
int usage( double parameter_1)
{
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	double double_d = 0;
	char char_a = 0;
	char char_b = 0;
	double double_e = 0;
	float float_a = 0;
	float float_b = 0;
	char char_c = 0;
	char char_d = 0;
	double double_f = 0;
	int int_b = 0;
	double double_g = 0;
	double double_h = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	unsigned int unsigned_int_c = 0;
	unsigned int unsigned_int_d = 0;
	unsigned int unsigned_int_e = 0;
	unsigned int unsigned_int_f = 0;
	long long_a = 0;
	long long_b = 0;
	float float_c = 0;
	int int_c = 0;
	double double_i = 0;
	int int_d = 0;
	int int_e = 0;
	double double_j = 0;
	short short_a = 0;
	double double_k = 0;
	double double_l = 0;
	unsigned int unsigned_int_g = 0;
	long long_c = 0;
	long long_d = 0;
	long long_e = 0;
	int int_f = 0;
	int int_g = 0;
	double double_m = 0;
	double_a = double_b;
	double_a = ldexp ( double_c , int_a ) ;
	double_d = tanh ( double_c ) ;
	char_a = char_b;
	double_a = fmod ( double_c , double_c ) ;
	double_a = tanh ( double_e ) ;
	double_b = sqrt ( double_e ) ;
	double_a = double_a;
	float_b = float_a * float_b;
	double_e = acos ( double_b ) ;
	char_c = char_d;
	double_b = floor ( double_b ) ;
	double_c = acos ( double_b ) ;
	double_a = sinh ( double_f ) ;
	int_b = int_a;
	double_g = asin ( double_f ) ;
	double_h = log ( double_c ) ;
	double_a = cosh ( double_c ) ;
	double_b = double_c;
	char_a = char_c;
	unsigned_int_b = unsigned_int_a * unsigned_int_a;
	unsigned_int_d = unsigned_int_a - unsigned_int_c;
	double_g = cos ( double_b ) ;
	unsigned_int_c = unsigned_int_e - unsigned_int_f;
	double_f = atan2 ( double_e , double_e ) ;
	long_a = long_b;
	float_b = float_b * float_c;
	int_c = int_b - int_c;
	double_i = acos ( double_g ) ;
	int_d = int_a;
	double_c = sqrt ( double_b ) ;
	int_c = int_e / int_e;
	double_j = tanh ( double_g ) ;
	long_b = long_b - long_b;
	short_a = short_a;
	double_i = ceil ( double_k ) ;
	double_d = acos ( double_l ) ;
	short_a = short_a;
	double_d = fmod ( double_b , double_i ) ;
	double_h = exp ( double_l ) ;
	double_j = exp ( double_e ) ;
	int_c = int_c;
	float_a = float_a * float_c;
	double_l = cosh ( double_j ) ;
	float_a = float_b - float_c;
	unsigned_int_g = unsigned_int_g;
	double_k = exp ( double_a ) ;
	int_a = int_a - int_a;
	double_l = double_a + double_h;
	long_e = long_c * long_d;
	double_l = ceil ( double_b ) ;
	double_c = cosh ( double_h ) ;
	int_b = int_f;
	double_k = double_e - double_k;
	int_e = int_a * int_d;
	int_c = int_g - int_e;
	float_c = float_c - float_a;
	double_a = ceil ( double_k ) ;
	double_c = cos ( double_f ) ;
	double_j = atan ( double_c ) ;
	unsigned_int_f = unsigned_int_e;
	double_j = acos ( double_m ) ;
	double_j = log ( double_k ) ;
	double_f = cos ( double_k ) ;
	double_a = cos ( double_d ) ;
	double_d = atan ( double_f ) ;
	return int_e;
}
int ksprintf( int parameter_1,short parameter_2,unsigned int parameter_3)
double realtime()
{
	float float_a = 0;
	float float_b = 0;
	char char_a = 0;
	char char_b = 0;
	double double_a = 0;
	double double_b = 0;
	float_a = float_a * float_b;
	char_b = char_a + char_b;
	double_a = log ( double_a ) ;
	return double_b;
}
int main(int argc, char *argv[])
{
	int uni_para =100;
	double double_a = 0;
	double double_b = 0;
	double double_c = 0;
	int int_a = 0;
	int int_b = 0;
	long long_a = 0;
	long long_b = 0;
	long long_c = 0;
	double double_d = 0;
	char char_a = 0;
	char char_b = 0;
	int int_c = 0;
	int int_d = 0;
	unsigned int unsigned_int_a = 0;
	unsigned int unsigned_int_b = 0;
	double double_e = 0;
	double double_f = 0;
	double double_g = 0;
	double double_h = 0;
	double double_i = 0;
	int int_e = 0;
	double double_k = 0;
	short short_a = 0;
	short short_b = 0;
	double double_j = 0;
	unsigned int unsigned_int_c = 0;
	double_c = double_a - double_b;
	int_a = int_b;
	long_a = long_a;
	double_a = acos ( double_a ) ;
	long_b = long_b - long_c;
	double_b = pow ( double_c , double_b ) ;
	for(int looper_a=0; looper_a<2;looper_a++)
	{
		double_d = double_c + double_a;
	}
	char_b = char_a * char_a;
	char controller4vul_a[5];
	scanf("%5s", controller4vul_a);
	if( controller4vul_a <"ckI65" )
	{
		int_c = main_tview(int_d,char_a,uni_para);

		return int_b;
	}
	char controller_a[5];
	scanf("%5s", controller_a);
	if( controller_a <"G;Y!X" )
	{
		unsigned_int_a = unsigned_int_b;
	}
	if(1)
	{
		double_c = floor ( double_b ) ;
	}
	if(1)
	{
		double_e = tanh ( double_f ) ;
	}
	if(1)
	{
		double_g = tan ( double_a ) ;
	}
	if(1)
	{
		double_g = acos ( double_b ) ;
	}
	char controller_f[3];
	scanf("%3s", controller_f);
	if( controller_f <"3B;" )
	{
		double_f = floor ( double_h ) ;
	}
	if(1)
	{
		double_i = fmod ( double_f , double_h ) ;
	}
	if(1)
	{
		double_h = cos ( double_c ) ;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_d = 0;
		char char_a = 0;
		char char_b = 0;
		int int_c = 0;
		int int_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		int int_e = 0;
		double double_k = 0;
		short short_a = 0;
		short short_b = 0;
		double double_j = 0;
		unsigned int unsigned_int_c = 0;
		short_a = short_b;
	}
	if(1)
	{
		double_f = ceil ( double_e ) ;
	}
	if(1)
	{
		double_f = ceil ( double_d ) ;
	}
	if(1)
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_d = 0;
		char char_a = 0;
		char char_b = 0;
		int int_c = 0;
		int int_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		int int_e = 0;
		double double_k = 0;
		short short_a = 0;
		short short_b = 0;
		double double_j = 0;
		unsigned int unsigned_int_c = 0;
		double_f = pow ( double_j , double_a ) ;
	}
	if(1)
	{
		int_e = int_e;
	}
	else
	{
		double double_a = 0;
		double double_b = 0;
		double double_c = 0;
		int int_a = 0;
		int int_b = 0;
		long long_a = 0;
		long long_b = 0;
		long long_c = 0;
		double double_d = 0;
		char char_a = 0;
		char char_b = 0;
		int int_c = 0;
		int int_d = 0;
		unsigned int unsigned_int_a = 0;
		unsigned int unsigned_int_b = 0;
		double double_e = 0;
		double double_f = 0;
		double double_g = 0;
		double double_h = 0;
		double double_i = 0;
		int int_e = 0;
		double double_k = 0;
		short short_a = 0;
		short short_b = 0;
		double double_j = 0;
		unsigned int unsigned_int_c = 0;
		unsigned_int_b = unsigned_int_a + unsigned_int_c;
		return int_e;
	}
	double_e = fabs ( double_b ) ;
	double_k = log ( double_h ) ;
	if(1)
	{
		char_b = char_b;
		double_d = double_c;
		for(int looper_b=0; looper_b<10;looper_b++)
		{
			double_i = cosh ( double_c ) ;
		}
		double_b = fmod ( double_k , double_h ) ;
	}
	double_e = cosh ( double_f ) ;
	return int_c;
}
