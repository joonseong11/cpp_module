class Contact
{
private:
	char	*FirstName;
	char	*LastName;
	char	*NickName;
	char	*PhoneNumber;
	char	*DarkestSecret;
public:
	Contact(/* args */);
	~Contact();
};

class PhoneBook
{
private:
	/* data */
public:
	Contact	tmp[9];
	PhoneBook(/* args */);
	~PhoneBook();
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}
