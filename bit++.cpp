#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int x=0,n;
    cin>>n;
    string dato[n];
    for(int i; i<n ; i++){
        cin>>dato[i];
        if(dato[i][1]=='+'){x++;}
        if(dato[i][1]=='-'){x--;}
    }
    cout<<x;
}
