#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    string code;
	    for(int i=0;i<n;i++){
	        cin>>code;
	        if(code=="START38"){
	            count=count+1;
	            
	        }
	    }
	    cout<<count<<" "<<n-count<<endl;
	    
	}

}
