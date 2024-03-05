#include <iostream>

using namespace std;

int main(){
    int a=0;
    string s;
    cin>>s;
    for(int i = 0;i<s.length();i++){
        a += int(s[i])-int('0');
    }
    if(a%9 == 0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
} 