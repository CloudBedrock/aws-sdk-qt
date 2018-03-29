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

#include "deletealarmsresponse.h"
#include "deletealarmsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  DeleteAlarmsResponse
 *
 * @brief  Handles CloudWatch DeleteAlarms responses.
 *
 * @see    CloudWatchClient::deleteAlarms
 */

/**
 * @brief  Constructs a new DeleteAlarmsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAlarmsResponse::DeleteAlarmsResponse(
        const DeleteAlarmsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DeleteAlarmsResponsePrivate(this), parent)
{
    setRequest(new DeleteAlarmsRequest(request));
    setReply(reply);
}

const DeleteAlarmsRequest * DeleteAlarmsResponse::request() const
{
    Q_D(const DeleteAlarmsResponse);
    return static_cast<const DeleteAlarmsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch DeleteAlarms response.
 *
 * @param  response  Response to parse.
 */
void DeleteAlarmsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAlarmsResponsePrivate
 *
 * @brief  Private implementation for DeleteAlarmsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAlarmsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAlarmsResponse instance.
 */
DeleteAlarmsResponsePrivate::DeleteAlarmsResponsePrivate(
    DeleteAlarmsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch DeleteAlarmsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAlarmsResponsePrivate::DeleteAlarmsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlarmsResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
