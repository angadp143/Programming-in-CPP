/*Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


              1
          1 2 3
       1 2 3 4 5
    1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8 9    */

#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout << "Enter the number of rows=";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << endl;
    }
    return 0;
}