#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

class DiamondTrap
{
	private:
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap& src);
		virtual ~DiamondTrap(void);
		DiamondTrap& operator=(DiamondTrap const& rhs);
};

#endif