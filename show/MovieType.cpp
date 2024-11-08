//
// Created by JAD on 08/11/2024.
//

#include "MovieType.h"

#include <utility>

namespace show {
	MovieType::MovieType(std::string name) {
		this->name_ = std::move(name);
	}

	std::string MovieType::getName() const {
		return this->name_;
	}

	const MovieType MovieType::ACTION = MovieType("Action");
	const MovieType MovieType::ADVENTURE = MovieType("Adventure");
	const MovieType MovieType::COMEDY = MovieType("Comedy");
	const MovieType MovieType::DRAMA = MovieType("Drama");
	const MovieType MovieType::FANTASY = MovieType("Fantasy");
	const MovieType MovieType::HORROR = MovieType("Horror");
	const MovieType MovieType::ROMANCE = MovieType("Romance");
	const MovieType MovieType::SCIENCE_FICTION = MovieType("Science Fiction");
	const MovieType MovieType::THRILLER = MovieType("Thriller");
} // show