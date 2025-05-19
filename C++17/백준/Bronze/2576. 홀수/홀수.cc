#include <iostream>
using namespace std;

int main() {
    int num;
    int sum =0; 
    int min =1000;
    for(int i=0; i<7; i++){
        cin>> num;
        if(num%2==1){
            sum+=num;
            if(num<min){
                min = num;
            }
        }
    }
    if(sum==0) cout<<-1;
    else cout << sum << '\n' << min;
    
    return 0;
}

// 홀수들의 합 sum
// 홀수 min

// 입력 0~7
//If %2 == 이면 sum+=; 이게 num <min 이면 Min =num

