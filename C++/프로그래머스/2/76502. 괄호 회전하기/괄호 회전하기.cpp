#include <string>
#include <deque>
#include <stack>

using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isValid(deque<char> dq) {
    stack<char> st;
    for (char c : dq) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty() || !isMatching(st.top(), c)) return false;
            st.pop();
        }
    }
    return st.empty();
}

int solution(string s) {
    int answer = 0;
    deque<char> dq(s.begin(), s.end());

    for (int i = 0; i < s.size(); ++i) {
        if (isValid(dq)) answer++;

        dq.push_back(dq.front());
        dq.pop_front();
    }

    return answer;
}