#include "head.h"

void storage::process_response(std::string response) {
	answers[current] = response.substr(1,static_cast<int>(response.length()));
	return
}