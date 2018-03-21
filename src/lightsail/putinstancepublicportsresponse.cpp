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

#include "putinstancepublicportsresponse.h"
#include "putinstancepublicportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  PutInstancePublicPortsResponse
 *
 * @brief  Handles Lightsail PutInstancePublicPorts responses.
 *
 * @see    LightsailClient::putInstancePublicPorts
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutInstancePublicPortsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new PutInstancePublicPortsResponsePrivate(this), parent)
{
    setRequest(new PutInstancePublicPortsRequest(request));
    setReply(reply);
}

const PutInstancePublicPortsRequest * PutInstancePublicPortsResponse::request() const
{
    Q_D(const PutInstancePublicPortsResponse);
    return static_cast<const PutInstancePublicPortsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail PutInstancePublicPorts response.
 *
 * @param  response  Response to parse.
 */
void PutInstancePublicPortsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutInstancePublicPortsResponsePrivate
 *
 * @brief  Private implementation for PutInstancePublicPortsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutInstancePublicPortsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutInstancePublicPortsResponse instance.
 */
PutInstancePublicPortsResponsePrivate::PutInstancePublicPortsResponsePrivate(
    PutInstancePublicPortsQueueResponse * const q) : PutInstancePublicPortsPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail PutInstancePublicPortsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutInstancePublicPortsResponsePrivate::PutInstancePublicPortsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutInstancePublicPortsResponse"));
    /// @todo
}
