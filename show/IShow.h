//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_ISHOW_H_
#define JAD_S_SHOW_SHOW_ISHOW_H_

#include <string>
#include "ShowType.h"

namespace show {
	class IShow {
	  public:
		[[nodiscard]] virtual std::string getName() const = 0;
		[[nodiscard]] virtual std::string getDescription() const = 0;
		[[nodiscard]] virtual ShowType *getShowType() const = 0;
	};
}

#endif //JAD_S_SHOW_SHOW_ISHOW_H_
