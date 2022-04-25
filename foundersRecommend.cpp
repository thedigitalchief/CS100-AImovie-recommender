#include "foundersRecommend.hpp"

// #include <iostream>
// #include <string>
// #include <map>

using namespace std;

foundersRecommend ::foundersRecommend(string dummy)
{
        // cout << "Before intro" << endl;
        intro();
        // cout << "After intro, before menu" << endl;
        menu();
}

void foundersRecommend ::intro()
{
        cout << "You have stumbled upon a secret menu! We created this project due to our love of movies, so we thought you might like to see our personal favorites. Please select an option below:" << endl;
        cout << "==================" << endl;
        cout << "1. Dylan" << endl;
        cout << "2. Christian" << endl;
        cout << "3. Naveen" << endl;
        cout << "4. Adelfa" << endl;
        cout << "5. All the above (All)" << endl;
}

void foundersRecommend ::menu()
{
        int num;
        cout << endl;
        cout << "Enter an option: ";
        cin >> num;
        cout << endl;

        bool acceptable = true;

        if (num < 0 || num > 5)
        {
                acceptable = false;
        }
        while (acceptable == false)
        {
                cin.clear(); // CLEAR
                cout << "Invalid option, try again" << endl;
                cout << "Enter an option: ";
                cin >> num;
                cout << endl;
                if (num >= 1 && num <= 5)
                {
                        acceptable = true;
                }
        }

        if (num == 1)
        {
                cout << "Dylan's Top 5 Movies" << endl;
                cout << "======================" << endl;
                cout << "1. GodFather, 2. The Dark Knight, 3. Catch Me If You Can, 4. Toy Story, 5. Monsters Inc" << endl
                     << endl;
        }

        else if (num == 2)
        {
                cout << "Christian's Top 5 Movies" << endl;
                cout << "======================" << endl;
                cout << "1. Dark Knight, 2. Goodfellas, 3. Django Unchained, 4. Star Trek: Into the Darkness, 5. The Shawshank Redemption" << endl
                     << endl;
        }

        else if (num == 3)
        {
                cout << "Naveen's Top 5 Movies" << endl;
                cout << "======================" << endl;
                cout << "1. The Shawshank Redemption, 2. Raiders of the Lost Ark, 3. Star Wars: A New Hope, 4. Jurassic Park, 5. The Batman" << endl
                     << endl;
        }

        else if (num == 4)
        {
                cout << "Adelfa's Top 5 Movies" << endl;
                cout << "======================" << endl;
                cout << "1. The Terminator, 2. Up, 3. Avengers Endgame, 4. Spiderman, 5. Iron Man" << endl
                     << endl;
        }

        else if (num == 5)
        {
                cout << "All of the Founders Top 5 Movies" << endl;
                cout << "======================" << endl;
                cout << "Dylan:     1. GodFather, 2. The Dark Knight, 3. Catch Me If You Can, 4. Toy Story, 5. Monsters Inc" << endl;
                cout << "Christian: 1. Dark Knight, 2. Goodfellas, 3. Django Unchained, 4. Star Trek: Into the Darkness, 5. The Shawshank Redemption" << endl;
                cout << "Naveen:    1. The Shawshank Redemption, 2. Raiders of the Lost Ark, 3. Star Wars: A New Hope, 4. Jurassic Park, 5. The Batman" << endl;
                cout << "Adelfa:    1. The Terminator, 2. Up, 3. Avengers Endgame, 4. Spiderman, 5. Iron Man" << endl;
        }
}
