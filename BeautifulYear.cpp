#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int y;
    cin>>y;
    string aux;
    while(true){
        y++;aux = to_string(y);
        sort(aux.begin(),aux.end());
        if(aux[0]!=aux[1]&&aux[1]!=aux[2]&&aux[2]!=aux[3])break;
    }
    cout<<y;
}
