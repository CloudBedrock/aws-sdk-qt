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

#include "detachthingprincipalresponse.h"
#include "detachthingprincipalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DetachThingPrincipalResponse
 *
 * @brief  Handles IoT DetachThingPrincipal responses.
 *
 * @see    IoTClient::detachThingPrincipal
 */

/**
 * @brief  Constructs a new DetachThingPrincipalResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachThingPrincipalResponse::DetachThingPrincipalResponse(
        const DetachThingPrincipalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DetachThingPrincipalResponsePrivate(this), parent)
{
    setRequest(new DetachThingPrincipalRequest(request));
    setReply(reply);
}

const DetachThingPrincipalRequest * DetachThingPrincipalResponse::request() const
{
    Q_D(const DetachThingPrincipalResponse);
    return static_cast<const DetachThingPrincipalRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DetachThingPrincipal response.
 *
 * @param  response  Response to parse.
 */
void DetachThingPrincipalResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachThingPrincipalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachThingPrincipalResponsePrivate
 *
 * @brief  Private implementation for DetachThingPrincipalResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachThingPrincipalResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachThingPrincipalResponse instance.
 */
DetachThingPrincipalResponsePrivate::DetachThingPrincipalResponsePrivate(
    DetachThingPrincipalResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DetachThingPrincipalResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachThingPrincipalResponsePrivate::parseDetachThingPrincipalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachThingPrincipalResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
