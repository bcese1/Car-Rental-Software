#include <cstdlib>
#include <iostream>

#include "CarList.hpp"

using namespace std; 

List::List()
{
    head = NULL;        // head pointer set to null
    curr = NULL;        // current pointer set to nul
    temp = NULL;        // temp pointer set to null
}

void List::AddNode(string platenumber, string make, string model, 
                   string Vehicle, string priceperday, bool isAvailable)
                  
{
    nodePtr n = new node;
    n->next = NULL;                 // the next pointer of n points to null
    n->platenumber = platenumber;
    n->make = make;
    n->model = model;
    n->Vehicle = Vehicle;
    n->pricePerDay = priceperday;
    n->isAvailable = isAvailable;
    
    //n->SetAvailable = SetAvailable;
    
    
    
    if(head != NULL) // checks if a list is already setup and has data
    {
        curr = head;
        
        while(curr->next != NULL) // are we at the end of the list
        {
            curr = curr->next;
        }
        curr->next = n;
    }
    else
    {
        head = n;
        
    }
}

void List::PrintList()
{
  curr = head;
//  while(curr != NULL)
//    {
//      cout << curr->data << endl;
//      curr = curr->next;
//    }
  
//  if( curr->data == "")
    if( curr == NULL)
        {
          cout << "No data available!" << endl << endl;
//          system("pause");
          return;
        }
  while(curr != NULL)
    {
      
        cout << "platenumber: " << curr->platenumber << endl 
             << "make: " << curr->make<< endl
             << "model: " << curr->model << endl
             << "Vehicle Type: " << curr->Vehicle << endl
             << "Price Per Day: " << curr->pricePerDay << endl
             <<"Available: " << curr->isAvailable << endl << endl;
        curr = curr->next;
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

//void List::DeleteNode(std::string platenumber, std::string make, std::string model, std::string Vehicle, std::string priceperday, bool isAvailable)
void List::DeleteNode(std::string platenumber)
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->platenumber != platenumber)
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout << platenumber << " was not in the list" << endl;
        delete delPtr;
    }
    else
    {
        // delete platenumber
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        
       
        if(delPtr == head)
          {
            head = head->next;         
            temp = NULL;
          }
             
//      delete delPtr;
        cout << "The Value " << platenumber<< " was deleted" << endl;
    }
}


int List::PrintAvailable()
{
  curr = head;
  int my=0;
 
//  while(curr != NULL)
//    {
//      cout << curr->data << endl;
//      curr = curr->next;
//    }
  
//  if( curr->data == "")
    if( curr == NULL)
        {
          cout << "No data available!" << endl << endl;
          my = 1;
//          system("pause");
          
        }
  while(curr != NULL)
    {
      if (curr->isAvailable == 1 )
        {
        cout << endl << "platenumber: " << curr->platenumber << endl 
             << "make: " << curr->make<< endl
             << "model: " << curr->model << endl
             << "Vehicle Type: " << curr->Vehicle << endl
             << "Price Per Day: " << curr->pricePerDay << endl
             <<"Available: " << curr->isAvailable << endl << endl;
//        curr = curr->next;
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
        my = 1;
        }
      
      
      curr = curr->next;
    }
  
    if (my == 0 )
        {
          cout << "No data available!" << endl << endl;
        }
  return my;
}

void List::Available(string platenumber)
{
  curr = head;
//  while(curr != NULL)
//    {
//      cout << curr->data << endl;
//      curr = curr->next;
//    }
  
//  if( curr->data == "")
    if( curr == NULL)
        {
          cout << "No data available!" << endl << endl;
//          system("pause");
          return;
        }
  while(curr != NULL)
    {
      if (curr->platenumber == platenumber )
        {
          
          curr->isAvailable = 0;
//        cout << endl << "platenumber: " << curr->platenumber << endl 
//             << "make: " << curr->make<< endl
//             << "model: " << curr->model << endl
//             << "Vehicle Type: " << curr->Vehicle << endl
//             << "Price Per Day: " << curr->pricePerDay << endl
//             <<"Available: " << curr->isAvailable << endl << endl;
//        curr = curr->next;
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
      curr = curr->next;
    }
     
}

void List::LicenseList(string platenumber)
{
  curr = head;
//  while(curr != NULL)
//    {
//      cout << curr->data << endl;
//      curr = curr->next;
//    }
  
//  if( curr->data == "")
    if( curr == NULL)
        {
          cout << "No data available!" << endl << endl;
//          system("pause");
          return;
        }
  while(curr != NULL)
    {
      if (curr->platenumber == platenumber )
        {
          
//          curr->isAvailable = 0;
        cout << endl << "platenumber: " << curr->platenumber << endl 
             << "make: " << curr->make<< endl
             << "model: " << curr->model << endl
             << "Vehicle Type: " << curr->Vehicle << endl
             << "Price Per Day: " << curr->pricePerDay << endl
             <<"Available: " << curr->isAvailable << endl << endl;
//        curr = curr->next;
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
      curr = curr->next;
    }
     
}

void List::NowAvailable(string platenumber)
{
  curr = head;
//  while(curr != NULL)
//    {
//      cout << curr->data << endl;
//      curr = curr->next;
//    }
  
//  if( curr->data == "")
    if( curr == NULL)
        {
          cout << "No data available!" << endl << endl;
//          system("pause");
          return;
        }
  while(curr != NULL)
    {
      if (curr->platenumber == platenumber )
        {
          
          curr->isAvailable = 1;
//        cout << endl << "platenumber: " << curr->platenumber << endl 
//             << "make: " << curr->make<< endl
//             << "model: " << curr->model << endl
//             << "Vehicle Type: " << curr->Vehicle << endl
//             << "Price Per Day: " << curr->pricePerDay << endl
//             <<"Available: " << curr->isAvailable << endl << endl;
//        curr = curr->next;
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
      curr = curr->next;
    }
     
}
