#include "Periphery.h"
#include <format>

std::string Periphery::getconection() const {
	return conection;
}

Periphery* Periphery::setconection(std::string conection) {
	this->conection = conection;
	return this;
}

std::string Periphery::toString() const {
	return std::format(
		"{} {} hrn, connection: {}",
		getName(),
		getPrice(),
		conection
	);
}