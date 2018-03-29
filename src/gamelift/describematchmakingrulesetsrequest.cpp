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

#include "describematchmakingrulesetsrequest.h"
#include "describematchmakingrulesetsrequest_p.h"
#include "describematchmakingrulesetsresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeMatchmakingRuleSetsRequest
 *
 * @brief  Implements GameLift DescribeMatchmakingRuleSets requests.
 *
 * @see    GameLiftClient::describeMatchmakingRuleSets
 */

/**
 * @brief  Constructs a new DescribeMatchmakingRuleSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMatchmakingRuleSetsRequest::DescribeMatchmakingRuleSetsRequest(const DescribeMatchmakingRuleSetsRequest &other)
    : GameLiftRequest(new DescribeMatchmakingRuleSetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMatchmakingRuleSetsRequest object.
 */
DescribeMatchmakingRuleSetsRequest::DescribeMatchmakingRuleSetsRequest()
    : GameLiftRequest(new DescribeMatchmakingRuleSetsRequestPrivate(GameLiftRequest::DescribeMatchmakingRuleSetsAction, this))
{

}

bool DescribeMatchmakingRuleSetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMatchmakingRuleSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMatchmakingRuleSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMatchmakingRuleSetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMatchmakingRuleSetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMatchmakingRuleSetsRequestPrivate
 *
 * @brief  Private implementation for DescribeMatchmakingRuleSetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingRuleSetsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeMatchmakingRuleSetsRequest instance.
 */
DescribeMatchmakingRuleSetsRequestPrivate::DescribeMatchmakingRuleSetsRequestPrivate(
    const GameLiftRequest::Action action, DescribeMatchmakingRuleSetsRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingRuleSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMatchmakingRuleSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMatchmakingRuleSetsRequest instance.
 */
DescribeMatchmakingRuleSetsRequestPrivate::DescribeMatchmakingRuleSetsRequestPrivate(
    const DescribeMatchmakingRuleSetsRequestPrivate &other, DescribeMatchmakingRuleSetsRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
