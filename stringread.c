#include<Stdio.h>
int main(){
	char a[5]; //size is not mandatory in string data 
	scanf("%[^\n]",&a);
	printf("%s",a);
	return 0;
}
