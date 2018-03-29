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

#include "describealiasrequest.h"
#include "describealiasrequest_p.h"
#include "describealiasresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeAliasRequest
 *
 * @brief  Implements GameLift DescribeAlias requests.
 *
 * @see    GameLiftClient::describeAlias
 */

/**
 * @brief  Constructs a new DescribeAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAliasRequest::DescribeAliasRequest(const DescribeAliasRequest &other)
    : GameLiftRequest(new DescribeAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAliasRequest object.
 */
DescribeAliasRequest::DescribeAliasRequest()
    : GameLiftRequest(new DescribeAliasRequestPrivate(GameLiftRequest::DescribeAliasAction, this))
{

}

bool DescribeAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAliasResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAliasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAliasRequestPrivate
 *
 * @brief  Private implementation for DescribeAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAliasRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeAliasRequest instance.
 */
DescribeAliasRequestPrivate::DescribeAliasRequestPrivate(
    const GameLiftRequest::Action action, DescribeAliasRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAliasRequest instance.
 */
DescribeAliasRequestPrivate::DescribeAliasRequestPrivate(
    const DescribeAliasRequestPrivate &other, DescribeAliasRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
