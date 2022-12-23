#include "Contact.hpp"

bool Contact::AddFirstName(std::string _first_name) {
	if (!_first_name.empty()) {
		first_name = _first_name;
		return 1;
	}
	return 0;
}

bool Contact::AddLastName(std::string _last_name) {
	if (!_last_name.empty()) {
		last_name = _last_name;
		return 1;
	}
	return 0;
}

bool Contact::AddNickName(std::string _nickname) {
		if (!_nickname.empty()) {
		nickname = _nickname;
		return 1;
	}
	return 0;
}

bool Contact::AddPhoneNumber(std::string _phone_number) {
		if (!_phone_number.empty()) {
		phone_number = _phone_number;
		return 1;
	}
	return 0;
}

bool Contact::AddDarkestSecret(std::string _darkest_secret) {
		if (!_darkest_secret.empty()) {
		darkest_secret = _darkest_secret;
		return 1;
	}
	return 0;
}

std::string Contact::GetInfo(int i) {
	if (i == 0)
		return first_name;
	else if (i == 1)
		return last_name;
	else if (i == 2)
		return nickname;
	else if (i == 3)
		return phone_number;
	else if (i == 4)
		return darkest_secret;
	else
		return "err";
}