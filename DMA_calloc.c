//USING CALLOC()

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, *p,i;
	scanf("%d",&n);//n is size of array
	p = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++) 
	scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	printf("%d\t %x\n",p[i],&p[i]);
	free(p);
	return 0;
}

/*

//calloc () initialises the blocks with zero values after memory allocation of f memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, *p,i;
	scanf("%d",&n);//n is size of array
	p = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	printf("%d\t %x\n",p[i],&p[i]);
	free(p);
	return 0;
}

*/
