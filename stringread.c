#include<Stdio.h>
int main(){
	char a[5]; //size is not mandatory in string data 
	scanf("%[^\n]",&a);
	printf("%s",a);
	return 0;
}



//using integer array


#include<stdio.h>
int main(){
	int n;//size of character array
	scanf("%d",&n);//n - no important
	char a[n];
	scanf(" %[^\n]",a);
	printf("%s",a);
	return 0;
}



//using malloc and free funtions (DMA)

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;//size of character array
	scanf("%d",&n);//n - no important
	char *p;//converting void pointer to integer pointer n jr
	p = (char*)malloc(n*sizeof(char));
	scanf(" %[^\n]",p);
	printf("%s",a);
	free(p);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("hii"+2);
	return 0;
}  //index prints
