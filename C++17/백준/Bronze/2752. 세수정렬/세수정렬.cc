#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    vector<int> v={};
    int n;
    for(int i=0; i<3; i++){
        cin>> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    
    for(int i=0; i<3; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}