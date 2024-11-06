#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((b+c*2)>=a){
            cout<<"Qualify"<<endl;
        }
        else
        cout<<"NotQualify"<<endl;
    }
}
