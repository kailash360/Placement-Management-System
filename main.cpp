#include <iomanip>
#include "./Menu/Student_Menu.h"
#include "./Utils/File.h"
using namespace std;

int main(){
    
    vector<Student> students;
    vector<Company> companies;
    vector<College> colleges;

    read_file(students,companies,colleges);
    Student_Menu(companies);

    return 0;

}