#include "PhoneBook.hpp"

int WrapGetLine(std::string &_input)
{
	while (getline(std::cin, _input))
	{
		if (!_input.empty())
		{
			return 0;
		}
	}
	return 1;
}

int SearchGetLine(int _index)
{
	while (1)
	{
		std::cin >> _index;
		if (!std::cin.fail() && 0 <= _index && _index <= 7)
		{
			return _index;
		}
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
}

void PhoneBook::PrintTable(int _index)
{
	std::cout << "first name : " << contacts[_index].GetInfo(0) << std::endl;
	std::cout << "last name : " << contacts[_index].GetInfo(1) << std::endl;
	std::cout << "nick name : " << contacts[_index].GetInfo(2) << std::endl;
	std::cout << "phone number : " << contacts[_index].GetInfo(3) << std::endl;
	std::cout << "darkest secret : " << contacts[_index].GetInfo(4) << std::endl;
}

void PhoneBook::SearchContact()
{
	int index;
	std::cout << "which index?" << std::endl;
	index = SearchGetLine(index);
	PrintTable(index);
	std::cin.clear();
	std::cin.ignore(256, '\n');
}

void PhoneBook::ShowPhoneBook()
{
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "first name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "last name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < cnt; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i;
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|";
			std::cout << std::setw(10);
			if (contacts[i].GetInfo(j).length() > 10)
			{
				std::cout << contacts[i].GetInfo(j).substr(0, 9) + ".";
			}
			else
			{
				std::cout << contacts[i].GetInfo(j);
			}
		}
		std::cout << "|" << std::endl;
	}
	SearchContact();
}

bool PhoneBook::AddPhoneBook(Contact _contact)
{
	std::string _input;
	std::cout << "Type your first name" << std::endl;
	WrapGetLine(_input);
	_contact.AddFirstName(_input);
	_input.clear();
	std::cout << "Type your last name" << std::endl;
	WrapGetLine(_input);
	_contact.AddLastName(_input);
	_input.clear();
	std::cout << "Type your nickname" << std::endl;
	WrapGetLine(_input);
	_contact.AddNickName(_input);
	std::cout << "Type your phone number" << std::endl;
	WrapGetLine(_input);
	_contact.AddPhoneNumber(_input);
	std::cout << "Type your darkest secret name" << std::endl;
	WrapGetLine(_input);
	_contact.AddDarkestSecret(_input);
	contacts[index % 8] = _contact;
	index = (index % 8) + 1;
	if (cnt < 8)
		cnt += 1;
	return 0;
}
