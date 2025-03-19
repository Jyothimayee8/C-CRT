//fprintf() and fscanf()
#include<stdio.h>
int main(){
	FILE *fp;
	char n;
	int r;
	float p;
	fp = fopen("s1batchmulv.txt","w");
	while(1)
	{
		scanf("%s%d%f",&n,&r,&p);//reading data from the keyboard 
		if(r== -1)
		break;
		fprintf(fp,"%s%d%f",n,r,p);
		//storing data into the file
	}
	fclose(fp);
	return 0;
}


/*

#include<stdio.h>
int main(){
	FILE *fp;
	char n;
	int r,cr;
	float p;
	fp = fopen("s1batchmulv.txt","w");
	while(cr)
	{
		fscanf(fp,"%s%d%f",&n,&r,&p);//reading data from the keyboard 
		printf(fp,"%s%d%f",n,r,p);
		cr--;
		//storing data into the file
	}
	fclose(fp);
	fp = fopen("s1batchmulv.txt","r");
	while(cr){
	fscanf(fp,"%s%d%f",&n,&r,&p);//reading the data from file
	printf("%s %d %f",n,r,p);
	cr--;
}
fclose(fp);
	return 0;
}

*/
