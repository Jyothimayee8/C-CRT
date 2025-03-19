#include<stdio.h>
int main(){
	FILE *fp;
	char c;
	fp = fopen("s1batch.txt","w");
	while((c=getchar()!=EOF))//EOF = end of the file ctrl+z,reading data from the keyboard 
	{
		putc(c,fp);//storing data into the file
	}
	fclose(fp);
	fp = fopen("s1batch.txt","r");
	while((c = getc(fp))!=EOF)//reading the data from the file
	{
		printf("%c",c);//printing the data on to the monitor screen
	}
	fclose(fp);
	return 0;
}
