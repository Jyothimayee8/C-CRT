/*

#include<stdio.h>
#include<string.h>
int main(){
	struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;
	struct student s2 = {503,85.23,"jyothi"};
	s1.rno = 502;
	s1.per = 90.232;
	strcpy(s1.name,"Mayee");
	printf("%d   %f    %s\n",s1.rno,s1.per,s1.name);
	printf("%d   %f    %s\n",s2.rno,s2.per,s2.name);
	return 0;
	
}
*/

//or 


struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;
#include<stdio.h>
#include<string.h>
int main(){
	struct student s2 = {503,85.23,"jyothi"};
	s1.rno = 502;
	s1.per = 90.232;
	strcpy(s1.name,"Mayee");
	printf("%d   %f    %s\n",s1.rno,s1.per,s1.name);
	printf("%d   %f    %s\n",s2.rno,s2.per,s2.name);
	printf("%d\n",sizeof(s1));
	printf("%x  %x  %x",s1.rno,s1.per,s1.name);
	return 0;
	
}

