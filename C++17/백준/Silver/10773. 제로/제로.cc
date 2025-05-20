#include <iostream>
#include <stack>


using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    stack<int> s;
    int sum=0;
    for(int i=0; i<t; i++){
        int num;
        cin>>num;
        if(num == 0){
            s.pop();
        }
        else s.push(num);
    }

    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout<<sum;
    return 0;
}