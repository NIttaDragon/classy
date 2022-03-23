#include <iostream>
#include "code.h"
using namespace std;

int main()
{
    Students student; // Создание объекта класса Student

    string name;
    string last_name;

    cout << "Имя: "; // Ввод имени с клавиатуры
    getline(cin, name);

    cout << "Фамилия: "; // Ввод фамилии
    getline(cin, last_name);

    student.set_name(name); // Сохранение имени и фамилии в объект класса Students
    student.set_last_name(last_name);

    int scores[5]; // Оценки
    int sum = 0; // Сумма всех оценок

    for (int i = 0; i < 5; ++i)  // Ввод промежуточных оценок
    {
        cout << "Оценка " << i+1 << ": ";
        cin >> scores[i];
        sum += scores[i]; // суммирование
    }

    student.set_scores(scores); // Сохраняем промежуточные оценки в объект класса Student
    float average_ball = sum / 5.0; // Считаем средний балл
    student.set_average_ball(average_ball); // Сохраняем средний балл в объект класса Students
    cout<<"Средний балл по студенту "<<student.get_name()<<" "<<student.get_last_name()<<" : "<<student.get_average_ball()<<endl; // Выводим данные по студенту
    return 0;
}
