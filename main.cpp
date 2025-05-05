// © copyright 2019 Sheila Demonteverde. All Rights Reserved.
// Author: Sheila Demonteverde
// Date: 09-11-2019
// Contact: sheilademonteverde@gmail.com
// Description: Morse Code Generator

#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

//FUNCTION PROTOTYPE

void morseCode(char);

void dot()
{
    Beep(400,100);
    cout<<'.';
    Sleep(1000);
}

void dash()
{
    Beep(500,200);
    cout<<'-';
    Sleep (1000);
}

int main()
{
    string in;
    cout<<"Enter a Sentence to Convert into Morse Code: ";
}
