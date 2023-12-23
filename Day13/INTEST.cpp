#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a%k==0){
            count=count+1;
        }
    }
            cout<<count<<endl;
}