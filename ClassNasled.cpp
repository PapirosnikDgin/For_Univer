// ClassNasled.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <locale>
#include "Games.h"
using namespace std;
void print_data(ComputerGame &_a){                           // Функция для вывода  всех полей на экран
    cout << "\n\n\tНазвание:\t" <<setw(12)<< _a.get_name() << endl;
    cout << "\tКампания разработчик:\t" << setw(12) << _a.get_company_developer() << endl;
    cout << "\tПлатформа:\t\t" << setw(12) << _a.get_paltform() << endl;
    cout << "\tЖанры:\t\t\t" << setw(12) << _a.get_genres() << endl;
    cout << "\tКоличество игроков:" << setw(12) << _a.get_numbers_of_players() << endl;
    cout << "\tЦена:\t\t" << setw(12) << _a.get_price() << "  со скидкой в " << _a.get_discount() << "% = " <<_a.calculation_price() << endl;
}
void print_data(SportGame& _a) {                            // Функция для вывода  всех полей на экран
    cout << "\n\n\tНазвание:\t" << setw(12) << _a.get_name() << endl;
    cout << "\t Оборудование:\t" << setw(12) << _a.get_equipment() << endl;
    cout << "\tКоличество игроков:" << setw(12) << _a.get_numbers_of_players() << endl;
    cout << "\tПравила:\t" << setw(12) << _a.get_regulations() << endl;
}
void print_data(BoardGame& _a) {                            // Функция для вывода  всех полей на экран
    cout << "\n\n\tНазвание:\t" << setw(12) << _a.get_name() << endl;
    cout << "\tКампания разработчик:\t" << setw(12) << _a.get_company_developer() << endl;
    cout << "\tТип игры:\t\t " << setw(12) << _a.get_type_game() << endl;
    cout << "\tКоличество игроков:" << setw(12) << _a.get_numbers_of_players() << endl;
    cout << "\tЦена:\t\t" << setw(12) << _a.get_price() << "  со скидкой в " << _a.get_discount() << "% = " << _a.calculation_price() << endl;
    cout << "\tПравила:" << setw(12) << _a.get_regulations() << endl;
}
int main()
{
    setlocale(LC_ALL,"rus");
    ComputerGame a;
    a.set_name("GTA 5");//  метод базового класса+
    a.set_company_developer("RocStar Games");// метод класса наследника
    a.set_numbers_of_players(1);// метод базового класса
    a.set_platform("RocStar Games");// метод класса наследника
    a.set_genres("Shoter,Sologame");// метод класса наследника
    a.set_implementation_model("Buy to play");// метод класса наследника
    a.set_price(1500);// метод класса наследника
    a.set_discount(15);// метод класса наследника2
    print_data(a);// Функция для вывода  всех полей на экран
    SportGame b;
    b.set_all("Волейбол",12,"Мяч, сетка, поле, 2 команды","Играют 2 команды по 6 человек до определенного количества очков.\n\t\tMатч начинается с подачи мяча 1 командой, и тд.");
    print_data(b);// Функция для вывода  всех полей на экран
    BoardGame c;
    c.set_all("Heartstoun","Blizzard","KKI",2,0,0,
        "Игроки собирают свою коллекция карт, собирают колоду из 30 карт по правилу:\n\t\t не больше 2-х копий обычной,редкой,эпической, не больше 1 копии легендарной карты.\n\t\t Собрав  колоды, игроки соревнуются чья же окажется сильнее");
    print_data(c);// Функция для вывода  всех полей на экран

    cout << " проверяею commit";
    // Делаю изменения для Второй ветки
    cout << "Ghjdthrf dtnrb";
    system("pause");
    return(0);
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
