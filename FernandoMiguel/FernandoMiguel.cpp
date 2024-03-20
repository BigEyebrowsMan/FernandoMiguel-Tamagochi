#include "Status.h"
#include "Ogre.h"
#include "Farm.h"

int main()
{

    //Variables used during the program
    int mode;
    int choice = 1;
    int food = 0;
    int day = 1;
    int penguin = 0;
    srand(time(0));

    //Diferents class used during the program
    Fernando fernan(4, 6);
    Ogre lolero(2, 5);
    Farm farm(3);
    Fernando* pFernando;
    pFernando = new Fernando;
    farm.Add(*pFernando);
    pFernando = new Fernando;
    farm.Add(*pFernando);
    pFernando = new Fernando;
    farm.Add(*pFernando);

    cout << R"(  _____      _      __  __      _       ____    U  ___ u   ____   _   _               
 |_ " _| U  /"\  uU|' \/ '|uU  /"\  uU /"___|u   \/"_ \/U /"___| |'| |'|     ___      
   | |    \/ _ \/ \| |\/| |/ \/ _ \/ \| |  _ /   | | | |\| | u  /| |_| |\   |_"_|     
  /| |\   / ___ \  | |  | |  / ___ \  | |_| |.-,_| |_| | | |/__ U|  _  |u    | |      
 u |_|U  /_/   \_\ |_|  |_| /_/   \_\  \____| \_)-\___/   \____| |_| |_|   U/| |\u    
 _// \\_  \\    >><<,-,,-.   \\    >>  _)(|_       \\    _// \\  //   \\.-,_|___|_,-. 
(__) (__)(__)  (__)(./  \.) (__)  (__)(__)__)     (__)  (__)(__)(_") ("_)\_)-' '-(_/  )" << endl;
   
    
    cout << R"(             . --- .
           /        \
          |  O  _  O |
          |  ./   \. |
          /  `-._.-'  \
        .' /         \ `.
    .-~.-~/           \~-.~-.
.-~ ~    |             |    ~ ~-.
`- .     |             |     . -'
     ~ - |             | - ~
         \             /
       ___\           /___
       ~;_  >- . . -<  _i~
          `'         `')" << endl;

    //Introduction part for the user
    cout << "Welcome to a pet caring simulator!\n";
    cout << "You can choose to take care of a dancing penguin, by pressing 1\n";
    cout << "Taking care of an ogre, by pressing 2\n";
    cout << "Or if you want a chill experience, try to have a farm of 3 penguins\n";

    //With this part, the user chooses the player mode he wants to do 
    cin >> mode;


    //Switch case to change between modes
    switch (mode) {


    //Case 1, being a normal Tamagochi experience
    case 1:


        //Introduction text
        cout << "\nThis is Fernando Miguel, he's surprisingly good at dancing!!!\n";
        cout << "He's a very manly Penguin, wearing a really fancy hat\n";
        cout << "He wants to live with you\n\n";

        //Void to let the player decide when to end
        do {

            //Day display (number of turns)
            cout << "Day: " << day << endl;
            cout << "Fernando Miguel is dancing as he wants to do something\n";
            cout << "0 - Quit\n1 - Listen to him\n2 - Feed him\n3 - Dance with him\n4 - Take him to the contest\n";

            //Part made to let the user let choose what to do
            cout << "Choice: ";
            cin >> choice;


            //Switch case used to let the user change the actions
            switch (choice) {
    

            //This case ends the void, it's the farewell option
            case 0:
                cout << "Fernando Miguel is seeing you abandon him, he's now dancing slower\n";
                cout << "You can tell he's very sad by the way he's dancing\n";
                cout << "But still, he's surprisingly good at dancing...\n";
                break;

            //This case is used to let the user know the status of the pet
            case 1:
                fernan.Talk();
                break;

            //Here the user can bring to his pet food
            case 2:
                fernan.Eat();
                break;

            //This part activates a little game where you dance with the pet
            case 3:
                fernan.Play();

                break;

            //This part is used to get the penguin to a show 
            case 4:
                fernan.Show();

                break;

            //Secret option to let the user know the current state of the pet
            case 113:
                fernan.GetMood();

                break;

            //Default option to avoid the program to break
            default:
                cout << "\nFernando Miguel dances at you disappointed. It was difficult to mess up\n";
                cout << "But still, he'll give you another chance to try it\n";

            }

            //Function used to add a day to the counter
            fernan.PassTime(day);

        } while (choice != 0);
        return 0;
        break;

    //This part is the second game mode, where you take care of an ogre
    case 2:

        cout << "This is your own ogre! Please take care of him\n\n";
        cout << "*STARTS RUNNING AS FAST AS HE CAN*\n\n";
        cout << "You see how he looks at you as he wants to do something\n";

        //Same as the last part, we create a void to make the player choose between options
        do {
            cout << "You see how he looks at you as he wants to do something\n";
            cout << "0 - Quit\n1 - Listen to him\n2 - Feed him\n3 - Play with him\n";
            cin >> choice;


            //Switch case done to let the user jump between the diferents options
            switch (choice) {


            //Leaving him block
            case 0:

                cout << "You made the right choice, better leave\n";
                cout << "It stinks, it eats a lot, he can kill you\n";
                cout << "Good decision...\n";

                break;

            //function used to talk with the ogre
            case 1:

                //Function visible at "Ogre.cpp"
                lolero.Talk();

                break;

            //Function where the orc eats you or not
            case 2:

                lolero.Eat();
                break;

            //Function used to "play" with the orc
            case 3:

                lolero.Play();
                break;

            //Function used to avoid
            default:

                cout << "The ogre waits looking at you\n";
                break;

            }
        } while (choice != 0);


        return 0;


    //Case used to create 3 penguins (experimental part)
    case 3:

        //Part used to show the diferents values 
        cout << "You decided to have 3 diferents pets\n";
        farm.Show();

        //Void used to choose the penguin we want to interact wiht
        do{
        cout << "You can choose the penguin you want to interact with, 0, 1 or 2\n";

        cin >> penguin;

        //Function that lets you 
        farm.Show(penguin);

        //Function used to add a day to the counter
       

    } while (choice != 0);
    return 0;


    //Default option that takes out the user
    default:
        cout << "First try and you put a wrong input? Stay away from my program!\n";
        return 0;

}
    }

