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

#include "describevpcendpointservicesrequest.h"
#include "describevpcendpointservicesrequest_p.h"
#include "describevpcendpointservicesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcEndpointServicesRequest
 *
 * @brief  Implements EC2 DescribeVpcEndpointServices requests.
 *
 * @see    EC2Client::describeVpcEndpointServices
 */

/**
 * @brief  Constructs a new DescribeVpcEndpointServicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVpcEndpointServicesResponse::DescribeVpcEndpointServicesResponse(

/**
 * @brief  Constructs a new DescribeVpcEndpointServicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcEndpointServicesRequest::DescribeVpcEndpointServicesRequest(const DescribeVpcEndpointServicesRequest &other)
    : EC2Request(new DescribeVpcEndpointServicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcEndpointServicesRequest object.
 */
DescribeVpcEndpointServicesRequest::DescribeVpcEndpointServicesRequest()
    : EC2Request(new DescribeVpcEndpointServicesRequestPrivate(EC2Request::DescribeVpcEndpointServicesAction, this))
{

}

bool DescribeVpcEndpointServicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcEndpointServicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcEndpointServicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcEndpointServicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointServicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcEndpointServicesRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcEndpointServicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServicesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcEndpointServicesRequest instance.
 */
DescribeVpcEndpointServicesRequestPrivate::DescribeVpcEndpointServicesRequestPrivate(
    const EC2Request::Action action, DescribeVpcEndpointServicesRequest * const q)
    : DescribeVpcEndpointServicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcEndpointServicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointServicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcEndpointServicesRequest instance.
 */
DescribeVpcEndpointServicesRequestPrivate::DescribeVpcEndpointServicesRequestPrivate(
    const DescribeVpcEndpointServicesRequestPrivate &other, DescribeVpcEndpointServicesRequest * const q)
    : DescribeVpcEndpointServicesPrivate(other, q)
{

}
