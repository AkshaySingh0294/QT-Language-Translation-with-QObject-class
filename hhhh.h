#ifndef HHHH_H
#define HHHH_H
#include<QQmlApplicationEngine>
#include<QGuiApplication>

#include <QObject>

class hhhh : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString empty READ empty NOTIFY emptyChanged)
public:
    explicit hhhh(QObject *parent = 0);

    Q_INVOKABLE void call();
    Q_INVOKABLE void call2();
    QString m_empty;

    QString empty() const;

signals:
    void emptyChanged();

public slots:
};

#endif // HHHH_H
