//exercise2
/*
3. Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z 
*/
#include<stdio.h>
int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    printf("Pointer : Demonstrate the use of & and * operator :                                                          \n");
    printf("--------------------------------------------------------                                                      \n");
    printf(" m = %d                                                                                                      \n",m);
    printf(" fx = %f                                                                                                      \n",fx);
    printf(" cht = %c                                                                                                      \n",cht);
    printf("\nUsing & operator :                                                                                           \n");
    printf("-----------------------                                                                                       \n");
    printf(" address of m = %x                                                                                \n",&m);
    printf(" address of fx = %x                                                                               \n",&fx);
    printf(" address of cht = %x                                                                              \n",&cht);
    printf("\nUsing & and * operator :                                                                                     \n");
    printf("-----------------------------                                                                                 \n");
    printf(" value at address of m = %d                                                                                  \n",*(&m));
    printf(" value at address of fx = %f                                                                          \n",*(&fx));
    printf(" value at address of cht = %c                      \n",*(&cht));
    printf("\nUsing only pointer variable :                                                                                \n");
    printf("----------------------------------                                                                            \n");
    printf(" address of m = %x                                                                                \n",&m);
    printf(" address of fx = %x                                                                               \n",&fx);
    printf(" address of cht = %x                                                                              \n",&cht);
    printf("\nUsing only pointer operator :                                                                                \n");
    printf("----------------------------------                                                                            \n");
    printf(" value at address of m = %d                                                                                  \n",m);
    printf(" value at address of fx= %f                                                                           \n",fx);
    printf(" value at address of cht= %c \n",cht);
    return 0;
}