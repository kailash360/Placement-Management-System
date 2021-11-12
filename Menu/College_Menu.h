#ifndef COLLEGE_MENU_H
#define COLLEGE_MENU_H

#include "../Classes/College.h"
#include "../Classes/Placement.h"
#include "../Utils/File.h"
#include "../Utils/Display.h"
void College_Menu(vector<College> &Colleges)
{
    bool flag=true;
        int choice, choice1;
        display_college_list(Colleges);
        cout<<"Enter the serial number of your college: ";
        cin>>choice;
        cout<<endl;
        cout<<Colleges[choice-1];
        cout<<endl;
        while(flag)
        {
            cout<<"Choose any one category to see"<<endl;
            cout<<"1. Display previous placement history\n2. Display placement statistics of a particular year\n3. Add placement statistics\n4. Display visited companies\n5. Add new companies visited recently\n6. Exit\n-> ";
            cin>>choice1;
            switch(choice1)
            {
                case 1:
                    Colleges[choice-1].placement_history();
                    break;
                case 2:
                    Colleges[choice-1].show_placement_stat();
                    break; 
                case 3:
                    Colleges[choice-1].add_placement_stats();
                    break;
                case 4:
                    Colleges[choice-1].show_companies();
                    break;
                case 5:
                    Colleges[choice-1].append_companies();
                    break;
                case 6:
                    display_thank_you();
                    exit(0);
                default: 
                    cout<<"Invalid Choice"<<endl;
                    break;
            }
            cout<<"\t\t\t-------------------------------------------------------------------------------------------------------"<<endl;
        }
}
#endif