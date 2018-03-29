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

#include "describevpcclassiclinkdnssupportrequest.h"
#include "describevpcclassiclinkdnssupportrequest_p.h"
#include "describevpcclassiclinkdnssupportresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeVpcClassicLinkDnsSupportRequest
 *
 * @brief  Implements EC2 DescribeVpcClassicLinkDnsSupport requests.
 *
 * @see    EC2Client::describeVpcClassicLinkDnsSupport
 */

/**
 * @brief  Constructs a new DescribeVpcClassicLinkDnsSupportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcClassicLinkDnsSupportRequest::DescribeVpcClassicLinkDnsSupportRequest(const DescribeVpcClassicLinkDnsSupportRequest &other)
    : EC2Request(new DescribeVpcClassicLinkDnsSupportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcClassicLinkDnsSupportRequest object.
 */
DescribeVpcClassicLinkDnsSupportRequest::DescribeVpcClassicLinkDnsSupportRequest()
    : EC2Request(new DescribeVpcClassicLinkDnsSupportRequestPrivate(EC2Request::DescribeVpcClassicLinkDnsSupportAction, this))
{

}

bool DescribeVpcClassicLinkDnsSupportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcClassicLinkDnsSupportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcClassicLinkDnsSupportResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVpcClassicLinkDnsSupportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcClassicLinkDnsSupportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcClassicLinkDnsSupportRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcClassicLinkDnsSupportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcClassicLinkDnsSupportRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcClassicLinkDnsSupportRequest instance.
 */
DescribeVpcClassicLinkDnsSupportRequestPrivate::DescribeVpcClassicLinkDnsSupportRequestPrivate(
    const EC2Request::Action action, DescribeVpcClassicLinkDnsSupportRequest * const q)
    : DescribeVpcClassicLinkDnsSupportPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcClassicLinkDnsSupportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcClassicLinkDnsSupportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcClassicLinkDnsSupportRequest instance.
 */
DescribeVpcClassicLinkDnsSupportRequestPrivate::DescribeVpcClassicLinkDnsSupportRequestPrivate(
    const DescribeVpcClassicLinkDnsSupportRequestPrivate &other, DescribeVpcClassicLinkDnsSupportRequest * const q)
    : DescribeVpcClassicLinkDnsSupportPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
