#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int cnt =0; // count 변수
    while(t--){
        string str;
        cin>>str;
        stack<char> s;
        for(auto c : str){
            if(!s.empty() && s.top() == c) s.pop();
            else s.push(c);
        }
        if(s.empty()) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}