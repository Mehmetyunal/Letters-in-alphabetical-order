#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    while (true) // i am using this loop so the .exe file wont close instantly
    {
        map<char, int> letters; // i am using a map because a map is sorting signs in alphabetical order (1.special signs 2.numbers 3. letters)
        char letterchar = ' ';  // this char stores a letter
        string input = "";      // this is our input string from user
        cout << "Please enter a word: ";
        getline(cin, input);                   // getline function allows us to get a whole line as a input instead of just a word
        for (int i = 0; i < input.size(); i++) // this loop adds every sign in our input to our map
        {
            letterchar = input[i];    // the char adds its value to our map
            letters[letterchar] += 1; // this counts how many times a sign appears in our input
        }
        for (auto letter : letters) // outputs all the titles (signs in our case) of the map
        {
            if (letter.first == ' ') // this if statements ignores the space taste
            {
                continue;
            }
            else
            {
                for (int i = 0; i < letter.second; i++) // this loop outputs a letter as much as it appears in the input
                {
                    cout << letter.first;
                }
            }
        }
        cout << endl; // this line ensures that its a new line when we print "Please enter a word: "
    }
}