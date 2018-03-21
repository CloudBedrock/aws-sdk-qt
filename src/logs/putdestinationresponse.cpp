/*
    Copyright 2013-2018 Paul Colby

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

#include "putdestinationresponse.h"
#include "putdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutDestinationResponse
 *
 * @brief  Handles CloudWatchLogs PutDestination responses.
 *
 * @see    CloudWatchLogsClient::putDestination
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDestinationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new PutDestinationResponsePrivate(this), parent)
{
    setRequest(new PutDestinationRequest(request));
    setReply(reply);
}

const PutDestinationRequest * PutDestinationResponse::request() const
{
    Q_D(const PutDestinationResponse);
    return static_cast<const PutDestinationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs PutDestination response.
 *
 * @param  response  Response to parse.
 */
void PutDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutDestinationResponsePrivate
 *
 * @brief  Private implementation for PutDestinationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutDestinationResponse instance.
 */
PutDestinationResponsePrivate::PutDestinationResponsePrivate(
    PutDestinationQueueResponse * const q) : PutDestinationPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs PutDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutDestinationResponsePrivate::PutDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDestinationResponse"));
    /// @todo
}
