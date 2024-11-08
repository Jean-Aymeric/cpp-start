//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_SHOW_H_
#define JAD_S_SHOW_SHOW_SHOW_H_

#include "IShow.h"

namespace show {
	class Show : public IShow {
	  private:
		std::string name_;
		std::string description_;
		const ShowType *showType_;

	  public:
		Show(std::string name, std::string description, const ShowType *showType);
		~Show() = default;
		[[nodiscard]] std::string getName() const override;
		[[nodiscard]] std::string getDescription() const override;
		[[nodiscard]] const ShowType *getShowType() const override;
	};
}
#endif //JAD_S_SHOW_SHOW_SHOW_H_
