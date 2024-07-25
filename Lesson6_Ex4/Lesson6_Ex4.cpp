#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    string ticketNumber;
    cout << "Введите номер билета: ";
    cin >> ticketNumber;

    int i = 0;
    while (ticketNumber[i] != '\0') {
        if (!isdigit(ticketNumber[i])) {
            cout << "Номер билета должен содержать только цифры." << endl;
        }
        i++;
    }

    if (i % 2 != 0) {
        cout << "Номер билета должен содержать чётное количество цифр." << endl;
    }

    int sumFirstHalf = 0, sumSecondHalf = 0;
    int halfLength = i / 2;

    i = 0;
    while (i < halfLength) {
        sumFirstHalf += ticketNumber[i] - '0';
        sumSecondHalf += ticketNumber[halfLength + i] - '0';
        i++;
    }

    if (sumFirstHalf == sumSecondHalf) {
        cout << "Билет счастливый!" << endl;
    }
    else {
        cout << "Повезёт в следующий раз!" << endl;
    }
}
