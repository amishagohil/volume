#include <stdio.h>

struct distance {
   
   int feet,inch

};

int main() 
{
   struct distance s,s1,sum;
   
   printf("Enter feet =");
   scanf("%d", &s.feet);
   printf("Enter feet = ");
   scanf("%d", &s1.feet);
   printf("Enter inch = ");
   scanf("%d", &s.inch);
   printf("Enter inch = ");
   scanf("%d", &s1.inch);
   
   sum.feet = s.feet + s1.feet;
   sum.inch = s.inch + s1.inch;

   while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-= 12;
	}
   printf("Sum of distances = %d",sum.feet,sum.inch);
}
