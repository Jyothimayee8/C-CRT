#include<stdio.h>
int main(){
	int *p;//pointer declaration
	int a = 5;
	p = &a; //pointer initialisation
	printf("%d\n",*p);//dereferencig operation(* -> indirection operator)
	printf("%d\n",a);//accessing data with variable(direct accesing)
	printf("%d",p);
return 0;
}
//direct accesing is faster than the indirect accesing
