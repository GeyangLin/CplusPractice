#include"No12HasPathBacktracking.h"
#include<memory.h>


bool HasPath(char*matrix, int rows, int cols, char* str) {
	if (matrix == nullptr||str==nullptr||rows<=0||cols<=0)
		return false;
	bool* pVisited = new bool[rows*cols,0];
	//memset(pVisited, 0, rows*cols);
	int nPathLength = 0;

	for (size_t row = 0; row < rows; row++)
		for (size_t col = 0; col < cols; col++)
			if (HasPathCore(matrix, rows, cols, row, col, str, nPathLength, pVisited))
				return true;
	delete[] pVisited;
	return false;
}

bool HasPathCore(char*matrix, int rows, int cols, int row, int col,
	const char*str, int& pathlength, bool*visited) {
	if (str[pathlength] == '\0')
		return true;
	bool haspath = false;
	if (row >= 0 && row < rows && col >= 0 && col <= cols
		&& matrix[row*cols + col] == str[pathlength]
		&& !visited[row*cols + col]) {
		pathlength++;
		visited[row*cols + col];
		haspath = HasPathCore(matrix, rows, cols, row, col - 1, str, pathlength, visited)
			|| HasPathCore(matrix, rows, cols, row, col + 1, str, pathlength, visited)
			|| HasPathCore(matrix, rows, cols, row - 1, col, str, pathlength, visited)
			|| HasPathCore(matrix, rows, cols, row + 1, col, str, pathlength, visited);
		if (!haspath) {
			pathlength--;
			visited[row*cols + col] = false;
		}
	}
	return haspath;
}