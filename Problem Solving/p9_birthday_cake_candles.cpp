#include <iostream>
using namespace std;

int main()
{
    long int n,max,count=0;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}