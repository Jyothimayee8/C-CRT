//USING FUNCTIONS AND STRUCTURE(POINTER TOO)3 ways
//a.Element By Element

struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;//global is better to avoid warnings
#include<stdio.h>
#include<string.h>
m1(int r,float p,char n[10]);
int main(){
	struct student s1={503,85.23,"jyothi"};
	m1(s1.rno,s1.per,s1.name);//funtion call
	return 0;
	
}
m1(int r,float p,char n[10]){//string can written in 2 ways(character array)
	
printf("%d %f  %s",r,p,n);
}

//using character pointer
/*


struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;//global is better to avoid warnings
#include<stdio.h>
#include<string.h>
m1(int r,float p,char n[10]);
int main(){
	struct student s1={503,85.23,"jyothi"};
	m1(s1.rno,s1.per,s1.name);//funtion call
	return 0;
	
}
m1(int r,float p,char *n){//string can written in 2 ways(character array)
	
printf("%d  %f  %s",r,p,n);
}

*/
