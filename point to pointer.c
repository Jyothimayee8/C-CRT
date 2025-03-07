#include<stdio.h>
int main(){
	int *p,**q,a = 5;//declaration
	p = &a;//initialisation
	q = &p;//double pointer is initialise with single pointer address
	printf("%x\n",q);
	printf("%x %d\n",p,*p);
	printf("%x %d\n",*q,**q); //dereferencing two times
	return 0;
}
