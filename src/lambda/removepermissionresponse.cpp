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

#include "removepermissionresponse.h"
#include "removepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  RemovePermissionResponse
 *
 * @brief  Handles Lambda RemovePermission responses.
 *
 * @see    LambdaClient::removePermission
 */

/**
 * @brief  Constructs a new RemovePermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemovePermissionResponse::RemovePermissionResponse(
        const RemovePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new RemovePermissionResponsePrivate(this), parent)
{
    setRequest(new RemovePermissionRequest(request));
    setReply(reply);
}

const RemovePermissionRequest * RemovePermissionResponse::request() const
{
    Q_D(const RemovePermissionResponse);
    return static_cast<const RemovePermissionRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda RemovePermission response.
 *
 * @param  response  Response to parse.
 */
void RemovePermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemovePermissionResponsePrivate
 *
 * @brief  Private implementation for RemovePermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemovePermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemovePermissionResponse instance.
 */
RemovePermissionResponsePrivate::RemovePermissionResponsePrivate(
    RemovePermissionQueueResponse * const q) : RemovePermissionPrivate(q)
{

}

/**
 * @brief  Parse an Lambda RemovePermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemovePermissionResponsePrivate::RemovePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemovePermissionResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace AWS
