#include<iostream>
#include<vector>

long long factorial(long long a){
	long long b = 1;
	for(long long i = 1; i < a; i++){
		b *= i+1;
	}
}

//return the array of digits describing a
vector<long long> digits(long long a){

}

//return the sum of an array
long long sum(vector<long long> a){
	long long b = 0;

	return b;
}

//return array of numbers of a non-repeating chain of digit factorial sums with starting number in argument
vector <long long> digitFactorialSumChain(long long a){

}

//Count non-repeating chains of exactly length l, within an interval [a:b]
long long countFactorialChains(long long l, long long a, long long b){
	long long count = 0;
	
	for(long long i = a; i <= b; i++){
		if(digitFactorialSumChain(i).length == l){
			count++;
		}
	}
	
	return count;
}

int main(){
	long long length = 60;
	long long a = 1;
	long long b = 999999;

	cout << "Result for length " << length << " is: " <<countFactorialChains(length, a, b) << endl;

	return 0;
}
