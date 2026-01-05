#include<stdio.h>

int main(){
	long int ex =123456789120123;
	void *ptr =&ex;
	printf("%c\n",*(char*)ptr);
	printf("%d\n",*(int*)ptr);
	printf("%ld\n",*(long*)ptr);
		return 0;
}