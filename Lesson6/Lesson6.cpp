#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    int hour;
    cout << "Введите, который час: ";
    cin >> hour;

    int count = 0;

    if (hour >= 0 && hour <= 24)
    {
        if (hour == 0)
        {
            cout << " ";
        }
        while (count < hour)
        {
            cout << "Ку-ку" << endl;
            count++;
        }
    }
    else
    {
        cout << "Неправильное время!";
    }

}
