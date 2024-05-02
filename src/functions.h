#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <vector>
#include "student.h"

namespace school {

bool approved( Course const& );
std::vector<Student> dismissed_by_time( std::vector<Student> const&, int current_year );
std::vector<Student> read_students(std::istream&);

}


#endif


