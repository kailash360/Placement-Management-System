#ifndef COLLEGE_MENU_H
#define COLLEGE_MENU_H
#include "../Classes/College.h"
#include "../Classes/Placement.h"
#include "../Utils/File.h"
#include "../Utils/Display_College.h"
void College_Menu(vector<College> &Colleges)
{
    bool flag=true;
        display_line(1);
        int choice, choice1;
        display_college1(Colleges);
        display_line(1);
        while(flag)
        {
        cout<<"enter the college to select via index position: ";cin>>choice;
        cout<<"Choose any one category to see"<<endl;
        cout<<"1. Display placement history\n2. To see placement stat of a particular year\n3. To add new companies visited recently\n4. To add new placement stat\n5. To exit\n Enter your choice: ";
        cin>>choice1;
        switch(choice1)
        {
            case 1:Colleges[choice].placement_history();
            break;
            case 2:Colleges[choice].show_placement_stat();
            break; 
            case 3:Colleges[choice].append_companies();
            break;
            case 4:Colleges[choice].add_placement_stats();
            break;
            case 5:cout<<"Thankyou"<<endl; 
            flag=false;
            display_line(3);
            break;
            default: cout<<"Invalid Choice"<<endl;
            break;
        }
    }
}
#endif