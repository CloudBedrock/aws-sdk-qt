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

#include "rebootinstanceresponse.h"
#include "rebootinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  RebootInstanceResponse
 *
 * @brief  Handles Lightsail RebootInstance responses.
 *
 * @see    LightsailClient::rebootInstance
 */

/**
 * @brief  Constructs a new RebootInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootInstanceResponse::RebootInstanceResponse(
        const RebootInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new RebootInstanceResponsePrivate(this), parent)
{
    setRequest(new RebootInstanceRequest(request));
    setReply(reply);
}

const RebootInstanceRequest * RebootInstanceResponse::request() const
{
    Q_D(const RebootInstanceResponse);
    return static_cast<const RebootInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail RebootInstance response.
 *
 * @param  response  Response to parse.
 */
void RebootInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(RebootInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootInstanceResponsePrivate
 *
 * @brief  Private implementation for RebootInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootInstanceResponse instance.
 */
RebootInstanceResponsePrivate::RebootInstanceResponsePrivate(
    RebootInstanceResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail RebootInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootInstanceResponsePrivate::parseRebootInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootInstanceResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
