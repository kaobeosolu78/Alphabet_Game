#include "head.h"

int main() {
	storage store = storage();
	while (store.win != 26) {
		std::string response;
		std::cout << store;
		std::cin >> response;
		store.process_response(response);
	}
	return 1;
}
