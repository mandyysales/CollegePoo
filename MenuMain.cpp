//"Menu.hpp"
#include <iostream>
#include <vector>
#include "ProfessorDAO"

using namespace std; 

int main(){
int ValorMenu;

void Menu(){
        cout<< "Opção Menu estudante = 1"<< endl;
        cout<< "Opção Menu professor = 2"<< endl;
    }
void MenuProfessor(){
    cout << "Inserir um novo professor = 1" << endl;
    cout << "Atualizar professor = 2" << endl;
    cout << "Remover professor = 3" << endl;
    cout << "Listar todos os professores = 4" << endl;;
    }

    cout<< Menu() <<endl;
    cout<<Digite uma opção: << endl;
    cin>>ValorMenu;

    if(ValorMenu=1){

    }
    else if(ValorMenu=2){
        MenuProfessor();
        int ValorMenuProfessor = 0;
        input("Escolha uma opção do menu Professor: ");
        if(ValorMenuProfessor = 1)
            ProfessorDTO professor;
            int id, age;
            double salary;
            string name, phone;

            cout << "Digite o ID do professor que deseja atualizar: ";
            cin >> id;

            professor = professorDao.getProfessor(id);

            cout << "Digite o novo nome do professor: ";
            cin >> name;
            professor.setProfessorName(name);

            cout << "Digite a nova idade do professor: ";
            cin >> age;
            professor.setProfessorAge(age);

            cout << "Digite o novo telefone do professor: ";
            cin >> phone;
            professor.setProfessorPhone(phone);

            cout << "Digite o novo salário do professor: ";
            cin >> salary;
            professor.setSalary(salary);

            professorDao.updateProfessor(professor);
            cout << "Professor atualizado com sucesso!" << endl;
        }
        else if (ValorMenuProfessor == 3) {
            int id;
            cout << "Digite o ID do professor que deseja remover: ";
            cin >> id;

            professorDao.deleteProfessor(id);
            cout << "Professor removido com sucesso!" << endl;
        }
        else if (ValorMenuProfessor == 4) {
            vector<ProfessorDTO> allProfessors = professorDao.getAllProfessors();

            for (const auto& prof : allProfessors) {
                cout << "ID: " << prof.getId() << ", Nome: " << prof.getProfessorName() << ", Idade: " << prof.getProfessorAge() << ", Telefone: " << prof.getProfessorPhone() << ", Salário: " << prof.getSalary() << endl;
            }
        }


return 0;

}






