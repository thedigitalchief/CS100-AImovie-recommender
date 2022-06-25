
# FlickPick - Finding Your New Favorite Film 

 ## Developers: 
 > * Dylan Nguyen (https://github.com/thedigitalchief)
 > * Naveen Joby (https://github.com/navjoby)
 > * Adelfa Freeman (https://github.com/afree020)
 > * Christian Lo (https://github.com/clo901)

## Phase I
 * Brief Summary
   * Our movie recommendation takes in the top rated movies from popular movie review websites such as IMDB and RottenTomatoes to create a curated list. From the curated list, the user can pick a movie, see its details in a list and then, if preferred, find recommendations that match based off of rating, similar genres, director, and actors. 
 
  * Why is it important or interesting to you?
    * All of us like watching movies and have differing opinions on ranking the top movies, so we thought it would be fun to create something that we can bond over and enjoy. 
  * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
    * We developed this project using C++. We will also use data gathered from leading websites to aggregate the recommendation data and implemented multiple sorting algorithms to identify, analyze, and ultimately choose the best film curated to the user's taste. We also performed extensive Unit and Edge Testing via Valgrind.
  * What will be the input/output of your project? What are the features that the project provides?
    * The user will choose from a menu of options (including List all, Add, List by genre, List by director, Recommend). Based on the choice the user makes they will either see a list, a new menu or a recommendation.
    



## Phase II
   * The main class invokes the generateMenu class and displays a list of options for the user. The three options include Recommend, Add movie to list, and Quit. 
   * Add movie to list invokes the Database.txt file and allows the user to add a movie of their choosing, along with its genre, director, rating, and maturity rating. It will be shown to the user and then they will add it to the database file. 
   * Recommend would then call a smaller submenu of Options that would allow the user to either return to the main menu or view a group of movies based on director, maturity rating, genre, release year, and critics rating. 
   * Based on their choice, it will invoke the movie recommender algorithm in the Recommend class and display to them the movie. Then, it will reinvoke a menu option for the user to either view a different movie, go back to the Options menu, or go back to the main menu. 
  * The main menu will also have a “secret” option (the user enters the number 4) which will invoke the FoundersRecommend.cpp file to output a list of movies that are categorized based off the founder’s favorite movies.
  * The movie class will have the private attributes of Movie_Name Director, Genre and Maturity_Rating, and Release_Year. You will be able to access the public functions getRecommendation, getCriticsRating, getReleaseYear, get,MaturityRating, and getDirector. The Recommend class will interact with this class to organize the list of movies from a .txt file.
  * The Recommend class will organize the list from the movie class into genre, director, critics rating and maturity rating. From these lists the recommendation algorithm will be run and a recommendation will be returned. 
  * The FoundersRecommend.cpp class will display a list of movies to the terminal that are categorized by the personal favorites of us, it will take no action from the user and will go back to the main menu after.
  * Library.cpp class holds a list of type Movie that is accessible in the movie class.
  * Database.txt will have a list of 100 movies separated by commas. Each movie will have a name, director, genre, maturity rating, and critics/user rating. 

 <img width="1110" alt="Screen Shot 2022-03-08 at 5 56 58 PM" src="https://user-images.githubusercontent.com/93842458/157357420-4967ad46-73bc-47b9-accd-32141d739e84.png">

 
 
 
 ## Phase III
* We chose to do composite design pattern. We picked the composite design pattern because our program can be represented as a tree. This design pattern makes it easier for us to add new kinds of components while also providing flexibility of structure with manageable class or interface. The library can be composed as a leaf class, as it has no children and is a primitive, which is composed of lists that can be sorted based on a recommendation algorithm. The component is the main menu that the user interacts with. The composite design patter helped us write code because it lets us use a collection relationship vs a subclass relationship, so with operations like sorting the caller doesn't need to care if it is acting on one object or an entire collection. In other words, we can code in a more uniform manner and be able to just ask each node to perform a different task.

![CS100 Final Project Phase UML Chart](https://user-images.githubusercontent.com/93842458/157751572-41423f0c-1454-4cb0-a96b-9096f5115bcb.png)


 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 
 ## Screenshots
 > ![1](https://user-images.githubusercontent.com/93842458/157750324-14515b4e-c203-48eb-bd06-928161b96fbf.png)
![2](https://user-images.githubusercontent.com/93842458/157751239-d877f53c-b461-446a-9d10-7d01594bcbd8.png)
![3](https://user-images.githubusercontent.com/93842458/157751251-a144cdef-1859-48df-bbf5-d673e7d0841d.png)
![4](https://user-images.githubusercontent.com/93842458/157750337-47927515-32ee-4509-b160-806647800181.png)
![6](https://user-images.githubusercontent.com/93842458/157750345-c6296de8-5b91-44d8-9fe0-eba9f5076c5f.png)
![7](https://user-images.githubusercontent.com/93842458/157750349-e18a0444-652c-43cc-b150-88e6e8350400.png)
![8](https://user-images.githubusercontent.com/93842458/157750360-ace061ef-f9c5-4271-ba0d-018c0ec4684f.png)
![9](https://user-images.githubusercontent.com/93842458/157750368-bc064160-408e-47b9-beef-76c2cabfbcd2.png)
![10](https://user-images.githubusercontent.com/93842458/157750379-ef6f8464-8f61-46ce-a181-c35dd8242001.png)
![11](https://user-images.githubusercontent.com/93842458/157750391-79779a75-2a8c-46c9-960f-d92c1dce749e.png)
![12](https://user-images.githubusercontent.com/93842458/157750433-d1ef35b0-d401-42e9-b48c-0b3ff96f0ab3.png)



 ## Installation/Usage
 > To be able to install and use this program correctly, you first have to open up a terminal and clone the repository. Once you have the repository cloned, you then have to cd into the repository. After you cd into it, you then run the command "cmake3 ." which will build and construct your CMakeFiles. Once the CMakeFiles have been built and it is configured correctly, you will then need to type in the code "make" into terminal which will then scan and make the add executable files in the CMakeLists.txt file. Finally, you will then type and run "./test" into terminal which will finally test and show the correct and incorrect tests(if any) outputed to the terminal. Once you have run ./test into terminal, you will lastly input and run "./main" into terminal which will lastly run the program.

<img width="678" alt="Tests" src="https://user-images.githubusercontent.com/93842458/157752597-5f133b6c-eb40-43be-81da-601a3d43d193.png">


 ## Unit Testing
 > In testing the program we ran all of our tests through the Valgrind framework. We created one file to run all of our tests for us called test.cpp. To run the tests properly we simply check and run the code "./test" which will run correctly after compiling with "make". We also had to check for memory leaks within our code so we used a line of code called "valgrind" which checks our programs and displays any possible leaks within our code. 

![valgrind](https://user-images.githubusercontent.com/93842458/157751175-f032091e-94f9-4c34-93c0-3c223212f2c3.png)
![Valgrind 2](https://user-images.githubusercontent.com/93842458/157752182-b0a504d2-8f20-4682-b9a2-79914b10b10e.png)


