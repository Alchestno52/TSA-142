#include <iostream>
#include <cmath>
using namespace std;
/**
 *@brief - Функция для вычисления A по заданному уравнению a=sin^3⁡〖(x^2+z)^2 〗-√(x/y)
 *@param x - значение переменной x
 *@param y - значение переменной y
 *@param z - значение переменной z
 *@return - возвращает рассчитанное значение
 */
double getA(const double x, const double y, const double z);
/**
 *@brief - Функция для вычисления B по заданному уравнению b=x^2/z+cos⁡〖(x+y)^3 〗
 *@param x - значение переменной x
 *@param y - значение переменной y
 *@param z - значение переменной z
 *@return - возвращает рассчитанное значение
 */
double getB(const double x, const double y, const double z);
/**
*@brief - Точка входа в программу
*@return - возвращает 0, если программа выполнена корректно
*/
int main()
{
    const double x = 1.825;
    const double  y = 18.225;
    const double  z = -3.298;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "a = " << getA(x, y, z) << endl;
    cout << "b = " << getB(x, y, z);
    return 0;
}
double getA(const double x, const double y, const double z) {
    return pow(x,(y/x))-pow(y/x,1/3);
}
double getB(const double x, const double y, const double z) {
    return (y-x)+((y-z)/(y-x))/3+pow(z,2)/5;
}
