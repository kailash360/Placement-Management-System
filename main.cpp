#include <iomanip>
#include "./Menu/Student_Menu.h"
#include "./Menu/Company_Menu.h"
#include "./Menu/College_Menu.h"
#include "./Utils/File.h"
#include "./Utils/Display.h"
using namespace std;

int main(){
    
    vector<Student> students;
    vector<Company> companies;
    vector<College> colleges;

    read_file(students,companies,colleges);

    int option;
    display_line(1);
    cout<<"Choose from the following:\n";
    cout<<"1.Student\n2.Company\n3.College Admin\n->";
    cin>>option;
    cout<<endl;
    display_line(1);
    cout<<endl;
    switch(option) {
        case 1: 
            Student_Menu(students,companies,colleges);
            break;
        case 2: 
            Company_Menu(companies,colleges);
            break;
        case 3:
            College_Menu(colleges);
        default:
            cout<<"Invalid choice"<<endl;
    }

    return 0;

}