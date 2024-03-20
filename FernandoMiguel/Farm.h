#pragma once
#include "Status.h"
#include <vector>

/// <summary>
/// Class farm to be able to use the farm part
/// </summary>
class Farm
{
public: 
	Farm(int spaces = 1);
	void Add( Fernando& f);
	void Show();
	void Show(int penguin);
	void PassTime(int timespend);

private:
	vector <Fernando>m_Fernandos;
};

