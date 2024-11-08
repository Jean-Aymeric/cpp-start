//
// Created by JAD on 08/11/2024.
//

#include "Spectator.h"

#include <utility>

using namespace customer;

Spectator::Spectator(std::string firstName, std::string lastName) {
	this->firstName_ = std::move(firstName);
}

std::string Spectator::getFirstName() const {
	return this->firstName_;
}

std::string Spectator::getLastName() const {
	return this->lastName_;
}

void Spectator::watch() const {

}
