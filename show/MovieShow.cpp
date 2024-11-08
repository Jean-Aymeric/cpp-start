//
// Created by JAD on 08/11/2024.
//

#include "MovieShow.h"

using namespace show;

MovieShow::MovieShow(std::string name,
					 std::string description,
					 const show::MovieType *movieType,
					 std::string director,
					 std::vector<std::string> *actors) : Show(name, description, &ShowType::MOVIE) {
	this->movieType_ = movieType;
	this->director_ = std::move(director);
	this->actors_ = actors;
}

MovieType const *show::MovieShow::getMovieType() const {
	return this->movieType_;
}

std::string show::MovieShow::getDirector() const {
	return this->director_;
}

std::vector<std::string> *MovieShow::getActors() const {
	return this->actors_;
}
