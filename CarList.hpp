#ifndef CarList_hpp
#define CarList_hpp
#include <string>

class List
{
private:

    typedef struct node
    {
        //std::string data;
        //node* next;
        std::string platenumber;
        std::string make;
        std::string model;
        // enum VehicleType { sedan, suv, exotic } Vehicle;
        std::string Vehicle;
        std::string pricePerDay;
        bool isAvailable;
        //bool SetAvailable;
        node* next;
    }* nodePtr;

    //typedef struct node* nodePtr;

    nodePtr head;       // head node pointer
    nodePtr curr;       // current node pointer
    nodePtr temp;       // temp node pointer

public:

    List();
    //void AddNode(std::string addData);
    void AddNode(std::string platenumber, std::string make, std::string model, std::string Vehicle, std::string priceperday, bool isAvailable);
    //void DeleteNode(std::string delData);
    //void DeleteNode(std::string platenumber, std::string make, std::string model, std::string Vehicle, std::string priceperday, bool isAvailable)
    void DeleteNode(std::string platenumber);
    void PrintList();
    int PrintAvailable();
    void Available(std::string platenumber);
    void LicenseList(std::string platenumber);
    void NowAvailable(std::string platenumber);
};

#endif


