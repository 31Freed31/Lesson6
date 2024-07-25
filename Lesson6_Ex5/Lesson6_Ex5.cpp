#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int N;
    cout << "Введите номер последовательности: ";
    cin >> N;

    if (N <= 0) 
    {
        cout << "Номер последовательности должен быть положительным числом." << endl;
    }

    int fib1 = 1, fib2 = 1, fibN = 1;

    if (N == 1 || N == 2) 
    {
        fibN = 1;
    }
    else {
        for (int i = 3; i <= N; ++i) 
        {
            fibN = fib1 + fib2;

            if (fibN < fib1 || fibN < fib2) 
            {
                cout << "Превышено максимальное значение для типа int." << endl;
            }
            fib1 = fib2;
            fib2 = fibN;
        }
    }

    cout << "Число в последовательности: " << fibN << endl;
}
