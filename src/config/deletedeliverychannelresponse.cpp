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

#include "deletedeliverychannelresponse.h"
#include "deletedeliverychannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  DeleteDeliveryChannelResponse
 *
 * @brief  Handles ConfigService DeleteDeliveryChannel responses.
 *
 * @see    ConfigServiceClient::deleteDeliveryChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeliveryChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteDeliveryChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteDeliveryChannelRequest(request));
    setReply(reply);
}

const DeleteDeliveryChannelRequest * DeleteDeliveryChannelResponse::request() const
{
    Q_D(const DeleteDeliveryChannelResponse);
    return static_cast<const DeleteDeliveryChannelRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeleteDeliveryChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeliveryChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDeliveryChannelResponsePrivate
 *
 * @brief  Private implementation for DeleteDeliveryChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeliveryChannelResponse instance.
 */
DeleteDeliveryChannelResponsePrivate::DeleteDeliveryChannelResponsePrivate(
    DeleteDeliveryChannelQueueResponse * const q) : DeleteDeliveryChannelPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeleteDeliveryChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeliveryChannelResponsePrivate::DeleteDeliveryChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeliveryChannelResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace AWS
