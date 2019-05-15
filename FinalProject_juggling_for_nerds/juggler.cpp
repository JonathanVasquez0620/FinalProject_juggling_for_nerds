
#include "jugglerNerd.h"
#include <iostream>
#include <cmath>
#include <iomanip>

Juggler::Juggler()
{
	tot_time = 0;
	height = 0;
}

Juggler::Juggler(double n, double mass, double t_rel, double t_reset_pos)
{
	num_objects = n;
	mass_object = mass;
	release_time = t_rel;
	reposition_time = t_reset_pos;
}

double Juggler::calc_tot_time(int num)
{
	//the total time each object needs to be in the air is enough time to cath release and reposition other objrcts and time to reposition that object

	//The code below was what I used before I tried to use recursion
	//tot_time = (release_time * (num_objects - 1)) + (reposition_time * num_objects);

	//Following code is recursive function to add time of each thrown object

	if (num <= 1)
	{
		return reposition_time;
	}
	double t = reposition_time + release_time;
	tot_time = calc_tot_time(num - 1) + t;
	return tot_time;
}

double Juggler::calc_height()
{
	//Height objectt has to be thrown is half the total distance needed to be traveled during total time
	const double g = 9.8;
	double t = calc_tot_time(num_objects);
	height = 0.5 * g * (t/2) * (t/2);	//Time is half becasue total is time for both up and down
	return height;
}

void Juggler::print()
{
	cout << "Juggler must throw the objects " << fixed << setprecision(2) << calc_height() << " meters high." << endl;
	return;
}

