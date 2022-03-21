/*
 * \ barcode reader   (testing programme ) 
 * \ MS7120 BS METROLOGIC INSTRUMENTS   
 * \ copyright(c) , 2022  Umar <jUmarB@protonmail.com>   <github/jukoo>  
 */

#if  !defined (__MS7120BS__) 
#define  __MS7120BS__

#define  HEADER   fprintf (stdout ," METROLOGIC INSTRUMENT _MS7120BS\n")

#define  BCR_MAX_LENGHT  0xff 
#define  DECIMAL_BASE    0x0a  

#ifdef  FR_KB  

#define  _ZERO   0xe0 
#define  _ONE    0x26  
#define  _TWO    0xe9 
#define  _THREE  0x22
#define  _FOUR   0x27 
#define  _FIVE   0x28
#define  _SIX    0x2d
#define  _SEVEN  0xe8 
#define  _EIGHT  0x5f
#define  _NINE   0xe7 

#endif  


unsigned char  *init( unsigned  char  __symb[]  , size_t  __digit_base_type )   ;  
 
static void  flush_buffer ( )  ; 

char * read_in (char * restrict  __bc_buffer )  ;  

char *translate ( const char* __string   , const char __kb_symbole []  , size_t size) ; 


#endif  
