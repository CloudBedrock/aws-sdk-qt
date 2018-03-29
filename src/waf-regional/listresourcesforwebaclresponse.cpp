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

#include "listresourcesforwebaclresponse.h"
#include "listresourcesforwebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  ListResourcesForWebACLResponse
 *
 * @brief  Handles WAFRegional ListResourcesForWebACL responses.
 *
 * @see    WAFRegionalClient::listResourcesForWebACL
 */

/**
 * @brief  Constructs a new ListResourcesForWebACLResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourcesForWebACLResponse::ListResourcesForWebACLResponse(
        const ListResourcesForWebACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new ListResourcesForWebACLResponsePrivate(this), parent)
{
    setRequest(new ListResourcesForWebACLRequest(request));
    setReply(reply);
}

const ListResourcesForWebACLRequest * ListResourcesForWebACLResponse::request() const
{
    Q_D(const ListResourcesForWebACLResponse);
    return static_cast<const ListResourcesForWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional ListResourcesForWebACL response.
 *
 * @param  response  Response to parse.
 */
void ListResourcesForWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListResourcesForWebACLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourcesForWebACLResponsePrivate
 *
 * @brief  Private implementation for ListResourcesForWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesForWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourcesForWebACLResponse instance.
 */
ListResourcesForWebACLResponsePrivate::ListResourcesForWebACLResponsePrivate(
    ListResourcesForWebACLResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional ListResourcesForWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourcesForWebACLResponsePrivate::parseListResourcesForWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesForWebACLResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
