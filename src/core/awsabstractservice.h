/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTSERVICE_H
#define AWSABSTRACTSERVICE_H

#include "qtawsglobal.h"

#include <QObject>

class QNetworkAccessManager;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractServicePrivate;

class QTAWS_EXPORT AwsAbstractService : public QObject {
    Q_OBJECT

public:
    AwsAbstractService(QObject * const parent = 0);

    ~AwsAbstractService();

    QNetworkAccessManager * networkAccessManager() const;

public slots:
    void setNetworkAccessManager(QNetworkAccessManager * const manager);

private:
    Q_DECLARE_PRIVATE(AwsAbstractService)
    AwsAbstractServicePrivate * const d_ptr; ///< Internal d-pointer.

};

QTAWS_END_NAMESPACE

#endif
