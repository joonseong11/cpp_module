// #include "Contact.hpp"
#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

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
			cout << "Type your first name" << endl;
			getline(cin, input);
			contact.AddFirstName(input);
			cout << "Type your last name" << endl;
			getline(cin, input);
			contact.AddLastName(input);
			cout << "Type your nickname" << endl;
			getline(cin, input);
			contact.AddNickName(input);
			cout << "Type your phone number" << endl;
			getline(cin, input);
			contact.AddPhoneNumber(input);
			cout << "Type your darkest secret name" << endl;
			getline(cin, input);
			contact.AddDarkestSecret(input);
			phonebook.
		} else if (input == "SEARCH") {

		} else {
			
		}
	}
	while (1) ;
	return 0;
}


