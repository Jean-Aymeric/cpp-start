//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_STREETSHOW_H_
#define JAD_S_SHOW_SHOW_STREETSHOW_H_
#include <string>
#include <vector>
#include "Show.h"

namespace show {
	class StreetShow : Show {
	  private:
		std::vector<std::string> performers_;
	  public:
		StreetShow(std::string name, std::string description, ShowType *showType, std::vector<std::string> performers);
		[[nodiscard]] std::vector<std::string> getPerformers() const;
	};
}
#endif //JAD_S_SHOW_SHOW_STREETSHOW_H_
