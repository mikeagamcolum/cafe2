#include "funcs.h"

void Cafe::addItem(std::string p_name, double p_price){
    items[p_name] = p_price;
}

double Cafe::orderItem(std::string name, int quantity){
    return double(quantity) * items.at(name);
}

double makeChange(double money, double denomination, std::string coinName){
    if(int(money / denomination) == 0){

    }
    else if( int(money / denomination) != 1){
            std::cout << "Returning " + std::to_string(int(int(money / denomination))) + " " + coinName << "s.\n";
    }
    else {
            std::cout << "Returning " + std::to_string(int(int(money / denomination))) + " " + coinName << ".\n";
    }
    return int(money / denomination) * denomination;
}

std::string economics(double x){
        return "$" + std::to_string(x).substr(0, std::to_string(x).find(".") + 3);
}

double payMoney(double price, int dollars){
    double change = dollars - price;
    std::cout << "\nYou paid " << economics(dollars) << " for an order that costs " << economics(price) << ".\n";
    change -= makeChange(change, 1.00, "dollar");
    change -= makeChange(change, 0.25, "quarter");
    change -= makeChange(change, 0.10, "dime");
    change -= makeChange(change, 0.05, "nickel");
    change -= makeChange(change, 0.01, "cent");
    return dollars - price;
}