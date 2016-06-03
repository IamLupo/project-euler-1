#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Factorials for digits 0-9
static vector<long long> digitFactorials = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

//return the array of digits that a is made of
void digits(long long a, vector<long long> &digitsArray){
	if(a >= 10){
		digits(a / 10, digitsArray);
	}
	int digit = a % 10;

	digitsArray.push_back(digit);
}

//for starting number a in argument, return the array of numbers of a non-repeating chain of digit factorial sums with 
void digitFactorialSumChainCount(long long a, vector<vector<long long>> &l, long long limit){
	//digits in a
	vector<long long> digitsArray;
	
	//factorial of each digit in a
	vector<long long> factorialArray;
	
	//array of summed factorials to be returned
	vector<long long> chainArray;
	
	//if a in chainArray
	if (find(chainArray.begin(), chainArray.end(), a) != chainArray.end()){
		if (a == chainArray[0]){
			for(long long i = 0; i < chainArray.size(); i++){
				l[chainArray.size()].push_back(chainArray[i]);
			}
		}else{
			//get position index p of a in chainArray
			long long p = 0;
			for (long long i = p ; i < chainArray.size(); i++){
				l[(chainArray.size() - p)].push_back(chainArray[i]);
			}
			for (long long i = 0; i < p; i++){
				l[(chainArray.size() - i)].push_back(chainArray[i]);
			}	
		}
	}else{
		//if a in l
		for (int i = 0; i < l.size(); i++){
			auto it = find(l[i].begin(), l[i].end(), a);
			if (it != l[i].end()){
				
				//all the numbers that do not yet exist in l can be added to l at the same index as value a in l
				//cout << "Number " << a << " found at l[" << i << "][" << distance(l[i].begin(), it) << "].";
				for(long long j = 0; j < chainArray.size(); j++){
					
					for (int j = 0; j < l.size(); j++){
						auto it = find(l[j].begin(), l[j].end(), i);
						if (it != l[j].end()){
							
						}else{
							//if(chainArray[j] not in l){
							l[i].push_back(chainArray[j]);
						}
					}
				}
				
			}else{
				//add a to the array of summed factorials
				chainArray.push_back(a);
				
				//get the digits of a
				digits(a, digitsArray);
				
				//get the next factorial sum
				long long tmp = 0;
				for(long long i = 0; i < digitsArray.size(); i++){
					tmp += digitFactorials[digitsArray[i]];
				}
				digitFactorialSumChainCount(tmp, l, limit);
			}
		}
	}
}

int main(){
	
	long long limit = 60;
	long long max = 1000000;
	vector<vector<long long>> l;
	
	for(long long i = 1; i < max; i++){
		
		for (int j = 0; j < l.size(); j++){
			auto it = find(l[j].begin(), l[j].end(), i);
			if (it != l[j].end()){
				
			}else{
				//if i not in l
				digitFactorialSumChainCount(i, l, limit);
			}
		}
	}
	
	cout << l[limit].size() << endl;
	
	return 0;
}
