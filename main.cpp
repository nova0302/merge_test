#include <iostream>

using namespace std;

class ISubject
{
public:
  ISubject();
  virtual ~ISubject();
};



const int N = 16;


int main(int argc, char *argv[])
{

  for (int i=0; i < N; ++i)
      cout << i << " : Hello World!!" << endl;
  
  return 0;
}
