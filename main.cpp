#include <iostream>

using namespace std;

class IObserver {
public:
  virtual ~IObserver(){}
  virtual void Update(const std::string& message_from_subject) = 0;
};

class ISubject {
public:
  virtual ~ISubject(){}
  virtual void Attach(IObserver* o) = 0;
  virtual void Detach(IObserver* o) = 0;
  virtual void Notify() = 0;
};

const int N = 32;

int main(int argc, char *argv[])
{

  for (int i=0; i < N; ++i)
      cout << i << " : Hello World!!" << endl;
  return 0;
}
