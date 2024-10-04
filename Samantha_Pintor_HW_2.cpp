[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/0GLSpLUk)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16289541&assignment_repo_type=AssignmentRepo)
//Samantha Pintor
//HW 2 
//10-04-24

#include <iostream>

using namespace std; 

int main ()
{
    //creating variables 
    int month; 
    int monthDay;

    //asking imput from user 
    cout << "Choose a month of the year according to the number of that month (1-12)." << endl; //prompting user to choose a month
    cin >> month; //user inputs month number
    cout << "Choose a number from 1-31." << endl; //prompting user to choose a number from 1 -31 
    cin >> monthDay; //user inputs day number

    //printing the season - Winter
    if (month == 12 && monthDay > 22) //if month is 12 (December) and day is less than 23
        cout << "It is now Winter!" << endl; //say "It is now Winter!"
   
    if (month == 1 && monthDay < 32) //if month is 1 (January) and day is less than 32
        cout << "It is now Winter!" << endl; //say "It is now Winter!"
        
    if (month == 2 && monthDay < 29) //if month is 2 (February) and day is less than 29
        cout << "It is now Winter!" << endl; //say "It is now Winter!"
        
    if (month == 3 && monthDay < 21) //if month is 3 (March) and day is less than 21
        cout << "It is now Winter!" << endl; //say "It is now Winter!"
        
    //printing the season - Spring    
    if (month == 3 && monthDay > 20) //if month is 3 (March) and day is greater than 20
        cout << "It is now Spring!" << endl; //say "It is now Spring!"
    
    if (month == 4 && monthDay < 32) //if month is 4 (Apring) and day is less than 32
        cout << "It is now Spring!" << endl; //say "It is now Spring!"
        
    if (month == 5 && monthDay < 32) //if month is 5 (May) and day is less than 32
        cout << "It is now Spring!" << endl; //say "It is now Spring!"
        
    if (month == 6 && monthDay < 21) //if month is 6 (June) and day is less than 21
        cout << "It is now Spring!" << endl; //say "It is now Spring!"
        
    //printing the season - Summer
    if (month == 6 && monthDay > 20) //if month is 6 (June) and day is greater than 20
        cout << "It is now Summer!" << endl; //say "It is now Summmer!" 
        
    if (month == 7 && monthDay < 32) //if month is 7 (July) and day is less than 32
        cout << "It is now Summer!" << endl; //say "It is now Summer!"
        
    if (month == 8 && monthDay < 31) //if month is 8 (August) and day is less than 31
        cout << "It is now Summer!" << endl; //say "It is now Summer!" 
        
    if (month == 9 && monthDay < 23) //if month is 9 (September) and day is less than 23
        cout << "It is now Summer!" << endl; //say "It is now Summer!"
        
    //printing the season - Fall
    if (month == 9 && monthDay > 22) //if month is 9 (September) and day is greater than 22
        cout << "It is now Fall!" << endl; //say "It is now Fall!"
    
    if (month == 10 && monthDay < 32) //if month is 10 (October) and day is less than 32
        cout << "It is now Fall!" << endl; //say "It is now Fall!"
        
    if (month == 11 && monthDay < 40) //if month is 11 (November) and day is less than 40
        cout << "It is now Fall!" << endl; //say "It is now Fall!"
        
    if (month == 12 && monthDay < 23) //if month is 12 (December) and day is less than 23
        cout << "It is now Fall!" << endl; //say "It is now Fall!"
    
        
    return 0; 
}

    /*
    Choose a month of the year according to the number of that month (1-12).
    12
    Choose a number from 1-31.
    24
    It is now Winter!
    */
