#pragma once
#include "Periphery.h"
#include <string>

class Keyboard : public Periphery {
private:
	std::string type;
public:
	std::string getType() const;
	Keyboard* setType(std::string);
	std::string toString() const override;

	Keyboard() {}
	Keyboard(const Keyboard& other) : type{ other.type } {}
	Keyboard(Keyboard&& other) noexcept : type{ other.type } {}
	~Keyboard() {}
};