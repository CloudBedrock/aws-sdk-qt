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

#include "confirmprivatevirtualinterfaceresponse.h"
#include "confirmprivatevirtualinterfaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  ConfirmPrivateVirtualInterfaceResponse
 *
 * @brief  Handles DirectConnect ConfirmPrivateVirtualInterface responses.
 *
 * @see    DirectConnectClient::confirmPrivateVirtualInterface
 */

/**
 * @brief  Constructs a new ConfirmPrivateVirtualInterfaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmPrivateVirtualInterfaceResponse::ConfirmPrivateVirtualInterfaceResponse(
        const ConfirmPrivateVirtualInterfaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new ConfirmPrivateVirtualInterfaceResponsePrivate(this), parent)
{
    setRequest(new ConfirmPrivateVirtualInterfaceRequest(request));
    setReply(reply);
}

const ConfirmPrivateVirtualInterfaceRequest * ConfirmPrivateVirtualInterfaceResponse::request() const
{
    Q_D(const ConfirmPrivateVirtualInterfaceResponse);
    return static_cast<const ConfirmPrivateVirtualInterfaceRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect ConfirmPrivateVirtualInterface response.
 *
 * @param  response  Response to parse.
 */
void ConfirmPrivateVirtualInterfaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(ConfirmPrivateVirtualInterfaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ConfirmPrivateVirtualInterfaceResponsePrivate
 *
 * @brief  Private implementation for ConfirmPrivateVirtualInterfaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmPrivateVirtualInterfaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ConfirmPrivateVirtualInterfaceResponse instance.
 */
ConfirmPrivateVirtualInterfaceResponsePrivate::ConfirmPrivateVirtualInterfaceResponsePrivate(
    ConfirmPrivateVirtualInterfaceResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect ConfirmPrivateVirtualInterfaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ConfirmPrivateVirtualInterfaceResponsePrivate::parseConfirmPrivateVirtualInterfaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmPrivateVirtualInterfaceResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
