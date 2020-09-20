#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int k,n,w,cont;
    cin>>k>>n>>w;
    for(int i=0;i<=w;i++){
        cont = cont + k * i;
    }
    cont = cont - n;
    if(cont>=0){
        cout<<cont;
    }else{
    cout<<"0";
    }
}
