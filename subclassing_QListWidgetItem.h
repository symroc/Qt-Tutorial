#ifndef LWI_H
#define LWI_H
#include <QListWidgetItem>
#include <QListWidget>
#include <QString>
#include "f2t.h"


class lwi : public QListWidgetItem {
  public:
  lwi(QListWidget* parent):QListWidgetItem(parent){}
  private:
  bool operator<(const QListWidgetItem &other)const {
      uint self=your_customized_function(text());
      uint comp=your_customized_function(other.text());
     return  self < comp;
  }
};




#endif // LWI_H
