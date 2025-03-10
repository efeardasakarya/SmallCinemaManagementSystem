#include "cinema.h"
using namespace std;

Cinema* Cinema::instance=nullptr; //initialization = ilk değer ataması



Cinema::Cinema()
 {
     /*
     Seat s1('A' , 1 , false );

     Seat s2('B',2,false);

     seats.push_back(s1);   // push_back önce nesneyi oluşturur sonra vektöre kopyalar.

                            // emplace_back nesneyi vektörün içinde oluşturur. Kopyalama yok. Daha optimize

    */

char rows[5]={'A','B','C','D','E'};

     for(int i=0 ; i< 5 ; i++)
     {

         for(int k=1 ; k<8 ; k++)
         {
             if( rows[i]=='E' && k<4 )
            {
               seats.emplace_back(rows[i],k,true);
            }

            else
             {
                 seats.emplace_back(rows[i],k,false);
             }

         }

     }


 }



 Cinema* Cinema::getInstance()
     {
         if(instance == nullptr)
         {
             instance = new Cinema();

         }
         return instance;
     }

     Seat* Cinema::findSeat(string SeatName)
     {
         for(auto& seat:seats)
         {
             if(seat.getSeatName() == SeatName)
             {
                 return &seat;
             }

         }
         return nullptr;
     }


     Seat* Cinema::findSeatbyCustomerName(string customerName)
     {
         for(auto& seat:seats)
         {
             if(seat.getCustomerName() == customerName)
             {
                 return &seat;
             }

         }
         return nullptr;
     }

     string Cinema::findSeatNamebyIndex(int a)
     {
         if (a >= 0 && a < seats.size()) {
             return seats[a].getSeatName();
         }
         return ""; // Geçersiz indeks durumunda boş string döner.
     }


     Cinema::~Cinema()
     {
        // Singleton örneğini silmeye gerek yok
     }
