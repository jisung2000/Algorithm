#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    stack<int> st;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    
    for(auto c : arr){
        if(st.empty()){
            st.push(c);
        }
        else if(st.top() != c){
            st.push(c);
        }
        
    }
    vector<int> answer;
    while (!st.empty()) {
        answer.push_back(st.top());
        st.pop();
    }

    reverse(answer.begin(), answer.end());
    
    return answer;
}