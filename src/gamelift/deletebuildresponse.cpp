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

#include "deletebuildresponse.h"
#include "deletebuildresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DeleteBuildResponse
 *
 * @brief  Handles GameLift DeleteBuild responses.
 *
 * @see    GameLiftClient::deleteBuild
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBuildResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DeleteBuildResponsePrivate(this), parent)
{
    setRequest(new DeleteBuildRequest(request));
    setReply(reply);
}

const DeleteBuildRequest * DeleteBuildResponse::request() const
{
    Q_D(const DeleteBuildResponse);
    return static_cast<const DeleteBuildRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DeleteBuild response.
 *
 * @param  response  Response to parse.
 */
void DeleteBuildResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBuildResponsePrivate
 *
 * @brief  Private implementation for DeleteBuildResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBuildResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBuildResponse instance.
 */
DeleteBuildResponsePrivate::DeleteBuildResponsePrivate(
    DeleteBuildQueueResponse * const q) : DeleteBuildPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DeleteBuildResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBuildResponsePrivate::DeleteBuildResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBuildResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
