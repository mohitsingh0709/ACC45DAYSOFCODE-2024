#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y;
        a=y/x;
        b=a*x;
        if(b<y)
        cout<<a<<endl;
        else
        cout<<a-1<<endl;
    }
}
