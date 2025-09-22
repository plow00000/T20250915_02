#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    cout << "1~100까지의 합 : " << sum << endl;
}