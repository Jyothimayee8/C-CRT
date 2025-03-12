//USING STRUCTURE ARRAY 
struct student {
		int rno;
		float per;
		char name[10];
		
	}s1;
#include<stdio.h>
#include<string.h>
int main(){
	struct student s[2] ={{503,85.23,"jyothi"},{504,35.343,"Mayee"}};
	int i ;
	for(i=0;i<2;i++)
	printf("%d   %f    %s\n",s[i].rno,s[i].per,s[i].name);
	return 0;
	
}
