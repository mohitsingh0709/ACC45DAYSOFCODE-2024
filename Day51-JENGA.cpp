#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==x){
            cout<<"YES"<<endl;
        }
        else if(n>x){
            cout<<"NO"<<endl;
        }
        else if(n<x && x%n!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	// your code goes here
	return 0;
}