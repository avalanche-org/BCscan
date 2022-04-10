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

#define  _ZERO   'à'
#define  _ONE    '&'  
#define  _TWO    'é' 
#define  _THREE  '"'
#define  _FOUR   '''
#define  _FIVE   '('
#define  _SIX    '-'
#define  _SEVEN  'è'
#define  _EIGHT  '_'
#define  _NINE   'ç' 

#endif  


unsigned char  *init( unsigned  char  __symb[]  , size_t  __digit_base_type )   ;  
 
static void  flush_buffer ( )  ; 

char * read_in (char * restrict  __bc_buffer )  ;  

char *translate ( const char* __string   , const char __kb_symbole []  , size_t size) ; 


#endif  
