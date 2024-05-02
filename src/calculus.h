#ifndef SCHOOL_CALCULUS_H
#define SCHOOL_CALCULUS_H

#include "course.h"

namespace school {

class Calculus final: public Course {
public:
    Calculus(double p1, double p2, double p3):
        p1{p1},
        p2{p2},
        p3{p3}
    {}
    double average() const override;

private:
    double p1, p2, p3;
};
}

#endif