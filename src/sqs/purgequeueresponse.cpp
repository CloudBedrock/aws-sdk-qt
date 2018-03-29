/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "purgequeueresponse.h"
#include "purgequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SQS {

/**
 * @class  PurgeQueueResponse
 *
 * @brief  Handles SQS PurgeQueue responses.
 *
 * @see    SQSClient::purgeQueue
 */

/**
 * @brief  Constructs a new PurgeQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurgeQueueResponse::PurgeQueueResponse(
        const PurgeQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SQSResponse(new PurgeQueueResponsePrivate(this), parent)
{
    setRequest(new PurgeQueueRequest(request));
    setReply(reply);
}

const PurgeQueueRequest * PurgeQueueResponse::request() const
{
    Q_D(const PurgeQueueResponse);
    return static_cast<const PurgeQueueRequest *>(d->request);
}

/**
 * @brief  Parse a SQS PurgeQueue response.
 *
 * @param  response  Response to parse.
 */
void PurgeQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(PurgeQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurgeQueueResponsePrivate
 *
 * @brief  Private implementation for PurgeQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurgeQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurgeQueueResponse instance.
 */
PurgeQueueResponsePrivate::PurgeQueueResponsePrivate(
    PurgeQueueResponse * const q) : SQSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SQS PurgeQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurgeQueueResponsePrivate::PurgeQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurgeQueueResponse"));
    /// @todo
}

} // namespace SQS
} // namespace QtAws
