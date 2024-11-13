#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int d=min({x,y,z});
        int sum=x+y+z;
        cout<<sum-d<<endl;
        
    }
}
