#include <iostream>

using namespace std;

bool isPrime(int n){

        for(int i = 2; i < n; i ++){
                if(n % i ==0){return false;}
        }
        return true;
}

int main(){

        //get first n primes
        int n = 10001;
        int i = 2;
        int k = 0;
        do{
                if(isPrime(i)){
                        k++;
                        cout << k << ": " << i << endl;
                        i++;
                }else{i++;}
        }while(k != n);


        return 0;
}
