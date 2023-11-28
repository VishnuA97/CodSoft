#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;

string task;


int menu(){
    system("cls");
    int choice;
    cout<<"\t\t\t\t\t\tTo-Do List\n\n\n";
    cout<<"1.  Add a new task\n";
    cout<<"2.  View the list\n";
    cout<<"3.  Mark a task as completed\n";
    cout<<"4.  Delete a task\n";
    cout<<"5.  Quit\n\n\n";
    cout<<"Enter a choice:";
    cin >> choice;
    return(choice);
}

void back(){
    char cho;
    cout << "Press M to go to Main menu..." << endl;
    cin>>cho;
    if(cho == 'm' || cho == 'M'){
       return;
    }
    else{
        cout <<"Invalid command!!!\n";
        back();
    }
}


void add(){
    system("cls");
    ofstream file;
    char ch;
    cout << "Enter Task:";
    getline(cin>>ws,task);
    cin.get();
   
    file.open("Task.txt", ios::app | ios::binary); 
    file << task<<"\n";
    file.close();
    
    cout<<"Do you want to add more task? y/n"<<endl;
    cin>> ch;

    if(ch == 'y' || ch == 'Y'){
        add();
    }
    else if(ch=='n' || ch=='N'){
        back();
    }
}
    
void view_task(){
    system("cls");
    ifstream read;
    read.open("Task.txt", ios::in | ios::binary);
    if(!read){
        cout << "File Not Found\n";
    }
    else{
        while(!read.eof()) {
            getline(read, task);
            cout<<task<<"\n";
        }
    }
    read.close();
    back();

}

void delete_task(){
    
}


int main(){
    while(true){
        switch (menu()) 
        {
            case 1:
                add();
                break;
            case 2:
                view_task();
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<<"Error!!! Wrong choice!";
                back();
                break;
        }
    }
   
    return 0;
}