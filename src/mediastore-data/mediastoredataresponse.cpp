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

#include "mediastoredataresponse.h"
#include "mediastoredataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/**
 * @class  MediaStoreDataResponse
 *
 * @brief  Handles MediaStoreData MediaStoreData responses.
 *
 * @see    MediaStoreDataClient::mediaStoreData
 */

/**
 * @brief  Constructs a new MediaStoreDataResponse object.
 *
 * @param  parent   This object's parent.
 */
MediaStoreDataResponse::MediaStoreDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaStoreDataResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void MediaStoreDataResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  MediaStoreDataResponsePrivate
 *
 * @brief  Private implementation for MediaStoreDataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaStoreDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MediaStoreDataResponse instance.
 */
MediaStoreDataResponsePrivate::MediaStoreDataResponsePrivate(
    MediaStoreDataQueueResponse * const q) : MediaStoreDataPrivate(q)
{

}

} // namespace MediaStoreData
} // namespace QtAws
