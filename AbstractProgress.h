//
// Created by Stari on 16.08.2023.
//

#ifndef UNTITLED1_ABSTRACTPROGRESS_H
#define UNTITLED1_ABSTRACTPROGRESS_H


class AbstractProgress {
public:
    virtual AbstractProgress* Step1(AbstractProgress* progress) = 0;
    virtual AbstractProgress* Step2(AbstractProgress* progress) = 0;
};


#endif //UNTITLED1_ABSTRACTPROGRESS_H
