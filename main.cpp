#include <iostream>
#include <string>
#include <Windows.h>

struct Bank_Account
{
	int account_num;
	std::string first_name;
	double amount_of_money;
};

void change_balance (Bank_Account* pers, double new_amount_of_money)
{
	pers->amount_of_money = new_amount_of_money;
}

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	Bank_Account pers;
	double new_amount_of_money = 0;

	std::cout << "������� ����� �����: ";
	std::cin >> pers.account_num;

	std::cout << "������� ��� ���������: ";
	std::cin >> pers.first_name;

	std::cout << "������� ������: ";
	std::cin >> pers.amount_of_money;

	std::cout << "������� ����� ������: ";
	std::cin >> new_amount_of_money;

	change_balance(&pers, new_amount_of_money);

	std::cout << "��� ����: " << pers.first_name << ", " << pers.account_num << ", " << pers.amount_of_money << std::endl;

	return 0;
}