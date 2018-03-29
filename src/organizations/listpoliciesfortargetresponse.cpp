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

#include "listpoliciesfortargetresponse.h"
#include "listpoliciesfortargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  ListPoliciesForTargetResponse
 *
 * @brief  Handles Organizations ListPoliciesForTarget responses.
 *
 * @see    OrganizationsClient::listPoliciesForTarget
 */

/**
 * @brief  Constructs a new ListPoliciesForTargetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPoliciesForTargetResponse::ListPoliciesForTargetResponse(
        const ListPoliciesForTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new ListPoliciesForTargetResponsePrivate(this), parent)
{
    setRequest(new ListPoliciesForTargetRequest(request));
    setReply(reply);
}

const ListPoliciesForTargetRequest * ListPoliciesForTargetResponse::request() const
{
    Q_D(const ListPoliciesForTargetResponse);
    return static_cast<const ListPoliciesForTargetRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations ListPoliciesForTarget response.
 *
 * @param  response  Response to parse.
 */
void ListPoliciesForTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPoliciesForTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPoliciesForTargetResponsePrivate
 *
 * @brief  Private implementation for ListPoliciesForTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPoliciesForTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPoliciesForTargetResponse instance.
 */
ListPoliciesForTargetResponsePrivate::ListPoliciesForTargetResponsePrivate(
    ListPoliciesForTargetResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations ListPoliciesForTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPoliciesForTargetResponsePrivate::parseListPoliciesForTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPoliciesForTargetResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
