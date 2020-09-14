#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,k,cont=0;
    cin>>n>>k;
    int ar[n];
    for(int x;x<n;x++){
        cin>>ar[x];}
    for(int i;i<n;i++){
        if(ar[i]>0 && ar[i]>=ar[k-1]){
            cont++;
        }
    }
    cout<<cont;
}
