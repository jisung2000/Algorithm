#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> v(7,0);
    for(int i=0; i<3; i++){
        cin>>n;
        v[n]++;
    }
    
    // if 3 -> 10000 + i*1000
    // if 2 -> 1000+ i*100
    // else for 7부터 1까지~ 1이면 *100 break;
    
    for(int i=1; i<7; i++){
        if(v[i]==3){
            cout<< 10000 + i*1000;
            return 0;
        }
        else if(v[i]==2){
            cout<< 1000 + i* 100;
            return 0;
        }
    }
    for(int k = 6; k>=1; k--){
        if(v[k]==1){
            cout<< k*100;
            break;
        }
    }
    return 0;
}