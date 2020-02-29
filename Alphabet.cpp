#include <vector>
#include <string>
#include <iostream>

class storage
{
public:
	std::vector<std::string> alph;
	storage();
	friend std::ostream& std::operator<<(std::ostream& os, const storage& st);
}
storage::storage() {alph = {"A B C D E F G H I J K L M N O P Q R S T U v W X Y Z"};}
std::ostream& operator<<(std::ostream& os, const storage& st) {
	os << st.alph;
}

int main() {
	storage store = storage();
	std::cout << store.alph;
	return 1;
}