#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,i=0,j=0,index=0;
	    cin>>n;
	    int arr[n];
	    for(i;i<n;i++){
	        cin>>arr[i];
	    }
	    for(j;j<n;j++){
	        if(arr[j]!=0){
	            index=j;
	        }
	    }
	    cout<<index<<endl;
	}
	return 0;

}
