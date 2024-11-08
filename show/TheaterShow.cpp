//
// Created by JAD on 08/11/2024.
//

#include "TheaterShow.h"

using namespace show;

TheaterShow::TheaterShow(std::string name,
						 std::string description,
						 std::string director,
						 std::vector<std::string> *actors) : Show(name, description, &ShowType::THEATER) {
	this->director_ = std::move(director);
	this->actors_ = std::move(actors);
}

std::string show::TheaterShow::getDirector() const {
	return this->director_;
}

std::vector<std::string> *TheaterShow::getActors() const {
	return this->actors_;
}
