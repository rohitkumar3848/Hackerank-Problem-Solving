#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], b[3], x = 0, y = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    if (a[0] > b[0])
    {
        x++;
    }
    if (a[1] == b[1])
    {
    }
    if (a[2] < b[2])
    {
        y++;
    }
    cout << x << " " << y;
    return 0;
}