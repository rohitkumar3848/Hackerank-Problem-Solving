#include <iostream>
using namespace std;

int main()
{
    int n,d,m,sum,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<i+m;j++)
        {
            sum+=a[j];
        }
        if(sum==d)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}