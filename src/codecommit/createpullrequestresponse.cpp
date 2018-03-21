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

#include "createpullrequestresponse.h"
#include "createpullrequestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  CreatePullRequestResponse
 *
 * @brief  Handles CodeCommit CreatePullRequest responses.
 *
 * @see    CodeCommitClient::createPullRequest
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePullRequestResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new CreatePullRequestResponsePrivate(this), parent)
{
    setRequest(new CreatePullRequestRequest(request));
    setReply(reply);
}

const CreatePullRequestRequest * CreatePullRequestResponse::request() const
{
    Q_D(const CreatePullRequestResponse);
    return static_cast<const CreatePullRequestRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit CreatePullRequest response.
 *
 * @param  response  Response to parse.
 */
void CreatePullRequestResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePullRequestResponsePrivate
 *
 * @brief  Private implementation for CreatePullRequestResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePullRequestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePullRequestResponse instance.
 */
CreatePullRequestResponsePrivate::CreatePullRequestResponsePrivate(
    CreatePullRequestQueueResponse * const q) : CreatePullRequestPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit CreatePullRequestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePullRequestResponsePrivate::CreatePullRequestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePullRequestResponse"));
    /// @todo
}
