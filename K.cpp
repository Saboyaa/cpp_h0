#include <iostream>

using namespace std;

int main(){
    long long a,b,c,d,g=0;
    cin>>a>>b>>c>>d;
    for(int i = 0 ; i<a;i++){
        long long e,f;
        cin>>e>>f;
        if(d*d>=(e-b)*(e-b)+(f-c)*(f-c)){
            g++;
        }
    }
    cout<<g;
    return 0;
} 