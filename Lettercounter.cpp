//This is my lettercounter. Made this to practice C++. This was found as an easy challenge on r/dayliprogrammer.
//User inputs text. Each letter is valued a = 1, b = 2 etc, and the total sum of what you typed will be returned. Only alphebetical characters will be counted.

#include <iostream>
#include <string>
#include <cstring>
#include <numeric>

using std::cout;
using std::endl; 
using std::cin;

int main(){
    std::string tekstinn;
    cout << "Welcome to Rudi's letter counter\n" << endl;
    cout << "Enter your tekst here: " << endl;
    getline(cin, tekstinn);
    cout << tekstinn << " - Is what you entered!" << endl;
    //Values to be used in the loop
    int lengde = tekstinn.size();
    int sum = 0;
    int num = 0;

    int tall[lengde];


    for(int i = 0; i < lengde; i++)//For-loop to take the input string and check charactert and convert all upper and lower to ints
    {
        if(isupper(tekstinn[i]))//Using isupper and islower so i can use a simple ascii-value to get the correct int for the letters. Isalpha would fuck it up..
        {
            tall[i] = tekstinn[i] - 64;
            
            num = tall[i];
            sum += num;

        }
        else if (islower(tekstinn[i]))
        {
            tall[i] = tekstinn[i] - 96;
            
            num = tall[i];
            sum += num;
        }
        else//To make sure the int array isn't messed up, i add a 0 to everything that is not an alphebetical letter
        {
            tall[i] = 0;
            num = tall[i];
            sum += num;
        }
    }
    
    cout <<"the sum of the letters is: " << sum << endl;

    return 0;

}
