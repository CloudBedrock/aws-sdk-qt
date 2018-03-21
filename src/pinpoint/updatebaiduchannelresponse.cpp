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

#include "updatebaiduchannelresponse.h"
#include "updatebaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateBaiduChannelResponse
 *
 * @brief  Handles Pinpoint UpdateBaiduChannel responses.
 *
 * @see    PinpointClient::updateBaiduChannel
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBaiduChannelResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateBaiduChannelRequest(request));
    setReply(reply);
}

const UpdateBaiduChannelRequest * UpdateBaiduChannelResponse::request() const
{
    Q_D(const UpdateBaiduChannelResponse);
    return static_cast<const UpdateBaiduChannelRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint UpdateBaiduChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateBaiduChannelResponsePrivate
 *
 * @brief  Private implementation for UpdateBaiduChannelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBaiduChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBaiduChannelResponse instance.
 */
UpdateBaiduChannelResponsePrivate::UpdateBaiduChannelResponsePrivate(
    UpdateBaiduChannelQueueResponse * const q) : UpdateBaiduChannelPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint UpdateBaiduChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBaiduChannelResponsePrivate::UpdateBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBaiduChannelResponse"));
    /// @todo
}
