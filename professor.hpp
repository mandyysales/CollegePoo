#ifndef PROFESSOR.HPP
#define PROFESSOR.HPP

#include <iostream>
#include <vector>
#include <map>
#include "Person.hpp"
//#include "SubjectDTO"

using namespace std;

class ProfessorDTO : public Person{
    private:
    int id; 
    double salary;
    //vector<SubjectDTO>TeacherSubjects;
    public:

    void setId(int id);
    int getId() const;
    void setSalary(double salario);
    double getSalary();
    //void TeacherDTO::setTeacherSubject(vector<SubjectDTO> &newSubjects);
    //vector<SubjectDTO> &TeacherDTO::getTeacherSubjects() const;
    void setProfessorName(string name);
    string getProfessorName();
    void setProfessorAge(int age);
    int getProfessorAge();
    void setProfessorPhone(string phoneNumber);
    string getProfessorPhone();
};

#endif //PROFESSOR.hpp