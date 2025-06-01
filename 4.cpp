#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

// Функция для вычисления y
double calculateY(double x) {
    return 0.29 * pow(x, 3) + x - 1.2502;
}

int main() {
    // Параметры табулирования
    const double start = 0.0;
    const double end = 2.0;
    const double step = 0.2;

    // Векторы для хранения данных
    vector<double> xValues;
    vector<double> yValues;

    // Табулирование функции
    for (double x = start; x <= end + 1e-9; x += step) { // +1e-9 для учёта погрешности double
        double y = calculateY(x);
        xValues.push_back(x);
        yValues.push_back(y);
        
        // Вывод в консоль
        cout << fixed << setprecision(1);
        cout << "x = " << x << ", ";
        cout << fixed << setprecision(4);
        cout << "y = " << y << endl;
    }
}
