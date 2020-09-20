#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,val=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        sum = sum - a[i] + b[i];
        if(sum>val)val=sum;
    }
    cout<<val;
}
