//
// Created by JAD on 08/11/2024.
//

#include "MovieShow.h"

show::MovieShow::MovieShow(std::string name,
						   std::string description,
						   show::ShowType *showType,
						   show::MovieType *movieType,
						   std::string director,
						   std::vector<std::string> actors) : Show(name, description, showType) {
	this->movieType_ = movieType;
	this->director_ = std::move(director);
	this->actors_ = std::move(actors);
}

show::MovieType *show::MovieShow::getMovieType() const {
	return this->movieType_;
}

std::string show::MovieShow::getDirector() const {
	return this->director_;
}

std::vector<std::string> show::MovieShow::getActors() const {
	return this->actors_;
}
