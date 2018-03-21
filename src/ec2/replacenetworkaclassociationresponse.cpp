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

#include "replacenetworkaclassociationresponse.h"
#include "replacenetworkaclassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  ReplaceNetworkAclAssociationResponse
 *
 * @brief  Handles EC2 ReplaceNetworkAclAssociation responses.
 *
 * @see    EC2Client::replaceNetworkAclAssociation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReplaceNetworkAclAssociationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new ReplaceNetworkAclAssociationResponsePrivate(this), parent)
{
    setRequest(new ReplaceNetworkAclAssociationRequest(request));
    setReply(reply);
}

const ReplaceNetworkAclAssociationRequest * ReplaceNetworkAclAssociationResponse::request() const
{
    Q_D(const ReplaceNetworkAclAssociationResponse);
    return static_cast<const ReplaceNetworkAclAssociationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ReplaceNetworkAclAssociation response.
 *
 * @param  response  Response to parse.
 */
void ReplaceNetworkAclAssociationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ReplaceNetworkAclAssociationResponsePrivate
 *
 * @brief  Private implementation for ReplaceNetworkAclAssociationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReplaceNetworkAclAssociationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ReplaceNetworkAclAssociationResponse instance.
 */
ReplaceNetworkAclAssociationResponsePrivate::ReplaceNetworkAclAssociationResponsePrivate(
    ReplaceNetworkAclAssociationQueueResponse * const q) : ReplaceNetworkAclAssociationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 ReplaceNetworkAclAssociationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ReplaceNetworkAclAssociationResponsePrivate::ReplaceNetworkAclAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReplaceNetworkAclAssociationResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
