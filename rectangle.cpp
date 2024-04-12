#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");

    double length, width, perimeter, area, diagonal;

    cout << "Введите длину прямоугольника: ";
    cin >> length;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    if (length > 0 && width > 0)
    {
        perimeter = 2 * (length + width);
        area = length * width;
        diagonal = sqrt(pow(length, 2) + pow(width, 2));

        cout << "Периметр прямоугольника: " << perimeter << endl;
        cout << "Площадь прямоугольника: " << area << endl;
        cout << "Длина диагонали прямоугольника: " << diagonal << endl;

        cout << endl;
    }
    else
    {
        cout << "Введены неверные данные";
    }

}
