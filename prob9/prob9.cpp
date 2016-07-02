#include<iostream>
#include<cmath>
using namespace std;

bool isRoundNumber(float a){
		if (ceilf(a) == a){
				return true;
		}
		return false;
}

bool isPythagoreanTriplet(int a, int b, int c){
		if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
				return true;
		}
return false;
}

int main(){

		int n = 1000;
		int limit = n;

		for(int a = 1; a <= limit; a++){
				for(int b = a + 1; b <= limit - a; b++){
						for(int c = b + 1; c <= limit -b -a; c++){
								//cout << a + b + c << endl;
								if((a + b + c == n) && isPythagoreanTriplet(a, b, c)){
										cout << a << ": " <<  b << ": " << c << endl;
										cout << a * b * c << endl;
								}
						}
				}
		}

		return 0;
}
