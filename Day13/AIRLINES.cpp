#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x*10>=y){
            cout<<y*z<<endl;
        }
        else{
            cout<<x*z*10<<endl;
        }
    }
}