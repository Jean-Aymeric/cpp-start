//
// Created by JAD on 08/11/2024.
//

#ifndef JAD_S_SHOW_SHOW_CONCERTSHOW_H_
#define JAD_S_SHOW_SHOW_CONCERTSHOW_H_

#include <string>
#include "ShowType.h"
#include "Show.h"

namespace show {

	class ConcertShow : public Show {
	  private:
		std::string artist_;
	  public:
		ConcertShow(std::string name, std::string description, std::string artist);
		[[nodiscard]] std::string getArtist() const;
	};

} // show

#endif //JAD_S_SHOW_SHOW_CONCERTSHOW_H_
