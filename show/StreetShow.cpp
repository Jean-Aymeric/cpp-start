//
// Created by JAD on 08/11/2024.
//

#include "StreetShow.h"

using namespace show;

show::StreetShow::StreetShow(std::string name,
							 std::string description,
							 show::ShowType *showType,
							 std::vector<std::string> performers) : Show(name, description, showType) {
	this->performers_ = std::move(performers);
}

std::vector<std::string> show::StreetShow::getPerformers() const {
	return this->performers_;
}

