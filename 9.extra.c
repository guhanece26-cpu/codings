#include <stdio.h>
struct employee
{
	int id;
	float salary;
};
union departmant
{
	int deptno;
};
int main()
{
	struct employee e;
	union departmant d;
	FILE*fp;
	char ch;
	printf("Enter Employee ID: ");
	scanf("%d",&e.id);
	printf("Enter Sallary: ");
	scanf("%f",&e.salary);
	printf("Enter Department Number: ");
	scanf("%d",&d.deptno);
	fp=fopen("emp.txt","w");
	fprintf(fp,"Employee ID:%d\n",e.id);
	fprintf(fp,"Salary:%.2f\n",e.salary);
	fprintf(fp,"Department Number:%d\n",d.deptno);
	fclose(fp);
	fp=fopen("emp.txt","r");
	printf("\nEmployee Details:\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
	
}