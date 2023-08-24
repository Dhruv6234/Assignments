

#include <stdio.h>
int main()
{
    int x =10, y = 10;
 
 
    x = x ^ y; 
    y = x ^ y; 
    x = x ^ y; 
 
    printf(" Swapping: \n x = %d, y = %d", x, y);
 
   
}