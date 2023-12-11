#pragma once

#include <vector>

using namespace std;

class display
{
public:
	display();
	~display();

public: 
	int width = 64;
	int height = 32;

	// vector for filling the pixel by yes or no
	vector<vector<bool>> color_matrix;
};

