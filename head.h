#pragma once
#include <vector>
#include <string>
#include <iostream>

class storage
{
public:
	std::vector<std::string> alph;
	storage();
	friend std::ostream& operator<<(std::ostream& os, const storage& st);
};
storage::storage() {alph = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"}; }
std::ostream& operator<<(std::ostream& os, const storage& st) {
	for (int k = 0; k < static_cast<int>(st.alph.size()); k++) {
		os << st.alph[k];
		os << "\n";
	}
	return os;
}
