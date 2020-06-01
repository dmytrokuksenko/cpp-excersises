#ifndef GEOMETRY_H_
#define GEOMETRY_H_

class Point
{
private:
	int x, y;

public:
	/**
		Initializes a point at the origin (0, 0) if called with no arguments.
		@param a: the integer x coordinate of the point
		@param b: the integer y coordinate of the point
	*/
	Point(int a=0, int b=0);

	/**
		Get the x coordinate of the point.
		@return x: the x coordinate of the point
	*/
	int getX() const {return x;}

	/**
		Get the y coordinate of the point.
		@return y: the x coordinate of the point
	*/
	int getY() const {return y;}

	/**
		Set the x coordinate of the point.
	*/
	void setX(const int new_x) {x = new_x;}

	/**
		Set the y coordinate of the point.
	*/
	void setY(const int new_y) {y = new_y;}
 };


class PointArray
{
private:

	int size;
	Point* points;

	void resize(int n);

public:

	/**
		Constructs an empty array of points.
	*/
	PointArray();

	/**
		Constructs an array of points.
		@param ppointsCopy[]: array of points
		@param new_size: size of an array
	*/
	PointArray(const Point ppointsCopy[], const int new_size);

	/**
		Constructs a copy of an array of points.
		@param pv: an array of points to be copied
	*/
	PointArray(const PointArray& pv);

	/**
		Deletes an internal arrays of points.
	*/
	~PointArray();

	/**
		Adds a point to the end of an array.
		@param p: point to be added to the array
	*/
	void push_back(const Point &p);

	/**
		Removes a point in the array at some arbitrary position, shifting the remaining
		elements to the left.
		@param pos: position of the point to be removed
	*/
	void remove(const int pos);

	/**
		Removes all points from an array and sets size to 0.
	*/
	void clear();

	/**
		Inserts a point at an arbitrary position to the array, shifting the remaining
		elements to the right.
		@param p: a point to be inserted
		@param pos: position of the point
	*/
	void insert(const int pos, const Point &p);

	/**
		Returns a size of the array.
		@return size: size of the array of points
	*/
	int getSize() const {return size;};

	/**
		Pointer to the point at arbitrary position in the array.
		@param pos: position of the point
	*/
	Point *get(const int pos);

	/**
		Constant pointer to the point at arbitrary position in the array.
		@param pos: position of the point
	*/
	const Point *get(const int pos) const;

};

class Polygon
{
protected:
	static int numPolygons;
	PointArray points;

public:
	/**
		Creates a polygon from an array of points.
		@param pa: an existing array of points
	*/
	Polygon (const  PointArray &pa);

	/**
		Creates a polygon from an array of points.
		@param points: an array of points
		@param numPolygons: the length of the array
	*/
	Polygon (const Point points [], const int numPolygons);


	/**
		Calculates the area of the polygon.
	*/
	virtual double area() const = 0;

	/**
		Returns the number of existing polygons.
	*/
	int getNumPolygons() const {return numPolygons;};

	/**
		Returns the number of sides of a polygon.
	*/
	int getNumSize () const {return points.getSize();};

	/**
		Returns a pointer to the unmodifiable array of points for a given polygon.
	*/
	const PointArray *getPoints() const {return &points;};

	~ Polygon() {-- numPolygons;};

};

class Rectangle : public Polygon
{
public:

	/**
		Creates the rectangle from two points.
		@param a: the lower left coordinates
		@param b: the upper right coordinates
	*/
	Rectangle (const Point &a, const Point &b);

	/**
		Creates the rectangle from four points.
		@param a: the lower left x coordinates
		@param b: the lower left y coordinates
		@param c: the upper right x coordinates
		@param d: the upper right y coordinates
	*/
	Rectangle (const int a, const int b, const int c, const int d);

	/**
		Calculates the area of a rectangle.
	*/
	virtual double area() const;
};

class Triangle : public Polygon
{
public:

	/**
		Constructs a triangle from three points.
	*/
	Triangle (const Point &a, const Point &b, const Point &c);

	/**
		Calculates the area of a triangle.
	*/
	virtual double area() const;
};

#endif /* GEOMETRY_H_ */
