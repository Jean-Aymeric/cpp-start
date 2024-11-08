//
// Created by JAD on 08/11/2024.
//

#include "ConcertShow.h"

namespace show {
	ConcertShow::ConcertShow(std::string name, std::string description, ShowType *showType, std::string artist) :
		Show(name, description, showType) {
		this->artist_ = std::move(artist);
	}

	std::string ConcertShow::getArtist() const {
		return this->artist_;
	}
} // show