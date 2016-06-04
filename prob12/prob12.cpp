#include<cstdio>
#include<cstdlib>
#include<cmath>

long long int listDivisors(long long int a){
	long long int j = 0;
	for(long long int i = 2; i < a + 2; i++){
		if(a % i == 0){
			j++;
		}
	}

	printf("::%lld", j + 1);
	if(j >= 500){exit(1);}
	return 0;
}

long long int triangleNumbers(long long int level){
	long long int value = 0;
	
	for(long long int i = 1; i <= level; i++){
		value += i;
		
		if(value % 500 == 0){
			printf("%lld:", value);
			listDivisors(value);
			printf("..%lld\n\n", i);
		}
	}	
	return value;
}

void main(){
	long long int value;
	value = triangleNumbers(20000);
}
