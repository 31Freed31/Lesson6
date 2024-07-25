#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    int number;
    cout << "Введите число: ";
    cin >> number;

    int count = 0;

    if (number < 0)
    {
        cout << "Отрицательное число! ";
    }
    else
    {
        if (number == 0)
        {
            count = 1;
        }
        else
        {
            while (number != 0)
            {
                number /= 10;
                count++;
            }

        }
        cout << "Цифр в числе: " << count << endl;
    }
}
