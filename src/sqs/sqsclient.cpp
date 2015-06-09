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

#include "sqsclient.h"
#include "sqsclient_p.h"
#include "sqsrequest.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsClient
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsClient object.
 *
 * @param parent       This object's parent.
 */
SqsClient::SqsClient(
        QObject * const parent)
    : AwsAbstractClient(parent), d_ptr(new SqsClientPrivate(this))
{
    //Q_D(SqsClient);
}

SqsClient::~SqsClient()
{
    delete d_ptr;
}

void SqsClient::createQueue()
{
    Q_D(SqsClient);
    SqsRequest * const request = new SqsRequest; // d->createQueueRequest();
    connect(request, SIGNAL(finished()), this, SLOT(createQueueFinished()));
    send(request);
}

void SqsClient::createQueueFinished()
{
    SqsRequest * const request = qobject_cast<SqsRequest *>(sender());
    Q_ASSERT(request);
    if (request->error() == QNetworkReply::NoError) {
        request->reply()->readAll(); ///< @todo Parse this :)
    } /// @todo else { ??? }
}

/**
 * @internal
 *
 * @class  SqsClientPrivate
 *
 * @brief  Private implementation for SqsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsClientPrivate object.
 *
 * @param  q  Pointer to this object's public SqsClient instance.
 */
SqsClientPrivate::SqsClientPrivate(SqsClient * const q)
    : AwsAbstractClientPrivate(q), q_ptr(q)
{

}

QTAWS_END_NAMESPACE
