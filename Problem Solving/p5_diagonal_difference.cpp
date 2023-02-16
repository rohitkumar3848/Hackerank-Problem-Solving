#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n,m,ls=0,rs=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
         cin>>a[i][j];
      }  
    }
    for(int i=0;i<n;i++)
    {
      ls+=a[i][i];
      rs+=a[i][n-1-i]; 
    }
    cout<<abs(ls-rs);
    return 0;
}