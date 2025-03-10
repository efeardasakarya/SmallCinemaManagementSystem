#ifndef SEAT_H
#define SEAT_H

#include <string>
using namespace std;

class Seat
{
private:
    char Row;
    int  Number;
    string SeatName;    //constructor içinde belirlenecek
    bool isDisabled;
    bool isPurchased;
    int  Price;         //constructor içinde belirlenecek
    string customerName;
    int Extras;
    int Amount;


public:
    Seat(char row , int  number , bool isdisabled );


    void PurchaseSeat(const string& name);

    void CancelPurchase();

    void AddExtras(int amount);

    string getSeatName();


    string getCustomerName();


    bool getIsSeatPurchased();

    bool getIsDisabled();
    void setIsDisabled();

    int getTotalAmount();
    void setTotalAmount(int a);

    void SetExtras(int a);




};

#endif // SEAT_H
