#ifndef NO13MOVINGCOUNTBACKTRACKING_H
#define NO13MOVINGCOUNTBACKTRACKING_H

class MovingCountBacktraing {
public:
	int threshold;
	int rows;
	int cols;
	bool* visited = new bool[rows*cols, false];
public:
	MovingCountBacktraing(int threshold, int rows, int cols);
	~MovingCountBacktraing();
public:
	int MovingCount();
	int MovingCountCore(int threshold, int rows, int cols, int row, int col, bool* visited);
	bool Check(int threshold, int rows, int cols, int row, int col, bool* visited);
};

#endif // !NO13MOVINGCOUNTBACKTRACKING_H

