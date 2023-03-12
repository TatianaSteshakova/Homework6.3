#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    char c[100];

    cout << "Введите слово: " << endl;
    cin >> c;

    char cd;

    cout << "Второй символ: " << c[1] << endl;
    cout << "Последний символ:" << c[strlen(c)-1] << endl;
    cout << "Введите символ для удаления: ";
    cin >> cd;
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] != cd)
        {
            printf("%c", c[i]);
        }
    }
}