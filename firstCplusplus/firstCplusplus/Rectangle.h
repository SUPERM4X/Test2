#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#endif
class Rectangle
{
public:

	Rectangle();

	Rectangle(double newHeight, double newWidth);

	void setWidth(double);

	double getWidth() const;

	void setHeight(double);

	double getHeight() const;

	double getArea() const;

	static int getNumOfRect();

private:

	double width;
	double height;
	static int numOfRect;
};