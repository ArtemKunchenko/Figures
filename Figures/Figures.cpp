#include "Figures.h"

Figures::Figures()
{
	_sizeS = 0;
	_sizeT = 0;
	_squares = nullptr;
	_triangles = nullptr;
}

Figures::Figures(Square square)
{
	_sizeS = 1;
	_sizeT = 0;
	_squares = new Square[_sizeS];
	_triangles = nullptr;
	if (_squares == NULL)
	{
		cout << "Error\n";
		exit(-1);
	}
	_squares[0] = square;
}

Figures::Figures(Triangle triangle)
{
	_sizeS = 0;
	_sizeT = 1;
	_squares = nullptr;
	_triangles = new Triangle[_sizeT];
	if (_triangles == NULL)
	{
		cout << "Error\n";
		exit(-1);
	}
	_triangles[0] = triangle;
}

Figures::Figures(Square square, Triangle triangle)
{
	_sizeS = 1;
	_sizeT = 1;
	_squares = new Square[_sizeS];
	_triangles = new Triangle[_sizeT];
	if (_squares == NULL)
	{
		cout << "Error\n";
		exit(-1);
	}
	_squares[0] = square;
	if (_triangles == NULL)
	{
		cout << "Error\n";
		exit(-1);
	}
	_triangles[0] = triangle;
}

Figures::~Figures()
{
	if (_squares != nullptr) delete[]_squares;
	if (_triangles != nullptr) delete[]_triangles;
}

Figures::Figures(const Figures& initial)
{
	if (initial._squares==nullptr)
	{
		this->_sizeS = initial._sizeS;
		this->_squares = nullptr;
	}
	else
	{
		this->_sizeS = initial._sizeS;
		this->_squares = new Square[_sizeS];
		if (_squares == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		for (int i = 0; i < _sizeS; i++)
		{
			_squares[i] = initial._squares[i];
		}
	}
	if (initial._triangles == nullptr)
	{
		this->_sizeT = initial._sizeT;
		this->_triangles = nullptr;
	}
	else
	{
		this->_sizeT = initial._sizeT;
		this->_triangles = new Triangle[_sizeT];
		if (_triangles == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		for (int i = 0; i < _sizeT; i++)
		{
			_triangles[i] = initial._triangles[i];
		}
	}
}

void Figures::operator=(const Figures& initial)
{
	if (initial._squares == nullptr)
	{
		this->_sizeS = initial._sizeS;
		this->_squares = nullptr;
	}
	else
	{
		this->_sizeS = initial._sizeS;
		this->_squares = new Square[_sizeS];
		if (_squares == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		for (int i = 0; i < _sizeS; i++)
		{
			_squares[i] = initial._squares[i];
		}
	}
	if (initial._triangles == nullptr)
	{
		this->_sizeT = initial._sizeT;
		this->_triangles = nullptr;
	}
	else
	{
		this->_sizeT = initial._sizeT;
		this->_triangles = new Triangle[_sizeT];
		if (_triangles == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		for (int i = 0; i < _sizeT; i++)
		{
			_triangles[i] = initial._triangles[i];
		}
	}
}

void Figures::AddFigure(Square square)
{
	if (_squares==nullptr)
	{
		_sizeS++;
		_squares = new Square[_sizeS];
		if (_squares == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		_squares[0] = square;
	}
	else
	{
		Square* tempSquares = new Square[_sizeS];
		for (int i = 0; i < _sizeS; i++)
			tempSquares[i] = _squares[i];
		if (_squares != nullptr)
			delete[] _squares;
		_squares = new Square[_sizeS + 1];
		for (int i = 0; i < _sizeS; i++)
			_squares[i] = tempSquares[i];
		_squares[_sizeS] = square;
		_sizeS++;
		delete[] tempSquares;

	}
}

void Figures::AddFigure(Triangle triangle)
{
	if (_triangles == nullptr)
	{
		_sizeT++;
		_triangles = new Triangle[_sizeT];
		if (_triangles == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		_triangles[0] = triangle;
	}
	else
	{
		Triangle* tempTriangles = new Triangle[_sizeT];
		for (int i = 0; i < _sizeT; i++)
			tempTriangles[i] = _triangles[i];
		if (_triangles != nullptr)
			delete[] _triangles;
		_triangles = new Triangle[_sizeT + 1];
		for (int i = 0; i < _sizeT; i++)
			_triangles[i] = tempTriangles[i];
		_triangles[_sizeT] = triangle;
		_sizeT++;
		delete[] tempTriangles;

	}
}

void Figures::AddFigure(Square square, Triangle triangle)
{
	if (_squares == nullptr)
	{
		_sizeS++;
		_squares = new Square[_sizeS];
		if (_squares == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		_squares[0] = square;
	}
	else
	{
		Square* tempSquares = new Square[_sizeS];
		for (int i = 0; i < _sizeS; i++)
			tempSquares[i] = _squares[i];
		if (_squares != nullptr)
			delete[] _squares;
		_squares = new Square[_sizeS + 1];
		for (int i = 0; i < _sizeS; i++)
			_squares[i] = tempSquares[i];
		_squares[_sizeS] = square;
		_sizeS++;
		delete[] tempSquares;

	}
	if (_triangles == nullptr)
	{
		_sizeT++;
		_triangles = new Triangle[_sizeT];
		if (_triangles == NULL)
		{
			cout << "Error\n";
			exit(-1);
		}
		_triangles[0] = triangle;
	}
	else
	{
		Triangle* tempTriangles = new Triangle[_sizeT];
		for (int i = 0; i < _sizeT; i++)
			tempTriangles[i] = _triangles[i];
		if (_triangles != nullptr)
			delete[] _triangles;
		_triangles = new Triangle[_sizeT + 1];
		for (int i = 0; i < _sizeT; i++)
			_triangles[i] = tempTriangles[i];
		_triangles[_sizeT] = triangle;
		_sizeT++;
		delete[] tempTriangles;

	}
}

void Figures::PrintSquares()
{
	if (_squares == nullptr) cout << "Array of squares is empty\n";
	else
	{
		for (int i = 0; i < _sizeS; i++)
		{
			cout << "Square " << i + 1 << ":\n";
			cout<<_squares[i].ToString()<<endl;
		}
	}
}

void Figures::PrintTriangles()
{
	if (_triangles == nullptr) cout << "Array of triangles is empty\n";
	else
	{
		for (int i = 0; i < _sizeT; i++)
		{
			cout << "Triangle " << i + 1 << ":\n";
			cout << _triangles[i].ToString()<<endl;
		}
	}
}

void Figures::setFigure(Square square, int index)
{
	if (index >= 0 && index < _sizeS) { _squares[index] = square; }
	else cout << "Error! Invalid index\n";
}

void Figures::setFigure(Triangle triangle, int index)
{
	if (index >= 0 && index < _sizeT) { _triangles[index] = triangle; }
	else cout << "Error! Invalid index\n";
}

Square Figures::getFigure_square(int index)
{
	if (index >= 0 && index < _sizeS) { return _squares[index]; }
	else cout << "Error! Invalid index\n";
}

Triangle Figures::getFigure_triangle(int index)
{
	if (index >= 0 && index < _sizeT) { return _triangles[index]; }
	else cout << "Error! Invalid index\n";
}

int Figures::getSize_S(){ return _sizeS;}

int Figures::getSize_T(){return _sizeT;}
