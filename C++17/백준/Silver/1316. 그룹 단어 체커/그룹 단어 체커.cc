#include <iostream>
#include <string>

using namespace std;

int main() {
    int k;
    string str;
    int cnt =0; 
    cin>>k;
    for(int y=0; y<k; y++){
        cin>>str;
        
        int flag =0; 
        int n = str.length();
        for(int i=1; i<n; i++){
            if(str[i]!= str[i-1]){
                for(int t=0; t<i-1; t++){
                    if(str[t]==str[i]){
                        flag=1;
                        break;
                    }
                }
                if(flag) break;
            }
        }
        if(flag==0) cnt++;
    }
    cout<<cnt;
    return 0;
}