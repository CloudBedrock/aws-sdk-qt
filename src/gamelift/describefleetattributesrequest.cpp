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

#include "describefleetattributesrequest.h"
#include "describefleetattributesrequest_p.h"
#include "describefleetattributesresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeFleetAttributesRequest
 *
 * @brief  Implements GameLift DescribeFleetAttributes requests.
 *
 * @see    GameLiftClient::describeFleetAttributes
 */

/**
 * @brief  Constructs a new DescribeFleetAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFleetAttributesRequest::DescribeFleetAttributesRequest(const DescribeFleetAttributesRequest &other)
    : GameLiftRequest(new DescribeFleetAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFleetAttributesRequest object.
 */
DescribeFleetAttributesRequest::DescribeFleetAttributesRequest()
    : GameLiftRequest(new DescribeFleetAttributesRequestPrivate(GameLiftRequest::DescribeFleetAttributesAction, this))
{

}

bool DescribeFleetAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFleetAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFleetAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFleetAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeFleetAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetAttributesRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DescribeFleetAttributesRequest instance.
 */
DescribeFleetAttributesRequestPrivate::DescribeFleetAttributesRequestPrivate(
    const GameLiftRequest::Action action, DescribeFleetAttributesRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFleetAttributesRequest instance.
 */
DescribeFleetAttributesRequestPrivate::DescribeFleetAttributesRequestPrivate(
    const DescribeFleetAttributesRequestPrivate &other, DescribeFleetAttributesRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
