union student
{
	char name[10];
	int rno;
	float per;
};//1
#include<stdio.h>
#include<string.h>
int main(){
	union student s1 = {502,85.3,"jyo"};//2
	/* we should not perform the initialisation at once
	printf("%d\t%f\t%s\n",s1.rno,s1.per,s1.name);
	*/
	s1.rno = 502;
	printf("%d\n",s1.rno);
	s1.per = 75.77;
	printf("%f\n",s1.per);
	strcpy(s1.name,"jyo");
	printf("%s\n",s1.name);
	return 0;
}



/*

union student
{
	char name[10];
	int rno;
	float per;
};//1
#include<stdio.h>
#include<string.h>
int main(){
	union student s1 = {502,85.3,"jyo"};//2
	/* we should not perform the initialisation at once
	printf("%d\t%f\t%s\n",s1.rno,s1.per,s1.name);

	s1.rno = 502;
	s1.per = 75.77;
	strcpy(s1.name,"jyo");
	printf("%d\n",s1.rno);
	printf("%f\n",s1.per);
	printf("%s\n",s1.name);
	return 0;
}

*/
