/*
 * \ barcode reader   (testing programme ) 
 * \ MS7120 BS METROLOGIC INSTRUMENTS   
 * \ copyright(c) , 2022  Umar <jUmarB@protonmail.com>   <github/jukoo>  
 */


#include <stdio.h>
#include <stdlib.h> 
#include <assert.h> 
#include <string.h> 

#include "bcreader.h"


static  unsigned  const char _symb[DECIMAL_BASE]  =  {
    _ZERO , _ONE , _TWO , _THREE , _FOUR ,_FIVE,
    _SIX  , _SEVEN , _EIGHT , _NINE 
} ;  

unsigned char *init (unsigned char __symb[]   , size_t  __size ) {
    
    (void ) assert(__size >=  sizeof (_symb)) ;  
    unsigned  char * symbolic  = (unsigned char *)  _symb ; 

    while(  *symbolic   != _NINE)  
       *__symb++ = *symbolic++;  
    
    return     __symb ; 
} 


char  * read_in (char  *restrict bc_buffer   ) { 
   
   if ( !fgets(bc_buffer ,  BCR_MAX_LENGHT ,  stdin )) 
   {  
       exit(EXIT_FAILURE) ; 
   } 
  
   char *jmp =  ( void *) 0  ; 
   jmp = strchr (bc_buffer ,  0xa ) ;  
   if  (!jmp) 
       exit(EXIT_FAILURE)  ;  

   *jmp = '\0' ;

   return   bc_buffer ;  

} 