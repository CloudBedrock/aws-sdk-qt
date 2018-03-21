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

#include "unmonitorinstancesrequest.h"
#include "unmonitorinstancesrequest_p.h"
#include "unmonitorinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  UnmonitorInstancesRequest
 *
 * @brief  Implements EC2 UnmonitorInstances requests.
 *
 * @see    EC2Client::unmonitorInstances
 */

/**
 * @brief  Constructs a new UnmonitorInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnmonitorInstancesResponse::UnmonitorInstancesResponse(

/**
 * @brief  Constructs a new UnmonitorInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnmonitorInstancesRequest::UnmonitorInstancesRequest(const UnmonitorInstancesRequest &other)
    : EC2Request(new UnmonitorInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnmonitorInstancesRequest object.
 */
UnmonitorInstancesRequest::UnmonitorInstancesRequest()
    : EC2Request(new UnmonitorInstancesRequestPrivate(EC2Request::UnmonitorInstancesAction, this))
{

}

bool UnmonitorInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnmonitorInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnmonitorInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * UnmonitorInstancesRequest::response(QNetworkReply * const reply) const
{
    return new UnmonitorInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnmonitorInstancesRequestPrivate
 *
 * @brief  Private implementation for UnmonitorInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnmonitorInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public UnmonitorInstancesRequest instance.
 */
UnmonitorInstancesRequestPrivate::UnmonitorInstancesRequestPrivate(
    const EC2Request::Action action, UnmonitorInstancesRequest * const q)
    : UnmonitorInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnmonitorInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnmonitorInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnmonitorInstancesRequest instance.
 */
UnmonitorInstancesRequestPrivate::UnmonitorInstancesRequestPrivate(
    const UnmonitorInstancesRequestPrivate &other, UnmonitorInstancesRequest * const q)
    : UnmonitorInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
