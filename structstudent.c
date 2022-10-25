#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
}student;
int main(){
	printf("Enter Name:");
	gets(student.name);
	printf("Enter Roll no:");
	scanf("%d",&student.roll);
	printf("Enter Marks:");
	scanf("%f",&student.marks);
	printf("Name:");
	puts(student.name);
	printf("Roll no:%d\n",student.roll);
	printf("Marks:%.2f",student.marks);
	return 0;
}
