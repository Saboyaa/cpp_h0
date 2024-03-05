#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i = 0;i<a+1;i++){
        if(i*4 + (a-i)*2 == b){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
} 