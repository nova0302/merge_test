#include <iostream>
#include <list>

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

class Subject : public ISubject {
public:
  virtual ~Subject(){std::cout << "Goodbye, I was the Subject.\n";}
  void Attach(IObserver *observer) override {list_observer_.push_back(observer);}
  void Detach(IObserver *observer) override {list_observer_.remove(observer);}
  void Notify() override {
    std::list<IObserver *>::iterator iterator = list_observer_.begin();
    HowManyObserver();
    while (iterator != list_observer_.end()) {
      (*iterator)->Update(message_);
      ++iterator;
    }
  }

  void CreateMessage(std::string message = "Empty") {
    this->message_ = message;
    Notify();
  }
  void HowManyObserver() {
    std::cout << "There are " << list_observer_.size() << " observers in the list.\n";
  }
private:
  std::list<IObserver *> list_observer_;
  std::string message_;
};


const int N = 32;

int main(int argc, char *argv[])
{

  for (int i=0; i < N; ++i)
    cout << i << " : Hello World!!" << endl;
  return 0;
}
