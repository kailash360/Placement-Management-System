#include "./Menu/Main_Menu.h"
#include "./Menu/Student_Menu.h"
#include "./Menu/Company_Menu.h"
#include "./Menu/College_Menu.h"
#include "./Utils/File.h"
using namespace std;

int main(){
    
    vector<Student> students;
    vector<Company> companies;
    vector<College> colleges;
    read_file(students,companies,colleges);

    Main_Menu(students,colleges,companies);
    
    return 0;
}