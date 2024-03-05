#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    int d[a];
    d[0] = b-c;
    for(int i = 1;i<a;i++){
        d[i] = 1;
    }
    c = c - a + 1;
    for(int i = 1;i<a;i++){
        if(c>d[0]-1){
            d[i] +=d[0]-1;
            c = c - d[0]+1;
        }
        else{
            d[i] = 1 +c;
            c = 0;
        }
    }
    for(int i = 0;i<a;i++){
        cout<<d[i]<<" ";
    }
    cout<<"\n";
    }
    return 0;
} 