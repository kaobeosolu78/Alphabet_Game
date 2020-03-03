#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <string>

class storage
{
public:
	std::vector<std::string> alph, answers, spacing;
	int play, win; 

	storage();
	void process_response(std::string response);
	friend std::ostream& operator<<(std::ostream& os, const storage& st);
};

storage::storage() {answers = {"","","","","","","","","","","","","","","","","","","","","","","","","",""}; play = 1; win = 0; alph = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"}; }
std::ostream& operator<<(std::ostream& os, const storage& st) {
	for (int k = 0; k < static_cast<int>(st.alph.size())-1; k++) {
		std::string spacing(15-static_cast<int>(st.alph[k].length()),' ');
		os << st.alph[k] <<  " " << st.answers[k] 
		<< spacing << "|" << st.alph[k+1] << " " << st.answers[k+1];
		os << "\n";
		k++;
	}
	return os;
}

void storage::process_response(std::string response) {
	char one, two;
	for (int j = 0; j < static_cast<int>(alph.size()); j++) {
			if (std::tolower(*alph[j].c_str()) == std::tolower(response[0])){
				if (answers[j] != "") {
					std::string rep;
					std::cout << "There is already an answer for " << alph[j] << ". Would you like to replace it? y/n: ";
					std::cin >> rep;
					if (rep == "n") {
						std::cout << "\033[2J\033[1;1H";
						return;
					} 
				}
				answers[j] = response.substr(1,static_cast<int>(response.length()));
				std::cout << "\033[2J\033[1;1H";
				return;
			}
	}
	return;
}