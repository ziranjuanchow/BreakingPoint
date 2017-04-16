#pragma once
#include "voro/voro++.hh"

typedef std::vector<std::vector<int>> Faces;
typedef std::vector<std::vector<double>> Points;
typedef std::pair<Points, Faces> Geometry;

class Voronoi {
	
public:
	void createVoronoiFile(int numSeeds, std::string outputFileName);

	std::vector<Geometry> parseVoronoi(std::string voronoiFile);
};