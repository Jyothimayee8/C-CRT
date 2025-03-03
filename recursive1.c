//recursive programs in c

//program to print the values from low to high a= 5;b = 11
/* method1

#include<stdio.h>
int main(){
	inc();
	incusingfor();
	return 0;
}
inc(){
	int a = 5,b = 11;
	while(a<=b){
		printf("%d ",a);
		a++;
	}
	printf("\n");
}
incusingfor(){
	int a = 10,b = 20,i;
	for(i = a ;i<=b;i++){
		printf("%d ",i);
	}
}

*/

#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	inc(a,b);
	return 0;
}
inc(int a,int b){
	if(a<=b){
		printf("%d ",a);
		a++;
		return inc(a,b);//recursive function call
	}
}
