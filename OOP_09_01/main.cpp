#include <iostream>
#include <stdexcept>

#include "fraction.h"

int main()
{
    try
    {
        Fraction f1(4, 3);
        Fraction f2(6, 11);
        
        std::cout << "f1 " << ((f1 == f2) ? "==" : "not ==") << " f2" << '\n';
        std::cout << "f1 " << ((f1 != f2) ? "!=" : "not !=") << " f2" << '\n';
        std::cout << "f1 " << ((f1 < f2) ? "<" : "not <") << " f2" << '\n';
        std::cout << "f1 " << ((f1 > f2) ? ">" : "not >") << " f2" << '\n';
        std::cout << "f1 " << ((f1 <= f2) ? "<=" : "not <=") << " f2" << '\n';
        std::cout << "f1 " << ((f1 >= f2) ? ">=" : "not >=") << " f2" << '\n';
    }
    catch (const std::domain_error& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    
    return 0;
}
