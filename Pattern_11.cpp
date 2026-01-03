#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    char value = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << value;
            j += 1;
        }
        cout << endl;
        value += 1;
        i += 1;
    }
}