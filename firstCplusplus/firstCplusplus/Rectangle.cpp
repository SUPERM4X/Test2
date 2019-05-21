#include "Rectangle.h"

int Rectangle::numOfRect = 0;

Rectangle::Rectangle()
{
	width = 5;
	height = 10;
	numOfRect++;
}

Rectangle::Rectangle(double newHeight, double newWidth)
{
	width = newWidth;
	height = newHeight;
	numOfRect++;
}

double Rectangle::getArea() const
{
	return width * height;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getHeight() const
{
	return height;
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}

int Rectangle::getNumOfRect()
{
	return numOfRect;
}