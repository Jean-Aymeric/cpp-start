//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_THEATERSHOW_H_
#define JAD_S_SHOW_SHOW_THEATERSHOW_H_
#include <vector>
#include "Show.h"

namespace show {
	class TheaterShow : Show {
	  private:
		std::string director_;
		std::vector<std::string> actors_;
	  public:
		TheaterShow(std::string name,
					std::string description,
					ShowType *showType,
					std::string director,
					std::vector<std::string> actors);
		[[nodiscard]] std::string getDirector() const;
		[[nodiscard]] std::vector<std::string> getActors() const;
	};
}
#endif //JAD_S_SHOW_SHOW_THEATERSHOW_H_
