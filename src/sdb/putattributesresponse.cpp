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

#include "putattributesresponse.h"
#include "putattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SimpleDB {

/**
 * @class  PutAttributesResponse
 *
 * @brief  Handles SimpleDB PutAttributes responses.
 *
 * @see    SimpleDBClient::putAttributes
 */

/**
 * @brief  Constructs a new PutAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutAttributesResponse::PutAttributesResponse(
        const PutAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new PutAttributesResponsePrivate(this), parent)
{
    setRequest(new PutAttributesRequest(request));
    setReply(reply);
}

const PutAttributesRequest * PutAttributesResponse::request() const
{
    Q_D(const PutAttributesResponse);
    return static_cast<const PutAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB PutAttributes response.
 *
 * @param  response  Response to parse.
 */
void PutAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutAttributesResponsePrivate
 *
 * @brief  Private implementation for PutAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutAttributesResponse instance.
 */
PutAttributesResponsePrivate::PutAttributesResponsePrivate(
    PutAttributesQueueResponse * const q) : PutAttributesPrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB PutAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutAttributesResponsePrivate::PutAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAttributesResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace AWS
