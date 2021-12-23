#pragma once
#include <iostream>
#include <string>
#include <locale>
using namespace std;
/*
Создал класс Номоконов Александр Олегович студент группы ИВТ-20 - 2 курс.
Класс предназначен для работы с играми (Описание)
*/
enum {
	ErrorLenght,    // ОшибкаДлины
//	ErrorDiscount   // Для функции calculation, если кто-то применит  ее без скидки.
};

class Game // базовый класс
{
	string name;            // название игры
	string regulations;     // правила
	int numbers_of_players; // общее число игроков за 1 сессию
public:
    void set_name(const string& _name);									 // Заполняет поле name
	string get_name()const;												 // Возвращает значение поля name
	void set_regulations(const string &_regulations);					 // Заполняет поле regulations
	string get_regulations()const;					        			 // Возвращает значение поля regulations
	void set_numbers_of_players(int _numbers);							 // Заполняет поле numbers_of_players
	int get_numbers_of_players()const;									 // Возвращает значение поля numbers_of_players
    void set_all(const string& _name, int _numbers,
						const string& _regulations);					 // Заполняет все поля
	Game();																 // Конструктор по умолчанию													
	Game(const string &_name,const string &_regulations, int _numbers);	 // Конструктор с парметром
};


// компьютерная игра
class ComputerGame :public Game { 
	string company_developer; // кампания разработчик
	string genres;            // жанры
	string implementation_model;// модель распространения (F2P, B2P)
	string platform;            // Площадка
	//string server;              // Сервер
	int price;                  // Цена, если F2P - тогда = 0
	int discount;               // Скидка %

public:
	void set_company_developer(const string &_company);				 // Заполняет поле company_developer
	string get_company_developer()const;							 // Возвращает значение поля company_developer
	void set_genres(const string& _genres);						     // Заполняет поле genres
	string get_genres()const;										 // Возвращает значение поля genres
	void set_implementation_model(const string& _model);			 // Заполняет поле implementation_model
	string get_implementation_model()const;							 // Возвращает значение поля implementation_model
	void set_platform(const string& _platform);						 // Заполняет поле platform
	string get_paltform()const;										 // Возвращает значение поля platform
	void set_price( int _price);									 // Заполняет поле price
	int  get_price()const;										     // Возвращает значение поля price
	void set_discount(int _discount);								 // Заполняет поле discount
	int  get_discount()const;										 // Возвращает значение поля discount
	double calculation_price();										 // Считает сумму с учетом скидки
	void set_all(const string& _name, const string& _company, 
		const string& _platform, const string& _genres, const string& _model,
		int _numbers, int _price, int _discount, const string& _regulations);// Заполняет все поля
	ComputerGame();                                                  // Конструктор по умолчанию
	ComputerGame(const string &_company,const string &_platform,const string &_model,
				const string &_genres, int _price, int _discount);	 // Конструктор с параметром
};
// Спортивная игра
class SportGame :public Game {
	string equipment; //  оборудование
public:
	void set_equipment(const string &_equipment);					  // Заполняет поле equipment
	string get_equipment()const;									  //  возвращает поле equipment
	void set_all(const string &_name, int _numbers,
		const string &_equipment,const string &_regulations);		  // Заполняет все поля
	SportGame();													  // конструктор по умолчанию
	SportGame(const string &_equipment);									  // Конструктор с параметром
};
// настольная игра
class BoardGame : public Game {
	string type_game;			// вид игры.
	string company_developer;  // кампания разработчик
	int price;                  // Цена, если F2P - тогда = 0
	int discount;               // Скидка %
public:
	void set_type_game(const string& _type);						 // Заполняет поле type_game
	string get_type_game()const;									 // Возвращает значение поля type_game
	void set_company_developer(const string& _company);				 // Заполняет поле company_developer
	string get_company_developer()const;							 // Возвращает значение поля company_developer
	void set_price(int _price);										 // Заполняет поле price
	int  get_price()const;										     // Возвращает значение поля price
	void set_discount(int _discount);								 // Заполняет поле discount
	int  get_discount()const;										 // Возвращает значение поля discount
	double calculation_price();										 // Считает сумму с учетом скидки
	void set_all(const string& _name, const string& _company,
				 const string& _type, int _numbers,int _price,
				int _discount, const string& _regulations);		     // Заполняет все поля
	BoardGame();													 // Конструктор по умолчанию					
	BoardGame(const string &_company, const string &_type,						 // Конструктор с параметром
				int _price, int _discount);
};

