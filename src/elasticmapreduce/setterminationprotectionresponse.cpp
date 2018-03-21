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

#include "setterminationprotectionresponse.h"
#include "setterminationprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  SetTerminationProtectionResponse
 *
 * @brief  Handles EMR SetTerminationProtection responses.
 *
 * @see    EMRClient::setTerminationProtection
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetTerminationProtectionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new SetTerminationProtectionResponsePrivate(this), parent)
{
    setRequest(new SetTerminationProtectionRequest(request));
    setReply(reply);
}

const SetTerminationProtectionRequest * SetTerminationProtectionResponse::request() const
{
    Q_D(const SetTerminationProtectionResponse);
    return static_cast<const SetTerminationProtectionRequest *>(d->request);
}

/**
 * @brief  Parse a EMR SetTerminationProtection response.
 *
 * @param  response  Response to parse.
 */
void SetTerminationProtectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetTerminationProtectionResponsePrivate
 *
 * @brief  Private implementation for SetTerminationProtectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTerminationProtectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetTerminationProtectionResponse instance.
 */
SetTerminationProtectionResponsePrivate::SetTerminationProtectionResponsePrivate(
    SetTerminationProtectionQueueResponse * const q) : SetTerminationProtectionPrivate(q)
{

}

/**
 * @brief  Parse an EMR SetTerminationProtectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetTerminationProtectionResponsePrivate::SetTerminationProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTerminationProtectionResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
