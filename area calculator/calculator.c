#include<stdio.h>
#include<math.h>

void main()
{
	
	double a,b,area;
	char s;
	const double PI = 3.14;
	printf("\n\n#################################### Area Calculator V1.0 ####################################\n\n");

	printf("Enter required shape {circle(c), rectangle(r), square(s), triangle(t)} : ");
	scanf("%c", &s);

	switch(s){
		case 'c':printf("Enter circle's radius: ");
			      scanf("%lf", &a);
			      //calculation
			      area = PI*a*a;
			      printf("Circle's Area : %lf\n", area);break;
               
                case 'r':printf("Enter rectangle's length: ");
   				 scanf("%lf", &a);
				 printf("Enter rectangle's width: ");
				 scanf("%lf", &b);
				 //calculation
				 area = a*b;printf("Rectangle's Area: %lf\n", area);break;
		case 's':printf("Enter square side size: ");
				scanf("%lf", &a);
				//calculcation
				area = a*a;printf("Square's Area: %lf\n", area);break;
		case 't':printf("Enter triangle's height: ");
				scanf("%lf", &a);
				printf("Enter triangle's width: ");
				scanf("%lf", &b);
				//calculation
				area = 0.5*a*b;printf("Triangle's Area: %lf\n", area);break;
		
		default:printf("%c isn't valid shape\n", s);
	}			
				
	printf("\n#################################### Finished ####################################\n\n");


}

	
