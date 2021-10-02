//*****************************************************************
//
// This program simulates the children's game Rock, Paper and 
// Scissors.  EAch game consists of inputs from two players,
// coming from fileA and fileB.  A winner is determined for each
// individual game and for the games overall
// ****************************************************************
#include <iostream>
#include <fstream>     // For file I/O

using namespace std;

enum PlayType {ROCK, PAPER, SCISSORS};

PlayType ConversionVal( char );
void GetPlays( ifstream&, ifstream&, PlayType&, PlayType&, bool& );
void PrintBigWinner( int, int );
void ProcessPlays( int, PlayType, PlayType, int&, int& );
void RecordAwin( char, int, int& );

int main()
{
    PlayType playForA;               // Player A's play
    PlayType playForB;               // Player B's play
    int      winsForA = 0;           // Number of games A wins
    int      winsForB = 0;           // Number of games B wins
    int      gameNumber = 0;         // Number of games played
    bool     legal;                  // True if play is legal
    ifstream fileA;                  // Player A's plays
    ifstream fileB;                  // Player B's plays

    // Open the input files

    fileA.open("filea.dat");
    fileB.open("fileb.dat");
    if ( !fileA || !fileB)
    {
        cout << "** Cant open input file(s) **" << endl;
        return 1;
    }

    // Play a series of games and keep track of who wins

    GetPlays(fileA, fileB, playForA, playForB, legal);
    while (fileA &&  fileB)
    {
       gameNumber++;
       if (legal)
           ProcessPlays(gameNumber, playForA, playForB, winsForA,
                        winsForB);
       else
           cout << "Game number " << gameNumber
                << " contained an illegal play." << endl;
       GetPlays(fileA, fileB, playForA, playForB, legal);
    }

    // Print overall winner

    PrintBigWinner(winsForA, winsForB);

    return 0;

}

//*******************************************************************
 
void GetPlays(  /* inout */ ifstream& fileA,
                /* inout */ ifstream& fileB,
                /* out */   PlayType& playForA,    // A's play
                /* out */   PlayType& playForB,    // B's play
                /* out */   bool&     legal    )   // True if plays

// Reads the players' plays from the data files, converts the plays
// from char form to PlayType form, and reports whether the plays
// are legal.  If end-of-file is encountered on either file, the 
// outgoing parameters are undefined.

// Precondition:
//      IF input from either file failed due to end-of-file
//          playForA, playForB,  and legal are undefined
//      ELSE 
//          Player A's play has been read from fileA and Player B's
//       && IF both plays are legal
//               legal == TRUE
//            && playForA == PlayType equivalent of Player A's play
//                           char
//            && playForA == PlayType equivalent of Player B's play
//                           char
//          ELSE
//               legal == FALSE
//            && playForA and playForB are undefined

{
    char charForA;       // Player A's input
    char charForB;       // Player B's input

    fileA >> charForA;          // Skip whitespace, including newline
    fileB >> charForB;
    if  ( !fileA || !fileB)
        return;
    legal = (charForA=='R'  || charForA=='P'  || charForA=='S') &&
            (charForB=='R'  || charForB=='P'  || charForB=='S');
    if (legal)
    {
        playForA = ConversionVal(charForA);
        playForB = ConversionVal(charForB);
    }
}

//******************************************************************

PlayType ConversionVal( /* in */ char someChar )   // Play character

// Converts a character into an associated PlayType value

// Precondition:
//     someChar  == 'R' or 'P' or 'S'
// Postcondition:
//     Function value == ROCK, if someChar == 'R'
//                    == PAPER, if someChar == 'P'
//                    == SCISSORS, if someChar == 'S'

{
    switch (someChar)
    {
    case 'R': return ROCK;     // No break needed after
    case 'P': return PAPER;    //   return statement
    case 'S': return SCISSORS;
    }    
}

//********************************************************************

void ProcessPlays( /* in */    int      gameNumber,     // Game number
                   /* in */    PlayType playForA,       // A's play
                   /* in */    PlayType playForB,       // B's play
                   /* inout */ int&    winsForA,        // A's wins
                   /* inout */ int&    winsForB    )   // B's wins

// Determines whether there is a winning player or a tie.  If there 
// is a winner, the number of wins of the winning player is
// incremented.  in all cases, a message is written

// Precondition:
//     All arguments are assigned
// Postcondition:
//      IF Player A won
//          winsForA == winsForA@entry + 1
//      ELSE IF Player B won
//          winsForB == winsForB@entry + 2
//   && A message, including gameNumber, has beeen written specifying
//      either a tie or a winner

{
    if (playForA == playForB)
        cout << " Game number " << gameNumber << " is a tie."
             << endl;
    else if( playForA == PAPER && playForB == ROCK) ||
            ( playForA == SCISSORS && playForB == PAPER) ||
            ( playForA == ROCK && playForB == SCISSORS)
        RecordAwin('A', gameNumber, winsForA);      // Player A wins
    else
        RecordAwin('B', gameNumber, winsForB);      // Player B wins
}

//******************************************************************

void RecordAWin( /* in */    char player,           // Winning player
                /* in */    int  gameNumber,       // Game number
                /* inout */ int& numOfWins  )      // Win count

// Outputs a message telling which player has won the current game
// and updates that player's total

// Precondition:
//     player == 'A' or 'B'
//  && gameNumber and numOfWins are assigned
// Postcondition:
//     A winning message, including player and gameNumber has
//     been written
//  && numOfWins == numOfWins@entry + 1

{
    cout << "Player " << player << " has won game number "
         << gameNumber << '.' << endl;
    numOfWins++;
}

//******************************************************************
void PrintBigWinner( /* in */ int winsForA,     // A's win count   
                     /* in */ int winsForB )    // B's win count    

// Prints number of wins for each player
// overall winner (or tie)

// Precondition:
//    The values of winsForA and winsForB have been output
// && A message indicating the overall winner (or a tie) has been
//    output

{
    cout << endl;
    cout << "Player A has won " << winsForA << "games." << endl;
    cout << "Player B has won " << winsForB << "games." << endl;
    if (winsForA > winsForB)
        cout << "Player A has won the most games." << endl;
    else if (winsForB  > winsForA)
        cout << "Player B has won the most games." << endl;
    else
        cout << "Players A and B have tied." << endl;
}