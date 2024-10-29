#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,count=0;
    cin>>n;
    if(n==1||n==0)
    cout<<"no"<<endl;
    else{
        for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    }
    }
    return 0;
}