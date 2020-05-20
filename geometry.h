#ifndef GEOMETRY_H_
#define GEOMETRY_H_

class Point {

private:
	int x, y;

public:
	Point(int a=0, int b=0);
	void printPoint();

	int getX() const {return x;}
	int getY() const {return y;}

	void setX(const int new_x) {x = new_x;}
	void setY(const int new_y) {y = new_y;}
 };


class PointArray {

private:

	int size;
	Point* points;

	void resize(int n);

public:

	PointArray();
	PointArray(const Point ppintsCopy[], const int new_size);
	PointArray(const PointArray& pv);
	~PointArray();

	void push_back(const Point &p);

	void remove(const int pos);

	void clear();

	void insert(const int pos, const Point &p);

	int getSize() const {return size;};

	Point *get(const int pos);

	const Point *get(const int pos) const;

};

class Polygon {

protected:

	static int numPolygons;
	PointArray points;

public:

	Polygon (const  PointArray &pa);
	Polygon (const Point points [], const int numPolygons);

	virtual double area() const = 0;

	int getNumPolygons() const {return numPolygons;};

	int getNumSize () const {return points.getSize();};

	const PointArray *getPoints() const {return &points;};

	~ Polygon() {-- numPolygons;};

};

class Rectangle : public Polygon {

public:

	Rectangle (const Point &a, const Point &b);

	Rectangle (const int a, const int b, const int c, const int d);

	virtual double area() const;


};

class Triangle : public Polygon {


public:

	Triangle (const Point &a, const Point &b, const Point &c);

	virtual double area() const;

};

#endif /* GEOMETRY_H_ */
