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

#include "describeservicesrequest.h"
#include "describeservicesrequest_p.h"
#include "describeservicesresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/**
 * @class  DescribeServicesRequest
 *
 * @brief  Implements Support DescribeServices requests.
 *
 * @see    SupportClient::describeServices
 */

/**
 * @brief  Constructs a new DescribeServicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeServicesRequest::DescribeServicesRequest(const DescribeServicesRequest &other)
    : SupportRequest(new DescribeServicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeServicesRequest object.
 */
DescribeServicesRequest::DescribeServicesRequest()
    : SupportRequest(new DescribeServicesRequestPrivate(SupportRequest::DescribeServicesAction, this))
{

}

bool DescribeServicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeServicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeServicesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SupportClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeServicesRequestPrivate
 *
 * @brief  Private implementation for DescribeServicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServicesRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeServicesRequest instance.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const SupportRequest::Action action, DescribeServicesRequest * const q)
    : DescribeServicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeServicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeServicesRequest instance.
 */
DescribeServicesRequestPrivate::DescribeServicesRequestPrivate(
    const DescribeServicesRequestPrivate &other, DescribeServicesRequest * const q)
    : DescribeServicesPrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
