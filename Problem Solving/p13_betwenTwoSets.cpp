#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m,count=0,l=0,p=0,x=0,y=0;
    cin>>n>>m;
    int a[n],b[m];
    vector<int> c;
    vector<int> d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int k=1;k<=101;k++)
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i]%k==0)
            {
              c.push_back(k);
              x++;
            }
        }
        for(int i=1;i<=m;i++)
        {
            if(b[i]%k==0)
            {
                d.push_back(k);
                y++;
            }
        }
    }
    for(int i=0;i<=x;i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    for(int i=0;i<=y;i++)
    {
        cout<<d[i];
    }
    /*for(int l=1;l<=x;l++)
    {
        for(int p=1;p<=y;p++)
        {
            if(c[l]==d[p])
            {
                count++;
            }
        }
    }
    cout<<count;*/
    return 0;
}