#include <iostream>

using namespace std;

int main()
{
    cout << "Введите размер вклада: ";
    int deposit;
    cin >> deposit;

    cout << "Введите процентную ставку: ";
    int percent;
    cin >> percent;

    cout << "Введите желаемую сумму: ";
    int result;
    cin >> result;
    cout << endl;

    int year = 1;

    int finalSum = deposit;

    while (finalSum < result)
    {
        finalSum = finalSum + (finalSum * percent / 100);
        cout << year << " год: " << finalSum << endl;
        year++;
    }
    cout << endl;
    cout << "Придется подождать: " << year - 1 << " лет";
}