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

#include "listresourcesfortagoptionresponse.h"
#include "listresourcesfortagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListResourcesForTagOptionResponse
 *
 * @brief  Handles ServiceCatalog ListResourcesForTagOption responses.
 *
 * @see    ServiceCatalogClient::listResourcesForTagOption
 */

/**
 * @brief  Constructs a new ListResourcesForTagOptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourcesForTagOptionResponse::ListResourcesForTagOptionResponse(
        const ListResourcesForTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListResourcesForTagOptionResponsePrivate(this), parent)
{
    setRequest(new ListResourcesForTagOptionRequest(request));
    setReply(reply);
}

const ListResourcesForTagOptionRequest * ListResourcesForTagOptionResponse::request() const
{
    Q_D(const ListResourcesForTagOptionResponse);
    return static_cast<const ListResourcesForTagOptionRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog ListResourcesForTagOption response.
 *
 * @param  response  Response to parse.
 */
void ListResourcesForTagOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourcesForTagOptionResponsePrivate
 *
 * @brief  Private implementation for ListResourcesForTagOptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesForTagOptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourcesForTagOptionResponse instance.
 */
ListResourcesForTagOptionResponsePrivate::ListResourcesForTagOptionResponsePrivate(
    ListResourcesForTagOptionQueueResponse * const q) : ListResourcesForTagOptionPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog ListResourcesForTagOptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourcesForTagOptionResponsePrivate::ListResourcesForTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesForTagOptionResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
