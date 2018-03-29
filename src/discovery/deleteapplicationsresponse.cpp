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

#include "deleteapplicationsresponse.h"
#include "deleteapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  DeleteApplicationsResponse
 *
 * @brief  Handles ApplicationDiscoveryService DeleteApplications responses.
 *
 * @see    ApplicationDiscoveryServiceClient::deleteApplications
 */

/**
 * @brief  Constructs a new DeleteApplicationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationsResponse::DeleteApplicationsResponse(
        const DeleteApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new DeleteApplicationsResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationsRequest(request));
    setReply(reply);
}

const DeleteApplicationsRequest * DeleteApplicationsResponse::request() const
{
    Q_D(const DeleteApplicationsResponse);
    return static_cast<const DeleteApplicationsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService DeleteApplications response.
 *
 * @param  response  Response to parse.
 */
void DeleteApplicationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApplicationsResponsePrivate
 *
 * @brief  Private implementation for DeleteApplicationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApplicationsResponse instance.
 */
DeleteApplicationsResponsePrivate::DeleteApplicationsResponsePrivate(
    DeleteApplicationsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService DeleteApplicationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApplicationsResponsePrivate::parseDeleteApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationsResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
