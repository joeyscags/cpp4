#include "Animal.hpp"

int main() {
    std::cout << "=== Testing Animal class ===" << std::endl;
    const Animal* meta = new Animal();
    
    std::cout << "\nType: " << meta->getType() << std::endl;
    meta->makeSound();
    
    std::cout << "\n=== Cleanup ===" << std::endl;
    delete meta;
    
    return 0;
}
