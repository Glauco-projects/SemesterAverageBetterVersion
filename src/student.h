#ifndef _STUDENT_H
#define _STUDENT_H

#include <memory>
#include <string>
#include <vector>
#include "course.h"

namespace school {

class Student {
public:
    Student(std::string name, int entrance_year, std::vector<std::shared_ptr<Course>> courses) :
          name_{std::move(name)},
	      entrance_year{entrance_year},
	      courses{std::move(courses)}
    {}

    std::string const& name() const {
       return name_;
    }

    int years_enrolled(int current_year) const;
    std::vector<double> average() const;

private:
    std::string name_;
    int entrance_year;
    std::vector<std::shared_ptr<Course>> courses;

};

}



#endif
