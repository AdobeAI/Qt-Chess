#include "chesspanel.h"


ChessPanel::ChessPanel(QWidget *parent)
    : QGraphicsScene(parent) {

    /*QGraphicsRectItem *rectItem = new QGraphicsRectItem(200, 100, 200, 200);
    rectItem->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsFocusable);
    QPen pen = rectItem->pen();
    pen.setWidth(2);
    pen.setColor(QColor(111, 111, 111));
    rectItem->setPen(pen);
    rectItem->setBrush(QColor(111, 111, 111, 100));
    addItem(rectItem);*/

    QGraphicsRectItem *rectItem = new QGraphicsRectItem(0, 0, 100, 100);
    rectItem->setFlags(QGraphicsItem::ItemIsFocusable);
    rectItem->setPen(Qt::NoPen);
    rectItem->setBrush(QColor(139, 69, 19, 200));
    addItem(rectItem);

    QGraphicsRectItem *rectItem1 = new QGraphicsRectItem(100, 0, 100, 100);
    rectItem1->setFlags(QGraphicsItem::ItemIsFocusable);
    rectItem1->setPen(Qt::NoPen);
    rectItem1->setBrush(QColor(244, 164, 96, 200));
    addItem(rectItem1);
}
