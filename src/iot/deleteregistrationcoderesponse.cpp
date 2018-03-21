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

#include "deleteregistrationcoderesponse.h"
#include "deleteregistrationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DeleteRegistrationCodeResponse
 *
 * @brief  Handles IoT DeleteRegistrationCode responses.
 *
 * @see    IoTClient::deleteRegistrationCode
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRegistrationCodeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteRegistrationCodeResponsePrivate(this), parent)
{
    setRequest(new DeleteRegistrationCodeRequest(request));
    setReply(reply);
}

const DeleteRegistrationCodeRequest * DeleteRegistrationCodeResponse::request() const
{
    Q_D(const DeleteRegistrationCodeResponse);
    return static_cast<const DeleteRegistrationCodeRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteRegistrationCode response.
 *
 * @param  response  Response to parse.
 */
void DeleteRegistrationCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRegistrationCodeResponsePrivate
 *
 * @brief  Private implementation for DeleteRegistrationCodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegistrationCodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRegistrationCodeResponse instance.
 */
DeleteRegistrationCodeResponsePrivate::DeleteRegistrationCodeResponsePrivate(
    DeleteRegistrationCodeQueueResponse * const q) : DeleteRegistrationCodePrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteRegistrationCodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRegistrationCodeResponsePrivate::DeleteRegistrationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegistrationCodeResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
