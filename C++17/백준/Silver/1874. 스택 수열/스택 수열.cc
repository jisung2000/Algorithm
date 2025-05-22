#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    stack<int> s;
    string ans;
    cin>>n;
    int cnt =1; // 증가시킬 수 n까지만 증가할거임.
    while(n--){
        int num;
        cin >> num;
        while(cnt <= num){ // 넣은 수보다 작거나 같을때까지만 스택에 넣음. 
            s.push(cnt++);
            ans += "+\n";
        }
        if(s.top() != num){ // 다 넣었는데도 탑이 다르다면.
            cout<<"NO\n"; 
            return 0;
        }
        s.pop(); // 같을때까지 넣었으니까 같을테니 팝.
        ans += "-\n";
    }
    cout<<ans;

    return 0;
}