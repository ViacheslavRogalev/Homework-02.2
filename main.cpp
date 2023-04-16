#include <iostream>
#include <string>
#include <Windows.h>

struct Bank_Account
{
	int account_num;
	std::string first_name;
	float amount_of_money;
};

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	int a;

	Bank_Account pers;
	Bank_Account* p_pers = &pers;

	std::cout << "¬ведите номер счета: ";
	std::cin >> p_pers->account_num;

	std::cout << "¬ведите им€ владельца: ";
	std::cin >> p_pers->first_name;

	std::cout << "¬ведите баланс: ";
	std::cin >> a;

	std::cout << "¬ведите новый баланс: ";
	std::cin >> p_pers->amount_of_money;

	std::cout << "¬аш счет: " << pers.first_name << ", " << pers.account_num << ", " << pers.amount_of_money;

	return 0;
}