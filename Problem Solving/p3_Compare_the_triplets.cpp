#include <iostream>

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
    for (int i = 0; i < 3; i++)
    {
            if (a[i] > b[i])
            {
                x++;
            }
            if (a[i] < b[i])
            {
                y++;
            }
    }
    cout << x << " " << y;
    return 0;
}