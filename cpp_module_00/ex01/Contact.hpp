#include <iostream>
#include <string>

class PhoneBook {
	private:
		Contact array[8];
};

class Contact {
	private:
	 std::string first_name;
	 std::string last_name;
	 std::string nickname;
	 std::string phone_number;
	 std::string darkest_secret;

	public:
		void add_firstname();
		void add_lastname();
		void add_nickname();
		void add_phone_number();
		void add_darkest_secret();
};
