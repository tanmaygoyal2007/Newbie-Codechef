#include<bits/stdc++.h>
using namespace std;

int  main(){
     int t;
    cin>>t;
    while(t--){
        int r1,r2,r3;
        cin>>r1>>r2>>r3;
        if(r1>r2+r3){
            cout<<"YES"<<endl;
        }
        else if(r2>r1+r3){
            cout<<"YES"<<endl;
        }
        else if(r3>r1+r2){
            cout<<"YES"<<endl;
        } 
        else if(r1==r2 && r2==r3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}