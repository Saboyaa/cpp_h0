#include <iostream>

using namespace std;

int main(){
    int a,b,d=0,final;
    cin>>a>>b;
    int c[b];
    for(int i=0;i<b;i++){
        cin>>c[i];
        d += c[i];
    };
    for(int i = 0;i<b;i++){
        for(int j = i;j<b;j++){
            if(c[i]>c[j]){
                int flutuante;
                flutuante = c[i];
                c[i] = c[j];
                c[j] = flutuante;
            }
        }
    };
    final = c[a];
    for(int i=a-1;i<b;i++){
        if(final>c[i] - c[i-a+1]){
        final = c[i] - c[i-a+1];
        }

    }
    cout<<final;
return 0;
}