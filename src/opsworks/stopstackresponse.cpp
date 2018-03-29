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

#include "stopstackresponse.h"
#include "stopstackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  StopStackResponse
 *
 * @brief  Handles OpsWorks StopStack responses.
 *
 * @see    OpsWorksClient::stopStack
 */

/**
 * @brief  Constructs a new StopStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopStackResponse::StopStackResponse(
        const StopStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StopStackResponse(new StopStackResponsePrivate(this), parent)
{
    setRequest(new StopStackRequest(request));
    setReply(reply);
}

const StopStackRequest * StopStackResponse::request() const
{
    Q_D(const StopStackResponse);
    return static_cast<const StopStackRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks StopStack response.
 *
 * @param  response  Response to parse.
 */
void StopStackResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopStackResponsePrivate
 *
 * @brief  Private implementation for StopStackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopStackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopStackResponse instance.
 */
StopStackResponsePrivate::StopStackResponsePrivate(
    StopStackResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks StopStackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopStackResponsePrivate::parseStopStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStackResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
