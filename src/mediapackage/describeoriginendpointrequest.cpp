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

#include "describeoriginendpointrequest.h"
#include "describeoriginendpointrequest_p.h"
#include "describeoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeOriginEndpointRequest
 *
 * \brief The DescribeOriginEndpointRequest class encapsulates MediaPackage DescribeOriginEndpoint requests.
 *
 * \ingroup MediaPackage
 *
 *
 * \sa MediaPackageClient::describeOriginEndpoint
 */

/*!
 * @brief  Constructs a new DescribeOriginEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOriginEndpointRequest::DescribeOriginEndpointRequest(const DescribeOriginEndpointRequest &other)
    : MediaPackageRequest(new DescribeOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeOriginEndpointRequest object.
 */
DescribeOriginEndpointRequest::DescribeOriginEndpointRequest()
    : MediaPackageRequest(new DescribeOriginEndpointRequestPrivate(MediaPackageRequest::DescribeOriginEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOriginEndpointRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeOriginEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOriginEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOriginEndpointResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeOriginEndpointRequestPrivate
 *
 * @brief  Private implementation for DescribeOriginEndpointRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeOriginEndpointRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public DescribeOriginEndpointRequest instance.
 */
DescribeOriginEndpointRequestPrivate::DescribeOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, DescribeOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeOriginEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOriginEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOriginEndpointRequest instance.
 */
DescribeOriginEndpointRequestPrivate::DescribeOriginEndpointRequestPrivate(
    const DescribeOriginEndpointRequestPrivate &other, DescribeOriginEndpointRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
