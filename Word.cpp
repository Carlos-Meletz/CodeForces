#include<bits/stdc++.h>
#include<iostream>
#include<cctype>

using namespace std;
int main(){
    int lo=0,up=0;
    string s;
    cin>>s;
    for(int i = 0; i<s.length();i++){
        for(int j=0; j < s.length();j++){
            if(s[j] >= 'a' && s[j] <= 'z'){
                lo++;
            }else if (s[j] >= 'A' && s[j] <= 'Z'){
                up++;
            }
        }
        if(up>lo){
            s[i]=toupper(s[i]);
        }else{
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
}
