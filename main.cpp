#include "head.h"

int main() {
	storage store = storage();
	std::cout << "Type \"q\" to quit.\n";
	while (store.win != 26) {
		std::string response;
		std::cout << store;
		std::cin >> response;
		if (response == "q") return 1;
		store.process_response(response);
	}
	return 1;
}
