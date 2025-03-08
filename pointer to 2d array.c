//POINTER TO 2D ARRAY

/*

#include<stdio.h>
int main(){
	int a[2][3] = {{10,20,30},{40,50,60}};
	int i, *p;//1
	p = a;//2
	for (i = 0;i<6;i++){
		printf("%x %d\n",p,*p);
		p++;
	}
	return 0;

}

*/


//With out pointer
/*

#include<stdio.h>
int main(){
	int a[2][3] = {{10,20,30},{40,50,60}};
	int i,j;//1
	for (i = 0;i<2;i++){
		for (j = 0;j<3;j++){
		printf("%d  ",*(*(a+i)+j));// *(*(a+i)+j) = a[i][j]
	}
		printf("\n");
	}
	return 0;

}

*/

#include<stdio.h>
int main(){
	int a[2][3] = {{10,20,30},{40,50,60}};
	int i,j;//1
	int (* p)[3];//1(Pointer pointing to an array with size 3)(same like *argv[] commmand line parameters)
	p = a;//2
	for (i = 0;i<2;i++){
		for (j = 0;j<3;j++){
		printf("%x  %d     ",p,*(*(p+i)+j));//3 *(*(a+i)+j) = a[i][j]
	}
		printf("\n");
	}
	return 0;
}

