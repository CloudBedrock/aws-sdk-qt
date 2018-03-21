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

#include "mediaconvertclientresponse.h"
#include "mediaconvertclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  MediaConvertClientResponse
 *
 * @brief  Handles  MediaConvertClient responses.
 *
 * @see    Client::mediaConvertClient
 */

/**
 * @brief  Constructs a new MediaConvertClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MediaConvertClientResponse::MediaConvertClientResponse(QObject * const parent)
    : AwsAbstractResponse(new MediaConvertClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MediaConvertClientResponsePrivate
 *
 * @brief  Private implementation for MediaConvertClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaConvertClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MediaConvertClientResponse instance.
 */
MediaConvertClientResponsePrivate::MediaConvertClientResponsePrivate(
    MediaConvertClientQueueResponse * const q) : MediaConvertClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
