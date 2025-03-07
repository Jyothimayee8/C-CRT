#include<stdio.h>
int main(){
	char *a;
	void *b;//used for declaring pointer variable and voic pointer is also called generic pointer
	int *c;
	float **d;//double pointer
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(d));	
	return 0;
}
//all levels same size because pointer is used to store adress not for the data

