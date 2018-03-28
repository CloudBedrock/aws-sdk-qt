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

#include "gameliftclientresponse.h"
#include "gameliftclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  GameLiftClientResponse
 *
 * @brief  Handles  GameLiftClient responses.
 *
 * @see    Client::gameLiftClient
 */

/**
 * @brief  Constructs a new GameLiftClientResponse object.
 *
 * @param  parent   This object's parent.
 */
GameLiftClientResponse::GameLiftClientResponse(QObject * const parent)
    : AwsAbstractResponse(new GameLiftClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  GameLiftClientResponsePrivate
 *
 * @brief  Private implementation for GameLiftClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GameLiftClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GameLiftClientResponse instance.
 */
GameLiftClientResponsePrivate::GameLiftClientResponsePrivate(
    GameLiftClientQueueResponse * const q) : GameLiftClientPrivate(q)
{

}

} // namespace GameLift
} // namespace AWS
