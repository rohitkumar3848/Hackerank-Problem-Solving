#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    float x = 0, y = 0, z = 0;
    double a, b, c;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            x++;
        }
        else if (arr[i] < 0)
        {
            y++;
        }
        else
        {
            z++;
        }
    }
        a = x / n;
        b = y / n;
        c = z / n;
        cout << fixed << setprecision(6) << a << endl
             << fixed << setprecision(6) << b << fixed << setprecision(6) << endl
             << c;
        return 0;
    }