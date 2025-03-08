//pointer pointing to 1D array
/*

#include<stdio.h>
int main(){
	int a[] = {10,20,30};
	int i, *p;//1
	p = a;//2 or p = &a[0]; or p = &a
	for (i = 0;i<3;i++){
		//printf("%d\n",*(p+i));//3
		printf("%d\n",p[i]);//*(p+i) and p[i] is same
	}
	return 0;
}


//by default the array name represents address (starting)
#include<stdio.h>
int main(){
	int a[] = {10,20,30};
	int i;//1
	for (i = 0;i<3;i++){
		printf("%d\n",*(a+i));//deferencing using array *(a+i) and *(p+i) same
	}
	return 0;
}


*/

//pointer incrementation

#include<stdio.h>
int main(){
	int a[] = {10,20,30};
	int i, *p;
	p = &a;
	for (i = 0;i<3;i++){
		printf("%x %d\n",p,*p);//TAKES DEAFAULT STARTING ELEMENTS AND ITS ADDRESS
		p++;//pointer incrementation
	return 0;

}}

