#ifndef __SSTF_HPP__
#define __SSTF_HPP__

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

class SSTF {
	std::ifstream fin;
	int finalCylinder;
	int nowPosition;
	int totalDist;
	std::vector<int> requests;
	void walk();

public:
	SSTF(const std::string& filename);
	void walkThrough();
};

#endif