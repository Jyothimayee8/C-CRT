//pointer arithmetic 

//pointer incrementation and decrementation
/*


#include<stdio.h>
int main(){
	int a[] = {10,20,30,40,50};
	int i, *p;
	p = &a;
	for (i = 0;i<5;i++){
		printf("%x %d\n",p,*p);
		p++; //pointer incrementation : points to the next element of the array 
		
	}
	p = &a[2];
	p--; //pointer decrementation
	printf("%x %d\n",p,*p);
	return 0;

}

*/

 // CONSTANT ADDITION 

/*

#include<stdio.h>
int main(){
	int a[] = {10,20,30,40,50};
	int i, *p;
	p = &a;
	for (i = 0;i<5;i++){
		printf("%x %d\n",p,*p);
		p++; //pointer incrementation : points to the next element of the array 
		
	}
	p = &a[2];
	p = p+2;//constant addition (moving the pointer TO A  particular position in  forwad direction
	printf("%x %d\n",p,*p);
	return 0;

}

*/

/*


#include<stdio.h>
int main(){
	int a[] = {10,20,30,40,50};
	int i, *p;
	p = &a;
	for (i = 0;i<5;i++){
		printf("%x %d\n",p,*p);
		p++; //pointer incrementation : points to the next element of the array 
		
	}
	p = &a[2];
	p = p-2;//constant SUBRACTION (moving the pointer TO A particular position in  BACKWARD  direction
	printf("%x %d\n",p,*p);
	return 0;

}

*/

//SUBRACTING ONE POINTER WITH ANOTHER POINTER

#include<stdio.h>
int main(){
	int a[] = {10,20,30,40,50};
	int i, *p;
	p = &a;
	for (i = 0;i<5;i++){
		printf("%x %d\n",p,*p);
		p++; //pointer incrementation : points to the next element of the array 
		
	}
	p = &a[2];
	int *q;
	q = &a[4];
	printf("%d\n",q-p);//high index to low index
	return 0;

}

