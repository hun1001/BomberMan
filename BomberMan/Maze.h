#pragma once
#include "console.h"
#include "TileType.h"

class Maze
{
public:
	Maze(int size);

private:
	char** _tile;
	int _size;
	POINT _startPos;
	POINT _endPos;
	bool _isAssign;
public:
	void GenerateByBinaryTree();
	char** GetTile();
	int* GetSize();
	POINT GetStartPos();
	POINT GetEndPos();

private:
	void SetStartPos();
	void SetEndPos();

public:
	void SetPos();
};
