#include "sstf.hpp"

SSTF::SSTF(const std::string& filename) : fin(filename), totalDist{ 0 } {
	fin >> finalCylinder >> nowPosition;
	while(!fin.eof() && requests.size() < 3) {
		int temp;
		fin >> temp;
		requests.push_back(temp);
	}
}

void SSTF::walkThrough() {
	while(!requests.empty()) {
		walk();
	}
}

int SSTF::getPosition() const {
	return nowPosition;
}

void SSTF::walk() {
	int index = 0;
	// if requests.size() == 1, then it's no need to compare, just take reauests[0].
	for(int i = 0; i + 1 < requests.size(); i++) {
		if(abs(requests[i] - nowPosition) > abs(requests[i + 1] - nowPosition))
			index = i + 1;
	}
	totalDist += abs(requests[index] - nowPosition);
	requests.erase(requests.begin() + index);
	if(!fin.eof()) {
		int temp;
		fin >> temp;
		requests.push_back(temp);
	}
}