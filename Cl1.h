#ifndef CL1_H
#define CL1_H

#include "If1.h"
#include "Cl3.h"

class Cl1 : public Cl3, public If1 {
public:
    void meth1() override;
    void meth2() override;
    void meth3() override;
};

#endif
