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

#include "deleteregistrationcoderesponse.h"
#include "deleteregistrationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteRegistrationCodeResponse
 *
 * @brief  Handles IoT DeleteRegistrationCode responses.
 *
 * @see    IoTClient::deleteRegistrationCode
 */

/**
 * @brief  Constructs a new DeleteRegistrationCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRegistrationCodeResponse::DeleteRegistrationCodeResponse(
        const DeleteRegistrationCodeRequest &request,
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
    Q_D(DeleteRegistrationCodeResponse);
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
    DeleteRegistrationCodeResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteRegistrationCodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRegistrationCodeResponsePrivate::parseDeleteRegistrationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegistrationCodeResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
