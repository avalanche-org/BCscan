/*
 * \ barcode reader   (testing programme ) 
 * \ MS7120 BS METROLOGIC INSTRUMENTS   
 * \ copyright(c) , 2022  Umar <jUmarB@protonmail.com>   <github/jukoo>  
 */

#include <stdio.h> 
#include <stdlib.h> 

#include "bcreader.h" 

int __ms7120bs__  ( int argc , char **argv )  { 

   
    char kb[DECIMAL_BASE]  = {0} ; 
     
    (void)  init( kb ,  DECIMAL_BASE)  ; 

    char  bc[BCR_MAX_LENGHT]  ;  
    
    read_in(bc)  ; 

    
      
    return  EXIT_SUCCESS ; 
}  
