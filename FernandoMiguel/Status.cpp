#include "Status.h"

/*Part of the code used to pass the values from the 
class creation to used variables*/
Fernando::Fernando(int hunger, int boredom) : m_Hunger(hunger), m_Boredom(boredom) {}

//inline int Fernando::GetMood() const { return (m_Hunger + m_Boredom); }


/// <summary>
/// Function used to know the current state of the pet, by diferents hints based on his interactions
/// </summary>
void Fernando::Talk() {
	
	cout << "Fernando seems to be a penguin of few words\n";
	cout << "He likes to tell you about things by just dancing\n";


	//This part is breaking this function, because the days are not being added to the count
	if (day == 0) {
		cout << "His dance tells you that he's really happy to be adopted\n";
		cout << "Even thought you had no alternative";
		
	}

	else if (m_Hunger == 0 || m_Boredom == 0) {
		cout << "Fernando Miguel sudenly stops dancing\n";
		cout << "It stares at you, deeply into your eyes\n";
		cout << "'How do you dare to ask me? After all of this?'\n";
		cout << "'You should know that I am starving, you almost do nothing with me!'\n";
		cout << "'And you're asking me how I am?! You better get your ass and give me";
		cout << "the best food no one has ever tasted!!!'\n";
		
	}

	else if (m_Hunger == 0){
		cout << "Fernando Miguel is dancing very slowly\n";
		cout << "He does look happy, but you can see he's not really healthy\n";
		cout << "Don't blame the fact that he's always dancing, because \n";
		cout << "he really enjoys it. Better give him something to eat\n";
		
	}

	else if (m_Boredom == 0) {
		cout << "Fernando Miguel seems bored, to the point he lost interest\n";
		cout << "into dancing. C'mon, you should be able to play with him\n";
		cout << "or something, you cannot do it this baddly\n";
		
	}

	else if ((m_Hunger >= 1 && m_Hunger <= 3) && (m_Boredom >= 1 && m_Boredom <= 3)) {
		cout << "Fernando Miguel seems kind of bored and hungry\n";
		cout << "Even that, he's still dancing and being very good at it\n";
		cout << "He looks at you with a weak smile\n";
		cout << "Hurry up and help him out\n";
		
	}

	else if (((m_Hunger >= 4 && m_Hunger <= 9) && (m_Boredom >= 1 && m_Boredom <= 3))){
		cout << "Fernando Miguel seems kind of bored\n";
		cout << "He feels energetic and able to dance thanks to the food\n";
		cout << "He's very grateful, even thought he thinks you may be kind of boring\n";
		cout << "You wouldn't be a great dance partner, he thoughts\n";
		
	}

	else if ((m_Hunger >= 1 && m_Hunger <= 3) && (m_Boredom >= 4 && m_Boredom <= 9)) {
		cout << "Fernando Miguel seems to be excited\n";
		cout << "The thing is that you see him dancing, but it seems with less energy\n";
		cout << "Sometimes you can even hear his stomach roaring\n";
		cout << "But he doesn't seem to case, he really enjoys your company\n";
		cout << "He even feels you as an equal\n";
		

	}

	//Condition that is activated when both hunger and Boredom is around 4 and 9
	else if ((m_Hunger >= 4 && m_Hunger <= 9) && (m_Boredom >= 4 && m_Boredom <= 9)) {
		cout << "Fernando Miguel feels great and gets everything he needs!\n";
		cout << "He's really shows to you how much he likes you that he prepares an entire choreography!\n";
		cout << "He also sees you as his dancing companion :D\n";
		
	}

	//Condition when the varues are perfect
	else if (m_Hunger <= 10 && m_Boredom <= 10) {

		cout << "Fernando Miguel is now living his best life\n";
		cout << "His dancing moves improved that good, that he's considered a GOD\n";
		cout << "Thanks to your efforts he's literally the best cared penguin in the world\n";
		cout << "He's very thankful to you, he cannot hold his tears to you while dancing\n";
	}

	//Condition when hunger is perfect
	else if (m_Hunger <= 10){
		cout << "Fernando Miguel feels kind of heavy. Strange. He never stops eating\n";
		cout << "He really destroys the dance floor each time he dances today\n";
		cout << "And no, it's not because he's fat. Its because he's\n";
		cout << "Surprisingly GOOOOOOD at dancing\n";

	}

	//Condition when happines is perfect
	else if (m_Boredom <= 10) {

		cout << "Fernando Miguel is acting way too excited\n";
		cout << "You're even starting to get worried\n";
		cout << "He dance like he's in a rave and he took M or extasis\n";
		cout << "You shoul not worry though, he's just way too happy\n";
		cout << "After all, you're taking good care of him\n";
	}


}

/// <summary>
/// Function used to let the user give to the pet diferent dishes
/// </summary>
void Fernando::Eat() {
	
	int dish;

	cout << "Fernando looks at you, as always, while dancing\n";
	cout << "What do you want to give to him?\n";
	cout << "1 - Fish\n2 - Salad\n3 - A Seal\n4 - Alitas Pican, pero pican rico\n5 - A rico plato of Paella\n";
	
	//Void made to avoid errors
	do {
		cout << "Dish: ";
		cin >> dish;

		/*Switch case used to choose which food do you give to Fernando
		depending on the answer, it will save more or less 
		hunger value*/
		switch (dish) {

		case 1:

			cout << "You give to Fernando Miguel a little fish!\n";
			cout << "He keeps on dancing, his Im kind of upset dance!\n";
			cout << "He fills his belly a little!\n";
			m_Hunger += 2;

			break;

		case 2:

			cout << "You give a salad to Fernando Miguel!\n";
			cout << "He dances his WTF dance\n";
			cout << "Not a big fan of salads huh?\n";
			m_Hunger += 1;

			break;

		case 3:

			cout << "You give to Fernando Miguel a big dead seal!\n";
			cout << "He really looks amazed! Lots of fat to get energy from it!\n";
			cout << "He takes it all whule dancing!\n";
			m_Hunger += 6;
			break;

		case 4:

			cout << "Alitas Pican, pero pican rico!!\n";
			cout << "He starts dancing really fast, but you cannot tell if it's\n";
			cout << "For the spicy flavour or for the excitement\n";
			cout << "Who's gonna tell him that he ate a bird?...\n";
			cout << "Did you thought about it?\n";

			m_Hunger += 4;
			m_Boredom += 2;
			break;

		case 5:

			cout << "A rico plato de Paella! Provided by a random neighbour!\n";
			cout << "Fernando Miguel is the center of attention while everyone eats!\n";
			cout << "They are going crazy by just seeing dance in excitement!\n";
			cout << "What a fine day we lived!\n";

			m_Boredom += 3;
			m_Hunger += 3;
			break;

		default:

			cout << "The poor Fernando is starving, please choose wisely\n";
			break;
		}
	} while (dish <= 0 || dish >= 6);
}


/// <summary>
/// Function used to play with the pet
/// </summary>
void Fernando::Play() {

//Variables needed to execute the game properly

int rng;


//We give to rng a value, to change the diferents options 


cout << "Fernando seems too enjoy the dancing a lot\n";
cout << "Seems like he wants you to join him\n";
cout << "But he seems too hard to follow his rhytmn\n";
cout << "So you'll have to guess the next step and try it!\n";



/*Little game thought as a little more interactive part
where the user has to guess the next movement the penguin will do
I did it with a randomly generated switch to make the solutions
less predictable*/
for (int i = 0; i < 2; i++) {

	rng = rand() % 3 + 1;

switch (rng) {

case 1: 

	danceMove(rng);

	break;

case 2: 

	danceMove(rng);

	break;

case 3:

	danceMove(rng);

	break;

case 4: 

	danceMove(rng);

	break;

default: 

	cout << "Error, look at the rand!\n";

}

}

}


/// <summary>
/// Function used to take the pet to a show, it can provide stats and change depending on his state
/// </summary>
void Fernando::Show() {

	cout << "You decide to take Fernando to a contest, and help him being the best dancer\n";
	cout << "I hope you practiced with him a lot, because the other dancers seems tough...\n";
	cout << "Finally, our penguin gets on the stage and starts dancing...\n\n";
	
	//Win codition
	if (m_Boredom > 7 && m_Hunger > 7) {

		cout << "He jumps!\n\n";
		cout << "He twists around!\n\n";
		cout << "And he even starts flying!!!\n\n";
		cout << "People can't stop being amazed!!!\n";
		cout << "They even start crying!!!\n";
		cout << "The council has a veredic\n";
		cout << ".    .    .\n";
		cout << "FERNANDO MIGUEL IS THE GREATEST DANCER EVER BORN!!!!\n";
		cout << "The prince is the greatest Tuna ever seen and the most happiness Fernando can get!!!\n";

		m_Hunger += 5;
		m_Boredom += 5;
	}

	//Worst scenario possible
	else if (m_Boredom == 0 && m_Hunger == 0) {

		cout << "People are worried about Fernando Miguel\n";
		cout << "He seems like he's almost dead\n";
		cout << "He looks very thin and bored\n";
		cout << "Everyone is judging you like you are a monster\n";

	}

	//Possible good sceario
	else {

		cout << "Fernando Miguel starts dancing, he's getting all his moves right\n";
		cout << "People seems to enjoy it, but for them, is just another good contestant\n";
		cout << "The council can't get a clear answer to this situation...\n";
		cout << "The first award goes for the Random Deer nº 72\n";
		cout << "Even that Fernando Miguel didn't stop dancing!\n";
		cout << "He's such a proud dancer!!! What an admirable way to go!\n";

		m_Boredom += 3;

	}

}

///// <summary>
///// Function to be developed
///// </summary>
//void Fernando::Combat() {
//
//
//}

/// <summary>
/// Void used to let the program add a day to the count 
/// </summary>
/// <param name="timespend"></param>
void Fernando::PassTime(int timespend) {

	cout << "And while Fernando Miguel keeps on dancing\n";
	cout << "The night arrives, so we better get some rest\n";

	//Part used to set the maxium and minium for each element, and take some values
	if (m_Hunger > 10) 
		m_Hunger = 10;
	if (m_Boredom > 10)
		m_Boredom = 10;

	m_Hunger -= rand() % 2 + 1;
	m_Boredom -= rand() % 2 + 1;

	if (m_Hunger < 0)
		m_Hunger = 0;
	if (m_Boredom < 0)
		m_Boredom = 0;

	day += timespend;
	

}


/// <summary>
/// Function called during the Play function, used here to make more clear the code
/// </summary>
/// <param name="fernan"></param>
/// <param name="rng"></param>
void Fernando::danceMove(int rng) {

	int step;
	string move[4] = { "Sidestep", "Twist", "Reverence", "JumpingSteps" };

	cout << "What do you expect Juan Miguel to do?\n";
	cout << "0 - Sidestep\n1 - Twist\n2 - Reverence\n3 - Jumping Steps\n";
	cout << "Guess: ";
	cin >> step;
	cout << "\nFernando Miguel does a " + move[rng];
	cout << "!\n";
	

	if (step == rng) {

		cout << "Fernando Miguel is amazed that you kept up with his rhytmn!\n";
		m_Boredom += 4;
	}

	else {
		cout << "Fernando Miguel is upsed with you\n";
		cout << "You're messing his dance, but he's still enjoying it\n";
		m_Boredom += rand() % 1 + 1;
	}

}

/// <summary>
/// Function used to get the Mood of the pet (SECRET)
/// </summary>
void Fernando::GetMood() const{

	cout << "This is a secret code! Who told you?!\n";
	cout << "Anyway, here's the current stat of the greatest dancer\n";
	cout << "10 is the best he can be, and 0 is the worst\n";
	cout << "Call the developer if the number gets out of control\n\n";

	cout << "Huger: " << m_Hunger << endl;
	cout << "Boredom: " << m_Boredom << endl;
}