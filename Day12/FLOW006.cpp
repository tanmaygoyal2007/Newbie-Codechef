#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,a;
    cin>>n;
    while(n>0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout<<sum<<endl;
    }
}