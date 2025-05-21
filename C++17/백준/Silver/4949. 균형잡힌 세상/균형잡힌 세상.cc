#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //. 온점만 찍힐때까지 계속 돎. .이 끝나는거. 
    while(true){
        //한줄에 입력받기
        string str;
        getline(cin, str);
        if(str == ".") break;
        
        stack<char> s; //[] {} 검사할 스택
        bool isValid = true; // 양쪽 맞는지
        //str하나씩빼기.
        for(auto c : str){
            if( c == '(' || c =='[') s.push(c);
            else if(c == ')'){
                if(s.empty() || s.top() != '('){
                    isValid = false;
                    break;
                }
                s.pop();
            }
            else if(c== ']'){
                if(s.empty() || s.top() != '['){
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty()) isValid = false;
        if(isValid) cout<<"yes\n";
        else cout<<"no\n";
    }


    return 0;
}