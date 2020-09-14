#include<iostream>
#include<string>
using namespace std;

int main(){
    int x,l;
    cin>>x;
    string word[x];
    for(int i; i<=x-1;i++){
            cin>>word[i];
        }
    for(int a; a<=x-1;a++){
        l=word[a].length();
        if(word[a].length() > 10){
            cout<<endl<<word[a][0]<<l-2<<word[a][l-1];
        }else{
            cout<<endl<<word[a];
        }
    }
}
