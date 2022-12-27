#ifndef Jujeon_HPP
# define Jujeon_HPP

class Jujeon
{
	private:
	public:
		Jujeon(void);
		Jujeon(const Jujeon& src);
		virtual ~Jujeon(void);
		Jujeon& operator=(Jujeon const& rhs);
};

#endif
