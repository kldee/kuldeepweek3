#include<stdio.h>
int main()
{
    int n,s[100],l=0;
    printf("Enter the length of the string:\n");
    scanf("%d",&n);
    printf("Enter the values of string:\n");
    for(int i=0;i<n;i++)
	{
        scanf("%d",&s[i]);
    }
    for(int i=0;i<n;i++)
	{
        if(s[i]>l)
		{
            l=s[i];
        }
    }
    printf("the largest number in the string is %d",l);
}