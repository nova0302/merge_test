#ifndef ISUBJECT_H
#define ISUBJECT_H

class ISubject {
public:
  virtual ~ISubject(){}
  virtual void Attatch(IObserver *observer) = 0;
  virtual void Detach(IObserver *observer) = 0;
  virtual void Notify() = 0;

};

#endif /* ISUBJECT_H */
