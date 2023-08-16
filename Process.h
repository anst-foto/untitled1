//
// Created by Stari on 16.08.2023.
//

#ifndef UNTITLED1_PROCESS_H
#define UNTITLED1_PROCESS_H

#include <iostream>

using namespace std;

class Process {
public:
    Process* Step1() {
        cout << "step_1" << endl;
        return this;
    }
    Process* Step2() {
        cout << "step_2" << endl;
        return this;
    }
    Process* Step3() {
        cout << "step_3" << endl;
        return this;
    }

    void Stage1() {
        cout << "stage_1" << endl;
    }
    void Stage2() {
        cout << "stage_2" << endl;
    }
    void Stage3() {
        cout << "stage_3" << endl;
    }
};


#endif //UNTITLED1_PROCESS_H
