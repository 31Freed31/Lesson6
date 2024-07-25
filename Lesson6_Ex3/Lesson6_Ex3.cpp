#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    string name;
    double debt, payment;

    cout << "Введите имя должника: ";
    cin >> name;

    cout << "Введите сумму долга: ";
    cin >> debt;

    if (debt <= 0) 
    {
        cout << "Сумма долга должна быть положительной." << endl;
        return 1;
    }

    while (debt > 0) 
    {
        cout << name << ", ваш долг: " << debt << " руб." << endl;
        cout << "Сколько рублей вы внесёте прямо сейчас для погашения долга? ";
        cin >> payment;

        if (payment <= 0) 
        {
            cout << "Сумма платежа должна быть положительной." << endl;
            continue;
        }

        if (payment >= debt) 
        {
            cout << "Долг полностью погашен!" << endl;
            if (payment > debt) 
            {
                cout << "У вас осталось " << payment - debt << " руб. на счету." << endl;
            }
            debt = 0;
        }
        else 
        {
            debt -= payment;
        }
    }

    cout << "Спасибо за оплату, " << name << "!" << endl;
}
