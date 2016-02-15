#include "clockwidget.h"
#include <QPainter>

ClockWidget::ClockWidget(QWidget *parent) : QWidget(parent)
{
    secondCount = 53215;
}

void ClockWidget::SetTime(int seconds)
{
    secondCount = seconds;
}

void ClockWidget::SetTime(int hours, int minutes, int seconds)
{
    minutes += hours*60;
    seconds += minutes*60;
    secondCount = seconds;
}

void ClockWidget::paintEvent(QPaintEvent *)
{


    QPainter painter(this);

    QRectF rectangle(10.0, 20.0, 80.0, 60.0);
    int startAngle = 30 * 16;
    int spanAngle = 120 * 16;
    painter.drawArc(rectangle, startAngle, spanAngle);
}
