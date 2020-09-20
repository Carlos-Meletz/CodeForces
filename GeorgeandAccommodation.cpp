#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,a,b,cont=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b-a>=2){
            cont++;
        }
    }
    cout<<cont;
}
