#include <iostream>

using namespace std;

int main(){
    int runs;
    cin>>runs;
    for(int k = 0;k<runs;k++){
    int m,s,d=0,minimo,resolvido = 0;
    cin>>m>>s;
    int set[m];
    for(int i=0;i<m;i++){
        cin>>set[i];
        d += set[i];
    };
    for(int i = 0;i<m;i++){
        for(int j = i;j<m;j++){
            if(set[i]>set[j]){
                int flutuante;
                flutuante = set[i];
                set[i] = set[j];
                set[j] = flutuante;
            }
        }
    };//sorteando
    minimo = (set[m-1]+set[0])*((set[m-1]-set[0]+1)/2);
    for(int i = 0;i<=set[0];i++){
        for(int j =set[m-1];j<51;j++){
            if(((j+i)*(j-i+1))/2- d == s){
                cout<<"Yes"<<"\n";
                resolvido =1;
                break;
            }
        }
        if (resolvido){
            break;
        }
    }
    if(!resolvido){
    cout<<"No"<<"\n";
    }
    }
    return 0;
} 