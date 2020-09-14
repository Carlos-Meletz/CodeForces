#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int ar[6][6],c,f;

    for(int a=1; a <= 5;a++){
       for(int b=1; b <= 5;b++){
            cin>>ar[a][b];
            if(ar[a][b]==1){
                c=a;f=b;
            }
       }
    }
    cout<<abs(c-3)+abs(f-3);
}
