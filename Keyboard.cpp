#include "Keyboard.h"
#include <format>

std::string Keyboard::getType() const {
	return type;
}

Keyboard* Keyboard::setType(std::string type) {
	this->type = type;
	return this;
}

std::string Keyboard::toString() const {
	return std::format(
		"{} {} hrn, type: {}, connection: {}",
		getName(),
		getPrice(),
		type,
		getconection()
	);
}