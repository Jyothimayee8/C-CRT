struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;
#include<stdio.h>
#include<string.h>
int main(){
	struct student s2 = {503,85.23,"jyothi"};
	s1 = s2;//stucture variable copy operation
	printf("%d   %f    %s\n",s1.rno,s1.per,s1.name);
	printf("%d   %f    %s\n",s2.rno,s2.per,s2.name);
	return 0;
}
