//Samantha Pintor
//HW 2 - Part 2 
//10-04-23

#include <iostream>

using namespace std; 

int main ()
{
    //creating variables
    float scoreOne; //variable for score from judge one
    float scoreTwo; //variable for score from judge two
    float scoreThree; //variable for score from judge three
    float scoreFour; //variable for score from judge four
    float scoreFive; //variable for score from judge five
    float scoreSix; //variable for score from judge six
    float lowestScore; //variable for lowest score
    float highestScore; //variable for highest score
    
    
    //asking the user to input the scores 
    cout << "Enter the scores of each judge." << endl; //asks for judges scores
    cin >> scoreOne; //score of judge one
    cin >> scoreTwo; //score of judge two
    cin >> scoreThree; //score of judge three
    cin >> scoreFour; //score of judge four
    cin >> scoreFive; //score of judge five
    cin >> scoreSix; //score of judge six
    
    
    //determining minimum score
        if (scoreOne < scoreTwo && scoreOne < scoreThree && scoreOne < scoreFour && scoreOne < scoreFive && scoreOne < scoreSix) {
            lowestScore = scoreOne; 
        } else if (scoreTwo < scoreOne && scoreTwo < scoreThree && scoreTwo < scoreFour && scoreTwo < scoreFive && scoreTwo < scoreSix) {
            lowestScore = scoreTwo; 
        } else if (scoreThree < scoreOne && scoreThree < scoreTwo && scoreThree < scoreFour && scoreThree < scoreFive && scoreThree < scoreSix) {
            lowestScore = scoreThree; 
        } else if (scoreFour < scoreOne && scoreFour < scoreTwo && scoreFour < scoreThree && scoreFour < scoreFive && scoreFour < scoreSix) {
            lowestScore = scoreFour; 
        } else if (scoreFive < scoreOne && scoreFive < scoreTwo && scoreFive < scoreThree && scoreFive < scoreFour && scoreFive < scoreSix) {
            lowestScore = scoreFive; 
        } else if (scoreSix < scoreOne && scoreSix < scoreTwo && scoreSix < scoreThree && scoreSix < scoreFour && scoreSix < scoreFive) {
            lowestScore = scoreSix;
        }
   
    //determining maximum score
        if (scoreOne > scoreTwo && scoreOne > scoreThree && scoreOne > scoreFour && scoreOne > scoreFive && scoreOne > scoreSix) {
            highestScore = scoreOne; 
        } else if (scoreTwo > scoreOne && scoreTwo > scoreThree && scoreTwo > scoreFour && scoreTwo > scoreFive && scoreTwo > scoreSix) {
            highestScore = scoreTwo; 
        } else if (scoreThree > scoreOne && scoreThree > scoreTwo && scoreThree > scoreFour && scoreThree > scoreFive && scoreThree > scoreSix) {
            highestScore = scoreThree;
        } else if (scoreFour > scoreOne && scoreFour > scoreTwo && scoreFour > scoreThree && scoreFour > scoreFive && scoreFour > scoreSix) {
            highestScore = scoreFour; 
        } else if (scoreFive > scoreOne && scoreFive > scoreTwo && scoreFive > scoreThree && scoreFive > scoreFour && scoreFive > scoreSix) {
            highestScore = scoreFive; 
        } else if (scoreSix > scoreOne && scoreSix > scoreTwo && scoreSix > scoreThree && scoreSix > scoreFour && scoreSix > scoreFive) {
            highestScore = scoreSix;
        }
    
    //formulas
    float totalScore = (scoreOne + scoreTwo + scoreThree + scoreFour + scoreFive + scoreSix); //adding all six scores
    float finalScore = (totalScore - lowestScore - highestScore)/4; //finding mean after subtracting highest and lowest scores
    
    //calculating final score
    cout << "The final score is " << (finalScore) << "!" << endl;
    
    return 0; 
}

/*
Enter the scores of each judge. 
1
2
3
4
5
6
The final score is 3.5!
*/
