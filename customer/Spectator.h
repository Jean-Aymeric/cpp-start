//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_CUSTOMER_SPECTATOR_H_
#define JAD_S_SHOW_CUSTOMER_SPECTATOR_H_

#include "ISpectator.h"

namespace customer {
	class Spectator : ISpectator {
	  private:
		std::string firstName_;
		std::string lastName_;
	  public:
		Spectator(std::string firstName, std::string lastName);
		[[nodiscard]] std::string getFirstName() const override;
		[[nodiscard]] std::string getLastName() const override;
		void watch() const override;

	};
}

#endif //JAD_S_SHOW_CUSTOMER_SPECTATOR_H_
