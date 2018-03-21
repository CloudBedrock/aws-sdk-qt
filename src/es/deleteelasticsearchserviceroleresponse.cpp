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

#include "deleteelasticsearchserviceroleresponse.h"
#include "deleteelasticsearchserviceroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  DeleteElasticsearchServiceRoleResponse
 *
 * @brief  Handles ElasticsearchService DeleteElasticsearchServiceRole responses.
 *
 * @see    ElasticsearchServiceClient::deleteElasticsearchServiceRole
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteElasticsearchServiceRoleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new DeleteElasticsearchServiceRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteElasticsearchServiceRoleRequest(request));
    setReply(reply);
}

const DeleteElasticsearchServiceRoleRequest * DeleteElasticsearchServiceRoleResponse::request() const
{
    Q_D(const DeleteElasticsearchServiceRoleResponse);
    return static_cast<const DeleteElasticsearchServiceRoleRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService DeleteElasticsearchServiceRole response.
 *
 * @param  response  Response to parse.
 */
void DeleteElasticsearchServiceRoleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteElasticsearchServiceRoleResponsePrivate
 *
 * @brief  Private implementation for DeleteElasticsearchServiceRoleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteElasticsearchServiceRoleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteElasticsearchServiceRoleResponse instance.
 */
DeleteElasticsearchServiceRoleResponsePrivate::DeleteElasticsearchServiceRoleResponsePrivate(
    DeleteElasticsearchServiceRoleQueueResponse * const q) : DeleteElasticsearchServiceRolePrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService DeleteElasticsearchServiceRoleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteElasticsearchServiceRoleResponsePrivate::DeleteElasticsearchServiceRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteElasticsearchServiceRoleResponse"));
    /// @todo
}
