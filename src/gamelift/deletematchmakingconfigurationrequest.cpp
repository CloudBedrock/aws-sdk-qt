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

#include "deletematchmakingconfigurationrequest.h"
#include "deletematchmakingconfigurationrequest_p.h"
#include "deletematchmakingconfigurationresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DeleteMatchmakingConfigurationRequest
 *
 * @brief  Implements GameLift DeleteMatchmakingConfiguration requests.
 *
 * @see    GameLiftClient::deleteMatchmakingConfiguration
 */

/**
 * @brief  Constructs a new DeleteMatchmakingConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMatchmakingConfigurationRequest::DeleteMatchmakingConfigurationRequest(const DeleteMatchmakingConfigurationRequest &other)
    : GameLiftRequest(new DeleteMatchmakingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMatchmakingConfigurationRequest object.
 */
DeleteMatchmakingConfigurationRequest::DeleteMatchmakingConfigurationRequest()
    : GameLiftRequest(new DeleteMatchmakingConfigurationRequestPrivate(GameLiftRequest::DeleteMatchmakingConfigurationAction, this))
{

}

bool DeleteMatchmakingConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMatchmakingConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMatchmakingConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMatchmakingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMatchmakingConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMatchmakingConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteMatchmakingConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMatchmakingConfigurationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DeleteMatchmakingConfigurationRequest instance.
 */
DeleteMatchmakingConfigurationRequestPrivate::DeleteMatchmakingConfigurationRequestPrivate(
    const GameLiftRequest::Action action, DeleteMatchmakingConfigurationRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMatchmakingConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMatchmakingConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMatchmakingConfigurationRequest instance.
 */
DeleteMatchmakingConfigurationRequestPrivate::DeleteMatchmakingConfigurationRequestPrivate(
    const DeleteMatchmakingConfigurationRequestPrivate &other, DeleteMatchmakingConfigurationRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
