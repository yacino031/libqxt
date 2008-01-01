/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtSql module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of th Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
**
** <http://libqxt.sourceforge.net>  <foundation@libqxt.org>
**
****************************************************************************/


#ifndef QXTSQLPACKAGE_H
#define QXTSQLPACKAGE_H
#include <QObject>
#include <QHash>
#include <QList>
#include <QtSql>
#include <qxtglobal.h>

class QXT_SQL_EXPORT QxtSqlPackage : public  QObject
{
    Q_OBJECT

public:
    QxtSqlPackage(QObject *parent = 0);
    QxtSqlPackage(const QxtSqlPackage & other,QObject *parent = 0);

    bool isValid();
    int at();
    bool next();
    bool last();
    bool first();
    QString value(const QString& key);
    void insert(QSqlQuery query);
    int count() const;
    QByteArray data() const;
    void setData(const QByteArray& data);
    QHash<QString,QString> hash(int index);
    QHash<QString,QString> hash();
    QxtSqlPackage& operator= (const QxtSqlPackage& other);

private:
    QList<QHash<QString,QString> > map;
    int record;
};



#endif
