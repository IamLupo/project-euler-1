#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long int smallestProduct(long long int a){

long long int value=1;
	for(long long int i=1;i<=a;i++){
		value=value*i;
	}

return value;

}

void main(){
	long long int value;
	int limit=10;
	value=smallestProduct(limit);	
	printf("%lld\n\n",value);

	for(int i=1;i<=limit;i++){
		//squareOfSum(i)-sumOfSquare(i);
	}
}
