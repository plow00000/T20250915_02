#include <iostream>

using namespace std;

int main()
{
    int Sum = 0;
    int MultipleOf3 = 0;

    for (int i = 1; i <= 100; i++)
    {
        Sum += i;
        if (i % 3 == 0)
        {
            MultipleOf3 += i;
		}
    }

    cout << "1~100������ ��� ������ �� : " << Sum << endl;
	cout << "1~100������  3�� ����� �� : " << MultipleOf3 << endl;
}