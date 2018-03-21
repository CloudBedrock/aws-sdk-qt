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

#include "startmonitoringmembersresponse.h"
#include "startmonitoringmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  StartMonitoringMembersResponse
 *
 * @brief  Handles GuardDuty StartMonitoringMembers responses.
 *
 * @see    GuardDutyClient::startMonitoringMembers
 */

/**
 * @brief  Constructs a new StartMonitoringMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartMonitoringMembersResponse::StartMonitoringMembersResponse(
        const StartMonitoringMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new StartMonitoringMembersResponsePrivate(this), parent)
{
    setRequest(new StartMonitoringMembersRequest(request));
    setReply(reply);
}

const StartMonitoringMembersRequest * StartMonitoringMembersResponse::request() const
{
    Q_D(const StartMonitoringMembersResponse);
    return static_cast<const StartMonitoringMembersRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty StartMonitoringMembers response.
 *
 * @param  response  Response to parse.
 */
void StartMonitoringMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartMonitoringMembersResponsePrivate
 *
 * @brief  Private implementation for StartMonitoringMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMonitoringMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartMonitoringMembersResponse instance.
 */
StartMonitoringMembersResponsePrivate::StartMonitoringMembersResponsePrivate(
    StartMonitoringMembersQueueResponse * const q) : StartMonitoringMembersPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty StartMonitoringMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartMonitoringMembersResponsePrivate::StartMonitoringMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMonitoringMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace AWS
