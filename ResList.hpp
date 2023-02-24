#ifndef ResList_hpp
#define ResList_hpp
#include <string>

class RList
{
private:

    typedef struct Rnode
    {
        //std::string data;
        //node* next;
        std::string name;
        std::string vehicleRented;
        //std::string model;
        // enum VehicleType { sedan, suv, exotic } Vehicle;
        //std::string Vehicle;
        //std::string pricePerDay;
        //bool isAvailable;
        //bool SetAvailable;
        Rnode* next;
    }* RnodePtr;

    //typedef struct Rnode* RnodePtr;

    RnodePtr Rhead;       // head node pointer
    RnodePtr Rcurr;       // current node pointer
    RnodePtr Rtemp;       // temp node pointer

public:

    RList();
    void AddNode(std::string name, std::string vehicleRented);
    void PrintList();
    void DeleteNode(std::string name);
    //void AddNode(std::string platenumber, std::string make, std::string model, std::string Vehicle, std::string priceperday, bool isAvailable);
    //void DeleteNode(std::string delData);
    //void DeleteNode(std::string platenumber, std::string make, std::string model, std::string Vehicle, std::string priceperday, bool isAvailable)
    //void DeleteNode(std::string platenumber);
    //void PrintList();
};

#endif