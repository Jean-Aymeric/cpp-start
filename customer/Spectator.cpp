//
// Created by JAD on 08/11/2024.
//

#include "Spectator.h"

#include <utility>
#include <iostream>

using namespace customer;
using namespace show;

Spectator::Spectator(std::string firstName, std::string lastName) {
	this->firstName_ = std::move(firstName);
	this->lastName_ = std::move(lastName);
}

std::string Spectator::getFirstName() const {
	return this->firstName_;
}

std::string Spectator::getLastName() const {
	return this->lastName_;
}

void Spectator::watch(IShow *show) const {
	std::cout << this->firstName_ << " " << this->lastName_ << " is watching the show." << std::endl;
	std::cout << "\t" << show->getName() << " - " << show->getDescription() << std::endl;
}
