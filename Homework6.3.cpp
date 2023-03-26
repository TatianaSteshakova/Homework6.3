#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("chcp 1251"); // Без этого нормально не выводятся русские слова, setlocale не помогает

    char c[100];

    cout << "Введите слово: " << endl;
    cin.getline(c, 99);

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