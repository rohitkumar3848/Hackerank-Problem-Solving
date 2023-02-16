#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,max,min,count=0,count1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            count++;
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
            count1++;
        }
    }
    cout<<count<<" "<<count1;
    return 0;
}