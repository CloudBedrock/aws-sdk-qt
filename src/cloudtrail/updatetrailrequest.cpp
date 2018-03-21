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

#include "updatetrailrequest.h"
#include "updatetrailrequest_p.h"
#include "updatetrailresponse.h"
#include "cloudtrailrequest_p.h"

namespace AWS {
namespace CloudTrail {

/**
 * @class  UpdateTrailRequest
 *
 * @brief  Implements CloudTrail UpdateTrail requests.
 *
 * @see    CloudTrailClient::updateTrail
 */

/**
 * @brief  Constructs a new UpdateTrailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTrailResponse::UpdateTrailResponse(

/**
 * @brief  Constructs a new UpdateTrailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTrailRequest::UpdateTrailRequest(const UpdateTrailRequest &other)
    : CloudTrailRequest(new UpdateTrailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTrailRequest object.
 */
UpdateTrailRequest::UpdateTrailRequest()
    : CloudTrailRequest(new UpdateTrailRequestPrivate(CloudTrailRequest::UpdateTrailAction, this))
{

}

bool UpdateTrailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTrailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTrailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * UpdateTrailRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTrailRequestPrivate
 *
 * @brief  Private implementation for UpdateTrailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrailRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public UpdateTrailRequest instance.
 */
UpdateTrailRequestPrivate::UpdateTrailRequestPrivate(
    const CloudTrailRequest::Action action, UpdateTrailRequest * const q)
    : UpdateTrailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTrailRequest instance.
 */
UpdateTrailRequestPrivate::UpdateTrailRequestPrivate(
    const UpdateTrailRequestPrivate &other, UpdateTrailRequest * const q)
    : UpdateTrailPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace AWS
