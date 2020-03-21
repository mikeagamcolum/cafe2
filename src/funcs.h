#ifndef FUNCS
#define FUNCS
#include <iostream>
#include <unordered_map>

class Cafe {
    public:
    std::string name;
    std::unordered_map<std::string, double> items;
    Cafe(std::string p_name) : name {p_name} {

    }
    void addItem(std::string p_name, double p_price);
    double orderItem(std::string name, int quantity = 1);
};

std::string economics(double x);
double payMoney(double price, int dollars);
double makeChange(double money, double denomination, std::string coinName);

#endif
