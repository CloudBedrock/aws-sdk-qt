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

#include "deletevpclinkresponse.h"
#include "deletevpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteVpcLinkResponse
 *
 * @brief  Handles APIGateway DeleteVpcLink responses.
 *
 * @see    APIGatewayClient::deleteVpcLink
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcLinkResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteVpcLinkResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcLinkRequest(request));
    setReply(reply);
}

const DeleteVpcLinkRequest * DeleteVpcLinkResponse::request() const
{
    Q_D(const DeleteVpcLinkResponse);
    return static_cast<const DeleteVpcLinkRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteVpcLink response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVpcLinkResponsePrivate
 *
 * @brief  Private implementation for DeleteVpcLinkResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcLinkResponse instance.
 */
DeleteVpcLinkResponsePrivate::DeleteVpcLinkResponsePrivate(
    DeleteVpcLinkQueueResponse * const q) : DeleteVpcLinkPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteVpcLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcLinkResponsePrivate::DeleteVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcLinkResponse"));
    /// @todo
}
