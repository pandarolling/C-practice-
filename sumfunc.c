#include<stdio.h>

float ar(float);

int main(){
	float r, area; 

	printf("Enter radius of circle");
	scanf("%f",&r);
	
	area = ar(r);
	printf("Area of the circle is %.2f \n",area);

	return 0;
}

float ar(float r){
	float pi = 3.14;
	return pi*r*r;
}