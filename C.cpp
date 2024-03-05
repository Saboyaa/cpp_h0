#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string s[a];
    for(int i=0;i<a;i++){
        cin>>s[i];
    };
    for(int i = 0;i<b;i++){
        for(int j = i;j<b;j++){
    for(int k = 0;k<max(s[i].length(),s[j].length());k++){
            if(s[i][k]>s[j][k]){
                string flutuante;
                flutuante = s[i];
                s[i] = s[j];
                s[j] = flutuante;
                break;
            }
            else if(k+1>min(s[i].length(),s[j].length())){
                if(i>j){
                string flutuante;
                flutuante = s[i];
                s[i] = s[j];
                s[j] = flutuante;
                break;
                }
            }
            else if(s[i][k]<s[j][k]){break;}
        }
    };
    }
    for(int i=0;i<b;i++){
        cout<<s[i]<<"\n";
    };
    return 0;
}   