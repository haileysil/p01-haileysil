#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main ()
{
        srand ( time (NULL) );
        int randomNumber;
        int range;
        int input, num_of_turns;
        string difficulty;
        char answer;
        do 
        {
                cout<<"Please select a difficulty level: easy, medium, or hard:"<<endl;
                cin>>difficulty;

                if (difficulty=="easy")
                {
                        range = 2;
                        num_of_turns = 1;
                }

                else if (difficulty=="medium")
                {
                        range = 10;
                        num_of_turns = 2;
                }

                else if (difficulty=="hard")
                {
                        range = 100;
                        num_of_turns = 3;
                }

                else
                {
                        cout<<"Error! You did not enter a difficulty level."<<endl;
                        return 0;
                }

                randomNumber = rand() % range + 1;
                bool winner = false;

                do 
                {
                        cout<<"Guess the computer's number: "<<endl;
                        cin>>input;

                        if (input==randomNumber)
                        {
                                cout<<"You, guessed correctly! You win!"<<endl;
                                winner = true;
                        }
                        else if (randomNumber > input)
                        {
                                cout<<"Your number is too low." <<endl;
                        }
                        else if (randomNumber < input)
                        {
                                cout<<"Your number is too high." <<endl;
                        }
                        num_of_turns--;
                } while ((num_of_turns > 0)&&(winner == false));

                cout<<"The game is over. Would you like to play again? (y/n)"<<endl;
                cin>>answer;
        } while (answer=='y');
        return 0;
}
