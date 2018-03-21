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

#include "listsubscriptiondefinitionsresponse.h"
#include "listsubscriptiondefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListSubscriptionDefinitionsResponse
 *
 * @brief  Handles Greengrass ListSubscriptionDefinitions responses.
 *
 * @see    GreengrassClient::listSubscriptionDefinitions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscriptionDefinitionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListSubscriptionDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionDefinitionsRequest(request));
    setReply(reply);
}

const ListSubscriptionDefinitionsRequest * ListSubscriptionDefinitionsResponse::request() const
{
    Q_D(const ListSubscriptionDefinitionsResponse);
    return static_cast<const ListSubscriptionDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListSubscriptionDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListSubscriptionDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSubscriptionDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListSubscriptionDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSubscriptionDefinitionsResponse instance.
 */
ListSubscriptionDefinitionsResponsePrivate::ListSubscriptionDefinitionsResponsePrivate(
    ListSubscriptionDefinitionsQueueResponse * const q) : ListSubscriptionDefinitionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListSubscriptionDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSubscriptionDefinitionsResponsePrivate::ListSubscriptionDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionDefinitionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
