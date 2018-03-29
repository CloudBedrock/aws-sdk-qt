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

#include "getcommentsforpullrequestresponse.h"
#include "getcommentsforpullrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetCommentsForPullRequestResponse
 *
 * @brief  Handles CodeCommit GetCommentsForPullRequest responses.
 *
 * @see    CodeCommitClient::getCommentsForPullRequest
 */

/**
 * @brief  Constructs a new GetCommentsForPullRequestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommentsForPullRequestResponse::GetCommentsForPullRequestResponse(
        const GetCommentsForPullRequestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetCommentsForPullRequestResponsePrivate(this), parent)
{
    setRequest(new GetCommentsForPullRequestRequest(request));
    setReply(reply);
}

const GetCommentsForPullRequestRequest * GetCommentsForPullRequestResponse::request() const
{
    Q_D(const GetCommentsForPullRequestResponse);
    return static_cast<const GetCommentsForPullRequestRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetCommentsForPullRequest response.
 *
 * @param  response  Response to parse.
 */
void GetCommentsForPullRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCommentsForPullRequestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCommentsForPullRequestResponsePrivate
 *
 * @brief  Private implementation for GetCommentsForPullRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommentsForPullRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCommentsForPullRequestResponse instance.
 */
GetCommentsForPullRequestResponsePrivate::GetCommentsForPullRequestResponsePrivate(
    GetCommentsForPullRequestResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetCommentsForPullRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCommentsForPullRequestResponsePrivate::parseGetCommentsForPullRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCommentsForPullRequestResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
