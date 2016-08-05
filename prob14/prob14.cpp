#include <iostream>
#include <vector>

using namespace std;

int main(){

long long int max = 1000000;
long long int biggest = 0;

vector<long long int> lengths;

for(long long int n = 1; n < max; n++){ 
	long long int chainLength = 1;
	long long int x = n;
	while(x != 1){
		if(lengths.size() == x){
			chainLength += lengths[x - 1];
			break;
		}
		else if(x % 2 == 0){
			x = x / 2;
		}else{
			x = (3 * x) + 1;
		}
		chainLength++;
	}
	lengths.push_back(chainLength);
	if(chainLength > biggest){
		biggest = chainLength;
		cout << n << ": " << chainLength << endl;
	}
}

cout << biggest << endl;

return 0;

}
