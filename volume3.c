#include<stdio.h>

enum week{
	
	sunday,monday,tuesday,wednesday,thursday,friday,saturday
};

main()
{
	enum week w;
	w=sunday,monday,tuesday,wednesday,thursday,friday,saturday;
	printf("%d\n",w);
}
