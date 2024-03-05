#include <iostream>

using namespace std;

int main(){
    int a,AC=0,WA=0,TLE=0,RE=0;
    cin>>a;
    string s[a];
    for(int i=0;i<a;i++){
        cin>>s[i];
    };
    for(int i = 0;i<a;i++){
        if(s[i]=="AC"){
            AC++;
        }
        else if(s[i]=="WA"){
            WA++;
        }
        else if(s[i]=="TLE"){
            TLE++;
        }
        else if(s[i]=="RE"){
            RE++;
        }
    }
    cout<<"AC x "<<AC<<"\n";
    cout<<"WA x "<<WA<<"\n";
    cout<<"TLE x "<<TLE<<"\n";
    cout<<"RE x "<<RE<<"\n";
    return 0;
} 