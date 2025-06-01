#include <iostream>
#include <limits> // для numeric_limits
#include <cmath>  // для pow()

using namespace std;

// Функция для безопасного ввода положительного числа
double get_positive_number(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка! Введите положительное число.\n";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

int main() {
 // Ввод длины ребра с проверкой
    double edge_length = get_positive_number("Введите длину ребра куба: ");
    
    // Вычисление параметров
    double face_area = pow(edge_length, 2);          // Площадь одной грани
    double total_surface_area = 6 * face_area;       // Полная площадь поверхности
    double volume = pow(edge_length, 3);             // Объем куба
    
    // Вывод результатов
    cout << "\nРезультаты вычислений:\n";
    cout << "1. Площадь одной грани: " << face_area << endl;
    cout << "2. Площадь полной поверхности: " << total_surface_area << endl;
    cout << "3. Объем куба: " << volume << endl;
    
    return 0;
}
