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

#include "listpullrequestsresponse.h"
#include "listpullrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  ListPullRequestsResponse
 *
 * @brief  Handles CodeCommit ListPullRequests responses.
 *
 * @see    CodeCommitClient::listPullRequests
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPullRequestsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new ListPullRequestsResponsePrivate(this), parent)
{
    setRequest(new ListPullRequestsRequest(request));
    setReply(reply);
}

const ListPullRequestsRequest * ListPullRequestsResponse::request() const
{
    Q_D(const ListPullRequestsResponse);
    return static_cast<const ListPullRequestsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit ListPullRequests response.
 *
 * @param  response  Response to parse.
 */
void ListPullRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPullRequestsResponsePrivate
 *
 * @brief  Private implementation for ListPullRequestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPullRequestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPullRequestsResponse instance.
 */
ListPullRequestsResponsePrivate::ListPullRequestsResponsePrivate(
    ListPullRequestsQueueResponse * const q) : ListPullRequestsPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit ListPullRequestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPullRequestsResponsePrivate::ListPullRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPullRequestsResponse"));
    /// @todo
}
