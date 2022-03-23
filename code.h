#include <string>
using namespace std;

class Students
{
    public:
        void set_name(string student_name) // Установка имени студента
        {
            name = student_name;
        }
        string get_name() // Получение имени студента
        {
            return name;
        }
        void set_last_name(string student_last_name) // Установка фамилии студента
        {
            last_name = student_last_name;
        }
        string get_last_name() // Получение фамилии студента
        {
            return last_name;
        }
        void set_scores(int student_scores[]) // Установка промежуточных оценок
        {
            for (int i = 0; i < 5; ++i)
            {
                scores[i] = student_scores[i];
            }
        }
        void set_average_ball(float ball) // Установка среднего балла
        {
            average_ball = ball;
        }
        float get_average_ball() // Получение среднего балла
        {
            return average_ball;
        }

    private:
        int scores[5]; // Промежуточные оценки
        float average_ball; // Средний балл
        string name; // Имя
        string last_name; // Фамилия
};
