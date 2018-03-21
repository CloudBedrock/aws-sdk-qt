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

#include "unassignvolumerequest.h"
#include "unassignvolumerequest_p.h"
#include "unassignvolumeresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  UnassignVolumeRequest
 *
 * @brief  Implements OpsWorks UnassignVolume requests.
 *
 * @see    OpsWorksClient::unassignVolume
 */

/**
 * @brief  Constructs a new UnassignVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnassignVolumeResponse::UnassignVolumeResponse(

/**
 * @brief  Constructs a new UnassignVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnassignVolumeRequest::UnassignVolumeRequest(const UnassignVolumeRequest &other)
    : OpsWorksRequest(new UnassignVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnassignVolumeRequest object.
 */
UnassignVolumeRequest::UnassignVolumeRequest()
    : OpsWorksRequest(new UnassignVolumeRequestPrivate(OpsWorksRequest::UnassignVolumeAction, this))
{

}

bool UnassignVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnassignVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnassignVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UnassignVolumeRequest::response(QNetworkReply * const reply) const
{
    return new UnassignVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnassignVolumeRequestPrivate
 *
 * @brief  Private implementation for UnassignVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnassignVolumeRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UnassignVolumeRequest instance.
 */
UnassignVolumeRequestPrivate::UnassignVolumeRequestPrivate(
    const OpsWorksRequest::Action action, UnassignVolumeRequest * const q)
    : UnassignVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnassignVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnassignVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnassignVolumeRequest instance.
 */
UnassignVolumeRequestPrivate::UnassignVolumeRequestPrivate(
    const UnassignVolumeRequestPrivate &other, UnassignVolumeRequest * const q)
    : UnassignVolumePrivate(other, q)
{

}
