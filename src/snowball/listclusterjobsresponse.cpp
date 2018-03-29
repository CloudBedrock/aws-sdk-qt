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

#include "listclusterjobsresponse.h"
#include "listclusterjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/**
 * @class  ListClusterJobsResponse
 *
 * @brief  Handles Snowball ListClusterJobs responses.
 *
 * @see    SnowballClient::listClusterJobs
 */

/**
 * @brief  Constructs a new ListClusterJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListClusterJobsResponse::ListClusterJobsResponse(
        const ListClusterJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new ListClusterJobsResponsePrivate(this), parent)
{
    setRequest(new ListClusterJobsRequest(request));
    setReply(reply);
}

const ListClusterJobsRequest * ListClusterJobsResponse::request() const
{
    Q_D(const ListClusterJobsResponse);
    return static_cast<const ListClusterJobsRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball ListClusterJobs response.
 *
 * @param  response  Response to parse.
 */
void ListClusterJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListClusterJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListClusterJobsResponsePrivate
 *
 * @brief  Private implementation for ListClusterJobsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListClusterJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListClusterJobsResponse instance.
 */
ListClusterJobsResponsePrivate::ListClusterJobsResponsePrivate(
    ListClusterJobsResponse * const q) : SnowballResponsePrivate(q)
{

}

/**
 * @brief  Parse an Snowball ListClusterJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListClusterJobsResponsePrivate::ListClusterJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClusterJobsResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
