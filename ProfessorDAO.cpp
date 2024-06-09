#include "ProfessorDao.hpp"

void TeacherDAO::Add(ProfessorDTO entity) {
    int id = entity.getId();
    if (professorMap.find(id) != professorMap.end()) {
        throw runtime_error("Professor with this ID already exists.");
    }
    professorMap[id] = entity;
}

void TeacherDAO::Read() const {
    for (const auto& pair : professorMap) {
        cout << "ID: " << pair.first << ", Name: " << pair.second.getProfessorName() 
             << ", Age: " << pair.second.getProfessorAge() 
             << ", Phone: " << pair.second.getProfessorPhone() 
             << ", Salary: " << pair.second.getSalary() << endl;
    }
}

void TeacherDAO::viewID(int id) const {
    auto it = professorMap.find(id);
    if (it == professorMap.end()) {
        throw runtime_error("Professor with this ID does not exist.");
    }
    const auto& prof = it->second;
    cout << "ID: " << prof.getId() << ", Name: " << prof.getProfessorName() 
         << ", Age: " << prof.getProfessorAge() 
         << ", Phone: " << prof.getProfessorPhone() 
         << ", Salary: " << prof.getSalary() << endl;
}

void TeacherDAO::Update(ProfessorDTO entity) {
    int id = entity.getId();
    if (professorMap.find(id) == professorMap.end()) {
        throw runtime_error("Professor with this ID does not exist.");
    }
    professorMap[id] = entity;
}

void TeacherDAO::Delete(int id) {
    if (professorMap.find(id) == professorMap.end()) {
        throw runtime_error("Professor with this ID does not exist.");
    }
    professorMap.erase(id);
}
