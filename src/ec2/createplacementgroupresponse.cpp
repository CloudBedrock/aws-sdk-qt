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

#include "createplacementgroupresponse.h"
#include "createplacementgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreatePlacementGroupResponse
 *
 * @brief  Handles EC2 CreatePlacementGroup responses.
 *
 * @see    EC2Client::createPlacementGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlacementGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreatePlacementGroupResponsePrivate(this), parent)
{
    setRequest(new CreatePlacementGroupRequest(request));
    setReply(reply);
}

const CreatePlacementGroupRequest * CreatePlacementGroupResponse::request() const
{
    Q_D(const CreatePlacementGroupResponse);
    return static_cast<const CreatePlacementGroupRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreatePlacementGroup response.
 *
 * @param  response  Response to parse.
 */
void CreatePlacementGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePlacementGroupResponsePrivate
 *
 * @brief  Private implementation for CreatePlacementGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlacementGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePlacementGroupResponse instance.
 */
CreatePlacementGroupResponsePrivate::CreatePlacementGroupResponsePrivate(
    CreatePlacementGroupQueueResponse * const q) : CreatePlacementGroupPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreatePlacementGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePlacementGroupResponsePrivate::CreatePlacementGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlacementGroupResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
