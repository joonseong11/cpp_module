#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		unsigned int cnt;
	private:
		PhoneBook() {
			cnt = 0;
		};
		bool AddPhoneBook(Contact _contact);
};

bool PhoneBook::AddPhoneBook(Contact _contact) {
	
}