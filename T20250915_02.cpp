#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int MultiplOf3 = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;
        if (i % 3 == 0)
        {
            MultiplOf3 += i;
		}
    }

    cout << "1~100������ ��� ������ �� : " << sum << endl;
	cout << "1~100������  3�� ����� �� : " << MultiplOf3 << endl;
}