#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int num;
    for(int i=0; i<n; i++){
        cin>>num;
        if(num<k){
            cout<<num<<" ";
        }
    }
    
    return 0;
}