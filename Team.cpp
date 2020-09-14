#include<iostream>

using namespace std;

int main(){
    int x,cont;
    cin>>x;
    int dato[x][3];
        for(int i=0;i<=x-1;i++){
        cin>>dato[i][0]>>dato[i][1]>>dato[i][2];
        if(dato[i][0] + dato[i][1] + dato[i][2] >= 2){
            cont++;
        }
    }
    cout<<cont;
}
