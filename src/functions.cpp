#include <string>
#include <sstream>
#include "functions.h"
#include "course.h"
#include "calculus.h"
#include "data_structures.h"


namespace {

auto read_int(std::istream& input) {
    auto buf = std::string{};

    std::getline(input, buf);

    auto sstr = std::stringstream{buf};

    auto i = 0;
    sstr >> i;

    return i;
}
auto read_double(std::istream& input) {
    auto buf = std::string{};

    std::getline(input, buf);

    auto sstr = std::stringstream{buf};

    auto i = 0.0;
    sstr >> i;

    return i;
}


auto read_string(std::istream& input) {
    auto str = std::string{};
    std::getline(input, str);
    return str;
}



std::unique_ptr<school::Calculus> read_calculus(std::istream& input) {

    auto p1 = read_double(input);
    auto p2 = read_double(input);
    auto p3 = read_double(input);

    return std::make_unique<school::Calculus>(p1, p2, p3);
}

std::unique_ptr<school::DataStructures> read_data_structures(std::istream& input) {

    auto t1 = read_double(input);
    auto t2 = read_double(input);
    auto t3 = read_double(input);
    auto p1 = read_double(input);

    return std::make_unique<school::DataStructures>(t1, t2, t3, p1);

}

std::unique_ptr<school::Course> read_course(std::istream& input) {
    auto name = read_string(input);

    if (name == "Data Structures") {
        return read_data_structures(input);
    }
    return read_calculus(input);
    
}

school::Student read_student(std::istream& input) {
    auto name = read_string(input);
    auto year = read_int(input);

    auto n_courses = read_int(input);
    auto courses = std::vector<std::shared_ptr<school::Course>>{};

    for (auto i = 0u; i < n_courses; ++i ) {
        auto course = read_course(input);
        courses.push_back(std::move(course));
    }
    return {
        name,
        year,
        std::move(courses),
    };
}

}
namespace school {

bool approved( Course const& course ) {

    return course.average() > 6.0;
    
}

std::vector<Student> dismissed_by_time( std::vector<Student> const& students, int current_year ) {
        
	auto dismissed = std::vector<Student>{};

    for (auto const& s: students) {
        if (s.years_enrolled(current_year) > 7) {
            dismissed.push_back(s);
	    }
	}
	return dismissed;
}

std::vector<Student> read_students(std::istream& input) {

    auto n_students = read_int(input);

    auto students = std::vector<Student>{};

    for ( auto i = 0u; i < n_students; ++i ) {
         students.push_back(read_student(input));
    }
    return students;
}

}








