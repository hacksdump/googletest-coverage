#include <iostream>

#include "src/testsubject.h"

int main() {
    int evenNum = 2;
    int oddNum = 3;
    std::cout << "Square of " << evenNum << " is: " << TestSubject::square(evenNum) << std::endl;
    std::cout << "Square of " << oddNum << " is: " << TestSubject::square(oddNum) << std::endl;
    return 0;
}
