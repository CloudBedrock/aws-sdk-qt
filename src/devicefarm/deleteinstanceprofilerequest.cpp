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

#include "deleteinstanceprofilerequest.h"
#include "deleteinstanceprofilerequest_p.h"
#include "deleteinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  DeleteInstanceProfileRequest
 *
 * @brief  Implements DeviceFarm DeleteInstanceProfile requests.
 *
 * @see    DeviceFarmClient::deleteInstanceProfile
 */

/**
 * @brief  Constructs a new DeleteInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInstanceProfileRequest::DeleteInstanceProfileRequest(const DeleteInstanceProfileRequest &other)
    : DeviceFarmRequest(new DeleteInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteInstanceProfileRequest object.
 */
DeleteInstanceProfileRequest::DeleteInstanceProfileRequest()
    : DeviceFarmRequest(new DeleteInstanceProfileRequestPrivate(DeviceFarmRequest::DeleteInstanceProfileAction, this))
{

}

bool DeleteInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInstanceProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for DeleteInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteInstanceProfileRequest instance.
 */
DeleteInstanceProfileRequestPrivate::DeleteInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInstanceProfileRequest instance.
 */
DeleteInstanceProfileRequestPrivate::DeleteInstanceProfileRequestPrivate(
    const DeleteInstanceProfileRequestPrivate &other, DeleteInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
