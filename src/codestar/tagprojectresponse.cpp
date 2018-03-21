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

#include "tagprojectresponse.h"
#include "tagprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeStar {

/**
 * @class  TagProjectResponse
 *
 * @brief  Handles CodeStar TagProject responses.
 *
 * @see    CodeStarClient::tagProject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TagProjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new TagProjectResponsePrivate(this), parent)
{
    setRequest(new TagProjectRequest(request));
    setReply(reply);
}

const TagProjectRequest * TagProjectResponse::request() const
{
    Q_D(const TagProjectResponse);
    return static_cast<const TagProjectRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar TagProject response.
 *
 * @param  response  Response to parse.
 */
void TagProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TagProjectResponsePrivate
 *
 * @brief  Private implementation for TagProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TagProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TagProjectResponse instance.
 */
TagProjectResponsePrivate::TagProjectResponsePrivate(
    TagProjectQueueResponse * const q) : TagProjectPrivate(q)
{

}

/**
 * @brief  Parse an CodeStar TagProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TagProjectResponsePrivate::TagProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagProjectResponse"));
    /// @todo
}
