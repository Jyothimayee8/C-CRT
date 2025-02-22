//break

/*

#include<stdio.h>
int main(){
	int i = 1;
	while(i<=10){
		printf("%d\t",i);
		if(i==5)
		break;
		i++;
	}
	printf("completed");
}
*/
#include<stdio.h>
int main(){
	int i = 1;
	while(i<=10){
		printf("%d\t",i);
		break; //break statement in loop should be associated with a condition
		i++;
	}
	printf("completed");
}
