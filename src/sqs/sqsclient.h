/*
    Copyright 2013-2015 Paul Colby

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

#ifndef SQSCLIENT_H
#define SQSCLIENT_H

#include "awsabstractclient.h"
#include "qtawsglobal.h"

#include <QObject>
#include <QNetworkReply>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class SqsClientPrivate;

class QTAWS_EXPORT SqsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SqsClient(QObject * const parent = 0);

    virtual ~SqsClient();

public slots:
    void createQueue(); ///< @todo Will need some params; just an example for now.

protected slots:
    void createQueueFinished();

private:
    Q_DECLARE_PRIVATE(SqsClient)
    SqsClientPrivate * const d_ptr; ///< Internal d-pointer.

signals:
    void queueCreated(); ///< @todo Will need some params.
};

QTAWS_END_NAMESPACE

#endif
