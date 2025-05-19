// 26
#include <iostream>
#include <string>
using namespace std;

int main(){
    int dat[26] ={0};
    string str;
    cin>>str;
    int n = str.length();
    for(int i=0; i<n; i++){
        int k = str[i]-'a';
        dat[k]++;
    }
    for(int i=0; i<26; i++){
        cout<<dat[i]<<" ";
    }
    
    
    return 0;
}