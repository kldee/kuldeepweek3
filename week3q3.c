#include<stdio.h>
int eno(int a)
{ 
  if(a%2==0)
  { 
    return 0;
  } 
  else
  { 
    return 1;
      }
  }
  int main()
  { 
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(eno(a)==0)
    { 
      printf("%d is a even number:",a); 
    }
    else
	{ 
      printf("%d is a odd number:",a); 
        }
}