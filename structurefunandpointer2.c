// b. using structure variable

struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;//global is better to avoid warnings
#include<stdio.h>
#include<string.h>
int main(){
	struct student s1={503,85.23,"jyothi"};
	m1(s1);//funtion call
	return 0;
	
}
m1(struct student s2){//string can written in 2 ways(character array)
	
printf("%d %f  %s",s2.rno,s2.per,s2.name);
}

