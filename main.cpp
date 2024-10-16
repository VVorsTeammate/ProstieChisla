#include<iostream>
#include "Set.h"


int main() {
    // uint16_t a = 1;
    // //a = a << 10;
    // std::cout << a << std::endl;
    // uint8_t b = 0;
    // b = static_cast<uint8_t>(a);
    // std::cout << static_cast<uint32_t>(b) << std::endl;

    Set b(27);
    for(size_t i = 2; i < 27; i++){
        b.InsertElem(i);
    }
    std::vector d = b.GetPrimary();
    for(size_t i = 0; i < d.size(); i++){
        std::cout<<d[i]<<" ";
    }
    
    return 0;
}