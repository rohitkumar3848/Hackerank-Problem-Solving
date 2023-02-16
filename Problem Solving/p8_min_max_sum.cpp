#include <iostream>
using namespace std;

int main()
{
    int max,min,msum=0,mnsum=0;
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]==max)
        {
            continue;
        }
        mnsum+=a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]==min)
        {
            continue;
        }
        msum+=a[i];
    }
    cout<<mnsum<<" "<<msum;
    return 0;
}