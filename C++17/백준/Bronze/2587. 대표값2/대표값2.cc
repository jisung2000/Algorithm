// array로 받고 sort.
// 3번째꺼 중앙값. 
// 다 합쳐서 5로 나눈거 평균.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(5,0);
    int sum=0; 
    for(int i=0; i<5; i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    cout << sum/5 << '\n' << v[2];
    
    return 0;
}