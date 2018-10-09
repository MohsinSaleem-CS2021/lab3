#include<iostream>

class Area{
public:
  double AreaOfRectangle(double l , double w)
  {
    length = l;
    width = w;
    double area = length * width;
    return area;
  }

private:
  double length , width;
};

int main() {
  Area area;
  double l ,w;
  std::cout << "enter length : ";std::cin >> l;
  std::cout << "enter width : ";std::cin >> w;
  std::cout << "area of rectangle is : " << area.AreaOfRectangle(l , w) << '\n';
  return 0;
}
