#include <iostream>
#include "seat.h"


using namespace std;

Seat::Seat(char row , int  number , bool isdisabled)
{

    Row=row;
    Number=number;
    isDisabled = isdisabled;
    SeatName= string(1, Row) + to_string(Number);
    Price=50;
    customerName="";
    isPurchased=false;
    Extras=0;
    Amount=0;

        if(isDisabled)
        {
            Price /=2;
        }


        else
        {

        }


}

void Seat::PurchaseSeat(const string& name)
{
    if(!isPurchased)
    {
        isPurchased=true;
        customerName=name;
    }
    else
    {
        // Ekrana "Koltuk dolu!" şeklinde uyarı yaz.
    }

}

 bool Seat::getIsDisabled()
{
     return isDisabled;
}


void Seat::CancelPurchase()
{
    if(isPurchased)
    {
        isPurchased=false;
        customerName="";
        Extras=0;
    }
    else
    {
        // Ekrana "Koltuk zaten boş!" şeklinde uyarı yaz.
    }


}

int Seat::getTotalAmount()
{
    Amount = Price+Extras;
    return Amount;
}

void Seat::setTotalAmount(int a)
{
    Amount = a;
}

void Seat::AddExtras(int amount)
{

    Extras += amount;

}

void Seat::SetExtras(int a)
{
    Extras = a;
}

string Seat::getSeatName()
{
    return SeatName;
}


string Seat::getCustomerName()
{
    return customerName;
}


bool Seat::getIsSeatPurchased()
{
    return isPurchased;
}

