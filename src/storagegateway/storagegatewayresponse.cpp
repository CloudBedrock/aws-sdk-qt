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

#include "storagegatewayresponse.h"
#include "storagegatewayresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  StorageGatewayResponse
 *
 * @brief  Handles StorageGateway StorageGateway responses.
 *
 * @see    StorageGatewayClient::storageGateway
 */

/**
 * @brief  Constructs a new StorageGatewayResponse object.
 *
 * @param  parent   This object's parent.
 */
StorageGatewayResponse::StorageGatewayResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new StorageGatewayResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  StorageGatewayResponsePrivate
 *
 * @brief  Private implementation for StorageGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StorageGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StorageGatewayResponse instance.
 */
StorageGatewayResponsePrivate::StorageGatewayResponsePrivate(
    StorageGatewayQueueResponse * const q) : StorageGatewayPrivate(q)
{

}

} // namespace StorageGateway
} // namespace QtAws