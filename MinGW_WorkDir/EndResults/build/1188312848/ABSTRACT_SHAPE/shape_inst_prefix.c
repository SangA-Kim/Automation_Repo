/*vcast_header_expansion_start:C:\\VCAST\\ENVIRONMENTS\\GIT_TEST\\SOURCEFILES\\Shapes/rectangle.h*/
#include "c:/vcast/mingw/lib/gcc/mingw32/6.3.0/include/c++/string"
class Shape
{
  public:
    Shape();
    Shape(int x, int y);
    void setPosition(int x, int y);
    int getX() const;
    int getY() const;
    virtual std::string getName() const = 0;
    virtual float getArea() const = 0;
  public:
    int mX;
    int mY;
};
class Rectangle : public Shape
{
  public:
    Rectangle();
    Rectangle(int x, int y, int height, int width);
    virtual float getArea() const;
    virtual std::string getName() const { return "Rectangle"; }
  public:
    int mHeight;
    int mWidth;
};
/*vcast_header_expansion_end*/

