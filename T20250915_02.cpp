#include <iostream>

using namespace std;

int main()
{
    int Number[10] = { 0, };

    int Count = 0;

    cin >> Count;

    cout << endl;

    for (int i = 0; i < Count; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << ' ';
        }

        for (int j = i; j < Count; ++j)
        {
            cout << '*';
        }

        cout << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < Count; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << ' ';
        }
        for (int j = i; j < Count * 2 - i; ++j)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}