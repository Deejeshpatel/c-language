#include<stdio.h>

main(){
	
	int a = 12, b = 24 ;
	
	printf("before swepping a = %d , b = %d",a,b);
	
	a = a + b; //36
	b = a - b; //12
	a = a - b; //24
	
	printf("\nafter swepping a = %d , b = %d",a,b);
}