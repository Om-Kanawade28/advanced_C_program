#include<stdio.h>
// exercise1
/*
1. Write a program in C to show the basic declaration of a pointer.
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
                                          
                                                                     Here is m=10, n and o are two integer variable and *z is an integer                                          
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50     
*/
#include<stdio.h>
void main(){
    //Here is m=10, n and o are two integer variable and *z is an integer 
    int m=10,n,o,*z;
    
    printf(" Pointer : Show the basic declaration of pointer :                                                            \n");
    printf("--------------------------------------------- \n");
    // z stores the address of m 
    z = &m;
    printf(" z stores the address of m = %x \n",z);
    
    // *z stores the value of m 
    printf(" *z stores the value of m = %d \n",*z);
    
    // &m is the address of m 
    printf(" &m is the address of m = % x \n",&m);
    
    // &n stores the address of n 
    printf(" &n stores the address of n = %x \n",&n);
    
    // &o  stores the address of o 
    printf(" &o  stores the address of o = %x \n",&o);
    
    // &z stores the address of z 
    printf(" &z stores the address of z = %x \n",&z);
}
    