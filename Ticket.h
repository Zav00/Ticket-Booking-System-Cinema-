#ifndef TICKET_BOOKING_SYSTEM_FOR_CINEMA_TICKET_H
#define TICKET_BOOKING_SYSTEM_FOR_CINEMA_TICKET_H
#include "Movie.h"
class Ticket {
private:
    Movie movie;
    std::string showtime;
    std::string seatNumber;
public:
    Ticket(const Movie &movie, const std::string &showtime, const std::string &seatNumber)
            : movie(movie), showtime(showtime), seatNumber(seatNumber) {}

    const Movie &getMovie() const {
        return movie;
    }

    const std::string &getShowtime() const {
        return showtime;
    }

    const std::string &getSeatNumber() const {
        return seatNumber;
    }
};
#endif //TICKET_BOOKING_SYSTEM_FOR_CINEMA_TICKET_H
