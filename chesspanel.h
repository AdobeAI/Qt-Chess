#ifndef CHESSPANEL_H
#define CHESSPANEL_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent>


class ChessPanel : public QGraphicsScene {
    Q_OBJECT
public:

    explicit ChessPanel(QWidget *parent = nullptr);


private:

    int cube_side;

};

#endif // CHESSPANEL_H
