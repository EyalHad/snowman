#include "doctest.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <array>
using namespace std;
#include "snowman.hpp"
using namespace ariel;

int randomBetween(int min,int max) {
    return rand()%(max-min)+min;
}
   
TEST_CASE("For All Hats")      // -H snowman(HLNRXYTB) order for parts
    {                  
    CHECK(snowman(12341234) == "\n _===_\n (o_-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(22341234) == "\n  ___ \n .....\n (o_-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(32341234) == "\n   _  \n  /_\\ \n (o_-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(42341234) == "\n  ___ \n (_*_)\n (o_-)/\n<(>:<)\n (   )\n");
    }
TEST_CASE("For All Left Eyes") // -L snowman(HLNRXYTB) order for parts
    {              
    CHECK(snowman(11341234) == "\n _===_\n (._-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12341234) == "\n _===_\n (o_-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(13341234) == "\n _===_\n (0_-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(14341234) == "\n _===_\n (-_-)/\n<(>:<)\n (   )\n");
    }
TEST_CASE("For All Noses")     // -N snowman(HLNRXYTB) order for parts
    {                
    CHECK(snowman(12141234) == "\n _===_\n (o,-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12241234) == "\n _===_\n (o.-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12341234) == "\n _===_\n (o_-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12441234) == "\n _===_\n (o -)/\n<(>:<)\n (   )\n");
    }
TEST_CASE("For All Right Eyes")// -R snowman(HLNRXYTB) order for parts
    {            
    CHECK(snowman(12311234) == "\n _===_\n (o..)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12321234) == "\n _===_\n (o.o)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12331234) == "\n _===_\n (o.0)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12341234) == "\n _===_\n (o.-)/\n<(>:<)\n (   )\n");
    }
TEST_CASE("For All Left Arms")//  -X snowman(HLNRXYTB) order for parts
    { 
    CHECK(snowman(12341234) == "\n _===_\n (o.-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12342234) == "\n _===_\n\\(o.-)/\n (>:<)\n (   )\n");
    CHECK(snowman(12343234) == "\n _===_\n (o.-)/\n/(>:<)\n (   )\n");
    CHECK(snowman(12344234) == "\n _===_\n (o.-)/\n (>:<)\n (   )\n");
    }
TEST_CASE("For All Right Arms")// -Y snowman(HLNRXYTB) order for parts
    { 
    CHECK(snowman(12341134) == "\n _===_\n (o.-)\n<(>:<)>\n (   )\n");
    CHECK(snowman(12341234) == "\n _===_\n (o.-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12341334) == "\n _===_\n (o.-)\n<(>:<)\\\n (   )\n");
    CHECK(snowman(12341434) == "\n _===_\n (o.-)\n<(>:<)\n (   )\n");
    }
TEST_CASE("For All Torsos")    // -T snowman(HLNRXYTB) order for parts
    {            
    CHECK(snowman(12341214) == "\n _===_\n (o.-)/\n<( : )\n (   )\n");
    CHECK(snowman(12341224) == "\n _===_\n (o.-)/\n<(] [)\n (   )\n");
    CHECK(snowman(12341234) == "\n _===_\n (o.-)/\n<(>:<)\n (   )\n");
    CHECK(snowman(12341244) == "\n _===_\n (o.-)/\n<(   )\n (   )\n");
    }
TEST_CASE("For All Bases")    //  -B snowman(HLNRXYTB) order for parts
    {              
    CHECK(snowman(12341231) == "\n _===_\n (o.-)/\n<(>:<)\n ( : )\n");
    CHECK(snowman(12341232) == "\n _===_\n (o.-)/\n<(>:<)\n (\" \")\n");
    CHECK(snowman(12341233) == "\n _===_\n (o.-)/\n<(>:<)\n (___)\n");
    CHECK(snowman(12341234) == "\n _===_\n (o.-)/\n<(>:<)\n (   )\n");
    }
    

TEST_CASE("Bad snowman code") {

    // Each digit should be between 1 <= digit <= 4
    // The Total Integer should have at exactly 8 digits

    // Simple Check
    CHECK_THROWS(snowman(555));
    /* Add more checks here */

    //Creating Ranodms Bad Values [NO 8 DIGITS LENGTH]
    int oneDigit    = rand()%10;                             
    int twoDigit    = randomBetween( 10, 99 );                  
    int threeDigit  = randomBetween( 100, 999 );                
    int fourDigit   = randomBetween( 1000, 9999 );              
    int fiveDigit   = randomBetween( 10000, 99999 );            
    int sixDigit    = randomBetween( 100000, 999999 );          
    int sevenDigit  = randomBetween( 1000000, 9999999 );        
    int nineDigit   = randomBetween( 100000000, 999999999 );    

    // cout << oneDigit << endl;
    // cout << twoDigit << endl;
    // cout << threeDigit  << endl;
    // cout << fourDigit << endl;
    // cout << fiveDigit << endl;
    // cout << sixDigit << endl;
    // cout << sevenDigit << endl;
    // cout << nineDigit << endl;

    CHECK_THROWS(snowman(oneDigit));
    CHECK_THROWS(snowman(twoDigit));
    CHECK_THROWS(snowman(threeDigit));
    CHECK_THROWS(snowman(fourDigit));
    CHECK_THROWS(snowman(fiveDigit));
    CHECK_THROWS(snowman(sixDigit));
    CHECK_THROWS(snowman(sevenDigit));
    CHECK_THROWS(snowman(nineDigit));
    
    array<int,6> arr = {0,5,6,7,8,9};  
    int unit = 1;
    int value = 0;
    
    for (int i = 0; i < 8; i++)
    {
        int digit = rand()%6;
        int n = arr[digit];
        if(n != 0){
            value += n;
        }
        value*=10;
    }
    // RANDOM value with digits that are not in the interval [1,4]
    CHECK_THROWS(snowman(value)); 
    
}

