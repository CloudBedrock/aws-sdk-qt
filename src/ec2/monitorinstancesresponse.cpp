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

#include "monitorinstancesresponse.h"
#include "monitorinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  MonitorInstancesResponse
 *
 * @brief  Handles EC2 MonitorInstances responses.
 *
 * @see    EC2Client::monitorInstances
 */

/**
 * @brief  Constructs a new MonitorInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MonitorInstancesResponse::MonitorInstancesResponse(
        const MonitorInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new MonitorInstancesResponsePrivate(this), parent)
{
    setRequest(new MonitorInstancesRequest(request));
    setReply(reply);
}

const MonitorInstancesRequest * MonitorInstancesResponse::request() const
{
    Q_D(const MonitorInstancesResponse);
    return static_cast<const MonitorInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 MonitorInstances response.
 *
 * @param  response  Response to parse.
 */
void MonitorInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(MonitorInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  MonitorInstancesResponsePrivate
 *
 * @brief  Private implementation for MonitorInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MonitorInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MonitorInstancesResponse instance.
 */
MonitorInstancesResponsePrivate::MonitorInstancesResponsePrivate(
    MonitorInstancesResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 MonitorInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void MonitorInstancesResponsePrivate::MonitorInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MonitorInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
