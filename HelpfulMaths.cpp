#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x[s.length()];
    for(int i=0; i<s.length();i+=2){
       for(int j=0; j < s.length()-1;j+=2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
       }
    }
    cout<<s;
}
