//scope and lifetime of auto
/*
#include <stdio.h>
int main(){
	int i;
	//printf("%d\n",a);//cant be excuted a is out of scope
	for (i=1;i<=3;i++)
	increment();//function call
		return 0;
	}
increment(){
		auto int a = 1;
		printf("%d\n",a);
		a++;
	}
	
*/


//scope and lifetime of register

/*

#include<stdio.h>
int main(){
	int i;
	for (i=1;i<=3;i++)
	increment();//function call
		return 0;
	}
increment(){
		register int a = 1;
		printf("%d\n",a);
		a++;
	}
	
	*/
	
//scope nad lifetime of extern (till the end of the variable)

/*

#include<stdio.h>
int main(){
	int i;
	//printf("%d\n",a);//cant be excuted a is out of scope
	for (i=1;i<=3;i++)
	increment();//function call
		return 0;
	}
increment(){
		static int a = 1;//updated value in the memory until end of the program
		printf("%d\n",a);//local scope
		a++;
	}


*/


//scope and lifetime of the extern (global scope)

#include<stdio.h>
int a = 10;
int main(){
	printf("%d\n",a+2);
	s1batch();
	s2batch();
	s3batch();
	return 0;
}
s1batch(){
	printf("%d\n",a-2);
}

s2batch(){
	printf("%d\n",a*2);
}

s3batch(){
	printf("%d\n",a/2);
}
