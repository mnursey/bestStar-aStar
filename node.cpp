#include <list>

struct Node{
	int locationX;
	int locationY;
	std::list<Node> neighbours;
};