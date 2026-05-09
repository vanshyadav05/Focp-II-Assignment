#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
using namespace std;

class MovieTicket {
private:
    unordered_map<int, unordered_set<int>> bookings;
    unordered_map<int, int> bookedCount;

public:
    bool BOOK(int userId, int movieId) {
        if (bookings[movieId].count(userId) || bookedCount[movieId] >= 100)
            return false;

        bookings[movieId].insert(userId);
        bookedCount[movieId]++;
        return true;
    }

    bool CANCEL(int userId, int movieId) {
        if (!bookings[movieId].count(userId))
            return false;

        bookings[movieId].erase(userId);
        bookedCount[movieId]--;
        return true;
    }

    bool IS_BOOKED(int userId, int movieId) {
        return bookings[movieId].count(userId);
    }

    int AVAILABLE_TICKETS(int movieId) {
        return 100 - bookedCount[movieId];
    }
};

int main() {
    int Q;
    cin >> Q;
    cin.ignore();

    MovieTicket mt;

    while (Q--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string query;
        ss >> query;

        if (query == "BOOK") {
            int x, y;
            ss >> x >> y;
            cout << (mt.BOOK(x, y) ? "true" : "false") << endl;
        }
        else if (query == "CANCEL") {
            int x, y;
            ss >> x >> y;
            cout << (mt.CANCEL(x, y) ? "true" : "false") << endl;
        }
        else if (query == "IS_BOOKED") {
            int x, y;
            ss >> x >> y;
            cout << (mt.IS_BOOKED(x, y) ? "true" : "false") << endl;
        }
        else if (query == "AVAILABLE_TICKETS") {
            int y;
            ss >> y;
            cout << mt.AVAILABLE_TICKETS(y) << endl;
        }
    }

    return 0;
}