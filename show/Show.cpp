//
// Created by JAD on 08/11/2024.
//

#include "Show.h"

#include <utility>

using namespace show;

Show::Show(std::string name, std::string description, ShowType *showType) {
	this->name_ = std::move(name);
	this->description_ = std::move(description);
	this->showType_ = showType;
}

std::string Show::getName() const {
	return this->name_;
}

std::string Show::getDescription() const {
	return this->description_;
}

ShowType *Show::getShowType() const {
	return this->showType_;
}
