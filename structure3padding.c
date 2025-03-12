//structure padding

#include<stdio.h>
int main(){
    struct student{
        char a;
        int b;
        
    }__attribute__((packed)); //5
    struct student s1;
    printf("%d\n",sizeof(s1));
}

/*

#include<stdio.h>
int main(){
    struct student{
        char a;
        int b;
        
    };//8
    struct student s1;
    printf("%d\n",sizeof(s1));
}

*/
