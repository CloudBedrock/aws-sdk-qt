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

#include "describedirectoriesrequest.h"
#include "describedirectoriesrequest_p.h"
#include "describedirectoriesresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeDirectoriesRequest
 *
 * @brief  Implements DirectoryService DescribeDirectories requests.
 *
 * @see    DirectoryServiceClient::describeDirectories
 */

/**
 * @brief  Constructs a new DescribeDirectoriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDirectoriesRequest::DescribeDirectoriesRequest(const DescribeDirectoriesRequest &other)
    : DirectoryServiceRequest(new DescribeDirectoriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDirectoriesRequest object.
 */
DescribeDirectoriesRequest::DescribeDirectoriesRequest()
    : DirectoryServiceRequest(new DescribeDirectoriesRequestPrivate(DirectoryServiceRequest::DescribeDirectoriesAction, this))
{

}

bool DescribeDirectoriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDirectoriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDirectoriesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDirectoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectoriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDirectoriesRequestPrivate
 *
 * @brief  Private implementation for DescribeDirectoriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoriesRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DescribeDirectoriesRequest instance.
 */
DescribeDirectoriesRequestPrivate::DescribeDirectoriesRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeDirectoriesRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectoriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDirectoriesRequest instance.
 */
DescribeDirectoriesRequestPrivate::DescribeDirectoriesRequestPrivate(
    const DescribeDirectoriesRequestPrivate &other, DescribeDirectoriesRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
