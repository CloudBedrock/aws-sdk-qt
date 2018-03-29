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

#include "liststacksetoperationresultsresponse.h"
#include "liststacksetoperationresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackSetOperationResultsResponse
 *
 * @brief  Handles CloudFormation ListStackSetOperationResults responses.
 *
 * @see    CloudFormationClient::listStackSetOperationResults
 */

/**
 * @brief  Constructs a new ListStackSetOperationResultsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStackSetOperationResultsResponse::ListStackSetOperationResultsResponse(
        const ListStackSetOperationResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListStackSetOperationResultsResponsePrivate(this), parent)
{
    setRequest(new ListStackSetOperationResultsRequest(request));
    setReply(reply);
}

const ListStackSetOperationResultsRequest * ListStackSetOperationResultsResponse::request() const
{
    Q_D(const ListStackSetOperationResultsResponse);
    return static_cast<const ListStackSetOperationResultsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListStackSetOperationResults response.
 *
 * @param  response  Response to parse.
 */
void ListStackSetOperationResultsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStackSetOperationResultsResponsePrivate
 *
 * @brief  Private implementation for ListStackSetOperationResultsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetOperationResultsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStackSetOperationResultsResponse instance.
 */
ListStackSetOperationResultsResponsePrivate::ListStackSetOperationResultsResponsePrivate(
    ListStackSetOperationResultsQueueResponse * const q) : ListStackSetOperationResultsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListStackSetOperationResultsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStackSetOperationResultsResponsePrivate::ListStackSetOperationResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackSetOperationResultsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
