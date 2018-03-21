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

#include "addpermissionresponse.h"
#include "addpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  AddPermissionResponse
 *
 * @brief  Handles SNS AddPermission responses.
 *
 * @see    SNSClient::addPermission
 */

/**
 * @brief  Constructs a new AddPermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddPermissionResponse::AddPermissionResponse(
        const AddPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new AddPermissionResponsePrivate(this), parent)
{
    setRequest(new AddPermissionRequest(request));
    setReply(reply);
}

const AddPermissionRequest * AddPermissionResponse::request() const
{
    Q_D(const AddPermissionResponse);
    return static_cast<const AddPermissionRequest *>(d->request);
}

/**
 * @brief  Parse a SNS AddPermission response.
 *
 * @param  response  Response to parse.
 */
void AddPermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddPermissionResponsePrivate
 *
 * @brief  Private implementation for AddPermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddPermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddPermissionResponse instance.
 */
AddPermissionResponsePrivate::AddPermissionResponsePrivate(
    AddPermissionQueueResponse * const q) : AddPermissionPrivate(q)
{

}

/**
 * @brief  Parse an SNS AddPermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddPermissionResponsePrivate::AddPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddPermissionResponse"));
    /// @todo
}

} // namespace SNS
} // namespace AWS
