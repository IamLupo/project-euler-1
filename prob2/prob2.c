#include<cstdio>
int main(){

  long long int g = 0, f = 1, f2 = 1, limit = 4000000, sum = 0;

  while (f < limit){
    g = f2;
    f2 = f + f2;
    f = g;
    printf("%lld,", f2);
   
    if((f2 % 2 == 0) && (f2 < limit)){
      sum += f2;
      printf("%lld,", f2);
    }else if(f2 >= limit){
      printf("Sum of even fibonnaci values below %lld is %lld", limit, sum);
    }
  }
}
