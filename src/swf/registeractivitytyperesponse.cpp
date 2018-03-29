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

#include "registeractivitytyperesponse.h"
#include "registeractivitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  RegisterActivityTypeResponse
 *
 * @brief  Handles SWF RegisterActivityType responses.
 *
 * @see    SWFClient::registerActivityType
 */

/**
 * @brief  Constructs a new RegisterActivityTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterActivityTypeResponse::RegisterActivityTypeResponse(
        const RegisterActivityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new RegisterActivityTypeResponsePrivate(this), parent)
{
    setRequest(new RegisterActivityTypeRequest(request));
    setReply(reply);
}

const RegisterActivityTypeRequest * RegisterActivityTypeResponse::request() const
{
    Q_D(const RegisterActivityTypeResponse);
    return static_cast<const RegisterActivityTypeRequest *>(d->request);
}

/**
 * @brief  Parse a SWF RegisterActivityType response.
 *
 * @param  response  Response to parse.
 */
void RegisterActivityTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterActivityTypeResponsePrivate
 *
 * @brief  Private implementation for RegisterActivityTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterActivityTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterActivityTypeResponse instance.
 */
RegisterActivityTypeResponsePrivate::RegisterActivityTypeResponsePrivate(
    RegisterActivityTypeQueueResponse * const q) : RegisterActivityTypePrivate(q)
{

}

/**
 * @brief  Parse an SWF RegisterActivityTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterActivityTypeResponsePrivate::RegisterActivityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterActivityTypeResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
