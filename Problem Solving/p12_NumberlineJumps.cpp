#include <iostream>
using namespace std;

int main()
{
    int x1,v1,x2,v2,res=0;
    long max_limit=10000;
    cin>>x1>>v1>>x2>>v2;
    for(int i=0;i<=max_limit;i++)
    {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
        {
            res=1;
            break;
        }
    }
    if(res==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}