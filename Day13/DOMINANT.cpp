#include<bits/stdc++.h>
using namespace std;

int  main(){
     int t;
    cin>>t;
    while(t--){
        int na,nb,nc;
        cin>>na>>nb>>nc;
        if(na>nb+nc){
            cout<<"YES"<<endl;
        }
        else if(nb>na+nc){
            cout<<"YES"<<endl;
        }
        else if(nc>na+nb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}