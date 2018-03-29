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

#include "listlocaldisksresponse.h"
#include "listlocaldisksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ListLocalDisksResponse
 *
 * @brief  Handles StorageGateway ListLocalDisks responses.
 *
 * @see    StorageGatewayClient::listLocalDisks
 */

/**
 * @brief  Constructs a new ListLocalDisksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLocalDisksResponse::ListLocalDisksResponse(
        const ListLocalDisksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ListLocalDisksResponsePrivate(this), parent)
{
    setRequest(new ListLocalDisksRequest(request));
    setReply(reply);
}

const ListLocalDisksRequest * ListLocalDisksResponse::request() const
{
    Q_D(const ListLocalDisksResponse);
    return static_cast<const ListLocalDisksRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ListLocalDisks response.
 *
 * @param  response  Response to parse.
 */
void ListLocalDisksResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListLocalDisksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListLocalDisksResponsePrivate
 *
 * @brief  Private implementation for ListLocalDisksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLocalDisksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListLocalDisksResponse instance.
 */
ListLocalDisksResponsePrivate::ListLocalDisksResponsePrivate(
    ListLocalDisksResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ListLocalDisksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListLocalDisksResponsePrivate::ListLocalDisksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLocalDisksResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
