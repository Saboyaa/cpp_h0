#include <iostream>

using namespace std;

int main(){
    int a,b,d=0,e=0,final;
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
    for(int i=0;i<b;i++){
        cout<<e<< " ";
        if(i>a){
            if(abs(e-d/2)>abs(e + c[i] - c[i-4]-d/2)){
            e = e +c[i] - c[i-4];
            }
            else{
                cout<< abs(2*(e + c[i] - c[i-4])-d);
                return 0;
            };
        }
        else{
            e += c[i];
        };
    }
return 0;
}