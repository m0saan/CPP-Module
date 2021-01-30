#include "Pony.h"

void ponyOnTheHeap() {
    std::cout << "A Pony instance has been created on the heap" << std::endl;
    Pony *pony = new Pony();
    pony->gallop();
    pony->move();
    delete pony;
}

void ponyOnTheStack() {
    std::cout << "A Pony instance has been created on the stack" << std::endl;
    Pony pony;
    pony.move();
    pony.gallop();
}

int main(){
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}