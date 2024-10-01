[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/0GLSpLUk)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16289541&assignment_repo_type=AssignmentRepo)
//Samantha Pintor
//HW 2 
//10-01-24

#include <iostream>

using namespace std; 

int main ()
{
    //creating variables 
    int month; 
    int monthDay;

    //asking imput from user 
    cout << "Choose a month of the year according to the number of that month (1-12)." << endl; //prompting user to choose a month
    cin >> month; 
    cout << "Choose a number from 1-31." << endl; //prompting user to choose a number from 1 -31 
    cin >> monthDay;

    //printing the season 
    if (month == 12 && month < 3)
        cout << "It is now winter!" << endl; 
    
    if (month < 6)
        cout << "It is now spring!" << endl; 
    
    if (month < 9)
        cout << "It is now summer!" << endl; 

    if (month < 12)
        cout << "It is now fall!" << endl; 

    return 0; 
}
