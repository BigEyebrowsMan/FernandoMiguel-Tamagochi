#include "Farm.h"
#include "Status.h"

/// <summary>
/// Part to create the farm object
/// </summary>
/// <param name="spaces"></param>
Farm::Farm(int spaces) {
    m_Fernandos.reserve(spaces);
}

/// <summary>
/// Part used to show the pets in your program
/// </summary>
void Farm::Show() {

    for (int i = 0; i < m_Fernandos.size(); ++i) {
        cout << "Cage " << i + 1 << endl;
        m_Fernandos[i].Talk();

        cout << endl;
    }
}

/// <summary>
/// Void used to pass the time
/// </summary>
/// <param name="timespend"></param>
void Farm::PassTime(int timespend) {
    for (auto& critter : m_Fernandos) {
        critter.PassTime(timespend);

    }
}

    /// <summary>
    /// Function used to create various pets, by pushing back the vectr
    /// </summary>
    /// <param name="f"></param>
    void Farm::Add(Fernando& f) {
        m_Fernandos.push_back(f);
    }

    /// <summary>
    /// Funcntion used to decide which pet we'll interact with
    /// </summary>
    /// <param name="penguin"></param>
    void Farm::Show(int penguin) {

        int choice = 0;

        cout << "What do you want to do with the penguin n " << penguin << endl;
        cout << "0 - Quit\n1 - Listen to him\n2 - Feed him\n3 - Play with him\n4- Showtime!";
        cin >> choice;

        switch (choice) {

        case 0:
            cout << "Fernando Miguel is seeing you abandon him, he's now dancing slower\n";
            cout << "You can tell he's very sad by the way he's dancing\n";
            cout << "But still, he's surprisingly good at dancing...\n";
            break;

        case 1:
            m_Fernandos[penguin].Talk();
            break;

        case 2:
            m_Fernandos[penguin].Eat();
            break;

        case 3:
            m_Fernandos[penguin].Play();

            break;

        case 4:
            m_Fernandos[penguin].Show();

            break;

        case 113:
            m_Fernandos[penguin].GetMood();

            break;

        default:
            cout << "\nJuan Miguel dances at you disappointed. It was difficult to mess up\n";
            cout << "But still, he'll give you another chance to try it\n";

        }

    }
