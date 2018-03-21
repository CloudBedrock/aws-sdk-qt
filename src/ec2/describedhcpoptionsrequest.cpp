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

#include "describedhcpoptionsrequest.h"
#include "describedhcpoptionsrequest_p.h"
#include "describedhcpoptionsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeDhcpOptionsRequest
 *
 * @brief  Implements EC2 DescribeDhcpOptions requests.
 *
 * @see    EC2Client::describeDhcpOptions
 */

/**
 * @brief  Constructs a new DescribeDhcpOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDhcpOptionsRequest::DescribeDhcpOptionsRequest(const DescribeDhcpOptionsRequest &other)
    : EC2Request(new DescribeDhcpOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDhcpOptionsRequest object.
 */
DescribeDhcpOptionsRequest::DescribeDhcpOptionsRequest()
    : EC2Request(new DescribeDhcpOptionsRequestPrivate(EC2Request::DescribeDhcpOptionsAction, this))
{

}

bool DescribeDhcpOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDhcpOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDhcpOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeDhcpOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDhcpOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDhcpOptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeDhcpOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDhcpOptionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeDhcpOptionsRequest instance.
 */
DescribeDhcpOptionsRequestPrivate::DescribeDhcpOptionsRequestPrivate(
    const EC2Request::Action action, DescribeDhcpOptionsRequest * const q)
    : DescribeDhcpOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDhcpOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDhcpOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDhcpOptionsRequest instance.
 */
DescribeDhcpOptionsRequestPrivate::DescribeDhcpOptionsRequestPrivate(
    const DescribeDhcpOptionsRequestPrivate &other, DescribeDhcpOptionsRequest * const q)
    : DescribeDhcpOptionsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
