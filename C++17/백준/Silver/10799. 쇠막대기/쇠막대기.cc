#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str; 
    cin>>str;
    stack<char> s;
    int cnt = 0;
    int sz = str.length();
    for(int i=0; i<sz; i++){
        if(str[i]=='(') s.push(str[i]);
        else {
            if(str[i-1]=='('){ //레이저일때
                s.pop();
                cnt += s.size();
            }
            else {
                s.pop();
                cnt++;
            }
        }
    }
    cout<<cnt;

    return 0;
}