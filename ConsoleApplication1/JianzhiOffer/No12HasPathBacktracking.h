#ifndef NO12PATHBACKTRACKING_H
#define NO12PATHBACKTRACKING_H

extern bool HasPath(char*matrix, int rows, int cols, char* str);
extern bool HasPathCore(char*matrix, int rows, int cols, int row, int col,
	const char*str, int& pathlength, bool*visited);

#endif // !NO12PATHBACKTRACKING

