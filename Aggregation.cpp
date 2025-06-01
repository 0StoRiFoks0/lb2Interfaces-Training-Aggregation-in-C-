#include "Aggregation.h"

Aggregation::Aggregation(Cl1* c1, Cl2* c2, Cl3* c3)
    : cl1(c1), cl2(c2), cl3(c3) {}

void Aggregation::show() {
    cl1->meth1();
    cl2->meth2();
    cl3->meth3();
}
