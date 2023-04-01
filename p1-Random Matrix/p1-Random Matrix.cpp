#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    int Number =rand() % (To - From + 1) + From;
    return Number;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    cout << "The folwing is a 3*3 random matrix:\n";
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int arr[3][3];
    int Rows = 3, Cols = 3;
    
    FillMatrixWithRandomNumbers(arr, Rows, Cols);
    
    PrintMatrix(arr, Rows, Cols);
    
    return 0;
}
