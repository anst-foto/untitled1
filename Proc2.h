//
// Created by Stari on 16.08.2023.
//

#ifndef UNTITLED1_PROC2_H
#define UNTITLED1_PROC2_H

#include <iostream>

#include "AbstractProgress.h"

using namespace std;

class Proc2 : public AbstractProgress {
public:
    AbstractProgress *Step1(AbstractProgress* progress) override {
        cout << "Proc2.Step1" << endl;
        return Step5(progress);
    }

    AbstractProgress *Step2(AbstractProgress* progress) override {
        cout << "Proc2.Step2" << endl;
        return progress;
    }

    AbstractProgress* Step5(AbstractProgress* progress) {
        cout << "Proc2.Step5" << endl;
        return progress;
    }

};


#endif //UNTITLED1_PROC2_H
