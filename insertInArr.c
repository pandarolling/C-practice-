//insert an element in an array
#include<stdio.h>

void insertArr(int a[], int pos, int val){
	// int i;
	int n = sizeof(a)/sizeof(a[0]);
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a[0]));
	printf("%d\n",n);

	// //shifting nums to right until the position
	// for(i =n ; i<pos-1; i--){
	// 	a[i] = a[i-1];
	// }
	// a[pos] = val;
}
int main(){
	int arr[10] ={2,3,4,5,6,7,8,9,10};
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));
	int val =1;
	int pos =1;
	int i;
	for(i =0; i<10; i++)
		printf("%d ",arr[i]);
	printf("\n");
	insertArr(arr, pos, val);
	// for(i =0; i<10; i++)
	// 	printf("%d ",arr[i]);
	// printf("\n");

return 0;
}