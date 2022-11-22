/***************************************************************************************************
 * ** asthree.cpp
 * ** Author: Kaushik Dontula
 * ** Date: 05/05/2022
 * ** Description: This program is a simulation of the game 21. This game is a casino game which is similar to the game of black jack. It uses user inputs as well as random functions. 
 * ** Input: the user inputs how much money they come to the casino with, how much they would like to bet, and if they would like to play again.
 * ** Output: There are many different outputs throughout the game. You can win your bet, you can lose your bet, you can tie with the dealer. After this, you can choose to play the game again if you have enough money.
 * **************************************************************************************************/


#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;


int main(){


int running_total1=0;
int running_total2=0;
int running_total3=0;
int running_total4=0;
int playagain1=0;
int playagain2=0;
int playagain3=0;
int playagain4=0;
int Dealersrunningtotal1=0;
int Dealersrunningtotal2=0;
int Dealersrunningtotal3=0;
int Dealersrunningtotal4=0;
int player1money=0;
int player2money=0;
int player3money=0;
int player4money=0;
int playeronebet=0;
int playertwobet=0;
int playerthreebet=0;
int playerfourbet=0;


    srand(time(NULL));

    //extra credit: asking the user their difficulty level and making the odds for the dealer winning, higher or lower
        cout << endl << "What difficulty level would you like? (E-Easy M-Medium H-Hard): ";
        char difficulty;
        cin >> difficulty;
        while ((difficulty != 'E') && (difficulty != 'M')&& (difficulty != 'H')){
            cout << "That was not a invalid input. Please enter (E-Easy M-Medium H-Hard) ";
            cin >> difficulty;
        }

        cout << endl << "How many players do you have (1-4): ";
        int players;
        cin >> players;

        while ((players != 4) && (players != 3)&& (players != 2)&& (players != 1)){
            cout << "That was not a invalid input. Please enter players 1-4: ";
            cin >> players;
        }

    //players bank accounts to proceed to the game, these banks accounts will also decide if the players have to leave the casino

    while(players==1||2||3||4){

        switch(players)
        {
            case 1:{
                cout << endl << "Player 1, how much money are you starting with: ";
                cin >> player1money;
                while (player1money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player1money;
                }
                break;
            }
            case 2:{
                cout << endl << "Player 1, how much money are you starting with: ";
                cin >> player1money;
                while (player1money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player1money;
                }
                cout << "Player 2, how much money are you starting with: ";
                cin >> player2money;
                while (player2money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player2money;
                }
                break;
            }
            case 3: {
                cout << endl << "Player 1, how much money are you starting with: ";
                cin >> player1money;
                while (player1money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player1money;
                }
                cout << "Player 2, how much money are you starting with: ";
                cin >> player2money;
                while (player2money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player2money;
                }
                cout << "Player 3, how much money are you starting with: ";
                cin >> player3money;
                while (player3money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player3money;
                }
                break;
            }
            case 4: {
                cout << endl << "Player 1, how much money are you starting with: ";
                cin >> player1money;
                while (player1money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player1money;
                }
                cout << "Player 2, how much money are you starting with: ";
                cin >> player2money;
                while (player2money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player2money;
                }
                cout << "Player 3, how much money are you starting with: ";
                cin >> player3money;
                while (player3money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player3money;
                }
                cout << "Player 4, how much money are you starting with: ";
                cin >> player4money;
                while (player4money<1){
                    cout << "That is not a valid amount of money to start with, please enter another number: ";
                    cin >> player4money;
                }
                break;
            }
            default:{
                cout << "That is not a valid amount of players: ";
                cin >> players;
            }
        }
    




    //this loop makes players leave the casino if all the players in the game have $0
        do{
            if (player1money >0 || player2money > 0 || player3money || player4money >0){
            switch(players)
            {


            //case 1 is only for one player game
                //this is player 1's turn        
                case 1:{
                    if (player1money>0){
                        cout <<endl <<  "Player 1's turn..." << endl;

                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playeronebet;
                        running_total1=0;

                        while ((playeronebet>player1money)||(playeronebet<1)){
                            cout << "That is an invalid bet amount, please enter a different amount: ";
                            cin >> playeronebet;
                        }

                        while(playeronebet<=player1money){
                            player1money -= playeronebet;
                            int anothernumber=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total1+= num1;
                                cout << "Player 1, you got a " << num1 << ". Your running total is: " << running_total1;
                            
                            //game rules for the players turn
                                if (running_total1==21){
                                    cout << "you win! Your betmoneyx2 has been added to your account " << endl;
                                    player1money+=playeronebet*2;

                                    break;
                                }
                                if (running_total1>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total1<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber;
                                    while((anothernumber !=1) && (anothernumber!=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber;
                                    }
                                    
                                }
                                
                            }
                            while(anothernumber==1);

                            while(anothernumber==0)
                            {
                                cout << "Your total points are: " << running_total1 << endl << endl;
                                break;
                            }
                        
                        

                        //this is the dealers turn
                            if(running_total1<21){

                                Dealersrunningtotal1=0;
                                cout << "Dealers turn..." << endl;

                                if (difficulty=='E'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 15+1;
                                        Dealersrunningtotal1+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                    }
                                }
                                if (difficulty=='M'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 11+1;
                                        Dealersrunningtotal1+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                    }
                                }
                                if (difficulty=='H'){
                                    for (int i=0; i < 1; i++){
                                        int num1;
                                        num1 = rand()% 2+19;
                                        Dealersrunningtotal1+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                    }
                                }
                                cout << "The dealers total points are: " << Dealersrunningtotal1 << endl;
                            
                            //game rules for dealers turn
                                if (Dealersrunningtotal1>21){
                                        cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                        player1money+=playeronebet*2;
                                        break;
                                }
                                if (Dealersrunningtotal1<21){
                                    int player1score;
                                    player1score=21-running_total1;
                                    int dealerscore1;
                                    dealerscore1=21-Dealersrunningtotal1;

                                    if (dealerscore1>player1score){
                                        cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                        player1money+=playeronebet*2;
                                    }
                                    else if(player1score>dealerscore1){
                                        cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                    }
                                    else if(player1score==dealerscore1){
                                        cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                        player1money+=playeronebet;
                                    }
                                }
                            }
                            cout << "Player 1 you have $" << player1money << " left" << endl;
                            break;
                        }
                    //play again statement
                        cout << endl << "Do you want to play again? 0-no 1-yes ";
                        cin >> playagain1;
                        while((playagain1 !=1) && (playagain1!=0)){
                        cout << "This is not a valid input please try again with either a 0 or 1: ";
                        cin >>playagain1;
                        }
                        break;
                    }
                }
                












                case 2:{
                //this game is a two player game  
                    
                //player 1 code
                    if (player1money>0){
                        cout << endl << endl;
                        cout << "Player 1's turn..." << endl;
                        
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playeronebet;
                        running_total1=0;

                        while ((playeronebet>player1money)||(playeronebet<1)){
                            cout << "That is an invalid bet, please enter a different amount: ";
                            cin >> playeronebet;
                        }

                        while(playeronebet<=player1money){
                            player1money -= playeronebet;
                            int anothernumber=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total1+= num1;
                                cout << "Player 1, you got a " << num1 << ". Your running total is: " << running_total1;

                            //these are the rules for player 1's turn
                                if (running_total1==21){
                                    cout << "you win! Your betmoneyx2 has been added to your account " << endl;
                                    player1money+=playeronebet*2;

                                    break;
                                }
                                if (running_total1>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total1<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber;
                                    while((anothernumber !=1) && (anothernumber !=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber;
                                    }
                                }
                                
                            }
                            while(anothernumber==1);

                            while(anothernumber==0)
                            {
                                cout << "Your total points are: " << running_total1 << endl << endl;
                                break;
                            }

                    //this is the dealers turn
                        if(running_total1<21){

                            Dealersrunningtotal1=0;
                            cout << "Dealers turn..." << endl;

                           if (difficulty=='E'){
                                for (int i=0; i < 2; i++){
                                    int num1;
                                    num1 = rand()% 15+1;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                }
                            }
                            if (difficulty=='M'){
                                for (int i=0; i < 2; i++){
                                    int num1;
                                    num1 = rand()% 11+1;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                }
                            }
                            if (difficulty=='H'){
                                for (int i=0; i < 1; i++){
                                    int num1;
                                    num1 = rand()% 2+19;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                    }
                            }

                            cout << "The dealers total points are: " << Dealersrunningtotal1 << endl;

                        //rules for the dealers turn playing against player 1
                            if (Dealersrunningtotal1>21){
                                    cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                    player1money+=playeronebet*2;
                            }
                            if (Dealersrunningtotal1<21){
                                int player1score;
                                player1score=21-running_total1;
                                int dealerscore1;
                                dealerscore1=21-Dealersrunningtotal1;

                                if (dealerscore1>player1score){
                                    cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                    player1money+=playeronebet*2;
                                }
                                else if(player1score>dealerscore1){
                                    cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                }
                                else if(player1score==dealerscore1){
                                    cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                    player1money+=playeronebet;
                                }
                            }
                            }
                                cout << "Player 1 you have $" << player1money << " left" << endl << endl;
                                break;
                            }
                        }
                        



                //player 2 code
                    if (player2money>0){
                        cout << "Player 2's turn..." << endl;
                        
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playertwobet;
                        running_total2=0;


                        while((playertwobet>player2money)||(playertwobet<1)){
                            cout << "That is an invalid bet amount, please enter a different amount: ";
                            cin >> playertwobet;
                        }

                        while(playertwobet<=player2money){
                            player2money -= playertwobet;
                            int anothernumber2=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total2+= num1;
                                cout << "Player 2, you got a " << num1 << ". Your running total is: " << running_total2;
                                //cin >> anothernumber2;

                            //rules for player 2 turn
                                if (running_total2==21){
                                    cout << " you win! Your betmoneyx2 has been added to your account " << endl;
                                    player2money+=playertwobet*2;
                                    break;
                                }
                                if (running_total2>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total2<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber2;
                                    while((anothernumber2 !=1) && (anothernumber2!=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber2;
                                    }
                                }
                            }
                            while(anothernumber2==1);
                            while(anothernumber2==0)
                            {
                                cout << "Your total points are: " << running_total2 << endl << endl;
                                break;
                            }

                        //this is the dealers turn
                            if (running_total2<21){

                                Dealersrunningtotal2=0;
                                cout << "Dealers turn..." << endl;


                                if (difficulty=='E'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 15+1;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                    }
                                }
                                if (difficulty=='M'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 11+1;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                    }
                                }
                                if (difficulty=='H'){
                                    for (int i=0; i < 1; i++){
                                        int num1;
                                        num1 = rand()% 2+19;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                        }
                                }

                                cout << "The dealers total points are: " << Dealersrunningtotal2 << endl;
                            
                            //these are the rules for the dealers turn against player 2
                                if (Dealersrunningtotal2>21){
                                        cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                        player2money+=playertwobet*2;
                                }
                                if (Dealersrunningtotal2<21){
                                    int player2score;
                                    player2score=21-running_total2;
                                    int dealerscore2;
                                    dealerscore2=21-Dealersrunningtotal2;

                                    if (dealerscore2>player2score){
                                        cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                        player2money+=playertwobet*2;
                                    }
                                    else if(player2score>dealerscore2){
                                        cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                    }
                                    else if(player2score==dealerscore2){
                                        cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                        player2money+=playertwobet;
                                    }
                                }
                            }
                                cout << "Player 2 you have $" << player2money << " left" << endl;
                                break;
                        }
                    }
                //play again statement
                    cout << endl << "Do you want to play again? 0-no 1-yes ";
                    cin >> playagain1;
                    while((playagain1 !=1) && (playagain1!=0)){
                        cout << "This is not a valid input please try again with either a 0 or 1: ";
                        cin >>playagain1;
                    }
                break;
                }















                case 3:{
                    cout << endl;
                //this game is for 3 players
                
                //player 1 code
                    if (player1money>0){
                        cout << "Player 1's turn..." << endl;
                        
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playeronebet;
                        running_total1=0;

                        while ((playeronebet>player1money)||(playeronebet<1)){
                            cout << "This is an invalid bet amount, please enter a different amount: ";
                            cin >> playeronebet;
                        }

                        while(playeronebet<=player1money){
                            player1money -= playeronebet;
                            int anothernumber=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total1+= num1;
                                cout << "Player 1, you got a " << num1 << ". Your running total is: " << running_total1;

                            //these are the rules for player 1 turn
                                if (running_total1==21){
                                    cout << "you win! Your betmoneyx2 has been added to your account " << endl;
                                    player1money+=playeronebet*2;

                                    break;
                                }
                                if (running_total1>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total1<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber;
                                    while((anothernumber !=1) && (anothernumber!=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber;
                                    }
                                }
                                
                            }
                            while(anothernumber==1);

                            while(anothernumber==0)
                            {
                                cout << "Your total points are: " << running_total1 << endl << endl;
                                break;
                            }

                    //this is the dealers turn
                        if(running_total1<21){

                            Dealersrunningtotal1=0;
                            cout << "Dealers turn..." << endl;

                            if (difficulty=='E'){
                                for (int i=0; i < 2; i++){
                                    int num1;
                                    num1 = rand()% 15+1;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                }
                            }
                            if (difficulty=='M'){
                                for (int i=0; i < 2; i++){
                                    int num1;
                                    num1 = rand()% 11+1;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                }
                            }
                            if (difficulty=='H'){
                                for (int i=0; i < 1; i++){
                                    int num1;
                                    num1 = rand()% 2+19;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                }
                            }

                            cout << "The dealers total points are: " << Dealersrunningtotal1 << endl;

                        //these are the rules for the dealers turn against player 1
                            if (Dealersrunningtotal1>21){
                                    cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                    player1money+=playeronebet*2;
                            }
                            if (Dealersrunningtotal1<21){
                                int player1score;
                                player1score=21-running_total1;
                                int dealerscore1;
                                dealerscore1=21-Dealersrunningtotal1;

                                if (dealerscore1>player1score){
                                    cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                    player1money+=playeronebet*2;
                                }
                                else if(player1score>dealerscore1){
                                    cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                }
                                else if(player1score==dealerscore1){
                                    cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                    player1money+=playeronebet;
                                }
                            }
                            }
                                cout << "Player 1 you have $" << player1money << " left" << endl << endl;
                                break;
                            }
                    }


                
                //player 2 code
                    if (player2money>0){
                        cout << "Player 2's turn..." << endl;
                        
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playertwobet;
                        running_total2=0;


                        while((playertwobet>player2money)||(playertwobet<1)){
                            cout << "This is an invalid bet, please enter a different amount: ";
                            cin >> playertwobet;
                        }

                        while(playertwobet<=player2money){
                            player2money -= playertwobet;
                            int anothernumber2=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total2+= num1;
                                cout << "Player 2, you got a " << num1 << ". Your running total is: " << running_total2;
                                //cin >> anothernumber2;

                            //rules for player 2 turn
                                if (running_total2==21){
                                    cout << " you win! Your betmoneyx2 has been added to your account " << endl;
                                    player2money+=playertwobet*2;
                                    break;
                                }
                                if (running_total2>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total2<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber2;
                                    while((anothernumber2 !=1) && (anothernumber2 !=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber2;
                                    }
                                }
                            }
                            while(anothernumber2==1);

                            while(anothernumber2==0)
                            {
                                cout << "Your total points are: " << running_total2 << endl << endl;
                                break;
                            }

                        //this is the dealers turn
                            if (running_total2<21){

                                Dealersrunningtotal2=0;
                                cout << "Dealers turn..." << endl;

                                if (difficulty=='E'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 15+1;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                    }
                                }
                                if (difficulty=='M'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 11+1;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                    }
                                }
                                if (difficulty=='H'){
                                    for (int i=0; i < 1; i++){
                                        int num1;
                                        num1 = rand()% 2+19;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                        }
                                }
                                cout << "The dealers total points are: " << Dealersrunningtotal2 << endl;

                            //these are the rules for the dealer playing against player 2
                                if (Dealersrunningtotal2>21){
                                        cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                        player2money+=playertwobet*2;
                                }
                                if (Dealersrunningtotal2<21){
                                    int player2score;
                                    player2score=21-running_total2;
                                    int dealerscore2;
                                    dealerscore2=21-Dealersrunningtotal2;

                                    if (dealerscore2>player2score){
                                        cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                        player2money+=playertwobet*2;
                                    }
                                    else if(player2score>dealerscore2){
                                        cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                    }
                                    else if(player2score==dealerscore2){
                                        cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                        player2money+=playertwobet;
                                    }
                                }
                            }
                                cout << "Player 2 you have $" << player2money << " left" << endl;
                                break;
                        }
                    }



                //player 3 code
                    if (player3money>0){
                        cout << endl<< "Player 3's turn..." << endl;
                    
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playerthreebet;
                        running_total3=0;

                        while((playerthreebet>player3money)||(playerthreebet<1)){
                            cout << "This is an invalid bet, please enter a different amount: ";
                            cin >> playerthreebet;
                        }

                        while(playerthreebet<=player3money){
                            player3money -= playerthreebet;
                            int anothernumber3=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total3+= num1;
                                cout << "Player 3, you got a " << num1 << ". Your running total is: " << running_total3;
                                //cin >> anothernumber3;

                            //these are the rules for player 3
                                if(running_total3==21){
                                    cout << " you win! Your betmoneyx2 has been added to your account " << endl;
                                    player3money+=playerthreebet*2;
                                    break;
                                }
                                if (running_total3>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total3<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber3;
                                    while((anothernumber3 !=1) && (anothernumber3 !=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber3;
                                    }
                                }
                            }
                            while(anothernumber3==1);

                            while(anothernumber3==0)
                            {
                                cout << "Your total points are: " << running_total3 << endl << endl;
                                break;
                            }

                        //this is the dealers turn
                            if (running_total3<21){

                                Dealersrunningtotal3=0;
                                cout << "Dealers turn..." << endl;

                                if (difficulty=='E'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 15+1;
                                        Dealersrunningtotal3+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal3 << endl;
                                    }
                                }
                                if (difficulty=='M'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 11+1;
                                        Dealersrunningtotal3+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal3 << endl;
                                    }
                                }
                                if (difficulty=='H'){
                                    for (int i=0; i < 1; i++){
                                        int num1;
                                        num1 = rand()% 2+19;
                                        Dealersrunningtotal3+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal3 << endl;
                                        }
                                }
                                cout << "The dealers total points are: " << Dealersrunningtotal3 << endl;

                            //these are the rules for the dealer who is playing against player 3
                                if (Dealersrunningtotal3>21){
                                        cout << " You win! Your betmoneyx2 has been added to your account" << endl;
                                        player3money+=playerthreebet*2;
                                }
                                if (Dealersrunningtotal3<21){
                                    int player3score;
                                    player3score=21-running_total3;
                                    int dealerscore3;
                                    dealerscore3=21-Dealersrunningtotal3;

                                    if (dealerscore3>player3score){
                                        cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                        player3money+=playerthreebet*2;
                                    }
                                    else if(player3score>dealerscore3){
                                        cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                    }
                                    else if(player3score==dealerscore3){
                                        cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                        player3money+=playerthreebet;
                                    }
                                }
                            }
                            cout << "Player 3 you have $" << player3money << " left" << endl << endl;
                            break;
                        }
                    }
                //play again statement
                    cout << endl << "Do you want to play again? 0-no 1-yes ";
                    cin >> playagain1;
                    while((playagain1 !=1) && (playagain1!=0)){
                        cout << "This is not a valid input please try again with either a 0 or 1: ";
                        cin >>playagain1;
                    }

                    break;
                }















                case 4:{
                    cout << endl;
        
                //player 1 code
                    if (player1money>0){
                        cout << "Player 1's turn..." << endl;
                        
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playeronebet;
                        running_total1=0;

                        while ((playeronebet>player1money)||(playeronebet<1)){
                            cout << "This is an invalid bet amount, please enter a different amount: ";
                            cin >> playeronebet;
                        }

                        while(playeronebet<=player1money){
                            player1money -= playeronebet;
                            int anothernumber=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total1+= num1;
                                cout << "Player 1, you got a " << num1 << ". Your running total is: " << running_total1;

                            //these are the rules for player 1
                                if (running_total1==21){
                                    cout << "you win! Your betmoneyx2 has been added to your account " << endl;
                                    player1money+=playeronebet*2;

                                    break;
                                }
                                if (running_total1>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total1<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber;
                                    while((anothernumber !=1) && (anothernumber !=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber;
                                    }
                                }
                                
                            }
                            while(anothernumber==1);

                            while(anothernumber==0)
                            {
                                cout << "Your total points are: " << running_total1 << endl << endl;
                                break;
                            }

                    //this is the dealers turn
                        if(running_total1<21){

                            Dealersrunningtotal1=0;
                            cout << "Dealers turn..." << endl;

                            if (difficulty=='E'){
                                for (int i=0; i < 2; i++){
                                    int num1;
                                    num1 = rand()% 15+1;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                }
                            }
                            if (difficulty=='M'){
                                for (int i=0; i < 2; i++){
                                    int num1;
                                    num1 = rand()% 11+1;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                }
                            }
                            if (difficulty=='H'){
                                for (int i=0; i < 1; i++){
                                    int num1;
                                    num1 = rand()% 2+19;
                                    Dealersrunningtotal1+=num1;
                                    cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal1 << endl;
                                    }
                            }
                            cout << "The dealers total points are: " << Dealersrunningtotal1 << endl;

                        //these are the rules for the dealer playing against player 1
                            if (Dealersrunningtotal1>21){
                                    cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                    player1money+=playeronebet*2;
                            }
                            if (Dealersrunningtotal1<21){
                                int player1score;
                                player1score=21-running_total1;
                                int dealerscore1;
                                dealerscore1=21-Dealersrunningtotal1;

                                if (dealerscore1>player1score){
                                    cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                    player1money+=playeronebet*2;
                                }
                                else if(player1score>dealerscore1){
                                    cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                }
                                else if(player1score==dealerscore1){
                                    cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                    player1money+=playeronebet;
                                }
                            }
                            }
                                cout << "Player 1 you have $" << player1money << " left" << endl << endl;
                                break;
                            }
                    }


        //player 2 code
                    if (player2money>0){
                        cout << "Player 2's turn..." << endl;
                        
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playertwobet;
                        running_total2=0;


                        while((playertwobet>player2money)||(playertwobet<1)){
                            cout << "That is an invalid bet amount, please enter a different amount: ";
                            cin >> playertwobet;
                        }

                        while(playertwobet<=player2money){
                            player2money -= playertwobet;
                            int anothernumber2=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total2+= num1;
                                cout << "Player 2, you got a " << num1 << ". Your running total is: " << running_total2;
                                //cin >> anothernumber2;

                            //these are the rules for player 2
                                if (running_total2==21){
                                    cout << " you win! Your betmoneyx2 has been added to your account " << endl;
                                    player2money+=playertwobet*2;
                                    break;
                                }
                                if (running_total2>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total2<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber2;
                                    while((anothernumber2 !=1) && (anothernumber2 !=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber2;
                                    }
                                }
                            }
                            while(anothernumber2==1);

                            while(anothernumber2==0)
                            {
                                cout << "Your total points are: " << running_total2 << endl << endl;
                                break;
                            }

                        //this is the dealers turn
                            if (running_total2<21){

                                Dealersrunningtotal2=0;
                                cout << "Dealers turn..." << endl;

                                if (difficulty=='E'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 15+1;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                    }
                                }
                                if (difficulty=='M'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 11+1;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                    }
                                }
                                if (difficulty=='H'){
                                    for (int i=0; i < 1; i++){
                                        int num1;
                                        num1 = rand()% 2+19;
                                        Dealersrunningtotal2+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal2 << endl;
                                        }
                                }
                                cout << "The dealers total points are: " << Dealersrunningtotal2 << endl;

                            //these are the rules for the dealer playing against player 2
                                if (Dealersrunningtotal2>21){
                                        cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                        player2money+=playertwobet*2;
                                }
                                if (Dealersrunningtotal2<21){
                                    int player2score;
                                    player2score=21-running_total2;
                                    int dealerscore2;
                                    dealerscore2=21-Dealersrunningtotal2;

                                    if (dealerscore2>player2score){
                                        cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                        player2money+=playertwobet*2;
                                    }
                                    else if(player2score>dealerscore2){
                                        cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                    }
                                    else if(player2score==dealerscore2){
                                        cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                        player2money+=playertwobet;
                                    }
                                }
                            }
                                cout << "Player 2 you have $" << player2money << " left" << endl;
                                break;
                        }
                    }


                //player 3 code
                    if (player3money>0){
                        cout << endl<< "Player 3's turn..." << endl;
                    
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playerthreebet;
                        running_total3=0;

                        while((playerthreebet>player3money)||(playerthreebet<1)){
                            cout << "That is an invalid bet amount, please enter a different amount: ";
                            cin >> playerthreebet;
                        }

                        while(playerthreebet<=player3money){
                            player3money -= playerthreebet;
                            int anothernumber3=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total3+= num1;
                                cout << "Player 3, you got a " << num1 << ". Your running total is: " << running_total3;

                            //these are the rules for player 3
                                if(running_total3==21){
                                    cout << " you win! Your betmoneyx2 has been added to your account " << endl;
                                    player3money+=playerthreebet*2;
                                    break;
                                }
                                if (running_total3>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total3<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber3;
                                    while((anothernumber3 !=1) && (anothernumber3 !=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber3;
                                    }
                                }
                            }
                            while(anothernumber3==1);

                            while(anothernumber3==0)
                            {
                                cout << "Your total points are: " << running_total3 << endl << endl;
                                break;
                            }

                        //this is the dealers turn
                            if (running_total3<21){

                                Dealersrunningtotal3=0;
                                cout << "Dealers turn..." << endl;

                                if (difficulty=='E'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 15+1;
                                        Dealersrunningtotal3+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal3 << endl;
                                    }
                                }
                                if (difficulty=='M'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 11+1;
                                        Dealersrunningtotal3+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal3 << endl;
                                    }
                                }
                                if (difficulty=='H'){
                                    for (int i=0; i < 1; i++){
                                        int num1;
                                        num1 = rand()% 2+19;
                                        Dealersrunningtotal3+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal3 << endl;
                                        }
                                }
                                cout << "The dealers total points are: " << Dealersrunningtotal3 << endl;

                            //these are the rules for the dealer playing against player 3
                                if (Dealersrunningtotal3>21){
                                        cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                        player3money+=playerthreebet*2;
                                }
                                if (Dealersrunningtotal3<21){
                                    int player3score;
                                    player3score=21-running_total3;
                                    int dealerscore3;
                                    dealerscore3=21-Dealersrunningtotal3;

                                    if (dealerscore3>player3score){
                                        cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                        player3money+=playerthreebet*2;
                                    }
                                    else if(player3score>dealerscore3){
                                        cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                    }
                                    else if(player3score==dealerscore3){
                                        cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                        player3money+=playerthreebet;
                                    }
                                }
                            }
                            cout << "Player 3 you have $" << player3money << " left" << endl << endl;
                            break;
                        }
                    }


                //player 4 code
                    if (player4money>0){
                        cout << "Player 4's turn..." << endl;
    
                        cout << "How much do you bet you can beat the dealer: ";
                        cin >> playerfourbet;
                        running_total4=0;

                        while((playerfourbet>player4money)||(playerfourbet<1)){
                            cout << "This is an invalid bet amount, please enter a different amount: ";
                            cin >> playerfourbet;
                        }

                        while(playerfourbet<=player4money){
                            player4money -= playerfourbet;
                            int anothernumber4=1;
                            do{
                                int num1;
                                num1 = rand()% 11+1;
                                running_total4+= num1;
                                cout << "Player 4, you got a " << num1 << ". Your running total is: " << running_total4 << ". Do you want another number? (0-no 1-yes)";

                            //these are the rules for player 4
                                if (running_total4==21){
                                    cout << " you win! Your betmoneyx2 has been added to your account " << endl;
                                    player4money+=playerfourbet*2;
                                    break;
                                }
                                if (running_total4>21){
                                    cout << endl << "You lost the bet, your bet money has been deducted from your account..." << endl;
                                    break;
                                }
                                if (running_total4<21){
                                    cout << " Do you want another number? (0-no 1-yes)";
                                    cin >> anothernumber4;
                                    while((anothernumber4 !=1) && (anothernumber4 !=0)){
                                    cout << "This is not a valid input please try again with either a 1 or 0: ";
                                    cin >>anothernumber4;
                                    }
                                }
                            }
                            while(anothernumber4==1);

                            while(anothernumber4==0)
                            {
                                cout << "Your total points are: " << running_total4 << endl << endl;
                                break;
                            }

                        //this is the dealers turn
                            if(running_total4<21){
                                Dealersrunningtotal4=0;
                                cout << "Dealers turn..." << endl;

                                if (difficulty=='E'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 15+1;
                                        Dealersrunningtotal4+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal4 << endl;
                                    }
                                }
                                if (difficulty=='M'){
                                    for (int i=0; i < 2; i++){
                                        int num1;
                                        num1 = rand()% 11+1;
                                        Dealersrunningtotal4+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal4 << endl;
                                    }
                                }
                                if (difficulty=='H'){
                                    for (int i=0; i < 1; i++){
                                        int num1;
                                        num1 = rand()% 2+19;
                                        Dealersrunningtotal4+=num1;
                                        cout << "The dealer gets a(an) "<< num1 <<". The dealers running total is " << Dealersrunningtotal4 << endl;
                                    }
                                }
                                
                                 cout << "The dealers total points are: " << Dealersrunningtotal4 << endl;

                            //these are the rules for the dealer playing against player 4
                                if (Dealersrunningtotal4>21){
                                        cout << "You win! Your betmoneyx2 has been added to your account" << endl;
                                        player4money+=playerfourbet*2;
                                }
                                if (Dealersrunningtotal4<21){
                                    int player4score;
                                    player4score=21-running_total4;
                                    int dealerscore4;
                                    dealerscore4=21-Dealersrunningtotal4;

                                    if (dealerscore4>player4score){
                                        cout << "You were the one closer to 21 so... You win! Your betmoneyx2 has been added to your account" << endl;
                                        player4money+=playerfourbet*2;
                                    }
                                    else if(player4score>dealerscore4){
                                        cout << "You were the further away from 21 so... You lost... Your betmoney has been deducted from your account" << endl;

                                    }
                                    else if(player4score==dealerscore4){
                                        cout << "You and the dealer tied, you get to keep your bet money" << endl;
                                        player4money+=playerfourbet;
                                    }
                                }
                            }
                            cout << "Player 4 you have $" << player4money << " left" << endl << endl;
                            break;
                        }
                    }    
                //play again statement
                    cout << "Would you like to play again OR cash out (1-play again 0-cashout): ";
                    cin >> playagain1;
                    while((playagain1 !=1) && (playagain1!=0)){
                        cout << "This is not a valid input please try again with either a 0 or 1: ";
                        cin >>playagain1;
                    }
                break;
                }

                default:{
                    cout << endl << "You have inputted an invalid player number please try again." << endl;
                break;
                }
            }
            } else if (player1money ==0 || player2money == 0 || player3money==0 || player4money ==0){
                cout << "You have no money please leave the casino!" << endl;
                break;
            }
        }while(playagain1==1);

        while (playagain1 ==0){
            cout << endl << "you have cashed out..." << endl;;
            break;
        }
    break;
    }

return 0;
}

