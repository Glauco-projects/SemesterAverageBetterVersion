#include <iostream>
#include <fstream>

#include "student.h"
#include "functions.h"

int _main(std::istream& in) {

    auto students = school::read_students(in);
/*
    for (auto s: school::approved(students)) {
        std::cout << s.name()
		  << " is approved by grade with average "
		  << s.average() << ".\n";
    }
*/
    for (auto s: students) {
        std::cout << s.name() << " averages:\n";
        for (auto a: s.average()) {
            std::cout << a << '\n';
        }
    }
    for (auto s: school::dismissed_by_time(students, 2024)) {
        std::cout << s.name()
		  << " was dismissed for being in the course for too long: "
		  << s.years_enrolled(2024) << "years.\n";
    }
    return 0;
}

int main(int argc, char** argv) {
    if (argc == 1) {
         return _main(std::cin);
    }

    auto file = std::ifstream{argv[1]};

    return _main(file);
}
