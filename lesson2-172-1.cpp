//
//  main.cpp
//  Lesson2-172-1
//
//  Created by Yushen Chang on 1/31/16.
//  Copyright (c) 2016 yushen chang. All rights reserved.
//

#include <iostream>
using namespace std;


int main()
{
    
//Welcom to rock, paper, scissors!
    char player1;
    char player2;
    char choice;
    
    
//Do While Loop
    do {
        //player1
        cout << "Player1 please choose r, p, or s" << endl;
        cin  >> player1;
        
        //player2
        cout << "Player2 please choose r, p, or s" << endl;
        cin >> player2;
        
        
//if statement
        if (player1 != 'p' && player1 != 'P'
            && player1 != 'r' && player1 != 'R'
            && player1 != 's' && player1 != 'S'
            && player2 != 'p' && player2 != 'P'
            && player2 != 'r' && player2 != 'R'
            && player2 != 's' && player2 != 'S'
            )
        {
        //Display error message for invalid choice
        
        cout << "you have entered an invalid choice!" << endl;
            
            
            
            
            
            
        }
        
    //player1 chooses paper
        
        //Verify if player1 chooses ('p' or 'P' for paper)
        else if (player1 == 'p' || player1 == 'P')
        {
        //player2 chooses rock
            if (player2 == 'r' || player2 == 'R')
            {
                cout << "paper covers rock" << endl;
                cout << "player1 is victorious" << endl;
                
            }
            
        //player2 chooses scissors
            if (player2 == 's' || player2 == 'S')
            {
                cout << "scissors beats paper!" << endl;
                cout << "player2 is victorious" << endl;
                
            }
            
        //draw
            else
            {
                cout << "it's a draw!" << endl;
                
            
            }
            //end of if-else statement
        }
        
        
        //player1 chooses rock
        else if (player1 == 'r' || player1 == 'R')
        {
         //player 2 chooses scissors
            if (player2 == 's' || player2 == 'S')
            {
                cout << "rock beats scissors" << endl;
                cout << "player1 wins" << endl;
                
            }
            
        //player2 chooses paper
            else if (player2 == 'p' || player2 == 'P')
            {
                cout << "paper beats rock" << endl;
                cout << "player2 wins!" << endl;
                
            }
            
            //draw
            
            else
            {
                cout << "rock does not beat rock" << endl;
                cout << "no winners!" << endl;
            }
            //end of if else
        }
        
        //player1 chooses scissors
            else if (player1 == 's' || player1 == 'S')
            {
                
              //player 2 chooses rock
                if ( player2 == 'r' || player2 == 'R')
              {
                  cout << "rock beat scissors" << endl;
                  cout << "player2 is the winner!" << endl;
              }
             //player2 chooses paper
                if (player2 == 'p' || player2 == 'P')
             {
                 cout << "scissors beats paper" << endl;
                 cout << "player1 is the winner!" << endl;
        
                
            }
                
            //Draw
                else
                {
                    cout << "its a draw" << endl;
                }
            //end of else-if
            }
        
            
            
            //Replay?
        cout << "do you want to play again? 'y' or 'Y' for yes or 'n' or 'N' for no." << endl;
        cin >> choice;
        
        }
            

    while ( choice == 'y' || choice == 'Y');
 
  
    

   
    return 0;
}

