//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_CUSTOMER_ISPECTATOR_H_
#define JAD_S_SHOW_CUSTOMER_ISPECTATOR_H_
#include <string>
#include "../show/IShow.h"

using namespace show;
namespace customer {
	class ISpectator {
	  public:
		[[nodiscard]] virtual std::string getFirstName() const = 0;
		[[nodiscard]] virtual std::string getLastName() const = 0;
		virtual void watch(IShow *show) const = 0;
	};
}

#endif //JAD_S_SHOW_CUSTOMER_ISPECTATOR_H_
