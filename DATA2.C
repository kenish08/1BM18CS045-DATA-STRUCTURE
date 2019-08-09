#include<stdio.h>
void main()
{  	struct stud
       {
	int id;
	int age;
	int marks;
	};
	struct stud st[10];
	int i;
	for(i=0;i<10;i++)
	{
	 printf("enter the id\n,",i+1);
	 scanf("%d",&st[i].id);
	 printf("enter the age\n");
	 scanf("%d",&st[i].age);
	 printf("enter the marks: ");
	 scanf("%d",&st[i].marks);
	 }
	 if(st[i].age>20 && st[i].marks>=0 && st[i].marks<=100)
	 {
	 if(st[i].marks>=65)
	 printf("student %d is eligible\n",i+1);
	 else
	 printf("student %d is not eligible",i+1);
	 }
	 else
	 printf("student %d data is nit valid\n",i+1);
	  getch();
	 }