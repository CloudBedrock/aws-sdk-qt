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

#include "listorganizationalunitsforparentresponse.h"
#include "listorganizationalunitsforparentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  ListOrganizationalUnitsForParentResponse
 *
 * @brief  Handles Organizations ListOrganizationalUnitsForParent responses.
 *
 * @see    OrganizationsClient::listOrganizationalUnitsForParent
 */

/**
 * @brief  Constructs a new ListOrganizationalUnitsForParentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOrganizationalUnitsForParentResponse::ListOrganizationalUnitsForParentResponse(
        const ListOrganizationalUnitsForParentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListOrganizationalUnitsForParentResponsePrivate(this), parent)
{
    setRequest(new ListOrganizationalUnitsForParentRequest(request));
    setReply(reply);
}

const ListOrganizationalUnitsForParentRequest * ListOrganizationalUnitsForParentResponse::request() const
{
    Q_D(const ListOrganizationalUnitsForParentResponse);
    return static_cast<const ListOrganizationalUnitsForParentRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListOrganizationalUnitsForParent response.
 *
 * @param  response  Response to parse.
 */
void ListOrganizationalUnitsForParentResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListOrganizationalUnitsForParentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOrganizationalUnitsForParentResponsePrivate
 *
 * @brief  Private implementation for ListOrganizationalUnitsForParentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOrganizationalUnitsForParentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOrganizationalUnitsForParentResponse instance.
 */
ListOrganizationalUnitsForParentResponsePrivate::ListOrganizationalUnitsForParentResponsePrivate(
    ListOrganizationalUnitsForParentResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListOrganizationalUnitsForParentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOrganizationalUnitsForParentResponsePrivate::parseListOrganizationalUnitsForParentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrganizationalUnitsForParentResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
