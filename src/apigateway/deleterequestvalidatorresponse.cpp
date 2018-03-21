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

#include "deleterequestvalidatorresponse.h"
#include "deleterequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteRequestValidatorResponse
 *
 * @brief  Handles APIGateway DeleteRequestValidator responses.
 *
 * @see    APIGatewayClient::deleteRequestValidator
 */

/**
 * @brief  Constructs a new DeleteRequestValidatorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRequestValidatorResponse::DeleteRequestValidatorResponse(
        const DeleteRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new DeleteRequestValidatorRequest(request));
    setReply(reply);
}

const DeleteRequestValidatorRequest * DeleteRequestValidatorResponse::request() const
{
    Q_D(const DeleteRequestValidatorResponse);
    return static_cast<const DeleteRequestValidatorRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteRequestValidator response.
 *
 * @param  response  Response to parse.
 */
void DeleteRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRequestValidatorResponsePrivate
 *
 * @brief  Private implementation for DeleteRequestValidatorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRequestValidatorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRequestValidatorResponse instance.
 */
DeleteRequestValidatorResponsePrivate::DeleteRequestValidatorResponsePrivate(
    DeleteRequestValidatorQueueResponse * const q) : DeleteRequestValidatorPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteRequestValidatorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRequestValidatorResponsePrivate::DeleteRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRequestValidatorResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
