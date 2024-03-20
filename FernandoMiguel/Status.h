#pragma once
#include <iostream>
#include <ctime>
#include <Windows.h>

//Namespace where the program happens
using namespace std;

/// <summary>
/// Class Fernando, used as the main class
/// </summary>
class Fernando
{
public:
	Fernando(int hunger = 8, int boredom = 8);
	void virtual Talk();
	void virtual Eat();
	void Play();
	void Show();
	void Combat();
	void PassTime(int timespend = 1);
	void danceMove(int rng);
	void virtual GetMood() const;

private:
	int day = 1;
	int m_Hunger;
	int m_Boredom;
	
	
};

