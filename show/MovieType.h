//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_MOVIETYPE_H_
#define JAD_S_SHOW_SHOW_MOVIETYPE_H_

#include <string>

namespace show {

	class MovieType {
	  public:
		static const MovieType ACTION;
		static const MovieType ADVENTURE;
		static const MovieType COMEDY;
		static const MovieType DRAMA;
		static const MovieType FANTASY;
		static const MovieType HORROR;
		static const MovieType ROMANCE;
		static const MovieType SCIENCE_FICTION;
		static const MovieType THRILLER;
	  private:
		std::string name_;

	  public:
		explicit MovieType(std::string name);
		[[nodiscard]] std::string getName() const;
	};

} // show

#endif //JAD_S_SHOW_SHOW_MOVIETYPE_H_
