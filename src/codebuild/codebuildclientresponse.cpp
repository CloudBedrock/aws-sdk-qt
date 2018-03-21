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

#include "codebuildclientresponse.h"
#include "codebuildclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  CodeBuildClientResponse
 *
 * @brief  Handles  CodeBuildClient responses.
 *
 * @see    Client::codeBuildClient
 */

/**
 * @brief  Constructs a new CodeBuildClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CodeBuildClientResponse::CodeBuildClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CodeBuildClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CodeBuildClientResponsePrivate
 *
 * @brief  Private implementation for CodeBuildClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeBuildClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CodeBuildClientResponse instance.
 */
CodeBuildClientResponsePrivate::CodeBuildClientResponsePrivate(
    CodeBuildClientQueueResponse * const q) : CodeBuildClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
