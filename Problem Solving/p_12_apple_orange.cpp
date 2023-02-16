#include <iostream>
using namespace std;
int main()
{
    int s,t,a,b,m,n,count=0,count1=0;
    cin>>s>>t>>a>>b>>m>>n;
    int ar[m],br[n];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
        if(ar[i]+a>=s && ar[i]+a<=t)
        {
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]+b>=s && ar[i]+b<=t)
        {
            count1++;
        }
    }
    cout<<count<<endl<<count1;
    return 0;
}