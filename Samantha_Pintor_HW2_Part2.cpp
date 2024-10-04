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
        if (scoreOne <= scoreTwo && scoreOne <= scoreThree && scoreOne <= scoreFour && scoreOne <= scoreFive && scoreOne <= scoreSix) { //if score one is less than or equal to every other score
            lowestScore = scoreOne; //setting lowest score to score one
        } else if (scoreTwo <= scoreOne && scoreTwo <= scoreThree && scoreTwo <= scoreFour && scoreTwo <= scoreFive && scoreTwo <= scoreSix) { //if score two is less than or equal to every other score
            lowestScore = scoreTwo; //setting lowest score to score two
        } else if (scoreThree <= scoreOne && scoreThree <= scoreTwo && scoreThree <= scoreFour && scoreThree <= scoreFive && scoreThree <= scoreSix) { //if score three is less than or equal to every other score
            lowestScore = scoreThree; //setting lowest score to score three
        } else if (scoreFour <= scoreOne && scoreFour <= scoreTwo && scoreFour <= scoreThree && scoreFour <= scoreFive && scoreFour <= scoreSix) { //if score four is less than or equal to every other score
            lowestScore = scoreFour; //setting lowest score to score four
        } else if (scoreFive <= scoreOne && scoreFive <= scoreTwo && scoreFive <= scoreThree && scoreFive <= scoreFour && scoreFive <= scoreSix) { //if score five is less than or equal to every other score
            lowestScore = scoreFive; //setting lowest score to score five
        } else if (scoreSix <= scoreOne && scoreSix <= scoreTwo && scoreSix <= scoreThree && scoreSix <= scoreFour && scoreSix <= scoreFive) { //if score six is less than or equal to every other score
            lowestScore = scoreSix; //setting lowest score to score six
        }
   
    //determining maximum score
        if (scoreOne >= scoreTwo && scoreOne >= scoreThree && scoreOne >= scoreFour && scoreOne >= scoreFive && scoreOne >= scoreSix) { //if score one is greater than or equal to every other score
            highestScore = scoreOne; //setting highest score to score one
        } else if (scoreTwo >= scoreOne && scoreTwo >= scoreThree && scoreTwo >= scoreFour && scoreTwo >= scoreFive && scoreTwo >= scoreSix) { //if score two is greater than or equal to every other score
            highestScore = scoreTwo; //setting highest score to score two
        } else if (scoreThree >= scoreOne && scoreThree >= scoreTwo && scoreThree >= scoreFour && scoreThree >= scoreFive && scoreThree >= scoreSix) { //if score three is greater than or equal to every other score
            highestScore = scoreThree; //setting highest score to score three
        } else if (scoreFour >= scoreOne && scoreFour >= scoreTwo && scoreFour >= scoreThree && scoreFour >= scoreFive && scoreFour >= scoreSix) { //if score four is greater than or equal to every other score
            highestScore = scoreFour; //setting highest score to score four
        } else if (scoreFive >= scoreOne && scoreFive >= scoreTwo && scoreFive >= scoreThree && scoreFive >= scoreFour && scoreFive >= scoreSix) { //if score five is greater than or equal to every other score
            highestScore = scoreFive; //setting highest score to score five
        } else if (scoreSix >= scoreOne && scoreSix >= scoreTwo && scoreSix >= scoreThree && scoreSix >= scoreFour && scoreSix >= scoreFive) { //if score six is greater than or equal to every other score
            highestScore = scoreSix; //setting highest score to score six
        }
    
    //formulas
    float totalScore = (scoreOne + scoreTwo + scoreThree + scoreFour + scoreFive + scoreSix); //adding all six scores
    float finalScore = (totalScore - lowestScore - highestScore)/4; //finding mean after subtracting highest and lowest scores
    
    //saying the final score
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
