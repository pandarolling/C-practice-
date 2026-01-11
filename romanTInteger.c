#include<stdio.h>

int romanToInt(char* s);

int main(){
  char rom[]= {'M','C','M','X','C','I','V'};
  printf("%d\n",romanToInt(rom));
  return 0;
}

int value(char c){
  switch(c){
    case 'I' : return 1;
    case 'V' : return 5;
    case 'X' : return 10;
    case 'L' : return 50;
    case 'C' : return 100;
    case 'D' : return 500;
    case 'M' : return 1000;
    
  }
  return 0;
}

int romanToInt(char* s) {
    int number= 0;
    int i =0;
    int prev  =0;
      while(s[i] != '\0'){
        int curr = value(s[i]);
        int nxt = value(s[i+1]);
        if( nxt>curr){
      
       number = number -curr;
     }

     if( (nxt <=curr) &&( s[i] !='V' ||s[i] !='L' ||s[i] !='D' ) ){
       number = number + curr;
     }

     i++;
      }

    return number;
}