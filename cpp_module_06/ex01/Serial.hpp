#ifndef SERIAL_HPP
# define SERIAL_HPP

#include <cstdint>

class Serial
{
	private:
	public:
		Serial(void);
		Serial(const Serial& src);
		virtual ~Serial(void);
		Serial& operator=(Serial const& rhs);

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
		
};

struct Data
{
	int data;
};

#endif