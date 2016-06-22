#include "placeholderitem.h"

PlaceholderItem::PlaceholderItem(QWidget *parent)
    : DockItem(Placeholder, parent)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

void PlaceholderItem::mousePressEvent(QMouseEvent *e)
{
    QWidget::mousePressEvent(e);
}