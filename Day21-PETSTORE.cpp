#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define vi vector<int>
#define vlli vector<ll int>
#define vc vector<char>
#define vf vector<float>
#define vd vector<double>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
		bool flag=true;
	    int a[n];
	    map <int, int> m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    if(n%2!=0)
		cout<<"No"<<endl;
		else
		{
			for(auto it:m)
			{
				if(it.second%2!=0)
				{
					flag=false;
					break;
				}
			}
			if(flag)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}