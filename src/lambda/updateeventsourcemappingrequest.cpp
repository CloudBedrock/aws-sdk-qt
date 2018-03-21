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

#include "updateeventsourcemappingrequest.h"
#include "updateeventsourcemappingrequest_p.h"
#include "updateeventsourcemappingresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  UpdateEventSourceMappingRequest
 *
 * @brief  Implements Lambda UpdateEventSourceMapping requests.
 *
 * @see    LambdaClient::updateEventSourceMapping
 */

/**
 * @brief  Constructs a new UpdateEventSourceMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEventSourceMappingResponse::UpdateEventSourceMappingResponse(

/**
 * @brief  Constructs a new UpdateEventSourceMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEventSourceMappingRequest::UpdateEventSourceMappingRequest(const UpdateEventSourceMappingRequest &other)
    : LambdaRequest(new UpdateEventSourceMappingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEventSourceMappingRequest object.
 */
UpdateEventSourceMappingRequest::UpdateEventSourceMappingRequest()
    : LambdaRequest(new UpdateEventSourceMappingRequestPrivate(LambdaRequest::UpdateEventSourceMappingAction, this))
{

}

bool UpdateEventSourceMappingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEventSourceMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEventSourceMappingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * UpdateEventSourceMappingRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEventSourceMappingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEventSourceMappingRequestPrivate
 *
 * @brief  Private implementation for UpdateEventSourceMappingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEventSourceMappingRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public UpdateEventSourceMappingRequest instance.
 */
UpdateEventSourceMappingRequestPrivate::UpdateEventSourceMappingRequestPrivate(
    const LambdaRequest::Action action, UpdateEventSourceMappingRequest * const q)
    : UpdateEventSourceMappingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEventSourceMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEventSourceMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEventSourceMappingRequest instance.
 */
UpdateEventSourceMappingRequestPrivate::UpdateEventSourceMappingRequestPrivate(
    const UpdateEventSourceMappingRequestPrivate &other, UpdateEventSourceMappingRequest * const q)
    : UpdateEventSourceMappingPrivate(other, q)
{

}

} // namespace Lambda
} // namespace AWS
