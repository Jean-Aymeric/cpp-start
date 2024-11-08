//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_SHOWTYPE_H_
#define JAD_S_SHOW_SHOW_SHOWTYPE_H_

#include <string>

namespace show {

	class ShowType {
	  public:
		static const ShowType MOVIE;
		static const ShowType STREET_SHOW;
		static const ShowType THEATER;
		static const ShowType CONCERT;
		static const ShowType OTHER;

		[[nodiscard]] std::string getName() const;
	  private:
		std::string name_;
		explicit ShowType(std::string name);
	};

} // show

#endif //JAD_S_SHOW_SHOW_SHOWTYPE_H_
