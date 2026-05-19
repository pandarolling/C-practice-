#include<stdio.h>
#include<string.h>

char tracks [][80] = {
	"Cool for the summer",
	"Shatter me",
	"Bring me to life",
	"I don't know",
	"Take a hint",
	"Me and the devil",
};



void findtrack(char search[]){
	// printf("%ld", rows);
	for(int i =0;  i < 6; i++){
		if(strcasestr(tracks[i], search)){
			// puts("Came here");
			printf("Track %i: %s\n", i+1, tracks[i]);
		}
	}
}

int main(){
	char search_for[80];
	printf("Enter the track you want to search for :");
	// getchar();
	fgets(search_for, 80, stdin);


	int i;
	for(i =0; search_for[i] != '\n'; i++);
	search_for[i] = '\0';

	findtrack(search_for);
	return 0;
	// printf("%ld", sizeof(tracks)/sizeof(tracks[0]));
}