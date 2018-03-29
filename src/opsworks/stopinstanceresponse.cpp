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

#include "stopinstanceresponse.h"
#include "stopinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  StopInstanceResponse
 *
 * @brief  Handles OpsWorks StopInstance responses.
 *
 * @see    OpsWorksClient::stopInstance
 */

/**
 * @brief  Constructs a new StopInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopInstanceResponse::StopInstanceResponse(
        const StopInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new StopInstanceResponsePrivate(this), parent)
{
    setRequest(new StopInstanceRequest(request));
    setReply(reply);
}

const StopInstanceRequest * StopInstanceResponse::request() const
{
    Q_D(const StopInstanceResponse);
    return static_cast<const StopInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks StopInstance response.
 *
 * @param  response  Response to parse.
 */
void StopInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopInstanceResponsePrivate
 *
 * @brief  Private implementation for StopInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopInstanceResponse instance.
 */
StopInstanceResponsePrivate::StopInstanceResponsePrivate(
    StopInstanceResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks StopInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopInstanceResponsePrivate::StopInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
