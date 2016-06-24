#include <iostream>

using namespace std;

int main(){
        bool found = false;
        int i = 1;

        do{
                int k = i * 60;
                for(int j = 1; j <= 20; j++){
                        if(k % j == 0){
                                if (j == 20){
                                        cout << k << endl;
                                        found = true;
                                }
                        }else{break;}
                }
                i++;
        }while(!found);

return 0;

}
