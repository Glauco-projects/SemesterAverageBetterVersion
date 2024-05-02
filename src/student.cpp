#include "student.h"

namespace school {

int Student::years_enrolled(int current_year) const {
    return (current_year - entrance_year); 
}

std::vector<double> Student::average() const {
    auto averages = std::vector<double>{};
    
    for (auto& course: courses) {
        averages.push_back(course->average());
    }

    return averages;
    
    }
    


}
