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

#include "promotereadreplicaresponse.h"
#include "promotereadreplicaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  PromoteReadReplicaResponse
 *
 * @brief  Handles RDS PromoteReadReplica responses.
 *
 * @see    RDSClient::promoteReadReplica
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PromoteReadReplicaResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new PromoteReadReplicaResponsePrivate(this), parent)
{
    setRequest(new PromoteReadReplicaRequest(request));
    setReply(reply);
}

const PromoteReadReplicaRequest * PromoteReadReplicaResponse::request() const
{
    Q_D(const PromoteReadReplicaResponse);
    return static_cast<const PromoteReadReplicaRequest *>(d->request);
}

/**
 * @brief  Parse a RDS PromoteReadReplica response.
 *
 * @param  response  Response to parse.
 */
void PromoteReadReplicaResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PromoteReadReplicaResponsePrivate
 *
 * @brief  Private implementation for PromoteReadReplicaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PromoteReadReplicaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PromoteReadReplicaResponse instance.
 */
PromoteReadReplicaResponsePrivate::PromoteReadReplicaResponsePrivate(
    PromoteReadReplicaQueueResponse * const q) : PromoteReadReplicaPrivate(q)
{

}

/**
 * @brief  Parse an RDS PromoteReadReplicaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PromoteReadReplicaResponsePrivate::PromoteReadReplicaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PromoteReadReplicaResponse"));
    /// @todo
}
