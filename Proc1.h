//
// Created by Stari on 16.08.2023.
//

#ifndef UNTITLED1_PROC1_H
#define UNTITLED1_PROC1_H

#include <iostream>

#include "AbstractProgress.h"

using namespace std;

class Proc1 : public AbstractProgress {
public:
    AbstractProgress *Step1(AbstractProgress* progress) override {
        cout << "Proc1.Step1" << endl;
        return progress;
    }

    AbstractProgress *Step2(AbstractProgress* progress) override {
        cout << "Proc1.Step2" << endl;
        return progress;
    }

};


#endif //UNTITLED1_PROC1_H
