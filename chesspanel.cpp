#include "chesspanel.h"

#include <QTextDocument>
#include <QtCore>

ChessPanel::ChessPanel(QWidget *parent)
    : QGraphicsScene(parent)
    , cube_side(80) {

    /*QGraphicsRectItem *rectItem = new QGraphicsRectItem(200, 100, 200, 200);
    rectItem->setFlags(QGraphicsItem::ItemIsSelectable | QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsFocusable);
    QPen pen = rectItem->pen();
    pen.setWidth(2);
    pen.setColor(QColor(111, 111, 111));
    rectItem->setPen(pen);
    rectItem->setBrush(QColor(111, 111, 111, 100));
    addItem(rectItem);*/

    setSceneRect(-400, -400, 800, 800);

    int x = cube_side * 4 * -1, y = x;
    int next_x = cube_side;
    for(int i = 1 ; i <= 64 ; i++) {
        QGraphicsRectItem *rectItem = new QGraphicsRectItem(x, y, cube_side, cube_side);
        rectItem->setFlags(QGraphicsItem::ItemIsFocusable);
        rectItem->setPen(Qt::NoPen);
        if(i % 2 == 0) {
            rectItem->setBrush(QColor(139, 69, 19, 200));
        }else {
            rectItem->setBrush(QColor(244, 164, 96, 200));
        }
        addItem(rectItem);
        if( i % 8 == 0) {
            y += cube_side;
            next_x *= -1;
        }else {
            x += next_x;
        }
    }

    y = -300;
    for(int i = 1 ; i <= 8 ; i++) {
        QGraphicsTextItem *Item_left = new QGraphicsTextItem();
        Item_left->setPlainText(QString::number(i));
        Item_left->setPos(-375, y);

        QFont font_left = Item_left->font();
        font_left.setPixelSize(35);
        Item_left->setFont(font_left);
        addItem(Item_left);
        y += cube_side;

    }

    std::string cube[] = {"a", "b", "c", "d", "e", "f", "g", "h"};
    int text_x = -300;
    for(int i = 1 ; i <= 8 ; i++) {
        QGraphicsSimpleTextItem *Item_left = new QGraphicsSimpleTextItem();
        Item_left->setText(QString::fromStdString(cube[i - 1]));
        Item_left->setPos(text_x, 340);
        QFont font_left = Item_left->font();
        font_left.setPixelSize(35);
        Item_left->setFont(font_left);
        addItem(Item_left);
        text_x += cube_side;
    }
}
