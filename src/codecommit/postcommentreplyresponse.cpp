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

#include "postcommentreplyresponse.h"
#include "postcommentreplyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  PostCommentReplyResponse
 *
 * @brief  Handles CodeCommit PostCommentReply responses.
 *
 * @see    CodeCommitClient::postCommentReply
 */

/**
 * @brief  Constructs a new PostCommentReplyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PostCommentReplyResponse::PostCommentReplyResponse(
        const PostCommentReplyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new PostCommentReplyResponsePrivate(this), parent)
{
    setRequest(new PostCommentReplyRequest(request));
    setReply(reply);
}

const PostCommentReplyRequest * PostCommentReplyResponse::request() const
{
    Q_D(const PostCommentReplyResponse);
    return static_cast<const PostCommentReplyRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit PostCommentReply response.
 *
 * @param  response  Response to parse.
 */
void PostCommentReplyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PostCommentReplyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PostCommentReplyResponsePrivate
 *
 * @brief  Private implementation for PostCommentReplyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PostCommentReplyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PostCommentReplyResponse instance.
 */
PostCommentReplyResponsePrivate::PostCommentReplyResponsePrivate(
    PostCommentReplyResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit PostCommentReplyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PostCommentReplyResponsePrivate::parsePostCommentReplyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PostCommentReplyResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
