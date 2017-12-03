/**  Salman Al-kazrauni
 *   C00199530
 *   Exercise 2
 *   Factorial Calculator
 */


#include <iostream>

using namespace std;

/**< main function */
int main()
{
    /**< variable decleration */
    int i , n ;
    long f = 1 ;

    /**< progran title */
    cout << "Factorial Calculator" << endl ;

    /**< prompt the user to insert an integer */
    cout << "\nenter a positive integer : " ;
    cin >> n ;

    /**< using for loop to caculate the Factorial */
    for ( i=1 ; i<=n ; ++i)
    {
        f *= i;
    }

    /**< display the factorial of the integer */
    cout << "\n\nThe Factorial of " << n << " is " << f << endl;


    return 0;
}
