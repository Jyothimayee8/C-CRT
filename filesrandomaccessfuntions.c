//RADNDOM ACCESS FUNTIONS --> fseek(),ftell(),rewind()
#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("s1batchranf.txt","w");
	char c;
	while((c=getchar()!=EOF))//EOF = end of the file ctrl+z,reading data from the keyboard 
	{
		putc(c,fp);//storing data into the file
	}
	fclose(fp);
	fp = fopen("s1batchranf.txt","r");
	int n= 0;
	printf(" %d\n",ftell(fp));//position of the fp after opening the file
	while((c = getc(fp))!=EOF)//reading the data from the file
	{
		printf("%c at %d\n",c,ftell(fp));
		fseek(fp,n+5,1);
		rewind(fp);
	}
	fclose(fp);
	return 0;
}


