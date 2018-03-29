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

#include "createsubnetresponse.h"
#include "createsubnetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  CreateSubnetResponse
 *
 * @brief  Handles EC2 CreateSubnet responses.
 *
 * @see    EC2Client::createSubnet
 */

/**
 * @brief  Constructs a new CreateSubnetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubnetResponse::CreateSubnetResponse(
        const CreateSubnetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateSubnetResponsePrivate(this), parent)
{
    setRequest(new CreateSubnetRequest(request));
    setReply(reply);
}

const CreateSubnetRequest * CreateSubnetResponse::request() const
{
    Q_D(const CreateSubnetResponse);
    return static_cast<const CreateSubnetRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 CreateSubnet response.
 *
 * @param  response  Response to parse.
 */
void CreateSubnetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSubnetResponsePrivate
 *
 * @brief  Private implementation for CreateSubnetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubnetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSubnetResponse instance.
 */
CreateSubnetResponsePrivate::CreateSubnetResponsePrivate(
    CreateSubnetQueueResponse * const q) : CreateSubnetPrivate(q)
{

}

/**
 * @brief  Parse an EC2 CreateSubnetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSubnetResponsePrivate::CreateSubnetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubnetResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
