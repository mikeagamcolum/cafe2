#include "funcs.h"

int main(){
    Cafe PurpleLlama("Purrple Llama Coffee and Records");
    PurpleLlama.addItem("Fetco, Sey Colombia", 4);
    PurpleLlama.addItem("Fetco, Jhon Wilson Pove Da", 4);
    PurpleLlama.addItem("V60, April Kenya Miwendia PB", 6);
    PurpleLlama.addItem("V60, Kaffa Kenya Koimbi AA", 5);
    PurpleLlama.addItem("V60, Junto Ehtipoia Chire Aroresa", 5);     
    PurpleLlama.addItem("Espresso, Sey Guatemala", 4.5); 
    PurpleLlama.addItem("Espresso, Lucia Zelaya", 4); 
    PurpleLlama.addItem("Espresso, Gatuiri AE", 3);

    std::cout << economics(payMoney(PurpleLlama.orderItem("Fetco, Sey Colombia"), 5)) << " is your change.\n";
    std::cout << economics(payMoney(PurpleLlama.orderItem("Espresso, Sey Guatemala", 3), 20)) << " is your change.\n";
    return 0;
}