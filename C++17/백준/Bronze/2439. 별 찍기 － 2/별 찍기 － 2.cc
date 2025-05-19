#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int y=0; y<n; y++){
        for(int x=0; x<n-y-1; x++){
            cout<<" ";
        }
        for(int t=0; t<=y; t++){
            cout<<"*";
        }
        cout<<'\n';
    }
    
    
    return 0;
}