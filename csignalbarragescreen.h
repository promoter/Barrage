﻿#ifndef CSIGNALBARRAGESCREEN_H
#define CSIGNALBARRAGESCREEN_H

#include "cmousemonitorwidget.h"
#include "cbarrageitem.h"

class CSignalBarrageScreen : public CMouseMonitorWidget
{
    Q_OBJECT
public:
    explicit CSignalBarrageScreen(CBarrageItem *item = NULL, QWidget *parent = 0);
    ~CSignalBarrageScreen();

public slots:
    void setItem(CBarrageItem *item);
    void changeFixed();
    void changeAutoMove();
    void moveNextPoint();

protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);

public slots:
    void clicked(QPoint point);

private:
    QPropertyAnimation *mopMoveAnimation;
    CBarrageItem *mopContentsItem;

    bool          mbFixed;
    int           miRefreshTimer;
    int           miMoveAutoTimer;
    bool          mbAutoMove;
    bool          mbLeftMousePressed;
    QPoint        moLastPos;
};

#endif // CSIGNALBARRAGESCREEN_H
