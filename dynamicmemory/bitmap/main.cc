/*
Author: Monami Mukhopadhyay & Xingyuan Guo
Program: Bitmap
*/

#include<iostream>
#include "Bitmap.h"
#include "Color.h"

using namespace std;

int main(){
  
  Bitmap b(100,100); // 30 pixels across, 20 pixels high, each pixel RGBA
	           // top left pixel = (0,0)
  Color RED(255,0,0,255); // all red, no green, no blue (fully opaque)
  Color BLUE(0,0,255,255);
  Color GREEN(0,255,0,255);
  Color WHITE(255,255,255,255);
  Color BLACK(0,0,0,255);
	
	
  b.line(0,0,19,19, RED);
  b.line(0,5,29,10, BLUE); //Bresenham algorithm 
  b.horizLine(0,20,19, GREEN); // from x=0 to x=20 at y=19 
  b.vertLine(5,0,19, GREEN); // from y = 0 to y=19 at x = 5 
  b.fillRect(10,10,4,3,BLACK); // x = 10, y =10 w=4, h=3 
  b.drawRect(10,10, 4, 3,WHITE); // x = 10, y =10 w=4, h=3
  b.ellipse(50,50, 10, 14, RED);    // ellipse centered at (15,0) w= 8, h=5
  cout << b; 
  
}
  
