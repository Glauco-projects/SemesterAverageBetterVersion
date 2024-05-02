# SemesterAverageBetterVersion
Semester average with polymorphism

# Calculation of students' semester average

Repository for calculating students' averages, informing the degree.
There are an abstract class named Course with a virtual method named average().
Two classes (Calculus and DataStructures) inherit
from Course. That is the interface for the calculus of the degree in more than one school subjects.


## Requirements for execution
Linux

g++

CMAKE


## Commands used in CMAKE

cmake -S src -B build

cmake --build build -v

## Input file

must have the follow format:

number of entries

name

year of course start

number of school subjects

name of the first school subject

grade1

grade2

...

name of the second school subject

grade1

grade2

...
