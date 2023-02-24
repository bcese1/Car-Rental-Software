#include <cstdlib>
#include <iostream>

#include "ResList.hpp"
#include "CarList.hpp"

extern List stock;
using namespace std; 

RList::RList()
{
    Rhead = NULL;        // head pointer set to null
    Rcurr = NULL;        // current pointer set to nul
    Rtemp = NULL;        // temp pointer set to null
}

void RList::AddNode(std::string name, std::string vehicleRented)
{
  RnodePtr n = new Rnode;
  n->next = NULL;                 // the next pointer of n points to null
  n->name = name;
  n->vehicleRented = vehicleRented;
  
  if(Rhead != NULL) // checks if a list is already setup and has data
    {
        Rcurr = Rhead;
        
        while(Rcurr->next != NULL) // are we at the end of the list
        {
            Rcurr = Rcurr->next;
        }
        Rcurr->next = n;
    }
    else
    {
        Rhead = n;
        
    }
}

void RList::PrintList()
{
  Rcurr = Rhead;
//  while(curr != NULL)
//    {
//      cout << curr->data << endl;
//      curr = curr->next;
//    }
  
//  if( curr->data == "")
    if( Rcurr == NULL)
        {
          cout << "No data available!" << endl << endl;
//          system("pause");
          return;
        }
  while(Rcurr != NULL)
    {
      
        cout << "name: " << Rcurr->name << endl 
             << "Vehicle Rented: " << Rcurr->vehicleRented << endl;
            stock.LicenseList(Rcurr->vehicleRented);
//             << "model: " << curr->model << endl
//             << "Vehicle Type: " << curr->Vehicle << endl
//             << "Price Per Day: " << curr->pricePerDay << endl
//             <<"Available: " << curr->isAvailable << endl << endl;
        Rcurr = Rcurr->next;
//        cout << "make: " << curr->make<< endl;
//        curr = curr->next;
//        cout << "model: " << curr->model << endl;
//        curr = curr->next;
//        cout << "Vehicle Type: " << curr->Vehicle << endl; 
//        curr = curr->next;
//        cout << "Price Per Day: " << curr->pricePerDay << endl;
//        curr = curr->next;
//        cout <<"Available: " << curr->isAvailable << endl << endl;
//        curr = curr->next;
//          cout << curr->data << endl;    
//          curr = curr->next;
    }
     
}

void RList::DeleteNode(std::string name)
{
    RnodePtr delPtr = NULL;
    Rtemp = Rhead;
    Rcurr = Rhead;
    while(Rcurr != NULL && Rcurr->name != name)
    {
        Rtemp = Rcurr;
        Rcurr = Rcurr->next;
    }
    if(Rcurr == NULL)
    {
        cout << name << " was not in the list" << endl;
        delete delPtr;
    }
    else
    {
        // delete platenumber
        stock.NowAvailable(Rcurr->vehicleRented);
        delPtr = Rcurr;
        Rcurr = Rcurr->next;
        Rtemp->next =Rcurr;
        delete delPtr;
        
       
        if(delPtr == Rhead)
          {
            Rhead = Rhead->next;         
            Rtemp = NULL;
          }
             
//      delete delPtr;
        cout << "The Reservation for " << name<< " was deleted" << endl;
    }
}