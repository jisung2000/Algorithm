#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    string str;
    stack<int> s;
    while(n--){
        cin>>str;
        if(str == "push"){
            int num;
            cin>>num;
            s.push(num);
        }
        else if(str == "pop"){
            if(s.empty()) cout<<-1<<"\n";
            else{
                cout << s.top()<<"\n"; 
                s.pop();
            }
        }
        else if(str =="size"){
            cout<<s.size()<<"\n";
        }
        else if(str == "empty"){
            if(s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else{
            if(s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }
    
    return 0;
}