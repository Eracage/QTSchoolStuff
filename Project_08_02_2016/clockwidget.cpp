#include "clockwidget.h"
#include <QPainter>
#include <QVector2D>
#include <QPolygon>
#include <QTimerEvent>

ClockWidget::ClockWidget(QWidget *parent) : QWidget(parent)
{
    m_timerId = startTimer(50);
}

void ClockWidget::paintEvent(QPaintEvent *)
{
    QPointF center((width())/2.0f, (height())/2.0f);
    float clockSize = height() > width() ? width()-3 : height()-3;

    QPainter painter(this);
    QPen pen;

    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::HighQualityAntialiasing);

    painter.translate(center);

    QTime time = QDateTime::currentDateTime().time();

    pen.setCapStyle(Qt::FlatCap);

    pen.setColor(QColor(0,255,0));
    pen.setWidthF(clockSize*0.01);
    painter.setPen(pen);

    painter.save();
    for (int i = 0; i < 60; i++)
    {
        painter.drawLine(QPointF(0, clockSize * 0.46f),QPoint(0, clockSize * 0.485f));
        painter.rotate(360/60);
    }
    painter.restore();

    pen.setColor(QColor(255,0,0));
    pen.setWidthF(clockSize*0.02);
    painter.setPen(pen);

    painter.save();
    for (int i = 0; i < 12; i++)
    {
        painter.drawLine(QPointF(0, clockSize * 0.44f),QPoint(0, clockSize * 0.485f));
        painter.rotate(360/12);
    }
    painter.restore();

    pen.setColor(QColor(0,0,0));
    pen.setWidthF(clockSize*0.01);
    painter.setPen(pen);

    painter.drawEllipse(QPointF(),clockSize * 0.485f, clockSize * 0.485f);

    painter.setPen(Qt::NoPen);

    painter.setBrush(QColor(128,0,128));

    const QPoint hourHand[4] =
    {
        QPoint(0,clockSize*0.035f),
        QPoint(-1-clockSize*0.035f,0),
        QPoint(0,-clockSize*0.25f),
        QPoint(1+clockSize*0.035f,0)
    };

    painter.save();
    painter.rotate((time.hour() + time.minute()/60.0f) * (360/12));
    painter.drawConvexPolygon(hourHand, 4);
    painter.drawPie(-clockSize*0.035f,
                    -clockSize*0.035f,
                    clockSize*0.07f,
                    clockSize*0.07f,
                    180*16,
                    180*16
                );
    painter.restore();

    painter.setBrush(QColor(0,128,128));

    const QPoint minuteHand[4] =
    {
        QPoint(0,clockSize*0.03f),
        QPoint(-1-clockSize*0.03f,0),
        QPoint(0,-clockSize*0.35f),
        QPoint(1+clockSize*0.03f,0)
    };

    painter.save();
    painter.rotate((time.minute() + time.second()/60.0f) * (360/60));
    painter.drawConvexPolygon(minuteHand, 4);
    painter.drawPie(-clockSize*0.03f,
                    -clockSize*0.03f,
                    clockSize*0.06f,
                    clockSize*0.06f,
                    180*16,
                    180*16
                );
    painter.restore();

    painter.setBrush(QColor(128,128,0));

    const QPoint secondHand[4] =
    {
        QPoint(0,clockSize*0.02f),
        QPoint(-1-clockSize*0.02f,0),
        QPoint(0,-clockSize*0.40f),
        QPoint(1+clockSize*0.02f,0)
    };

    painter.save();
    painter.rotate((time.second() + time.msec()/1000.0f) * (360/60));
    painter.drawConvexPolygon(secondHand, 4);
    painter.drawPie(-clockSize*0.02f,
                    -clockSize*0.02f,
                    clockSize*0.04f,
                    clockSize*0.04f,
                    180*16,
                    180*16
                );
    painter.restore();
}

void ClockWidget::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == m_timerId)
        update();
}
