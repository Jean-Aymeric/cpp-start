//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_CUSTOMER_ISPECTATOR_H_
#define JAD_S_SHOW_CUSTOMER_ISPECTATOR_H_
#include <string>

namespace customer {
	class ISpectator {
	  public:
		virtual std::string getFirstName() const = 0;
		virtual std::string getLastName() const = 0;
		virtual void watch() const = 0;
	};
}

#endif //JAD_S_SHOW_CUSTOMER_ISPECTATOR_H_
