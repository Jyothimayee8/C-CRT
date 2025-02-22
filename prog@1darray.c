//ARRAYS-1D
/*
#include<stdio.h>
int main(){
	int a[2] = {10,20}; //no boundary checking
	a[3] = 40;
	int i;
	for(i = 0;i<4;i++)
	printf("%d\t",a[i]);
}


----------------------------------------------------------------------------

//ex2

#include<stdio.h>
int main(){
	int a[4] = {10,20};
	int i;
	for(i = 0;i<4;i++)  //uninitialised elements are zero //
	printf("%d\t",a[i]);
}

----------------------------------------------------------------------------
//ex3


#include<stdio.h>
int main(){
	char a[3] = {'a','n'}; //no default value,every strind ends with null character '\0'
	
	int i;
	for(i = 0;i<4;i++)
	printf("%c\t",a[i]);
}



----------------------------------------------------------------------------
//ex4


#include<stdio.h>
int main(){
	char a[3] = {"and"}; //no default value,every strind ends with null character '\0'
	
	int i;
	for(i = 0;i<3;i++)
	printf("%c\t",a[i]);
}

--------------------------------------------------------------------------
//ex5


#include<stdio.h>
int main(){
	int a[] = {10,20,30,40}; //size is optional
	
	int i;
	for(i = 0;i<4;i++)
	printf("%d\t",a[i]);
	return 0;
}
---------------------------------------------------------------------------

//write a program to read an integer array of size n and then print the values 

#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n]; 
	for(i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

---------------------------------------------------------


//print  data along with address
method-1:

#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n]; 
	for(i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i<n;i++){
		printf("%d - %p\t",a[i],&a[i]);//data specifier is %p and hexadecimal - %x OR %X[exlude 0's]
	}
	return 0;
}

method-2:using DMA
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,*p;//pointer p
	scanf("%d",&n);//n=size of array 
	p = (int*)malloc(n*sizeof(int));//is equal to int a[n] array
	for(i = 0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i = 0;i<n;i++){
		printf("%d - %x\t",p[i],&p[i]);
	}
	free(p);//deallocation of memory
	return 0;
}



