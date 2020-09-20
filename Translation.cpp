#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s,t,aux;
    cin>>s>>t;
    for(int i=s.length()-1;i>=0;i--){
        aux+=s[i];
    }
    if(t==aux){
        cout<<"YES";
    }else{
    cout<<"NO";
    }
}
