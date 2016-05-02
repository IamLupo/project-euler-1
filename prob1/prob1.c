#include<stdio.h>
void main(){

int limit=1000;
int sum = 0;

for(int i=0;i<limit;i++){

if((i%3==0)||(i%5==0)){
sum += i;
}

}

printf("The sum of all multiples of 3 and 5 below %d is %d",limit,sum);

}
