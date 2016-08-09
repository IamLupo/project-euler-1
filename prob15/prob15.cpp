#include <iostream>
#include <vector>

using namespace std;

int main(){
	int max = 20;
	
	//filling variable array of size max with 1's
	vector<long long int> array(max, 1);
	
	//computing solution and storing in array
	for(int i = 0; i < max - 1; i++){
		long long int a = 0;
		long long int b = 1;
		for(int j = 0; j < max - 1; j++){
			if(i == 0){
				a = 1;
			}else{
				a = array[j + 1];
			}
			b += a;
			array[j + 1] = b;
		}
	}
	
	cout << 2 * accumulate(array.begin(), array.end(), 0) << endl;
	
	return 0;
}
