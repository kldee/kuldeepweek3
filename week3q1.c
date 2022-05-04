#include<stdio.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int gcd(int a,int b) 
{
    if(b>a){
        swap(&a,&b);
    }
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a-b);
    }
}
int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    printf("GCD of number %d and %d is %d.....",a,b,gcd(a,b));
}