#include <iostream>

class Date {
	int year_;
	int month_;
	int day_;

	public:
	 void ShowDate();

	 Date() {
		 year_ = 2022;
		 month_ = 7;
		 day_ = 13;
	 }
};

void Date::ShowDate() {
	std::cout << "today " << year_ << " year " << month_ << "month " << day_
				<< "yipnida " << std::endl;

}

int main() {
	Date day = Date();
	Date day2;

	day.ShowDate();
	day2.ShowDate();
}