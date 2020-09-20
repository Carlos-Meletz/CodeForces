#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,step=0;
    cin>>n;
    while(n!=0){
        if(n<=5){
            step++;
            n = n - n;
        }else{
            step = step + (n / 5);
            n = n % 5;
        }
    }
    cout<<step;
}
