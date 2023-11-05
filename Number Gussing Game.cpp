#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void game(){
    int number, random;
    srand(time(0));
    random = rand() % 100;
    cout<<"I will think a number between 1 and 100. Try to guess it."<<endl;  
    cin >> number;
    do {
        
        if(number>random){
            cout<<"Wrong! Guess Lower"<<endl;
            cin >> number;
        }
        else{
            cout<<"Wrong! Guess Higher"<<endl; 
            cin >> number;
        }
    }
    while(number!=random);
    if(number==random){
            cout<<"Correct! You Win!"<<endl;
            
        }
    
}


int main()
{
    bool play_again = true;
    while(play_again){
        game();
        cout<<"Play Again(Y/N)"<<endl;
        char answer;
        cin >> answer;
        if ( tolower(answer)!='y'){
            play_again = false;
        }
    }
    return 0;
}