
#ifndef CTIME_H
#define CTIME_H

#include<string>
using namespace std;

class Ctime {
public:
	const int const_test;
	static int count;
	int temp;
	Ctime();
	Ctime(Ctime &time);
	void getime(int hour, int minute, int second);

	~Ctime();

private:
	string name;
	int m_n_hour;
	int m_n_minute;
	int m_n_second;
};

#endif // !CTIME_H

