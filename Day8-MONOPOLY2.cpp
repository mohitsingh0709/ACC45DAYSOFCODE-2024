#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q,r,s;
	    cin>>p>>q>>r>>s;
	    if(p>(q+r+s))
	    cout<<"yes"<<endl;
	    else if(q>(p+r+s))
	    cout<<"yes"<<endl;
	    else if(r>(p+q+s))
	    cout<<"yes"<<endl;
	    else if(s>(p+q+r))
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	    
	}

}
