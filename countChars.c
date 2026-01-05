#include<stdio.h>


void count(){
	double n =0;
	double ln =0;
	double blank =0;
	double tab =0;

	int c;
		printf("\nProgram to count characters, No. of Lines, blanks and tabs\n");

	while((c=getchar()) != EOF){
		if(c =='\t')
			tab++;
		if(c ==' ')
			blank++;
		if(c == '\n')
			ln++;
		n++;
	}

	if(ln > 0)  //ln will only be increased if there is atlease one line
		ln++;    //this way the last line without \n will not be omitted

	printf("\nNo. of characters is %.0lf\n",n);
	printf("No. of lines is %.0lf\n",ln);
	printf("No. of blank is %.0lf\n",blank);
	printf("No. of tab is %.0lf\n",tab);
}
int main(){
	
	count();
		
	return 0;
}
