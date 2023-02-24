/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: benja
 *
 * Created on February 15, 2021, 7:01 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <stdio.h>
#include <list>
#include <string.h>
#include <ctype.h>
#include <algorithm>
//#include "List.hpp"
#include "CarList.hpp"
#include "ResList.hpp"

using namespace std;
list<string> car_list = {};
List stock;
RList Reser;

class Cars
{
    
public:
    
  enum cartype
  {
    sedan, suv, exotic
  };
    
    struct Car
    {
        string platenumber;
        string make;
        string model;
        //enum VehicleTypes { sedan, suv, exotic } Vehicle;
        string Vehicle;
        string pricePerDay;
        bool isAvailable;
    public:
        bool SetAvailable;              
    } CarInfo;
    
       
    void VecInfo (void)
    {
        string YesNo;
        string temp;
        string type;
        bool temp1;
       
      //enum VehicleTypes { sedan, suv, exotic } Vehicle;//        List stock;
        
        cout << "Enter in a plate number: ";
        cin >> CarInfo.platenumber;
        // if (CarInfo.platenumber == "cancel")
//        {
//          return;
//        }
        //stock.AddNode(CarInfo.platenumber);
//        List stock;
        car_list.push_back(CarInfo.platenumber);
        
        
        cout << "Enter in a make: ";
        cin >> CarInfo.make;
        //stock.AddNode (CarInfo.make);
        
        cout << "Enter in a model: ";
        cin >> CarInfo.model;
        //stock.AddNode (CarInfo.model);
        //car_list.push_back(CarInfo.model);
        
        
        cout << "Enter in a vehicle type (sedan, suv, exotic):  ";
        cin >> type;
        if ( type == "sedan")
          {
            type = "0";
            if (stoi(type) == sedan )
              {
                CarInfo.Vehicle = "sedan";
              }
            
          }
        else if (type == "suv")
          {
            type = "1";
            if (stoi(type) == suv )
              {
                CarInfo.Vehicle = "suv";
              }
         
          }
        else if (type == "exotic") 
          {
            type = "2";
            if (stoi(type) == exotic )
              {
                CarInfo.Vehicle = "exotic";
              }
                      
          }
        
        
        cout << "Enter in a price per day: ";
        cin >> CarInfo.pricePerDay;
        temp = CarInfo.pricePerDay;
        //stock.AddNode (CarInfo.pricePerDay);
        car_list.push_back(temp);
        
        
        cout << "Is available yes or no: ";
        cin >> YesNo;
//        if(YesNo == "yes" || "Yes")
//          {
//            stock.AddNode ("Yes");
//          }
//        else
//          {
//            stock.AddNode ("No");
//          }
       
//        if (YesNo == "yes" || "Yes" || "YES")
        if (YesNo == "yes")
        {
            CarInfo.SetAvailable = true;
            CarInfo.isAvailable = CarInfo.SetAvailable;
            temp1 = CarInfo.SetAvailable;
            //stock.AddNode ("Yes");
            car_list.push_back(to_string((int)temp1));
            
        }
        else
        {
            CarInfo.SetAvailable = false;
            CarInfo.isAvailable = CarInfo.SetAvailable;
            temp1 = CarInfo.SetAvailable;
            //stock.AddNode ("No");
            car_list.push_back(to_string((int)temp1));
            
        }
        
        stock.AddNode (CarInfo.platenumber,CarInfo.make,CarInfo.model,CarInfo.Vehicle,CarInfo.pricePerDay,CarInfo.isAvailable);
        
        system("CLS"); 
      
    }
    
    void DeleteRecord(void)
    {
      string myplatenumber;
      
      cout << "Enter plate number to delete: ";
      cin >> myplatenumber;
      stock.DeleteNode (myplatenumber);
              
    }
  
    
};

class Reservations 
{
public:
    struct ResInfo
    {
        string name;
        string vehicleRented;
        
    }ResInfo;
    
    
    void GetRes(void)
    {
      cout << "Enter your name: ";
      cin >> ResInfo.name;
      
    }
    
    void VehicleSel(void)
    {
      cout << "Enter a platenumber to choose your vehicle: ";
      cin >> ResInfo.vehicleRented;
      stock.Available(ResInfo.vehicleRented);
    }
    
    
    
};

class program
{
public:
    
    
    
    void MainMenu(void)
    {
        cout << "**** Main Menu ****" << endl << endl;
        cout << "1. List all cars" << endl;
        cout << "2. Add car to inventory" << endl;
        cout << "3. Remove car from inventory" << endl;
        cout << "4. List all reservations" << endl;
        cout << "5. Add a reservation" << endl;
        cout << "6. Cancel a reservation" << endl;
        cout << "7. Exit" << endl;
    
    }
    
    int UserInput(void)
    {
        int selection;
        cout  << "\nEnter your selection: ";
        cin >> selection;
        return selection;
        
    }

    void GetItemAtIndex(void)
    {
        
    }
    
    void ResMenu(void)
    {
        cout << "**** Reservation Menu ****" << endl << endl;
        cout << "5. Add Another Reservation" << endl;
        cout << "9. Return To Main Menu" << endl;
//        cout << "3. Remove car from inventory" << endl;
//        cout << "4. List all reservations" << endl;
//        cout << "5. Add a reservation" << endl;
//        cout << "6. Cancel reservation" << endl;
//        cout << "7. Exit" << endl;
    
    }
    
  
};


/*
 * 
 * 
 */
int main(int argc, char** argv) 

{

    int choice, check;
    program Menu;
    Cars car;
    Reservations Reservation;
    
    
    
//      List stock;
//      stock.AddNode(car.CarInfo.platenumber);
//    stock.AddNode();
//    stock.AddNode();
      
    
    
    car.CarInfo.isAvailable = true;
    
//    TestUnorderedList("array");
    
    Menu.MainMenu();
    choice = Menu.UserInput();
    
    
    
    while(1)
    {
        switch(choice)
        {
            case 1:
            {
              system("CLS");
             
              
               
//                for (string x : car_list) 
//                {
//		cout << x << '\n';
//                }
              
              
//                    List stock;
//                    stock.AddNode(car.CarInfo.platenumber);
//                    stock.AddNode (car.CarInfo.model);
//                    stock.AddNode (car.CarInfo.pricePerDay);
                    stock.PrintList();
              
                Menu.MainMenu();
                choice = Menu.UserInput();
                break;
            }
                
            case 2:
                system("CLS");
//                cout << "two" << endl;
                 
                car.VecInfo();
                Menu.MainMenu();
                choice = Menu.UserInput();
                break;
            case 3:
                system("CLS");
//                cout << "three" << endl;
                car.DeleteRecord();
                Menu.MainMenu();
                choice = Menu.UserInput();
                break;
            case 4:
                system("CLS");
//                cout << "four" << endl;
                Reser.PrintList();
                //stock.PrintList ();
                cout << endl;
                Menu.MainMenu();
                choice = Menu.UserInput();
                break;
            case 5:
                system("CLS");
//                cout << "five" << endl;
                Reservation.GetRes();  // prompt for your name
                check = stock.PrintAvailable(); // print available vehicles
                if ( check == 1)
                  {
                Reservation.VehicleSel(); // prompt for platenumber
                Reser.AddNode (Reservation.ResInfo.name, Reservation.ResInfo.vehicleRented ); //add information to our list
                  }
                Menu.ResMenu (); // display reservation menu
                choice = Menu.UserInput(); // return menu choice.
                break;    
            case 6:
                system("CLS");
//                cout << "six" << endl;
                Reservation.GetRes();
                Reser.DeleteNode(Reservation.ResInfo.name);
                Menu.MainMenu();
                choice = Menu.UserInput();
                break;    
            case 7:
                cout << "exit" << endl;
                abort(); 
                break;
//            case 8:
//                cout << "eight" << endl;
//                  Reser.AddNode(Reservation.ResInfo.name, Reservation.ResInfo.vehicleRented);
//                //Reservation.VehicleSel ();
//                Menu.ResMenu ();             
//                choice = Menu.UserInput();
//                //abort(); 
//                break;
            case 9:
                cout << "cancel" << endl;
                Menu.MainMenu();
                choice = Menu.UserInput();
////                abort(); 
                break;    
            default:
                system("CLS");
                cout << "invalid entry. Please try again!\n" << endl;
                Menu.MainMenu();
                choice = Menu.UserInput();
        }    
    }
            
    
    return 0;
}

