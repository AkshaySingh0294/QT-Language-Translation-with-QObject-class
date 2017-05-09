#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTranslator>
#include <QDebug>
#include "hhhh.h"
#include <QQmlContext>


hhhh::hhhh(QObject *parent) : QObject(parent)
{

}

void hhhh::call()
{
    QTranslator *t = new QTranslator(this);
    t->load(":/don.qm");

    QCoreApplication::instance()->installTranslator(t);
    QGuiApplication::instance()->installTranslator(t);

    emit emptyChanged();

}

void hhhh::call2()
{
    QTranslator *t =new QTranslator(this);
    t->load(":/chinese.qm");

    QCoreApplication::instance()->installTranslator(t);
    QGuiApplication::instance()->installTranslator(t);

    emit emptyChanged();
}

QString hhhh::empty() const
{
    return m_empty;
}
