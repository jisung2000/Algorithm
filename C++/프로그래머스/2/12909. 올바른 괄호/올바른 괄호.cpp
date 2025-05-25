#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<int> st;
    for(auto c : s){
        if(st.empty()) st.push(c);
        else if(c == '(') st.push(c);
        else if(c == ')'){
            if(st.top() == '(') st.pop();
            else st.push(c);
        }
    }
    if(!st.empty()) answer = false;
    
    
    return answer;
}