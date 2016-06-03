#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long factorial(long long a){
	long long b = 1;
	for(long long i = 1; i < a; i++){
		b *= i+1;
	}
}

//return the array of digits that a is made of
void digits(long long a, &vector<long long> digitsArray){
	if(a >= 10){
		digits(a / 10, digitsArray);
	}
	int digit = a % 10;

	digitsArray.push_back(digit);
}

//return the sum of an array
long long sum(vector<long long> a){
	long long b = 0;
	for(long long i = 0; i < a.size(); i++){
		b += a[i];
	}
	return b;
}

//return array of numbers of a non-repeating chain of digit factorial sums with starting number in argument
vector <long long> digitFactorialSumChain(long long a){
	vector<long long> digitsArray = [];
	vector<long long> factorialArray = [];
	vector<long long> chainArray = [];
	
	chainArray.push_back(a);
	digits(a, digitsArray);
	
	for(long long i = 0; i < digitsArray.size(); i++){
		factorialArray.push_back(factorial(digitsArray[i]));
	}
	
	long long newValue = sum(factorialArray);
	
	if (find(digitFactorialSumChain.begin(), digitFactorialSumChain.end(), newValue) != digitFactorialSumChain.end()){
		digitFactorialSumChain(newValue);
	}
}

//Alternative of below
long long countFactorialChains(long long l, long long a, long long b){
	for(long long i = a; i < b; i++){
		vector<long long> tmp = digitFactorialSumChain(i);
	}
}

//Count non-repeating chains of exactly length l, within an interval [a:b]
long long countFactorialChains(long long l, long long a, long long b){
	long long count = 0;
	
	for(long long i = a; i <= b; i++){
		if(digitFactorialSumChain(i).size() == l){
			count++;
		}
	}
	
	return count;
}

int main(){
	vector<vector<long long>> lengths;
	long long length = 60;
	long long a = 1;
	long long b = 999999;

	cout << "Result for length " << length << " is: " << countFactorialChains(length, a, b) << endl;

	return 0;
}
