#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n;
        a=(n*50*20)/100;
        b=(n*50*20)/100;
        c=(n*50*30)/100;
        cout<<(n*50)-(a+b+c)<<endl;
    }
}