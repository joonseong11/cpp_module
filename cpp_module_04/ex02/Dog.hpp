#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(const Dog& src);
		~Dog(void);
		Dog& operator=(Dog const& rhs);

		void	makeSound(void) const;
        std::string getIdeas(int i);
        void setIdeas(int i, std::string str);
};
#endif