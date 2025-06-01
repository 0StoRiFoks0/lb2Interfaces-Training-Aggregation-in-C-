#ifndef AGGREGATION_H
#define AGGREGATION_H

#include "Cl1.h"
#include "Cl2.h"
#include "Cl3.h"

class Aggregation {
private:
    Cl1* cl1;
    Cl2* cl2;
    Cl3* cl3;

public:
    Aggregation(Cl1* c1, Cl2* c2, Cl3* c3);
    void show();
};

#endif
