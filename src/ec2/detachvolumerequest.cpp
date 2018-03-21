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

#include "detachvolumerequest.h"
#include "detachvolumerequest_p.h"
#include "detachvolumeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DetachVolumeRequest
 *
 * @brief  Implements EC2 DetachVolume requests.
 *
 * @see    EC2Client::detachVolume
 */

/**
 * @brief  Constructs a new DetachVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachVolumeResponse::DetachVolumeResponse(

/**
 * @brief  Constructs a new DetachVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachVolumeRequest::DetachVolumeRequest(const DetachVolumeRequest &other)
    : EC2Request(new DetachVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachVolumeRequest object.
 */
DetachVolumeRequest::DetachVolumeRequest()
    : EC2Request(new DetachVolumeRequestPrivate(EC2Request::DetachVolumeAction, this))
{

}

bool DetachVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DetachVolumeRequest::response(QNetworkReply * const reply) const
{
    return new DetachVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachVolumeRequestPrivate
 *
 * @brief  Private implementation for DetachVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachVolumeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DetachVolumeRequest instance.
 */
DetachVolumeRequestPrivate::DetachVolumeRequestPrivate(
    const EC2Request::Action action, DetachVolumeRequest * const q)
    : DetachVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachVolumeRequest instance.
 */
DetachVolumeRequestPrivate::DetachVolumeRequestPrivate(
    const DetachVolumeRequestPrivate &other, DetachVolumeRequest * const q)
    : DetachVolumePrivate(other, q)
{

}
