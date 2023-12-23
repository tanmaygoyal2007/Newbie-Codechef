#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        double x,y;
        cin>>x>>y;
        if(y/x*100>=50){
            cout<<"YES"<<endl;
        }
        else if(x==y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}