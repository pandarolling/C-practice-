#include<stdio.h>
#include<stdlib.h>
	int main (){
		int ch, i, n;
		float a,b,ans;

		while(1){
			printf("\n\n\n\t\t*****Utility software*****");

			printf("\nEnter 0 to exit ");
			printf("\t\t\tEnter 1 for addition");
			printf("\nEnter 2 for substraction");
			printf("\t\tEnter 3 for division");
			printf("\nEnter 4 for multiplication");
			printf("\t\tEnter 5 to find x^y");
			printf("\nEnter 6 to find table of a number");
			printf("\tEnter 7 to find modulus");
			printf("\nEnter 8 for sum of n natural numbers");
			printf("\tEnter 9 for factorial");
			printf("\nEnter 10 to reverse a number\n");

			
			
			scanf("%d",&ch);

			switch(ch){
			case 0: exit(0);

			case 1: printf("\nenter Two numbers") ;
					scanf("%f%f",&a,&b);
					ans =a+b;
					printf("\n Answer is %f",ans);
					break;

			case 2: printf("\nenter Two numbers") ;
					scanf("%f%f",&a,&b);
					ans =a-b;
					printf("\n Answer is %f",ans); 
					break;

			case 3: printf("\nenter Two numbers") ;
					scanf("%f%f",&a,&b);
					ans =a/b;
					printf("\n Answer is %f",ans);
					break;

			case 4: printf("\nenter Two numbers") ;
					scanf("%f%f",&a,&b);
					ans =a*b;
					printf("\n Answer is %f",ans);
					break;

			case 5: printf("\nenter Two numbers") ;
					scanf("%f%f",&a,&b);
					ans =1;
					for(i =1; i<=b; i++){
						ans = ans*a;

					}
					printf("\n Answer is %f",ans);
					break;

			case 6: printf("Enter a number");
					scanf("%f",&a);
					for(i = 1; i<=10; i++){
						printf("\n %d * %d = %d",(int)a, i, (int)a*i);
					}
					break;

			case 7: printf("\nenter Two numbers") ;
					scanf("%f%f",&a,&b);
					int x=a;
					int y=b;
					int res =x%y;
					printf("\n remainder is %d",res);
					break; 

			case 8: printf("\nenter a number") ;
					scanf("%d",&n);
					int sum =0;
					for(i =1; i<=n; i++){
						sum +=i;
					}
					printf("sum of %d natural numbers is %d", n, sum);
					break;

			case 9: printf("\nenter a number") ;
					scanf("%d",&n);
					int fact =1;
					for(i = 2; i<=n; i++){
						fact *=i;
					}printf("factorial of %d is %d", n, fact);
					break;

			case 10:int rev = 0;
					printf("enter a number");
					scanf("%d",&n);
					while(n != 0){
						rev *= 10;
						rev += n%10;
						n /= 10;
					}
					printf("Reverse is %d", rev);
					break;

			default: break;
			}

			printf("\n\n\n\t\t**************************");
			printf("\n\n");
		}


	return 0;
	}


	

