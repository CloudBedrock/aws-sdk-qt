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

#include "updatehostedzonecommentresponse.h"
#include "updatehostedzonecommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  UpdateHostedZoneCommentResponse
 *
 * @brief  Handles Route53 UpdateHostedZoneComment responses.
 *
 * @see    Route53Client::updateHostedZoneComment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateHostedZoneCommentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateHostedZoneCommentResponsePrivate(this), parent)
{
    setRequest(new UpdateHostedZoneCommentRequest(request));
    setReply(reply);
}

const UpdateHostedZoneCommentRequest * UpdateHostedZoneCommentResponse::request() const
{
    Q_D(const UpdateHostedZoneCommentResponse);
    return static_cast<const UpdateHostedZoneCommentRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 UpdateHostedZoneComment response.
 *
 * @param  response  Response to parse.
 */
void UpdateHostedZoneCommentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateHostedZoneCommentResponsePrivate
 *
 * @brief  Private implementation for UpdateHostedZoneCommentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateHostedZoneCommentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateHostedZoneCommentResponse instance.
 */
UpdateHostedZoneCommentResponsePrivate::UpdateHostedZoneCommentResponsePrivate(
    UpdateHostedZoneCommentQueueResponse * const q) : UpdateHostedZoneCommentPrivate(q)
{

}

/**
 * @brief  Parse an Route53 UpdateHostedZoneCommentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateHostedZoneCommentResponsePrivate::UpdateHostedZoneCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateHostedZoneCommentResponse"));
    /// @todo
}
