//
// Created by JAD on 08/11/2024.
//

#include "StreetShow.h"

using namespace show;

StreetShow::StreetShow(std::string name,
					   std::string description,
					   std::vector<std::string> *performers) : Show(name, description, &ShowType::STREET_SHOW) {
	this->performers_ = std::move(performers);
}

std::vector<std::string> *StreetShow::getPerformers() const {
	return this->performers_;
}

