#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <iostream>
#include <list>
#include <string>

class IObserver {
public:
  virtual IObserver(){}
  virtual ~IObserver(){}
  IObserver();
};



#endif /* IOBSERVER_H */
