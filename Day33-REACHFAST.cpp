#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,k;
	    cin>>a>>b>>k;
	    
	    if(a==b)
	    cout<<0<<endl;
	    else
	    {
	        if(a>b)
	        a=a-b;
	        else
	        a=b-a;
	        
	        if(a%k==0)
	        cout<<a/k<<endl;
	        else
	        cout<<a/k +1<<endl;
	        

	    }
	}

}
