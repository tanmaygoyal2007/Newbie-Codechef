#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(w+(y*z)>x){
            cout<<"OVERFLOW"<<endl;
        }
        else if(w+(y*z)==x){
            cout<<"FILLED"<<endl;
        }
        else{
            cout<<"UNFILLED"<<endl;
        }
    }
}