#include<stdio.h>

struct student{
	
	int roll_no;
	char name[100];
	int chem_marks,maths_marks,phy_marks
};

main()
{
	struct student m[5];
	int i;
	float per;
	for(i=0;i<1;i++)
	{
		printf("student roll no. =");
		scanf("%d",&m[i].roll_no);
		printf("student name =");
		scanf("%s",&m[i].name);
		printf("student chemistry marks =");
		scanf("%d",&m[i].chem_marks);
		printf("student maths marks =");
		scanf("%d",&m[i].maths_marks);
		printf("student physics marks =");
		scanf("%d",&m[i].phy_marks);
	}
	
	for(i=0;i<1;i++)
	{
		printf("student roll no. =%d\n",m[i].roll_no);
		printf("student name =%s\n",m[i].name);
		printf("student chemistry marks = %d\n",m[i].chem_marks);
		printf("student maths marks = %d\n",m[i].maths_marks);
		printf("student physics marks = %d\n",m[i].phy_marks);
		per = (m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/300.0*100;
		printf("\nstudent percentage =%f",per);
	}
}
