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

#include "recordactivitytaskheartbeatrequest.h"
#include "recordactivitytaskheartbeatrequest_p.h"
#include "recordactivitytaskheartbeatresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RecordActivityTaskHeartbeatRequest
 *
 * @brief  Implements SWF RecordActivityTaskHeartbeat requests.
 *
 * @see    SWFClient::recordActivityTaskHeartbeat
 */

/**
 * @brief  Constructs a new RecordActivityTaskHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RecordActivityTaskHeartbeatResponse::RecordActivityTaskHeartbeatResponse(

/**
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RecordActivityTaskHeartbeatRequest::RecordActivityTaskHeartbeatRequest(const RecordActivityTaskHeartbeatRequest &other)
    : SWFRequest(new RecordActivityTaskHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequest object.
 */
RecordActivityTaskHeartbeatRequest::RecordActivityTaskHeartbeatRequest()
    : SWFRequest(new RecordActivityTaskHeartbeatRequestPrivate(SWFRequest::RecordActivityTaskHeartbeatAction, this))
{

}

bool RecordActivityTaskHeartbeatRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RecordActivityTaskHeartbeatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RecordActivityTaskHeartbeatResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RecordActivityTaskHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new RecordActivityTaskHeartbeatResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RecordActivityTaskHeartbeatRequestPrivate
 *
 * @brief  Private implementation for RecordActivityTaskHeartbeatRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RecordActivityTaskHeartbeatRequest instance.
 */
RecordActivityTaskHeartbeatRequestPrivate::RecordActivityTaskHeartbeatRequestPrivate(
    const SWFRequest::Action action, RecordActivityTaskHeartbeatRequest * const q)
    : RecordActivityTaskHeartbeatPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RecordActivityTaskHeartbeatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RecordActivityTaskHeartbeatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RecordActivityTaskHeartbeatRequest instance.
 */
RecordActivityTaskHeartbeatRequestPrivate::RecordActivityTaskHeartbeatRequestPrivate(
    const RecordActivityTaskHeartbeatRequestPrivate &other, RecordActivityTaskHeartbeatRequest * const q)
    : RecordActivityTaskHeartbeatPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS
