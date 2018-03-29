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

#include "dynamodbstreamsclientresponse.h"
#include "dynamodbstreamsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDBStreams {

/**
 * @class  DynamoDBStreamsClientResponse
 *
 * @brief  Handles DynamoDBStreams DynamoDBStreamsClient responses.
 *
 * @see    DynamoDBStreamsClient::dynamoDBStreamsClient
 */

/**
 * @brief  Constructs a new DynamoDBStreamsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
DynamoDBStreamsClientResponse::DynamoDBStreamsClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DynamoDBStreamsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  DynamoDBStreamsClientResponsePrivate
 *
 * @brief  Private implementation for DynamoDBStreamsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DynamoDBStreamsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DynamoDBStreamsClientResponse instance.
 */
DynamoDBStreamsClientResponsePrivate::DynamoDBStreamsClientResponsePrivate(
    DynamoDBStreamsClientQueueResponse * const q) : DynamoDBStreamsClientPrivate(q)
{

}

} // namespace DynamoDBStreams
} // namespace QtAws
