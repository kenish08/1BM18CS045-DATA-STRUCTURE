#include<stdio.h>
void main()
{
	struct stud
	{  int id;
	int age;
	int marks;
	};
	struct stud a;
	printf("enter the id\n");
	scanf("%d",&a.id);
	printf("enter the age\n");
	scanf("%d",&a.age);
	printf("enter the marks\n");
	scanf("%d",&a.marks);
	if((a.age>20)&&(a.marks>65))
	  printf("data is valid and student is eligible");

	 else
	 printf("data is invalid and student is not eligible");
	 getch();
      }

