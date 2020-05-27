 #include<stdio.h>
       #include<math.h>
       const double a=10.2; 
       int  main()
       {
	       float x,y;
	       scanf("%f",&x);
 	       while(x!=-100) {
		       if(x<=0) y=sqrt(a*a+x*x);  
	 	       else y=3*a*x*x+4*a*x-1;
		       printf("%f\n",y);
		       scanf("%f",&x);
	       }
       }
