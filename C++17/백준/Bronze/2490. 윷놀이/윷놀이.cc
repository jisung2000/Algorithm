#include <iostream>
using namespace std;
// 도A 0111 개B 0011 걸C 0001 윷D 0000 모E 1111

int main(){
    int a,b,c,d;
    for(int t=0; t<3; t++){
        int num =0; 
        cin>>a>>b>>c>>d;
        num += a+b+c+d;
        if(num==3) cout<<"A\n";
        if(num==2) cout<< "B\n";
        if(num==1) cout<<"C\n";
        if(num==0) cout<<"D\n";
        if(num==4) cout<<"E\n";
    }
    
    return 0;
}

