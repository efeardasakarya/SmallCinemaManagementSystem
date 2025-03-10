#ifndef CINEMA_H
#define CINEMA_H
#include "seat.h"
#include <vector>
using namespace std;
class Cinema
{
private:
    static Cinema* instance;
    vector<Seat> seats;

    Cinema();   // Private constructor for singleton pattern


public:
    static Cinema* getInstance();

    Seat* findSeat(string SeatName);
    string findSeatNamebyIndex(int a);
    Seat* findSeatbyCustomerName(string customerName);

    ~Cinema();
};

#endif // CINEMA_H
