#ifndef Converter_HPP
# define Converter_HPP

#include <string>
#include <iostream>
#include <cstring>
#include <cmath>
#include <tgmath.h>

class Converter
{
	private:
		double double_data;

	public:
		Converter(void);
		Converter(const Converter& src);
		~Converter(void);
		Converter& operator=(Converter const& rhs);
		Converter(const char* str);

		void toChar(void);
		void toInt(void);
		void toFloat(void);
		void toDouble(void);
};
#endif