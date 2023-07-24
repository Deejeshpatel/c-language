#include<stdio.h>

main(){
	
	float c, f;
	
	printf("enter temperature in Celsius:  ");
	
	scanf("%f", &c);
	
	f = 1.8 * c + 32; // 9/5 = 1.8
	
	printf("enter temperature in Fahrenhet:%f",f );
	
}