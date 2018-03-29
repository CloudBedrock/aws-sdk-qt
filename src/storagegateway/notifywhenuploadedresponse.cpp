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

#include "notifywhenuploadedresponse.h"
#include "notifywhenuploadedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  NotifyWhenUploadedResponse
 *
 * @brief  Handles StorageGateway NotifyWhenUploaded responses.
 *
 * @see    StorageGatewayClient::notifyWhenUploaded
 */

/**
 * @brief  Constructs a new NotifyWhenUploadedResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
NotifyWhenUploadedResponse::NotifyWhenUploadedResponse(
        const NotifyWhenUploadedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NotifyWhenUploadedResponse(new NotifyWhenUploadedResponsePrivate(this), parent)
{
    setRequest(new NotifyWhenUploadedRequest(request));
    setReply(reply);
}

const NotifyWhenUploadedRequest * NotifyWhenUploadedResponse::request() const
{
    Q_D(const NotifyWhenUploadedResponse);
    return static_cast<const NotifyWhenUploadedRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway NotifyWhenUploaded response.
 *
 * @param  response  Response to parse.
 */
void NotifyWhenUploadedResponse::parseSuccess(QIODevice &response)
{
    Q_D(NotifyWhenUploadedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  NotifyWhenUploadedResponsePrivate
 *
 * @brief  Private implementation for NotifyWhenUploadedResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new NotifyWhenUploadedResponsePrivate object.
 *
 * @param  q  Pointer to this object's public NotifyWhenUploadedResponse instance.
 */
NotifyWhenUploadedResponsePrivate::NotifyWhenUploadedResponsePrivate(
    NotifyWhenUploadedResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway NotifyWhenUploadedResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void NotifyWhenUploadedResponsePrivate::parseNotifyWhenUploadedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("NotifyWhenUploadedResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
