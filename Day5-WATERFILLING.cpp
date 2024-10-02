#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    if((b1==1&&b2==1)||(b2==1&&b3==1)||(b1==1&&b3==1))
	    cout<<"Not now"<<endl;
	    else
	    cout<<"Water filling time"<<endl;
	    
	}

}
