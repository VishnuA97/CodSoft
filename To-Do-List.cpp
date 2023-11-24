#include<iostream>
#include<fstream>
#include<string>
using namespace std;


fstream file;
string task;
char menu, ch;

void main_menu(){
    cout<<"\t\t\t\t\t\tTo-Do List\n\n\n";
    cout<<"1.  Add a new task\n";
    cout<<"2.  View the list\n";
    cout<<"3.  Mark a task as completed\n";
    cout<<"4.  Delete a task\n\n\n";
}

void add_task(){
    system("cls");
    cout << "Enter Task:";
    getline(cin,task);
    cin.get();
    
    file.open("task.txt", ios::app );
    if(file.is_open()){
        file << task<<"\n";
        file.close();
    }  
    cout<<"Do you want to add another task?(y/n): \n";
    cin >> ch;
    if(ch == 'y'){
        add_task();
    }
    else{
        exit(0);
    }

}

void view_task(){
    ifstream read;
    read.open("test.txt", ios::in | ios::binary);
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
}

void complete_task(){}

void delete_task(){}



void to_do_list(){
    int choice;
   
    while(true){
        main_menu();
        cout<<"Enter a choice to continue\n";
        cin>>choice;
        switch(choice){
            case 1: add_task(); break;
            case 2: view_task(); break;
            case 3: complete_task(); break;
            case 4: delete_task(); break;
            default: cout<<"Invalid choice!!! Enter a number between 1 and 4\n"; 
            break;
        }
    }
}    

int main(){
    while(true){
        add_task();
    }
    return 0;
}
