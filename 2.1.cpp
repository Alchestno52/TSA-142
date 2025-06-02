#include <iostream>
using namespace std;

// Прототипы функций
double calculate_face_area(double edge);
double calculate_total_surface_area(double edge);
double calculate_volume(double edge);

int main() {
    double edge_length;
    
    cout << "Введите длину ребра куба: ";
    cin >> edge_length;
    
    // Вычисление параметров и сохранение в переменные count1, count2, count3
    double count1 = calculate_face_area(edge_length);
    double count2 = calculate_total_surface_area(edge_length);
    double count3 = calculate_volume(edge_length);
    
    // Вывод результатов через переменные
    cout << "\nРезультаты вычислений:\n";
    cout << "1. Площадь одной грани: " << count1 << endl;
    cout << "2. Площадь полной поверхности: " << count2 << endl;
    cout << "3. Объем куба: " << count3 << endl;
    
    return 0;
}

// Реализации функций
double calculate_face_area(double edge) {
    return edge * edge;
}

double calculate_total_surface_area(double edge) {
    return 6 * calculate_face_area(edge);
}

double calculate_volume(double edge) {
    return edge * edge * edge;
}
