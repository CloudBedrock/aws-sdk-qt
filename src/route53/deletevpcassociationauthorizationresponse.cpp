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

#include "deletevpcassociationauthorizationresponse.h"
#include "deletevpcassociationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteVPCAssociationAuthorizationResponse
 *
 * @brief  Handles Route53 DeleteVPCAssociationAuthorization responses.
 *
 * @see    Route53Client::deleteVPCAssociationAuthorization
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVPCAssociationAuthorizationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteVPCAssociationAuthorizationResponsePrivate(this), parent)
{
    setRequest(new DeleteVPCAssociationAuthorizationRequest(request));
    setReply(reply);
}

const DeleteVPCAssociationAuthorizationRequest * DeleteVPCAssociationAuthorizationResponse::request() const
{
    Q_D(const DeleteVPCAssociationAuthorizationResponse);
    return static_cast<const DeleteVPCAssociationAuthorizationRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 DeleteVPCAssociationAuthorization response.
 *
 * @param  response  Response to parse.
 */
void DeleteVPCAssociationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVPCAssociationAuthorizationResponsePrivate
 *
 * @brief  Private implementation for DeleteVPCAssociationAuthorizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVPCAssociationAuthorizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVPCAssociationAuthorizationResponse instance.
 */
DeleteVPCAssociationAuthorizationResponsePrivate::DeleteVPCAssociationAuthorizationResponsePrivate(
    DeleteVPCAssociationAuthorizationQueueResponse * const q) : DeleteVPCAssociationAuthorizationPrivate(q)
{

}

/**
 * @brief  Parse an Route53 DeleteVPCAssociationAuthorizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVPCAssociationAuthorizationResponsePrivate::DeleteVPCAssociationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVPCAssociationAuthorizationResponse"));
    /// @todo
}
