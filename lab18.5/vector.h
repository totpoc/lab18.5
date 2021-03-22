#pragma once
#include <iostream>
#include "object.h"
using namespace std;
class Vector
{
	Object** _startpos = nullptr;
	int _size = 0;
public:
	Vector()
	{
		_startpos = nullptr;
		_size = 0;
	}
	Vector(int size)
	{
		_startpos = new Object * [size];
		_size = size;
	}
	Vector(Vector& tmp)
	{
		if (_startpos != nullptr)
			delete[] _startpos;
		else
		{
			int size = tmp.size();
			_startpos = new Object * [size];
			for (int i = 0; i < size; i++)
			{
				_startpos[i] = tmp._startpos[i];
			}
		}
	}
	~Vector()
	{
		if (_startpos != nullptr)
		{
			delete[] _startpos;
			_startpos = nullptr;
		}
	}
	//methods
	int size() { return _size; }
	void push_back(Object* value)
	{
		Object** tmp = new Object * [_size + 1];
		for (int i = 0; i < _size; i++)
		{
			tmp[i] = _startpos[i];
		}
		tmp[_size] = value;
		delete[] _startpos;
		_startpos = tmp;
		tmp = nullptr;
		_size++;
	}
	//overloads;
	friend ostream& operator << (ostream& out, Vector& list);
};
ostream& operator << (ostream& out, Vector& list)
{
	if (list._size == 0)
		return out << "Empty" << endl;
	Object** tmp = list._startpos;
	for (int i = 0; i < list._size; i++)
	{
		out << i + 1 << " element of list:" << endl;
		(*tmp)->Show();
		tmp++;
	}
	return out;
}