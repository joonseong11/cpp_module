#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "debug" << std::endl;
}
void Harl::info( void ) {
	std::cout << "info" << std::endl;
}
void Harl::warning( void ) {
	std::cout << "warning" << std::endl;
}
void Harl::error( void ) {
	std::cout << "error" << std::endl;
}
void Harl::complain( std::string level ){
	void (Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr[4] = {"debug", "info", "warning", "error"};
	
	for (int i = 0; i < 4; i++)	{
		if (arr[i].compare(level) == 0){
			(this->*funcs[i])();
			return ;
		}
	}
	return ;
}
