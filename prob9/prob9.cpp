#include<iostream>
#include<cmath>
using namespace std;

bool isPythagoreanTriplet(int a, int b, int c){
	if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
			return true;
	}
	return false;
}

int main(){

	int n = 1000;

	for(int a = 1; a <= n; a++){
		for(int b = a + 1; b <= n - a; b++){
			for(int c = b + 1; c <= n - b - a; c++){
				if((a + b + c == n) && isPythagoreanTriplet(a, b, c)){
					cout << a << ": " <<  b << ": " << c << endl;
					cout << a * b * c << endl;
				}
			}
		}
	}

	return 0;
}
