//USING REALLOC()
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, *p,i;
	scanf("%d",&n);//n is size of array
	p = (int*)calloc(n,sizeof(int));//n = 4
	p = (int*)realloc(p,20);//p = old size of ptr of  malloc or calloc()
	for(i=0;i<n+1;i++) 
	scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	printf("%d\t %x\n",p[i],&p[i]);
	free(p);
	return 0;
}

/*
//malloc () initialises the blocks with garbage values after memory allocation of f memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, *p,i;
	scanf("%d",&n);//n is size of array
	p = (int*)calloc(n,sizeof(int));
	p = (int*)realloc(p,21);
	for(i=0;i<n;i++)
	printf("%d\t %x\n",p[i],&p[i]);
	free(p);
	return 0;
}

*/

