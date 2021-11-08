#include "./Classes/Student.h"
#include "./Classes/Company.h"
#include "./Menu/Student_Menu.h"
#include "./Utils/File.h"
using namespace std;

int main(){
    
    vector<Student> students;
    vector<Company> companies;

    read_file(students);
    Student_Menu(companies);

    return 0;

}