#include<stdio.h>
struct employee{
	int eno;
	char ename[20];
	float epay;
}emp;
int main(){
	printf("Enter Employee Name:");
	gets(emp.ename);
	printf("Enter Employee No:");
	scanf("%d",&emp.eno);
	printf("Enter Pay:");
	scanf("%f",&emp.epay);
	printf("Employee Name:");
	puts(emp.ename);
	printf("Employee No:%d\n",emp.eno);
	printf("Pay:%.2f\n",emp.epay);
	if(emp.epay<=2000){
		printf("15% increase in pay\n");
		printf("final pay:%.2f",emp.epay*0.15+emp.epay);
	}
	else if(emp.epay>2000&&emp.epay<=5000){
		printf("10% increase\n");
		printf("final pay:%.2f",emp.epay*0.10+emp.epay);
	}
	else{
		printf("No increase\n");
		printf("final pay:%.2f",emp.epay);
	}
	return 0;
}
