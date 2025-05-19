#include <iostream>
using namespace std;
int main(){
    int year;
    cin>> year;
    int flag=0;
    if((year%4==0 && year%100!=0)|| year%400==0){
        flag=1;
    }
    cout<<flag;
    return 0;
}