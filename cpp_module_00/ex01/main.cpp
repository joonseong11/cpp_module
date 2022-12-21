// #include "Contact.hpp"
#include <iostream>
#include "Contact.hpp"
using std::string;
using std::cin;

void warp_getline(istream& is, string& str)
{
	
	return ;
}

int	main()
{
	string input;
	PhoneBook phonebook;
	Contact contact;

	do {
		getline(cin, input);
		if (input == "EXIT") {
			return 0;
		} else if (input == "ADD") {
			wrap_getline(cin, input);
			contact.AddFirstName(input);
		} else if (input == "SEARCH") {

		} else {
			
		}
	}
	while (1) ;
	return 0;
}


