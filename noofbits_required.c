/*
//linked list node creation
struct snode{
	int data;
	struct snode *p;//SELF REFRENTIAL POINTER(single linked list)
};
struct dnode
{
	struct dnode *p;///SELF REFRENTIAL POINTER (double linked list)
	int data;
	struct dnode *n;//SELF REFERENTIAL POINTER
	
	
};

*/
 //datatype variable-name:no-of-bits-required(int  and char datatype)
 struct s2{
 	int a:4;
 	int b:6;
 };
 #include<stdio.h>
 int main(){
 	struct s2 s1;
 	printf("%d\n",sizeof(s1));
 	return 0;
 }
