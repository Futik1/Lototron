#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    long double sch1;
    long double sch2;

    cout << "Введите количество шаров в лототроне: ";
    cin >> sch1;

    while (sch1 <= 0)
    {
        cout << endl;
        cout << "Колличество шаров должно быть больше нуля !!! Повторите !!!" << endl;
        cout << "Введите колличество шаров в лототроне: ";
        cin >> sch1;
    }

    cout << "OK" << endl;
    cout << endl;

    cout << "Сколько шаров должно выпасть: ";
    cin >> sch2;

    while (sch1 < sch2 || sch2 <= 0)
    {
        cout << endl;
        cout << "Колличество шаров в лототроне не должно быть меньше шаров в игре !!!" << endl;
        cout << "И не должно ровняться или быть меньше нуля !!! Повторите !!!" << endl;
        cout << "Сколько шаров должно выпасть: ";
        cin >> sch2;
    }

    cout << "OK" << endl;
    cout << endl;

    long double ver1 = 0.0000;
    long double ver2 = 0.0000;
    long double ver3 = 0.0000;

    long double copy_sch2 = sch2;

    for (long double i = 0; i < copy_sch2; i++)
    {
        ver3 = (sch2 - i) / (sch1 - i);
        ver2 = ver2 + ver3;
    }

    ver1 = 1 / ver2;
    cout << "Вероятность выпадения всех чисел 1 к " << ver1 << endl;

    cout << endl;

    return 0;
}
