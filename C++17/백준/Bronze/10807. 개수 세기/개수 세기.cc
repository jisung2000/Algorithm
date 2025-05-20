#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int num;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>num;
        arr.push_back(num);
    }
    int target;
    cin>>target;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==target) cnt++;
    }
    cout<<cnt;
    return 0;
}