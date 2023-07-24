#include<stdio.h>

main(){
	
	int gross_s , base_s;
	
	float da , hra , ta ;
	
	printf("enter base salary: ");
	
	scanf("%d" , &base_s);
	
	da = base_s*5/100;
	
	hra = base_s*10/100; // this process for da,ta,hra from % than all plus
	
	ta = base_s*8/100;
	
	gross_s = base_s + da + hra + ta;
	
	printf("gross salary is:%d",gross_s);
	
	
}