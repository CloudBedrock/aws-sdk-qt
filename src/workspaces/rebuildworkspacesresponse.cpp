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

#include "rebuildworkspacesresponse.h"
#include "rebuildworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/**
 * @class  RebuildWorkspacesResponse
 *
 * @brief  Handles WorkSpaces RebuildWorkspaces responses.
 *
 * @see    WorkSpacesClient::rebuildWorkspaces
 */

/**
 * @brief  Constructs a new RebuildWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebuildWorkspacesResponse::RebuildWorkspacesResponse(
        const RebuildWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RebuildWorkspacesResponsePrivate(this), parent)
{
    setRequest(new RebuildWorkspacesRequest(request));
    setReply(reply);
}

const RebuildWorkspacesRequest * RebuildWorkspacesResponse::request() const
{
    Q_D(const RebuildWorkspacesResponse);
    return static_cast<const RebuildWorkspacesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces RebuildWorkspaces response.
 *
 * @param  response  Response to parse.
 */
void RebuildWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebuildWorkspacesResponsePrivate
 *
 * @brief  Private implementation for RebuildWorkspacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebuildWorkspacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebuildWorkspacesResponse instance.
 */
RebuildWorkspacesResponsePrivate::RebuildWorkspacesResponsePrivate(
    RebuildWorkspacesQueueResponse * const q) : RebuildWorkspacesPrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces RebuildWorkspacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebuildWorkspacesResponsePrivate::RebuildWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebuildWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
