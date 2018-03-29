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

#include "liststackinstancesresponse.h"
#include "liststackinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackInstancesResponse
 *
 * @brief  Handles CloudFormation ListStackInstances responses.
 *
 * @see    CloudFormationClient::listStackInstances
 */

/**
 * @brief  Constructs a new ListStackInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStackInstancesResponse::ListStackInstancesResponse(
        const ListStackInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListStackInstancesResponse(new ListStackInstancesResponsePrivate(this), parent)
{
    setRequest(new ListStackInstancesRequest(request));
    setReply(reply);
}

const ListStackInstancesRequest * ListStackInstancesResponse::request() const
{
    Q_D(const ListStackInstancesResponse);
    return static_cast<const ListStackInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListStackInstances response.
 *
 * @param  response  Response to parse.
 */
void ListStackInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListStackInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStackInstancesResponsePrivate
 *
 * @brief  Private implementation for ListStackInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStackInstancesResponse instance.
 */
ListStackInstancesResponsePrivate::ListStackInstancesResponsePrivate(
    ListStackInstancesResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListStackInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStackInstancesResponsePrivate::parseListStackInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackInstancesResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
