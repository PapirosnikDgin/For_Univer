
#include <exception>
#include "Games.h"
// Методы класса Game
void Game::set_name(const string& name1) {							  // Заполняет поле name
	this->name = name1;
}
string Game::get_name()const {											 // Возвращает значение поля name
	return (this->name);
}
void Game::set_regulations(const string &_regulations) {					// Заполняет поле regulations
 this->regulations= _regulations;
}
string Game::get_regulations()const {									  // Возвращает значение поля regulations
	return (this->regulations);
}
void Game::set_numbers_of_players(int _numbers) {							// Заполняет поле numbers_of_players
	this->numbers_of_players = _numbers;
}
int Game::get_numbers_of_players() const {								// Возвращает значение поля numbers_of_players
	return(this->numbers_of_players);
}
void Game::set_all(const string &_name, int _numbers, const string &_regulations) {      // Заполняет все поля
	set_name(_name);
	set_regulations(_regulations);
	set_numbers_of_players(_numbers);
}
Game::Game() {                                                          // Конструктор по умолчанию
	set_name("Игра");
	set_regulations("--");
	set_numbers_of_players(0);
}
Game::Game(const string &_name,const string &_regulations, int _numbers) {			  // конструктор с параметром
	set_name(_name);
	set_regulations(_regulations);
	set_numbers_of_players(_numbers);
}
// Методы класса ComputerGame
void ComputerGame::set_company_developer(const string& _company) {		// Заполняет поле company_developer
	this->company_developer = _company;
}
string ComputerGame::get_company_developer() const {				   // Возвращает значение поля company_developer
	return(this->company_developer);
}
void ComputerGame::set_genres(const string& _genres) {			       // Заполняет поле genres
	this->genres = _genres;
}
string ComputerGame::get_genres()const {							 // Возвращает значение поля genres
	return(this->genres);
}
void ComputerGame::set_implementation_model(const string& _model) {	// Заполняет поле implementation_model
	this->implementation_model = _model;
}
string ComputerGame::get_implementation_model()const{				 // Возвращает значение поля implementation_model
	return(this->implementation_model);
}
void ComputerGame::set_platform(const string& _platform){			// Заполняет поле platform
	this->platform = _platform;
}
string ComputerGame::get_paltform()const{							 // Возвращает значение поля platform
	return(this-> platform);
}
void ComputerGame::set_price(int _price){							// Заполняет поле price
	if (_price < 0)
		throw invalid_argument("Неверная цена !");
	this->price = _price;
}
int  ComputerGame::get_price()const{								// Возвращает значение поля price
	return(this->price);
}
void ComputerGame::set_discount(int _discount){						// Заполняет поле discount
	if (_discount < 0 or _discount>100) {
		throw (ErrorLenght);
		exit(0);
	}
	this->discount = _discount;
}
int ComputerGame::get_discount()const {								// Возвращает discount
	return(this->discount);
}
double ComputerGame::calculation_price(){							// Считает сумму с учетом скидки
	return(this->price - this->price*this->discount*0.01);
}
void ComputerGame::set_all(const string &_name,const string &_company,
					const string &_platform,const string &_genres, const string &_model,
					int _numbers,int _price, int _discount,const string &_regulations) {      // Заполняет все поля
	set_name(_name);
	set_regulations(_regulations);
	set_numbers_of_players(_numbers);

	set_company_developer(_company);
	set_implementation_model(_model);
	set_genres(_genres);
	set_discount(_discount);
	set_platform(_platform);
	set_price(_price);
}
ComputerGame::ComputerGame() {                               // конструктор по умолчанию
	set_company_developer("");
	set_discount(0);
	set_price(0);
	set_genres("");
	set_implementation_model("");
	set_platform("");
}
ComputerGame::ComputerGame(const string &_company,const string &_platform,const string &_model,
						const string &_genres,int _price,int _discount) {
	set_company_developer(_company);
	set_discount(_discount);
	set_price(_price);
	set_genres(_genres);
	set_implementation_model(_model);
	set_platform(_platform);
}

// Методы класса SportGame
void SportGame::set_equipment(const string& _equipment) {				 // Заполняет поле equipment
	this->equipment = _equipment;
}
string SportGame::get_equipment()const {								 //  возвращает поле equipment
	return(this->equipment);
}
void SportGame::set_all(const string &_name,int _numbers,
			const string &_equipment, const string &_regulations) {      // Заполняет все поля
	set_name(_name);
	set_regulations(_regulations);
	set_numbers_of_players(_numbers);
	set_equipment(_equipment);
}
SportGame::SportGame() {
	set_equipment("");
	set_name("Играaaaa");
	set_regulations("--");
	set_numbers_of_players(0);
}
SportGame::SportGame(const string &_equipment) {
	set_equipment(_equipment);
	set_name("Игра_1");
	set_regulations("--");
	set_numbers_of_players(0);
}
//Методы класса BoardGame
void BoardGame::set_type_game(const string& _type_game) {		// Заполняет поле type_game
	this->type_game = _type_game;
}
string BoardGame::get_type_game() const {				   // Возвращает значение поля type_game
	return(this->type_game);
}
void BoardGame::set_company_developer(const string& _company) {		// Заполняет поле company_developer
	this->company_developer = _company;
}
string BoardGame::get_company_developer() const {				   // Возвращает значение поля company_developer
	return(this->company_developer);
}
void BoardGame::set_price(int _price) {							// Заполняет поле price
	if (_price < 0)
		throw invalid_argument("Неверная цена !");
	this->price = _price;
}
int  BoardGame::get_price()const {								// Возвращает значение поля price
	return(this->price);
}
void BoardGame::set_discount(int _discount) {						// Заполняет поле discount
	if (_discount < 0 or _discount>100)
		throw (ErrorLenght);
	this->discount = _discount;
}
int BoardGame::get_discount()const {								// Возвращает discount
	return(this->discount);
}
double BoardGame::calculation_price() {									// Считает сумму с учетом скидки
	return(this->price - this->price * this->discount * 0.01);
}
void BoardGame::set_all(const string &_name,const string &_company,const string &_type,int _numbers,
						int _price, int _discount,const string &_regulations) {      // Заполняет все поля
	set_name(_name);
	set_regulations(_regulations);
	set_numbers_of_players(_numbers);

	set_company_developer(_company);
	set_type_game(_type);
	set_discount(_discount);
	set_price(_price);
}
BoardGame::BoardGame() {
	set_company_developer("");
	set_discount(0);
	set_price(0);
	set_type_game("");
}
BoardGame::BoardGame(const string &_company,const string &_type, int _price, int _discount) {
	set_company_developer(_company);
	set_discount(_discount);
	set_price(_price);
	set_type_game(_type);
}
	