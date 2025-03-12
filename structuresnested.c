//NESTED STRUCTURES 
//global

struct day {
		char wday[10];
		int month,year;
		
	};
struct time {//(day with total 6 elements)
		int hr,min,sec;
		struct day d;//nested structure
		
	};
#include<stdio.h>
#include<string.h>
int main(){
	struct time t1;
	t1.hr = 10;
	t1.min = 20;
	t1.sec = 55;
	t1.d.month = 3;
	t1.d.year = 2025;
	strcpy(t1.d.wday,"Wednesday");
	printf("%d\t%d\t%d\n",t1.hr,t1.min,t1.sec);
	printf("%s\t%d\t%d\n",t1.d.wday,t1.d.month,t1.d.year);
	return 0;
}
