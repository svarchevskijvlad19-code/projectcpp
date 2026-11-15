#pragma once
#include "Periphery.h"
#include <stdexcept>
#include <format>

class Mouse : public Periphery {
private:
	int dpi;
public:
	int getDpi() const;
	Mouse* setDpi(int dpi);
	std::string toString() const override;

	Mouse() : dpi{ 800 } {}
	Mouse(int dpi) {
		setDpi(dpi);
	}
	Mouse(const Mouse& other) : dpi{ other.dpi } {}
	Mouse(Mouse&& other) noexcept : dpi{ other.dpi } {}
	~Mouse() {}
};