#include "Contact.hpp"

bool Contact::AddFirstName(string _first_name) {
	if (!_first_name.empty()) {
		first_name = _first_name;
		return 1;
	}
	return 0;
}

bool Contact::AddLastName(string _last_name) {
	if (!_last_name.empty()) {
		last_name = _last_name;
		return 1;
	}
	return 0;
}

bool Contact::AddNickName(string _nickname) {
		if (!_nickname.empty()) {
		nickname = _nickname;
		return 1;
	}
	return 0;
}

bool Contact::AddPhoneNumber(string _phone_number) {
		if (!_phone_number.empty()) {
		phone_number = _phone_number;
		return 1;
	}
	return 0;
}

bool Contact::AddDarkestSecret(string _darkest_secret) {
		if (!_darkest_secret.empty()) {
		darkest_secret = _darkest_secret;
		return 1;
	}
	return 0;
}
