#ifndef SCHOOL_COURSE_H
#define SCHOOL_COURSE_H

namespace school {

class Course {
public:
    virtual ~Course() = default;
    virtual double average() const = 0;
};

}


#endif