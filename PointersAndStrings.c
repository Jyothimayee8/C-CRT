//LENGTH OF PROGRAM INCREASES
/*
char a[] = "hi"
char b[] = "hello"




//WASTAGE OF MEMORY 

#include<stdio.h>
int main(){
	int i ,j;
	char a[3][20] = {"india","pakistan","china"};
	for(i = 0 ;i<3;i++){
		printf("%s   ",a[i]);
	}
}	printf("%d/n",sizeof(a));
	return 0;
}


*/


//USING POINTERS 

#include<stdio.h>
int main(){
	int i ;
	char *a[5] = {"india","pakistan","china"};
	for(i = 0 ;i<3;i++){
		printf("%s   \n",a[i]);
	}	
	printf("%d\n",sizeof(a));
	return 0;
}


