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

#include "untagprojectresponse.h"
#include "untagprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/**
 * @class  UntagProjectResponse
 *
 * @brief  Handles CodeStar UntagProject responses.
 *
 * @see    CodeStarClient::untagProject
 */

/**
 * @brief  Constructs a new UntagProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UntagProjectResponse::UntagProjectResponse(
        const UntagProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new UntagProjectResponsePrivate(this), parent)
{
    setRequest(new UntagProjectRequest(request));
    setReply(reply);
}

const UntagProjectRequest * UntagProjectResponse::request() const
{
    Q_D(const UntagProjectResponse);
    return static_cast<const UntagProjectRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar UntagProject response.
 *
 * @param  response  Response to parse.
 */
void UntagProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(UntagProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UntagProjectResponsePrivate
 *
 * @brief  Private implementation for UntagProjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UntagProjectResponse instance.
 */
UntagProjectResponsePrivate::UntagProjectResponsePrivate(
    UntagProjectResponse * const q) : CodeStarResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeStar UntagProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UntagProjectResponsePrivate::parseUntagProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagProjectResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace QtAws
