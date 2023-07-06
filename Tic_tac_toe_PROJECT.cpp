#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

char display[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int score_person_1 = 0;
int score_person_2 = 0;

void Display(string a, string b);
void Game_play(string a, string b);
bool Check_Game();
void End_Game(string a, string b);

void Display(string a, string b)
{
    system("CLS");

    cout << endl << endl;
    cout << a << "'s score : " << score_person_1 << endl;
    cout << b << "'s score : " << score_person_2 << endl;
    cout << endl << endl;

    cout << "     |      |       " << endl;
    cout << "  " << display[0][0] << "  |  " << display[0][1] << "   |  " << display[0][2] << endl;
    cout << "_____|______|_______" << endl;
    cout << "     |      |       " << endl;
    cout << "  " << display[1][0] << "  |  " << display[1][1] << "   |  " << display[1][2] << endl;
    cout << "_____|______|_______" << endl;
    cout << "     |      |       " << endl;
    cout << "  " << display[2][0] << "  |  " << display[2][1] << "   |  " << display[2][2] << endl;
    cout << "     |      |       " << endl;
}

void Game_play(string a, string b)
{
    char input_1;
    char input_2;
    cout << a << "'s Turn " << endl;
back:
    cout << a << " Enter any number from the board : ";
    cin >> input_1;

    switch (input_1)
    {
    case '1':
    {
        if (display[0][0] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[0][0] = 'X';
        }
    }
    break;
    case '2':
    {
        if (display[0][1] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[0][1] = 'X';
        }
    }
    break;
    case '3':
    {
        if (display[0][2] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[0][2] = 'X';
        }
    }
    break;
    case '4':
    {
        if (display[1][0] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[1][0] = 'X';
        }
    }
    break;
    case '5':
    {
        if (display[1][1] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[1][1] = 'X';
        }
    }
    break;
    case '6':
    {
        if (display[1][2] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[1][2] = 'X';
        }
    }
    break;
    case '7':
    {
        if (display[2][0] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[2][0] = 'X';
        }
    }
    break;
    case '8':
    {
        if (display[2][1] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[2][1] = 'X';
        }
    }
    break;
    case '9':
    {
        if (display[2][2] == 'O')
        {
            cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
            goto back;
        }
        else
        {
            display[2][2] = 'X';
        }
    }
    break;
    default:
    {
        cout << "Wrong Entry " << endl;
        cout << "Try Again ;) ";
        goto back;
    }
    }
    if (!Check_Game())
    {
        Display(a, b);
        cout << b << "'s Turn " << endl;
    start:
        cout << b << " Enter any number from the board : ";
        cin >> input_2;

        switch (input_2)
        {
        case '1':
        {
            if (display[0][0] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[0][0] = 'O';
            }
        }
        break;
        case '2':
        {
            if (display[0][1] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[0][1] = 'O';
            }
        }
        break;
        case '3':
        {
            if (display[0][2] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[0][2] = 'O';
            }
        }
        break;
        case '4':
        {
            if (display[1][0] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[1][0] = 'O';
            }
        }
        break;
        case '5':
        {
            if (display[1][1] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[1][1] = 'O';
            }
        }
        break;
        case '6':
        {
            if (display[1][2] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[1][2] = 'O';
            }
        }
        break;
        case '7':
        {
            if (display[2][0] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[2][0] = 'O';
            }
        }
        break;
        case '8':
        {
            if (display[2][1] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[2][1] = 'O';
            }
        }
        break;
        case '9':
        {
            if (display[2][2] == 'X')
            {
                cout << "Wrong Entry. IT'S ALREADY TAKEN !!" << endl;
                goto start;
            }
            else
            {
                display[2][2] = 'O';
            }
        }
        break;
        default:
        {
            cout << "Wrong Entry " << endl;
            cout << "Try Again ;) ";
            goto start;
        }
        }
        if (!Check_Game())
        {
            Display(a, b);
            Game_play(a, b);
        }
    }
}

bool Check_Game()
{
    // For Vertical Victory;
    if ((display[0][0] == 'X' && display[1][0] == 'X' && display[2][0] == 'X') ||
        (display[0][0] == 'O' && display[1][0] == 'O' && display[2][0] == 'O'))
    {
        return true;
    }
    if ((display[0][1] == 'X' && display[1][1] == 'X' && display[2][1] == 'X') ||
        (display[0][1] == 'O' && display[1][1] == 'O' && display[2][1] == 'O'))
    {
        return true;
    }
    if ((display[0][2] == 'X' && display[1][2] == 'X' && display[2][2] == 'X') ||
        (display[0][2] == 'O' && display[1][2] == 'O' && display[2][2] == 'O'))
    {
        return true;
    }

    // For Horizontal Victory;
    if ((display[0][0] == 'X' && display[0][1] == 'X' && display[0][2] == 'X') ||
        (display[0][0] == 'O' && display[0][1] == 'O' && display[0][2] == 'O'))
    {
        return true;
    }
    if ((display[1][0] == 'X' && display[1][1] == 'X' && display[1][2] == 'X') ||
        (display[1][0] == 'O' && display[1][1] == 'O' && display[1][2] == 'O'))
    {
        return true;
    }
    if ((display[2][0] == 'X' && display[2][1] == 'X' && display[2][2] == 'X') ||
        (display[2][0] == 'O' && display[2][1] == 'O' && display[2][2] == 'O'))
    {
        return true;
    }

    // For Diagonal Victory;
    if ((display[0][0] == 'X' && display[1][1] == 'X' && display[2][2] == 'X') ||
        (display[0][0] == 'O' && display[1][1] == 'O' && display[2][2] == 'O'))
    {
        return true;
    }
    if ((display[0][2] == 'X' && display[1][1] == 'X' && display[2][0] == 'X') ||
        (display[0][2] == 'O' && display[1][1] == 'O' && display[2][0] == 'O'))
    {
        return true;
    }

    return false;
}

void End_Game(string a, string b)
{
    if (score_person_1 > score_person_2)
    {
        cout << "Congratulations " << a << "! You won the game." << endl;
    }
    else if (score_person_1 < score_person_2)
    {
        cout << "Congratulations " << b << "! You won the game." << endl;
    }
    else
    {
        cout << "It's a draw!" << endl;
    }

    score_person_1 = 0;
    score_person_2 = 0;

    char choice;
    cout << "Do you want to play again? (Y/N): ";
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        Display(a, b);
        Game_play(a, b);
    }
    else
    {
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
}

int main()
{
    string player1, player2;
    cout << "Enter name for Player 1 (X): ";
    cin >> player1;
    cout << "Enter name for Player 2 (O): ";
    cin >> player2;

    Display(player1, player2);
    Game_play(player1, player2);

    return 0;
}
