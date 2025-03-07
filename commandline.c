//command line parameters
/*

#include<stdio.h>
int main(int ac,char *v[]){
	printf("%d\n",ac);//by default only one parameter i.e name 
	int i;
	for(i=0;i<ac;i++)
	printf("%s\n",v[i]);
	return 0;
}

*/
//program to make addition on passing the parameters from the main function

/*

#include<stdio.h>
int main(int ac,char *v[]){
	int x = atoi(v[1]); //alphabet to integer funtion atoi
	int y = atoi(v[2]);
	printf("%d",x+y);
	return 0;
}

*/
#include<stdio.h>
int main(int ac,char *v[]){
	char buffer[20];
	itoa (5,buffer,2);//syn itoa(number,string,base-value)
	printf("%s",buffer);
	return 0;
}

