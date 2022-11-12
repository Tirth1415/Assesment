#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int b, k = 1;
name()
{
    char a[20];
    int i, j, n;
    for (i = 0; i <= 11; i++)
        cout << "*--";
    cout << "\n		Name		\n";
    for (i = 0; i <= 11; i++)
        cout << "*--";
    cout << "\n";
    cout << "Enter Name : ";
    cin >> a;

    cout << "\n";

    for (i = 0; i <= 11; i++)
        cout << "*--";
    cout << "\n		Rounds		\n";
    for (i = 0; i <= 11; i++)
        cout << "*--";
    cout << "\n";
    cout << "" << a << " How many round you want to play ? : ";
    cin >> b;

    cout << "\n";

    for (i = 0; i <= 11; i++)
        cout << "*--";
    cout << "\n		Game		\n";
    for (i = 0; i <= 11; i++)
        cout << "*--";
    cout << "\nRound No : " << k << "/" << b << "";
    cout << "\n";
}
choice()
{
    int n;
    int userWins = 0;
    int computerWins = 0;
    int gamesCount = 1;

    cout << "\n1. Rock \n2. Paper \n3. scissor\n";

    while (gamesCount <= b)

    {
        gamesCount++;

        srand(time(NULL));
        int computer = rand() % 3 + 1, a;
        int user = 0;

        cout << "Enter Your Choice : ";
        cin >> user;
        if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2))
        {
            cout << "\nYou win!\n";
            ++userWins;
        }
        else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1))
        {
            cout << "Computer win!\n";
            ++computerWins;
        }

        else if (user == computer)
        {  
            cout << "Tied\n";
        }
        else
        {
            cout << "Error, please use and input between 1-3\n";
        }

        cout << "your score is currently : " << userWins << "\nComputer score is " << computerWins << "\n\n";

        ++k; 
        cout << "\nRound No : " << k << "/" << b << "\n";
    }

    cout << "Your final score is " << userWins << ", whereas the Computer's final score is " << computerWins << "\n";

    if (userWins > computerWins)
    { 
        cout << "You have succesfully beat the computer! Congratulations!\n";
    }
    else if (userWins < computerWins)
    {
        cout << "Unfortunately the computer has bested you!\n";
    }
    else
    {
        cout << "DRAW! What a close game!\n";
    }
}
main()
{
    name();
    choice(); 
};