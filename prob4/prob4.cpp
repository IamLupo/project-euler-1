#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char * convertNumberIntoArray(unsigned int number){
  unsigned int length = (int)(log10((float)number))+1;
  char * arr = (char *) malloc(length * sizeof(char)),* curr = arr;
  do {
    *curr++ = number % 10;
    number /= 10;
  }while(number != 0);
  return arr;
}

int isPalindrome(int a){
  char * b = convertNumberIntoArray(a);
  
  if((b[0] == b[5]) && (b[1] == b[4]) && (b[2] == b[3])){
    return 1;
  }else{
    return 0;
  }
}

void main(){
  for(int i = 999; i > 100; i--){
    for(int j = 999; j > 100; j--){
      if(isPalindrome(i * j) && ((i * j) > 900000)){printf("%d x %d = %d\r\n", i, j, i * j);}
    }
  }
}
