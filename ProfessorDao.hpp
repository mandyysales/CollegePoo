#ifndef CLASSEPROFESSORDAO_HPP
#define CLASSEPROFESSORDAO_HPP

#include <iostream>
#include <map>
#include <vector>
#include <stdexcept>
#include "professor.hpp"

using namespace std;

class TeacherDAO : public AbstractDAO<TeacherDTO>
{
private:
    map<int, ProfessorDTO> professorMap;

public:
    void Add(TeacherDTO entity) override;
    void Read() const override;
    void viewID();
    void Update() override;
    void Delete() override;
};

#endif //CLASSEPROFESSORDAO_HPP