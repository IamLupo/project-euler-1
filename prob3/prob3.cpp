#include<cstdio>

int isPrime(unsigned long long int number){
  int i;
  for(i = 2; i * i <= number; i++){
    if(number % i == 0){
      return 0;
    }
  }else{
    return 1;
  }
}

long long int findSPCD(long long int n){
  long long int i = 2;

  while(n % i != 0){
    i++;
  }

  return i;

}

int main(){

  long long int i, problem = 600851475143;
  i = 1;

  while(!isPrime(problem / i)){
    i = i * findSPCD(problem / i);
  }

  printf("The biggest prime common denominator to %lld might well be %lld\r\n", problem, problem/i);

  return 0;

}
