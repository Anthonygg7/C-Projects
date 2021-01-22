
/* Programmer: Luis Garcia
*  Purpose: Write a program that asks for the
   name of a pole vaulter and the dates and vault
   heights (in meters) of the athlete's three best
   vaults. It should then report in height order (best first),
   the date on which each vault was made, and its height.
   Date Modified: 01/25/2021
   Compiler: MS VS++ 2019
*/

#include <iostream>
using namespace std;
int main()
{
    const float VAULT_HEIGHT_MIN = 10.0,
        VAULT_HEIGHT_MAX = 100.0;

    string pole_vaulter,
        vault_date_1,
        vault_date_2,
        vault_date_3;

    float vault_height_1,
        vault_height_2,
        vault_height_3;

    cout << "Enter pole vaulter's name: ";
    int getline(name); (cin, pole_vaulter);

    cout << "Enter date(e.g. 1/7/1922) of vault #1: ";
    cin >> vault_date_1;
    cout << "Enter height(in meters) for vault #1: ";
    cin >> vault_height_1;

    cout << "Enter date(e.g. 1/7/1922) of vault #2: ";
    cin >> vault_date_2;
    cout << "Enter height(in meters) for vault #2: ";
    cin >> vault_height_2;

    cout << "Enter date(e.g. 1/7/1922) of vault #3: ";
    cin >> vault_date_3;
    cout << "Enter height(in meters) for vault #3: ";
    cin >> vault_height_3;

    if ((vault_height_1 < VAULT_HEIGHT_MIN ||
        vault_height_1 > VAULT_HEIGHT_MAX)
        ||
        (vault_height_2 < VAULT_HEIGHT_MIN ||
            vault_height_2 > VAULT_HEIGHT_MAX)
        ||
        (vault_height_3 < VAULT_HEIGHT_MIN ||
            vault_height_3 > VAULT_HEIGHT_MAX))
    {
        cout << endl;
        cout << "We're sorry, vault height must be\n"
            << "between 10.0 and 100.0 meters. Rerun\n"
            << "the program and try again.\n"
            << endl;
    }
    else
    {
        if (vault_height_1 > vault_height_2)    // vault_height_1
        {
            if (vault_height_1 > vault_height_3)
            {
                cout << "1  : "
                    << vault_height_1;
                cout << " Date: "
                    << vault_date_1
                    << endl;

                if (vault_height_2 > vault_height_3)
                {
                    cout << "2: "
                        << vault_height_2;
                    cout << " Date: "
                        << vault_date_2
                        << endl;

                    cout << "3: "
                        << vault_height_3;
                    cout << " Date: "
                        << vault_date_3
                        << endl;
                }
                else
                {
                    cout << "2: "
                        << vault_height_3;
                    cout << " Date: "
                        << vault_date_3
                        << endl;

                    cout << "3: "
                        << vault_height_2;
                    cout << " Date: "
                        << vault_date_2
                        << endl;
                }

            }
        }

        if (vault_height_2 > vault_height_1)    // vault_height_2
        {
            if (vault_height_2 > vault_height_3)
            {
                cout << "Gold: "
                    << vault_height_2;
                cout << " Date: "
                    << vault_date_2
                    << endl;

                if (vault_height_1 > vault_height_3)
                {
                    cout << "2: "
                        << vault_height_1;
                    cout << " Date: "
                        << vault_date_1
                        << endl;
                    cout << "1: "
                        << vault_height_3;
                    cout << " Date: "
                        << vault_date_3
                        << endl;
                }
                else
                {
                    cout << "2: "
                        << vault_height_3;
                    cout << " Date: "
                        << vault_date_3
                        << endl;
                    cout << "3: "
                        << vault_height_1;
                    cout << " Date: "
                        << vault_date_1
                        << endl;
                }

            }
        }

        if (vault_height_3 > vault_height_1) // vault_height_3
        {
            if (vault_height_3 > vault_height_2)
            {
                cout << "1: "
                    << vault_height_3;
                cout << " Date: "
                    << vault_date_3
                    << endl;

                if (vault_height_1 > vault_height_2)
                {
                    cout << "2: "
                        << vault_height_1;
                    cout << " Date: "
                        << vault_date_1
                        << endl;
                    cout << "3: "
                        << vault_height_2;
                    cout << " Date: "
                        << vault_date_2
                        << endl;
                }
                else
                {
                    cout << "1: "
                        << vault_height_2;
                    cout << " Date: "
                        << vault_date_2
                        << endl;
                    cout << "3: "
                        << vault_height_1;
                    cout << " Date: "
                        << vault_date_1
                        << endl;
                }
            }
        }
    }

    cout << endl;

    system("pause");
    return 0;
}