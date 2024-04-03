// vectoor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;
class Point {
    int x;
public:
    Point(int a) {
        x = a;
   }
   
    void friend Print(Point& x);
};
void  Print(Point& x) {
    cout  << "Number: " << x.x << endl;
}
int main()
{
    vector<Point> number;
    number.push_back(Point(1));
    number.push_back(Point(2));
    number.push_back(Point(3));
    number.push_back(Point(4));
    number.push_back(Point(5));
    for_each(number.begin(), number.end(), Print);
    list<Point> theList;
    
    theList.push_back(Point(6));
    theList.push_back(Point(7));
    theList.push_back(Point(8));
    theList.push_back(Point(9));
    theList.push_back(Point(10));
    for_each(theList.begin(), theList.end(), Print);
   

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
