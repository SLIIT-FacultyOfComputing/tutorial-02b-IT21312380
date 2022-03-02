/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int facr = 1;
    for (int r=no; r >= 1; r--) 
    {
        facr = facr * r;
    }
  return no;
}
long nCr(int n, int r)
{
  float ans;
  float y;
  
  int facr = 1;
  
    for (int f=r; f >= 1; f--) 
    {
        facr = facr * f;
    }
 int facn = 1;
  
    for (int g=n; g >= 1; g--) 
    {
        facn = facn * g;
    }

y=(n-r);

int facy=1;
for (int h=y; h >= 1; h--) 
    {
        facy = facy * h;
    }


ans=facn/(facr*facy);
  return ans;
}