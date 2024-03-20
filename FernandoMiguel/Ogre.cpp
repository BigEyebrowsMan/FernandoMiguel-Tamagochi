#include "Ogre.h"

/// <summary>
/// Part of the code used to create the ogre class
/// </summary>
/// <param name="hunger"></param>
/// <param name="boredom"></param>
Ogre::Ogre(int hunger, int boredom) : m_Hunger(hunger), m_Boredom(boredom) {}


/// <summary>
/// Funnction used to make the ogre "talk"
/// </summary>
void Ogre::Talk() {

	cout << "You try to talk with the Ogre: \n\n";
	cout << "GRRAAAAAAAAAAWWWWGGGGGGGGRRRRRR\n\n";
	cout << "Such an intelectual specimen\n";
}

/// <summary>
/// Function used to give food to the ogre
/// </summary>
void Ogre::Eat() {
	int deer = 0;
	cout << "Your ogre looks hungry\n";
	cout << "So we hope you can give him something to eat\n";
	cout << "You can give him a deer, but nothing else\n";
	cout << "Press 1 to give the deer, anything else to not give to it food\n";
	cin >> deer;

	if (deer == 1) {
		cout << "You give to the ogre a deer. He really loved it!";
		m_Hunger += 2;
	}

	//In case you don't give to the ogre food, it eats you
	else {
		cout << "That wasn't a smart decision\n";
		cout << "Basically, the ogre is still angry\n";
		cout << "So it basically eats you\n";
		cout << "GG I guess";
		exit(EXIT_FAILURE);
	}


}

/// <summary>
/// Funnction used to "play" with the Ogre
/// </summary>
void Ogre::Play() {

	cout << "The ogre likes to play a little game called:\n";
	cout << "Smash the user when he does stupid things\n";
	cout << "If you didn't get it, just trying to play with him means you're dead\n";
	cout << "And POP! You ded";
	exit(EXIT_FAILURE);
}

/// <summary>
/// Secret function
/// </summary>
void Ogre::GetMood() const {

	cout << "This is a secret code! Who told you?!\n";
	cout << "Anyway, here's the current stat of that big boi\n";
	cout << "10 is the best he can be, and 0 is the worst\n";
	cout << "Call the developer if the number gets out of control\n\n";

	cout << "Huger: " << m_Hunger << endl;
	cout << "Boredom: " << m_Boredom << endl;
}