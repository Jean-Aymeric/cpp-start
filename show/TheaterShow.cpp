//
// Created by JAD on 08/11/2024.
//

#include "TheaterShow.h"

show::TheaterShow::TheaterShow(std::string name,
							   std::string description,
							   show::ShowType *showType,
							   std::string director,
							   std::vector<std::string> actors) : Show(name, description, showType) {
	this->director_ = std::move(director);
	this->actors_ = std::move(actors);
}

std::string show::TheaterShow::getDirector() const {
	return this->director_;
}

std::vector<std::string> show::TheaterShow::getActors() const {
	return this->actors_;
}
