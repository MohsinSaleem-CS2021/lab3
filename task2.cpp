#include<iostream>

class Sum{
public:
  Sum(int a , int b)
  {
    numb1 = a;
    numb2 = b;
  }
  int addition()
  {
    return numb1 + numb2;
  }


private:
  int numb1 , numb2;
};

int main() {
  int a ,b;
  std::cout << "enter first number : ";std::cin >> a;
  std::cout << "enter second number : ";std::cin >> b;
  Sum o1(a , b);

  std::cout << "result = " << o1.addition() << '\n';
  return 0;
}
