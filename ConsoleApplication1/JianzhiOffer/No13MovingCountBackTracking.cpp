#include"No13MovingCountBackTracking.h"

MovingCountBacktraing::~MovingCountBacktraing() {
	delete[] this->visited;
}

MovingCountBacktraing::MovingCountBacktraing(int threshold, int rows, int cols) {
	this->threshold = threshold;
	this->rows = rows;
	this->cols = cols;
}

int MovingCountBacktraing::MovingCount() {
	if (threshold < 0 || rows <= 0 || cols <= 0)
		return 0;
	int count = this->MovingCountCore(this->threshold, this->rows, this->cols, 0, 0, this->visited);
	return count;
}

int MovingCountBacktraing::MovingCountCore(int threshold, int rows, int cols, int row, int col, bool* visited) {
	int count = 0;
	if (this->Check(threshold, rows, cols, row, col, visited)) {
		visited[row*cols + col] = true;
		count = 1 + this->MovingCountCore(threshold, rows, cols, row - 1, col, visited)
			+ this->MovingCountCore(threshold, rows, cols, row + 1, col, visited)
			+ this->MovingCountCore(threshold, rows, cols, row, col - 1, visited)
			+ this->MovingCountCore(threshold, rows, cols, row, col + 1, visited);//  backtracking process.
	}
}

bool MovingCountBacktraing::Check(int threshold, int rows, int cols, int row, int col, bool* visited) {
	return false;
}