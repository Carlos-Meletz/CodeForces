#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int a,b,cont=0;
    cin>>a>>b;
    while(a<=b){
        a=a*3;b=b*2;cont++;
    }
    cout<<cont;
}
