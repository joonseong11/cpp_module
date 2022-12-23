#include "PhoneBook.hpp"

int	main()
{
	std::string input;
	PhoneBook phonebook;
	Contact contact;
	int stat;

	while (1) {
		std::cout << "choose 1 of commands which ADD, SEARCH, EXIT" << std::endl;
		stat = WrapGetLine(input);
		if (stat == 1)
			return 0;
		if (input == "EXIT") {
			return 0;
		} else if (input == "ADD") {
			phonebook.AddPhoneBook(contact);
		} else if (input == "SEARCH") {
			phonebook.ShowPhoneBook();
		}
	}
	return 0;
}
