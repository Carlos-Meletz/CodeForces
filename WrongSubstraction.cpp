#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,k,val=0;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        val = n % 10;
        if(val==0){
            n = n / 10;
        }else{
            n--;
        }
    }
    cout<<n;
}
