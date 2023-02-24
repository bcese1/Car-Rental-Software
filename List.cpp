#include <cstdlib>
#include <iostream>

#include "List.hpp"

using namespace std;

List::List()
{
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode(string platenumber, string make, string model, int VehicleType, string priceperday, bool isAvailable, bool SetAvailable  )
{
    nodePtr n = new node;
    n->next = NULL;
    n->platenumber = platenumber;
    n->platenumber = platenumber;
    
    
    if(head != NULL)
    {
        curr = head;
        while(curr->next != NULL)
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

void List::DeleteNode(string delData)
{
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->data != delData)
    {
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        cout << delData << "was not in the list" << endl;
        delete delPtr;
    }
    else
    {
        // delete platenumber
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        
        nodePtr delPtr = NULL;
        temp = head;
        curr = head;
        
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        
//        nodePtr delPtr = NULL;
        temp = head;
        curr = head;
         
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        
         temp = head;
        curr = head;
         
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        
         temp = head;
        curr = head;
         
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        
        temp = head;
        curr = head;
         
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
      
        
        if(delPtr == head)
          {
            head = head->next;
            head = head->next;
            head = head->next;
            head = head->next;
            head = head->next;
            head = head->next;
            
            temp = NULL;
          }
             
//      delete delPtr;
        cout << "The Value " << delData << " was deleted" << endl;
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
      
        cout << "platenumber: " << curr->data << endl;
        curr = curr->next;
        cout << "make: " << curr->data << endl;
        curr = curr->next;
        cout << "model: " << curr->data << endl;
        curr = curr->next;
        cout << "Vehicle Type: " << curr->data << endl; 
        curr = curr->next;
        cout << "Price Per Day: " << curr->data << endl;
        curr = curr->next;
        cout <<"Available: " << curr->data << endl << endl;
        curr = curr->next;
//          cout << curr->data << endl;    
//          curr = curr->next;
    }
     
}

