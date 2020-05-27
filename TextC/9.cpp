#include <stdio.h>

int main()
        {
	        int i=0; double s=0;
	        while(s<5) s+=double(1)/++i;
	        printf("%d",i);
            return 0;
        }
