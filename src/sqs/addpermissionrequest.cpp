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

#include "addpermissionrequest.h"
#include "addpermissionrequest_p.h"
#include "addpermissionresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/**
 * @class  AddPermissionRequest
 *
 * @brief  Implements SQS AddPermission requests.
 *
 * @see    SQSClient::addPermission
 */

/**
 * @brief  Constructs a new AddPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddPermissionRequest::AddPermissionRequest(const AddPermissionRequest &other)
    : SQSRequest(new AddPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddPermissionRequest object.
 */
AddPermissionRequest::AddPermissionRequest()
    : SQSRequest(new AddPermissionRequestPrivate(SQSRequest::AddPermissionAction, this))
{

}

bool AddPermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddPermissionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SQSClient::send
 */
QtAws::Core::AwsAbstractResponse * AddPermissionRequest::response(QNetworkReply * const reply) const
{
    return new AddPermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddPermissionRequestPrivate
 *
 * @brief  Private implementation for AddPermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddPermissionRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public AddPermissionRequest instance.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const SQSRequest::Action action, AddPermissionRequest * const q)
    : SQSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddPermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddPermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddPermissionRequest instance.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const AddPermissionRequestPrivate &other, AddPermissionRequest * const q)
    : SQSRequestPrivate(other, q)
{

}

} // namespace SQS
} // namespace QtAws
