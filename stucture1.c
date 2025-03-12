
//Basic structure 
/*

struct student{
	int rno;
	float per;
	char name[10];
	
};//global

#include<stdio.h>
int main(){
	return 0;
}

or


#include<stdio.h>
int main(){
struct student{ //local
	int rno;
	float per;
	char name[10];
	
};
	return 0;
}

*/

//TWO WAYS TO CREATE STRUCTURE

#include<stdio.h>
int main(){
struct student{
	int rno;
	float per;
	char name[10];
	
}s1,s2,s3;
	return 0;
}


//second way
struct student s4,s5;

