#ifndef CONVERT_HPP
# define CONVERT_HPP

class Convert
{
	private:
	public:
		Convert(void);
		Convert(const Convert& src);
		virtual ~Convert(void);
		Convert& operator=(Convert const& rhs);
};

#endif