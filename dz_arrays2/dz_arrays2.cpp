#include <iostream>
#include <iomanip>
#define COLS 6
#define ROWS 6
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[COLS][ROWS], arr_offset[COLS][ROWS], num, num_before,choice;
    /*for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            arr[i][j] = 0;
        }
    }
    cout << "Enter num -> ";
    cin >> num;
    num_before = num;
    arr[0][0] = num;
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }
            arr[i][j] = num_before * 2;
            num_before = arr[i][j];
        }
    }
    for (int i = 0; i < COLS; i++)
    { 
        for (int j = 0; j < ROWS; j++)
        {
            cout << setw (2) << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            arr[i][j] = 0;
        }
    }
    cout << "Enter num -> ";
    cin >> num;
    num_before = num;
    arr[0][0] = num;
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }
            arr[i][j] = num_before + 1;
            num_before = arr[i][j];
        }
    }
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            arr[i][j] = 0;
        }
    }*/
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    cout << "Not offset" << endl;
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    cout << "Chose direction:\n1)Up\n2)Right\n3)Down\n4)Left\n";;
    cin >> choice;
    cout << "Enter how much to offset ->";
    cin >> num;
    if (num >= 6) {
        num -= 6;
    }
    if (choice == 1) {
        for (int x = 0; x < num; x++)
        {
            for (int j = 0; j < ROWS; j++)
            {
                num_before = arr[0][j];
                for (int i = 0; i < COLS; i++)
                {
                    arr[i][j] = arr[i + 1][j];
                    if (i == COLS - 1) {
                        arr[i][j] = num_before;
                    }
                }
            }
        }
    }
    else if (choice == 2) {
        for (int x = 0; x < num; x++)
        {
            for (int i = 0; i < COLS; i++)
            {
                num_before = arr[i][COLS - 1];
                for (int j = ROWS - 1; j > -1; j--)
                {
                    arr[i][j] = arr[i][j - 1];
                    if (j == 0) {
                        arr[i][j] = num_before;
                    }
                }
            }
        }
    }
    else if (choice == 3) {
        for (int x = 0; x < num; x++)
        {
            for (int j = 0; j < ROWS; j++)
            {
                num_before = arr[COLS - 1][j];
                for (int i = COLS - 1; i > -1; i--)
                {
                    arr[i][j] = arr[i - 1][j];
                    if (i == 0) {
                        arr[i][j] = num_before;
                    }
                }
            }
        }
    }
    else if (choice == 4) {
        for (int x = 0; x < num; x++)
        {
            for (int i = 0; i < COLS; i++)
            {
                num_before = arr[i][0];
                for (int j = 0; j < ROWS; j++)
                {
                    arr[i][j] = arr[i][j + 1];
                    if (j == ROWS - 1) {
                        arr[i][j] = num_before;
                    }
                }
            }
        }
    }
    cout << "After offset" << endl;
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
}