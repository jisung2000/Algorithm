#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    bool val = true;
    while(t--){
        string str;
        cin>>str;
        stack<char> s;
        for(auto c : str){
            if(s.empty()) s.push(c); // 비어있으면 push
            else if(c == ')'){
                if(s.top() == '(') s.pop();
                else s.push(c);
            }
            else s.push(c);
        }
        if(s.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}