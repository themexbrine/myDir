#include "ejemploApp.h"


void ejemploApp::setup()
{



}

void ejemploApp::update()
{



}

void ejemploApp::draw()
{

	Color c(255, 0, 0, 0);
	c.R(255);
	c.G(0);
	c.B(0);
	c.A(0);

	for (int x = 0; x < 1024; ++x)
	{
		putPixel(x, HEIGHT / 2, c);
	}

	
}