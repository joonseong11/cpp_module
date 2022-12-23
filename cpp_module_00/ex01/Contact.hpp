#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact { 
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		bool AddFirstName(std::string _first_name);
		bool AddLastName(std::string _last_name);
		bool AddNickName(std::string _nick_name);
		bool AddPhoneNumber(std::string _phone_number);
		bool AddDarkestSecret(std::string _darkest_secret);
		std::string GetInfo(int i);
};
#endif
