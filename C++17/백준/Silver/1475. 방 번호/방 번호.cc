#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    
    cin>>num;
    string str = to_string(num);
    
    int dat[9]={0};
    int n = str.length();
    
    for(int i=0; i<n; i++){
        if(str[i]=='9') dat[6]++;
        else dat[str[i]-'0']++;
    }
    // 배열 돌면서 max 값. 찾고. 1이면 1개 2이면 2개.. 
    // 6의 경우에는 /2 갯수. if %2 !=0 이면, +1개 추가
    if(dat[6]%2 !=0 ){
        int k = dat[6];
        dat[6] = k/2 + 1;
    }
    else dat[6] = dat[6]/2;

    int max=0;
    for(int i=0; i<9; i++){
        if(dat[i]>max) max = dat[i];
    }
    cout<<max;
    
    
    return 0;
}