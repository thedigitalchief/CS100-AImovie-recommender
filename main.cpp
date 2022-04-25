
#include "foundersRecommend.hpp"
#include "genreCatalog.hpp"
#include "library.hpp"
#include "movie.hpp"
#include "recommend.hpp"
#include "releaseYearCatalog.hpp"
//#include "test.cpp"
#include "criticsRatingCatalog.hpp"
#include "directorCatalog.hpp"
#include "addMovie.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    cout << "Welcome to Flick Picks!" << endl;
    cout << "Here, we'll help you choose your next favorite movie, using our curated list!" << endl;
    cout << endl;

    bool validOption = false;

    while (validOption == false)
    {

        cout << "To begin, select an option (1-4) from the list below" << endl;
        cout << "   1. Recommend " << endl;
        cout << "   2. Add movie to list" << endl;
        cout << "   3. Quit " << endl;
        cout << "   Enter an option from 1 - 4: " << endl;

        int option = 0;
        cin >> option;
        cin.clear(); // CLEAR
        if (option < 1 || option > 4)
        {

            cout << "Invalid option, please try again" << endl;
            cout << endl;
        }
        else
        {

            validOption = true;
            bool optionChoice = true;

            while (option != 3 && optionChoice == true)
            { // call the functions that will call the classes themselves

                if (option == 1)
                { // call the recommend class and create the library of from the text file

                    Recommend movie1("dummy");
                    optionChoice = false;
                }
                else if (option == 2)
                {

                    cout << "Option 2 - Add" << endl;
                    cout << "I'm going to ask you a couple of questions. If you do not know the answer, just press <Enter> on your keyboard" << endl;
                    cout << "Let's start with the name. Enter the name, and when you are done, press <Enter> on your keyboard" << endl;
                    string movieName;
                    cin.ignore(); // IGNORE
                    getline(cin, movieName);
                    cout << "Now, the year it was released. Enter the year, and when you are done, press <Enter> on your keyboard" << endl;
                    string movieYear;
                    // cin.ignore(); // IGNORE
                    getline(cin, movieYear);
                    // cin.clear(); // NEW CLEAR
                    int numDirectors = 0;
                    cout << "How many directors would you like to add? Please enter a number, if you do not know the director, enter 0" << endl;
                    // cin.ignore();
                    cin >> numDirectors;
                    bool acceptable = true;
                    if (numDirectors < 0)
                    {
                        acceptable = false;
                    }
                    while (acceptable == false)
                    {
                        cin.clear(); // CLEAR
                        cout << "Please enter a valid number" << endl;
                        cin >> numDirectors;
                        if (numDirectors >= 0)
                        {
                            acceptable = true;
                        }
                    }
                    vector<string> movieDirectors;
                    cin.ignore();
                    string userDirector;
                    if (numDirectors > 0)
                    {
                        for (int i = 0; i < numDirectors; i++)
                        {
                            cout << "Enter a director, press <Enter> when done" << endl;
                            // cin.clear(); // CLEAR
                            getline(cin, userDirector);
                            movieDirectors.push_back(userDirector);
                        }
                    }
                    else if (numDirectors == 0)
                    {
                        movieDirectors.push_back("Unknown Director");
                    }

                    cout << "Now, the rating that YOU want to give it. Enter the rating (0-10), and then  press <Enter> on your keyboard" << endl;

                    string movieRating;
                    // cin.ignore(); // IGNORE
                    getline(cin, movieRating);

                    int numGenres = 0;
                    cout << "How many genres would you like to add? Please enter a number, if you do not know the genre, enter 0" << endl;
                    // cin.ignore(); // IGNORE
                    cin >> numGenres;
                    bool acceptable2 = true;
                    if (numGenres < 0)
                    {
                        acceptable2 = false;
                    }
                    while (acceptable2 == false)
                    {
                        cin.clear(); // CLEAR
                        cout << "Please enter a valid number" << endl;
                        cin >> numGenres;
                        if (numGenres >= 0)
                        {
                            acceptable2 = true;
                        }
                    }
                    string userGenre;
                    cin.ignore();
                    vector<string> movieGenres;
                    if (numGenres > 0)
                    {
                        for (int i = 0; i < numGenres; i++)
                        {
                            cout << "Enter a genre, press <Enter> when done" << endl;
                            // cin.ignore(); // IGNORE
                            // cin.clear(); //NEW
                            getline(cin, userGenre);
                            movieGenres.push_back(userGenre);
                        }
                    }
                    else if (numGenres == 0)
                    {
                        movieGenres.push_back("Unknown Genre");
                    }

                    // FOR TESTING PURPOSES ONLY
                    /*
                    cout << "Movie name: " << movieName << endl;
                    cout << "Movie year: " << movieYear << endl;
                    cout << "Rating: " << movieRating << endl;
                    cout << "Directors: " << endl;
                    for ( int i = 0; i < movieDirectors.size(); i++ )
                    {
                        cout << movieDirectors.at(i) << endl;
                    }
                    cout << "Genres: " << endl;
                    for ( int i = 0; i < movieGenres.size(); i++ )
                    {
                        cout << movieGenres.at(i) << endl;
                    }

                    cout << "-----------FIN--------" << endl;
                    */

                    // SEND ALL OF THIS TO THE ADD CLASS
                    // cout << "In main, right before calling addMovie" << endl;
                    // addMovie* movie = new addMovie(movieName, movieYear, movieDirectors, movieRating, movieGenres);
                    addMovie movie2(movieName, movieYear, movieDirectors, movieRating, movieGenres);

                    optionChoice = false;
                }
                else if (option == 4)
                {

                    //cout << "Before constructor" << endl;
                    foundersRecommend outputOptions("dummy");
                    //cout << "After everything" << endl;
                    

                    optionChoice = false;
                }
            }

            if (option != 3)
            {
                validOption = false;
            }
        }
    }

    return 0;
}

void recommend()
{
    //    this is the class that calls the smaller submenu that the user can ask
}
