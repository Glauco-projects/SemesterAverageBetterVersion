#ifndef SCHOOL_DATA_STRUCTURES_H
#define SCHOOL_DATA_STRUCTURES_H

#include "course.h"

namespace school {

class DataStructures final : public Course {
public: 
    DataStructures(double t1, double t2, double t3, double p1 ) :
         t1{t1},
         t2{t2},
         t3{t3},
         p1{p1}
    {}
    double average() const override;

private:
    double t1, t2, t3;
    double p1;

};

}
#endif