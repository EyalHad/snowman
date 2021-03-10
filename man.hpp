
#include <iostream>
#include <string>
#include <algorithm>


/*

Example for a simple Snowman

             HHHHH
  _===_      HHHHH
  (.,.)     X(LNR)Y
  ( : )     X(TTT)Y
  ( : )      (BBB)

HERE IS A STORAGE:

H, represent = hat 
X, represent = left arm
L, represent = left eye
N, represent = nose
R, represent = right eye
Y, represent = right arm
T, represent = torso 
B, represent = base

For more details:
https://codegolf.stackexchange.com/q/49671/12019

The building procedure will be LINE by LINE
 
LINE\n      First 2 lines will be H only
LINE\n      Two with First
LINE\n      Third line is a bit complex, right\left arms will appear if it upwards " " else
LINE\n      Forth line same as third just downwards for right\left arms.
LINE\n      Fifth line will be B only

*/

namespace man{

    // samples
    const std::string HAT[4] =
    {
        "     \n_===_", //1
        " ___ \n.....", //2
        "  _  \n /_\\ ",//3
        " ___ \n(_*_)"  //4
    };

    const std::string NOSE[4] = 
    {
        ",",
        ".",
        "_",
        " "
    };

    const std::string EYE[4] = 
    {
        ".",
        "o",
        "0",
        "-"
    };

    // just 1 character for left upwards arm else " "
    const std::string LEFT_ARM_U[4] = 
    { 
        " ",
        "\\",
        " ",
        " "
    };

    // 2 characters for left downwards arm else " "
    const std::string LEFT_ARM_D[4] = 
    {
        "<",
        " ",
        "/",
        " "
    };
    // just 1 character for right upwards arm else " "
    const std::string RIGHT_ARM_U[4] = 
    {
        " ",
        "/",
        " ",
        " "
    };

    // 2 characters for right downwards arm else " "
    const std::string RIGHT_ARM_D[4] = 
    {
        ">",
        " ",
        "\\",
        " ",
    };

    const std::string TORSO[4] = 
    {
        " : ",
        "] [",
        "> <",
        "   "
    };

    const std::string BASE[4] = 
    {
        " : ",
        "\" \"",
        "___",
        "   "
    };


};
