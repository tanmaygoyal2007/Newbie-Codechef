#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(2*x>5*y){
            cout<<"CHOCOLATE"<<endl;
        }
        else if (5*y>2*x){
            cout<<"CANDY"<<endl;
        }
        else{
            cout<<"EITHER"<<endl;
        }
    }
}