#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
	for(int i = 0; i<a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(a[i]>b[i]){cout<<"1";break;}
        if(a[i]<b[i]){cout<<"-1";break;}

    }
    if(a==b)cout<<"0";
}
