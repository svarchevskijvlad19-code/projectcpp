#include "Mouse.h"
#include <format>
#include <stdexcept>

int Mouse::getDpi() const {
	return dpi;
}

Mouse* Mouse::setDpi(int dpi) {
	if (dpi <= 0) {
		throw std::range_error(
			std::format("Mouse::setDpi: DPI must be positive, but got {}", dpi)
		);
	}
	this->dpi = dpi;
	return this;
}

std::string Mouse::toString() const {
	return std::format(
		"{} {} hrn, DPI: {}, connection: {}",
		getName(),
		getPrice(),
		dpi,
		getconection()
	);
}