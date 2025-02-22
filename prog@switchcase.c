//write program to read a character and verify whether it is uppercase alphabet o lowercase or digit or spl symbol buy using switch case 
/*
#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 65 ... 90:printf("Upper");break;
		case 97 ... 122:printf("lower");break;
		case 48 ... 57:printf("digit");break;
		default:
		printf("spl symbol");
		break;
	}
	return 0;
}

*/

/*another method
int main(){
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A' ... 'Z':printf("Upper");break;
		case 'a '... 'z':printf("lower");break;
		case '0' ... '9':printf("digit");break;
		default:
		printf("spl symbol");
		break;
	}
	return 0;
}
*/

//program using swithc case of arithmetic operators

#include<stdio.h>
int main(){
	char ch;
	int a,b,c;
	scanf("%c",&ch);//operator symbol +,-,*,/,%
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+':c = a+b;printf("%d\n",c);break;
		case '-':c = a-b;printf("%d\n",c);break;
		case '*':c = a*b;printf("%d\n",c);break;
		case '/':c = a/b;printf("%d\n",c);break;
		case '%':c = a%b;printf("%d\n",c);break;
		default:printf("operator is wrong");break;//optional 
	}
	return 0;
}


