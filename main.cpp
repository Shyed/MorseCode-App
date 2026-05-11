// © copyright 2019 Sheila Demonteverde. All Rights Reserved.
// Author: Sheila Demonteverde
// Date: 09-11-2019
// Update dev notes: 05/11/2026 - SD
// Contact: sheilademonteverde@gmail.com
// Description: Morse Code Generator

#include <iostream>
#include <windows.h>  // Used for Beep() and Sleep()
#include <cstring>
using namespace std;

/* FUNCTION PROTOTYPE
Declares the morseCode function before main().
This allows the compiler to recognize the function
even if it is defined later in the program.
*/
    
void morseCode(char);

/* DOT FUNCTION
Plays a short beep sound and displays a dot (.),
representing Morse code dot notation.
*/
void dot()
{
    Beep(400,100); // Frequency: 400 Hz, Duration: 100 milliseconds
    cout<<'.'; // Display Morse code symbol
    Sleep(1000); // Pause before next signal
}

/* DASH FUNCTION
Plays a longer beep sound and displays a dash (-),
representing Morse code dash notation.
*/
void dash()
{
    Beep(500,200); // Frequency: 500 Hz, Duration: 200 milliseconds
    cout<<'-'; // Display Morse code symbol
    Sleep (1000); // Pause before next signal
}

// MAIN FUNCTION: Starting point of the Morse Code Generator program.
int main()
{
    string in; // Stores user input sentence
    cout<<"Enter a Sentence to Convert into Morse Code: "; // Prompt user for input
}
