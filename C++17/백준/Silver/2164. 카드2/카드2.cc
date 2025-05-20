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

    for(int i=1; i<=t; i++){
        q.push(i);
    }
    int num;
    while(!q.empty()){
        if(q.size()==1){
            cout<<q.front();
            break;
        }
        q.pop();
        int tmp = q.front();
        q.pop();
        q.push(tmp);

    }

    return 0;
}