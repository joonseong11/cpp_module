#include "PhoneBook.hpp"

void WarpGetLine(string &_input)
{
	while (1)
	{
		getline(cin, _input);
		if (!_input.empty())
		{
			return;
		}
	}
}

int SearchGetLine(int _index)
{
	while (1)
	{
		cin >> _index;
		if (!cin.fail() && 0 <= _index && _index <= 7)
		{
			return _index;
		}
		cin.clear();
		cin.ignore(256, '\n');
	}
}

void PhoneBook::PrintTable(int _index)
{
	cout << "first name : " << contacts[_index].GetInfo(0) << endl;
	cout << "last name : " << contacts[_index].GetInfo(1) << endl;
	cout << "nick name : " << contacts[_index].GetInfo(2) << endl;
	cout << "phone number : " << contacts[_index].GetInfo(3) << endl;
	cout << "darkest secret : " << contacts[_index].GetInfo(4) << endl;
}

void PhoneBook::SearchContact()
{
	int index;
	cout << "which index?" << endl;
	index = SearchGetLine(index);
	PrintTable(index);
	cin.clear();
	cin.ignore(256, '\n');
}

void PhoneBook::ShowPhoneBook()
{
	cout << "|";
	cout << setw(10);
	cout << "index";
	cout << "|";
	cout << setw(10);
	cout << "first name";
	cout << "|";
	cout << setw(10);
	cout << "last name";
	cout << "|";
	cout << setw(10);
	cout << "nickname";
	cout << "|" << endl;
	for (int i = 0; i < cnt; i++)
	{
		cout << "|";
		cout << setw(10);
		cout << i;
		for (int j = 0; j < 3; j++)
		{
			cout << "|";
			cout << setw(10);
			if (contacts[i].GetInfo(j).length() > 10)
			{
				cout << contacts[i].GetInfo(j).substr(0, 9) + ".";
			}
			else
			{
				cout << contacts[i].GetInfo(j);
			}
		}
		cout << "|" << endl;
	}
	SearchContact();
}

bool PhoneBook::AddPhoneBook(Contact _contact)
{
	string _input;
	cout << "Type your first name" << endl;
	WarpGetLine(_input);
	_contact.AddFirstName(_input);
	_input.clear();
	cout << "Type your last name" << endl;
	WarpGetLine(_input);
	_contact.AddLastName(_input);
	_input.clear();
	cout << "Type your nickname" << endl;
	WarpGetLine(_input);
	_contact.AddNickName(_input);
	cout << "Type your phone number" << endl;
	WarpGetLine(_input);
	_contact.AddPhoneNumber(_input);
	cout << "Type your darkest secret name" << endl;
	WarpGetLine(_input);
	_contact.AddDarkestSecret(_input);
	contacts[index % 8] = _contact;
	index = (index % 8) + 1;
	if (cnt < 8)
		cnt += 1;
	return 0;
}
