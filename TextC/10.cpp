#include<stdio.h>

int main()
{
	       int i;    
	       int p=1;  
	       int s=1;  
	       for(i=1;i<=10;i++) {p*=3; s+=p;}
	       printf("%d",s);
}

