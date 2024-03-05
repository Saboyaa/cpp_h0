#include <iostream>

using namespace std;

int main(){
    int a,b,d=0,final= 0;
    cin>>a>>b;
    int c[a];
    for(int i=0;i<a;i++){
        cin>>c[i];
        d += c[i];
    };//pegando os numeros
    for(int i = 0;i<a;i++){
        for(int j = i;j<a;j++){
            if(c[i]>c[j]){
                int flutuante;
                flutuante = c[i];
                c[i] = c[j];
                c[j] = flutuante;
            }
        }
    };//sorteando
    for(int i=0;i<b;i++){
        final +=c[i];
    };//questao em si
    cout<<final;
    return 0;
}