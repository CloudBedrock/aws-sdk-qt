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

#include "listnotebookinstancesresponse.h"
#include "listnotebookinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  ListNotebookInstancesResponse
 *
 * @brief  Handles SageMaker ListNotebookInstances responses.
 *
 * @see    SageMakerClient::listNotebookInstances
 */

/**
 * @brief  Constructs a new ListNotebookInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListNotebookInstancesResponse::ListNotebookInstancesResponse(
        const ListNotebookInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListNotebookInstancesResponsePrivate(this), parent)
{
    setRequest(new ListNotebookInstancesRequest(request));
    setReply(reply);
}

const ListNotebookInstancesRequest * ListNotebookInstancesResponse::request() const
{
    Q_D(const ListNotebookInstancesResponse);
    return static_cast<const ListNotebookInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker ListNotebookInstances response.
 *
 * @param  response  Response to parse.
 */
void ListNotebookInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListNotebookInstancesResponsePrivate
 *
 * @brief  Private implementation for ListNotebookInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNotebookInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListNotebookInstancesResponse instance.
 */
ListNotebookInstancesResponsePrivate::ListNotebookInstancesResponsePrivate(
    ListNotebookInstancesQueueResponse * const q) : ListNotebookInstancesPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker ListNotebookInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListNotebookInstancesResponsePrivate::ListNotebookInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNotebookInstancesResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
