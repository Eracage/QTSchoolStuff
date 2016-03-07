#ifndef CLOCKWIDGET_H
#define CLOCKWIDGET_H

#include <QWidget>
#include <QDateTime>

class ClockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ClockWidget(QWidget *parent = 0);

    void setTime(QTime time);
    void setDate(QDate date);
    void setDateTime(QDateTime dateT);
    void setCurTime();

protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *event);

private:
    int m_timerId;
    QDateTime dateTime;
    QDateTime targetTime;
    bool systime;

signals:

public slots:
};

#endif // CLOCKWIDGET_H
