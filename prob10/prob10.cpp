#include<iostream>
#include<vector>

using namespace std;

//returns all primes below a: sieve method
vector<long long> primesBelow(long long a){
	vector<long long> result;
	for(long long i = 0; i < a; i++){
		result.push_back(i);
	}
	result[1] = 0;
	long long index = 2;
	while (index*index < a){
		long long ratio = a / index;
		for(long long i = 2; i <= ratio; i++){
			result[(i * index)] = 0;
		}
		for(long long i = index + 1; i < a; i++){
			if(result[i] != 0){
				index = i;
				break;
			}
		}
	}
	return result;
}
	
long long sumArray(vector<long long> a){
	long long result = 0;
	for(long long i = 0; i < a.size(); i++){
		result += a[i];
	}
	return result;
}

int main(){
	long long max = 2000000;
	cout << sumArray(primesBelow(max)) << endl;
	return 0;
}
