#include <iostream>
#include <math.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    long long final=0;
    for(int i =0;i<s.length();i++){
        final += (int(s[i])-int('A')+1)*(pow(26,s.length()-i-1));
    }
    cout<<final;
    return 0;
}