#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while (t--)
  {
    int n;  //no of test cases
    cin>>n;
    
    int arr[n];   //size of test cases
    string v;     //binary string 0 fail, 1 pass
    
    int ans = 100;
  
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    
    cin >> v;

    for (int i = 0; i < n; i++)
      if (v[i] == '0' && arr[i] < ans)
          ans = arr[i];

    cout << ans << endl;
  }
  return 0;
}