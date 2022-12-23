#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		unsigned int cnt;
		unsigned int index;
	public:
		PhoneBook();
		void ShowPhoneBook();
		bool AddPhoneBook(Contact _contact);
		void PrintTable(int _index);
		void SearchContact();
};

int WrapGetLine(std::string &_input);