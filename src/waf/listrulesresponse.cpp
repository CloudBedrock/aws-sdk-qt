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

#include "listrulesresponse.h"
#include "listrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  ListRulesResponse
 *
 * @brief  Handles WAF ListRules responses.
 *
 * @see    WAFClient::listRules
 */

/**
 * @brief  Constructs a new ListRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRulesResponse::ListRulesResponse(
        const ListRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new ListRulesResponsePrivate(this), parent)
{
    setRequest(new ListRulesRequest(request));
    setReply(reply);
}

const ListRulesRequest * ListRulesResponse::request() const
{
    Q_D(const ListRulesResponse);
    return static_cast<const ListRulesRequest *>(d->request);
}

/**
 * @brief  Parse a WAF ListRules response.
 *
 * @param  response  Response to parse.
 */
void ListRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRulesResponsePrivate
 *
 * @brief  Private implementation for ListRulesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRulesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRulesResponse instance.
 */
ListRulesResponsePrivate::ListRulesResponsePrivate(
    ListRulesResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF ListRulesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRulesResponsePrivate::ListRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRulesResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
