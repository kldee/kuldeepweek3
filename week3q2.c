#include<stdio.h>
#include<stdbool.h>
bool prime(int n,int i)
{
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return(n,i+1);    
}
int main()
{
        int a;
        printf("Enter the number to check:\n");
        scanf("%d",&a);
        if(prime(a,2))
		{
            printf("%d is a prime number...",a);
        }
        else{
            printf("%d not a prime number",a);
        }
}