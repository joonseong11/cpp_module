#include "sed.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "you need more arguments" << std::endl;
		return 0;
	}

	std::string filename(argv[1]);
	std::string newname(filename); 
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string data;
	size_t index;

	std::ifstream in(filename);
	newname.append(".replace");
	std::ofstream out(newname, std::ios::app);

	if (!in.is_open()) {
		std::cout << "file doesn't exist or cannot open the file" << std::endl;
		return 0;
	}
	if (!out.is_open())	{
		std::cout << "cannot make or use outfile" << std::endl;
		in.close();
		return 0;
	}
	while (getline(in, data)) {
		index = 0;
		while(true)
		{
			index = data.find(s1, index);
			if (index != std::string::npos) {
				data.insert(index, s2);
				data.erase(index + s1.length(), s1.length());
			}
			else
				break;
		}
		out << data;
		if (!in.eof())
			out << '\n';
	}
	in.close();
	out.close();
	return 0;	
}
