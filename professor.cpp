#include <iostream>
#include <vector>
#include "professor.hpp"

using namespace std;
void ProfessorDTO::setId(int id) { 
    this->id = id; 
}

int ProfessorDTO::getId() const { 
    return id; 
}

void ProfessorDTO::setSalary(double Salary) {
    this->salary = Salary; 
}

double ProfessorDTO::getSalary(){ 
    return salary; 
}

void TeacherDTO::setTeacherSubject(vector<SubjectDTO> &newSubjects) { 
    subjectsTeacher = newSubjects; 
}

const vector<SubjectDTO> &TeacherDTO::getTeacherSubjects() const { 
    return subjectsTeacher;
}


void setProfessorName(const std::string& name) { 
    setName(name); 
}
string getProfessorName() const { 
    return getName(); 
}

void setProfessorAge(int age) { 
    setAge(age); 
}
int getProfessorAge() const { 
    return getAge(); 
}

void setProfessorPhone(const std::string& phoneNumber) { 
    setPhoneNumber(phoneNumber); 
}
string getProfessorPhone() const { 
    return getPhoneNumber(); 
}
