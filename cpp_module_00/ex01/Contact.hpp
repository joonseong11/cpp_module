#include <iostream>
#include <string.h>

using std::string;

class PhoneBook {
	private:
		Contact array[8];
};

class Contact {
	private:
		string first_name;
		string last_name;
		string nickname;
		string phone_number;
		string darkest_secret;

	public:
		bool AddFirstName();
		bool AddLastName();
		bool AddNickName();
		bool AddPhoneNumber();
		bool AddDarkestSecret();
};

#include "Contact.hpp"

bool Contact::AddFirstName(string _first_name) {
	if (_first_name) {
		first_name = _first_name;
		return TRUE;
	}
	return FALSE;
}

bool Contact::AddLastName(string _first_name) {
	if (_first_name) {
		first_name = _first_name;
		return TRUE;
	}
	return FALSE;
}