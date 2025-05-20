#include <iostream>
#include <queue>
#include <string>


using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    queue<int> q;

    for(int i=0; i<t; i++){
        string command;
        cin>>command;
        if(command == "push"){
            int n;
            cin>>n;
            q.push(n);
        }
        else if(command =="pop"){
            if(q.empty()) cout << -1 << '\n';
            else{
                cout<<q.front()<<'\n';
                q.pop();
            }

        }
        else if(command =="size"){
            cout<<q.size()<<'\n';
        }
        else if(command =="empty"){
            if(q.empty()) cout<<1<<'\n';
            else cout << 0 << '\n';
        }
        else if(command =="front"){
            if(q.empty()) cout<< -1 << '\n';
            else cout << q.front() << '\n';
        }
        else{
            if(q.empty()) cout << -1<<'\n';
            else cout << q.back() << '\n';
        }
        
    }
    return 0;
}