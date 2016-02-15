#ifndef CLOCKWIDGET_H
#define CLOCKWIDGET_H

#include <QWidget>

class ClockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ClockWidget(QWidget *parent = 0);

    void SetTime(int seconds);
    void SetTime(int hours, int minutes, int seconds);

protected:
    void paintEvent(QPaintEvent *);

private:
    int secondCount;

signals:

public slots:
};

#endif // CLOCKWIDGET_H
