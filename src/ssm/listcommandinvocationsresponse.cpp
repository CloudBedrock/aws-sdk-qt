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

#include "listcommandinvocationsresponse.h"
#include "listcommandinvocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListCommandInvocationsResponse
 *
 * @brief  Handles SSM ListCommandInvocations responses.
 *
 * @see    SSMClient::listCommandInvocations
 */

/**
 * @brief  Constructs a new ListCommandInvocationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListCommandInvocationsResponse::ListCommandInvocationsResponse(
        const ListCommandInvocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListCommandInvocationsResponsePrivate(this), parent)
{
    setRequest(new ListCommandInvocationsRequest(request));
    setReply(reply);
}

const ListCommandInvocationsRequest * ListCommandInvocationsResponse::request() const
{
    Q_D(const ListCommandInvocationsResponse);
    return static_cast<const ListCommandInvocationsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListCommandInvocations response.
 *
 * @param  response  Response to parse.
 */
void ListCommandInvocationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListCommandInvocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListCommandInvocationsResponsePrivate
 *
 * @brief  Private implementation for ListCommandInvocationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCommandInvocationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListCommandInvocationsResponse instance.
 */
ListCommandInvocationsResponsePrivate::ListCommandInvocationsResponsePrivate(
    ListCommandInvocationsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListCommandInvocationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListCommandInvocationsResponsePrivate::ListCommandInvocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCommandInvocationsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
