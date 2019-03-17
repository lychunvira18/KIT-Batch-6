#include<stdio.h>

struct time{
	int hour;
	int minute;
	int second;
}t1,t2,dif;

main(){
	printf("Start time: \n");
	printf("Hour: ");
	scanf("%d", &t1.hour);
	printf("Minute: ");
	scanf("%d", &t1.minute);
	printf("Second: ");
	scanf("%d", &t1.second);
	
	printf("\nStop time: \n");
	printf("Hour: ");
	scanf("%d", &t2.hour);
	printf("Minute: ");
	scanf("%d", &t2.minute);
	printf("Second: ");
	scanf("%d", &t2.second);
	
	dif.hour=t1.hour-t2.hour;
	
	dif.minute=t1.minute-t2.minute;
	
	dif.second=t1.second-t2.second;
	
	printf("----------------------------\n");
	printf("Time difference: %d:%d:%d",dif.hour,dif.minute,dif.second);
}
