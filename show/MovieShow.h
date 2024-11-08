//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_MOVIESHOW_H_
#define JAD_S_SHOW_SHOW_MOVIESHOW_H_
#include <vector>
#include "Show.h"
#include "MovieType.h"

namespace show {
	class MovieShow : Show {
	  private:
		MovieType *movieType_;
		std::string director_;
		std::vector<std::string> actors_;
	  public:
		MovieShow(std::string name,
				  std::string description,
				  ShowType *showType,
				  MovieType *movieType,
				  std::string director,
				  std::vector<std::string> actors);
		[[nodiscard]] MovieType *getMovieType() const;
		[[nodiscard]] std::string getDirector() const;
		[[nodiscard]] std::vector<std::string> getActors() const;
	};
}

#endif //JAD_S_SHOW_SHOW_MOVIESHOW_H_