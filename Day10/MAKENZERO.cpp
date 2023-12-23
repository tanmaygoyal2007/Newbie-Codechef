#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       if (n%3==0 || n%4==0 || n>5){
        cout<<"YES"<<endl;
       }
       else if(n==5 || n==1 || n==2){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
}