//
// Created by JAD on 08/11/2024.
//

#include "ShowType.h"

namespace show {
	ShowType::ShowType(std::string name) {
		this->name_ = name;
	}

	std::string ShowType::getName() const {
		return this->name_;
	}

	const ShowType ShowType::MOVIE = ShowType("Movie");
	const ShowType ShowType::STREET_SHOW = ShowType("Street Show");
	const ShowType ShowType::THEATER = ShowType("Theater");
	const ShowType ShowType::CONCERT = ShowType("Concert");
	const ShowType ShowType::OTHER = ShowType("Other");
} // show