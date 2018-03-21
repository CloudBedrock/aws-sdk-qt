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

#include "marketplacemeteringclientresponse.h"
#include "marketplacemeteringclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  MarketplaceMeteringClientResponse
 *
 * @brief  Handles  MarketplaceMeteringClient responses.
 *
 * @see    Client::marketplaceMeteringClient
 */

/**
 * @brief  Constructs a new MarketplaceMeteringClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MarketplaceMeteringClientResponse::MarketplaceMeteringClientResponse(QObject * const parent)
    : AwsAbstractResponse(new MarketplaceMeteringClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MarketplaceMeteringClientResponsePrivate
 *
 * @brief  Private implementation for MarketplaceMeteringClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MarketplaceMeteringClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MarketplaceMeteringClientResponse instance.
 */
MarketplaceMeteringClientResponsePrivate::MarketplaceMeteringClientResponsePrivate(
    MarketplaceMeteringClientQueueResponse * const q) : MarketplaceMeteringClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
