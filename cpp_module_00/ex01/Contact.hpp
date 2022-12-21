#include <iostream>
#include <string>

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
		bool AddFirstName(string _first_name);
		bool AddLastName(string _last_name);
		bool AddNickName(string _nick_name);
		bool AddPhoneNumber(string _phone_number);
		bool AddDarkestSecret(string _darkest_secret);
};