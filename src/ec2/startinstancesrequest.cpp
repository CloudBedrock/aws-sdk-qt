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

#include "startinstancesrequest.h"
#include "startinstancesrequest_p.h"
#include "startinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  StartInstancesRequest
 *
 * @brief  Implements EC2 StartInstances requests.
 *
 * @see    EC2Client::startInstances
 */

/**
 * @brief  Constructs a new StartInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartInstancesRequest::StartInstancesRequest(const StartInstancesRequest &other)
    : EC2Request(new StartInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartInstancesRequest object.
 */
StartInstancesRequest::StartInstancesRequest()
    : EC2Request(new StartInstancesRequestPrivate(EC2Request::StartInstancesAction, this))
{

}

bool StartInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * StartInstancesRequest::response(QNetworkReply * const reply) const
{
    return new StartInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartInstancesRequestPrivate
 *
 * @brief  Private implementation for StartInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public StartInstancesRequest instance.
 */
StartInstancesRequestPrivate::StartInstancesRequestPrivate(
    const EC2Request::Action action, StartInstancesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartInstancesRequest instance.
 */
StartInstancesRequestPrivate::StartInstancesRequestPrivate(
    const StartInstancesRequestPrivate &other, StartInstancesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
