#include<bits/stdc++.h>
using namespace  std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x<y){
        cout<<"OLD"<<endl;
    }
    else if(y<x){
        cout<<"NEW"<<endl;
    }
    else{
        cout<<"SAME"<<endl;
    }
}