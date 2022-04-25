#include "recommend.hpp"
#include "genreCatalog.hpp"
#include "releaseYearCatalog.hpp"
#include "directorCatalog.hpp"
#include "criticsRatingCatalog.hpp"
using namespace std;

Recommend ::Recommend(string val)
{
        // create the vector, use a helper function
        vector<Movie> fullVector = createVector();
        createRecommendation(fullVector);
}

vector<Movie> Recommend ::createVector()
{
        vector<Movie> fullVector;
        ifstream file;
        file.open("movielist.txt");

        if (file.is_open() != true)
        {
                cout << "Error opening movielist.txt" << endl;
                // return(1);
        }
        string fullString;
        int num = 0;
        int num2;
        int counter = 0;

        // Movie movieObj("dummy","dummy","dummy","dummy","dummy");
        Movie movieObject("", "", "", "", "");
        string name;
        // string yearSub;
        string semi = ";";
        vector<string> director;
        // of format: name, year, director, rating, genre

        // string delim = ";"; // delimiter
        // size_t pos = 0;

        // while (getline(file, fullString))
        // {
        //         string token1;
        //         while ((pos = fullString.find(delim)) != string::npos)
        //         {
        //                 token1 = fullString.substr(0, pos);
        //                 cout << token1 << endl;
        //                 fullString.erase(0, pos + delim.length()); // erase() function stores current positon and moves to the next token spot
        //         }
        //         cout << fullString << endl; //prints last token of the string.
        // }
        // }

        while (getline(file, fullString))
        {
                for (int i = 0; i < fullString.size(); i++)
                {
                        if (fullString.at(i) == ';')
                        {

                                string nameSub = fullString.substr(0, i);
                                // cout << "subName: " << nameSub << endl;
                                movieObject.setName(nameSub);
                                num2 = i;
                                break;
                        }
                }

                // the next 4 letters are the year
                string yearSub = fullString.substr(num2 + 2, 4);
                movieObject.setYear(yearSub);
                int value = (num2 + 8);

                // cout << value << endl;
                // cout << "subYear: " << yearSub << endl;
                // int numRatingSpot = 0;
                // string direcSub = fullString.substr(value, fullString.size());
                // cout << "direcSub: " << direcSub << endl;
                // string directsSub;

                // for (int i = 0; i < direcSub.size(); i++)
                // {
                //         if (direcSub.at(i) == ';')
                //         {
                //                 numRatingSpot = i + 2;
                //                 directsSub = direcSub.substr(0, i);
                //                 movieObject->setDirector(directsSub);
                //                 cout << "directsSub ';': " << directsSub << endl;
                //                 break;
                //                 // num2 = i;
                //         }
                //         else if (direcSub.at(i) == ',')
                //         {
                //                 if (i == 0)
                //                 {
                //                         directsSub = direcSub.substr(0, direcSub.size() - (i + 2));
                //                         cout << "directsSub ',': " << directsSub << endl;
                //                 }
                //                 // i = i+2;
                //                 //  for (int j = i; j < directsSub.size(); j++)
                //                 //  {
                //                 //          if (directsSub.at(j) == ';')
                //                 //          {
                //                 //                  string newD1Sub = directsSub.substr(0, j);
                //                 //                  cout << newD1Sub << endl;
                //                 //                  string newDSub = directsSub.substr(j + 2, directsSub.size() - j);
                //                 //                  cout << newDSub << endl;
                //                 //          }
                //                 //          numRatingSpot = 0;
                //                 //          numRatingSpot = j + 2;
                //                 //  }
                //                 else
                //                 {
                //                         directsSub = direcSub.substr(i + 2, direcSub.size() - (i + 2));
                //                         cout << "directsSub - 2 ',' " << directsSub << endl;
                //                 }
                //                 //   break;
                //         }
                // }
                // counter = 0;
                // cout << endl;
                // cout << "Before rating" << endl;
                // string ratingSub = fullString.substr(numRatingSpot, fullString.size() - numRatingSpot);
                // cout << ratingSub << endl;
                // for (int i = numRatingSpot; i < ratingSub.size(); i++)
                // {
                //         if (ratingSub.at(i) == ';')
                //         {

                //                 string ratingSub2 = ratingSub.substr(i, counter);
                //                 cout << ratingSub2 << endl;
                //                 movieObject->setName(ratingSub2);
                //                 // num2 = i;
                //                 break;
                //         }
                //         else
                //         {
                //                 counter++;
                //         }
                // }

                // NOW, DIRECTOR
                int num = 0;
                string subDirectors;

                for (int i = value; i < fullString.size(); i++)
                {
                        if (fullString.at(i) == ';')
                        {
                                num = i;
                                break;
                        }
                }
                // string subDirectors = fullString.substr(value,num);
                subDirectors = fullString.substr(value, num - value);
                // cout << "subDirec: " << subDirectors << endl;
                movieObject.setDirector(subDirectors);

                // NOW, RATING
                int counterColon = 0;
                int counterColonIndex = 0;

                for (int i = 0; i < fullString.size(); i++)
                {
                        if (fullString.at(i) == ';')
                        {
                                counterColon++;
                        }

                        if (counterColon == 3)
                        {
                                counterColonIndex = i + 2;
                                break;
                        }
                }

                int num2 = 0;
                string subRatings;

                for (int i = counterColonIndex; i < fullString.size(); i++)
                {
                        if (fullString.at(i) == ';')
                        {
                                num2 = i;
                                break;
                        }
                }

                // string subDirectors = fullString.substr(value,num);
                subRatings = fullString.substr(counterColonIndex, num2 - counterColonIndex);
                // cout << "subRatings: " << subRatings << endl;
                movieObject.setRating(subRatings);

                // NOW, GENRES
                string subGenres;
                subGenres = fullString.substr(counterColonIndex + 4, fullString.size() - ((num2 - counterColonIndex)));

                // counterColon = 0;
                // counterColonIndex = 0;

                // for (int i = 0; i < fullString.size(); i++)
                // {
                //         if (fullString.at(i) == ';')
                //         {
                //                 counterColon++;
                //         }

                //         if (counterColon == 4)
                //         {
                //                 counterColonIndex = i + 2;
                //                 break;
                //         }
                // }

                // int num3 = 0;

                // for (int i = counterColonIndex; i < fullString.size(); i++)
                // {
                //         if (fullString.at(i) == ';')
                //         {
                //                 num3 = i;
                //                 break;
                //         }
                // }

                // subGenres = fullString.substr(counterColonIndex, num3);
                // cout << "subGenres: " << subGenres << endl;
                movieObject.setGenre(subGenres);
                fullVector.push_back(movieObject);
                // cout << "Vector created" << endl;
                // movieObject->printMovie();
        }
        // cout << "Finished recommend" << endl;
        // FOR TESTING
        //         for (int i = 0; i < fullVector.size(); i++)
        //         {
        //                 fullVector.at(i).printMovie();
        //         }
        return fullVector;
}

void Recommend ::createRecommendation(vector<Movie> &fullMovie)
{
        // cout << "Just before createRecommendation" << endl;
        cout << "Welcome to the Recommendation Algorithm! To start, we have a couple of questions for you!" << endl;
        cout << "1. Crime" << endl;
        cout << "2. Drama" << endl;
        cout << "3. Superhero" << endl;
        cout << "4. Fanstasy" << endl;
        cout << "5. Action" << endl;
        cout << "6. Western" << endl;
        cout << "7. Science Fiction" << endl;
        cout << "8. Dark Comedy" << endl;
        cout << "9. Thriller" << endl;
        cout << "10. War" << endl;
        cout << "11. Samurai" << endl;
        cout << "12. Holiday" << endl;
        cout << "13. Animation" << endl;
        cout << "14. Comedy" << endl;
        cout << "15. History" << endl;
        cout << "16. Horror" << endl;
        cout << "17. Musical" << endl;
        cout << "18. Romance" << endl;
        cout << "19. Satire" << endl;

        cout << "Enter a number for a recommendation" << endl;

        int num = 0;
        cin >> num;
        bool acceptable = true;

        if (num < 1 || num > 19)
        {
                acceptable = false;
        }

        while (acceptable == false)
        {
                cout << "Invalid option" << endl;
                cout << "Enter a valid option: " << endl;
                cin >> num;

                if (num >= 1 && num <= 19)
                {
                        acceptable = true;
                }
        }

        string userChoiceGenre = "";

        if (num == 1)
        {
                userChoiceGenre = "Crime";
        }
        else if (num == 2)
        {
                userChoiceGenre = "Drama";
        }
        else if (num == 3)
        {
                userChoiceGenre = "Superhero";
        }
        else if (num == 4)
        {
                userChoiceGenre = "Fantasy";
        }
        else if (num == 5)
        {
                userChoiceGenre = "Action";
        }
        else if (num == 6)
        {
                userChoiceGenre = "Western";
        }
        else if (num == 7)
        {
                userChoiceGenre = "Science fiction";
        }
        else if (num == 8)
        {
                userChoiceGenre = "Dark comedy";
        }
        else if (num == 9)
        {
                userChoiceGenre = "Thriller";
        }
        else if (num == 10)
        {
                userChoiceGenre = "War";
        }
        else if (num == 11)
        {
                userChoiceGenre = "Samurai";
        }
        else if (num == 12)
        {
                userChoiceGenre = "Holiday";
        }
        else if (num == 13)
        {
                userChoiceGenre = "Animation";
        }
        else if (num == 14)
        {
                userChoiceGenre = "Comedy";
        }
        else if (num == 15)
        {
                userChoiceGenre = "History";
        }
        else if (num == 16)
        {
                userChoiceGenre = "Horror";
        }
        else if (num == 17)
        {
                userChoiceGenre = "Musical";
        }
        else if (num == 18)
        {
                userChoiceGenre = "Romance";
        }
        else if (num == 19)
        {
                userChoiceGenre = "Satire";
        }

        // cout << "USERCHOICE: " << userChoiceGenre << endl;

        vector<Movie> newVectorGenre;
        genreCatalog genre(fullMovie, newVectorGenre, userChoiceGenre);

        bool continueWith = genre.sort(fullMovie, newVectorGenre, userChoiceGenre);

        if (continueWith == false)
        {
                // keep going
                cin.ignore();
                cout << "Great choice! Now, enter a director that you would like to get a recommendation for. If you have no preference, just press <Enter>: ";

                string userChoiceDirector;
                getline(cin, userChoiceDirector);

                cout << endl;
                // cout << "UserDirector: " << userChoiceDirector << endl;

                vector<Movie> newVectorDirector;
                directorCatalog director(newVectorGenre, newVectorDirector, userChoiceDirector);
                continueWith = director.sort(newVectorGenre, newVectorDirector, userChoiceDirector);

                if (continueWith == false)
                {
                        // keep going
                        cout << "Great choice! Now, enter a minimum rating that you would like (out of 10): ";

                        string userChoiceRating;
                        getline(cin, userChoiceRating);

                        cout << endl;
                        //       cout << "UserRating: " << userChoiceRating << endl;

                        vector<Movie> newVectorRating;
                        criticsRatingCatalog rating(newVectorDirector, newVectorRating, userChoiceRating);
                        continueWith = rating.sort(newVectorDirector, newVectorRating, userChoiceRating);

                        if (continueWith == false)
                        {
                                // keep going
                                cout << "Ok, we're almost there. Enter a decade that you would like your movie to be from (e.g. 2000 or 1990 or 1950): ";
                                string userChoiceYear;
                                getline(cin, userChoiceYear);
                                cout << endl;
                                // cout << "UserYear: " << userChoiceYear << endl;
                                vector<Movie> newVectorYear;
                                releaseYearCatalog year(newVectorRating, newVectorYear, userChoiceYear);
                                continueWith = year.sort(newVectorRating, newVectorYear, userChoiceYear);

                                print(newVectorYear);
                        }
                        else
                        {
                                print(newVectorRating);
                                // this is where I call print()
                        }
                }

                else
                {
                        print(newVectorDirector);
                        // this is where I call print()
                }
        }
        else
        {
                // this is where I call print()
                print(newVectorGenre);
        }
}

void Recommend ::print(vector<Movie> movie)
{
        if (movie.size() == 0)
        {
                cout << "Sorry, we weren't able to recommend any movies to your specific taste. Please try again with different criteria" << endl;
        }
        else
        {
                cout << "We got some movies we think you might like!" << endl;
                int counter = 0;
                for (int i = 0; i < movie.size(); i++)
                {
                        cout << i + 1 << ". ";
                        movie.at(i).printMovie();
                        counter++;
                        if (counter == 3)
                        {
                            break;
                        }
                }
        }

        cout << endl;
        cout << endl;
}

// for (int i = num + 1; i < fullString.size(); i++)
// {
//         if ( fullString.at(i) == ';' )
//         {
//                 string yearSub = fullString.substr(num2+2, i); // this is for year
//                 cout << yearSub << endl;
//                 movieObject->setYear(yearSub);
//                 num = i;
//                 break;
//         }
// }

//}
// fullVector
// }
