// a07 05
#include<stdio.h>
int main()
{
	 int num1,num2,hcf,i;
	 printf("Enter two numbers: ");
	 scanf("%d%d",&num1,&num2);
	 for(i=1;i<=num1;i++)
	    if(num1%i==0 && num2%i==0)
            hcf=i;
	 if(hcf == 1)
	    printf("%d and %d are co-primes", num1, num2);
	 else
	    printf("%d and %d are not co-primes", num1, num2);
	 return(0);
}
