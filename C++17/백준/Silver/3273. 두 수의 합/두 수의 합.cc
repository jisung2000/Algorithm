#include <iostream>
#include <vector>

using namespace std;
int arr[100005];
bool exist[2000005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    int cnt=0;
    cin>>target;
    
    for(int i=0; i<n; i++){
        if(target-arr[i]>0 && exist[target-arr[i]]) cnt++;
        exist[arr[i]] = true;
    }
    cout<<cnt;
    
    
    
    return 0;
}