#include <iostream>

#include "Process.h"
#include "Proc1.h"
#include "Proc2.h"

int main() {
    auto progress = new Process();
    progress->Stage1();
    progress->Stage2();
    progress->Stage3();

    progress->Step1()->Step3()->Stage3();

    AbstractProgress* proc1 = new Proc1();
    AbstractProgress* proc2 = new Proc2();

    proc1->Step1(proc2)->Step2(proc1)->Step1(proc1)->Step2(proc2)->Step1(proc1);
    //proc2->Step1()->Step2();

    return 0;
}
