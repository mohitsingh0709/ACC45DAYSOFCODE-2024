#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,d;
	    cin >> a>> b>> c;
	    d=b*c;
	    if(a%d ==0)
	    cout << a/d << endl;
	    else
	    cout << a/d + 1 << endl;
	}
	return 0;
}
