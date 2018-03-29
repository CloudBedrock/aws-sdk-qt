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

#include "updatetyperesponse.h"
#include "updatetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  UpdateTypeResponse
 *
 * @brief  Handles AppSync UpdateType responses.
 *
 * @see    AppSyncClient::updateType
 */

/**
 * @brief  Constructs a new UpdateTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTypeResponse::UpdateTypeResponse(
        const UpdateTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateTypeRequest(request));
    setReply(reply);
}

const UpdateTypeRequest * UpdateTypeResponse::request() const
{
    Q_D(const UpdateTypeResponse);
    return static_cast<const UpdateTypeRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync UpdateType response.
 *
 * @param  response  Response to parse.
 */
void UpdateTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTypeResponsePrivate
 *
 * @brief  Private implementation for UpdateTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTypeResponse instance.
 */
UpdateTypeResponsePrivate::UpdateTypeResponsePrivate(
    UpdateTypeQueueResponse * const q) : UpdateTypePrivate(q)
{

}

/**
 * @brief  Parse an AppSync UpdateTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTypeResponsePrivate::UpdateTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTypeResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
