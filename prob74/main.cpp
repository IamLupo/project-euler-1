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

void chain(long long a, vector<long long> memo,int &count){
    vector<long long> da;
    long long result = 0;
    digits(a, da);
    //cout << a << endl;
    for(long long i = 0; i < da.size(); i++){
        result += digitFactorials[da[i]];
    }
    if(!(memo.empty()) && find(memo.begin(), memo.end(), result) != memo.end()){
        if(memo.size() == 59){
            count++;
            for(int j = 0; j < memo.size(); j++){
                cout << memo[j] << ", ";
            }
            cout << endl;
        }
    }else if(memo.size() > 60){
        //
    }else{
        memo.push_back(result);
        chain(result, memo, count);
    }
}

int main(){
	
	long long limit = 60;
	long long max = 1000000; 
        //vector<long long> memo;
        //long long hi = chain(max, memo);
        int count = 0;
        for(long long i = 1; i < max; i++){
            vector<long long> memo;
            chain(i, memo, count);
	}
	return 0;
}
