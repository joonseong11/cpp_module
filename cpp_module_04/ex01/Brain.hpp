#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string ideas[100];
 
	public:
		Brain(void);
		Brain(const Brain& src);
		virtual ~Brain(void);
		Brain& operator=(Brain const& rhs);
		std::string getIdeas(int i);
		void setIdeas(int i, std::string str);
};

Brain::Brain(void) {}
Brain::Brain(const Brain& src) {
	for (int i = 0; i< 100; i++) {
		ideas[i] = src.ideas[i];
	}
}
Brain::~Brain(void) {}
Brain& Brain::operator=(Brain const& rhs) {
	for (int i = 0; i< 100; i++) {
		ideas[i] = rhs.ideas[i];
	}
	return *this;
}
std::string Brain::getIdeas(int i){
	return ideas[i];
}
void Brain::setIdeas(int i, std::string str) {
	ideas[i] = str;
}
#endif