#pragma once
#include "Status.h"
#include <cstdlib>

/// <summary>
/// Class ogre, child class from the Fernando one
/// </summary>
class Ogre: public Fernando
{
public:
	Ogre(int m_Hunger = 2, int m_Boredom = 4);
	void virtual Talk();
	void virtual Eat();
	void virtual GetMood() const;
	void Play();
	/*void PassTime(int timespend = 1);*/
	

private: 
	int day;
	int m_Hunger;
	int m_Boredom;
};

