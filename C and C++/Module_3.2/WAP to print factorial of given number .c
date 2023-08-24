#include <stdio.h>
 

 int factorial( int num)
{
    int res = 1, i;
    for (i = 2; i <= num; i++){
        res *= i;
	}
    return res;
}

int main()
{
    int num ;
    printf("add NUmber = ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num, factorial(num));
    return 0;
}
