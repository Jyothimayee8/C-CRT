//pointer flexibility
//we can use a single pointer for multiple variables
/*

#include<stdio.h>
int main(){
	int *p; //declaration
	int a = 5,b = 10,c = 15;
	p = &a; //initialisation
	printf("%x %d\n",p,*p);
	p = &b;
	printf("%x %d\n",p,*p);
	p = &c;
	printf("%x %d\n",p,*p);
	
}

*/
//we  can initialise one pointer 
#include<stdio.h>
int main(){
	int *p1,*p2,*p3;//initialisation
	int a = 5;
	p1 = &a;
	p2 = &a;
	p3 = p2; //we can initialise one pointer with another
	printf("%x %d\n",p1,*p1);
	printf("%x %d\n",p2,*p2);
	printf("%x %d\n",p3,*p3);
	return 0;
}

