#ifndef TICKET_BOOKING_SYSTEM_FOR_CINEMA_MOVIE_H
#define TICKET_BOOKING_SYSTEM_FOR_CINEMA_MOVIE_H
#include <string>
#include <vector>
class Movie {
        private:
        std::string title;
        int duration;
        std::string rating;
        std::vector<std::string> showtimes;
        public:

        Movie(const std::string &title, int duration, const std::string &rating)
        : title(title), duration(duration), rating(rating) {}

        const std::string &getTitle() const {
            return title;
        }

        int getDuration() const {
            return duration;
        }

        const std::string &getRating() const {
            return rating;
        }

        const std::vector<std::string> &getShowtimes() const {
            return showtimes;
        }

        void addShowtime(const std::string &showtime) {
            showtimes.push_back(showtime);
        }

};
#endif //TICKET_BOOKING_SYSTEM_FOR_CINEMA_MOVIE_H
