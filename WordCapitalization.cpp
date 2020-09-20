#include<bits/stdc++.h>
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i; i < s.length();i++){
        if(i==0)s[i]=toupper(s[i]);
    }
    cout<<s;
}
