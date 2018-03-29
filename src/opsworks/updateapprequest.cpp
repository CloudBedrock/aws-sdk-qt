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

#include "updateapprequest.h"
#include "updateapprequest_p.h"
#include "updateappresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  UpdateAppRequest
 *
 * @brief  Implements OpsWorks UpdateApp requests.
 *
 * @see    OpsWorksClient::updateApp
 */

/**
 * @brief  Constructs a new UpdateAppRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAppRequest::UpdateAppRequest(const UpdateAppRequest &other)
    : OpsWorksRequest(new UpdateAppRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAppRequest object.
 */
UpdateAppRequest::UpdateAppRequest()
    : OpsWorksRequest(new UpdateAppRequestPrivate(OpsWorksRequest::UpdateAppAction, this))
{

}

bool UpdateAppRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAppResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAppResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAppRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAppResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAppRequestPrivate
 *
 * @brief  Private implementation for UpdateAppRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAppRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UpdateAppRequest instance.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const OpsWorksRequest::Action action, UpdateAppRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAppRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAppRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAppRequest instance.
 */
UpdateAppRequestPrivate::UpdateAppRequestPrivate(
    const UpdateAppRequestPrivate &other, UpdateAppRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
