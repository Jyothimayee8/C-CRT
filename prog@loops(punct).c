//write a program to print the puntuaction characters along with ascii values
//using for loop
/* 

//punctual characters
#include<stdio.h>
#include<ctype.h>
int main(){
int i;
for(i = 0;i<128;i++){
	if (ispunct(i)){
		printf("%c %d\n",i,i);
	}
}
return 0;
}

------------------------------------------------
//counting
#include<stdio.h>
#include<ctype.h>
int main(){
int i,c=0;
for(i = 0;i<128;i++){
	if (iscntrl(i)){
		printf("%c %d %d\n",i,i,c);  //9 is tabspace
		c++;
	}
}
return 0;
}

-------------------------------------------
//printable characters
#include<stdio.h>
#include<ctype.h>
int main(){
int i,c=0;
for(i = 0;i<128;i++){
	if (isprint(i)){
		printf("%c %d %d\n",i,i,c);
		c++;
	}
}
return 0;
}

------------------------------------------------

#include<stdio.h>
int main(){
int i=1;
while(i<=5){
	printf("welcome");//infinite loop
	}
return 0;
}

----------------------------------------
*/

#include<stdio.h>
int main(){
int i=1;
for(;;){
	printf("welcome");//infinite loop
	}
return 0;
}
