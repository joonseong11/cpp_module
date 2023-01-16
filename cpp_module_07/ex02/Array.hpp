#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T data;
	public:
		Array(void) {
			data = new [];
		};
		Array(unsigned int n) {
			T array[n] = new []; 
		};
		Array(const Array& src);
		virtual ~Array(void);
		Array& operator=(Array const& rhs);
};

template <typename T>
Array::Array(void) {
			data = new [];
		};
#endif