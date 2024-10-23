#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    int s=h-y;
	    int r=(s+x-1)/x;
	    cout<<r+1<<endl;
	    
	}

}