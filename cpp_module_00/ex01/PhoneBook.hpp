#include "Contact.hpp"

void SearchContact() {
	cout << "which index?" << endl;
	wrap_getline();
}

void wrap_getline(string& _input) {
	while (1) {
		getline(cin, _input);
		if (!_input.empty()) {
			return ;
		}
	}
}

class PhoneBook {
	private:
		Contact contacts[8];
		unsigned int cnt;
		unsigned int index;
	public:
		void ShowPhoneBook();
		bool AddPhoneBook(Contact _contact);
};

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
			for (int j = 0; j < 3; j++) {
				cout << "|";
				cout << setw(10);
				if (contacts[i].GetInfo(j).length() > 10) {
					cout << contacts[i].GetInfo(j).substr(0, 9) + ".";
				} else {
					cout << contacts[i].GetInfo(j);
				}
			}
			cout << "|" << endl;
		}
		SearchContact();
}

bool PhoneBook::AddPhoneBook(Contact _contact) {
		string _input;
		cout << "Type your first name" << endl;
		wrap_getline(_input);
		_contact.AddFirstName(_input);
		_input.clear();
		cout << "Type your last name" << endl;
		wrap_getline(_input);
		_contact.AddLastName(_input);
		_input.clear();
		cout << "Type your nickname" << endl;
		wrap_getline(_input);
		_contact.AddNickName(_input);
		cout << "Type your phone number" << endl;
		wrap_getline(_input);
		_contact.AddPhoneNumber(_input);
		cout << "Type your darkest secret name" << endl;
		wrap_getline(_input);
		_contact.AddDarkestSecret(_input);
		contacts[index % 8] = _contact;
		index = (index % 8) + 1;
		if (cnt < 8)
			cnt += 1;
		return 0;
}
