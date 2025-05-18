#include <iostream>

using namespace std;

int main(){
    int num;
    int max=0;
    int idx;
    
    for(int i=0; i<9; i++){
        cin>>num;
        if(num>=max){
            max = num;
            idx = i;
        }
    }
    cout<< max <<"\n"<<idx+1;
    
    return 0;
}