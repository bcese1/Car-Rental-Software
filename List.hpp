#ifndef List_hpp
#define List_hpp
#include <string>

class List
{
private:

    struct node
    {
        //std::string data;
        //node* next;
        std::string platenumber;
        std::string make;
        std::string model;
        enum VehicleType { sedan, suv, exotic } Vehicle;
        std::string pricePerDay;
        bool isAvailable;
        bool SetAvailable;
        node* next;
    };

    typedef struct node* nodePtr;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;

public:

    List();
    //void AddNode(std::string addData);
    void AddNode(std::string platenumber, std::string make, std::string model, int VehicleType, std::string priceperday, bool isAvailable, bool SetAvailable);
    //void DeleteNode(std::string delData);
    //void PrintList();
};

#endif
