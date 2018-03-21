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

#include "listorganizationsresponse.h"
#include "listorganizationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  ListOrganizationsResponse
 *
 * @brief  Handles WorkMail ListOrganizations responses.
 *
 * @see    WorkMailClient::listOrganizations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOrganizationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new ListOrganizationsResponsePrivate(this), parent)
{
    setRequest(new ListOrganizationsRequest(request));
    setReply(reply);
}

const ListOrganizationsRequest * ListOrganizationsResponse::request() const
{
    Q_D(const ListOrganizationsResponse);
    return static_cast<const ListOrganizationsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail ListOrganizations response.
 *
 * @param  response  Response to parse.
 */
void ListOrganizationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOrganizationsResponsePrivate
 *
 * @brief  Private implementation for ListOrganizationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOrganizationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOrganizationsResponse instance.
 */
ListOrganizationsResponsePrivate::ListOrganizationsResponsePrivate(
    ListOrganizationsQueueResponse * const q) : ListOrganizationsPrivate(q)
{

}

/**
 * @brief  Parse an WorkMail ListOrganizationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOrganizationsResponsePrivate::ListOrganizationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrganizationsResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace AWS
