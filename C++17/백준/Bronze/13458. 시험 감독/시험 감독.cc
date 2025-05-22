#include <iostream>
#include <string>
#include <stack>

using namespace std;
int arr[1000000];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; //시험장 수
    cin>>N;
    long long sum = N; // default로 총감독관 N명, + 감독관수 나중에 cout

    for(int i=0; i<N; i++){
        cin>> arr[i]; //각 시험장 인원
    }
    int B, C;
    cin >> B >> C;
    
    for(int i=0; i<N; i++){
        int tmp = arr[i] - B; // 시험장 인원에서 B감독 수용인원 뺌. 
        if(tmp>0){
            if(tmp%C != 0){
            tmp /= C;
            tmp+=1;
            sum += tmp;
        }
        else{
            tmp/=C;
            sum+= tmp;
        }
        }
        
    }
    cout<<sum;

    return 0;
}