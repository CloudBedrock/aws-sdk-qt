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

#include "deleteclusterresponse.h"
#include "deleteclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DeleteClusterResponse
 *
 * @brief  Handles Redshift DeleteCluster responses.
 *
 * @see    RedshiftClient::deleteCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterRequest(request));
    setReply(reply);
}

const DeleteClusterRequest * DeleteClusterResponse::request() const
{
    Q_D(const DeleteClusterResponse);
    return static_cast<const DeleteClusterRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteCluster response.
 *
 * @param  response  Response to parse.
 */
void DeleteClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClusterResponsePrivate
 *
 * @brief  Private implementation for DeleteClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClusterResponse instance.
 */
DeleteClusterResponsePrivate::DeleteClusterResponsePrivate(
    DeleteClusterQueueResponse * const q) : DeleteClusterPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClusterResponsePrivate::DeleteClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
