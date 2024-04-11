#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const double Pi = 3.14; //  Число Пи

    double radius, angle, circumference, area, sector_area;

    cout << "Введите радиус окружности: ";
    cin >> radius;
    cout << "Введите угол кругового сектора: ";
    cin >> angle;

    if ((radius >= 1) and (angle > 0 and angle <= 360))
    {
        circumference = 2 * Pi * radius; // Длина окружности
        area = Pi * (radius * radius); // Площадь круга
        sector_area = (area / 360) * angle ;// Площадь кругового сектора (в градусах)

        cout << "Длина окружности: " << circumference << endl;
        cout << "Площадь круга: " << area << endl;
        cout << "Площадь кругового сектора: " << sector_area << endl;
    }
    else
    {
        cout << "Такой окружности не существует!" << endl;
    }

    return 0;
}
