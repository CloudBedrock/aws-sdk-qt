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

#include "deleteservicelinkedrolerequest.h"
#include "deleteservicelinkedrolerequest_p.h"
#include "deleteservicelinkedroleresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteServiceLinkedRoleRequest
 *
 * @brief  Implements CloudFront DeleteServiceLinkedRole requests.
 *
 * @see    CloudFrontClient::deleteServiceLinkedRole
 */

/**
 * @brief  Constructs a new DeleteServiceLinkedRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest(const DeleteServiceLinkedRoleRequest &other)
    : CloudFrontRequest(new DeleteServiceLinkedRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteServiceLinkedRoleRequest object.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest()
    : CloudFrontRequest(new DeleteServiceLinkedRoleRequestPrivate(CloudFrontRequest::DeleteServiceLinkedRoleAction, this))
{

}

bool DeleteServiceLinkedRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteServiceLinkedRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteServiceLinkedRoleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceLinkedRoleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceLinkedRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteServiceLinkedRoleRequestPrivate
 *
 * @brief  Private implementation for DeleteServiceLinkedRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceLinkedRoleRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public DeleteServiceLinkedRoleRequest instance.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const CloudFrontRequest::Action action, DeleteServiceLinkedRoleRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceLinkedRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceLinkedRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteServiceLinkedRoleRequest instance.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const DeleteServiceLinkedRoleRequestPrivate &other, DeleteServiceLinkedRoleRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
