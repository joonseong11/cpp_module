#include "PhoneBook.hpp"

int	main()
{
	string input;
	PhoneBook phonebook;
	Contact contact;

	do {
		cout << "choose 1 of commands which ADD, SEARCH, EXIT" << endl;
		getline(cin, input);
		if (input == "EXIT") {
			return 0;
		} else if (input == "ADD") {
			phonebook.AddPhoneBook(contact);
		} else if (input == "SEARCH") {
			phonebook.ShowPhoneBook();
		}
	}
	while (1) ;
	return 0;
}
