#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long int sumOfSquares(long long int a){

long long int value=0;
	for(long long int i=1;i<=a;i++){
		value+=pow(i,2);
	}

return value;

}

long long int squareOfSum(long long int a){

long long int value=0;
	for(long long int i=1;i<=a;i++){
		value+=i;
	}
value=pow(value,2);

return value;

}


void main(){
	long long int value;
	int limit=100;
	
	value=squareOfSum(limit)-sumOfSquares(limit);
	printf("%lld\n\n",value);

	for(int i=1;i<=limit;i++){
		//squareOfSum(i)-sumOfSquare(i);
	}
}
