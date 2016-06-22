#ifndef PLACEHOLDERITEM_H
#define PLACEHOLDERITEM_H

#include "dockitem.h"

class PlaceholderItem : public DockItem
{
    Q_OBJECT

public:
    explicit PlaceholderItem(QWidget *parent = 0);

private:
    void mousePressEvent(QMouseEvent *e);
};

#endif // PLACEHOLDERITEM_H