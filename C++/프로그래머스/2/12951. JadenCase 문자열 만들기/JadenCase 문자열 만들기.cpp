#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.size();
    s[0] = toupper(s[0]);
    for(int i=1; i<len; i++){
        if(s[i-1]==' '){
            s[i] = toupper(s[i]);
        }
        else s[i] = tolower(s[i]);
    }
    answer = s;
    return answer;
}