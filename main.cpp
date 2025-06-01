#include "Aggregation.h"
#include <iostream>

int main() {
    Cl1 c1;
    Cl2 c2;
    Cl3 c3;

    Aggregation agg(&c1, &c2, &c3);
    agg.show();

    std::cout << "Натисніть Enter, щоб закрити програму...";
    std::cin.get();  // Чекаємо на натискання Enter

    return 0;
}
