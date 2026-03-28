// limit.c

#include<stdio.h>
#include<limits.h>

int main(){

	printf("\nmin of char = %d && max of char = %d", SCHAR_MIN, SCHAR_MAX);
	printf("\nmax of char = %d", UCHAR_MAX);
	
printf("\nmin of short = %d && max of short = %d", SHRT_MIN, SHRT_MAX);
	printf("\nmax of short = %d", USHRT_MAX);
	
printf("\nmin of int = %d && max of int = %d", INT_MIN, INT_MAX);
	printf("\nmax of int= %u", UINT_MAX);
	
printf("\nmin of long = %ld && max of long = %ld", LONG_MIN, LONG_MAX);
	printf("\nmax of long= %lu",ULONG_MAX);
	

	return 0;
}