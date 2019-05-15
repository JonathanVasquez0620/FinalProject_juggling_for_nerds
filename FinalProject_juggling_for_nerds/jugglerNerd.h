#ifndef JUGGLERNERD_H
#define JUGGLERNERD_H

using namespace std;

class Juggler
{
public:
	Juggler();
	Juggler(double n, double mass, double t_rel, double t_reset_pos);
	double calc_tot_time(int num);		//This is the total time per object the juggler has to catch, release and repostion
	double calc_height();
	void print();

private:
	int num_objects;
	double mass_object;		//mass is not needed in simple calculation, but it could be used in more complex solution to calculate time to catch and release
	double release_time;
	double reposition_time;
	double tot_time;
	double height;
};

#endif // !JUGGLERNERD_H

